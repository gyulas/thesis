  function targMap = targDataMap(),

  ;%***********************
  ;% Create Parameter Map *
  ;%***********************
      
    nTotData      = 0; %add to this count as we go
    nTotSects     = 4;
    sectIdxOffset = 0;
    
    ;%
    ;% Define dummy sections & preallocate arrays
    ;%
    dumSection.nData = -1;  
    dumSection.data  = [];
    
    dumData.logicalSrcIdx = -1;
    dumData.dtTransOffset = -1;
    
    ;%
    ;% Init/prealloc paramMap
    ;%
    paramMap.nSections           = nTotSects;
    paramMap.sectIdxOffset       = sectIdxOffset;
      paramMap.sections(nTotSects) = dumSection; %prealloc
    paramMap.nTotData            = -1;
    
    ;%
    ;% Auto data (udp_conn_P)
    ;%
      section.nData     = 5;
      section.data(5)  = dumData; %prealloc
      
	  ;% udp_conn_P.PacketOutput_InitialValue
	  section.data(1).logicalSrcIdx = 1;
	  section.data(1).dtTransOffset = 0;
	
	  ;% udp_conn_P.PacketInput1_MaxMissedTicks
	  section.data(2).logicalSrcIdx = 2;
	  section.data(2).dtTransOffset = 1;
	
	  ;% udp_conn_P.PacketOutput_MaxMissedTicks
	  section.data(3).logicalSrcIdx = 3;
	  section.data(3).dtTransOffset = 2;
	
	  ;% udp_conn_P.PacketInput1_YieldWhenWaiting
	  section.data(4).logicalSrcIdx = 4;
	  section.data(4).dtTransOffset = 3;
	
	  ;% udp_conn_P.PacketOutput_YieldWhenWaiting
	  section.data(5).logicalSrcIdx = 5;
	  section.data(5).dtTransOffset = 4;
	
      nTotData = nTotData + section.nData;
      paramMap.sections(1) = section;
      clear section
      
      section.nData     = 2;
      section.data(2)  = dumData; %prealloc
      
	  ;% udp_conn_P.PacketInput1_PacketID
	  section.data(1).logicalSrcIdx = 6;
	  section.data(1).dtTransOffset = 0;
	
	  ;% udp_conn_P.PacketOutput_PacketID
	  section.data(2).logicalSrcIdx = 7;
	  section.data(2).dtTransOffset = 1;
	
      nTotData = nTotData + section.nData;
      paramMap.sections(2) = section;
      clear section
      
      section.nData     = 11;
      section.data(11)  = dumData; %prealloc
      
	  ;% udp_conn_P.Constant_Value
	  section.data(1).logicalSrcIdx = 8;
	  section.data(1).dtTransOffset = 0;
	
	  ;% udp_conn_P.Gain_Gain
	  section.data(2).logicalSrcIdx = 9;
	  section.data(2).dtTransOffset = 1;
	
	  ;% udp_conn_P.Constant1_Value
	  section.data(3).logicalSrcIdx = 10;
	  section.data(3).dtTransOffset = 2;
	
	  ;% udp_conn_P.Gain1_Gain
	  section.data(4).logicalSrcIdx = 11;
	  section.data(4).dtTransOffset = 3;
	
	  ;% udp_conn_P.SineWavedouble05Hz_Amp
	  section.data(5).logicalSrcIdx = 12;
	  section.data(5).dtTransOffset = 4;
	
	  ;% udp_conn_P.SineWavedouble05Hz_Bias
	  section.data(6).logicalSrcIdx = 13;
	  section.data(6).dtTransOffset = 5;
	
	  ;% udp_conn_P.SineWavedouble05Hz_Freq
	  section.data(7).logicalSrcIdx = 14;
	  section.data(7).dtTransOffset = 6;
	
	  ;% udp_conn_P.SineWavedouble05Hz_Hsin
	  section.data(8).logicalSrcIdx = 15;
	  section.data(8).dtTransOffset = 7;
	
	  ;% udp_conn_P.SineWavedouble05Hz_HCos
	  section.data(9).logicalSrcIdx = 16;
	  section.data(9).dtTransOffset = 8;
	
	  ;% udp_conn_P.SineWavedouble05Hz_PSin
	  section.data(10).logicalSrcIdx = 17;
	  section.data(10).dtTransOffset = 9;
	
	  ;% udp_conn_P.SineWavedouble05Hz_PCos
	  section.data(11).logicalSrcIdx = 18;
	  section.data(11).dtTransOffset = 10;
	
      nTotData = nTotData + section.nData;
      paramMap.sections(3) = section;
      clear section
      
      section.nData     = 2;
      section.data(2)  = dumData; %prealloc
      
	  ;% udp_conn_P.Gain3_Gain
	  section.data(1).logicalSrcIdx = 19;
	  section.data(1).dtTransOffset = 0;
	
	  ;% udp_conn_P.Gain2_Gain
	  section.data(2).logicalSrcIdx = 20;
	  section.data(2).dtTransOffset = 1;
	
      nTotData = nTotData + section.nData;
      paramMap.sections(4) = section;
      clear section
      
    
      ;%
      ;% Non-auto Data (parameter)
      ;%
    

    ;%
    ;% Add final counts to struct.
    ;%
    paramMap.nTotData = nTotData;
    


  ;%**************************
  ;% Create Block Output Map *
  ;%**************************
      
    nTotData      = 0; %add to this count as we go
    nTotSects     = 4;
    sectIdxOffset = 0;
    
    ;%
    ;% Define dummy sections & preallocate arrays
    ;%
    dumSection.nData = -1;  
    dumSection.data  = [];
    
    dumData.logicalSrcIdx = -1;
    dumData.dtTransOffset = -1;
    
    ;%
    ;% Init/prealloc sigMap
    ;%
    sigMap.nSections           = nTotSects;
    sigMap.sectIdxOffset       = sectIdxOffset;
      sigMap.sections(nTotSects) = dumSection; %prealloc
    sigMap.nTotData            = -1;
    
    ;%
    ;% Auto data (udp_conn_B)
    ;%
      section.nData     = 6;
      section.data(6)  = dumData; %prealloc
      
	  ;% udp_conn_B.Constant
	  section.data(1).logicalSrcIdx = 0;
	  section.data(1).dtTransOffset = 0;
	
	  ;% udp_conn_B.Gain
	  section.data(2).logicalSrcIdx = 1;
	  section.data(2).dtTransOffset = 1;
	
	  ;% udp_conn_B.Sum
	  section.data(3).logicalSrcIdx = 2;
	  section.data(3).dtTransOffset = 2;
	
	  ;% udp_conn_B.Gain1
	  section.data(4).logicalSrcIdx = 3;
	  section.data(4).dtTransOffset = 3;
	
	  ;% udp_conn_B.Sum1
	  section.data(5).logicalSrcIdx = 4;
	  section.data(5).dtTransOffset = 4;
	
	  ;% udp_conn_B.time_UTC1
	  section.data(6).logicalSrcIdx = 5;
	  section.data(6).dtTransOffset = 5;
	
      nTotData = nTotData + section.nData;
      sigMap.sections(1) = section;
      clear section
      
      section.nData     = 2;
      section.data(2)  = dumData; %prealloc
      
	  ;% udp_conn_B.PacketInput1_o13
	  section.data(1).logicalSrcIdx = 6;
	  section.data(1).dtTransOffset = 0;
	
	  ;% udp_conn_B.PacketOutput
	  section.data(2).logicalSrcIdx = 7;
	  section.data(2).dtTransOffset = 1;
	
      nTotData = nTotData + section.nData;
      sigMap.sections(2) = section;
      clear section
      
      section.nData     = 2;
      section.data(2)  = dumData; %prealloc
      
	  ;% udp_conn_B.Sum3
	  section.data(1).logicalSrcIdx = 8;
	  section.data(1).dtTransOffset = 0;
	
	  ;% udp_conn_B.Sum2
	  section.data(2).logicalSrcIdx = 9;
	  section.data(2).dtTransOffset = 1;
	
      nTotData = nTotData + section.nData;
      sigMap.sections(3) = section;
      clear section
      
      section.nData     = 13;
      section.data(13)  = dumData; %prealloc
      
	  ;% udp_conn_B.PacketInput1_o1
	  section.data(1).logicalSrcIdx = 10;
	  section.data(1).dtTransOffset = 0;
	
	  ;% udp_conn_B.PacketInput1_o2
	  section.data(2).logicalSrcIdx = 11;
	  section.data(2).dtTransOffset = 1;
	
	  ;% udp_conn_B.PacketInput1_o3
	  section.data(3).logicalSrcIdx = 12;
	  section.data(3).dtTransOffset = 2;
	
	  ;% udp_conn_B.PacketInput1_o4
	  section.data(4).logicalSrcIdx = 13;
	  section.data(4).dtTransOffset = 3;
	
	  ;% udp_conn_B.PacketInput1_o5
	  section.data(5).logicalSrcIdx = 14;
	  section.data(5).dtTransOffset = 4;
	
	  ;% udp_conn_B.PacketInput1_o6
	  section.data(6).logicalSrcIdx = 15;
	  section.data(6).dtTransOffset = 5;
	
	  ;% udp_conn_B.PacketInput1_o7
	  section.data(7).logicalSrcIdx = 16;
	  section.data(7).dtTransOffset = 6;
	
	  ;% udp_conn_B.PacketInput1_o8
	  section.data(8).logicalSrcIdx = 17;
	  section.data(8).dtTransOffset = 7;
	
	  ;% udp_conn_B.PacketInput1_o9
	  section.data(9).logicalSrcIdx = 18;
	  section.data(9).dtTransOffset = 8;
	
	  ;% udp_conn_B.PacketInput1_o10
	  section.data(10).logicalSrcIdx = 19;
	  section.data(10).dtTransOffset = 9;
	
	  ;% udp_conn_B.PacketInput1_o11
	  section.data(11).logicalSrcIdx = 20;
	  section.data(11).dtTransOffset = 10;
	
	  ;% udp_conn_B.PacketInput1_o12
	  section.data(12).logicalSrcIdx = 21;
	  section.data(12).dtTransOffset = 11;
	
	  ;% udp_conn_B.DataTypeConversion
	  section.data(13).logicalSrcIdx = 22;
	  section.data(13).dtTransOffset = 12;
	
      nTotData = nTotData + section.nData;
      sigMap.sections(4) = section;
      clear section
      
    
      ;%
      ;% Non-auto Data (signal)
      ;%
    

    ;%
    ;% Add final counts to struct.
    ;%
    sigMap.nTotData = nTotData;
    


  ;%*******************
  ;% Create DWork Map *
  ;%*******************
      
    nTotData      = 0; %add to this count as we go
    nTotSects     = 3;
    sectIdxOffset = 4;
    
    ;%
    ;% Define dummy sections & preallocate arrays
    ;%
    dumSection.nData = -1;  
    dumSection.data  = [];
    
    dumData.logicalSrcIdx = -1;
    dumData.dtTransOffset = -1;
    
    ;%
    ;% Init/prealloc dworkMap
    ;%
    dworkMap.nSections           = nTotSects;
    dworkMap.sectIdxOffset       = sectIdxOffset;
      dworkMap.sections(nTotSects) = dumSection; %prealloc
    dworkMap.nTotData            = -1;
    
    ;%
    ;% Auto data (udp_conn_DW)
    ;%
      section.nData     = 2;
      section.data(2)  = dumData; %prealloc
      
	  ;% udp_conn_DW.lastSin
	  section.data(1).logicalSrcIdx = 0;
	  section.data(1).dtTransOffset = 0;
	
	  ;% udp_conn_DW.lastCos
	  section.data(2).logicalSrcIdx = 1;
	  section.data(2).dtTransOffset = 1;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(1) = section;
      clear section
      
      section.nData     = 3;
      section.data(3)  = dumData; %prealloc
      
	  ;% udp_conn_DW.PacketInput1_PWORK
	  section.data(1).logicalSrcIdx = 2;
	  section.data(1).dtTransOffset = 0;
	
	  ;% udp_conn_DW.Scope_PWORK.LoggedData
	  section.data(2).logicalSrcIdx = 3;
	  section.data(2).dtTransOffset = 1;
	
	  ;% udp_conn_DW.PacketOutput_PWORK
	  section.data(3).logicalSrcIdx = 4;
	  section.data(3).dtTransOffset = 4;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(2) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% udp_conn_DW.systemEnable
	  section.data(1).logicalSrcIdx = 5;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(3) = section;
      clear section
      
    
      ;%
      ;% Non-auto Data (dwork)
      ;%
    

    ;%
    ;% Add final counts to struct.
    ;%
    dworkMap.nTotData = nTotData;
    


  ;%
  ;% Add individual maps to base struct.
  ;%

  targMap.paramMap  = paramMap;    
  targMap.signalMap = sigMap;
  targMap.dworkMap  = dworkMap;
  
  ;%
  ;% Add checksums to base struct.
  ;%


  targMap.checksum0 = 1557707348;
  targMap.checksum1 = 2154691021;
  targMap.checksum2 = 3074475629;
  targMap.checksum3 = 1223669461;

