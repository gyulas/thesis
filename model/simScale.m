
%load('slab_and_radiator_and_mpc.mat')

C=mpc(tf_19_toMPC,1800,48,1);
C.MV = struct('Min',{0;0},'Max',1,'RateMin',-1,'RateMax',1);
C.OV = struct('Min',0,'Max',320,'ScaleFactor',1);
C.D.ScaleFactor=1;

%% C1
C1=C;
C1.Weights.OutputVariables = {0.075};
C1.Weights.ManipulatedVariables = {[2,0.5;0.5,0.5]};
C1.Weights.ManipulatedVariablesRate = {[4,2;1.5,4]};

%% C2 -- csak radiatorozik
C2=C;
C2.Weights.OutputVariables = {0.3};
C2.Weights.ManipulatedVariables = {[0.2,0;0,0.1]};
C2.Weights.ManipulatedVariablesRate = {[20,0;0,5]};

%% C3 -- csak radiatorozik es fos
C3=C;
C3.Weights.OutputVariables = {0.1};
C3.Weights.ManipulatedVariables = {[0.2,0.005;0.005,0.005]};
C3.Weights.ManipulatedVariablesRate = {[10,2.5;2.5,1]};

%% C4 -- 0.01-es hiba, alacsony energia, mindketto beavatkozo
C4=C;
C4.Weights.OutputVariables = {1.5}; % akar felmehet 0.145-ig is
C4.Weights.ManipulatedVariables = {[1,0.3;0.3,0.7]};
C4.Weights.ManipulatedVariablesRate = {[500,0;0,100]};

%% C5 -- nagy komfort (referencia kovetes) sok radiatorral
C5=C;
C5.Weights.OutputVariables = {0.5}; % akar felmehet 0.145-ig is
C5.Weights.ManipulatedVariables = {[1,0.5;0.125,0.2]};
C5.Weights.ManipulatedVariablesRate = {[10,5;3,10]};


%%

%XNominal=[9000;9000;9000;9000;6000;6000;3000;0];
%C.Model.Nominal=struct('X',XNominal,'DX',XNominal,'Y',YNominal);
Ts=1800;
Tstop = 3600*24*10;                               % simulation time
Tf = round(Tstop/Ts);                     % number of simulation steps
r = 20*ones(Tf,1);                           % reference signal


v1 = [zeros(Tf/3,1) ;zeros(Tf/3,1); ones(Tf/3,1)];
v2 = [zeros(Tf/3,1) ;zeros(Tf/3,1); ones(Tf/3,1)]; 
v3 = [zeros(Tf/3,1) ;ones(Tf/3,1); zeros(Tf/3,1)];       % measured disturbance signal
v= [v1 v2];

% t_sq=0:Ts:(Tstop-1);
% v_sq=(2*square(2*pi/3600/10*t_sq,30)-2)';
% 
% Run the closed-loop simulation and plot results.
[y_1,t_1,u_1,xp_1] = sim(C,Tf,r,v1);

plot(0:Tf-1,y_1)

plot(0:Tf-1,u_1)


%% analysis

%% C4
plot(C4Last10.time, C4Last10.signals(2).values)
%%
C4Last10=processHeatData(C4Last10);

C1Last10=processHeatData(C1Last10);

C2Last10=processHeatData(C2Last10);

CLast10=processHeatData(CLast10);

% elterest szeretnek szamolni



