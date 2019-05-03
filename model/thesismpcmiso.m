%% Control of a Multi-Input Single-Output Plant
% This example shows how to design model predictive controller with one
% measured output, one manipulated variable, one measured disturbance, and
% one unmeasured disturbance in a typical workflow.

% Copyright 1990-2014 The MathWorks, Inc.

%% BASIC INITIALIZATION - DO NOT MODIFY
% The discrete time linear open-loop dynamic model is defined below.
        % sys = ss(tf({1,1,1},{[1 .5 1],[1 1],[.7 .5 1]}));
        % model = c2d(sys,Ts);

load('C:\Users\Gyulai László\Documents\thesis másolata\model\subsystems\mpc_model_and_initial_controller.mat')
model=ss(tf(tf_valve_and_t_e));
Ts = 60;                                % sampling time

% Design MPC Controller
% Define type of input signals: the first signal is a manipulated variable,
% the second signal is a measured disturbance.
model.InputName{1,1}='valve';
model.InputName{2,1}='T_e';
model = setmpcsignals(model,'MV',1,'MD',2);

% Create the controller object with sampling period, prediction and control
% horizons:
horizonPred=1000; %23000/Ts
mpcobj = mpc(model,Ts,horizonPred,1);

%mpcobj.ManipulatedVariables.ScaleFactor = 25;
mpcobj.DisturbanceVariables.ScaleFactor = 30;
mpcobj.OutputVariables.ScaleFactor = 30;

mpcobj.Weights.OutputVariables = {15};
mpcobj.Weights.ManipulatedVariables = {0.03};
mpcobj.Weights.ManipulatedVariablesRate = {50};

% Define constraints on the manipulated variable. 
mpcobj.MV = struct('Min',0,'Max',1,'RateMin',-10,'RateMax',10);

%% BASIC SIMULATION - DO NOT MODIFY
% Simulate Closed-Loop Response Using the SIM Command
% Specify simulation parameters.
Tstop = 3600*24*30;                               % simulation time
Tf = round(Tstop/Ts);                     % number of simulation steps
r = 1*ones(Tf,1);                           % reference signal
v = [zeros(Tf/3,1);ones(2*Tf/3,1)];       % measured disturbance signal

t_sq=0:Ts:(Tstop-1);
v_sq=(2*square(2*pi/3600/10*t_sq,30)-2)';

% Run the closed-loop simulation and plot results.
[y_1,t_1,u_1,xp_1] = sim(mpcobj,Tf,r,v_sq);

%% mpcmove test
MPCopt = mpcmoveopt;
MPCopt.OutputWeights = 50;
MPCopt.MVWeights = 0.01;
MPCopt.MVRateWeights = 1;

MPCopt.MVMin = 0;
MPCopt.MVMax = 1;
x=mpcstate(mpcobj);
for i = 1:Tf
    % simulated plant and predictive model are identical
    y(i) = [0.0025 0 0 0 0.0677 -0.0677 0]*x.Plant;
    if i == 5
    	MPCopt.MVMax = 1;
    end
    [u(i), info(i)] = mpcmove(mpcobj,x,y(i),r,[],MPCopt);
end


%%
% Specify disturbance and noise signals in simulation option object.
SimOptions = mpcsimopt(mpcobj);
SimOptions.RefLookAhead='on';
SimOptions.MDLookAhead='on';
%d = [zeros(2*Tf/3,1);-0.5*ones(Tf/3,1)];        
%SimOptions.Unmeas = d;                          % unmeasured input disturbance signal
%SimOptions.OutputNoise=.001*(rand(Tf,1)-.5);    % output measurement noise
%SimOptions.InputNoise=.05*(rand(Tf,1)-.5);      % noise on manipulated variables
%
% Run the closed-loop simulation and save the results to workspace.
[y_2,t_2,u_2,xp_2] = sim(mpcobj,Tf,r,v_sq,SimOptions);
%%
% Plot results.
figure
subplot(311)
plot(0:Tf-1,y_1,'DisplayName','Basic')
hold on
%plot(0:Tf-1,y_2,'DisplayName','Preview disturbance')
plot(0:Tf-1,r,'DisplayName','Reference')
title('Output');
legend('show')

grid
subplot(312)
%plot(0:Tf-1,u_1,0:Tf-1,u_2)
plot(0:Tf-1,u_1,'DisplayName','Basic')
hold on
%plot(0:Tf-1,u_2,'DisplayName','Preview disturbance')
legend('show')
title('Valve input');
grid


subplot(313)
plot(0:Tf-1,v_sq,'DisplayName','T_{e} external temperature')
legend('show')
title('Measured disturbance');
grid

%% Simulate Closed-Loop Response with Model Mismatch
% Test the robustness of the MPC controller against a model mismatch.
% Assume the true plant is below:
simModel = ss(tf({1,1,1},{[1 .8 1],[1 2],[.6 .6 1]}));
simModel = setmpcsignals(simModel,'MV',1,'MD',2,'UD',3);
simModel = struct('Plant',simModel);
simModel.Nominal.Y = 0.1; % The nominal value of the output of the true plant is 0.1
simModel.Nominal.X = -.1*[1 1 1 1 1];
%%
% Create option object.
SimOptions.Model = simModel;
SimOptions.plantinit = [0.1 0 -0.1 0 .05];  % Initial state of the true plant
SimOptions.OutputNoise = [];                % remove output measurement noise
SimOptions.InputNoise = [];                 % remove noise on manipulated variables
% Run the closed-loop simulation and plot results.
sim(mpcobj,Tf,r,v,SimOptions);

%% Soften Constraints
% Relax the constraints on manipulated variables from hard to soft.
mpcobj.MV.MinECR = 1;  
mpcobj.MV.MaxECR = 1;
%%
% Define an output constraint.
mpcobj.OV.Max = 1.1;
%%
% Run a new closed-loop simulation.
sim(mpcobj,Tf,r,v);
%%
% MV constraint has been slightly violated while MO constraint has been
% violated more. Penalize more output constraint and rerun the simulation.
mpcobj.OV.MaxECR = 0.001;  % The closer to zero, the harder the constraint
sim(mpcobj,Tf,r,v);
%%
% Now MO constraint has been slightly violated while MV constraint has been
% violated more as expected.

%% Change Kalman Gains Used in the Built-In State Estimator
% Model Predictive Control Toolbox(TM) provides a default Kalman filter
% to estimate the state of plant, disturbance, and noise models. You can
% change the Kalman gains.
%% 
% First retrieve the default Kalman gains and state-space matrices.
[L,M,A1,Cm1] = getEstimator(mpcobj);
%%
% The default observer poles are:
e = eig(A1-A1*M*Cm1);
fprintf('\nDefault observer poles: [%s]\n',sprintf('%5.4f ',e));
%%
% Design a new state estimator by pole-placement.
poles = [.8 .75 .7 .85 .6 .81];
L = place(A1',Cm1',poles)';
M = A1\L;
setEstimator(mpcobj,L,M);

%% Simulate Open-Loop Response
% Test the behavior of plant in open-loop using the SIM command. Set the
% 'OpenLoop' flag on, and provide the sequence of manipulated variables
% that excite the system.
SimOptions.OpenLoop = 'on';
SimOptions.MVSignal = sin((0:Tf-1)'/10); 
%%
% As the reference signal will be ignored, we can avoid specifying it.
sim(mpcobj,Tf,[],v,SimOptions);

%% Examine Steady-State Offset
% To examine whether the MPC controller will be able to reject constant
% output disturbances and/or track constant set-point with zero offsets in
% steady-state, compute the DC gain from output disturbances to controlled
% outputs using the CLOFFSET command.
DC = cloffset(mpcobj);
fprintf('DC gain from output disturbance to output = %5.8f (=%g) \n',DC,DC);
%%
% A zero gain means that the output will track the desired set-point.

%% Simulate MPC with MPCMOVE
% First get the discrete-time state-space matrices of the plant.
[A,B,C,D] = ssdata(model);
Tstop = 5;                  % Simulation time
x = [0 0 0 0 0]';           % Initial state of the plant
xmpc = mpcstate(mpcobj);    % Initial state of the MPC controller
r = 1;                      % Output reference signal
%%
% Store the closed-loop MPC trajectories in arrays YY,UU,XX.
YY=[];
UU=[];
XX=[];
%%
% Create simulation loop
for t=0:round(Tstop/Ts)-1
    % Store states
    XX = [XX,x]; %#ok<*AGROW>
    % Define measured disturbance signal
    v = 0;
    if t*Ts>=10,
        v = 1;
    end
    % Define unmeasured disturbance signal
    d = 0;
    if t*Ts>=20,
       d = -0.5;
    end
    % Plant equations: output update (no feedthrough from MV to Y)
    y = C*x + D(:,2)*v + D(:,3)*d;
    YY = [YY,y];
    % Compute MPC action
    u = mpcmove(mpcobj,xmpc,y,r,v);
    % Plant equations: state update
    x = A*x + B(:,1)*u + B(:,2)*v + B(:,3)*d;
    UU = [UU,u];
end
%%
% Plot results.
figure
subplot(211)
plot(0:Ts:Tstop-Ts,YY)
grid
title('Output');
subplot(212)
plot(0:Ts:Tstop-Ts,UU)
grid
title('Input');
%%
% If at any time during the simulation you want to check the optimal
% predicted trajectories, it can be returned by MPCMOVE as well. Assume
% you want to start from the current state and have a set-point change to
% 0.5, and assume the measured disturbance is gone.
r = 0.5;
v = 0;
[~,Info] = mpcmove(mpcobj,xmpc,y,r,v);
%%
% We now extract the optimal predicted trajectories.
topt = Info.Topt;
yopt = Info.Yopt;
uopt = Info.Uopt;
figure
subplot(211)
stairs(topt,yopt);
title('Optimal sequence of predicted outputs')
grid
subplot(212)
stairs(topt,uopt);
title('Optimal sequence of manipulated variables')
grid

%% Linear Representation of MPC Controller
% When the constraints are not active, MPC controller behaves like a linear
% controller.  You can get the state-space form of the MPC controller.
LTI = ss(mpcobj,'rv');
%%
% Get state-space matrices of linearized controller.
[AL,BL,CL,DL] = ssdata(LTI);
%%
% Simulate linear MPC closed-loop system and compare the linearized MPC 
% controller with the original MPC controller with constraints turned off.
mpcobj.MV = [];           % No input constraints
mpcobj.OV = [];           % No output constraints
Tstop = 5;                %Simulation time
xL = zeros(size(BL,1),1); % Initial state of linearized MPC controller
x = [0 0 0 0 0]';         % Initial state of plant
y = 0;                    % Initial measured output
r = 1;                    % Output reference set-point
u = 0;                    % Previous input command
YY = [];
XX = [];
xmpc = mpcstate(mpcobj);  
for t = 0:round(Tstop/Ts)-1
    YY = [YY,y];
    XX = [XX,x];
    v = 0;
    if t*Ts>=10,
        v = 1;
    end
    d = 0;
    if t*Ts>=20,
        d = -0.5;
    end
    uold = u;
    % Compute the linear MPC control action
    u = CL*xL+DL*[y;r;v];
    % Compare the input move with the one provided by MPCMOVE
    uMPC = mpcmove(mpcobj,xmpc,y,r,v);
    dispStr(t+1) = {sprintf('t=%5.2f, u=%7.4f (provided by LTI), u=%7.4f (provided by MPCOBJ)',t*Ts,u,uMPC)}; %#ok<*SAGROW>
    % Update plant equations
    x = A*x + B(:,1)*u + B(:,2)*v + B(:,3)*d;
    % Update controller equations
    xL = AL*xL + BL*[y;r;v];
    % Update output equations
    y = C*x + D(:,1)*u + D(:,2)*v + D(:,3)*d;
end
% Display results.
for t=0:round(Tstop/Ts)-1,
    disp(dispStr{t+1});
end
% Plot results.
figure
plot(0:Ts:Tstop-Ts,YY)
grid
%%
% Running a closed-loop where all constraints are turned off is easy using
% SIM. We just specify an option in the SimOptions structure:
SimOptions = mpcsimopt(mpcobj);
SimOptions.Constr = 'off';    % Remove all MPC constraints
SimOptions.Unmeas = d;        % unmeasured input disturbance
sim(mpcobj,Tf,r,v,SimOptions);

%% Simulate Using Simulink(R)
% To run this example, Simulink(R) is required.
if ~mpcchecktoolboxinstalled('simulink')
    disp('Simulink(R) is required to run this part of the example.')
    return
end
% Recreate MPC controller.
mpcobj = mpc(model,Ts,10,3);
mpcobj.MV = struct('Min',0,'Max',1,'RateMin',-10,'RateMax',10);
mpcobj.Model.Disturbance = tf(sqrt(1000),[1 0]); 
%%
% The continuous-time plant to be controlled has the following state-space
% realization:
[A,B,C,D] = ssdata(sys);
%%
% Now simulate closed-loop MPC in Simulink.
mdl1 = 'mpc_miso';
open_system(mdl1)
sim(mdl1);
%% 
% Next, you run a simulation with sinusoidal output noise. Assume output
% measurements are affected by a sinusoidal measurement noise of frequency
% 0.1 Hz.  You want to inform the MPC object about this so that state
% estimates can be improved.
omega = 2*pi/10;
mpcobj.Model.Noise = 0.5*tf(omega^2,[1 0 omega^2]);
% Also revise the MPC design.
mpcobj.Model.Disturbance = tf(0.1); % Model for unmeasured disturbance = white Gaussian noise with zero mean and variance 0.1
mpcobj.weights = struct('MV',0,'MVRate',0.1,'OV',.005);
mpcobj.predictionhorizon = 40;
mpcobj.controlhorizon = 3;
%Simulation time
Tstop=150;                      
mdl2 = 'mpc_misonoise';
open_system(mdl2)   % Open new Simulink(R) Model
sim(mdl2);          % Start Simulation

%%
bdclose(mdl1);       
bdclose(mdl2);
