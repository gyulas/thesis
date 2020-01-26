function data=concatScopeData(varargin)
% Timeseries adatsorokat fuz ossze - ezek labsys_data_i nevu logfile-ok. Ezek utan plotolhatoak. 
%Array osszefuzese egyszerubb,
% data=[data1; data2]; mintara tortenik.

data=timeseries('ScopeData');
if nargin>0
    time_prev=0;    
    for i = 1:nargin
        time_next=((time_prev+1):(length(varargin{i}.signals(1).values)+time_prev))';
        %time=(time:length(varargin{i}.signals(1).values)+time)';
        data=append(data,timeseries([varargin{i}.signals(1).values(:,1) ...
                                     varargin{i}.signals(2).values ...
                                     varargin{i}.signals(1).values(:,2)],...
                                     time_next));
        time_prev=time_next(end);
    end
end   
