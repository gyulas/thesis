load('dataForFigure-ident-step-and-stair.mat') %Ts=300s for this data

f1=figure(1);
plotIdentTemp(ValveAndTemp)
saveas(f1,'valve-step-hot','epsc')

f2=figure(2);
plotIdentTemp(ValveAndTempStair)
saveas(f2,'valve-stair','epsc')

f3=figure(3);
plotIdentTemp(ValveAndTempStep)
saveas(f3,'valve-step','epsc')