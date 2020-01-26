/*
 * sldrtex_packetio.c
 *
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Code generation for model "sldrtex_packetio".
 *
 * Model version              : 1.115
 * Simulink Coder version : 8.11 (R2016b) 25-Aug-2016
 * C source code generated on : Fri Nov 09 15:27:00 2018
 *
 * Target selection: sldrt.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "sldrtex_packetio.h"
#include "sldrtex_packetio_private.h"
#include "sldrtex_packetio_dt.h"

/* options for Simulink Desktop Real-Time board 0 */
static double SLDRTBoardOptions0[] = {
  2.130706433E+9,
  36880.0,
};

/* options for Simulink Desktop Real-Time board 1 */
static double SLDRTBoardOptions1[] = {
  2.130706433E+9,
  36864.0,
};

/* list of Simulink Desktop Real-Time timers */
const int SLDRTTimerCount = 2;
const double SLDRTTimers[4] = {
  0.1, 0.0,
  1.0, 0.0,
};

/* list of Simulink Desktop Real-Time boards */
const int SLDRTBoardCount = 2;
SLDRTBOARD SLDRTBoards[2] = {
  { "Standard_Devices/UDP_Protocol", 36864U, 2, SLDRTBoardOptions0 },

  { "Standard_Devices/UDP_Protocol", 36880U, 2, SLDRTBoardOptions1 },
};

/* Block signals (auto storage) */
B_sldrtex_packetio_T sldrtex_packetio_B;

/* Block states (auto storage) */
DW_sldrtex_packetio_T sldrtex_packetio_DW;

/* Real-time model */
RT_MODEL_sldrtex_packetio_T sldrtex_packetio_M_;
RT_MODEL_sldrtex_packetio_T *const sldrtex_packetio_M = &sldrtex_packetio_M_;
static void rate_monotonic_scheduler(void);
time_T rt_SimUpdateDiscreteEvents(
  int_T rtmNumSampTimes, void *rtmTimingData, int_T *rtmSampleHitPtr, int_T
  *rtmPerTaskSampleHits )
{
  rtmSampleHitPtr[1] = rtmStepTask(sldrtex_packetio_M, 1);
  rtmSampleHitPtr[2] = rtmStepTask(sldrtex_packetio_M, 2);
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
  (sldrtex_packetio_M->Timing.TaskCounters.TID[2])++;
  if ((sldrtex_packetio_M->Timing.TaskCounters.TID[2]) > 9) {/* Sample time: [1.0s, 0.0s] */
    sldrtex_packetio_M->Timing.TaskCounters.TID[2] = 0;
  }
}

/* Model output function for TID0 */
void sldrtex_packetio_output0(void)    /* Sample time: [0.0s, 0.0s] */
{
  real_T tmp;
  int32_T i;

  {                                    /* Sample time: [0.0s, 0.0s] */
    rate_monotonic_scheduler();
  }

  /* S-Function Block: <Root>/Packet Output */

  /* no code required */

  /* Sin: '<Root>/Sine Wave (double)' */
  tmp = sin(sldrtex_packetio_P.SineWavedouble_Freq *
            sldrtex_packetio_M->Timing.t[0] +
            sldrtex_packetio_P.SineWavedouble_Phase);
  sldrtex_packetio_B.SineWavedouble[0] = tmp *
    sldrtex_packetio_P.SineWavedouble_Amp[0] +
    sldrtex_packetio_P.SineWavedouble_Bias;
  sldrtex_packetio_B.SineWavedouble[1] = tmp *
    sldrtex_packetio_P.SineWavedouble_Amp[1] +
    sldrtex_packetio_P.SineWavedouble_Bias;
  sldrtex_packetio_B.SineWavedouble[2] = tmp *
    sldrtex_packetio_P.SineWavedouble_Amp[2] +
    sldrtex_packetio_P.SineWavedouble_Bias;
  sldrtex_packetio_B.SineWavedouble[3] = tmp *
    sldrtex_packetio_P.SineWavedouble_Amp[3] +
    sldrtex_packetio_P.SineWavedouble_Bias;

  /* Sin: '<Root>/Sine Wave (int8)' */
  tmp = sin(sldrtex_packetio_P.SineWaveint8_Freq * sldrtex_packetio_M->Timing.t
            [0] + sldrtex_packetio_P.SineWaveint8_Phase);
  for (i = 0; i < 8; i++) {
    sldrtex_packetio_B.SineWaveint8[i] = tmp *
      sldrtex_packetio_P.SineWaveint8_Amp[i] +
      sldrtex_packetio_P.SineWaveint8_Bias;
  }

  /* End of Sin: '<Root>/Sine Wave (int8)' */
}

/* Model update function for TID0 */
void sldrtex_packetio_update0(void)    /* Sample time: [0.0s, 0.0s] */
{
  /* S-Function Block: <Root>/Packet Output */
  {
    uint8_T outdata[40U];
    RTWin_ANYTYPEPTR outdp;
    outdp.p_uint8_T = outdata;

    {
      real_T pktout = sldrtex_packetio_B.SineWavedouble[0];
      *outdp.p_real_T++ = pktout;
    }

    {
      real_T pktout = sldrtex_packetio_B.SineWavedouble[1];
      *outdp.p_real_T++ = pktout;
    }

    {
      real_T pktout = sldrtex_packetio_B.SineWavedouble[2];
      *outdp.p_real_T++ = pktout;
    }

    {
      real_T pktout = sldrtex_packetio_B.SineWavedouble[3];
      *outdp.p_real_T++ = pktout;
    }

    {
      int_T i1;
      const real_T *u1 = &sldrtex_packetio_B.SineWaveint8[0];
      for (i1=0; i1 < 8; i1++) {
        {
          real_T pktin = u1[i1];
          int8_T pktout = pktin>=MAX_int8_T ? MAX_int8_T : (pktin<=MIN_int8_T ?
            MIN_int8_T : (int8_T) pktin);
          *outdp.p_int8_T++ = pktout;
        }
      }
    }

    RTBIO_DriverIO(0, STREAMOUTPUT, IOWRITE, 40U,
                   &sldrtex_packetio_P.PacketOutput_PacketID, (double*) outdata,
                   NULL);
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
  if (!(++sldrtex_packetio_M->Timing.clockTick0)) {
    ++sldrtex_packetio_M->Timing.clockTickH0;
  }

  sldrtex_packetio_M->Timing.t[0] = sldrtex_packetio_M->Timing.clockTick0 *
    sldrtex_packetio_M->Timing.stepSize0 +
    sldrtex_packetio_M->Timing.clockTickH0 *
    sldrtex_packetio_M->Timing.stepSize0 * 4294967296.0;

  /* Update absolute time */
  /* The "clockTick1" counts the number of times the code of this task has
   * been executed. The absolute time is the multiplication of "clockTick1"
   * and "Timing.stepSize1". Size of "clockTick1" ensures timer will not
   * overflow during the application lifespan selected.
   * Timer of this task consists of two 32 bit unsigned integers.
   * The two integers represent the low bits Timing.clockTick1 and the high bits
   * Timing.clockTickH1. When the low bit overflows to 0, the high bits increment.
   */
  if (!(++sldrtex_packetio_M->Timing.clockTick1)) {
    ++sldrtex_packetio_M->Timing.clockTickH1;
  }

  sldrtex_packetio_M->Timing.t[1] = sldrtex_packetio_M->Timing.clockTick1 *
    sldrtex_packetio_M->Timing.stepSize1 +
    sldrtex_packetio_M->Timing.clockTickH1 *
    sldrtex_packetio_M->Timing.stepSize1 * 4294967296.0;
}

/* Model output function for TID2 */
void sldrtex_packetio_output2(void)    /* Sample time: [1.0s, 0.0s] */
{
  /* S-Function Block: <Root>/Packet Input */
  {
    uint8_T indata[40U];
    int status = RTBIO_DriverIO(1, STREAMINPUT, IOREAD, 40U,
      &sldrtex_packetio_P.PacketInput_PacketID, (double*) indata, NULL);
    if (status & 0x1) {
      RTWin_ANYTYPEPTR indp;
      indp.p_uint8_T = indata;
      sldrtex_packetio_B.PacketInput_o1[0] = *indp.p_real_T++;
      sldrtex_packetio_B.PacketInput_o1[1] = *indp.p_real_T++;
      sldrtex_packetio_B.PacketInput_o1[2] = *indp.p_real_T++;
      sldrtex_packetio_B.PacketInput_o1[3] = *indp.p_real_T++;

      {
        int_T i1;
        int8_T *y1 = &sldrtex_packetio_B.PacketInput_o2[0];
        for (i1=0; i1 < 8; i1++) {
          y1[i1] = *indp.p_int8_T++;
        }
      }
    }
  }
}

/* Model update function for TID2 */
void sldrtex_packetio_update2(void)    /* Sample time: [1.0s, 0.0s] */
{
  /* Update absolute time */
  /* The "clockTick2" counts the number of times the code of this task has
   * been executed. The absolute time is the multiplication of "clockTick2"
   * and "Timing.stepSize2". Size of "clockTick2" ensures timer will not
   * overflow during the application lifespan selected.
   * Timer of this task consists of two 32 bit unsigned integers.
   * The two integers represent the low bits Timing.clockTick2 and the high bits
   * Timing.clockTickH2. When the low bit overflows to 0, the high bits increment.
   */
  if (!(++sldrtex_packetio_M->Timing.clockTick2)) {
    ++sldrtex_packetio_M->Timing.clockTickH2;
  }

  sldrtex_packetio_M->Timing.t[2] = sldrtex_packetio_M->Timing.clockTick2 *
    sldrtex_packetio_M->Timing.stepSize2 +
    sldrtex_packetio_M->Timing.clockTickH2 *
    sldrtex_packetio_M->Timing.stepSize2 * 4294967296.0;
}

/* Model output wrapper function for compatibility with a static main program */
void sldrtex_packetio_output(int_T tid)
{
  switch (tid) {
   case 0 :
    sldrtex_packetio_output0();
    break;

   case 2 :
    sldrtex_packetio_output2();
    break;

   default :
    break;
  }
}

/* Model update wrapper function for compatibility with a static main program */
void sldrtex_packetio_update(int_T tid)
{
  switch (tid) {
   case 0 :
    sldrtex_packetio_update0();
    break;

   case 2 :
    sldrtex_packetio_update2();
    break;

   default :
    break;
  }
}

/* Model initialize function */
void sldrtex_packetio_initialize(void)
{
  /* S-Function Block: <Root>/Packet Output */
  /* no initial value should be set */
}

/* Model terminate function */
void sldrtex_packetio_terminate(void)
{
  /* S-Function Block: <Root>/Packet Output */
  /* no initial value should be set */
}

/*========================================================================*
 * Start of Classic call interface                                        *
 *========================================================================*/
void MdlOutputs(int_T tid)
{
  if (tid == 1)
    tid = 0;
  sldrtex_packetio_output(tid);
}

void MdlUpdate(int_T tid)
{
  if (tid == 1)
    tid = 0;
  sldrtex_packetio_update(tid);
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
  sldrtex_packetio_initialize();
}

void MdlTerminate(void)
{
  sldrtex_packetio_terminate();
}

/* Registration function */
RT_MODEL_sldrtex_packetio_T *sldrtex_packetio(void)
{
  /* Registration code */

  /* initialize non-finites */
  rt_InitInfAndNaN(sizeof(real_T));

  /* initialize real-time model */
  (void) memset((void *)sldrtex_packetio_M, 0,
                sizeof(RT_MODEL_sldrtex_packetio_T));

  {
    /* Setup solver object */
    rtsiSetSimTimeStepPtr(&sldrtex_packetio_M->solverInfo,
                          &sldrtex_packetio_M->Timing.simTimeStep);
    rtsiSetTPtr(&sldrtex_packetio_M->solverInfo, &rtmGetTPtr(sldrtex_packetio_M));
    rtsiSetStepSizePtr(&sldrtex_packetio_M->solverInfo,
                       &sldrtex_packetio_M->Timing.stepSize0);
    rtsiSetErrorStatusPtr(&sldrtex_packetio_M->solverInfo, (&rtmGetErrorStatus
      (sldrtex_packetio_M)));
    rtsiSetRTModelPtr(&sldrtex_packetio_M->solverInfo, sldrtex_packetio_M);
  }

  rtsiSetSimTimeStep(&sldrtex_packetio_M->solverInfo, MAJOR_TIME_STEP);
  rtsiSetSolverName(&sldrtex_packetio_M->solverInfo,"FixedStepDiscrete");

  /* Initialize timing info */
  {
    int_T *mdlTsMap = sldrtex_packetio_M->Timing.sampleTimeTaskIDArray;
    mdlTsMap[0] = 0;
    mdlTsMap[1] = 1;
    mdlTsMap[2] = 2;
    sldrtex_packetio_M->Timing.sampleTimeTaskIDPtr = (&mdlTsMap[0]);
    sldrtex_packetio_M->Timing.sampleTimes =
      (&sldrtex_packetio_M->Timing.sampleTimesArray[0]);
    sldrtex_packetio_M->Timing.offsetTimes =
      (&sldrtex_packetio_M->Timing.offsetTimesArray[0]);

    /* task periods */
    sldrtex_packetio_M->Timing.sampleTimes[0] = (0.0);
    sldrtex_packetio_M->Timing.sampleTimes[1] = (0.1);
    sldrtex_packetio_M->Timing.sampleTimes[2] = (1.0);

    /* task offsets */
    sldrtex_packetio_M->Timing.offsetTimes[0] = (0.0);
    sldrtex_packetio_M->Timing.offsetTimes[1] = (0.0);
    sldrtex_packetio_M->Timing.offsetTimes[2] = (0.0);
  }

  rtmSetTPtr(sldrtex_packetio_M, &sldrtex_packetio_M->Timing.tArray[0]);

  {
    int_T *mdlSampleHits = sldrtex_packetio_M->Timing.sampleHitArray;
    int_T *mdlPerTaskSampleHits =
      sldrtex_packetio_M->Timing.perTaskSampleHitsArray;
    sldrtex_packetio_M->Timing.perTaskSampleHits = (&mdlPerTaskSampleHits[0]);
    mdlSampleHits[0] = 1;
    sldrtex_packetio_M->Timing.sampleHits = (&mdlSampleHits[0]);
  }

  rtmSetTFinal(sldrtex_packetio_M, 60.0);
  sldrtex_packetio_M->Timing.stepSize0 = 0.1;
  sldrtex_packetio_M->Timing.stepSize1 = 0.1;
  sldrtex_packetio_M->Timing.stepSize2 = 1.0;

  /* External mode info */
  sldrtex_packetio_M->Sizes.checksums[0] = (2155841070U);
  sldrtex_packetio_M->Sizes.checksums[1] = (3930935501U);
  sldrtex_packetio_M->Sizes.checksums[2] = (2963425689U);
  sldrtex_packetio_M->Sizes.checksums[3] = (574888266U);

  {
    static const sysRanDType rtAlwaysEnabled = SUBSYS_RAN_BC_ENABLE;
    static RTWExtModeInfo rt_ExtModeInfo;
    static const sysRanDType *systemRan[1];
    sldrtex_packetio_M->extModeInfo = (&rt_ExtModeInfo);
    rteiSetSubSystemActiveVectorAddresses(&rt_ExtModeInfo, systemRan);
    systemRan[0] = &rtAlwaysEnabled;
    rteiSetModelMappingInfoPtr(sldrtex_packetio_M->extModeInfo,
      &sldrtex_packetio_M->SpecialInfo.mappingInfo);
    rteiSetChecksumsPtr(sldrtex_packetio_M->extModeInfo,
                        sldrtex_packetio_M->Sizes.checksums);
    rteiSetTPtr(sldrtex_packetio_M->extModeInfo, rtmGetTPtr(sldrtex_packetio_M));
  }

  sldrtex_packetio_M->solverInfoPtr = (&sldrtex_packetio_M->solverInfo);
  sldrtex_packetio_M->Timing.stepSize = (0.1);
  rtsiSetFixedStepSize(&sldrtex_packetio_M->solverInfo, 0.1);
  rtsiSetSolverMode(&sldrtex_packetio_M->solverInfo, SOLVER_MODE_MULTITASKING);

  /* block I/O */
  sldrtex_packetio_M->blockIO = ((void *) &sldrtex_packetio_B);
  (void) memset(((void *) &sldrtex_packetio_B), 0,
                sizeof(B_sldrtex_packetio_T));

  {
    int32_T i;
    for (i = 0; i < 8; i++) {
      sldrtex_packetio_B.SineWaveint8[i] = 0.0;
    }

    sldrtex_packetio_B.PacketInput_o1[0] = 0.0;
    sldrtex_packetio_B.PacketInput_o1[1] = 0.0;
    sldrtex_packetio_B.PacketInput_o1[2] = 0.0;
    sldrtex_packetio_B.PacketInput_o1[3] = 0.0;
    sldrtex_packetio_B.SineWavedouble[0] = 0.0;
    sldrtex_packetio_B.SineWavedouble[1] = 0.0;
    sldrtex_packetio_B.SineWavedouble[2] = 0.0;
    sldrtex_packetio_B.SineWavedouble[3] = 0.0;
  }

  /* parameters */
  sldrtex_packetio_M->defaultParam = ((real_T *)&sldrtex_packetio_P);

  /* states (dwork) */
  sldrtex_packetio_M->dwork = ((void *) &sldrtex_packetio_DW);
  (void) memset((void *)&sldrtex_packetio_DW, 0,
                sizeof(DW_sldrtex_packetio_T));

  /* data type transition information */
  {
    static DataTypeTransInfo dtInfo;
    (void) memset((char_T *) &dtInfo, 0,
                  sizeof(dtInfo));
    sldrtex_packetio_M->SpecialInfo.mappingInfo = (&dtInfo);
    dtInfo.numDataTypes = 14;
    dtInfo.dataTypeSizes = &rtDataTypeSizes[0];
    dtInfo.dataTypeNames = &rtDataTypeNames[0];

    /* Block I/O transition table */
    dtInfo.BTransTable = &rtBTransTable;

    /* Parameters transition table */
    dtInfo.PTransTable = &rtPTransTable;
  }

  /* Initialize Sizes */
  sldrtex_packetio_M->Sizes.numContStates = (0);/* Number of continuous states */
  sldrtex_packetio_M->Sizes.numY = (0);/* Number of model outputs */
  sldrtex_packetio_M->Sizes.numU = (0);/* Number of model inputs */
  sldrtex_packetio_M->Sizes.sysDirFeedThru = (0);/* The model is not direct feedthrough */
  sldrtex_packetio_M->Sizes.numSampTimes = (3);/* Number of sample times */
  sldrtex_packetio_M->Sizes.numBlocks = (6);/* Number of blocks */
  sldrtex_packetio_M->Sizes.numBlockIO = (4);/* Number of block outputs */
  sldrtex_packetio_M->Sizes.numBlockPrms = (24);/* Sum of parameter "widths" */
  return sldrtex_packetio_M;
}

/*========================================================================*
 * End of Classic call interface                                          *
 *========================================================================*/
