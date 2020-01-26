function plotClosedLoopTemp(ValveAndTemp)

hManipulated=subplot(2,1,1);
set(hManipulated, 'OuterPosition', [0,0.60, 1, .34]);

plot(ValveAndTemp.time,ValveAndTemp.signals(2).values(:,1),...
     ValveAndTemp.time, ValveAndTemp.signals(2).values(:,2))
    %cpy.time,cpy.signals(2).values(:,1),'--',...
    %cpy.time,cpy.signals(2).values(:,2),'--',...
 
%grid on
    
% set limit
lim=get(gca,'YLim');
lim(1)=-0.1;
lim(2)=1.1;
set(gca,'YLim',lim);

lim=get(gca,'XLim');
lim(1)=3600*24*10*3.4;
lim(2)=3600*24*10*4;
set(gca,'XLim',lim);

%set X axes label
plotting_axesLabel_Days()

legend('Radi�tor szelep','Padl�f�t�s szelep')
leg=get(gca, 'Legend');
leg.Position =[0.705    0.91    0.2193    0.0739];

subtitle=get(hManipulated,'Title');
subtitle.String='Beavatkoz� jelek';
subtitle.FontSize=11;
shg %show it

% leg=get(gca, 'Legend');
% leg.String(1)={'RadiatorValve'};
% leg.String(2)={'FloorValve'};

%% plot2
hMeasured=subplot(2,1,2);
set(hMeasured, 'OuterPosition', [0,0, 1, .55]);

%plot(ValveAndTemp.time,[ValveAndTemp.signals(1).values(:,1:1:2) ValveAndTemp.signals(1).values(:,3)-273])

plot(ValveAndTemp.time, ValveAndTemp.signals(1).values(:,1)-273,'k-',...
     ValveAndTemp.time, ValveAndTemp.signals(1).values(:,2)-273,'r-')
     %cpy.time,cpy.signals(1).values(:,1)-273,'-.',...
     %cpy.time,cpy.signals(1).values(:,2)-273,'-.',...
 
 %  ,...
%      ValveAndTemp.time, ValveAndTemp.signals(1).values(:,3)-273,'g-',...
%      ValveAndTemp.time, ValveAndTemp.signals(1).values(:,4)-273,'c-')

%grid on

lim=get(gca,'YLim');
lim(1)=-15;
lim(2)=40;
set(gca,'YLim',lim);

lim=get(gca,'XLim');
lim(1)=3600*24*10*3.4;
lim(2)=3600*24*10*4;
set(gca,'XLim',lim);

% lab=get(gca,'YTickLabel');
% lab{11}='';
% lab{12}='';
% set(gca,'YTickLabel',lab);
%hMeasured.YTickLabel{12}='';


%set X axes label
plotting_axesLabel_Days()
legend('K�ls� h�m�rs�klet t_e','Helyis�g h�m�rs�klete t_i')
%,'Nemline�ris modell t_i','Lineariz�lt modell t_i')
leg=get(gca, 'Legend');
leg.Position =[0.6200    0.52    0.2927    0.0822];
subtitle=get(hMeasured,'Title');
subtitle.String='M�rt v�ltoz�k';
subtitle.FontSize=11;


shg %show it

%% Misc

function plotting_axesLabel_Days()
%mintav�teli id� 1800s=1 egys�g=f�l �ra. A struct time-ban adja.
% Simulink: 3600*24*10*75 mp, azaz 
set(gca,'XTick',0:24*3600:3600*24*7*120)
%set(gca,'XTick',0:30*24*3600:3600*24*7*120)%honap
set(gca,'XTickLabel',{'0','1','2','3','4','5','6','7','8','9','10','11'});%,'13','14','15','16'})
xlab=get(gca,'XLabel');
xlab.String='id� (nap)';
set(gca,'XLabel',xlab)