function [CLast10] = processHeatData(CLast10)
%processHeatData computes the quality of the closed loop control.
%   power
%   comfort
%   peak demand


% osszes leadott teljesitmeny:
CLast10.signals(2).values(:,8)=CLast10.signals(2).values(:,6)+CLast10.signals(2).values(:,7);
% elteres a referenciajeltol:
CLast10.signals(2).values(:,9)=CLast10.signals(2).values(:,3)-CLast10.signals(2).values(:,2);


CLast10.signals(3).values=max(CLast10.signals(1).values());
CLast10.signals(3).values(2,:)=mean(CLast10.signals(1).values());
CLast10.signals(3).values(3,:)=min(CLast10.signals(1).values());

CLast10.signals(4).values=max(CLast10.signals(2).values());
CLast10.signals(4).values(2,:)=mean(CLast10.signals(2).values());
CLast10.signals(4).values(3,:)=min(CLast10.signals(2).values());
CLast10.signals(4).values(4,:)=sum(abs(CLast10.signals(2).values()))/1000;

CLast10.signals(4).values
end

