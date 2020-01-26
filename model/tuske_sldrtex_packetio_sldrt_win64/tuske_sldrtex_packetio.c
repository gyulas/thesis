/*
 * tuske_sldrtex_packetio.c
 *
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Code generation for model "tuske_sldrtex_packetio".
 *
 * Model version              : 1.122
 * Simulink Coder version : 9.0 (R2018b) 24-May-2018
 * C source code generated on : Mon Dec  3 22:18:44 2018
 *
 * Target selection: sldrt.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "tuske_sldrtex_packetio.h"
#include "tuske_sldrtex_packetio_private.h"
#include "tuske_sldrtex_packetio_dt.h"

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
  2.0, 0.0,
};

/* list of Simulink Desktop Real-Time boards */
const int SLDRTBoardCount = 1;
SLDRTBOARD SLDRTBoards[1] = {
  { "Standard_Devices/UDP_Protocol", 9089U, 256, SLDRTBoardOptions0 },
};

/* Block signals (default storage) */
B_tuske_sldrtex_packetio_T tuske_sldrtex_packetio_B;

/* Block states (default storage) */
DW_tuske_sldrtex_packetio_T tuske_sldrtex_packetio_DW;

/* Real-time model */
RT_MODEL_tuske_sldrtex_packetio_T tuske_sldrtex_packetio_M_;
RT_MODEL_tuske_sldrtex_packetio_T *const tuske_sldrtex_packetio_M =
  &tuske_sldrtex_packetio_M_;

/* Model output function */
void tuske_sldrtex_packetio_output(void)
{
  real_T u;
  real_T v;

  /* S-Function (sldrtpo): '<Root>/Packet Output' */
  /* S-Function Block: <Root>/Packet Output */

  /* no code required */

  /* Sin: '<Root>/Sine Wave (double)' */
  u = sin(tuske_sldrtex_packetio_P.SineWavedouble_Freq *
          tuske_sldrtex_packetio_M->Timing.t[0] +
          tuske_sldrtex_packetio_P.SineWavedouble_Phase) *
    tuske_sldrtex_packetio_P.SineWavedouble_Amp +
    tuske_sldrtex_packetio_P.SineWavedouble_Bias;

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
      tuske_sldrtex_packetio_B.DataTypeConversion = (uint8_T)u;
    } else {
      tuske_sldrtex_packetio_B.DataTypeConversion = 0U;
    }
  } else if (u >= 256.0) {
    tuske_sldrtex_packetio_B.DataTypeConversion = MAX_uint8_T;
  } else {
    tuske_sldrtex_packetio_B.DataTypeConversion = 0U;
  }

  /* End of DataTypeConversion: '<Root>/Data Type Conversion' */

  /* S-Function (sldrtpi): '<Root>/Packet Input' */
  /* S-Function Block: <Root>/Packet Input */
  {
    uint8_T indata[2U];
    int status = RTBIO_DriverIO(0, STREAMINPUT, IOREAD, 2U,
      &tuske_sldrtex_packetio_P.PacketInput_PacketID, (double*) indata, NULL);
    tuske_sldrtex_packetio_B.PacketInput_o3 = 0;/* Missed Ticks value is always zero */
    if (status & 0x1) {
      RTWin_ANYTYPEPTR indp;
      indp.p_uint8_T = indata;
      tuske_sldrtex_packetio_B.PacketInput_o1 = *indp.p_uint8_T++;
      tuske_sldrtex_packetio_B.PacketInput_o2 = *indp.p_uint8_T++;
    }
  }

  /* DataTypeConversion: '<Root>/Data Type Conversion1' */
  tuske_sldrtex_packetio_B.DataTypeConversion1 =
    tuske_sldrtex_packetio_B.PacketInput_o1;
}

/* Model update function */
void tuske_sldrtex_packetio_update(void)
{
  /* Update for S-Function (sldrtpo): '<Root>/Packet Output' */

  /* S-Function Block: <Root>/Packet Output */
  {
    uint8_T outdata[1U];
    RTWin_ANYTYPEPTR outdp;
    outdp.p_uint8_T = outdata;

    {
      uint8_T pktout = tuske_sldrtex_packetio_B.DataTypeConversion;
      *outdp.p_uint8_T++ = pktout;
    }

    RTBIO_DriverIO(0, STREAMOUTPUT, IOWRITE, 1U,
                   &tuske_sldrtex_packetio_P.PacketOutput_PacketID, (double*)
                   outdata, NULL);
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
  if (!(++tuske_sldrtex_packetio_M->Timing.clockTick0)) {
    ++tuske_sldrtex_packetio_M->Timing.clockTickH0;
  }

  tuske_sldrtex_packetio_M->Timing.t[0] =
    tuske_sldrtex_packetio_M->Timing.clockTick0 *
    tuske_sldrtex_packetio_M->Timing.stepSize0 +
    tuske_sldrtex_packetio_M->Timing.clockTickH0 *
    tuske_sldrtex_packetio_M->Timing.stepSize0 * 4294967296.0;

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
    if (!(++tuske_sldrtex_packetio_M->Timing.clockTick1)) {
      ++tuske_sldrtex_packetio_M->Timing.clockTickH1;
    }

    tuske_sldrtex_packetio_M->Timing.t[1] =
      tuske_sldrtex_packetio_M->Timing.clockTick1 *
      tuske_sldrtex_packetio_M->Timing.stepSize1 +
      tuske_sldrtex_packetio_M->Timing.clockTickH1 *
      tuske_sldrtex_packetio_M->Timing.stepSize1 * 4294967296.0;
  }
}

/* Model initialize function */
void tuske_sldrtex_packetio_initialize(void)
{
  /* Start for S-Function (sldrtpo): '<Root>/Packet Output' */

  /* S-Function Block: <Root>/Packet Output */
  /* no initial value should be set */
}

/* Model terminate function */
void tuske_sldrtex_packetio_terminate(void)
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
  tuske_sldrtex_packetio_output();
  UNUSED_PARAMETER(tid);
}

void MdlUpdate(int_T tid)
{
  tuske_sldrtex_packetio_update();
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
  tuske_sldrtex_packetio_initialize();
}

void MdlTerminate(void)
{
  tuske_sldrtex_packetio_terminate();
}

/* Registration function */
RT_MODEL_tuske_sldrtex_packetio_T *tuske_sldrtex_packetio(void)
{
  /* Registration code */

  /* initialize non-finites */
  rt_InitInfAndNaN(sizeof(real_T));

  /* initialize real-time model */
  (void) memset((void *)tuske_sldrtex_packetio_M, 0,
                sizeof(RT_MODEL_tuske_sldrtex_packetio_T));

  {
    /* Setup solver object */
    rtsiSetSimTimeStepPtr(&tuske_sldrtex_packetio_M->solverInfo,
                          &tuske_sldrtex_packetio_M->Timing.simTimeStep);
    rtsiSetTPtr(&tuske_sldrtex_packetio_M->solverInfo, &rtmGetTPtr
                (tuske_sldrtex_packetio_M));
    rtsiSetStepSizePtr(&tuske_sldrtex_packetio_M->solverInfo,
                       &tuske_sldrtex_packetio_M->Timing.stepSize0);
    rtsiSetErrorStatusPtr(&tuske_sldrtex_packetio_M->solverInfo,
                          (&rtmGetErrorStatus(tuske_sldrtex_packetio_M)));
    rtsiSetRTModelPtr(&tuske_sldrtex_packetio_M->solverInfo,
                      tuske_sldrtex_packetio_M);
  }

  rtsiSetSimTimeStep(&tuske_sldrtex_packetio_M->solverInfo, MAJOR_TIME_STEP);
  rtsiSetSolverName(&tuske_sldrtex_packetio_M->solverInfo,"FixedStepDiscrete");

  /* Initialize timing info */
  {
    int_T *mdlTsMap = tuske_sldrtex_packetio_M->Timing.sampleTimeTaskIDArray;
    mdlTsMap[0] = 0;
    mdlTsMap[1] = 1;
    tuske_sldrtex_packetio_M->Timing.sampleTimeTaskIDPtr = (&mdlTsMap[0]);
    tuske_sldrtex_packetio_M->Timing.sampleTimes =
      (&tuske_sldrtex_packetio_M->Timing.sampleTimesArray[0]);
    tuske_sldrtex_packetio_M->Timing.offsetTimes =
      (&tuske_sldrtex_packetio_M->Timing.offsetTimesArray[0]);

    /* task periods */
    tuske_sldrtex_packetio_M->Timing.sampleTimes[0] = (0.0);
    tuske_sldrtex_packetio_M->Timing.sampleTimes[1] = (2.0);

    /* task offsets */
    tuske_sldrtex_packetio_M->Timing.offsetTimes[0] = (0.0);
    tuske_sldrtex_packetio_M->Timing.offsetTimes[1] = (0.0);
  }

  rtmSetTPtr(tuske_sldrtex_packetio_M, &tuske_sldrtex_packetio_M->Timing.tArray
             [0]);

  {
    int_T *mdlSampleHits = tuske_sldrtex_packetio_M->Timing.sampleHitArray;
    mdlSampleHits[0] = 1;
    mdlSampleHits[1] = 1;
    tuske_sldrtex_packetio_M->Timing.sampleHits = (&mdlSampleHits[0]);
  }

  rtmSetTFinal(tuske_sldrtex_packetio_M, 30.0);
  tuske_sldrtex_packetio_M->Timing.stepSize0 = 2.0;
  tuske_sldrtex_packetio_M->Timing.stepSize1 = 2.0;

  /* External mode info */
  tuske_sldrtex_packetio_M->Sizes.checksums[0] = (3254308139U);
  tuske_sldrtex_packetio_M->Sizes.checksums[1] = (3177027965U);
  tuske_sldrtex_packetio_M->Sizes.checksums[2] = (3071472576U);
  tuske_sldrtex_packetio_M->Sizes.checksums[3] = (1435787599U);

  {
    static const sysRanDType rtAlwaysEnabled = SUBSYS_RAN_BC_ENABLE;
    static RTWExtModeInfo rt_ExtModeInfo;
    static const sysRanDType *systemRan[1];
    tuske_sldrtex_packetio_M->extModeInfo = (&rt_ExtModeInfo);
    rteiSetSubSystemActiveVectorAddresses(&rt_ExtModeInfo, systemRan);
    systemRan[0] = &rtAlwaysEnabled;
    rteiSetModelMappingInfoPtr(tuske_sldrtex_packetio_M->extModeInfo,
      &tuske_sldrtex_packetio_M->SpecialInfo.mappingInfo);
    rteiSetChecksumsPtr(tuske_sldrtex_packetio_M->extModeInfo,
                        tuske_sldrtex_packetio_M->Sizes.checksums);
    rteiSetTPtr(tuske_sldrtex_packetio_M->extModeInfo, rtmGetTPtr
                (tuske_sldrtex_packetio_M));
  }

  tuske_sldrtex_packetio_M->solverInfoPtr =
    (&tuske_sldrtex_packetio_M->solverInfo);
  tuske_sldrtex_packetio_M->Timing.stepSize = (2.0);
  rtsiSetFixedStepSize(&tuske_sldrtex_packetio_M->solverInfo, 2.0);
  rtsiSetSolverMode(&tuske_sldrtex_packetio_M->solverInfo,
                    SOLVER_MODE_SINGLETASKING);

  /* block I/O */
  tuske_sldrtex_packetio_M->blockIO = ((void *) &tuske_sldrtex_packetio_B);
  (void) memset(((void *) &tuske_sldrtex_packetio_B), 0,
                sizeof(B_tuske_sldrtex_packetio_T));

  {
    tuske_sldrtex_packetio_B.DataTypeConversion1 = 0.0;
  }

  /* parameters */
  tuske_sldrtex_packetio_M->defaultParam = ((real_T *)&tuske_sldrtex_packetio_P);

  /* states (dwork) */
  tuske_sldrtex_packetio_M->dwork = ((void *) &tuske_sldrtex_packetio_DW);
  (void) memset((void *)&tuske_sldrtex_packetio_DW, 0,
                sizeof(DW_tuske_sldrtex_packetio_T));

  /* data type transition information */
  {
    static DataTypeTransInfo dtInfo;
    (void) memset((char_T *) &dtInfo, 0,
                  sizeof(dtInfo));
    tuske_sldrtex_packetio_M->SpecialInfo.mappingInfo = (&dtInfo);
    dtInfo.numDataTypes = 14;
    dtInfo.dataTypeSizes = &rtDataTypeSizes[0];
    dtInfo.dataTypeNames = &rtDataTypeNames[0];

    /* Block I/O transition table */
    dtInfo.BTransTable = &rtBTransTable;

    /* Parameters transition table */
    dtInfo.PTransTable = &rtPTransTable;
  }

  /* Initialize Sizes */
  tuske_sldrtex_packetio_M->Sizes.numContStates = (0);/* Number of continuous states */
  tuske_sldrtex_packetio_M->Sizes.numY = (0);/* Number of model outputs */
  tuske_sldrtex_packetio_M->Sizes.numU = (0);/* Number of model inputs */
  tuske_sldrtex_packetio_M->Sizes.sysDirFeedThru = (0);/* The model is not direct feedthrough */
  tuske_sldrtex_packetio_M->Sizes.numSampTimes = (2);/* Number of sample times */
  tuske_sldrtex_packetio_M->Sizes.numBlocks = (10);/* Number of blocks */
  tuske_sldrtex_packetio_M->Sizes.numBlockIO = (5);/* Number of block outputs */
  tuske_sldrtex_packetio_M->Sizes.numBlockPrms = (10);/* Sum of parameter "widths" */
  return tuske_sldrtex_packetio_M;
}

/*========================================================================*
 * End of Classic call interface                                          *
 *========================================================================*/
