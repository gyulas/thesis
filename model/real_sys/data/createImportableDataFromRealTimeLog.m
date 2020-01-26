%function [in_signal, out_signal] = createImportableDataFromRealTimeLog()

%load('labsys_data_45.mat') etc....

stepOnOff=concatScopeData(labsys_scope_43,labsys_scope_44,labsys_scope_45,labsys_scope_46,labsys_scope_47,labsys_scope_48,labsys_scope_49,labsysStepDown);
plotLabsysTimeseries(stepOnOff)
in_signal=stepOnOff.Data(:,[1 3]);
out_signal=stepOnOff.Data(:,[2]);

%end