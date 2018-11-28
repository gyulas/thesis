function plotIdentTemp(ValveAndTemp)
hManipulated=subplot(2,1,1);
set(hManipulated, 'OuterPosition', [0,0.67, 1, .33]);

plot(ValveAndTemp.time,[ValveAndTemp.signals(2).values])
% set limit
lim=get(gca,'YLim');
lim(1)=-0.1;
lim(2)=1.1;
set(gca,'YLim',lim);

%set X axes label
plotting_axesLabel_Days()

legend('Radiátor szelep','Padlófûtés szelep')
subtitle=get(hManipulated,'Title');
subtitle.String='Beavatkozó jelek';
shg %show it

% leg=get(gca, 'Legend');
% leg.String(1)={'RadiatorValve'};
% leg.String(2)={'FloorValve'};

%% plot2
hMeasured=subplot(2,1,2);
set(hMeasured, 'OuterPosition', [0,0, 1, .6]);

plot(ValveAndTemp.time,[ValveAndTemp.signals(1).values])

lim=get(gca,'YLim');
lim(1)=-25;
lim(2)=40;
set(gca,'YLim',lim);
% lab=get(gca,'YTickLabel');
% lab{11}='';
% lab{12}='';
% set(gca,'YTickLabel',lab);
%hMeasured.YTickLabel{12}='';


%set X axes label
plotting_axesLabel_Days()
legend('Külsõ hõmérséklet t_e','Helyiség hõmérséklete t_i')
leg=get(gca, 'Legend');
leg.Position =[0.6200    0.58    0.2927    0.0822];
subtitle=get(hMeasured,'Title');
subtitle.String='Mért változók';

shg %show it

%% Misc

function plotting_axesLabel_Days()
set(gca,'XTick',0:7*24*3600:3600*24*7*80)
set(gca,'XTickLabel',{'0','1','2','3','4','5','6','7','8','9','10','11','12','13','14','15','16'})
xlab=get(gca,'XLabel');
xlab.String='idõ (hét)';
set(gca,'XLabel',xlab)