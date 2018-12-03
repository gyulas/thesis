if ~mpcchecktoolboxinstalled('simulink')
    disp('Simulink(R) is required to run this example.')
    return
end


p = 15;                         % prediction horizon
m = 1;                          % control horizon

Ts=1800;
Tstop=3600*24*10*10;            % 100 day
time = double(0:Ts:(Tstop+p*Ts))';    % time vector - t�lny�lik a stop id�n a pediction horizont-nyival
tortresz=rem(time,3600*24);     % half a day


r = ones(size(time))*273+18;
v = ones(size(time))*273;    % measured disturbance signal

for i=1:size(time)
    if or(tortresz(i)<3600*6,tortresz(i)>3600*20)  
        v(i)=v(i)-10;
    end
    
end

% Define the reference signal in structure
ref.time = time;
ref.signals.values = r;
% Define the measured disturbance
md.time = time;
md.signals.values = v;
% Open Simulink model
% mdl = 'mpc_preview';
% open_system(mdl)



signal1.time=1:1800:18000;
signal1.signals.values=1:1800:18000;