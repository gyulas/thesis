function plotMPCWeight2(mpcWeight,ylim)

hTemp=subplot(2,1,1);
% set(hTemp, 'OuterPosition', [0,0.60, 1, .34]);
time=mpcWeight(:,1);

plot(time, mpcWeight(:,3)-273, 'black--', ...
     time, mpcWeight(:,4)-273, 'black', ...
     time, mpcWeight(:,2)-273, 'black-.', 'LineWidth',1)
    %cpy.time,cpy.signals(2).values(:,1),'--',...
    %cpy.time,cpy.signals(2).values(:,2),'--',...
 
%grid on
    
% set limit
lim=get(gca,'YLim');
lim(1)=ylim(1);
lim(2)=ylim(2);
set(gca,'YLim',lim);

ylab=get(gca,'YLabel');
ylab.String='T [°C]';
set(gca,'YLabel',ylab)

lim=get(gca,'XLim');
lim(1)=3600*0;
lim(2)=3600*2.3;
set(gca,'XLim',lim);

% 
% set X axes label
plotting_axesLabel_Days()
% 
legend('T_{ref}','T_{i}','T_{e}')
%legend('T_{ref}','T_{i}')
leg=get(gca, 'Legend');
%leg.Position =[0.6346    0.7588    0.2413    0.1405];
% 
subtitle=get(hTemp,'Title');
subtitle.String='Hõmérséklet';
subtitle.FontSize=11;
shg %show it

% leg=get(gca, 'Legend');
% leg.String(1)={'RadiatorValve'};
% leg.String(2)={'FloorValve'};

hManipulated=subplot(2,1,2);
plot(time, mpcWeight(:,5), 'k', 'LineWidth',1.1)
% set limit
lim=get(gca,'YLim');
lim(1)=-0.1;
lim(2)=1.1;
set(gca,'YLim',lim);

ylab=get(gca,'YLabel');
ylab.String='u [%]';
set(gca,'YLabel',ylab)

lim=get(gca,'XLim');
lim(1)=0;
lim(2)=3600*2.3;
set(gca,'XLim',lim);
plotting_axesLabel_Days()

subtitle=get(hManipulated,'Title');
subtitle.String='Beavatkozó jel';
subtitle.FontSize=11;
shg %show it


% plot2
% hMeasured=subplot(2,1,2);
% set(hMeasured, 'OuterPosition', [0,0, 1, .55]);
% 
% plot(ValveAndTemp.time,[ValveAndTemp.signals(1).values(:,1:1:2) ValveAndTemp.signals(1).values(:,3)-273])
% 
% plot(mpcWeight.time, mpcWeight.signals(1).values(:,1)-273,'k-',...
%      mpcWeight.time, mpcWeight.signals(1).values(:,2)-273,'r-')
%      cpy.time,cpy.signals(1).values(:,1)-273,'-.',...
%      cpy.time,cpy.signals(1).values(:,2)-273,'-.',...
%  
%   ,...
%      ValveAndTemp.time, ValveAndTemp.signals(1).values(:,3)-273,'g-',...
%      ValveAndTemp.time, ValveAndTemp.signals(1).values(:,4)-273,'c-')
% 
% grid on
% 
% lim=get(gca,'YLim');
% lim(1)=-15;
% lim(2)=40;
% set(gca,'YLim',lim);
% 
% lim=get(gca,'XLim');
% lim(1)=3600*24*10*3.4;
% lim(2)=3600*24*10*4;
% set(gca,'XLim',lim);
% 
% lab=get(gca,'YTickLabel');
% lab{11}='';
% lab{12}='';
% set(gca,'YTickLabel',lab);
% hMeasured.YTickLabel{12}='';
% 
% 
% set X axes label
% plotting_axesLabel_Days()
% legend('Külsõ hõmérséklet t_e','Helyiség hõmérséklete t_i')
% ,'Nemlineáris modell t_i','Linearizált modell t_i')
% leg=get(gca, 'Legend');
% leg.Position =[0.6200    0.52    0.2927    0.0822];
% subtitle=get(hMeasured,'Title');
% subtitle.String='Mért változók';
% subtitle.FontSize=11;
% 
% 
% shg %show it
% 
% Misc
% 
function plotting_axesLabel_Days()
%mintavételi idõ 1800s=1 egység=fél óra. A struct time-ban adja.
%Simulink: 3600*24*10*75 mp, azaz 
set(gca,'XTick',0:600:3600*2)
set(gca,'XTickLabel',{'0','10','20','30','40','50','60','70','80','90','100','110','120'});%,'13','14','15','16'})
xlab=get(gca,'XLabel');
xlab.String='idõ (10 perc)';
set(gca,'XLabel',xlab)