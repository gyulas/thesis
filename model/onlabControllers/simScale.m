
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
plotTemp(CLast10)
% saveas(f,'C5Last10ClosedLoop','epsc')

plotTemp(C1Last10)
plotTemp(C2Last10)
plotTemp(C4Last10)
plotTemp(C5Last10)
%% C4
plot(C4Last10.time, C4Last10.signals(2).values)
%%
C4Last10=processHeatData(C4Last10);

C5Last10=processHeatData(C5Last10);

C1Last10=processHeatData(C1Last10);

C2Last10=processHeatData(C2Last10);

CLast10=processHeatData(CLast10);

%%
% Komfort violation:
f1=figure;
title('K�lts�gek �s komfort reference preview mellett')    

set(f1, 'OuterPosition', [672 441 576 622]);

hManipulated=subplot(2,1,1);
set(hManipulated, 'OuterPosition', [0,0.65, 1, .35]);

ComfortViolation.max=[CLast10.signals(4).values(4,9) ...
                        C1Last10.signals(4).values(4,9) ...
                        C2Last10.signals(4).values(4,9) ...
                        C4Last10.signals(4).values(4,9) ...
                        C5Last10.signals(4).values(4,9)];                        
bar([1 2 3 4 5], ComfortViolation.max)
grid on
title('Hibaintegr�l')    
ylab=get(gca,'YLabel');
ylab.String={'hiba abszol�t �sszege';'[Celsius fok * �ra]'};
set(gca,'YLabel',ylab)


lim=get(gca,'YLim');
lim(1)=0;
lim(2)=60;
set(gca,'YLim',lim);

hManipulated=subplot(2,1,2);
set(hManipulated, 'OuterPosition', [0,0, 1, .65]);

% Energia:
RequiredPower.max=[CLast10.signals(4).values(1,8) ...
                        C1Last10.signals(4).values(1,8) ...
                        C2Last10.signals(4).values(1,8) ...
                        C4Last10.signals(4).values(1,8) ...
                        C5Last10.signals(4).values(1,8)];
EnergyConsumption.sum=[CLast10.signals(4).values(4,8) ...
                        C1Last10.signals(4).values(4,8) ...
                        C2Last10.signals(4).values(4,8) ...
                        C4Last10.signals(4).values(4,8) ...
                        C5Last10.signals(4).values(4,8)];
bar([1 2 3 4 5], RequiredPower.max)
hold on
grid on
bar([1 2 3 4 5], EnergyConsumption.sum)
title('K�lts�gek')


legend('Peak Demand [W]','EnergyConsumption [kJ]')
leg=get(gca, 'Legend');
leg.Position = [0.5801 0.5368 0.3250 0.0701];


lim=get(gca,'YLim');
lim(1)=0;
lim(2)=850;
set(gca,'YLim',lim);

set(gca,'XTickLabel',{'CLast10','C1Last10','C2Last10','C4Last10','C5Last10'})
xlab=get(gca,'XLabel');
xlab.String='id� (nap)';
set(gca,'XLabel',xlab)

shg
%%
%saveas(f1,'compareControllerNoDisturbancePreview','epsc')


%% Preview nelkul erdemes
