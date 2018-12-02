load('dataForFigure-ident-step-and-stair.mat') %Ts=300s for this data

f1=figure(1);
plotIdentTemp(ValveAndTemp)
f2=figure(2);
plotIdentTemp(ValveAndTempStair)
f3=figure(3);
plotIdentTemp(ValveAndTempStep)

saveas(f1,'valve-step.eps')
saveas(f2,'valve-stair.eps')
saveas(f3,'valve-step-hot.eps')