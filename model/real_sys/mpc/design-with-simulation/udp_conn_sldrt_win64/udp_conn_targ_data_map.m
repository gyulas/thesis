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
      
      section.nData     = 115;
      section.data(115)  = dumData; %prealloc
      
	  ;% udp_conn_P.last_x_InitialCondition
	  section.data(1).logicalSrcIdx = 5;
	  section.data(1).dtTransOffset = 0;
	
	  ;% udp_conn_P.last_mv_InitialCondition
	  section.data(2).logicalSrcIdx = 6;
	  section.data(2).dtTransOffset = 4;
	
	  ;% udp_conn_P.Gain_Gain
	  section.data(3).logicalSrcIdx = 7;
	  section.data(3).dtTransOffset = 5;
	
	  ;% udp_conn_P.Constant1_Value
	  section.data(4).logicalSrcIdx = 8;
	  section.data(4).dtTransOffset = 6;
	
	  ;% udp_conn_P.Constant2_Value
	  section.data(5).logicalSrcIdx = 9;
	  section.data(5).dtTransOffset = 7;
	
	  ;% udp_conn_P.Gain1_Gain
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
	
	  ;% udp_conn_P.ywt_zero_Value
	  section.data(27).logicalSrcIdx = 31;
	  section.data(27).dtTransOffset = 29;
	
	  ;% udp_conn_P.uwt_zero_Value
	  section.data(28).logicalSrcIdx = 32;
	  section.data(28).dtTransOffset = 30;
	
	  ;% udp_conn_P.duwt_zero_Value
	  section.data(29).logicalSrcIdx = 33;
	  section.data(29).dtTransOffset = 31;
	
	  ;% udp_conn_P.ecrwt_zero_Value
	  section.data(30).logicalSrcIdx = 34;
	  section.data(30).dtTransOffset = 32;
	
	  ;% udp_conn_P.umin_scale1_Gain
	  section.data(31).logicalSrcIdx = 35;
	  section.data(31).dtTransOffset = 33;
	
	  ;% udp_conn_P.last_x_InitialCondition_c
	  section.data(32).logicalSrcIdx = 36;
	  section.data(32).dtTransOffset = 34;
	
	  ;% udp_conn_P.last_mv_InitialCondition_k
	  section.data(33).logicalSrcIdx = 37;
	  section.data(33).dtTransOffset = 38;
	
	  ;% udp_conn_P.Constant4_Value
	  section.data(34).logicalSrcIdx = 38;
	  section.data(34).dtTransOffset = 39;
	
	  ;% udp_conn_P.umin_zero_Value_p
	  section.data(35).logicalSrcIdx = 39;
	  section.data(35).dtTransOffset = 40;
	
	  ;% udp_conn_P.umin_scale_Gain_g
	  section.data(36).logicalSrcIdx = 40;
	  section.data(36).dtTransOffset = 41;
	
	  ;% udp_conn_P.umax_zero_Value_d
	  section.data(37).logicalSrcIdx = 41;
	  section.data(37).dtTransOffset = 42;
	
	  ;% udp_conn_P.umax_scale_Gain_h
	  section.data(38).logicalSrcIdx = 42;
	  section.data(38).dtTransOffset = 43;
	
	  ;% udp_conn_P.ymin_zero_Value_d
	  section.data(39).logicalSrcIdx = 43;
	  section.data(39).dtTransOffset = 44;
	
	  ;% udp_conn_P.ymin_scale_Gain_m
	  section.data(40).logicalSrcIdx = 44;
	  section.data(40).dtTransOffset = 45;
	
	  ;% udp_conn_P.ymax_zero_Value_d
	  section.data(41).logicalSrcIdx = 45;
	  section.data(41).dtTransOffset = 46;
	
	  ;% udp_conn_P.ymax_scale_Gain_j
	  section.data(42).logicalSrcIdx = 46;
	  section.data(42).dtTransOffset = 47;
	
	  ;% udp_conn_P.E_zero_Value_f
	  section.data(43).logicalSrcIdx = 47;
	  section.data(43).dtTransOffset = 48;
	
	  ;% udp_conn_P.umin_scale4_Gain_a
	  section.data(44).logicalSrcIdx = 48;
	  section.data(44).dtTransOffset = 49;
	
	  ;% udp_conn_P.F_zero_Value_j
	  section.data(45).logicalSrcIdx = 49;
	  section.data(45).dtTransOffset = 50;
	
	  ;% udp_conn_P.ymin_scale1_Gain_f
	  section.data(46).logicalSrcIdx = 50;
	  section.data(46).dtTransOffset = 51;
	
	  ;% udp_conn_P.G_zero_Value_k
	  section.data(47).logicalSrcIdx = 51;
	  section.data(47).dtTransOffset = 52;
	
	  ;% udp_conn_P.S_zero_Value_d
	  section.data(48).logicalSrcIdx = 52;
	  section.data(48).dtTransOffset = 53;
	
	  ;% udp_conn_P.ymin_scale2_Gain_n
	  section.data(49).logicalSrcIdx = 53;
	  section.data(49).dtTransOffset = 54;
	
	  ;% udp_conn_P.switch_zero_Value_k
	  section.data(50).logicalSrcIdx = 54;
	  section.data(50).dtTransOffset = 55;
	
	  ;% udp_conn_P.extmv_zero_Value_k
	  section.data(51).logicalSrcIdx = 55;
	  section.data(51).dtTransOffset = 56;
	
	  ;% udp_conn_P.extmv_scale_Gain_i
	  section.data(52).logicalSrcIdx = 56;
	  section.data(52).dtTransOffset = 57;
	
	  ;% udp_conn_P.mvtarget_zero_Value_i
	  section.data(53).logicalSrcIdx = 57;
	  section.data(53).dtTransOffset = 58;
	
	  ;% udp_conn_P.extmv_scale1_Gain_d
	  section.data(54).logicalSrcIdx = 58;
	  section.data(54).dtTransOffset = 59;
	
	  ;% udp_conn_P.ywt_zero_Value_a
	  section.data(55).logicalSrcIdx = 59;
	  section.data(55).dtTransOffset = 60;
	
	  ;% udp_conn_P.uwt_zero_Value_b
	  section.data(56).logicalSrcIdx = 60;
	  section.data(56).dtTransOffset = 61;
	
	  ;% udp_conn_P.duwt_zero_Value_e
	  section.data(57).logicalSrcIdx = 61;
	  section.data(57).dtTransOffset = 62;
	
	  ;% udp_conn_P.ecrwt_zero_Value_k
	  section.data(58).logicalSrcIdx = 62;
	  section.data(58).dtTransOffset = 63;
	
	  ;% udp_conn_P.umin_scale1_Gain_n
	  section.data(59).logicalSrcIdx = 63;
	  section.data(59).dtTransOffset = 64;
	
	  ;% udp_conn_P.last_x_InitialCondition_ck
	  section.data(60).logicalSrcIdx = 64;
	  section.data(60).dtTransOffset = 65;
	
	  ;% udp_conn_P.last_mv_InitialCondition_b
	  section.data(61).logicalSrcIdx = 65;
	  section.data(61).dtTransOffset = 69;
	
	  ;% udp_conn_P.Constant5_Value
	  section.data(62).logicalSrcIdx = 66;
	  section.data(62).dtTransOffset = 70;
	
	  ;% udp_conn_P.umin_zero_Value_pz
	  section.data(63).logicalSrcIdx = 67;
	  section.data(63).dtTransOffset = 71;
	
	  ;% udp_conn_P.umin_scale_Gain_j
	  section.data(64).logicalSrcIdx = 68;
	  section.data(64).dtTransOffset = 72;
	
	  ;% udp_conn_P.umax_zero_Value_a
	  section.data(65).logicalSrcIdx = 69;
	  section.data(65).dtTransOffset = 73;
	
	  ;% udp_conn_P.umax_scale_Gain_p
	  section.data(66).logicalSrcIdx = 70;
	  section.data(66).dtTransOffset = 74;
	
	  ;% udp_conn_P.ymin_zero_Value_h
	  section.data(67).logicalSrcIdx = 71;
	  section.data(67).dtTransOffset = 75;
	
	  ;% udp_conn_P.ymin_scale_Gain_p
	  section.data(68).logicalSrcIdx = 72;
	  section.data(68).dtTransOffset = 76;
	
	  ;% udp_conn_P.ymax_zero_Value_n
	  section.data(69).logicalSrcIdx = 73;
	  section.data(69).dtTransOffset = 77;
	
	  ;% udp_conn_P.ymax_scale_Gain_o
	  section.data(70).logicalSrcIdx = 74;
	  section.data(70).dtTransOffset = 78;
	
	  ;% udp_conn_P.E_zero_Value_fv
	  section.data(71).logicalSrcIdx = 75;
	  section.data(71).dtTransOffset = 79;
	
	  ;% udp_conn_P.umin_scale4_Gain_o
	  section.data(72).logicalSrcIdx = 76;
	  section.data(72).dtTransOffset = 80;
	
	  ;% udp_conn_P.F_zero_Value_m
	  section.data(73).logicalSrcIdx = 77;
	  section.data(73).dtTransOffset = 81;
	
	  ;% udp_conn_P.ymin_scale1_Gain_m
	  section.data(74).logicalSrcIdx = 78;
	  section.data(74).dtTransOffset = 82;
	
	  ;% udp_conn_P.G_zero_Value_a
	  section.data(75).logicalSrcIdx = 79;
	  section.data(75).dtTransOffset = 83;
	
	  ;% udp_conn_P.S_zero_Value_h
	  section.data(76).logicalSrcIdx = 80;
	  section.data(76).dtTransOffset = 84;
	
	  ;% udp_conn_P.ymin_scale2_Gain_i
	  section.data(77).logicalSrcIdx = 81;
	  section.data(77).dtTransOffset = 85;
	
	  ;% udp_conn_P.switch_zero_Value_o
	  section.data(78).logicalSrcIdx = 82;
	  section.data(78).dtTransOffset = 86;
	
	  ;% udp_conn_P.extmv_zero_Value_e
	  section.data(79).logicalSrcIdx = 83;
	  section.data(79).dtTransOffset = 87;
	
	  ;% udp_conn_P.extmv_scale_Gain_m
	  section.data(80).logicalSrcIdx = 84;
	  section.data(80).dtTransOffset = 88;
	
	  ;% udp_conn_P.mvtarget_zero_Value_g
	  section.data(81).logicalSrcIdx = 85;
	  section.data(81).dtTransOffset = 89;
	
	  ;% udp_conn_P.extmv_scale1_Gain_e
	  section.data(82).logicalSrcIdx = 86;
	  section.data(82).dtTransOffset = 90;
	
	  ;% udp_conn_P.ywt_zero_Value_c
	  section.data(83).logicalSrcIdx = 87;
	  section.data(83).dtTransOffset = 91;
	
	  ;% udp_conn_P.uwt_zero_Value_k
	  section.data(84).logicalSrcIdx = 88;
	  section.data(84).dtTransOffset = 92;
	
	  ;% udp_conn_P.duwt_zero_Value_l
	  section.data(85).logicalSrcIdx = 89;
	  section.data(85).dtTransOffset = 93;
	
	  ;% udp_conn_P.ecrwt_zero_Value_e
	  section.data(86).logicalSrcIdx = 90;
	  section.data(86).dtTransOffset = 94;
	
	  ;% udp_conn_P.umin_scale1_Gain_g
	  section.data(87).logicalSrcIdx = 91;
	  section.data(87).dtTransOffset = 95;
	
	  ;% udp_conn_P.last_x_InitialCondition_n
	  section.data(88).logicalSrcIdx = 92;
	  section.data(88).dtTransOffset = 96;
	
	  ;% udp_conn_P.last_mv_InitialCondition_a
	  section.data(89).logicalSrcIdx = 93;
	  section.data(89).dtTransOffset = 100;
	
	  ;% udp_conn_P.Constant3_Value
	  section.data(90).logicalSrcIdx = 94;
	  section.data(90).dtTransOffset = 101;
	
	  ;% udp_conn_P.umin_zero_Value_g
	  section.data(91).logicalSrcIdx = 95;
	  section.data(91).dtTransOffset = 102;
	
	  ;% udp_conn_P.umin_scale_Gain_o
	  section.data(92).logicalSrcIdx = 96;
	  section.data(92).dtTransOffset = 103;
	
	  ;% udp_conn_P.umax_zero_Value_dj
	  section.data(93).logicalSrcIdx = 97;
	  section.data(93).dtTransOffset = 104;
	
	  ;% udp_conn_P.umax_scale_Gain_n
	  section.data(94).logicalSrcIdx = 98;
	  section.data(94).dtTransOffset = 105;
	
	  ;% udp_conn_P.ymin_zero_Value_n
	  section.data(95).logicalSrcIdx = 99;
	  section.data(95).dtTransOffset = 106;
	
	  ;% udp_conn_P.ymin_scale_Gain_g
	  section.data(96).logicalSrcIdx = 100;
	  section.data(96).dtTransOffset = 107;
	
	  ;% udp_conn_P.ymax_zero_Value_l
	  section.data(97).logicalSrcIdx = 101;
	  section.data(97).dtTransOffset = 108;
	
	  ;% udp_conn_P.ymax_scale_Gain_b
	  section.data(98).logicalSrcIdx = 102;
	  section.data(98).dtTransOffset = 109;
	
	  ;% udp_conn_P.E_zero_Value_i
	  section.data(99).logicalSrcIdx = 103;
	  section.data(99).dtTransOffset = 110;
	
	  ;% udp_conn_P.umin_scale4_Gain_a5
	  section.data(100).logicalSrcIdx = 104;
	  section.data(100).dtTransOffset = 111;
	
	  ;% udp_conn_P.F_zero_Value_g
	  section.data(101).logicalSrcIdx = 105;
	  section.data(101).dtTransOffset = 112;
	
	  ;% udp_conn_P.ymin_scale1_Gain_b
	  section.data(102).logicalSrcIdx = 106;
	  section.data(102).dtTransOffset = 113;
	
	  ;% udp_conn_P.G_zero_Value_e
	  section.data(103).logicalSrcIdx = 107;
	  section.data(103).dtTransOffset = 114;
	
	  ;% udp_conn_P.S_zero_Value_e
	  section.data(104).logicalSrcIdx = 108;
	  section.data(104).dtTransOffset = 115;
	
	  ;% udp_conn_P.ymin_scale2_Gain_b
	  section.data(105).logicalSrcIdx = 109;
	  section.data(105).dtTransOffset = 116;
	
	  ;% udp_conn_P.switch_zero_Value_n
	  section.data(106).logicalSrcIdx = 110;
	  section.data(106).dtTransOffset = 117;
	
	  ;% udp_conn_P.extmv_zero_Value_j
	  section.data(107).logicalSrcIdx = 111;
	  section.data(107).dtTransOffset = 118;
	
	  ;% udp_conn_P.extmv_scale_Gain_f
	  section.data(108).logicalSrcIdx = 112;
	  section.data(108).dtTransOffset = 119;
	
	  ;% udp_conn_P.mvtarget_zero_Value_b
	  section.data(109).logicalSrcIdx = 113;
	  section.data(109).dtTransOffset = 120;
	
	  ;% udp_conn_P.extmv_scale1_Gain_dp
	  section.data(110).logicalSrcIdx = 114;
	  section.data(110).dtTransOffset = 121;
	
	  ;% udp_conn_P.ywt_zero_Value_f
	  section.data(111).logicalSrcIdx = 115;
	  section.data(111).dtTransOffset = 122;
	
	  ;% udp_conn_P.uwt_zero_Value_j
	  section.data(112).logicalSrcIdx = 116;
	  section.data(112).dtTransOffset = 123;
	
	  ;% udp_conn_P.duwt_zero_Value_k
	  section.data(113).logicalSrcIdx = 117;
	  section.data(113).dtTransOffset = 124;
	
	  ;% udp_conn_P.ecrwt_zero_Value_h
	  section.data(114).logicalSrcIdx = 118;
	  section.data(114).dtTransOffset = 125;
	
	  ;% udp_conn_P.umin_scale1_Gain_b
	  section.data(115).logicalSrcIdx = 119;
	  section.data(115).dtTransOffset = 126;
	
      nTotData = nTotData + section.nData;
      paramMap.sections(4) = section;
      clear section
      
      section.nData     = 4;
      section.data(4)  = dumData; %prealloc
      
	  ;% udp_conn_P.Memory_InitialCondition
	  section.data(1).logicalSrcIdx = 120;
	  section.data(1).dtTransOffset = 0;
	
	  ;% udp_conn_P.Memory_InitialCondition_n
	  section.data(2).logicalSrcIdx = 121;
	  section.data(2).dtTransOffset = 2;
	
	  ;% udp_conn_P.Memory_InitialCondition_g
	  section.data(3).logicalSrcIdx = 122;
	  section.data(3).dtTransOffset = 4;
	
	  ;% udp_conn_P.Memory_InitialCondition_l
	  section.data(4).logicalSrcIdx = 123;
	  section.data(4).dtTransOffset = 6;
	
      nTotData = nTotData + section.nData;
      paramMap.sections(5) = section;
      clear section
      
      section.nData     = 4;
      section.data(4)  = dumData; %prealloc
      
	  ;% udp_conn_P.Gain2_Gain
	  section.data(1).logicalSrcIdx = 124;
	  section.data(1).dtTransOffset = 0;
	
	  ;% udp_conn_P.Gain3_Gain
	  section.data(2).logicalSrcIdx = 125;
	  section.data(2).dtTransOffset = 1;
	
	  ;% udp_conn_P.Switch_Threshold
	  section.data(3).logicalSrcIdx = 126;
	  section.data(3).dtTransOffset = 2;
	
	  ;% udp_conn_P.Switch1_Threshold
	  section.data(4).logicalSrcIdx = 127;
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
      section.nData     = 24;
      section.data(24)  = dumData; %prealloc
      
	  ;% udp_conn_B.Gain
	  section.data(1).logicalSrcIdx = 0;
	  section.data(1).dtTransOffset = 0;
	
	  ;% udp_conn_B.Sum
	  section.data(2).logicalSrcIdx = 1;
	  section.data(2).dtTransOffset = 1;
	
	  ;% udp_conn_B.RateTransition1
	  section.data(3).logicalSrcIdx = 2;
	  section.data(3).dtTransOffset = 2;
	
	  ;% udp_conn_B.Constant2
	  section.data(4).logicalSrcIdx = 3;
	  section.data(4).dtTransOffset = 3;
	
	  ;% udp_conn_B.Gain1
	  section.data(5).logicalSrcIdx = 4;
	  section.data(5).dtTransOffset = 4;
	
	  ;% udp_conn_B.Sum1
	  section.data(6).logicalSrcIdx = 5;
	  section.data(6).dtTransOffset = 5;
	
	  ;% udp_conn_B.RateTransition2
	  section.data(7).logicalSrcIdx = 6;
	  section.data(7).dtTransOffset = 6;
	
	  ;% udp_conn_B.umin_scale1
	  section.data(8).logicalSrcIdx = 7;
	  section.data(8).dtTransOffset = 7;
	
	  ;% udp_conn_B.time_UTC1
	  section.data(9).logicalSrcIdx = 8;
	  section.data(9).dtTransOffset = 8;
	
	  ;% udp_conn_B.time_UTC1_a
	  section.data(10).logicalSrcIdx = 9;
	  section.data(10).dtTransOffset = 12;
	
	  ;% udp_conn_B.umin_scale1_g
	  section.data(11).logicalSrcIdx = 10;
	  section.data(11).dtTransOffset = 16;
	
	  ;% udp_conn_B.umin_scale1_gc
	  section.data(12).logicalSrcIdx = 11;
	  section.data(12).dtTransOffset = 17;
	
	  ;% udp_conn_B.time_UTC1_i
	  section.data(13).logicalSrcIdx = 12;
	  section.data(13).dtTransOffset = 18;
	
	  ;% udp_conn_B.RateTransition4
	  section.data(14).logicalSrcIdx = 13;
	  section.data(14).dtTransOffset = 22;
	
	  ;% udp_conn_B.RateTransition6
	  section.data(15).logicalSrcIdx = 14;
	  section.data(15).dtTransOffset = 23;
	
	  ;% udp_conn_B.umin_scale1_o
	  section.data(16).logicalSrcIdx = 15;
	  section.data(16).dtTransOffset = 24;
	
	  ;% udp_conn_B.xk1
	  section.data(17).logicalSrcIdx = 16;
	  section.data(17).dtTransOffset = 25;
	
	  ;% udp_conn_B.u
	  section.data(18).logicalSrcIdx = 17;
	  section.data(18).dtTransOffset = 29;
	
	  ;% udp_conn_B.xk1_k
	  section.data(19).logicalSrcIdx = 18;
	  section.data(19).dtTransOffset = 30;
	
	  ;% udp_conn_B.u_n
	  section.data(20).logicalSrcIdx = 19;
	  section.data(20).dtTransOffset = 34;
	
	  ;% udp_conn_B.xk1_p
	  section.data(21).logicalSrcIdx = 20;
	  section.data(21).dtTransOffset = 35;
	
	  ;% udp_conn_B.u_j
	  section.data(22).logicalSrcIdx = 21;
	  section.data(22).dtTransOffset = 39;
	
	  ;% udp_conn_B.xk1_c
	  section.data(23).logicalSrcIdx = 22;
	  section.data(23).dtTransOffset = 40;
	
	  ;% udp_conn_B.u_c
	  section.data(24).logicalSrcIdx = 23;
	  section.data(24).dtTransOffset = 44;
	
      nTotData = nTotData + section.nData;
      sigMap.sections(1) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% udp_conn_B.PacketInput1_o15
	  section.data(1).logicalSrcIdx = 24;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      sigMap.sections(2) = section;
      clear section
      
      section.nData     = 4;
      section.data(4)  = dumData; %prealloc
      
	  ;% udp_conn_B.Sum2
	  section.data(1).logicalSrcIdx = 25;
	  section.data(1).dtTransOffset = 0;
	
	  ;% udp_conn_B.Sum3
	  section.data(2).logicalSrcIdx = 26;
	  section.data(2).dtTransOffset = 1;
	
	  ;% udp_conn_B.Switch
	  section.data(3).logicalSrcIdx = 27;
	  section.data(3).dtTransOffset = 2;
	
	  ;% udp_conn_B.Switch1
	  section.data(4).logicalSrcIdx = 28;
	  section.data(4).dtTransOffset = 3;
	
      nTotData = nTotData + section.nData;
      sigMap.sections(3) = section;
      clear section
      
      section.nData     = 15;
      section.data(15)  = dumData; %prealloc
      
	  ;% udp_conn_B.PacketInput1_o1
	  section.data(1).logicalSrcIdx = 29;
	  section.data(1).dtTransOffset = 0;
	
	  ;% udp_conn_B.PacketInput1_o2
	  section.data(2).logicalSrcIdx = 30;
	  section.data(2).dtTransOffset = 1;
	
	  ;% udp_conn_B.PacketInput1_o3
	  section.data(3).logicalSrcIdx = 31;
	  section.data(3).dtTransOffset = 2;
	
	  ;% udp_conn_B.PacketInput1_o4
	  section.data(4).logicalSrcIdx = 32;
	  section.data(4).dtTransOffset = 3;
	
	  ;% udp_conn_B.PacketInput1_o5
	  section.data(5).logicalSrcIdx = 33;
	  section.data(5).dtTransOffset = 4;
	
	  ;% udp_conn_B.PacketInput1_o6
	  section.data(6).logicalSrcIdx = 34;
	  section.data(6).dtTransOffset = 5;
	
	  ;% udp_conn_B.PacketInput1_o7
	  section.data(7).logicalSrcIdx = 35;
	  section.data(7).dtTransOffset = 6;
	
	  ;% udp_conn_B.PacketInput1_o8
	  section.data(8).logicalSrcIdx = 36;
	  section.data(8).dtTransOffset = 7;
	
	  ;% udp_conn_B.PacketInput1_o9
	  section.data(9).logicalSrcIdx = 37;
	  section.data(9).dtTransOffset = 8;
	
	  ;% udp_conn_B.PacketInput1_o10
	  section.data(10).logicalSrcIdx = 38;
	  section.data(10).dtTransOffset = 9;
	
	  ;% udp_conn_B.PacketInput1_o11
	  section.data(11).logicalSrcIdx = 39;
	  section.data(11).dtTransOffset = 10;
	
	  ;% udp_conn_B.PacketInput1_o12
	  section.data(12).logicalSrcIdx = 40;
	  section.data(12).dtTransOffset = 11;
	
	  ;% udp_conn_B.PacketInput1_o13
	  section.data(13).logicalSrcIdx = 41;
	  section.data(13).dtTransOffset = 12;
	
	  ;% udp_conn_B.PacketInput1_o14
	  section.data(14).logicalSrcIdx = 42;
	  section.data(14).dtTransOffset = 13;
	
	  ;% udp_conn_B.Compare
	  section.data(15).logicalSrcIdx = 43;
	  section.data(15).dtTransOffset = 14;
	
      nTotData = nTotData + section.nData;
      sigMap.sections(4) = section;
      clear section
      
      section.nData     = 4;
      section.data(4)  = dumData; %prealloc
      
	  ;% udp_conn_B.iAout
	  section.data(1).logicalSrcIdx = 44;
	  section.data(1).dtTransOffset = 0;
	
	  ;% udp_conn_B.iAout_f
	  section.data(2).logicalSrcIdx = 45;
	  section.data(2).dtTransOffset = 2;
	
	  ;% udp_conn_B.iAout_a
	  section.data(3).logicalSrcIdx = 46;
	  section.data(3).dtTransOffset = 4;
	
	  ;% udp_conn_B.iAout_l
	  section.data(4).logicalSrcIdx = 47;
	  section.data(4).dtTransOffset = 6;
	
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
      section.nData     = 8;
      section.data(8)  = dumData; %prealloc
      
	  ;% udp_conn_DW.last_mv_DSTATE
	  section.data(1).logicalSrcIdx = 0;
	  section.data(1).dtTransOffset = 0;
	
	  ;% udp_conn_DW.last_mv_DSTATE_c
	  section.data(2).logicalSrcIdx = 1;
	  section.data(2).dtTransOffset = 1;
	
	  ;% udp_conn_DW.last_mv_DSTATE_m
	  section.data(3).logicalSrcIdx = 2;
	  section.data(3).dtTransOffset = 2;
	
	  ;% udp_conn_DW.last_mv_DSTATE_cl
	  section.data(4).logicalSrcIdx = 3;
	  section.data(4).dtTransOffset = 3;
	
	  ;% udp_conn_DW.last_x_PreviousInput
	  section.data(5).logicalSrcIdx = 4;
	  section.data(5).dtTransOffset = 4;
	
	  ;% udp_conn_DW.last_x_PreviousInput_a
	  section.data(6).logicalSrcIdx = 5;
	  section.data(6).dtTransOffset = 8;
	
	  ;% udp_conn_DW.last_x_PreviousInput_g
	  section.data(7).logicalSrcIdx = 6;
	  section.data(7).dtTransOffset = 12;
	
	  ;% udp_conn_DW.last_x_PreviousInput_b
	  section.data(8).logicalSrcIdx = 7;
	  section.data(8).dtTransOffset = 16;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(1) = section;
      clear section
      
      section.nData     = 3;
      section.data(3)  = dumData; %prealloc
      
	  ;% udp_conn_DW.PacketInput1_PWORK
	  section.data(1).logicalSrcIdx = 8;
	  section.data(1).dtTransOffset = 0;
	
	  ;% udp_conn_DW.Scope_PWORK.LoggedData
	  section.data(2).logicalSrcIdx = 9;
	  section.data(2).dtTransOffset = 1;
	
	  ;% udp_conn_DW.Scope1_PWORK.LoggedData
	  section.data(3).logicalSrcIdx = 10;
	  section.data(3).dtTransOffset = 4;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(2) = section;
      clear section
      
      section.nData     = 4;
      section.data(4)  = dumData; %prealloc
      
	  ;% udp_conn_DW.Memory_PreviousInput
	  section.data(1).logicalSrcIdx = 11;
	  section.data(1).dtTransOffset = 0;
	
	  ;% udp_conn_DW.Memory_PreviousInput_o
	  section.data(2).logicalSrcIdx = 12;
	  section.data(2).dtTransOffset = 2;
	
	  ;% udp_conn_DW.Memory_PreviousInput_g
	  section.data(3).logicalSrcIdx = 13;
	  section.data(3).dtTransOffset = 4;
	
	  ;% udp_conn_DW.Memory_PreviousInput_p
	  section.data(4).logicalSrcIdx = 14;
	  section.data(4).dtTransOffset = 6;
	
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


  targMap.checksum0 = 152260148;
  targMap.checksum1 = 856364839;
  targMap.checksum2 = 48648007;
  targMap.checksum3 = 953207832;

