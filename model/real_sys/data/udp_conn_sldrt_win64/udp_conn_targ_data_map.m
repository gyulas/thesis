  function targMap = targDataMap(),

  ;%***********************
  ;% Create Parameter Map *
  ;%***********************
      
    nTotData      = 0; %add to this count as we go
    nTotSects     = 6;
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
      section.nData     = 2;
      section.data(2)  = dumData; %prealloc
      
	  ;% udp_conn_P.PacketInput1_MaxMissedTicks
	  section.data(1).logicalSrcIdx = 0;
	  section.data(1).dtTransOffset = 0;
	
	  ;% udp_conn_P.PacketInput1_YieldWhenWaiting
	  section.data(2).logicalSrcIdx = 1;
	  section.data(2).dtTransOffset = 1;
	
      nTotData = nTotData + section.nData;
      paramMap.sections(1) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% udp_conn_P.PacketInput1_PacketID
	  section.data(1).logicalSrcIdx = 2;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      paramMap.sections(2) = section;
      clear section
      
      section.nData     = 2;
      section.data(2)  = dumData; %prealloc
      
	  ;% udp_conn_P.CompareToConstant_const
	  section.data(1).logicalSrcIdx = 3;
	  section.data(1).dtTransOffset = 0;
	
	  ;% udp_conn_P.CompareToConstant1_const
	  section.data(2).logicalSrcIdx = 4;
	  section.data(2).dtTransOffset = 1;
	
      nTotData = nTotData + section.nData;
      paramMap.sections(3) = section;
      clear section
      
      section.nData     = 31;
      section.data(31)  = dumData; %prealloc
      
	  ;% udp_conn_P.Gain1_Gain
	  section.data(1).logicalSrcIdx = 5;
	  section.data(1).dtTransOffset = 0;
	
	  ;% udp_conn_P.Constant1_Value
	  section.data(2).logicalSrcIdx = 6;
	  section.data(2).dtTransOffset = 1;
	
	  ;% udp_conn_P.Constant2_Value
	  section.data(3).logicalSrcIdx = 7;
	  section.data(3).dtTransOffset = 2;
	
	  ;% udp_conn_P.Gain_Gain
	  section.data(4).logicalSrcIdx = 8;
	  section.data(4).dtTransOffset = 3;
	
	  ;% udp_conn_P.last_x_InitialCondition
	  section.data(5).logicalSrcIdx = 9;
	  section.data(5).dtTransOffset = 4;
	
	  ;% udp_conn_P.last_mv_InitialCondition
	  section.data(6).logicalSrcIdx = 10;
	  section.data(6).dtTransOffset = 8;
	
	  ;% udp_conn_P.umin_zero_Value
	  section.data(7).logicalSrcIdx = 11;
	  section.data(7).dtTransOffset = 9;
	
	  ;% udp_conn_P.umin_scale_Gain
	  section.data(8).logicalSrcIdx = 12;
	  section.data(8).dtTransOffset = 10;
	
	  ;% udp_conn_P.umax_zero_Value
	  section.data(9).logicalSrcIdx = 13;
	  section.data(9).dtTransOffset = 11;
	
	  ;% udp_conn_P.umax_scale_Gain
	  section.data(10).logicalSrcIdx = 14;
	  section.data(10).dtTransOffset = 12;
	
	  ;% udp_conn_P.ymin_zero_Value
	  section.data(11).logicalSrcIdx = 15;
	  section.data(11).dtTransOffset = 13;
	
	  ;% udp_conn_P.ymin_scale_Gain
	  section.data(12).logicalSrcIdx = 16;
	  section.data(12).dtTransOffset = 14;
	
	  ;% udp_conn_P.ymax_zero_Value
	  section.data(13).logicalSrcIdx = 17;
	  section.data(13).dtTransOffset = 15;
	
	  ;% udp_conn_P.ymax_scale_Gain
	  section.data(14).logicalSrcIdx = 18;
	  section.data(14).dtTransOffset = 16;
	
	  ;% udp_conn_P.E_zero_Value
	  section.data(15).logicalSrcIdx = 19;
	  section.data(15).dtTransOffset = 17;
	
	  ;% udp_conn_P.umin_scale4_Gain
	  section.data(16).logicalSrcIdx = 20;
	  section.data(16).dtTransOffset = 18;
	
	  ;% udp_conn_P.F_zero_Value
	  section.data(17).logicalSrcIdx = 21;
	  section.data(17).dtTransOffset = 19;
	
	  ;% udp_conn_P.ymin_scale1_Gain
	  section.data(18).logicalSrcIdx = 22;
	  section.data(18).dtTransOffset = 20;
	
	  ;% udp_conn_P.G_zero_Value
	  section.data(19).logicalSrcIdx = 23;
	  section.data(19).dtTransOffset = 21;
	
	  ;% udp_conn_P.S_zero_Value
	  section.data(20).logicalSrcIdx = 24;
	  section.data(20).dtTransOffset = 22;
	
	  ;% udp_conn_P.ymin_scale2_Gain
	  section.data(21).logicalSrcIdx = 25;
	  section.data(21).dtTransOffset = 23;
	
	  ;% udp_conn_P.switch_zero_Value
	  section.data(22).logicalSrcIdx = 26;
	  section.data(22).dtTransOffset = 24;
	
	  ;% udp_conn_P.extmv_zero_Value
	  section.data(23).logicalSrcIdx = 27;
	  section.data(23).dtTransOffset = 25;
	
	  ;% udp_conn_P.extmv_scale_Gain
	  section.data(24).logicalSrcIdx = 28;
	  section.data(24).dtTransOffset = 26;
	
	  ;% udp_conn_P.mvtarget_zero_Value
	  section.data(25).logicalSrcIdx = 29;
	  section.data(25).dtTransOffset = 27;
	
	  ;% udp_conn_P.extmv_scale1_Gain
	  section.data(26).logicalSrcIdx = 30;
	  section.data(26).dtTransOffset = 28;
	
	  ;% udp_conn_P.tref3_Value
	  section.data(27).logicalSrcIdx = 31;
	  section.data(27).dtTransOffset = 29;
	
	  ;% udp_conn_P.tref4_Value
	  section.data(28).logicalSrcIdx = 32;
	  section.data(28).dtTransOffset = 30;
	
	  ;% udp_conn_P.tref2_Value
	  section.data(29).logicalSrcIdx = 33;
	  section.data(29).dtTransOffset = 31;
	
	  ;% udp_conn_P.ecrwt_zero_Value
	  section.data(30).logicalSrcIdx = 34;
	  section.data(30).dtTransOffset = 32;
	
	  ;% udp_conn_P.umin_scale1_Gain
	  section.data(31).logicalSrcIdx = 35;
	  section.data(31).dtTransOffset = 33;
	
      nTotData = nTotData + section.nData;
      paramMap.sections(4) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% udp_conn_P.Memory_InitialCondition
	  section.data(1).logicalSrcIdx = 36;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      paramMap.sections(5) = section;
      clear section
      
      section.nData     = 4;
      section.data(4)  = dumData; %prealloc
      
	  ;% udp_conn_P.Gain2_Gain
	  section.data(1).logicalSrcIdx = 37;
	  section.data(1).dtTransOffset = 0;
	
	  ;% udp_conn_P.Gain3_Gain
	  section.data(2).logicalSrcIdx = 38;
	  section.data(2).dtTransOffset = 1;
	
	  ;% udp_conn_P.Switch_Threshold
	  section.data(3).logicalSrcIdx = 39;
	  section.data(3).dtTransOffset = 2;
	
	  ;% udp_conn_P.Switch1_Threshold
	  section.data(4).logicalSrcIdx = 40;
	  section.data(4).dtTransOffset = 3;
	
      nTotData = nTotData + section.nData;
      paramMap.sections(6) = section;
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
    nTotSects     = 5;
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
      section.nData     = 19;
      section.data(19)  = dumData; %prealloc
      
	  ;% udp_conn_B.Gain1
	  section.data(1).logicalSrcIdx = 0;
	  section.data(1).dtTransOffset = 0;
	
	  ;% udp_conn_B.Sum1
	  section.data(2).logicalSrcIdx = 1;
	  section.data(2).dtTransOffset = 1;
	
	  ;% udp_conn_B.RateTransition2
	  section.data(3).logicalSrcIdx = 2;
	  section.data(3).dtTransOffset = 2;
	
	  ;% udp_conn_B.Constant2
	  section.data(4).logicalSrcIdx = 3;
	  section.data(4).dtTransOffset = 3;
	
	  ;% udp_conn_B.Gain
	  section.data(5).logicalSrcIdx = 4;
	  section.data(5).dtTransOffset = 4;
	
	  ;% udp_conn_B.Sum
	  section.data(6).logicalSrcIdx = 5;
	  section.data(6).dtTransOffset = 5;
	
	  ;% udp_conn_B.RateTransition1
	  section.data(7).logicalSrcIdx = 6;
	  section.data(7).dtTransOffset = 6;
	
	  ;% udp_conn_B.tref3
	  section.data(8).logicalSrcIdx = 7;
	  section.data(8).dtTransOffset = 7;
	
	  ;% udp_conn_B.tref4
	  section.data(9).logicalSrcIdx = 8;
	  section.data(9).dtTransOffset = 8;
	
	  ;% udp_conn_B.tref2
	  section.data(10).logicalSrcIdx = 9;
	  section.data(10).dtTransOffset = 9;
	
	  ;% udp_conn_B.umin_scale1
	  section.data(11).logicalSrcIdx = 10;
	  section.data(11).dtTransOffset = 10;
	
	  ;% udp_conn_B.time_UTC1
	  section.data(12).logicalSrcIdx = 11;
	  section.data(12).dtTransOffset = 11;
	
	  ;% udp_conn_B.time_UTC1_a
	  section.data(13).logicalSrcIdx = 12;
	  section.data(13).dtTransOffset = 15;
	
	  ;% udp_conn_B.time_UTC1_i
	  section.data(14).logicalSrcIdx = 13;
	  section.data(14).dtTransOffset = 19;
	
	  ;% udp_conn_B.time_UTC1_c
	  section.data(15).logicalSrcIdx = 14;
	  section.data(15).dtTransOffset = 23;
	
	  ;% udp_conn_B.RateTransition4
	  section.data(16).logicalSrcIdx = 15;
	  section.data(16).dtTransOffset = 27;
	
	  ;% udp_conn_B.RateTransition6
	  section.data(17).logicalSrcIdx = 16;
	  section.data(17).dtTransOffset = 28;
	
	  ;% udp_conn_B.xk1
	  section.data(18).logicalSrcIdx = 17;
	  section.data(18).dtTransOffset = 29;
	
	  ;% udp_conn_B.u
	  section.data(19).logicalSrcIdx = 18;
	  section.data(19).dtTransOffset = 33;
	
      nTotData = nTotData + section.nData;
      sigMap.sections(1) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% udp_conn_B.PacketInput1_o15
	  section.data(1).logicalSrcIdx = 19;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      sigMap.sections(2) = section;
      clear section
      
      section.nData     = 4;
      section.data(4)  = dumData; %prealloc
      
	  ;% udp_conn_B.Sum2
	  section.data(1).logicalSrcIdx = 20;
	  section.data(1).dtTransOffset = 0;
	
	  ;% udp_conn_B.Sum3
	  section.data(2).logicalSrcIdx = 21;
	  section.data(2).dtTransOffset = 1;
	
	  ;% udp_conn_B.Switch
	  section.data(3).logicalSrcIdx = 22;
	  section.data(3).dtTransOffset = 2;
	
	  ;% udp_conn_B.Switch1
	  section.data(4).logicalSrcIdx = 23;
	  section.data(4).dtTransOffset = 3;
	
      nTotData = nTotData + section.nData;
      sigMap.sections(3) = section;
      clear section
      
      section.nData     = 15;
      section.data(15)  = dumData; %prealloc
      
	  ;% udp_conn_B.PacketInput1_o1
	  section.data(1).logicalSrcIdx = 24;
	  section.data(1).dtTransOffset = 0;
	
	  ;% udp_conn_B.PacketInput1_o2
	  section.data(2).logicalSrcIdx = 25;
	  section.data(2).dtTransOffset = 1;
	
	  ;% udp_conn_B.PacketInput1_o3
	  section.data(3).logicalSrcIdx = 26;
	  section.data(3).dtTransOffset = 2;
	
	  ;% udp_conn_B.PacketInput1_o4
	  section.data(4).logicalSrcIdx = 27;
	  section.data(4).dtTransOffset = 3;
	
	  ;% udp_conn_B.PacketInput1_o5
	  section.data(5).logicalSrcIdx = 28;
	  section.data(5).dtTransOffset = 4;
	
	  ;% udp_conn_B.PacketInput1_o6
	  section.data(6).logicalSrcIdx = 29;
	  section.data(6).dtTransOffset = 5;
	
	  ;% udp_conn_B.PacketInput1_o7
	  section.data(7).logicalSrcIdx = 30;
	  section.data(7).dtTransOffset = 6;
	
	  ;% udp_conn_B.PacketInput1_o8
	  section.data(8).logicalSrcIdx = 31;
	  section.data(8).dtTransOffset = 7;
	
	  ;% udp_conn_B.PacketInput1_o9
	  section.data(9).logicalSrcIdx = 32;
	  section.data(9).dtTransOffset = 8;
	
	  ;% udp_conn_B.PacketInput1_o10
	  section.data(10).logicalSrcIdx = 33;
	  section.data(10).dtTransOffset = 9;
	
	  ;% udp_conn_B.PacketInput1_o11
	  section.data(11).logicalSrcIdx = 34;
	  section.data(11).dtTransOffset = 10;
	
	  ;% udp_conn_B.PacketInput1_o12
	  section.data(12).logicalSrcIdx = 35;
	  section.data(12).dtTransOffset = 11;
	
	  ;% udp_conn_B.PacketInput1_o13
	  section.data(13).logicalSrcIdx = 36;
	  section.data(13).dtTransOffset = 12;
	
	  ;% udp_conn_B.PacketInput1_o14
	  section.data(14).logicalSrcIdx = 37;
	  section.data(14).dtTransOffset = 13;
	
	  ;% udp_conn_B.Compare
	  section.data(15).logicalSrcIdx = 38;
	  section.data(15).dtTransOffset = 14;
	
      nTotData = nTotData + section.nData;
      sigMap.sections(4) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% udp_conn_B.iAout
	  section.data(1).logicalSrcIdx = 39;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      sigMap.sections(5) = section;
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
    sectIdxOffset = 5;
    
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
      
	  ;% udp_conn_DW.last_mv_DSTATE
	  section.data(1).logicalSrcIdx = 0;
	  section.data(1).dtTransOffset = 0;
	
	  ;% udp_conn_DW.last_x_PreviousInput
	  section.data(2).logicalSrcIdx = 1;
	  section.data(2).dtTransOffset = 1;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(1) = section;
      clear section
      
      section.nData     = 4;
      section.data(4)  = dumData; %prealloc
      
	  ;% udp_conn_DW.PacketInput1_PWORK
	  section.data(1).logicalSrcIdx = 2;
	  section.data(1).dtTransOffset = 0;
	
	  ;% udp_conn_DW.PlotResults2_PWORK.LoggedData
	  section.data(2).logicalSrcIdx = 3;
	  section.data(2).dtTransOffset = 1;
	
	  ;% udp_conn_DW.Scope1_PWORK.LoggedData
	  section.data(3).logicalSrcIdx = 4;
	  section.data(3).dtTransOffset = 2;
	
	  ;% udp_conn_DW.Scope2_PWORK.LoggedData
	  section.data(4).logicalSrcIdx = 5;
	  section.data(4).dtTransOffset = 4;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(2) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% udp_conn_DW.Memory_PreviousInput
	  section.data(1).logicalSrcIdx = 6;
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


  targMap.checksum0 = 2109982856;
  targMap.checksum1 = 3987842756;
  targMap.checksum2 = 2661924319;
  targMap.checksum3 = 3525155547;

