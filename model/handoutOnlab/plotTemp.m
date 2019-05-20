function plotTemp(CLast10)



hManipulated=subplot(3,1,1);
set(hManipulated.Parent, 'OuterPosition', [670,200, 600, 750]);
set(hManipulated, 'OuterPosition', [0,0.65, 1, .35]);

% beavatkozo jelek
plot(CLast10.time,CLast10.signals(1).values(:,1),...
     CLast10.time, CLast10.signals(1).values(:,2))
 
%grid on
    
% set limit
lim=get(gca,'YLim');
lim(1)=-0.05;
lim(2)=0.65;
set(gca,'YLim',lim);

lim=get(gca,'XLim');
lim(1)=1800*2*24*45;
lim(2)=1800*2*24*55;
set(gca,'XLim',lim);

%set X axes label
plotting_axesLabel_Day()

legend('Radiátor szelep','Padlófűtés szelep')
leg=get(gca, 'Legend');
leg.Position =[0.6638 0.9000 0.2414 0.0650];

subtitle=get(hManipulated,'Title');
subtitle.String={'Áthangolt súlyozás';'Beavatkozó jelek'};
subtitle.FontSize=11;
shg %show it

% leg=get(gca, 'Legend');
% leg.String(1)={'RadiatorValve'};
% leg.String(2)={'FloorValve'};

%% plot2
hMeasured=subplot(3,1,2);
set(hMeasured, 'OuterPosition', [0,0.3, 1, .35]);

%plot(ValveAndTemp.time,[ValveAndTemp.signals(1).values(:,1:1:2) ValveAndTemp.signals(1).values(:,3)-273])

plot(CLast10.time, CLast10.signals(2).values(:,2)-273,'k-',...
     CLast10.time, CLast10.signals(2).values(:,3)-273,'r-')
     %cpy.time,cpy.signals(1).values(:,1)-273,'-.',...
     %cpy.time,cpy.signals(1).values(:,2)-273,'-.',...
 
 %  ,...
%      ValveAndTemp.time, ValveAndTemp.signals(1).values(:,3)-273,'g-',...
%      ValveAndTemp.time, ValveAndTemp.signals(1).values(:,4)-273,'c-')

%grid on

lim=get(gca,'YLim');
lim(1)=20.5;
lim(2)=23.5;
set(gca,'YLim',lim);

lim=get(gca,'XLim');
lim(1)=1800*2*24*45;
lim(2)=1800*2*24*55;
set(gca,'XLim',lim);

% lab=get(gca,'YTickLabel');
% lab{11}='';
% lab{12}='';
% set(gca,'YTickLabel',lab);
%hMeasured.YTickLabel{12}='';


%set X axes label
plotting_axesLabel_Day()
legend('Referenciajel t_{ref}','Helyiség hőmérséklete t_i')
%,'Nemline�ris modell t_i','Lineariz�lt modell t_i')
leg=get(gca, 'Legend');
leg.Position = [0.6598 0.5855 0.3134 0.0722];%[0.5930 0.5337 0.3134 0.0722];
subtitle=get(hMeasured,'Title');
subtitle.String='Belső hőmérséklet';
subtitle.FontSize=11;


shg %show it

%% 3
hMeasured=subplot(3,1,3);
set(hMeasured, 'OuterPosition', [0,0, 1, .3]);
plot(CLast10.time, CLast10.signals(2).values(:,1)-273,'b-')
legend('Külső hőmérséklet t_e')


lim=get(gca,'YLim');
lim(1)=-4;
lim(2)=10;
set(gca,'YLim',lim);

lim=get(gca,'XLim');
lim(1)=1800*2*24*45;
lim(2)=1800*2*24*55;
set(gca,'XLim',lim);

subtitle=get(hMeasured,'Title');
subtitle.String='Külső hőmérséklet';
subtitle.FontSize=11;
plotting_axesLabel_Day()


%% Misc

function plotting_axesLabel_Day()
%mintav�teli id� 1800s=1 egys�g=f�l �ra. A struct time-ban adja.
% Simulink: 3600*24*10*75 mp, azaz 
set(gca,'XTick',0:24*3600:3600*24*7*120)
%set(gca,'XTick',0:30*24*3600:3600*24*7*120)%honap
set(gca,'XTickLabel',{'0','1','0','1','2','3','4','5','6','7','8','9','10','0','1','2','3','4','5','6','7','8','9','10','7','8','9','10','6','7','8','9'});%,'13','14','15','16'})
xlab=get(gca,'XLabel');
xlab.String='idő (nap)';
set(gca,'XLabel',xlab)