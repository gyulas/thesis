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
      section.nData     = 6;
      section.data(6)  = dumData; %prealloc
      
	  ;% udp_conn_P.PacketInput_MaxMissedTicks
	  section.data(1).logicalSrcIdx = 4;
	  section.data(1).dtTransOffset = 0;
	
	  ;% udp_conn_P.PacketOutput1_MaxMissedTicks
	  section.data(2).logicalSrcIdx = 5;
	  section.data(2).dtTransOffset = 1;
	
	  ;% udp_conn_P.PacketOutput_MaxMissedTicks
	  section.data(3).logicalSrcIdx = 6;
	  section.data(3).dtTransOffset = 2;
	
	  ;% udp_conn_P.PacketInput_YieldWhenWaiting
	  section.data(4).logicalSrcIdx = 7;
	  section.data(4).dtTransOffset = 3;
	
	  ;% udp_conn_P.PacketOutput1_YieldWhenWaiting
	  section.data(5).logicalSrcIdx = 8;
	  section.data(5).dtTransOffset = 4;
	
	  ;% udp_conn_P.PacketOutput_YieldWhenWaiting
	  section.data(6).logicalSrcIdx = 9;
	  section.data(6).dtTransOffset = 5;
	
      nTotData = nTotData + section.nData;
      paramMap.sections(1) = section;
      clear section
      
      section.nData     = 3;
      section.data(3)  = dumData; %prealloc
      
	  ;% udp_conn_P.PacketInput_PacketID
	  section.data(1).logicalSrcIdx = 10;
	  section.data(1).dtTransOffset = 0;
	
	  ;% udp_conn_P.PacketOutput1_PacketID
	  section.data(2).logicalSrcIdx = 11;
	  section.data(2).dtTransOffset = 1;
	
	  ;% udp_conn_P.PacketOutput_PacketID
	  section.data(3).logicalSrcIdx = 12;
	  section.data(3).dtTransOffset = 2;
	
      nTotData = nTotData + section.nData;
      paramMap.sections(2) = section;
      clear section
      
      section.nData     = 39;
      section.data(39)  = dumData; %prealloc
      
	  ;% udp_conn_P.Gain_Gain
	  section.data(1).logicalSrcIdx = 13;
	  section.data(1).dtTransOffset = 0;
	
	  ;% udp_conn_P.Constant1_Value
	  section.data(2).logicalSrcIdx = 14;
	  section.data(2).dtTransOffset = 1;
	
	  ;% udp_conn_P.Gain1_Gain
	  section.data(3).logicalSrcIdx = 15;
	  section.data(3).dtTransOffset = 2;
	
	  ;% udp_conn_P.Constant_Value
	  section.data(4).logicalSrcIdx = 16;
	  section.data(4).dtTransOffset = 3;
	
	  ;% udp_conn_P.Constant2_Value
	  section.data(5).logicalSrcIdx = 17;
	  section.data(5).dtTransOffset = 4;
	
	  ;% udp_conn_P.E_zero_Value
	  section.data(6).logicalSrcIdx = 18;
	  section.data(6).dtTransOffset = 5;
	
	  ;% udp_conn_P.F_zero_Value
	  section.data(7).logicalSrcIdx = 19;
	  section.data(7).dtTransOffset = 7;
	
	  ;% udp_conn_P.G_zero_Value
	  section.data(8).logicalSrcIdx = 20;
	  section.data(8).dtTransOffset = 8;
	
	  ;% udp_conn_P.ywt_zero_Value
	  section.data(9).logicalSrcIdx = 21;
	  section.data(9).dtTransOffset = 9;
	
	  ;% udp_conn_P.uwt_zero_Value
	  section.data(10).logicalSrcIdx = 22;
	  section.data(10).dtTransOffset = 10;
	
	  ;% udp_conn_P.duwt_zero_Value
	  section.data(11).logicalSrcIdx = 23;
	  section.data(11).dtTransOffset = 12;
	
	  ;% udp_conn_P.extmv_zero_Value
	  section.data(12).logicalSrcIdx = 24;
	  section.data(12).dtTransOffset = 14;
	
	  ;% udp_conn_P.extmv_scale_Gain
	  section.data(13).logicalSrcIdx = 25;
	  section.data(13).dtTransOffset = 16;
	
	  ;% udp_conn_P.mvtarget_zero_Value
	  section.data(14).logicalSrcIdx = 26;
	  section.data(14).dtTransOffset = 18;
	
	  ;% udp_conn_P.extmv_scale1_Gain
	  section.data(15).logicalSrcIdx = 27;
	  section.data(15).dtTransOffset = 20;
	
	  ;% udp_conn_P.last_mv_InitialCondition
	  section.data(16).logicalSrcIdx = 28;
	  section.data(16).dtTransOffset = 22;
	
	  ;% udp_conn_P.last_x_InitialCondition
	  section.data(17).logicalSrcIdx = 29;
	  section.data(17).dtTransOffset = 24;
	
	  ;% udp_conn_P.umin_zero_Value
	  section.data(18).logicalSrcIdx = 30;
	  section.data(18).dtTransOffset = 209;
	
	  ;% udp_conn_P.umin_scale_Gain
	  section.data(19).logicalSrcIdx = 31;
	  section.data(19).dtTransOffset = 211;
	
	  ;% udp_conn_P.umax_zero_Value
	  section.data(20).logicalSrcIdx = 32;
	  section.data(20).dtTransOffset = 213;
	
	  ;% udp_conn_P.umax_scale_Gain
	  section.data(21).logicalSrcIdx = 33;
	  section.data(21).dtTransOffset = 215;
	
	  ;% udp_conn_P.ymin_zero_Value
	  section.data(22).logicalSrcIdx = 34;
	  section.data(22).dtTransOffset = 217;
	
	  ;% udp_conn_P.ymin_scale_Gain
	  section.data(23).logicalSrcIdx = 35;
	  section.data(23).dtTransOffset = 218;
	
	  ;% udp_conn_P.ymax_zero_Value
	  section.data(24).logicalSrcIdx = 36;
	  section.data(24).dtTransOffset = 219;
	
	  ;% udp_conn_P.ymax_scale_Gain
	  section.data(25).logicalSrcIdx = 37;
	  section.data(25).dtTransOffset = 220;
	
	  ;% udp_conn_P.umin_scale4_Gain
	  section.data(26).logicalSrcIdx = 38;
	  section.data(26).dtTransOffset = 221;
	
	  ;% udp_conn_P.ymin_scale1_Gain
	  section.data(27).logicalSrcIdx = 39;
	  section.data(27).dtTransOffset = 223;
	
	  ;% udp_conn_P.S_zero_Value
	  section.data(28).logicalSrcIdx = 40;
	  section.data(28).dtTransOffset = 224;
	
	  ;% udp_conn_P.ymin_scale2_Gain
	  section.data(29).logicalSrcIdx = 41;
	  section.data(29).dtTransOffset = 225;
	
	  ;% udp_conn_P.switch_zero_Value
	  section.data(30).logicalSrcIdx = 42;
	  section.data(30).dtTransOffset = 226;
	
	  ;% udp_conn_P.ecrwt_zero_Value
	  section.data(31).logicalSrcIdx = 43;
	  section.data(31).dtTransOffset = 227;
	
	  ;% udp_conn_P.umin_scale1_Gain
	  section.data(32).logicalSrcIdx = 44;
	  section.data(32).dtTransOffset = 228;
	
	  ;% udp_conn_P.SineWavedouble05Hz_Amp
	  section.data(33).logicalSrcIdx = 45;
	  section.data(33).dtTransOffset = 230;
	
	  ;% udp_conn_P.SineWavedouble05Hz_Bias
	  section.data(34).logicalSrcIdx = 46;
	  section.data(34).dtTransOffset = 231;
	
	  ;% udp_conn_P.SineWavedouble05Hz_Freq
	  section.data(35).logicalSrcIdx = 47;
	  section.data(35).dtTransOffset = 232;
	
	  ;% udp_conn_P.SineWavedouble05Hz_Hsin
	  section.data(36).logicalSrcIdx = 48;
	  section.data(36).dtTransOffset = 233;
	
	  ;% udp_conn_P.SineWavedouble05Hz_HCos
	  section.data(37).logicalSrcIdx = 49;
	  section.data(37).dtTransOffset = 234;
	
	  ;% udp_conn_P.SineWavedouble05Hz_PSin
	  section.data(38).logicalSrcIdx = 50;
	  section.data(38).dtTransOffset = 235;
	
	  ;% udp_conn_P.SineWavedouble05Hz_PCos
	  section.data(39).logicalSrcIdx = 51;
	  section.data(39).dtTransOffset = 236;
	
      nTotData = nTotData + section.nData;
      paramMap.sections(3) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% udp_conn_P.Memory_InitialCondition
	  section.data(1).logicalSrcIdx = 52;
	  section.data(1).dtTransOffset = 0;
	
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
      section.nData     = 7;
      section.data(7)  = dumData; %prealloc
      
	  ;% udp_conn_B.Sum
	  section.data(1).logicalSrcIdx = 0;
	  section.data(1).dtTransOffset = 0;
	
	  ;% udp_conn_B.DataTypeConversion3
	  section.data(2).logicalSrcIdx = 1;
	  section.data(2).dtTransOffset = 1;
	
	  ;% udp_conn_B.Sum1
	  section.data(3).logicalSrcIdx = 2;
	  section.data(3).dtTransOffset = 2;
	
	  ;% udp_conn_B.Constant
	  section.data(4).logicalSrcIdx = 3;
	  section.data(4).dtTransOffset = 3;
	
	  ;% udp_conn_B.umin_scale1
	  section.data(5).logicalSrcIdx = 4;
	  section.data(5).dtTransOffset = 4;
	
	  ;% udp_conn_B.xk1
	  section.data(6).logicalSrcIdx = 5;
	  section.data(6).dtTransOffset = 6;
	
	  ;% udp_conn_B.u
	  section.data(7).logicalSrcIdx = 6;
	  section.data(7).dtTransOffset = 191;
	
      nTotData = nTotData + section.nData;
      sigMap.sections(1) = section;
      clear section
      
      section.nData     = 2;
      section.data(2)  = dumData; %prealloc
      
	  ;% udp_conn_B.PacketInput_o1
	  section.data(1).logicalSrcIdx = 7;
	  section.data(1).dtTransOffset = 0;
	
	  ;% udp_conn_B.PacketInput_o2
	  section.data(2).logicalSrcIdx = 8;
	  section.data(2).dtTransOffset = 1;
	
      nTotData = nTotData + section.nData;
      sigMap.sections(2) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% udp_conn_B.DataTypeConversion
	  section.data(1).logicalSrcIdx = 9;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      sigMap.sections(3) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% udp_conn_B.iAout
	  section.data(1).logicalSrcIdx = 10;
	  section.data(1).dtTransOffset = 0;
	
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
    nTotSects     = 4;
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
      section.nData     = 4;
      section.data(4)  = dumData; %prealloc
      
	  ;% udp_conn_DW.last_mv_DSTATE
	  section.data(1).logicalSrcIdx = 0;
	  section.data(1).dtTransOffset = 0;
	
	  ;% udp_conn_DW.last_x_PreviousInput
	  section.data(2).logicalSrcIdx = 1;
	  section.data(2).dtTransOffset = 2;
	
	  ;% udp_conn_DW.lastSin
	  section.data(3).logicalSrcIdx = 2;
	  section.data(3).dtTransOffset = 187;
	
	  ;% udp_conn_DW.lastCos
	  section.data(4).logicalSrcIdx = 3;
	  section.data(4).dtTransOffset = 188;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(1) = section;
      clear section
      
      section.nData     = 3;
      section.data(3)  = dumData; %prealloc
      
	  ;% udp_conn_DW.PacketInput_PWORK
	  section.data(1).logicalSrcIdx = 4;
	  section.data(1).dtTransOffset = 0;
	
	  ;% udp_conn_DW.PacketOutput1_PWORK
	  section.data(2).logicalSrcIdx = 5;
	  section.data(2).dtTransOffset = 1;
	
	  ;% udp_conn_DW.PacketOutput_PWORK
	  section.data(3).logicalSrcIdx = 6;
	  section.data(3).dtTransOffset = 3;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(2) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% udp_conn_DW.systemEnable
	  section.data(1).logicalSrcIdx = 7;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(3) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% udp_conn_DW.Memory_PreviousInput
	  section.data(1).logicalSrcIdx = 8;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(4) = section;
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


  targMap.checksum0 = 1808564861;
  targMap.checksum1 = 3442676291;
  targMap.checksum2 = 2263048405;
  targMap.checksum3 = 3742994822;

