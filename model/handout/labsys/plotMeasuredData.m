% A script LaTeX dokumentumba illeszthet� .eps file-okat gener�l m�r�si
% adatokb�l.


% A m�r�seket egyszer� Scope blokk gy�jt�tte. Az udp_conn.slx
% blokkban tal�lhat� scope kimenet�t dolgozza fel. Az adatsorokban
% timestamp �s MPC s�lyok is tal�lhat�k, ezeket figyelmen k�v�l hagyjuk.

% A 

% Y WEIGHT SENSITIVITY
load('mpc_param_var05_yweight.mat') %Ts=300s for this data
% YLIM BETWEEN 15 AND 20
ylim= [15 20];

f1=figure(1);
f1.Position= [680 558 250 420];
plotMPCWeight(mpc_param_var05_1,ylim)
saveas(f1,'mpc-wy-1','epsc')

f2=figure(2);
f2.Position= [680 558 250 420];
plotMPCWeight(mpc_param_var05_2,ylim)
saveas(f2,'mpc-wy-2','epsc')

f3=figure(3);
f3.Position= [680 558 250 420];
plotMPCWeight(mpc_param_var05_5,ylim)
saveas(f3,'mpc-wy-5','epsc')


% U WEIGHT SENSITIVITY
load('mpc_param_var05_uweight.mat') %Ts=300s for this data
% YLIM BETWEEN 10 AND 22
ylim= [10 22];

f1=figure(1);
f1.Position= [680 558 250 420];
plotMPCWeight(mpc_param_var_05_u005,ylim)
saveas(f1,'mpc-wu-005','epsc')

f2=figure(2);
f2.Position= [680 558 250 420];
plotMPCWeight(mpc_param_var_05_u05, ylim)
saveas(f2,'mpc-wu-05','epsc')

f3=figure(3);
f3.Position= [680 558 250 420];
%under lower limit
plotMPCWeight(mpc_param_var_05_u20, ylim)
saveas(f3,'mpc-wu-20','epsc')


% DU WEIGHT SENSITIVITY
load('mpc_param_var05_duweight.mat') 
% YLIM BETWEEN 15 AND 20.5
ylim= [15 20.5];

f1=figure(1);
f1.Position= [680 558 250 420];
plotMPCWeight(mpc_param_var_05_du10,ylim)
saveas(f1,'mpc-wdu-10','epsc')

f2=figure(2);
f2.Position= [680 558 250 420];
plotMPCWeight(mpc_param_var_05_du50,ylim)
saveas(f2,'mpc-wdu-50','epsc')

f3=figure(3);
f3.Position= [680 558 250 420];
plotMPCWeight(mpc_param_var_05_du100,ylim)
saveas(f3,'mpc-wdu-100','epsc')