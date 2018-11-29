/*
 * tuske2.c
 *
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Code generation for model "tuske2".
 *
 * Model version              : 1.121
 * Simulink Coder version : 8.11 (R2016b) 25-Aug-2016
 * C source code generated on : Wed Nov 28 21:27:42 2018
 *
 * Target selection: sldrt.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "tuske2.h"
#include "tuske2_private.h"
#include "tuske2_dt.h"

/* options for Simulink Desktop Real-Time board 0 */
static double SLDRTBoardOptions0[] = {
  3.232235628E+9,
  9090.0,
};

/* list of Simulink Desktop Real-Time timers */
const int SLDRTTimerCount = 2;
const double SLDRTTimers[4] = {
  1.0, 0.0,
  10.0, 0.0,
};

/* list of Simulink Desktop Real-Time boards */
const int SLDRTBoardCount = 1;
SLDRTBOARD SLDRTBoards[1] = {
  { "Standard_Devices/UDP_Protocol", 9089U, 2, SLDRTBoardOptions0 },
};

/* Block signals (auto storage) */
B_tuske2_T tuske2_B;

/* Block states (auto storage) */
DW_tuske2_T tuske2_DW;

/* Real-time model */
RT_MODEL_tuske2_T tuske2_M_;
RT_MODEL_tuske2_T *const tuske2_M = &tuske2_M_;
static void rate_monotonic_scheduler(void);
time_T rt_SimUpdateDiscreteEvents(
  int_T rtmNumSampTimes, void *rtmTimingData, int_T *rtmSampleHitPtr, int_T
  *rtmPerTaskSampleHits )
{
  rtmSampleHitPtr[1] = rtmStepTask(tuske2_M, 1);
  UNUSED_PARAMETER(rtmNumSampTimes);
  UNUSED_PARAMETER(rtmTimingData);
  UNUSED_PARAMETER(rtmPerTaskSampleHits);
  return(-1);
}

/*
 *   This function updates active task flag for each subrate
 * and rate transition flags for tasks that exchange data.
 * The function assumes rate-monotonic multitasking scheduler.
 * The function must be called at model base rate so that
 * the generated code self-manages all its subrates and rate
 * transition flags.
 */
static void rate_monotonic_scheduler(void)
{
  /* Compute which subrates run during the next base time step.  Subrates
   * are an integer multiple of the base rate counter.  Therefore, the subtask
   * counter is reset when it reaches its limit (zero means run).
   */
  (tuske2_M->Timing.TaskCounters.TID[1])++;
  if ((tuske2_M->Timing.TaskCounters.TID[1]) > 9) {/* Sample time: [10.0s, 0.0s] */
    tuske2_M->Timing.TaskCounters.TID[1] = 0;
  }
}

/* Model output function for TID0 */
void tuske2_output0(void)              /* Sample time: [1.0s, 0.0s] */
{
  real_T rtb_PulseGenerator;
  real_T v;

  {                                    /* Sample time: [1.0s, 0.0s] */
    rate_monotonic_scheduler();
  }

  /* S-Function Block: <Root>/Packet Output */

  /* no code required */

  /* DiscretePulseGenerator: '<Root>/Pulse Generator' */
  rtb_PulseGenerator = (tuske2_DW.clockTickCounter <
                        tuske2_P.PulseGenerator_Duty) &&
    (tuske2_DW.clockTickCounter >= 0) ? tuske2_P.PulseGenerator_Amp : 0.0;
  if (tuske2_DW.clockTickCounter >= tuske2_P.PulseGenerator_Period - 1.0) {
    tuske2_DW.clockTickCounter = 0;
  } else {
    tuske2_DW.clockTickCounter++;
  }

  /* End of DiscretePulseGenerator: '<Root>/Pulse Generator' */

  /* DataTypeConversion: '<Root>/Data Type Conversion' */
  v = fabs(rtb_PulseGenerator);
  if (v < 4.503599627370496E+15) {
    if (v >= 0.5) {
      rtb_PulseGenerator = floor(rtb_PulseGenerator + 0.5);
    } else {
      rtb_PulseGenerator *= 0.0;
    }
  }

  if (rtb_PulseGenerator < 256.0) {
    if (rtb_PulseGenerator >= 0.0) {
      tuske2_B.DataTypeConversion = (uint8_T)rtb_PulseGenerator;
    } else {
      tuske2_B.DataTypeConversion = 0U;
    }
  } else if (rtb_PulseGenerator >= 256.0) {
    tuske2_B.DataTypeConversion = MAX_uint8_T;
  } else {
    tuske2_B.DataTypeConversion = 0U;
  }

  /* End of DataTypeConversion: '<Root>/Data Type Conversion' */
}

/* Model update function for TID0 */
void tuske2_update0(void)              /* Sample time: [1.0s, 0.0s] */
{
  /* S-Function Block: <Root>/Packet Output */
  {
    uint8_T outdata[1U];
    RTWin_ANYTYPEPTR outdp;
    outdp.p_uint8_T = outdata;

    {
      uint8_T pktout = tuske2_B.DataTypeConversion;
      *outdp.p_uint8_T++ = pktout;
    }

    RTBIO_DriverIO(0, STREAMOUTPUT, IOWRITE, 1U, &tuske2_P.PacketOutput_PacketID,
                   (double*) outdata, NULL);
  }

  /* Update absolute time */
  /* The "clockTick0" counts the number of times the code of this task has
   * been executed. The absolute time is the multiplication of "clockTick0"
   * and "Timing.stepSize0". Size of "clockTick0" ensures timer will not
   * overflow during the application lifespan selected.
   * Timer of this task consists of two 32 bit unsigned integers.
   * The two integers represent the low bits Timing.clockTick0 and the high bits
   * Timing.clockTickH0. When the low bit overflows to 0, the high bits increment.
   */
  if (!(++tuske2_M->Timing.clockTick0)) {
    ++tuske2_M->Timing.clockTickH0;
  }

  tuske2_M->Timing.t[0] = tuske2_M->Timing.clockTick0 *
    tuske2_M->Timing.stepSize0 + tuske2_M->Timing.clockTickH0 *
    tuske2_M->Timing.stepSize0 * 4294967296.0;
}

/* Model output function for TID1 */
void tuske2_output1(void)              /* Sample time: [10.0s, 0.0s] */
{
  /* S-Function Block: <Root>/Packet Input */
  {
    uint8_T indata[2U];
    int status = RTBIO_DriverIO(0, STREAMINPUT, IOREAD, 2U,
      &tuske2_P.PacketInput_PacketID, (double*) indata, NULL);
    if (status & 0x1) {
      RTWin_ANYTYPEPTR indp;
      indp.p_uint8_T = indata;

      {
        /* uint16_T, big endian */
        uint8_T* blkoutptr = ((uint8_T *) &tuske2_B.PacketInput) + 2;
        *--blkoutptr = *indp.p_uint8_T++;
        *--blkoutptr = *indp.p_uint8_T++;
      }
    }
  }

  /* DataTypeConversion: '<Root>/Data Type Conversion1' */
  tuske2_B.DataTypeConversion1 = tuske2_B.PacketInput;
}

/* Model update function for TID1 */
void tuske2_update1(void)              /* Sample time: [10.0s, 0.0s] */
{
  /* Update absolute time */
  /* The "clockTick1" counts the number of times the code of this task has
   * been executed. The absolute time is the multiplication of "clockTick1"
   * and "Timing.stepSize1". Size of "clockTick1" ensures timer will not
   * overflow during the application lifespan selected.
   * Timer of this task consists of two 32 bit unsigned integers.
   * The two integers represent the low bits Timing.clockTick1 and the high bits
   * Timing.clockTickH1. When the low bit overflows to 0, the high bits increment.
   */
  if (!(++tuske2_M->Timing.clockTick1)) {
    ++tuske2_M->Timing.clockTickH1;
  }

  tuske2_M->Timing.t[1] = tuske2_M->Timing.clockTick1 *
    tuske2_M->Timing.stepSize1 + tuske2_M->Timing.clockTickH1 *
    tuske2_M->Timing.stepSize1 * 4294967296.0;
}

/* Model output wrapper function for compatibility with a static main program */
void tuske2_output(int_T tid)
{
  switch (tid) {
   case 0 :
    tuske2_output0();
    break;

   case 1 :
    tuske2_output1();
    break;

   default :
    break;
  }
}

/* Model update wrapper function for compatibility with a static main program */
void tuske2_update(int_T tid)
{
  switch (tid) {
   case 0 :
    tuske2_update0();
    break;

   case 1 :
    tuske2_update1();
    break;

   default :
    break;
  }
}

/* Model initialize function */
void tuske2_initialize(void)
{
  /* S-Function Block: <Root>/Packet Output */
  /* no initial value should be set */

  /* InitializeConditions for DiscretePulseGenerator: '<Root>/Pulse Generator' */
  tuske2_DW.clockTickCounter = 0;
}

/* Model terminate function */
void tuske2_terminate(void)
{
  /* S-Function Block: <Root>/Packet Output */
  /* no initial value should be set */
}

/*========================================================================*
 * Start of Classic call interface                                        *
 *========================================================================*/
void MdlOutputs(int_T tid)
{
  tuske2_output(tid);
}

void MdlUpdate(int_T tid)
{
  tuske2_update(tid);
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
  tuske2_initialize();
}

void MdlTerminate(void)
{
  tuske2_terminate();
}

/* Registration function */
RT_MODEL_tuske2_T *tuske2(void)
{
  /* Registration code */

  /* initialize non-finites */
  rt_InitInfAndNaN(sizeof(real_T));

  /* initialize real-time model */
  (void) memset((void *)tuske2_M, 0,
                sizeof(RT_MODEL_tuske2_T));

  /* Initialize timing info */
  {
    int_T *mdlTsMap = tuske2_M->Timing.sampleTimeTaskIDArray;
    mdlTsMap[0] = 0;
    mdlTsMap[1] = 1;
    tuske2_M->Timing.sampleTimeTaskIDPtr = (&mdlTsMap[0]);
    tuske2_M->Timing.sampleTimes = (&tuske2_M->Timing.sampleTimesArray[0]);
    tuske2_M->Timing.offsetTimes = (&tuske2_M->Timing.offsetTimesArray[0]);

    /* task periods */
    tuske2_M->Timing.sampleTimes[0] = (1.0);
    tuske2_M->Timing.sampleTimes[1] = (10.0);

    /* task offsets */
    tuske2_M->Timing.offsetTimes[0] = (0.0);
    tuske2_M->Timing.offsetTimes[1] = (0.0);
  }

  rtmSetTPtr(tuske2_M, &tuske2_M->Timing.tArray[0]);

  {
    int_T *mdlSampleHits = tuske2_M->Timing.sampleHitArray;
    int_T *mdlPerTaskSampleHits = tuske2_M->Timing.perTaskSampleHitsArray;
    tuske2_M->Timing.perTaskSampleHits = (&mdlPerTaskSampleHits[0]);
    mdlSampleHits[0] = 1;
    tuske2_M->Timing.sampleHits = (&mdlSampleHits[0]);
  }

  rtmSetTFinal(tuske2_M, 180.0);
  tuske2_M->Timing.stepSize0 = 1.0;
  tuske2_M->Timing.stepSize1 = 10.0;

  /* External mode info */
  tuske2_M->Sizes.checksums[0] = (3124149430U);
  tuske2_M->Sizes.checksums[1] = (3108042497U);
  tuske2_M->Sizes.checksums[2] = (4220279204U);
  tuske2_M->Sizes.checksums[3] = (2714966266U);

  {
    static const sysRanDType rtAlwaysEnabled = SUBSYS_RAN_BC_ENABLE;
    static RTWExtModeInfo rt_ExtModeInfo;
    static const sysRanDType *systemRan[1];
    tuske2_M->extModeInfo = (&rt_ExtModeInfo);
    rteiSetSubSystemActiveVectorAddresses(&rt_ExtModeInfo, systemRan);
    systemRan[0] = &rtAlwaysEnabled;
    rteiSetModelMappingInfoPtr(tuske2_M->extModeInfo,
      &tuske2_M->SpecialInfo.mappingInfo);
    rteiSetChecksumsPtr(tuske2_M->extModeInfo, tuske2_M->Sizes.checksums);
    rteiSetTPtr(tuske2_M->extModeInfo, rtmGetTPtr(tuske2_M));
  }

  tuske2_M->solverInfoPtr = (&tuske2_M->solverInfo);
  tuske2_M->Timing.stepSize = (1.0);
  rtsiSetFixedStepSize(&tuske2_M->solverInfo, 1.0);
  rtsiSetSolverMode(&tuske2_M->solverInfo, SOLVER_MODE_MULTITASKING);

  /* block I/O */
  tuske2_M->blockIO = ((void *) &tuske2_B);
  (void) memset(((void *) &tuske2_B), 0,
                sizeof(B_tuske2_T));

  /* parameters */
  tuske2_M->defaultParam = ((real_T *)&tuske2_P);

  /* states (dwork) */
  tuske2_M->dwork = ((void *) &tuske2_DW);
  (void) memset((void *)&tuske2_DW, 0,
                sizeof(DW_tuske2_T));

  /* data type transition information */
  {
    static DataTypeTransInfo dtInfo;
    (void) memset((char_T *) &dtInfo, 0,
                  sizeof(dtInfo));
    tuske2_M->SpecialInfo.mappingInfo = (&dtInfo);
    dtInfo.numDataTypes = 14;
    dtInfo.dataTypeSizes = &rtDataTypeSizes[0];
    dtInfo.dataTypeNames = &rtDataTypeNames[0];

    /* Block I/O transition table */
    dtInfo.BTransTable = &rtBTransTable;

    /* Parameters transition table */
    dtInfo.PTransTable = &rtPTransTable;
  }

  /* Initialize Sizes */
  tuske2_M->Sizes.numContStates = (0); /* Number of continuous states */
  tuske2_M->Sizes.numY = (0);          /* Number of model outputs */
  tuske2_M->Sizes.numU = (0);          /* Number of model inputs */
  tuske2_M->Sizes.sysDirFeedThru = (0);/* The model is not direct feedthrough */
  tuske2_M->Sizes.numSampTimes = (2);  /* Number of sample times */
  tuske2_M->Sizes.numBlocks = (8);     /* Number of blocks */
  tuske2_M->Sizes.numBlockIO = (3);    /* Number of block outputs */
  tuske2_M->Sizes.numBlockPrms = (10); /* Sum of parameter "widths" */
  return tuske2_M;
}

/*========================================================================*
 * End of Classic call interface                                          *
 *========================================================================*/
