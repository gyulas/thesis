

C=mpc(tf_19_toMPC,1800);
C.MV = struct('Min',0,'Max',1,'RateMin',-10,'RateMax',10);

%XNominal=[9000;9000;9000;9000;6000;6000;3000;0];
%C.Model.Nominal=struct('X',XNominal,'DX',XNominal,'Y',YNominal);
Tstop = 3600*24*10;                               % simulation time
Tf = round(Tstop/Ts);                     % number of simulation steps
r = 20*ones(Tf,1);                           % reference signal


v2 = [zeros(Tf/3,1) ;zeros(Tf/3,1); ones(Tf/3,1)];
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