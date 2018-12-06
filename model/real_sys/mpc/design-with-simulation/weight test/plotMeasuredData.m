% Y WEIGHT SENSITIVITY
load('mpc_param_var05_yweight.mat') %Ts=300s for this data

f1=figure(1);
f1.Position= [680 558 250 420];
plotMPCWeight(mpc_param_var05_1)
saveas(f1,'mpc-wy-1','epsc')

f2=figure(2);
f2.Position= [680 558 250 420];
plotMPCWeight(mpc_param_var05_2)
saveas(f2,'mpc-wy-2','epsc')

f3=figure(3);
f3.Position= [680 558 250 420];
plotMPCWeight(mpc_param_var05_5)
saveas(f3,'mpc-wy-5','epsc')


% U WEIGHT SENSITIVITY
load('mpc_param_var05_uweight.mat') %Ts=300s for this data

f1=figure(1);
f1.Position= [680 558 250 420];
plotMPCWeight(mpc_param_var_05_003)
saveas(f1,'mpc-wu-003','epsc')

f2=figure(2);
f2.Position= [680 558 250 420];
plotMPCWeight(mpc_param_var_05_01)
saveas(f2,'mpc-wu-01','epsc')

f3=figure(3);
f3.Position= [680 558 250 420];
plotMPCWeight(mpc_param_var_05_02)
saveas(f3,'mpc-wu-02','epsc')


% DU WEIGHT SENSITIVITY
%load('mpc_param_var05_duweight.mat') %Ts=300s for this data

% f1=figure(1);
% f1.Position= [680 558 250 420];
% plotMPCWeight(mpc_param_var05_1)
% saveas(f1,'mpc-wy-1','epsc')
% 
% f2=figure(2);
% f2.Position= [680 558 250 420];
% plotMPCWeight(mpc_param_var05_2)
% saveas(f2,'mpc-wy-2','epsc')
% 
% f3=figure(3);
% f3.Position= [680 558 250 420];
% plotMPCWeight(mpc_param_var05_5)
% saveas(f3,'mpc-wy-3','epsc')