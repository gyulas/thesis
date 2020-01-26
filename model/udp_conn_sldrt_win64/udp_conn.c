/*
 * udp_conn.c
 *
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Code generation for model "udp_conn".
 *
 * Model version              : 1.125
 * Simulink Coder version : 8.11 (R2016b) 25-Aug-2016
 * C source code generated on : Thu Nov 29 01:25:24 2018
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
  3.232235628E+9,
  9090.0,
};

/* list of Simulink Desktop Real-Time timers */
const int SLDRTTimerCount = 1;
const double SLDRTTimers[2] = {
  2.0, 0.0,
};

/* list of Simulink Desktop Real-Time boards */
const int SLDRTBoardCount = 1;
SLDRTBOARD SLDRTBoards[1] = {
  { "Standard_Devices/UDP_Protocol", 9089U, 2, SLDRTBoardOptions0 },
};

/* Block signals (auto storage) */
B_udp_conn_T udp_conn_B;

/* Block states (auto storage) */
DW_udp_conn_T udp_conn_DW;

/* Real-time model */
RT_MODEL_udp_conn_T udp_conn_M_;
RT_MODEL_udp_conn_T *const udp_conn_M = &udp_conn_M_;

/* Model output function */
void udp_conn_output(void)
{
  real_T u;
  real_T v;

  /* S-Function Block: <Root>/Packet Output */

  /* no code required */

  /* Sin: '<Root>/Sine Wave (double) 0.5Hz' */
  u = sin(udp_conn_P.SineWavedouble05Hz_Freq * udp_conn_M->Timing.t[0] +
          udp_conn_P.SineWavedouble05Hz_Phase) *
    udp_conn_P.SineWavedouble05Hz_Amp + udp_conn_P.SineWavedouble05Hz_Bias;

  /* DataTypeConversion: '<Root>/Data Type Conversion' */
  v = fabs(u);
  if (v < 4.503599627370496E+15) {
    if (v >= 0.5) {
      u = floor(u + 0.5);
    } else {
      u *= 0.0;
    }
  }

  if (u < 256.0) {
    if (u >= 0.0) {
      udp_conn_B.DataTypeConversion = (uint8_T)u;
    } else {
      udp_conn_B.DataTypeConversion = 0U;
    }
  } else if (u >= 256.0) {
    udp_conn_B.DataTypeConversion = MAX_uint8_T;
  } else {
    udp_conn_B.DataTypeConversion = 0U;
  }

  /* End of DataTypeConversion: '<Root>/Data Type Conversion' */
  /* S-Function Block: <Root>/Packet Input */
  {
    uint8_T indata[2U];
    int status = RTBIO_DriverIO(0, STREAMINPUT, IOREAD, 2U,
      &udp_conn_P.PacketInput_PacketID, (double*) indata, NULL);
    if (status & 0x1) {
      RTWin_ANYTYPEPTR indp;
      indp.p_uint8_T = indata;

      {
        /* uint16_T, big endian */
        uint8_T* blkoutptr = ((uint8_T *) &udp_conn_B.PacketInput) + 2;
        *--blkoutptr = *indp.p_uint8_T++;
        *--blkoutptr = *indp.p_uint8_T++;
      }
    }
  }

  /* DataTypeConversion: '<Root>/Data Type Conversion1' */
  udp_conn_B.DataTypeConversion1 = udp_conn_B.PacketInput;
}

/* Model update function */
void udp_conn_update(void)
{
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

  {
    /* Update absolute timer for sample time: [2.0s, 0.0s] */
    /* The "clockTick1" counts the number of times the code of this task has
     * been executed. The absolute time is the multiplication of "clockTick1"
     * and "Timing.stepSize1". Size of "clockTick1" ensures timer will not
     * overflow during the application lifespan selected.
     * Timer of this task consists of two 32 bit unsigned integers.
     * The two integers represent the low bits Timing.clockTick1 and the high bits
     * Timing.clockTickH1. When the low bit overflows to 0, the high bits increment.
     */
    if (!(++udp_conn_M->Timing.clockTick1)) {
      ++udp_conn_M->Timing.clockTickH1;
    }

    udp_conn_M->Timing.t[1] = udp_conn_M->Timing.clockTick1 *
      udp_conn_M->Timing.stepSize1 + udp_conn_M->Timing.clockTickH1 *
      udp_conn_M->Timing.stepSize1 * 4294967296.0;
  }
}

/* Model initialize function */
void udp_conn_initialize(void)
{
  /* S-Function Block: <Root>/Packet Output */
  /* no initial value should be set */
}

/* Model terminate function */
void udp_conn_terminate(void)
{
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

  {
    /* Setup solver object */
    rtsiSetSimTimeStepPtr(&udp_conn_M->solverInfo,
                          &udp_conn_M->Timing.simTimeStep);
    rtsiSetTPtr(&udp_conn_M->solverInfo, &rtmGetTPtr(udp_conn_M));
    rtsiSetStepSizePtr(&udp_conn_M->solverInfo, &udp_conn_M->Timing.stepSize0);
    rtsiSetErrorStatusPtr(&udp_conn_M->solverInfo, (&rtmGetErrorStatus
      (udp_conn_M)));
    rtsiSetRTModelPtr(&udp_conn_M->solverInfo, udp_conn_M);
  }

  rtsiSetSimTimeStep(&udp_conn_M->solverInfo, MAJOR_TIME_STEP);
  rtsiSetSolverName(&udp_conn_M->solverInfo,"FixedStepDiscrete");

  /* Initialize timing info */
  {
    int_T *mdlTsMap = udp_conn_M->Timing.sampleTimeTaskIDArray;
    mdlTsMap[0] = 0;
    mdlTsMap[1] = 1;
    udp_conn_M->Timing.sampleTimeTaskIDPtr = (&mdlTsMap[0]);
    udp_conn_M->Timing.sampleTimes = (&udp_conn_M->Timing.sampleTimesArray[0]);
    udp_conn_M->Timing.offsetTimes = (&udp_conn_M->Timing.offsetTimesArray[0]);

    /* task periods */
    udp_conn_M->Timing.sampleTimes[0] = (0.0);
    udp_conn_M->Timing.sampleTimes[1] = (2.0);

    /* task offsets */
    udp_conn_M->Timing.offsetTimes[0] = (0.0);
    udp_conn_M->Timing.offsetTimes[1] = (0.0);
  }

  rtmSetTPtr(udp_conn_M, &udp_conn_M->Timing.tArray[0]);

  {
    int_T *mdlSampleHits = udp_conn_M->Timing.sampleHitArray;
    mdlSampleHits[0] = 1;
    mdlSampleHits[1] = 1;
    udp_conn_M->Timing.sampleHits = (&mdlSampleHits[0]);
  }

  rtmSetTFinal(udp_conn_M, 6000.0);
  udp_conn_M->Timing.stepSize0 = 2.0;
  udp_conn_M->Timing.stepSize1 = 2.0;

  /* External mode info */
  udp_conn_M->Sizes.checksums[0] = (364371155U);
  udp_conn_M->Sizes.checksums[1] = (4117276482U);
  udp_conn_M->Sizes.checksums[2] = (2266993909U);
  udp_conn_M->Sizes.checksums[3] = (1944798379U);

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
  udp_conn_M->Timing.stepSize = (2.0);
  rtsiSetFixedStepSize(&udp_conn_M->solverInfo, 2.0);
  rtsiSetSolverMode(&udp_conn_M->solverInfo, SOLVER_MODE_SINGLETASKING);

  /* block I/O */
  udp_conn_M->blockIO = ((void *) &udp_conn_B);
  (void) memset(((void *) &udp_conn_B), 0,
                sizeof(B_udp_conn_T));

  /* parameters */
  udp_conn_M->defaultParam = ((real_T *)&udp_conn_P);

  /* states (dwork) */
  udp_conn_M->dwork = ((void *) &udp_conn_DW);
  (void) memset((void *)&udp_conn_DW, 0,
                sizeof(DW_udp_conn_T));

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
  udp_conn_M->Sizes.numSampTimes = (2);/* Number of sample times */
  udp_conn_M->Sizes.numBlocks = (10);  /* Number of blocks */
  udp_conn_M->Sizes.numBlockIO = (3);  /* Number of block outputs */
  udp_conn_M->Sizes.numBlockPrms = (10);/* Sum of parameter "widths" */
  return udp_conn_M;
}

/*========================================================================*
 * End of Classic call interface                                          *
 *========================================================================*/
