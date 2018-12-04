/*
 * udp_conn.c
 *
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Code generation for model "udp_conn".
 *
 * Model version              : 1.152
 * Simulink Coder version : 9.0 (R2018b) 24-May-2018
 * C source code generated on : Tue Dec  4 03:09:35 2018
 *
 * Target selection: sldrt.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "udp_conn.h"
#include "udp_conn_private.h"
#include "udp_conn_dt.h"

/* options for Simulink Desktop Real-Time board 0 */
static double SLDRTBoardOptions0[] = {
  0.0,
  9090.0,
  49.0,
  57.0,
  50.0,
  46.0,
  49.0,
  54.0,
  56.0,
  46.0,
  48.0,
  46.0,
  49.0,
  48.0,
  56.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
};

/* list of Simulink Desktop Real-Time timers */
const int SLDRTTimerCount = 1;
const double SLDRTTimers[2] = {
  1.0, 0.0,
};

/* list of Simulink Desktop Real-Time boards */
const int SLDRTBoardCount = 1;
SLDRTBOARD SLDRTBoards[1] = {
  { "Standard_Devices/UDP_Protocol", 9089U, 256, SLDRTBoardOptions0 },
};

/* Block signals (default storage) */
B_udp_conn_T udp_conn_B;

/* Block states (default storage) */
DW_udp_conn_T udp_conn_DW;

/* Real-time model */
RT_MODEL_udp_conn_T udp_conn_M_;
RT_MODEL_udp_conn_T *const udp_conn_M = &udp_conn_M_;

/* Model output function */
void udp_conn_output(void)
{
  real_T v;
  real_T lastSin_tmp;

  /* S-Function (sldrtpi): '<Root>/Packet Input1' */
  /* S-Function Block: <Root>/Packet Input1 */
  {
    uint8_T indata[12U];
    int status = RTBIO_DriverIO(0, STREAMINPUT, IOREAD, 12U,
      &udp_conn_P.PacketInput1_PacketID, (double*) indata, NULL);
    udp_conn_B.PacketInput1_o13 = 0;   /* Missed Ticks value is always zero */
    if (status & 0x1) {
      RTWin_ANYTYPEPTR indp;
      indp.p_uint8_T = indata;
      udp_conn_B.PacketInput1_o1 = *indp.p_uint8_T++;
      udp_conn_B.PacketInput1_o2 = *indp.p_uint8_T++;
      udp_conn_B.PacketInput1_o3 = *indp.p_uint8_T++;
      udp_conn_B.PacketInput1_o4 = *indp.p_uint8_T++;
      udp_conn_B.PacketInput1_o5 = *indp.p_uint8_T++;
      udp_conn_B.PacketInput1_o6 = *indp.p_uint8_T++;
      udp_conn_B.PacketInput1_o7 = *indp.p_uint8_T++;
      udp_conn_B.PacketInput1_o8 = *indp.p_uint8_T++;
      udp_conn_B.PacketInput1_o9 = *indp.p_uint8_T++;
      udp_conn_B.PacketInput1_o10 = *indp.p_uint8_T++;
      udp_conn_B.PacketInput1_o11 = *indp.p_uint8_T++;
      udp_conn_B.PacketInput1_o12 = *indp.p_uint8_T++;
    }
  }

  /* Sum: '<Root>/Sum3' incorporates:
   *  Gain: '<Root>/Gain3'
   */
  udp_conn_B.Sum3 = (uint16_T)((uint32_T)udp_conn_P.Gain3_Gain *
    udp_conn_B.PacketInput1_o11 + udp_conn_B.PacketInput1_o12);

  /* Sum: '<Root>/Sum2' incorporates:
   *  Gain: '<Root>/Gain2'
   */
  udp_conn_B.Sum2 = (uint16_T)((uint32_T)udp_conn_P.Gain2_Gain *
    udp_conn_B.PacketInput1_o5 + udp_conn_B.PacketInput1_o6);

  /* Constant: '<Root>/Constant' */
  udp_conn_B.Constant = udp_conn_P.Constant_Value;

  /* Gain: '<Root>/Gain' incorporates:
   *  DataTypeConversion: '<Root>/Data Type Conversion2'
   */
  udp_conn_B.Gain = udp_conn_P.Gain_Gain * (real_T)udp_conn_B.Sum3;

  /* Sum: '<Root>/Sum' incorporates:
   *  Constant: '<Root>/Constant1'
   */
  udp_conn_B.Sum = udp_conn_B.Gain + udp_conn_P.Constant1_Value;

  /* Gain: '<Root>/Gain1' incorporates:
   *  DataTypeConversion: '<Root>/Data Type Conversion3'
   */
  udp_conn_B.Gain1 = udp_conn_P.Gain1_Gain * (real_T)udp_conn_B.Sum2;

  /* Sum: '<Root>/Sum1' incorporates:
   *  Constant: '<Root>/Constant1'
   */
  udp_conn_B.Sum1 = udp_conn_B.Gain1 + udp_conn_P.Constant1_Value;

  /* DataTypeConversion: '<Root>/Data Type Conversion1' */
  udp_conn_B.time_UTC1[0] = udp_conn_B.PacketInput1_o1;
  udp_conn_B.time_UTC1[1] = udp_conn_B.PacketInput1_o2;
  udp_conn_B.time_UTC1[2] = udp_conn_B.PacketInput1_o3;
  udp_conn_B.time_UTC1[3] = udp_conn_B.PacketInput1_o4;

  /* Sin: '<Root>/Sine Wave (double) 0.5Hz' */
  if (udp_conn_DW.systemEnable != 0) {
    lastSin_tmp = udp_conn_P.SineWavedouble05Hz_Freq * udp_conn_M->Timing.t[0];
    udp_conn_DW.lastSin = sin(lastSin_tmp);
    udp_conn_DW.lastCos = cos(lastSin_tmp);
    udp_conn_DW.systemEnable = 0;
  }

  lastSin_tmp = ((udp_conn_DW.lastSin * udp_conn_P.SineWavedouble05Hz_PCos +
                  udp_conn_DW.lastCos * udp_conn_P.SineWavedouble05Hz_PSin) *
                 udp_conn_P.SineWavedouble05Hz_HCos + (udp_conn_DW.lastCos *
    udp_conn_P.SineWavedouble05Hz_PCos - udp_conn_DW.lastSin *
    udp_conn_P.SineWavedouble05Hz_PSin) * udp_conn_P.SineWavedouble05Hz_Hsin) *
    udp_conn_P.SineWavedouble05Hz_Amp + udp_conn_P.SineWavedouble05Hz_Bias;

  /* End of Sin: '<Root>/Sine Wave (double) 0.5Hz' */

  /* DataTypeConversion: '<Root>/Data Type Conversion' */
  v = fabs(lastSin_tmp);
  if (v < 4.503599627370496E+15) {
    if (v >= 0.5) {
      lastSin_tmp = floor(lastSin_tmp + 0.5);
    } else {
      lastSin_tmp *= 0.0;
    }
  }

  if (lastSin_tmp < 256.0) {
    if (lastSin_tmp >= 0.0) {
      udp_conn_B.DataTypeConversion = (uint8_T)lastSin_tmp;
    } else {
      udp_conn_B.DataTypeConversion = 0U;
    }
  } else if (lastSin_tmp >= 256.0) {
    udp_conn_B.DataTypeConversion = MAX_uint8_T;
  } else {
    udp_conn_B.DataTypeConversion = 0U;
  }

  /* End of DataTypeConversion: '<Root>/Data Type Conversion' */

  /* S-Function (sldrtpo): '<Root>/Packet Output' */
  /* S-Function Block: <Root>/Packet Output */
  udp_conn_B.PacketOutput = 0;         /* Missed Ticks value is always zero */

  /* no code required */
}

/* Model update function */
void udp_conn_update(void)
{
  real_T HoldSine;

  /* Update for Sin: '<Root>/Sine Wave (double) 0.5Hz' */
  HoldSine = udp_conn_DW.lastSin;
  udp_conn_DW.lastSin = udp_conn_DW.lastSin * udp_conn_P.SineWavedouble05Hz_HCos
    + udp_conn_DW.lastCos * udp_conn_P.SineWavedouble05Hz_Hsin;
  udp_conn_DW.lastCos = udp_conn_DW.lastCos * udp_conn_P.SineWavedouble05Hz_HCos
    - HoldSine * udp_conn_P.SineWavedouble05Hz_Hsin;

  /* Update for S-Function (sldrtpo): '<Root>/Packet Output' */

  /* S-Function Block: <Root>/Packet Output */
  {
    uint8_T outdata[1U];
    RTWin_ANYTYPEPTR outdp;
    outdp.p_uint8_T = outdata;

    {
      uint8_T pktout = udp_conn_B.DataTypeConversion;
      *outdp.p_uint8_T++ = pktout;
    }

    RTBIO_DriverIO(0, STREAMOUTPUT, IOWRITE, 1U,
                   &udp_conn_P.PacketOutput_PacketID, (double*) outdata, NULL);
  }

  /* Update absolute time for base rate */
  /* The "clockTick0" counts the number of times the code of this task has
   * been executed. The absolute time is the multiplication of "clockTick0"
   * and "Timing.stepSize0". Size of "clockTick0" ensures timer will not
   * overflow during the application lifespan selected.
   * Timer of this task consists of two 32 bit unsigned integers.
   * The two integers represent the low bits Timing.clockTick0 and the high bits
   * Timing.clockTickH0. When the low bit overflows to 0, the high bits increment.
   */
  if (!(++udp_conn_M->Timing.clockTick0)) {
    ++udp_conn_M->Timing.clockTickH0;
  }

  udp_conn_M->Timing.t[0] = udp_conn_M->Timing.clockTick0 *
    udp_conn_M->Timing.stepSize0 + udp_conn_M->Timing.clockTickH0 *
    udp_conn_M->Timing.stepSize0 * 4294967296.0;
}

/* Model initialize function */
void udp_conn_initialize(void)
{
  /* Start for S-Function (sldrtpo): '<Root>/Packet Output' */

  /* S-Function Block: <Root>/Packet Output */
  {
    const double* parm = &udp_conn_P.PacketOutput_InitialValue;
    char outdata[1U];
    RTWin_ANYTYPEPTR outdp;
    outdp.p_uint8_T = outdata;

    {
      real_T pktin = *parm++;
      uint8_T pktout = pktin>=MAX_uint8_T ? MAX_uint8_T : (pktin<=0U ? 0U :
        (uint8_T) pktin);
      *outdp.p_uint8_T++ = pktout;
    }

    RTBIO_DriverIO(0, STREAMOUTPUT, IOWRITE, 1U,
                   &udp_conn_P.PacketOutput_PacketID, (double*) outdata, NULL);
  }

  /* Enable for Sin: '<Root>/Sine Wave (double) 0.5Hz' */
  udp_conn_DW.systemEnable = 1;
}

/* Model terminate function */
void udp_conn_terminate(void)
{
  /* Terminate for S-Function (sldrtpo): '<Root>/Packet Output' */

  /* S-Function Block: <Root>/Packet Output */
  /* no initial value should be set */
}

/*========================================================================*
 * Start of Classic call interface                                        *
 *========================================================================*/
void MdlOutputs(int_T tid)
{
  udp_conn_output();
  UNUSED_PARAMETER(tid);
}

void MdlUpdate(int_T tid)
{
  udp_conn_update();
  UNUSED_PARAMETER(tid);
}

void MdlInitializeSizes(void)
{
}

void MdlInitializeSampleTimes(void)
{
}

void MdlInitialize(void)
{
}

void MdlStart(void)
{
  udp_conn_initialize();
}

void MdlTerminate(void)
{
  udp_conn_terminate();
}

/* Registration function */
RT_MODEL_udp_conn_T *udp_conn(void)
{
  /* Registration code */

  /* initialize non-finites */
  rt_InitInfAndNaN(sizeof(real_T));

  /* initialize real-time model */
  (void) memset((void *)udp_conn_M, 0,
                sizeof(RT_MODEL_udp_conn_T));

  /* Initialize timing info */
  {
    int_T *mdlTsMap = udp_conn_M->Timing.sampleTimeTaskIDArray;
    mdlTsMap[0] = 0;
    udp_conn_M->Timing.sampleTimeTaskIDPtr = (&mdlTsMap[0]);
    udp_conn_M->Timing.sampleTimes = (&udp_conn_M->Timing.sampleTimesArray[0]);
    udp_conn_M->Timing.offsetTimes = (&udp_conn_M->Timing.offsetTimesArray[0]);

    /* task periods */
    udp_conn_M->Timing.sampleTimes[0] = (1.0);

    /* task offsets */
    udp_conn_M->Timing.offsetTimes[0] = (0.0);
  }

  rtmSetTPtr(udp_conn_M, &udp_conn_M->Timing.tArray[0]);

  {
    int_T *mdlSampleHits = udp_conn_M->Timing.sampleHitArray;
    mdlSampleHits[0] = 1;
    udp_conn_M->Timing.sampleHits = (&mdlSampleHits[0]);
  }

  rtmSetTFinal(udp_conn_M, 1000.0);
  udp_conn_M->Timing.stepSize0 = 1.0;

  /* External mode info */
  udp_conn_M->Sizes.checksums[0] = (1557707348U);
  udp_conn_M->Sizes.checksums[1] = (2154691021U);
  udp_conn_M->Sizes.checksums[2] = (3074475629U);
  udp_conn_M->Sizes.checksums[3] = (1223669461U);

  {
    static const sysRanDType rtAlwaysEnabled = SUBSYS_RAN_BC_ENABLE;
    static RTWExtModeInfo rt_ExtModeInfo;
    static const sysRanDType *systemRan[1];
    udp_conn_M->extModeInfo = (&rt_ExtModeInfo);
    rteiSetSubSystemActiveVectorAddresses(&rt_ExtModeInfo, systemRan);
    systemRan[0] = &rtAlwaysEnabled;
    rteiSetModelMappingInfoPtr(udp_conn_M->extModeInfo,
      &udp_conn_M->SpecialInfo.mappingInfo);
    rteiSetChecksumsPtr(udp_conn_M->extModeInfo, udp_conn_M->Sizes.checksums);
    rteiSetTPtr(udp_conn_M->extModeInfo, rtmGetTPtr(udp_conn_M));
  }

  udp_conn_M->solverInfoPtr = (&udp_conn_M->solverInfo);
  udp_conn_M->Timing.stepSize = (1.0);
  rtsiSetFixedStepSize(&udp_conn_M->solverInfo, 1.0);
  rtsiSetSolverMode(&udp_conn_M->solverInfo, SOLVER_MODE_SINGLETASKING);

  /* block I/O */
  udp_conn_M->blockIO = ((void *) &udp_conn_B);
  (void) memset(((void *) &udp_conn_B), 0,
                sizeof(B_udp_conn_T));

  {
    udp_conn_B.Constant = 0.0;
    udp_conn_B.Gain = 0.0;
    udp_conn_B.Sum = 0.0;
    udp_conn_B.Gain1 = 0.0;
    udp_conn_B.Sum1 = 0.0;
    udp_conn_B.time_UTC1[0] = 0.0;
    udp_conn_B.time_UTC1[1] = 0.0;
    udp_conn_B.time_UTC1[2] = 0.0;
    udp_conn_B.time_UTC1[3] = 0.0;
  }

  /* parameters */
  udp_conn_M->defaultParam = ((real_T *)&udp_conn_P);

  /* states (dwork) */
  udp_conn_M->dwork = ((void *) &udp_conn_DW);
  (void) memset((void *)&udp_conn_DW, 0,
                sizeof(DW_udp_conn_T));
  udp_conn_DW.lastSin = 0.0;
  udp_conn_DW.lastCos = 0.0;

  /* data type transition information */
  {
    static DataTypeTransInfo dtInfo;
    (void) memset((char_T *) &dtInfo, 0,
                  sizeof(dtInfo));
    udp_conn_M->SpecialInfo.mappingInfo = (&dtInfo);
    dtInfo.numDataTypes = 14;
    dtInfo.dataTypeSizes = &rtDataTypeSizes[0];
    dtInfo.dataTypeNames = &rtDataTypeNames[0];

    /* Block I/O transition table */
    dtInfo.BTransTable = &rtBTransTable;

    /* Parameters transition table */
    dtInfo.PTransTable = &rtPTransTable;
  }

  /* Initialize Sizes */
  udp_conn_M->Sizes.numContStates = (0);/* Number of continuous states */
  udp_conn_M->Sizes.numY = (0);        /* Number of model outputs */
  udp_conn_M->Sizes.numU = (0);        /* Number of model inputs */
  udp_conn_M->Sizes.sysDirFeedThru = (0);/* The model is not direct feedthrough */
  udp_conn_M->Sizes.numSampTimes = (1);/* Number of sample times */
  udp_conn_M->Sizes.numBlocks = (30);  /* Number of blocks */
  udp_conn_M->Sizes.numBlockIO = (23); /* Number of block outputs */
  udp_conn_M->Sizes.numBlockPrms = (20);/* Sum of parameter "widths" */
  return udp_conn_M;
}

/*========================================================================*
 * End of Classic call interface                                          *
 *========================================================================*/
