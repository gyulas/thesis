/*
 * udp_conn.c
 *
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Code generation for model "udp_conn".
 *
 * Model version              : 1.192
 * Simulink Coder version : 9.0 (R2018b) 24-May-2018
 * C source code generated on : Fri Dec  7 00:04:49 2018
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

/* Named constants for MATLAB Function: '<S9>/optimizer' */
#define udp_conn_Ku1                   (397.54896734463495)
#define udp_conn_RMDscale              (0.033333333333333333)
#define udp_conn_RYscale               (0.033333333333333333)
#define udp_conn_Wdu                   (10000.0)
#define udp_conn_Wu                    (0.0025000000000000005)
#define udp_conn_Wy                    (25.0)
#define udp_conn_nu                    (1.0)
#define udp_conn_nv                    (2.0)
#define udp_conn_ny                    (1.0)
#define udp_conn_uoff                  (0.0)

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
const int SLDRTTimerCount = 4;
const double SLDRTTimers[8] = {
  1.0, 0.0,
  20.0, 0.0,
  30.0, 0.0,
  300.0, 0.0,
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

/* Forward declaration for local functions */
static void udp_conn_updateWeights(real_T *W, real_T b_signal, real_T ZERO);
static void udp_conn_kron(const real_T b_A[10000], real_T B, real_T K[10000]);
static void udp_conn_WtMult(real_T W, const real_T b_M[100], real_T WM[100]);
static void udp_conn_mpc_calculatehessian(real_T b_Wy, real_T b_Wu, real_T b_Wdu,
  const real_T b_SuJm[100], const real_T I2Jm[100], const real_T b_Jm[100],
  const real_T b_I1[100], const real_T b_Su1[100], const real_T b_Sx[400], const
  real_T b_Hv[20200], real_T *b_H, real_T *b_Ku1, real_T b_Kut[100], real_T
  b_Kx[4], real_T b_Kv[202], real_T b_Kr[100]);
static int32_T udp_conn_xpotrf(real_T b_A[4]);
static void udp_conn_mpc_checkhessian(real_T b_H[4], real_T b_L[4], real_T *BadH);
static void udp_conn_eye(real_T b_I[4]);
static void udp_conn_trisolve(const real_T b_A[4], real_T B[4]);
static void udp_conn_linsolve(const real_T b_A[4], const real_T B[4], real_T
  b_C[4]);
static void udp_conn_Unconstrained(const real_T b_Hinv[4], const real_T f[2],
  real_T x[2], int16_T n);
static real_T udp_conn_norm(const real_T x[2]);
static void udp_conn_abs(const real_T x[2], real_T y[2]);
static real_T udp_conn_xnrm2(int32_T n, const real_T x[4], int32_T ix0);
static void udp_conn_xgemv(int32_T m, int32_T n, const real_T b_A[4], int32_T
  ia0, const real_T x[4], int32_T ix0, real_T y[2]);
static void udp_conn_xgerc(int32_T m, int32_T n, real_T alpha1, int32_T ix0,
  const real_T y[2], real_T b_A[4], int32_T ia0);
static void udp_conn_qr(const real_T b_A[4], real_T Q[4], real_T R[4]);
static real_T udp_conn_KWIKfactor(const real_T b_Ac[4], const int16_T iC[2],
  int16_T nA, const real_T b_Linv[4], real_T RLinv[4], real_T D[4], real_T b_H[4],
  int16_T n);
static void udp_conn_DropConstraint(int16_T kDrop, int16_T iA[2], int16_T *nA,
  int16_T iC[2]);
static int16_T udp_conn_rdivide_helper(int16_T x, int16_T y);
static void udp_conn_qpkwik(const real_T b_Linv[4], const real_T b_Hinv[4],
  const real_T f[2], const real_T b_Ac[4], const real_T b[2], int16_T iA[2],
  int16_T b_maxiter, real_T FeasTol, real_T x[2], real_T lambda[2], real_T
  *status);
static void udp_conn_mpc_solveQP(const real_T xQP[4], const real_T b_Kx[4],
  const real_T b_Kr[100], const real_T rseq[100], real_T b_Ku1, real_T old_u,
  const real_T b_Kv[202], const real_T vseq[202], const real_T b_Kut[100], const
  real_T b_utarget[100], const real_T b_Linv[4], const real_T b_Hinv[4], const
  real_T b_Ac[4], const real_T Bc[2], boolean_T iA[2], real_T zopt[2], real_T f
  [2], real_T *status);
static void udp_conn_mpcblock_optimizer(const real_T rseq[100], const real_T
  vseq[202], const real_T x[4], real_T old_u, const boolean_T iA[2], const
  real_T b_Mlim[2], const real_T b_Mx[8], const real_T b_Mu1[2], const real_T
  b_Mv[404], const real_T b_utarget[100], real_T b_uoff, real_T b_H[4], const
  real_T b_Ac[4], real_T ywt, real_T uwt, real_T duwt, const real_T b_Jm[100],
  const real_T b_SuJm[100], const real_T b_Su1[100], const real_T b_Sx[400],
  const real_T b_Hv[20200], const real_T b_I1[100], real_T *u, real_T useq[101],
  real_T *status, boolean_T iAout[2]);
static void rate_monotonic_scheduler(void);
time_T rt_SimUpdateDiscreteEvents(
  int_T rtmNumSampTimes, void *rtmTimingData, int_T *rtmSampleHitPtr, int_T
  *rtmPerTaskSampleHits )
{
  rtmSampleHitPtr[1] = rtmStepTask(udp_conn_M, 1);
  rtmSampleHitPtr[2] = rtmStepTask(udp_conn_M, 2);
  rtmSampleHitPtr[3] = rtmStepTask(udp_conn_M, 3);
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
  (udp_conn_M->Timing.TaskCounters.TID[1])++;
  if ((udp_conn_M->Timing.TaskCounters.TID[1]) > 19) {/* Sample time: [20.0s, 0.0s] */
    udp_conn_M->Timing.TaskCounters.TID[1] = 0;
  }

  (udp_conn_M->Timing.TaskCounters.TID[2])++;
  if ((udp_conn_M->Timing.TaskCounters.TID[2]) > 29) {/* Sample time: [30.0s, 0.0s] */
    udp_conn_M->Timing.TaskCounters.TID[2] = 0;
  }

  (udp_conn_M->Timing.TaskCounters.TID[3])++;
  if ((udp_conn_M->Timing.TaskCounters.TID[3]) > 299) {/* Sample time: [300.0s, 0.0s] */
    udp_conn_M->Timing.TaskCounters.TID[3] = 0;
  }
}

/* Function for MATLAB Function: '<S9>/optimizer' */
static void udp_conn_updateWeights(real_T *W, real_T b_signal, real_T ZERO)
{
  if (b_signal < ZERO) {
    *W = ZERO;
  } else {
    *W = b_signal * b_signal;
  }
}

/* Function for MATLAB Function: '<S9>/optimizer' */
static void udp_conn_kron(const real_T b_A[10000], real_T B, real_T K[10000])
{
  int32_T kidx;
  int32_T b_j1;
  int32_T i1;
  kidx = -1;
  for (b_j1 = 0; b_j1 < 100; b_j1++) {
    for (i1 = 0; i1 < 100; i1++) {
      kidx++;
      K[kidx] = b_A[100 * b_j1 + i1] * B;
    }
  }
}

/* Function for MATLAB Function: '<S9>/optimizer' */
static void udp_conn_WtMult(real_T W, const real_T b_M[100], real_T WM[100])
{
  int32_T i;
  for (i = 0; i < 100; i++) {
    WM[i] = W * b_M[i];
  }
}

/* Function for MATLAB Function: '<S9>/optimizer' */
static void udp_conn_mpc_calculatehessian(real_T b_Wy, real_T b_Wu, real_T b_Wdu,
  const real_T b_SuJm[100], const real_T I2Jm[100], const real_T b_Jm[100],
  const real_T b_I1[100], const real_T b_Su1[100], const real_T b_Sx[400], const
  real_T b_Hv[20200], real_T *b_H, real_T *b_Ku1, real_T b_Kut[100], real_T
  b_Kx[4], real_T b_Kv[202], real_T b_Kr[100])
{
  real_T tmp[100];
  real_T b_SuJm_0;
  real_T b_Jm_0;
  real_T I2Jm_0;
  int32_T i;
  int32_T i_0;
  udp_conn_WtMult(b_Wy, b_SuJm, b_Kr);
  udp_conn_WtMult(b_Wu, I2Jm, b_Kut);
  udp_conn_WtMult(b_Wdu, b_Jm, tmp);
  b_SuJm_0 = 0.0;
  b_Jm_0 = 0.0;
  I2Jm_0 = 0.0;
  for (i = 0; i < 100; i++) {
    b_SuJm_0 += b_SuJm[i] * b_Kr[i];
    b_Jm_0 += b_Jm[i] * tmp[i];
    I2Jm_0 += I2Jm[i] * b_Kut[i];
  }

  *b_H = (b_SuJm_0 + b_Jm_0) + I2Jm_0;
  b_SuJm_0 = 0.0;
  b_Jm_0 = 0.0;
  for (i = 0; i < 100; i++) {
    b_SuJm_0 += b_Su1[i] * b_Kr[i];
    b_Jm_0 += b_I1[i] * b_Kut[i];
    b_Kut[i] = -b_Kut[i];
  }

  *b_Ku1 = b_SuJm_0 + b_Jm_0;
  for (i = 0; i < 4; i++) {
    b_Kx[i] = 0.0;
    for (i_0 = 0; i_0 < 100; i_0++) {
      b_Kx[i] += b_Sx[100 * i + i_0] * b_Kr[i_0];
    }
  }

  for (i = 0; i < 202; i++) {
    b_Kv[i] = 0.0;
    for (i_0 = 0; i_0 < 100; i_0++) {
      b_Kv[i] += b_Hv[100 * i + i_0] * b_Kr[i_0];
    }
  }

  for (i = 0; i < 100; i++) {
    b_Kr[i] = -b_Kr[i];
  }
}

/* Function for MATLAB Function: '<S9>/optimizer' */
static int32_T udp_conn_xpotrf(real_T b_A[4])
{
  int32_T info;
  int32_T jj;
  real_T ajj;
  int32_T j;
  int32_T ix;
  boolean_T exitg1;
  info = 0;
  j = 0;
  exitg1 = false;
  while ((!exitg1) && (j < 2)) {
    jj = (j << 1) + j;
    ajj = 0.0;
    if (j >= 1) {
      ajj = b_A[1] * b_A[1];
    }

    ajj = b_A[jj] - ajj;
    if (ajj > 0.0) {
      ajj = sqrt(ajj);
      b_A[jj] = ajj;
      if (j + 1 < 2) {
        ajj = 1.0 / ajj;
        for (ix = jj + 1; ix < jj + 2; ix++) {
          b_A[ix] *= ajj;
        }
      }

      j++;
    } else {
      b_A[jj] = ajj;
      info = j + 1;
      exitg1 = true;
    }
  }

  return info;
}

real_T rt_powd_snf(real_T u0, real_T u1)
{
  real_T y;
  real_T tmp;
  real_T tmp_0;
  if (rtIsNaN(u0) || rtIsNaN(u1)) {
    y = (rtNaN);
  } else {
    tmp = fabs(u0);
    tmp_0 = fabs(u1);
    if (rtIsInf(u1)) {
      if (tmp == 1.0) {
        y = 1.0;
      } else if (tmp > 1.0) {
        if (u1 > 0.0) {
          y = (rtInf);
        } else {
          y = 0.0;
        }
      } else if (u1 > 0.0) {
        y = 0.0;
      } else {
        y = (rtInf);
      }
    } else if (tmp_0 == 0.0) {
      y = 1.0;
    } else if (tmp_0 == 1.0) {
      if (u1 > 0.0) {
        y = u0;
      } else {
        y = 1.0 / u0;
      }
    } else if (u1 == 2.0) {
      y = u0 * u0;
    } else if ((u1 == 0.5) && (u0 >= 0.0)) {
      y = sqrt(u0);
    } else if ((u0 < 0.0) && (u1 > floor(u1))) {
      y = (rtNaN);
    } else {
      y = pow(u0, u1);
    }
  }

  return y;
}

/* Function for MATLAB Function: '<S9>/optimizer' */
static void udp_conn_mpc_checkhessian(real_T b_H[4], real_T b_L[4], real_T *BadH)
{
  real_T normH;
  int32_T Tries;
  real_T s;
  int32_T j;
  boolean_T exitg1;
  boolean_T exitg2;
  boolean_T guard1 = false;
  boolean_T guard2 = false;
  *BadH = 0.0;
  b_L[0] = b_H[0];
  b_L[1] = b_H[1];
  b_L[2] = b_H[2];
  b_L[3] = b_H[3];
  Tries = udp_conn_xpotrf(b_L);
  guard1 = false;
  if (Tries == 0) {
    if ((b_L[0] > b_L[3]) || (rtIsNaN(b_L[0]) && (!rtIsNaN(b_L[3])))) {
      normH = b_L[3];
    } else {
      normH = b_L[0];
    }

    if (normH > 1.4901161193847656E-7) {
    } else {
      guard1 = true;
    }
  } else {
    guard1 = true;
  }

  if (guard1) {
    normH = 0.0;
    Tries = 0;
    exitg2 = false;
    while ((!exitg2) && (Tries < 2)) {
      s = fabs(b_H[Tries + 2]) + fabs(b_H[Tries]);
      if (rtIsNaN(s)) {
        normH = (rtNaN);
        exitg2 = true;
      } else {
        if (s > normH) {
          normH = s;
        }

        Tries++;
      }
    }

    if (normH >= 1.0E+10) {
      *BadH = 2.0;
    } else {
      Tries = 0;
      exitg1 = false;
      while ((!exitg1) && (Tries <= 4)) {
        normH = rt_powd_snf(10.0, (real_T)Tries) * 1.4901161193847656E-7;
        b_H[0] += normH;
        b_L[0] = b_H[0];
        b_L[1] = b_H[1];
        b_L[2] = b_H[2];
        b_H[3] += normH;
        b_L[3] = b_H[3];
        j = udp_conn_xpotrf(b_L);
        guard2 = false;
        if (j == 0) {
          if ((b_L[0] > b_L[3]) || (rtIsNaN(b_L[0]) && (!rtIsNaN(b_L[3])))) {
            normH = b_L[3];
          } else {
            normH = b_L[0];
          }

          if (normH > 1.4901161193847656E-7) {
            *BadH = 1.0;
            exitg1 = true;
          } else {
            guard2 = true;
          }
        } else {
          guard2 = true;
        }

        if (guard2) {
          *BadH = 3.0;
          Tries++;
        }
      }
    }
  }
}

/* Function for MATLAB Function: '<S9>/optimizer' */
static void udp_conn_eye(real_T b_I[4])
{
  b_I[1] = 0.0;
  b_I[2] = 0.0;
  b_I[0] = 1.0;
  b_I[3] = 1.0;
}

/* Function for MATLAB Function: '<S9>/optimizer' */
static void udp_conn_trisolve(const real_T b_A[4], real_T B[4])
{
  if (B[0] != 0.0) {
    B[0] /= b_A[0];
    B[1] -= B[0] * b_A[1];
  }

  if (B[1] != 0.0) {
    B[1] /= b_A[3];
  }

  if (B[2] != 0.0) {
    B[2] /= b_A[0];
    B[3] -= B[2] * b_A[1];
  }

  if (B[3] != 0.0) {
    B[3] /= b_A[3];
  }
}

/* Function for MATLAB Function: '<S9>/optimizer' */
static void udp_conn_linsolve(const real_T b_A[4], const real_T B[4], real_T
  b_C[4])
{
  b_C[0] = B[0];
  b_C[1] = B[1];
  b_C[2] = B[2];
  b_C[3] = B[3];
  udp_conn_trisolve(b_A, b_C);
}

/* Function for MATLAB Function: '<S9>/optimizer' */
static void udp_conn_Unconstrained(const real_T b_Hinv[4], const real_T f[2],
  real_T x[2], int16_T n)
{
  int32_T i;
  int32_T i_0;
  for (i = 1; i - 1 < n; i++) {
    i_0 = (int16_T)i;
    x[(int16_T)i - 1] = -b_Hinv[i_0 - 1] * f[0] + -b_Hinv[i_0 + 1] * f[1];
  }
}

/* Function for MATLAB Function: '<S9>/optimizer' */
static real_T udp_conn_norm(const real_T x[2])
{
  real_T y;
  real_T scale;
  real_T absxk;
  real_T t;
  scale = 3.3121686421112381E-170;
  absxk = fabs(x[0]);
  if (absxk > 3.3121686421112381E-170) {
    y = 1.0;
    scale = absxk;
  } else {
    t = absxk / 3.3121686421112381E-170;
    y = t * t;
  }

  absxk = fabs(x[1]);
  if (absxk > scale) {
    t = scale / absxk;
    y = y * t * t + 1.0;
    scale = absxk;
  } else {
    t = absxk / scale;
    y += t * t;
  }

  return scale * sqrt(y);
}

/* Function for MATLAB Function: '<S9>/optimizer' */
static void udp_conn_abs(const real_T x[2], real_T y[2])
{
  y[0] = fabs(x[0]);
  y[1] = fabs(x[1]);
}

/* Function for MATLAB Function: '<S9>/optimizer' */
static real_T udp_conn_xnrm2(int32_T n, const real_T x[4], int32_T ix0)
{
  real_T y;
  real_T scale;
  int32_T kend;
  real_T absxk;
  real_T t;
  int32_T k;
  y = 0.0;
  if (n >= 1) {
    if (n == 1) {
      y = fabs(x[ix0 - 1]);
    } else {
      scale = 3.3121686421112381E-170;
      kend = (ix0 + n) - 1;
      for (k = ix0; k <= kend; k++) {
        absxk = fabs(x[k - 1]);
        if (absxk > scale) {
          t = scale / absxk;
          y = y * t * t + 1.0;
          scale = absxk;
        } else {
          t = absxk / scale;
          y += t * t;
        }
      }

      y = scale * sqrt(y);
    }
  }

  return y;
}

real_T rt_hypotd_snf(real_T u0, real_T u1)
{
  real_T y;
  real_T a;
  a = fabs(u0);
  y = fabs(u1);
  if (a < y) {
    a /= y;
    y *= sqrt(a * a + 1.0);
  } else if (a > y) {
    y /= a;
    y = sqrt(y * y + 1.0) * a;
  } else {
    if (!rtIsNaN(y)) {
      y = a * 1.4142135623730951;
    }
  }

  return y;
}

/* Function for MATLAB Function: '<S9>/optimizer' */
static void udp_conn_xgemv(int32_T m, int32_T n, const real_T b_A[4], int32_T
  ia0, const real_T x[4], int32_T ix0, real_T y[2])
{
  int32_T ix;
  real_T c;
  int32_T b_iy;
  int32_T b;
  int32_T iac;
  int32_T d;
  int32_T ia;
  if ((m != 0) && (n != 0)) {
    for (b_iy = 0; b_iy < n; b_iy++) {
      y[b_iy] = 0.0;
    }

    b_iy = 0;
    b = ((n - 1) << 1) + ia0;
    for (iac = ia0; iac <= b; iac += 2) {
      ix = ix0;
      c = 0.0;
      d = (iac + m) - 1;
      for (ia = iac; ia <= d; ia++) {
        c += b_A[ia - 1] * x[ix - 1];
        ix++;
      }

      y[b_iy] += c;
      b_iy++;
    }
  }
}

/* Function for MATLAB Function: '<S9>/optimizer' */
static void udp_conn_xgerc(int32_T m, int32_T n, real_T alpha1, int32_T ix0,
  const real_T y[2], real_T b_A[4], int32_T ia0)
{
  int32_T jA;
  int32_T jy;
  real_T temp;
  int32_T ix;
  int32_T j;
  int32_T b;
  int32_T ijA;
  if (!(alpha1 == 0.0)) {
    jA = ia0 - 1;
    jy = 0;
    for (j = 0; j < n; j++) {
      if (y[jy] != 0.0) {
        temp = y[jy] * alpha1;
        ix = ix0;
        b = m + jA;
        for (ijA = jA; ijA < b; ijA++) {
          b_A[ijA] += b_A[ix - 1] * temp;
          ix++;
        }
      }

      jy++;
      jA += 2;
    }
  }
}

/* Function for MATLAB Function: '<S9>/optimizer' */
static void udp_conn_qr(const real_T b_A[4], real_T Q[4], real_T R[4])
{
  real_T c_A[4];
  real_T work[2];
  real_T b;
  real_T b_atmp;
  real_T xnorm;
  int32_T knt;
  int32_T lastc;
  int32_T c_lastc;
  int32_T exitg1;
  c_A[0] = b_A[0];
  c_A[1] = b_A[1];
  c_A[2] = b_A[2];
  c_A[3] = b_A[3];
  work[0] = 0.0;
  work[1] = 0.0;
  b_atmp = b_A[0];
  b = 0.0;
  xnorm = udp_conn_xnrm2(1, c_A, 2);
  if (xnorm != 0.0) {
    xnorm = rt_hypotd_snf(b_A[0], xnorm);
    if (b_A[0] >= 0.0) {
      xnorm = -xnorm;
    }

    if (fabs(xnorm) < 1.0020841800044864E-292) {
      knt = -1;
      do {
        knt++;
        for (lastc = 1; lastc < 2; lastc++) {
          c_A[lastc] *= 9.9792015476736E+291;
        }

        xnorm *= 9.9792015476736E+291;
        b_atmp *= 9.9792015476736E+291;
      } while (!(fabs(xnorm) >= 1.0020841800044864E-292));

      xnorm = rt_hypotd_snf(b_atmp, udp_conn_xnrm2(1, c_A, 2));
      if (b_atmp >= 0.0) {
        xnorm = -xnorm;
      }

      b = (xnorm - b_atmp) / xnorm;
      b_atmp = 1.0 / (b_atmp - xnorm);
      for (lastc = 1; lastc < 2; lastc++) {
        c_A[lastc] *= b_atmp;
      }

      for (lastc = 0; lastc <= knt; lastc++) {
        xnorm *= 1.0020841800044864E-292;
      }

      b_atmp = xnorm;
    } else {
      b = (xnorm - b_A[0]) / xnorm;
      b_atmp = 1.0 / (b_A[0] - xnorm);
      for (knt = 1; knt < 2; knt++) {
        c_A[knt] *= b_atmp;
      }

      b_atmp = xnorm;
    }
  }

  c_A[0] = 1.0;
  if (b != 0.0) {
    knt = 2;
    lastc = 1;
    while ((knt > 0) && (c_A[lastc] == 0.0)) {
      knt--;
      lastc--;
    }

    lastc = 1;
    c_lastc = 3;
    do {
      exitg1 = 0;
      if (c_lastc <= knt + 2) {
        if (c_A[c_lastc - 1] != 0.0) {
          exitg1 = 1;
        } else {
          c_lastc++;
        }
      } else {
        lastc = 0;
        exitg1 = 1;
      }
    } while (exitg1 == 0);
  } else {
    knt = 0;
    lastc = 0;
  }

  if (knt > 0) {
    udp_conn_xgemv(knt, lastc, c_A, 3, c_A, 1, work);
    udp_conn_xgerc(knt, lastc, -b, 1, work, c_A, 3);
  }

  c_A[0] = b_atmp;
  R[0] = b_atmp;
  R[1] = 0.0;
  work[0] = 0.0;
  for (lastc = 0; lastc < 2; lastc++) {
    R[lastc + 2] = c_A[lastc + 2];
  }

  work[1] = 0.0;
  c_A[3] = 1.0;
  c_A[2] = 0.0;
  c_A[0] = 1.0;
  if (b != 0.0) {
    lastc = 2;
    c_lastc = 1;
    while ((lastc > 0) && (c_A[c_lastc] == 0.0)) {
      lastc--;
      c_lastc--;
    }

    c_lastc = 1;
    knt = 1;
    do {
      exitg1 = 0;
      if (knt + 2 <= lastc + 2) {
        if (c_A[knt + 1] != 0.0) {
          exitg1 = 1;
        } else {
          knt++;
        }
      } else {
        c_lastc = 0;
        exitg1 = 1;
      }
    } while (exitg1 == 0);
  } else {
    lastc = 0;
    c_lastc = 0;
  }

  if (lastc > 0) {
    udp_conn_xgemv(lastc, c_lastc, c_A, 3, c_A, 1, work);
    udp_conn_xgerc(lastc, c_lastc, -b, 1, work, c_A, 3);
  }

  for (lastc = 1; lastc < 2; lastc++) {
    c_A[lastc] *= -b;
  }

  Q[0] = 1.0 - b;
  Q[1] = c_A[1];
  Q[2] = c_A[2];
  Q[3] = c_A[3];
}

/* Function for MATLAB Function: '<S9>/optimizer' */
static real_T udp_conn_KWIKfactor(const real_T b_Ac[4], const int16_T iC[2],
  int16_T nA, const real_T b_Linv[4], real_T RLinv[4], real_T D[4], real_T b_H[4],
  int16_T n)
{
  real_T Status;
  real_T TL[4];
  real_T QQ[4];
  real_T RR[4];
  int32_T i;
  int16_T b_j;
  int16_T c_k;
  int32_T f_i;
  int32_T tmp;
  int32_T tmp_0;
  int32_T TL_tmp;
  int32_T TL_tmp_0;
  int32_T iC_tmp;
  real_T tmp_1;
  real_T tmp_2;
  int32_T exitg1;
  int32_T exitg2;
  Status = 1.0;
  RLinv[0] = 0.0;
  RLinv[1] = 0.0;
  RLinv[2] = 0.0;
  RLinv[3] = 0.0;
  i = 1;
  do {
    exitg1 = 0;
    tmp = nA - 1;
    if (i - 1 <= tmp) {
      iC_tmp = (int16_T)i - 1;
      tmp = iC_tmp << 1;
      RLinv[tmp] = 0.0;
      tmp_1 = b_Ac[iC[iC_tmp] - 1];
      RLinv[tmp] += tmp_1 * b_Linv[0];
      tmp_2 = b_Ac[iC[iC_tmp] + 1];
      RLinv[tmp] += tmp_2 * b_Linv[2];
      iC_tmp = 1 + tmp;
      RLinv[iC_tmp] = 0.0;
      tmp++;
      RLinv[iC_tmp] = RLinv[tmp] + tmp_1 * b_Linv[1];
      RLinv[iC_tmp] = RLinv[tmp] + tmp_2 * b_Linv[3];
      i++;
    } else {
      exitg1 = 1;
    }
  } while (exitg1 == 0);

  udp_conn_qr(RLinv, QQ, RR);
  i = 1;
  do {
    exitg1 = 0;
    if (i - 1 <= tmp) {
      if (fabs(RR[((((int16_T)i - 1) << 1) + (int16_T)i) - 1]) < 1.0E-12) {
        Status = -2.0;
        exitg1 = 1;
      } else {
        i++;
      }
    } else {
      i = 1;
      do {
        exitg2 = 0;
        iC_tmp = n - 1;
        if (i - 1 <= iC_tmp) {
          for (f_i = 1; f_i - 1 <= iC_tmp; f_i++) {
            TL_tmp = ((int16_T)i - 1) << 1;
            TL_tmp_0 = ((int16_T)f_i - 1) << 1;
            TL[((int16_T)i + (((int16_T)f_i - 1) << 1)) - 1] = b_Linv[TL_tmp + 1]
              * QQ[TL_tmp_0 + 1] + b_Linv[TL_tmp] * QQ[TL_tmp_0];
          }

          i++;
        } else {
          exitg2 = 1;
        }
      } while (exitg2 == 0);

      RLinv[0] = 0.0;
      RLinv[1] = 0.0;
      RLinv[2] = 0.0;
      RLinv[3] = 0.0;
      b_j = nA;
      while (b_j > 0) {
        TL_tmp = b_j - 1;
        TL_tmp_0 = TL_tmp << 1;
        RLinv[(b_j + TL_tmp_0) - 1] = 1.0;
        for (c_k = b_j; c_k <= nA; c_k++) {
          tmp_0 = (c_k - 1) << 1;
          RLinv[(b_j + tmp_0) - 1] /= RR[(TL_tmp_0 + b_j) - 1];
        }

        if (b_j > 1) {
          for (i = 1; i - 1 <= b_j - 2; i++) {
            for (c_k = b_j; c_k <= nA; c_k++) {
              tmp_0 = (c_k - 1) << 1;
              RLinv[((int16_T)i + tmp_0) - 1] -= RR[(TL_tmp_0 + (int16_T)i) - 1]
                * RLinv[(tmp_0 + b_j) - 1];
            }
          }
        }

        b_j = (int16_T)TL_tmp;
      }

      for (i = 1; i - 1 <= iC_tmp; i++) {
        for (b_j = (int16_T)i; b_j <= n; b_j++) {
          TL_tmp = (b_j - 1) << 1;
          TL_tmp_0 = ((int16_T)i + TL_tmp) - 1;
          b_H[TL_tmp_0] = 0.0;
          tmp_0 = nA + 1;
          if (tmp_0 > 32767) {
            tmp_0 = 32767;
          }

          for (c_k = (int16_T)tmp_0; c_k <= n; c_k++) {
            tmp_0 = (c_k - 1) << 1;
            b_H[TL_tmp_0] = b_H[(((b_j - 1) << 1) + (int16_T)i) - 1] - TL[(tmp_0
              + (int16_T)i) - 1] * TL[(tmp_0 + b_j) - 1];
          }

          b_H[(b_j + (((int16_T)i - 1) << 1)) - 1] = b_H[(TL_tmp + (int16_T)i) -
            1];
        }
      }

      for (i = 1; i - 1 <= tmp; i++) {
        for (f_i = 1; f_i - 1 <= iC_tmp; f_i++) {
          TL_tmp = ((int16_T)i - 1) << 1;
          TL_tmp_0 = ((int16_T)f_i + TL_tmp) - 1;
          D[TL_tmp_0] = 0.0;
          for (b_j = (int16_T)i; b_j <= nA; b_j++) {
            tmp_0 = (b_j - 1) << 1;
            D[TL_tmp_0] = TL[(tmp_0 + (int16_T)f_i) - 1] * RLinv[(tmp_0 +
              (int16_T)i) - 1] + D[(TL_tmp + (int16_T)f_i) - 1];
          }
        }
      }

      exitg1 = 1;
    }
  } while (exitg1 == 0);

  return Status;
}

/* Function for MATLAB Function: '<S9>/optimizer' */
static void udp_conn_DropConstraint(int16_T kDrop, int16_T iA[2], int16_T *nA,
  int16_T iC[2])
{
  int16_T i;
  int32_T tmp;
  iA[iC[kDrop - 1] - 1] = 0;
  if (kDrop < *nA) {
    tmp = *nA - 1;
    if (tmp < -32768) {
      tmp = -32768;
    }

    for (i = kDrop; i <= (int16_T)tmp; i++) {
      iC[i - 1] = iC[i];
    }
  }

  iC[*nA - 1] = 0;
  tmp = *nA - 1;
  if (tmp < -32768) {
    tmp = -32768;
  }

  *nA = (int16_T)tmp;
}

/* Function for MATLAB Function: '<S9>/optimizer' */
static int16_T udp_conn_rdivide_helper(int16_T x, int16_T y)
{
  int16_T z;
  uint16_T b_y;
  uint16_T c_y;
  uint16_T q;
  int32_T tmp;
  if (y == 0) {
    if (x == 0) {
      z = 0;
    } else if (x < 0) {
      z = MIN_int16_T;
    } else {
      z = MAX_int16_T;
    }
  } else if (y == 1) {
    z = x;
  } else if (y == -1) {
    tmp = -x;
    if (tmp > 32767) {
      tmp = 32767;
    }

    z = (int16_T)tmp;
  } else {
    if (x >= 0) {
      b_y = (uint16_T)x;
    } else if (x == -32768) {
      b_y = 32768U;
    } else {
      b_y = (uint16_T)-x;
    }

    if (y >= 0) {
      c_y = (uint16_T)y;
    } else if (y == -32768) {
      c_y = 32768U;
    } else {
      c_y = (uint16_T)-y;
    }

    q = (uint16_T)(c_y == 0U ? MAX_uint32_T : (uint32_T)b_y / c_y);
    b_y = (uint16_T)((uint32_T)b_y - (uint16_T)((uint32_T)q * c_y));
    if ((b_y > 0) && (b_y >= (int32_T)((uint32_T)c_y >> 1) + (c_y & 1))) {
      q++;
    }

    z = (int16_T)q;
    if ((x < 0) != (y < 0)) {
      z = (int16_T)-(int16_T)q;
    }
  }

  return z;
}

/* Function for MATLAB Function: '<S9>/optimizer' */
static void udp_conn_qpkwik(const real_T b_Linv[4], const real_T b_Hinv[4],
  const real_T f[2], const real_T b_Ac[4], const real_T b[2], int16_T iA[2],
  int16_T b_maxiter, real_T FeasTol, real_T x[2], real_T lambda[2], real_T
  *status)
{
  real_T r[2];
  real_T rMin;
  real_T RLinv[4];
  real_T D[4];
  real_T b_H[4];
  real_T U[4];
  boolean_T cTolComputed;
  int16_T iC[2];
  int16_T nA;
  real_T Opt[4];
  real_T Rhs[4];
  boolean_T DualFeasible;
  int16_T MaxWSiter;
  boolean_T ColdReset;
  int16_T kDrop;
  real_T Xnorm0;
  real_T cMin;
  real_T cVal;
  real_T AcRow[2];
  real_T t;
  real_T b_Ac_0[2];
  real_T cTol_idx_0;
  real_T cTol_idx_1;
  int32_T r_tmp;
  int32_T AcRow_tmp_tmp;
  int16_T tmp;
  int32_T lambda_tmp;
  int32_T Rhs_tmp;
  int32_T U_tmp;
  int32_T U_tmp_0;
  int32_T U_tmp_1;
  int32_T exitg1;
  int32_T exitg2;
  int32_T exitg3;
  boolean_T exitg4;
  int32_T exitg5;
  boolean_T guard1 = false;
  boolean_T guard2 = false;
  *status = 1.0;
  rMin = 0.0;
  cTolComputed = false;
  lambda[0] = 0.0;
  x[0] = 0.0;
  r[0] = 0.0;
  cTol_idx_0 = 1.0;
  iC[0] = 0;
  lambda[1] = 0.0;
  x[1] = 0.0;
  r[1] = 0.0;
  cTol_idx_1 = 1.0;
  iC[1] = 0;
  nA = 0;
  if (iA[0] == 1) {
    nA = 1;
    iC[0] = 1;
  }

  if (iA[1] == 1) {
    r_tmp = nA + 1;
    nA = (int16_T)r_tmp;
    iC[(int16_T)r_tmp - 1] = 2;
  }

  guard1 = false;
  if (nA > 0) {
    Opt[2] = 0.0;
    Opt[3] = 0.0;
    Rhs[0] = f[0];
    Rhs[2] = 0.0;
    Rhs[1] = f[1];
    Rhs[3] = 0.0;
    DualFeasible = false;
    ColdReset = false;
    do {
      exitg3 = 0;
      if ((!DualFeasible) && (nA > 0) && ((int32_T)*status <= b_maxiter)) {
        Xnorm0 = udp_conn_KWIKfactor(b_Ac, iC, nA, b_Linv, RLinv, D, b_H, 2);
        if (Xnorm0 < 0.0) {
          if (ColdReset) {
            *status = -2.0;
            exitg3 = 2;
          } else {
            nA = 0;
            iA[0] = 0;
            iC[0] = 0;
            iA[1] = 0;
            iC[1] = 0;
            ColdReset = true;
          }
        } else {
          AcRow_tmp_tmp = 1;
          do {
            exitg5 = 0;
            r_tmp = nA - 1;
            if (AcRow_tmp_tmp - 1 <= r_tmp) {
              U_tmp = 2 + (int16_T)AcRow_tmp_tmp;
              if (U_tmp > 32767) {
                U_tmp = 32767;
              }

              Rhs_tmp = (int16_T)AcRow_tmp_tmp - 1;
              Rhs[U_tmp - 1] = b[iC[Rhs_tmp] - 1];
              for (kDrop = (int16_T)AcRow_tmp_tmp; kDrop <= nA; kDrop++) {
                U_tmp = Rhs_tmp << 1;
                U_tmp_1 = (kDrop + U_tmp) - 1;
                U[U_tmp_1] = 0.0;
                for (lambda_tmp = 1; lambda_tmp - 1 <= r_tmp; lambda_tmp++) {
                  U_tmp_0 = ((int16_T)lambda_tmp - 1) << 1;
                  U[U_tmp_1] = RLinv[(U_tmp_0 + kDrop) - 1] * RLinv[(U_tmp_0 +
                    (int16_T)AcRow_tmp_tmp) - 1] + U[((((int16_T)AcRow_tmp_tmp -
                    1) << 1) + kDrop) - 1];
                }

                U[((int16_T)AcRow_tmp_tmp + ((kDrop - 1) << 1)) - 1] = U[(U_tmp
                  + kDrop) - 1];
              }

              AcRow_tmp_tmp++;
            } else {
              exitg5 = 1;
            }
          } while (exitg5 == 0);

          Opt[0] = b_H[0] * Rhs[0] + b_H[2] * Rhs[1];
          for (lambda_tmp = 1; lambda_tmp - 1 <= r_tmp; lambda_tmp++) {
            U_tmp = 2 + (int16_T)lambda_tmp;
            if (U_tmp > 32767) {
              U_tmp = 32767;
            }

            Opt[0] += D[((int16_T)lambda_tmp - 1) << 1] * Rhs[U_tmp - 1];
          }

          Opt[1] = b_H[1] * Rhs[0] + b_H[3] * Rhs[1];
          for (lambda_tmp = 1; lambda_tmp - 1 <= r_tmp; lambda_tmp++) {
            U_tmp = 2 + (int16_T)lambda_tmp;
            if (U_tmp > 32767) {
              U_tmp = 32767;
            }

            Opt[1] += D[(((int16_T)lambda_tmp - 1) << 1) + 1] * Rhs[U_tmp - 1];
          }

          for (AcRow_tmp_tmp = 1; AcRow_tmp_tmp - 1 <= r_tmp; AcRow_tmp_tmp++) {
            U_tmp = 2 + (int16_T)AcRow_tmp_tmp;
            Rhs_tmp = U_tmp;
            if (U_tmp > 32767) {
              Rhs_tmp = 32767;
            }

            lambda_tmp = ((int16_T)AcRow_tmp_tmp - 1) << 1;
            Opt[Rhs_tmp - 1] = D[lambda_tmp + 1] * Rhs[1] + D[lambda_tmp] * Rhs
              [0];
            for (lambda_tmp = 1; lambda_tmp - 1 <= r_tmp; lambda_tmp++) {
              Rhs_tmp = U_tmp;
              if (U_tmp > 32767) {
                Rhs_tmp = 32767;
              }

              U_tmp_1 = U_tmp;
              if (U_tmp > 32767) {
                U_tmp_1 = 32767;
              }

              U_tmp_0 = 2 + (int16_T)lambda_tmp;
              if (U_tmp_0 > 32767) {
                U_tmp_0 = 32767;
              }

              Opt[Rhs_tmp - 1] = U[((((int16_T)lambda_tmp - 1) << 1) + (int16_T)
                                    AcRow_tmp_tmp) - 1] * Rhs[U_tmp_0 - 1] +
                Opt[U_tmp_1 - 1];
            }
          }

          Xnorm0 = -1.0E-12;
          kDrop = 0;
          for (AcRow_tmp_tmp = 1; AcRow_tmp_tmp - 1 <= r_tmp; AcRow_tmp_tmp++) {
            U_tmp = 2 + (int16_T)AcRow_tmp_tmp;
            Rhs_tmp = U_tmp;
            if (U_tmp > 32767) {
              Rhs_tmp = 32767;
            }

            lambda[iC[(int16_T)AcRow_tmp_tmp - 1] - 1] = Opt[Rhs_tmp - 1];
            Rhs_tmp = U_tmp;
            if (U_tmp > 32767) {
              Rhs_tmp = 32767;
            }

            if ((Opt[Rhs_tmp - 1] < Xnorm0) && ((int16_T)AcRow_tmp_tmp <= nA)) {
              kDrop = (int16_T)AcRow_tmp_tmp;
              if (U_tmp > 32767) {
                U_tmp = 32767;
              }

              Xnorm0 = Opt[U_tmp - 1];
            }
          }

          if (kDrop <= 0) {
            DualFeasible = true;
            x[0] = Opt[0];
            x[1] = Opt[1];
          } else {
            (*status)++;
            if ((int32_T)*status > udp_conn_rdivide_helper(50, 10)) {
              nA = 0;
              iA[0] = 0;
              iC[0] = 0;
              iA[1] = 0;
              iC[1] = 0;
              ColdReset = true;
            } else {
              lambda[iC[kDrop - 1] - 1] = 0.0;
              udp_conn_DropConstraint(kDrop, iA, &nA, iC);
            }
          }
        }
      } else {
        if (nA <= 0) {
          lambda[0] = 0.0;
          lambda[1] = 0.0;
          udp_conn_Unconstrained(b_Hinv, f, x, 2);
        }

        exitg3 = 1;
      }
    } while (exitg3 == 0);

    if (exitg3 == 1) {
      guard1 = true;
    }
  } else {
    udp_conn_Unconstrained(b_Hinv, f, x, 2);
    guard1 = true;
  }

  if (guard1) {
    Xnorm0 = udp_conn_norm(x);
    do {
      exitg2 = 0;
      if ((int32_T)*status <= b_maxiter) {
        cMin = -FeasTol;
        MaxWSiter = 0;
        if (!cTolComputed) {
          b_Ac_0[0] = b_Ac[0] * x[0];
          b_Ac_0[1] = b_Ac[2] * x[1];
          udp_conn_abs(b_Ac_0, AcRow);
          if ((AcRow[0] < AcRow[1]) || (rtIsNaN(AcRow[0]) && (!rtIsNaN(AcRow[1]))))
          {
            cVal = AcRow[1];
          } else {
            cVal = AcRow[0];
          }

          if ((!(cTol_idx_0 > cVal)) && (!rtIsNaN(cVal))) {
            cTol_idx_0 = cVal;
          }
        }

        if (iA[0] == 0) {
          cVal = ((b_Ac[0] * x[0] + b_Ac[2] * x[1]) - b[0]) / cTol_idx_0;
          if (cVal < -FeasTol) {
            cMin = cVal;
            MaxWSiter = 1;
          }
        }

        if (!cTolComputed) {
          b_Ac_0[0] = b_Ac[1] * x[0];
          b_Ac_0[1] = b_Ac[3] * x[1];
          udp_conn_abs(b_Ac_0, AcRow);
          if ((AcRow[0] < AcRow[1]) || (rtIsNaN(AcRow[0]) && (!rtIsNaN(AcRow[1]))))
          {
            cVal = AcRow[1];
          } else {
            cVal = AcRow[0];
          }

          if ((!(cTol_idx_1 > cVal)) && (!rtIsNaN(cVal))) {
            cTol_idx_1 = cVal;
          }
        }

        if ((iA[1] == 0) && (((b_Ac[1] * x[0] + b_Ac[3] * x[1]) - b[1]) /
                             cTol_idx_1 < cMin)) {
          MaxWSiter = 2;
        }

        cTolComputed = true;
        if (MaxWSiter <= 0) {
          exitg2 = 1;
        } else {
          do {
            exitg1 = 0;
            if ((MaxWSiter > 0) && ((int32_T)*status <= b_maxiter)) {
              guard2 = false;
              if (nA == 0) {
                AcRow[0] = b_Ac[MaxWSiter - 1] * b_Hinv[0] + b_Ac[MaxWSiter + 1]
                  * b_Hinv[2];
                AcRow[1] = b_Ac[MaxWSiter - 1] * b_Hinv[1] + b_Ac[MaxWSiter + 1]
                  * b_Hinv[3];
                guard2 = true;
              } else {
                cMin = udp_conn_KWIKfactor(b_Ac, iC, nA, b_Linv, RLinv, D, b_H,
                  2);
                if (cMin <= 0.0) {
                  *status = -2.0;
                  exitg1 = 1;
                } else {
                  AcRow_tmp_tmp = MaxWSiter - 1;
                  cMin = b_Ac[MaxWSiter - 1];
                  cVal = b_Ac[MaxWSiter + 1];
                  AcRow[0] = b_Ac[AcRow_tmp_tmp] * -b_H[0] + cVal * -b_H[2];
                  AcRow[1] = b_Ac[AcRow_tmp_tmp] * -b_H[1] + cVal * -b_H[3];
                  for (AcRow_tmp_tmp = 1; AcRow_tmp_tmp - 1 < nA; AcRow_tmp_tmp
                       ++) {
                    r_tmp = ((int16_T)AcRow_tmp_tmp - 1) << 1;
                    r[(int16_T)AcRow_tmp_tmp - 1] = D[r_tmp + 1] * cVal +
                      D[r_tmp] * cMin;
                  }

                  guard2 = true;
                }
              }

              if (guard2) {
                kDrop = 0;
                cMin = 0.0;
                DualFeasible = true;
                ColdReset = true;
                if (nA > 0) {
                  AcRow_tmp_tmp = 0;
                  exitg4 = false;
                  while ((!exitg4) && (AcRow_tmp_tmp <= nA - 1)) {
                    if (r[AcRow_tmp_tmp] >= 1.0E-12) {
                      ColdReset = false;
                      exitg4 = true;
                    } else {
                      AcRow_tmp_tmp++;
                    }
                  }
                }

                if ((nA != 0) && (!ColdReset)) {
                  for (AcRow_tmp_tmp = 1; AcRow_tmp_tmp - 1 < nA; AcRow_tmp_tmp
                       ++) {
                    r_tmp = (int16_T)AcRow_tmp_tmp - 1;
                    if (r[r_tmp] > 1.0E-12) {
                      cVal = lambda[iC[r_tmp] - 1] / r[(int16_T)AcRow_tmp_tmp -
                        1];
                      if ((kDrop == 0) || (cVal < rMin)) {
                        rMin = cVal;
                        kDrop = (int16_T)AcRow_tmp_tmp;
                      }
                    }
                  }

                  if (kDrop > 0) {
                    cMin = rMin;
                    DualFeasible = false;
                  }
                }

                cVal = b_Ac[MaxWSiter - 1] * AcRow[0] + b_Ac[MaxWSiter + 1] *
                  AcRow[1];
                if (cVal <= 0.0) {
                  cVal = 0.0;
                  ColdReset = true;
                } else {
                  cVal = (b[MaxWSiter - 1] - (b_Ac[MaxWSiter - 1] * x[0] +
                           b_Ac[MaxWSiter + 1] * x[1])) / cVal;
                  ColdReset = false;
                }

                if (DualFeasible && ColdReset) {
                  *status = -1.0;
                  exitg1 = 1;
                } else {
                  if (ColdReset) {
                    t = cMin;
                  } else if (DualFeasible) {
                    t = cVal;
                  } else if ((cMin < cVal) || rtIsNaN(cVal)) {
                    t = cMin;
                  } else {
                    t = cVal;
                  }

                  for (AcRow_tmp_tmp = 1; AcRow_tmp_tmp - 1 < nA; AcRow_tmp_tmp
                       ++) {
                    r_tmp = (int16_T)AcRow_tmp_tmp - 1;
                    lambda_tmp = iC[r_tmp] - 1;
                    lambda[lambda_tmp] -= r[r_tmp] * t;
                    if ((iC[(int16_T)AcRow_tmp_tmp - 1] <= 2) &&
                        (lambda[lambda_tmp] < 0.0)) {
                      lambda[lambda_tmp] = 0.0;
                    }
                  }

                  lambda[MaxWSiter - 1] += t;
                  if (t == cMin) {
                    udp_conn_DropConstraint(kDrop, iA, &nA, iC);
                  }

                  if (!ColdReset) {
                    x[0] += t * AcRow[0];
                    x[1] += t * AcRow[1];
                    if (t == cVal) {
                      if (nA == 2) {
                        *status = -1.0;
                        exitg1 = 1;
                      } else {
                        r_tmp = nA + 1;
                        if (r_tmp > 32767) {
                          r_tmp = 32767;
                        }

                        nA = (int16_T)r_tmp;
                        iC[(int16_T)r_tmp - 1] = MaxWSiter;
                        kDrop = (int16_T)r_tmp;
                        exitg4 = false;
                        while ((!exitg4) && (kDrop > 1)) {
                          r_tmp = kDrop - 1;
                          tmp = iC[r_tmp];
                          U_tmp = kDrop - 2;
                          if (iC[r_tmp] > iC[U_tmp]) {
                            exitg4 = true;
                          } else {
                            iC[r_tmp] = iC[U_tmp];
                            iC[U_tmp] = tmp;
                            kDrop = (int16_T)r_tmp;
                          }
                        }

                        iA[MaxWSiter - 1] = 1;
                        MaxWSiter = 0;
                        (*status)++;
                      }
                    } else {
                      (*status)++;
                    }
                  } else {
                    (*status)++;
                  }
                }
              }
            } else {
              cMin = udp_conn_norm(x);
              if (fabs(cMin - Xnorm0) > 0.001) {
                Xnorm0 = cMin;
                udp_conn_abs(b, AcRow);
                if (AcRow[0] > 1.0) {
                  cTol_idx_0 = AcRow[0];
                } else {
                  cTol_idx_0 = 1.0;
                }

                if (AcRow[1] > 1.0) {
                  cTol_idx_1 = AcRow[1];
                } else {
                  cTol_idx_1 = 1.0;
                }

                cTolComputed = false;
              }

              exitg1 = 2;
            }
          } while (exitg1 == 0);

          if (exitg1 == 1) {
            exitg2 = 1;
          }
        }
      } else {
        *status = 0.0;
        exitg2 = 1;
      }
    } while (exitg2 == 0);
  }
}

/* Function for MATLAB Function: '<S9>/optimizer' */
static void udp_conn_mpc_solveQP(const real_T xQP[4], const real_T b_Kx[4],
  const real_T b_Kr[100], const real_T rseq[100], real_T b_Ku1, real_T old_u,
  const real_T b_Kv[202], const real_T vseq[202], const real_T b_Kut[100], const
  real_T b_utarget[100], const real_T b_Linv[4], const real_T b_Hinv[4], const
  real_T b_Ac[4], const real_T Bc[2], boolean_T iA[2], real_T zopt[2], real_T f
  [2], real_T *status)
{
  real_T unusedU0[2];
  int16_T iAnew[2];
  real_T b_Kr_0;
  real_T b_Kv_0;
  real_T b_Kut_0;
  int32_T i;
  f[1] = 0.0;
  b_Kr_0 = 0.0;
  for (i = 0; i < 100; i++) {
    b_Kr_0 += b_Kr[i] * rseq[i];
  }

  b_Kv_0 = 0.0;
  for (i = 0; i < 202; i++) {
    b_Kv_0 += b_Kv[i] * vseq[i];
  }

  b_Kut_0 = 0.0;
  for (i = 0; i < 100; i++) {
    b_Kut_0 += b_Kut[i] * b_utarget[i];
  }

  f[0] = ((((((b_Kx[0] * xQP[0] + b_Kx[1] * xQP[1]) + b_Kx[2] * xQP[2]) + b_Kx[3]
             * xQP[3]) + b_Kr_0) + b_Ku1 * old_u) + b_Kv_0) + b_Kut_0;
  iAnew[0] = iA[0];
  iAnew[1] = iA[1];
  udp_conn_qpkwik(b_Linv, b_Hinv, f, b_Ac, Bc, iAnew, 120, 1.0E-6, zopt,
                  unusedU0, status);
  iA[0] = (iAnew[0] != 0);
  iA[1] = (iAnew[1] != 0);
  if ((*status < 0.0) || (*status == 0.0)) {
    zopt[0] = 0.0;
    zopt[1] = 0.0;
  }
}

/* Function for MATLAB Function: '<S9>/optimizer' */
static void udp_conn_mpcblock_optimizer(const real_T rseq[100], const real_T
  vseq[202], const real_T x[4], real_T old_u, const boolean_T iA[2], const
  real_T b_Mlim[2], const real_T b_Mx[8], const real_T b_Mu1[2], const real_T
  b_Mv[404], const real_T b_utarget[100], real_T b_uoff, real_T b_H[4], const
  real_T b_Ac[4], real_T ywt, real_T uwt, real_T duwt, const real_T b_Jm[100],
  const real_T b_SuJm[100], const real_T b_Su1[100], const real_T b_Sx[400],
  const real_T b_Hv[20200], const real_T b_I1[100], real_T *u, real_T useq[101],
  real_T *status, boolean_T iAout[2])
{
  real_T c_Linv[4];
  real_T c_Ku1;
  real_T c_Kut[100];
  real_T c_Kx[4];
  real_T c_Kv[202];
  real_T c_Kr[100];
  real_T d_Linv[4];
  real_T f[2];
  static const real_T c[10000] = { 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 0.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 0.0, 0.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 0.0, 0.0, 0.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 0.0, 0.0, 0.0, 0.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 1.0, 1.0, 1.0, 1.0, 1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 1.0, 1.0,
    1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 1.0, 1.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 1.0, 1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    1.0 };

  real_T d;
  real_T e;
  real_T g;
  int32_T i;
  real_T b_Mlim_0[2];
  real_T tmp[4];
  real_T tmp_0[10000];
  real_T tmp_1[100];
  real_T b_Mv_0[2];
  int32_T c_Linv_tmp;
  int32_T c_Linv_tmp_0;
  for (i = 0; i < 101; i++) {
    useq[i] = 0.0;
  }

  iAout[0] = false;
  iAout[1] = false;
  d = udp_conn_Wy;
  udp_conn_updateWeights(&d, ywt, 0.0);
  e = udp_conn_Wu;
  udp_conn_updateWeights(&e, uwt, 0.0);
  g = udp_conn_Wdu;
  udp_conn_updateWeights(&g, duwt, 0.0);
  udp_conn_kron(c, 1.0, tmp_0);
  for (c_Linv_tmp = 0; c_Linv_tmp < 100; c_Linv_tmp++) {
    tmp_1[c_Linv_tmp] = 0.0;
    for (i = 0; i < 100; i++) {
      tmp_1[c_Linv_tmp] += tmp_0[100 * i + c_Linv_tmp] * b_Jm[i];
    }
  }

  udp_conn_mpc_calculatehessian(d, e, g, b_SuJm, tmp_1, b_Jm, b_I1, b_Su1, b_Sx,
    b_Hv, &b_H[0], &c_Ku1, c_Kut, c_Kx, c_Kv, c_Kr);
  c_Linv[0] = b_H[0];
  c_Linv[1] = b_H[1];
  c_Linv[2] = b_H[2];
  c_Linv[3] = b_H[3];
  udp_conn_mpc_checkhessian(c_Linv, d_Linv, &d);
  if (d > 1.0) {
    *u = old_u + b_uoff;
    for (i = 0; i < 101; i++) {
      useq[i] = *u;
    }

    *status = -2.0;
  } else {
    udp_conn_eye(tmp);
    udp_conn_linsolve(d_Linv, tmp, c_Linv);
    for (i = 0; i < 2; i++) {
      iAout[i] = iA[i];
      d_Linv[i] = 0.0;
      c_Linv_tmp = i << 1;
      d_Linv[i] += c_Linv[c_Linv_tmp] * c_Linv[0];
      c_Linv_tmp_0 = c_Linv_tmp + 1;
      d_Linv[i] += c_Linv[c_Linv_tmp_0] * c_Linv[1];
      d_Linv[i + 2] = 0.0;
      d_Linv[i + 2] += c_Linv[c_Linv_tmp] * c_Linv[2];
      d_Linv[i + 2] += c_Linv[c_Linv_tmp_0] * c_Linv[3];
      b_Mv_0[i] = 0.0;
      for (c_Linv_tmp = 0; c_Linv_tmp < 202; c_Linv_tmp++) {
        b_Mv_0[i] += b_Mv[(c_Linv_tmp << 1) + i] * vseq[c_Linv_tmp];
      }

      b_Mlim_0[i] = -((((((b_Mx[i + 2] * x[1] + b_Mx[i] * x[0]) + b_Mx[i + 4] *
                          x[2]) + b_Mx[i + 6] * x[3]) + b_Mlim[i]) + b_Mu1[i] *
                       old_u) + b_Mv_0[i]);
    }

    udp_conn_mpc_solveQP(x, c_Kx, c_Kr, rseq, c_Ku1, old_u, c_Kv, vseq, c_Kut,
                         b_utarget, c_Linv, d_Linv, b_Ac, b_Mlim_0, iAout,
                         b_Mv_0, f, status);
    *u = (old_u + b_Mv_0[0]) + b_uoff;
  }
}

/* Model output function for TID0 */
void udp_conn_output0(void)            /* Sample time: [1.0s, 0.0s] */
{
  {                                    /* Sample time: [1.0s, 0.0s] */
    rate_monotonic_scheduler();
  }

  /* S-Function (sldrtpi): '<Root>/Packet Input1' */
  /* S-Function Block: <Root>/Packet Input1 */
  {
    uint8_T indata[14U];
    int status = RTBIO_DriverIO(0, STREAMINPUT, IOREAD, 14U,
      &udp_conn_P.PacketInput1_PacketID, (double*) indata, NULL);
    udp_conn_B.PacketInput1_o15 = 0;   /* Missed Ticks value is always zero */
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
      udp_conn_B.PacketInput1_o13 = *indp.p_uint8_T++;
      udp_conn_B.PacketInput1_o14 = *indp.p_uint8_T++;
    }
  }

  /* Sum: '<Root>/Sum2' incorporates:
   *  Gain: '<Root>/Gain2'
   */
  udp_conn_B.Sum2 = (uint16_T)((uint32_T)udp_conn_P.Gain2_Gain *
    udp_conn_B.PacketInput1_o6 + udp_conn_B.PacketInput1_o7);

  /* Sum: '<Root>/Sum3' incorporates:
   *  Gain: '<Root>/Gain3'
   */
  udp_conn_B.Sum3 = (uint16_T)((uint32_T)udp_conn_P.Gain3_Gain *
    udp_conn_B.PacketInput1_o13 + udp_conn_B.PacketInput1_o14);

  /* Switch: '<Root>/Switch' incorporates:
   *  Constant: '<S1>/Constant'
   *  RelationalOperator: '<S1>/Compare'
   */
  if ((udp_conn_B.PacketInput1_o1 == udp_conn_P.CompareToConstant_const) >
      udp_conn_P.Switch_Threshold) {
    udp_conn_B.Switch = udp_conn_B.Sum2;
  } else {
    udp_conn_B.Switch = udp_conn_B.Sum3;
  }

  /* End of Switch: '<Root>/Switch' */

  /* RelationalOperator: '<S2>/Compare' incorporates:
   *  Constant: '<S2>/Constant'
   */
  udp_conn_B.Compare = (uint8_T)(udp_conn_B.PacketInput1_o8 ==
    udp_conn_P.CompareToConstant1_const);

  /* Switch: '<Root>/Switch1' */
  if (udp_conn_B.Compare > udp_conn_P.Switch1_Threshold) {
    udp_conn_B.Switch1 = udp_conn_B.Sum3;
  } else {
    udp_conn_B.Switch1 = udp_conn_B.Sum2;
  }

  /* End of Switch: '<Root>/Switch1' */

  /* Gain: '<Root>/Gain1' incorporates:
   *  DataTypeConversion: '<Root>/Data Type Conversion3'
   */
  udp_conn_B.Gain1 = udp_conn_P.Gain1_Gain * (real_T)udp_conn_B.Switch;

  /* Sum: '<Root>/Sum1' incorporates:
   *  Constant: '<Root>/Constant1'
   */
  udp_conn_B.Sum1 = udp_conn_B.Gain1 + udp_conn_P.Constant1_Value;

  /* Gain: '<Root>/Gain' incorporates:
   *  DataTypeConversion: '<Root>/Data Type Conversion2'
   */
  udp_conn_B.Gain = udp_conn_P.Gain_Gain * (real_T)udp_conn_B.Switch1;

  /* Sum: '<Root>/Sum' incorporates:
   *  Constant: '<Root>/Constant1'
   */
  udp_conn_B.Sum = udp_conn_B.Gain + udp_conn_P.Constant1_Value;

  /* DataTypeConversion: '<Root>/Data Type Conversion1' */
  udp_conn_B.time_UTC1[0] = udp_conn_B.PacketInput1_o2;
  udp_conn_B.time_UTC1[1] = udp_conn_B.PacketInput1_o3;
  udp_conn_B.time_UTC1[2] = udp_conn_B.PacketInput1_o4;
  udp_conn_B.time_UTC1[3] = udp_conn_B.PacketInput1_o5;
}

/* Model update function for TID0 */
void udp_conn_update0(void)            /* Sample time: [1.0s, 0.0s] */
{
  /* Update absolute time */
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

/* Model output function for TID1 */
void udp_conn_output1(void)            /* Sample time: [20.0s, 0.0s] */
{
  /* RateTransition: '<Root>/Rate Transition5' */
  udp_conn_B.time_UTC1_i[0] = udp_conn_B.time_UTC1[0];
  udp_conn_B.time_UTC1_i[1] = udp_conn_B.time_UTC1[1];
  udp_conn_B.time_UTC1_i[2] = udp_conn_B.time_UTC1[2];
  udp_conn_B.time_UTC1_i[3] = udp_conn_B.time_UTC1[3];
}

/* Model update function for TID1 */
void udp_conn_update1(void)            /* Sample time: [20.0s, 0.0s] */
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
  if (!(++udp_conn_M->Timing.clockTick1)) {
    ++udp_conn_M->Timing.clockTickH1;
  }

  udp_conn_M->Timing.t[1] = udp_conn_M->Timing.clockTick1 *
    udp_conn_M->Timing.stepSize1 + udp_conn_M->Timing.clockTickH1 *
    udp_conn_M->Timing.stepSize1 * 4294967296.0;
}

/* Model output function for TID2 */
void udp_conn_output2(void)            /* Sample time: [30.0s, 0.0s] */
{
  real_T y_innov;
  real_T rseq[100];
  real_T vseq[202];
  real_T u;
  real_T status;
  static const real_T h[4] = { -1.0, 1.0, 0.0, 0.0 };

  static const real_T k[100] = { 1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0 };

  static const real_T l[100] = { 0.012790836431040205, 0.025273399970785013,
    0.037508550458469347, 0.049501191792089394, 0.061256130670987695,
    0.072778078522397746, 0.084071653389803158, 0.095141381783868259,
    0.10599170049668193, 0.11662695838004189, 0.12705141808849216,
    0.13726925778781235, 0.14728457282964338, 0.15710137739292113,
    0.16672360609277559, 0.17615511555754065, 0.18539968597450637,
    0.19446102260503337, 0.20334275726963663, 0.21204844980363394,
    0.22058158948394233, 0.22894559642759438, 0.23714382296253511,
    0.24517955497124855, 0.25305601320775284, 0.26077635458849141,
    0.2683436734576381, 0.27576100282732263, 0.28303131559327444,
    0.29015752572637116, 0.29714248944057003, 0.3039890063376901,
    0.31069982052950396, 0.31727762173758889, 0.32372504637137817,
    0.33004467858484476, 0.33623905131224063, 0.34231064728330718,
    0.34826190001836321, 0.35409519480366997, 0.3598128696474634,
    0.36541721621703754, 0.3709104807572538, 0.3762948649908453,
    0.38157252700087613, 0.38674558209570981, 0.39181610365683345,
    0.39678612396987761, 0.40165763503916446, 0.40643258938611132,
    0.41111290083180907, 0.4157004452640895, 0.42019706138938884,
    0.42460455146970849, 0.42892468204496925, 0.43315918464104758,
    0.43730975646377812, 0.44137806107920075, 0.44536572908032468,
    0.44927435874067667, 0.45310551665489551, 0.45686073836662966,
    0.46054152898398915, 0.46414936378279931, 0.46768568879789707,
    0.47115192140270767, 0.47454945087733374, 0.47787963896538438,
    0.48114382041976744, 0.484343303537664, 0.48747937068489927,
    0.49055327880991978, 0.49356625994758357, 0.49651952171296487,
    0.49941424778537097, 0.50225159838276567, 0.50503271072678935,
    0.50775869949856234, 0.51043065728545312, 0.51304965501899213,
    0.51561674240410538, 0.51813294833984058, 0.5205992813317537,
    0.52301672989612247, 0.52538626295614743, 0.52770883023030057,
    0.52998536261297613, 0.532216772547597, 0.53440395439232558,
    0.53654778477852616, 0.53864912296212264, 0.54070881116799141,
    0.54272767492752871, 0.54470652340952708, 0.546646149744493,
    0.54854733134253753, 0.55041083020496484, 0.55223739322968568,
    0.55402775251057712, 0.55578262563090874 };

  static const real_T m[400] = { 0.003360992941537706, 0.0032943757343453,
    0.0032290789263240043, 0.0031650763462480278, 0.0031023423416233938,
    0.0030408517684063175, 0.0029805799809253719, 0.0029215028220034014,
    0.0028635966132752278, 0.0028068381456972653, 0.0027512046702452414,
    0.0026966738887962954, 0.0026432239451918008, 0.0025908334164773277,
    0.0025394813043162368, 0.0024891470265734584, 0.0024398104090660915,
    0.0023914516774775079, 0.0023440514494317273, 0.0022975907267248803,
    0.0022520508877106526, 0.0022074136798366532, 0.0021636612123287174,
    0.0021207759490202115, 0.0020787407013234658, 0.00203753862134052,
    0.0019971531951104159, 0.001957568235990336, 0.0019187678781679308,
    0.0018807365703022362, 0.0018434590692906342, 0.0018069204341593539,
    0.0017711060200750702, 0.0017360014724751938, 0.0017015927213145049,
    0.0016678659754258221, 0.0016348077169924459, 0.0016024046961301633,
    0.0015706439255766408, 0.001539512675486076, 0.0015089984683270244,
    0.001479089073881354, 0.0014497725043423242, 0.0014210370095098239,
    0.0013928710720808443, 0.0013652634030332962, 0.0013382029371013244,
    0.0013116788283403047, 0.0012856804457797447, 0.0012601973691623483,
    0.0012352193847675328, 0.0012107364813177305, 0.0011867388459658253,
    0.0011632168603621267, 0.0011401610967992938, 0.0011175623144336726,
    0.0010954114555815288, 0.0010736996420886913, 0.0010524181717721513,
    0.0010315585149321929, 0.001011112310933654, 0.00099107136485495056,
    0.00097142764420351808, 0.00095217327569635621, 0.00093330054210438512,
    0.00091480187915934865, 0.00089666987252202458, 0.00087889725481052794,
    0.00086147690268751438, 0.00084440183400511784, 0.00082766520500647707,
    0.00081126030758273062, 0.00079518056658437906, 0.00077941953718593869,
    0.00076397090230282891, 0.00074882847005945967, 0.000733986171307502,
    0.0007194380571933491, 0.00070517829677379151, 0.00069120117467895154,
    0.00067750108882153959, 0.00066407254815151477, 0.00065091017045525016,
    0.00063800868019831935, 0.000625362906411041, 0.00061296778061593307,
    0.00060081833479624653, 0.00058890969940476423, 0.00057723710141206633,
    0.00056579586239348086, 0.000554581396653952, 0.0005435892093900753,
    0.00053281489488856153, 0.00052225413476040964, 0.00051190269621007826,
    0.00050175643033896445, 0.00049181127048250845, 0.00048206323058025733,
    0.00047250840357823659, 0.00046314295986298645, 0.0010064856463153672,
    0.00098653640393281785, 0.0009669825693467874, 0.00094781630530097589,
    0.00092902992987892923, 0.00091061591342509645, 0.00089256687552691282,
    0.00087487558205670058, 0.00085753494227220175, 0.00084053800597457917,
    0.000823877960722749, 0.00080754812910292589, 0.0007915419660522898,
    0.000775853056235697, 0.00076047511147438835, 0.00074540196822566157,
    0.00073062758511249814, 0.000716146040502155, 0.00070195153013275012,
    0.00068803836478689077, 0.00067440096801141215, 0.00066103387388231211,
    0.00064793172481398653, 0.0006350892694118879, 0.00062250136036774424,
    0.00061016295239649753, 0.000598069100214133, 0.0005862149565555888,
    0.000574595770231953, 0.00056320688422616767, 0.00055204373382647691,
    0.000541101844796873, 0.00053037683158380306, 0.0005198643955584227,
    0.00050956032329368712, 0.0004994604848755932, 0.00048956083224789256,
    0.00047985739758961453, 0.0004703462917247474, 0.00046102370256344077,
    0.00045188589357410454, 0.00044292920228579169, 0.00043415003882026526,
    0.00042554488445316075, 0.00041711029020366638, 0.00040884287545215866,
    0.00040073932658523525, 0.00039279639566760583, 0.00038501089914030656,
    0.0003773797165447162, 0.00036989978927186426, 0.00036256811933652738,
    0.00035538176817562559, 0.00034833785547043315, 0.00034143355799213626,
    0.00033466610847027081, 0.00032803279448358918, 0.000321530957372911,
    0.0003151579911755217, 0.00030891134158069183, 0.00030278850490589955,
    0.0002967870270933437, 0.0002909045027263481, 0.00028513857406526065,
    0.00027948693010246132, 0.00027394730563610141, 0.00026851748036220121,
    0.00026319527798474317, 0.00025797856534340367, 0.00025286525155857363,
    0.00024785328719332552, 0.00024294066343199071, 0.00023812541127501798,
    0.00023340560074979052, 0.00022877934013708511, 0.00022424477521286321,
    0.00021980008850509074, 0.00021544349856528747, 0.00021117325925451574,
    0.00020698765904352047, 0.00020288502032674152, 0.00019886369874992248,
    0.0001949220825510468, 0.00019105859191433707, 0.00018727167833705843,
    0.00018355982400887239, 0.00017992154120349225, 0.00017635537168239637,
    0.00017285988611036031, 0.00016943368348257344, 0.00016607539056311046,
    0.0001627836613345329, 0.0001595571764583999, 0.00015639464274647206,
    0.00015329479264239616, 0.00015025638371366355, 0.00014727819815363812,
    0.00014435904229345465, 0.00014149774612359103, 0.00013869316282492423,
    0.00083923471350600223, 0.00081959947885992031, 0.00080042364184527818,
    0.00078169645412177959, 0.00076340741882369243, 0.00074554628467620018,
    0.00072810304024941081, 0.00071106790834680209, 0.00069443134052495851,
    0.00067818401174152721, 0.00066231681512839429, 0.00064682085688715,
    0.00063168745130398336, 0.00061690811588121142, 0.00060247456658271323,
    0.00058837871319060561, 0.000574612654770556, 0.000561168675243192,
    0.00054803923905912477, 0.00053521698697516222, 0.00052269473192934415,
    0.00051046545501248774, 0.00049852230153398533, 0.00048685857717964881,
    0.0004754677442594474, 0.00046434341804303577, 0.00045347936318101831,
    0.00044286949020994347, 0.00043250785213906937, 0.00042238864111698767,
    0.00041250618517623685, 0.00040285494505408053, 0.00039342951108766881,
    0.00038422460018184223, 0.00037523505284787876, 0.00036645583031152409,
    0.00035788201168868411, 0.0003495087912271965, 0.00034133147561313574,
    0.000333345481340141, 0.00032554633214029326, 0.00031792965647510073,
    0.00031049118508518706, 0.00030322674859730803, 0.00029613227518735652,
    0.00028920378829804455, 0.00028243740440998425, 0.00027582933086491788,
    0.00026937586373987658, 0.00026307338577107693, 0.00025691836432639096,
    0.00025090734942525368, 0.00024503697180489791, 0.00023930394103183265,
    0.00023370504365750644, 0.00022823714141712191, 0.00022289716947059194,
    0.0002176821346846515, 0.00021258911395516215, 0.00020761525256866888,
    0.00020275776260229107, 0.00019801392136105042, 0.00019338106985176018,
    0.00018885661129262014, 0.000184438009657682, 0.00018012278825536927,
    0.00017590852834025507, 0.00017179286775731954, 0.00016777349961792697,
    0.00016384817100678062, 0.00016001468171913035, 0.00015627088302752539,
    0.00015261467647742071, 0.00014904401271096225, 0.00014555689031829156,
    0.00014215135471572592, 0.00013882549705018533, 0.00013557745312925206,
    0.00013240540237626329, 0.0001293075668098509, 0.00012628221004735662,
    0.00012332763633156392, 0.00012044218958020097, 0.00011762425245768201,
    0.00011487224546856687, 0.00011218462607223038, 0.00010955988781824556,
    0.00010699655950199583, 0.00010449320434004313, 0.00010204841916478946,
    9.9660833637980781E-5, 9.7329109482612066E-5, 9.5051939732803314E-5,
    9.28280480012258E-5, 9.0656187763668092E-5, 8.8535141660340825E-5,
    8.646372081352851E-5, 8.444076416120599E-5, 8.2465137806246019E-5,
    8.0535734380853113E-5, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0 };

  static const real_T n[20200] = { 0.023894522010860429, 0.023335471558241304,
    0.022789500982609529, 0.022256304259381455, 0.021735582523906651,
    0.021227043903949847, 0.020730403356092247, 0.02024538250596045,
    0.01977170949219352, 0.019309118814060656, 0.0188573511826441,
    0.018416153375503896, 0.017985278094742926, 0.0175644838283928,
    0.017153534715042836, 0.016752200411636227, 0.016360255964359364,
    0.015977481682551895, 0.015603663015566861, 0.015238590432511879,
    0.014882059304803982, 0.014533869791472273, 0.014193826727144096,
    0.013861739512651973, 0.013537422008199936, 0.013220692429029427,
    0.012911373243526248, 0.012609291073711464, 0.012314276598060487,
    0.012026164456595854, 0.011744793158200508, 0.011470004990099649,
    0.011201645929460382, 0.01093956555705964, 0.010683616972971996,
    0.010433656714230067, 0.010189544674411412, 0.0099511440251067989,
    0.009718321139225862, 0.0094909455160971448, 0.0092688897083205365,
    0.00905202925033112, 0.00884024258863439, 0.0086334110136737086,
    0.008431418593291851, 0.00823415210774932, 0.0080415009862629932,
    0.0078533572450295783, 0.0076696154266990843, 0.0074901725412644254,
    0.0073149280083339907, 0.00714378360075485, 0.0069766433895549823,
    0.0068134136901736673, 0.006654003009949905, 0.0064983219968394205,
    0.0063462833893315291, 0.006197801967537761, 0.006052794505424861,
    0.00591117972416536, 0.0057728782465795931, 0.005637812552643613,
    0.0055059069360380722, 0.0053770874617137124, 0.0052512819244496748,
    0.0051284198083814021, 0.0050084322474754596, 0.0048912519869290993,
    0.00477681334547295, 0.0046650521785556983, 0.0045559058423901106,
    0.0044493131588402715, 0.0043452143811303287, 0.0042435511603555447,
    0.0041442665127768693, 0.0040473047878807136, 0.0039526116371860114,
    0.0038601339837810965, 0.0037698199925733024, 0.0036816190412346304,
    0.0035954816918271838, 0.0035113596630924736, 0.0034292058033890582,
    0.0033489740642633527, 0.003270619474638786, 0.0031940981156088509,
    0.0031193670958199046, 0.0030463845274299318, 0.0029751095026297903,
    0.0029055020707137772, 0.0028375232156866684, 0.0027711348343946759,
    0.0027062997151680664, 0.0026429815169634716, 0.0025811447489941922,
    0.0025207547508370909, 0.0024617776730049097, 0.0024041804579731326,
    0.0023479308216507551, 0.0022929972352845728, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.000806267598511844, 0.023894522010860429,
    0.023335471558241304, 0.022789500982609529, 0.022256304259381455,
    0.021735582523906651, 0.021227043903949847, 0.020730403356092247,
    0.02024538250596045, 0.01977170949219352, 0.019309118814060656,
    0.0188573511826441, 0.018416153375503896, 0.017985278094742926,
    0.0175644838283928, 0.017153534715042836, 0.016752200411636227,
    0.016360255964359364, 0.015977481682551895, 0.015603663015566861,
    0.015238590432511879, 0.014882059304803982, 0.014533869791472273,
    0.014193826727144096, 0.013861739512651973, 0.013537422008199936,
    0.013220692429029427, 0.012911373243526248, 0.012609291073711464,
    0.012314276598060487, 0.012026164456595854, 0.011744793158200508,
    0.011470004990099649, 0.011201645929460382, 0.01093956555705964,
    0.010683616972971996, 0.010433656714230067, 0.010189544674411412,
    0.0099511440251067989, 0.009718321139225862, 0.0094909455160971448,
    0.0092688897083205365, 0.00905202925033112, 0.00884024258863439,
    0.0086334110136737086, 0.008431418593291851, 0.00823415210774932,
    0.0080415009862629932, 0.0078533572450295783, 0.0076696154266990843,
    0.0074901725412644254, 0.0073149280083339907, 0.00714378360075485,
    0.0069766433895549823, 0.0068134136901736673, 0.006654003009949905,
    0.0064983219968394205, 0.0063462833893315291, 0.006197801967537761,
    0.006052794505424861, 0.00591117972416536, 0.0057728782465795931,
    0.005637812552643613, 0.0055059069360380722, 0.0053770874617137124,
    0.0052512819244496748, 0.0051284198083814021, 0.0050084322474754596,
    0.0048912519869290993, 0.00477681334547295, 0.0046650521785556983,
    0.0045559058423901106, 0.0044493131588402715, 0.0043452143811303287,
    0.0042435511603555447, 0.0041442665127768693, 0.0040473047878807136,
    0.0039526116371860114, 0.0038601339837810965, 0.0037698199925733024,
    0.0036816190412346304, 0.0035954816918271838, 0.0035113596630924736,
    0.0034292058033890582, 0.0033489740642633527, 0.003270619474638786,
    0.0031940981156088509, 0.0031193670958199046, 0.0030463845274299318,
    0.0029751095026297903, 0.0029055020707137772, 0.0028375232156866684,
    0.0027711348343946759, 0.0027062997151680664, 0.0026429815169634716,
    0.0025811447489941922, 0.0025207547508370909, 0.0024617776730049097,
    0.0024041804579731326, 0.0023479308216507551, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.000806267598511844, 0.023894522010860429,
    0.023335471558241304, 0.022789500982609529, 0.022256304259381455,
    0.021735582523906651, 0.021227043903949847, 0.020730403356092247,
    0.02024538250596045, 0.01977170949219352, 0.019309118814060656,
    0.0188573511826441, 0.018416153375503896, 0.017985278094742926,
    0.0175644838283928, 0.017153534715042836, 0.016752200411636227,
    0.016360255964359364, 0.015977481682551895, 0.015603663015566861,
    0.015238590432511879, 0.014882059304803982, 0.014533869791472273,
    0.014193826727144096, 0.013861739512651973, 0.013537422008199936,
    0.013220692429029427, 0.012911373243526248, 0.012609291073711464,
    0.012314276598060487, 0.012026164456595854, 0.011744793158200508,
    0.011470004990099649, 0.011201645929460382, 0.01093956555705964,
    0.010683616972971996, 0.010433656714230067, 0.010189544674411412,
    0.0099511440251067989, 0.009718321139225862, 0.0094909455160971448,
    0.0092688897083205365, 0.00905202925033112, 0.00884024258863439,
    0.0086334110136737086, 0.008431418593291851, 0.00823415210774932,
    0.0080415009862629932, 0.0078533572450295783, 0.0076696154266990843,
    0.0074901725412644254, 0.0073149280083339907, 0.00714378360075485,
    0.0069766433895549823, 0.0068134136901736673, 0.006654003009949905,
    0.0064983219968394205, 0.0063462833893315291, 0.006197801967537761,
    0.006052794505424861, 0.00591117972416536, 0.0057728782465795931,
    0.005637812552643613, 0.0055059069360380722, 0.0053770874617137124,
    0.0052512819244496748, 0.0051284198083814021, 0.0050084322474754596,
    0.0048912519869290993, 0.00477681334547295, 0.0046650521785556983,
    0.0045559058423901106, 0.0044493131588402715, 0.0043452143811303287,
    0.0042435511603555447, 0.0041442665127768693, 0.0040473047878807136,
    0.0039526116371860114, 0.0038601339837810965, 0.0037698199925733024,
    0.0036816190412346304, 0.0035954816918271838, 0.0035113596630924736,
    0.0034292058033890582, 0.0033489740642633527, 0.003270619474638786,
    0.0031940981156088509, 0.0031193670958199046, 0.0030463845274299318,
    0.0029751095026297903, 0.0029055020707137772, 0.0028375232156866684,
    0.0027711348343946759, 0.0027062997151680664, 0.0026429815169634716,
    0.0025811447489941922, 0.0025207547508370909, 0.0024617776730049097,
    0.0024041804579731326, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.000806267598511844, 0.023894522010860429, 0.023335471558241304,
    0.022789500982609529, 0.022256304259381455, 0.021735582523906651,
    0.021227043903949847, 0.020730403356092247, 0.02024538250596045,
    0.01977170949219352, 0.019309118814060656, 0.0188573511826441,
    0.018416153375503896, 0.017985278094742926, 0.0175644838283928,
    0.017153534715042836, 0.016752200411636227, 0.016360255964359364,
    0.015977481682551895, 0.015603663015566861, 0.015238590432511879,
    0.014882059304803982, 0.014533869791472273, 0.014193826727144096,
    0.013861739512651973, 0.013537422008199936, 0.013220692429029427,
    0.012911373243526248, 0.012609291073711464, 0.012314276598060487,
    0.012026164456595854, 0.011744793158200508, 0.011470004990099649,
    0.011201645929460382, 0.01093956555705964, 0.010683616972971996,
    0.010433656714230067, 0.010189544674411412, 0.0099511440251067989,
    0.009718321139225862, 0.0094909455160971448, 0.0092688897083205365,
    0.00905202925033112, 0.00884024258863439, 0.0086334110136737086,
    0.008431418593291851, 0.00823415210774932, 0.0080415009862629932,
    0.0078533572450295783, 0.0076696154266990843, 0.0074901725412644254,
    0.0073149280083339907, 0.00714378360075485, 0.0069766433895549823,
    0.0068134136901736673, 0.006654003009949905, 0.0064983219968394205,
    0.0063462833893315291, 0.006197801967537761, 0.006052794505424861,
    0.00591117972416536, 0.0057728782465795931, 0.005637812552643613,
    0.0055059069360380722, 0.0053770874617137124, 0.0052512819244496748,
    0.0051284198083814021, 0.0050084322474754596, 0.0048912519869290993,
    0.00477681334547295, 0.0046650521785556983, 0.0045559058423901106,
    0.0044493131588402715, 0.0043452143811303287, 0.0042435511603555447,
    0.0041442665127768693, 0.0040473047878807136, 0.0039526116371860114,
    0.0038601339837810965, 0.0037698199925733024, 0.0036816190412346304,
    0.0035954816918271838, 0.0035113596630924736, 0.0034292058033890582,
    0.0033489740642633527, 0.003270619474638786, 0.0031940981156088509,
    0.0031193670958199046, 0.0030463845274299318, 0.0029751095026297903,
    0.0029055020707137772, 0.0028375232156866684, 0.0027711348343946759,
    0.0027062997151680664, 0.0026429815169634716, 0.0025811447489941922,
    0.0025207547508370909, 0.0024617776730049097, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.000806267598511844,
    0.023894522010860429, 0.023335471558241304, 0.022789500982609529,
    0.022256304259381455, 0.021735582523906651, 0.021227043903949847,
    0.020730403356092247, 0.02024538250596045, 0.01977170949219352,
    0.019309118814060656, 0.0188573511826441, 0.018416153375503896,
    0.017985278094742926, 0.0175644838283928, 0.017153534715042836,
    0.016752200411636227, 0.016360255964359364, 0.015977481682551895,
    0.015603663015566861, 0.015238590432511879, 0.014882059304803982,
    0.014533869791472273, 0.014193826727144096, 0.013861739512651973,
    0.013537422008199936, 0.013220692429029427, 0.012911373243526248,
    0.012609291073711464, 0.012314276598060487, 0.012026164456595854,
    0.011744793158200508, 0.011470004990099649, 0.011201645929460382,
    0.01093956555705964, 0.010683616972971996, 0.010433656714230067,
    0.010189544674411412, 0.0099511440251067989, 0.009718321139225862,
    0.0094909455160971448, 0.0092688897083205365, 0.00905202925033112,
    0.00884024258863439, 0.0086334110136737086, 0.008431418593291851,
    0.00823415210774932, 0.0080415009862629932, 0.0078533572450295783,
    0.0076696154266990843, 0.0074901725412644254, 0.0073149280083339907,
    0.00714378360075485, 0.0069766433895549823, 0.0068134136901736673,
    0.006654003009949905, 0.0064983219968394205, 0.0063462833893315291,
    0.006197801967537761, 0.006052794505424861, 0.00591117972416536,
    0.0057728782465795931, 0.005637812552643613, 0.0055059069360380722,
    0.0053770874617137124, 0.0052512819244496748, 0.0051284198083814021,
    0.0050084322474754596, 0.0048912519869290993, 0.00477681334547295,
    0.0046650521785556983, 0.0045559058423901106, 0.0044493131588402715,
    0.0043452143811303287, 0.0042435511603555447, 0.0041442665127768693,
    0.0040473047878807136, 0.0039526116371860114, 0.0038601339837810965,
    0.0037698199925733024, 0.0036816190412346304, 0.0035954816918271838,
    0.0035113596630924736, 0.0034292058033890582, 0.0033489740642633527,
    0.003270619474638786, 0.0031940981156088509, 0.0031193670958199046,
    0.0030463845274299318, 0.0029751095026297903, 0.0029055020707137772,
    0.0028375232156866684, 0.0027711348343946759, 0.0027062997151680664,
    0.0026429815169634716, 0.0025811447489941922, 0.0025207547508370909, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.000806267598511844, 0.023894522010860429, 0.023335471558241304,
    0.022789500982609529, 0.022256304259381455, 0.021735582523906651,
    0.021227043903949847, 0.020730403356092247, 0.02024538250596045,
    0.01977170949219352, 0.019309118814060656, 0.0188573511826441,
    0.018416153375503896, 0.017985278094742926, 0.0175644838283928,
    0.017153534715042836, 0.016752200411636227, 0.016360255964359364,
    0.015977481682551895, 0.015603663015566861, 0.015238590432511879,
    0.014882059304803982, 0.014533869791472273, 0.014193826727144096,
    0.013861739512651973, 0.013537422008199936, 0.013220692429029427,
    0.012911373243526248, 0.012609291073711464, 0.012314276598060487,
    0.012026164456595854, 0.011744793158200508, 0.011470004990099649,
    0.011201645929460382, 0.01093956555705964, 0.010683616972971996,
    0.010433656714230067, 0.010189544674411412, 0.0099511440251067989,
    0.009718321139225862, 0.0094909455160971448, 0.0092688897083205365,
    0.00905202925033112, 0.00884024258863439, 0.0086334110136737086,
    0.008431418593291851, 0.00823415210774932, 0.0080415009862629932,
    0.0078533572450295783, 0.0076696154266990843, 0.0074901725412644254,
    0.0073149280083339907, 0.00714378360075485, 0.0069766433895549823,
    0.0068134136901736673, 0.006654003009949905, 0.0064983219968394205,
    0.0063462833893315291, 0.006197801967537761, 0.006052794505424861,
    0.00591117972416536, 0.0057728782465795931, 0.005637812552643613,
    0.0055059069360380722, 0.0053770874617137124, 0.0052512819244496748,
    0.0051284198083814021, 0.0050084322474754596, 0.0048912519869290993,
    0.00477681334547295, 0.0046650521785556983, 0.0045559058423901106,
    0.0044493131588402715, 0.0043452143811303287, 0.0042435511603555447,
    0.0041442665127768693, 0.0040473047878807136, 0.0039526116371860114,
    0.0038601339837810965, 0.0037698199925733024, 0.0036816190412346304,
    0.0035954816918271838, 0.0035113596630924736, 0.0034292058033890582,
    0.0033489740642633527, 0.003270619474638786, 0.0031940981156088509,
    0.0031193670958199046, 0.0030463845274299318, 0.0029751095026297903,
    0.0029055020707137772, 0.0028375232156866684, 0.0027711348343946759,
    0.0027062997151680664, 0.0026429815169634716, 0.0025811447489941922, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.000806267598511844, 0.023894522010860429, 0.023335471558241304,
    0.022789500982609529, 0.022256304259381455, 0.021735582523906651,
    0.021227043903949847, 0.020730403356092247, 0.02024538250596045,
    0.01977170949219352, 0.019309118814060656, 0.0188573511826441,
    0.018416153375503896, 0.017985278094742926, 0.0175644838283928,
    0.017153534715042836, 0.016752200411636227, 0.016360255964359364,
    0.015977481682551895, 0.015603663015566861, 0.015238590432511879,
    0.014882059304803982, 0.014533869791472273, 0.014193826727144096,
    0.013861739512651973, 0.013537422008199936, 0.013220692429029427,
    0.012911373243526248, 0.012609291073711464, 0.012314276598060487,
    0.012026164456595854, 0.011744793158200508, 0.011470004990099649,
    0.011201645929460382, 0.01093956555705964, 0.010683616972971996,
    0.010433656714230067, 0.010189544674411412, 0.0099511440251067989,
    0.009718321139225862, 0.0094909455160971448, 0.0092688897083205365,
    0.00905202925033112, 0.00884024258863439, 0.0086334110136737086,
    0.008431418593291851, 0.00823415210774932, 0.0080415009862629932,
    0.0078533572450295783, 0.0076696154266990843, 0.0074901725412644254,
    0.0073149280083339907, 0.00714378360075485, 0.0069766433895549823,
    0.0068134136901736673, 0.006654003009949905, 0.0064983219968394205,
    0.0063462833893315291, 0.006197801967537761, 0.006052794505424861,
    0.00591117972416536, 0.0057728782465795931, 0.005637812552643613,
    0.0055059069360380722, 0.0053770874617137124, 0.0052512819244496748,
    0.0051284198083814021, 0.0050084322474754596, 0.0048912519869290993,
    0.00477681334547295, 0.0046650521785556983, 0.0045559058423901106,
    0.0044493131588402715, 0.0043452143811303287, 0.0042435511603555447,
    0.0041442665127768693, 0.0040473047878807136, 0.0039526116371860114,
    0.0038601339837810965, 0.0037698199925733024, 0.0036816190412346304,
    0.0035954816918271838, 0.0035113596630924736, 0.0034292058033890582,
    0.0033489740642633527, 0.003270619474638786, 0.0031940981156088509,
    0.0031193670958199046, 0.0030463845274299318, 0.0029751095026297903,
    0.0029055020707137772, 0.0028375232156866684, 0.0027711348343946759,
    0.0027062997151680664, 0.0026429815169634716, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.000806267598511844,
    0.023894522010860429, 0.023335471558241304, 0.022789500982609529,
    0.022256304259381455, 0.021735582523906651, 0.021227043903949847,
    0.020730403356092247, 0.02024538250596045, 0.01977170949219352,
    0.019309118814060656, 0.0188573511826441, 0.018416153375503896,
    0.017985278094742926, 0.0175644838283928, 0.017153534715042836,
    0.016752200411636227, 0.016360255964359364, 0.015977481682551895,
    0.015603663015566861, 0.015238590432511879, 0.014882059304803982,
    0.014533869791472273, 0.014193826727144096, 0.013861739512651973,
    0.013537422008199936, 0.013220692429029427, 0.012911373243526248,
    0.012609291073711464, 0.012314276598060487, 0.012026164456595854,
    0.011744793158200508, 0.011470004990099649, 0.011201645929460382,
    0.01093956555705964, 0.010683616972971996, 0.010433656714230067,
    0.010189544674411412, 0.0099511440251067989, 0.009718321139225862,
    0.0094909455160971448, 0.0092688897083205365, 0.00905202925033112,
    0.00884024258863439, 0.0086334110136737086, 0.008431418593291851,
    0.00823415210774932, 0.0080415009862629932, 0.0078533572450295783,
    0.0076696154266990843, 0.0074901725412644254, 0.0073149280083339907,
    0.00714378360075485, 0.0069766433895549823, 0.0068134136901736673,
    0.006654003009949905, 0.0064983219968394205, 0.0063462833893315291,
    0.006197801967537761, 0.006052794505424861, 0.00591117972416536,
    0.0057728782465795931, 0.005637812552643613, 0.0055059069360380722,
    0.0053770874617137124, 0.0052512819244496748, 0.0051284198083814021,
    0.0050084322474754596, 0.0048912519869290993, 0.00477681334547295,
    0.0046650521785556983, 0.0045559058423901106, 0.0044493131588402715,
    0.0043452143811303287, 0.0042435511603555447, 0.0041442665127768693,
    0.0040473047878807136, 0.0039526116371860114, 0.0038601339837810965,
    0.0037698199925733024, 0.0036816190412346304, 0.0035954816918271838,
    0.0035113596630924736, 0.0034292058033890582, 0.0033489740642633527,
    0.003270619474638786, 0.0031940981156088509, 0.0031193670958199046,
    0.0030463845274299318, 0.0029751095026297903, 0.0029055020707137772,
    0.0028375232156866684, 0.0027711348343946759, 0.0027062997151680664, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.000806267598511844, 0.023894522010860429, 0.023335471558241304,
    0.022789500982609529, 0.022256304259381455, 0.021735582523906651,
    0.021227043903949847, 0.020730403356092247, 0.02024538250596045,
    0.01977170949219352, 0.019309118814060656, 0.0188573511826441,
    0.018416153375503896, 0.017985278094742926, 0.0175644838283928,
    0.017153534715042836, 0.016752200411636227, 0.016360255964359364,
    0.015977481682551895, 0.015603663015566861, 0.015238590432511879,
    0.014882059304803982, 0.014533869791472273, 0.014193826727144096,
    0.013861739512651973, 0.013537422008199936, 0.013220692429029427,
    0.012911373243526248, 0.012609291073711464, 0.012314276598060487,
    0.012026164456595854, 0.011744793158200508, 0.011470004990099649,
    0.011201645929460382, 0.01093956555705964, 0.010683616972971996,
    0.010433656714230067, 0.010189544674411412, 0.0099511440251067989,
    0.009718321139225862, 0.0094909455160971448, 0.0092688897083205365,
    0.00905202925033112, 0.00884024258863439, 0.0086334110136737086,
    0.008431418593291851, 0.00823415210774932, 0.0080415009862629932,
    0.0078533572450295783, 0.0076696154266990843, 0.0074901725412644254,
    0.0073149280083339907, 0.00714378360075485, 0.0069766433895549823,
    0.0068134136901736673, 0.006654003009949905, 0.0064983219968394205,
    0.0063462833893315291, 0.006197801967537761, 0.006052794505424861,
    0.00591117972416536, 0.0057728782465795931, 0.005637812552643613,
    0.0055059069360380722, 0.0053770874617137124, 0.0052512819244496748,
    0.0051284198083814021, 0.0050084322474754596, 0.0048912519869290993,
    0.00477681334547295, 0.0046650521785556983, 0.0045559058423901106,
    0.0044493131588402715, 0.0043452143811303287, 0.0042435511603555447,
    0.0041442665127768693, 0.0040473047878807136, 0.0039526116371860114,
    0.0038601339837810965, 0.0037698199925733024, 0.0036816190412346304,
    0.0035954816918271838, 0.0035113596630924736, 0.0034292058033890582,
    0.0033489740642633527, 0.003270619474638786, 0.0031940981156088509,
    0.0031193670958199046, 0.0030463845274299318, 0.0029751095026297903,
    0.0029055020707137772, 0.0028375232156866684, 0.0027711348343946759, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.000806267598511844, 0.023894522010860429, 0.023335471558241304,
    0.022789500982609529, 0.022256304259381455, 0.021735582523906651,
    0.021227043903949847, 0.020730403356092247, 0.02024538250596045,
    0.01977170949219352, 0.019309118814060656, 0.0188573511826441,
    0.018416153375503896, 0.017985278094742926, 0.0175644838283928,
    0.017153534715042836, 0.016752200411636227, 0.016360255964359364,
    0.015977481682551895, 0.015603663015566861, 0.015238590432511879,
    0.014882059304803982, 0.014533869791472273, 0.014193826727144096,
    0.013861739512651973, 0.013537422008199936, 0.013220692429029427,
    0.012911373243526248, 0.012609291073711464, 0.012314276598060487,
    0.012026164456595854, 0.011744793158200508, 0.011470004990099649,
    0.011201645929460382, 0.01093956555705964, 0.010683616972971996,
    0.010433656714230067, 0.010189544674411412, 0.0099511440251067989,
    0.009718321139225862, 0.0094909455160971448, 0.0092688897083205365,
    0.00905202925033112, 0.00884024258863439, 0.0086334110136737086,
    0.008431418593291851, 0.00823415210774932, 0.0080415009862629932,
    0.0078533572450295783, 0.0076696154266990843, 0.0074901725412644254,
    0.0073149280083339907, 0.00714378360075485, 0.0069766433895549823,
    0.0068134136901736673, 0.006654003009949905, 0.0064983219968394205,
    0.0063462833893315291, 0.006197801967537761, 0.006052794505424861,
    0.00591117972416536, 0.0057728782465795931, 0.005637812552643613,
    0.0055059069360380722, 0.0053770874617137124, 0.0052512819244496748,
    0.0051284198083814021, 0.0050084322474754596, 0.0048912519869290993,
    0.00477681334547295, 0.0046650521785556983, 0.0045559058423901106,
    0.0044493131588402715, 0.0043452143811303287, 0.0042435511603555447,
    0.0041442665127768693, 0.0040473047878807136, 0.0039526116371860114,
    0.0038601339837810965, 0.0037698199925733024, 0.0036816190412346304,
    0.0035954816918271838, 0.0035113596630924736, 0.0034292058033890582,
    0.0033489740642633527, 0.003270619474638786, 0.0031940981156088509,
    0.0031193670958199046, 0.0030463845274299318, 0.0029751095026297903,
    0.0029055020707137772, 0.0028375232156866684, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.000806267598511844, 0.023894522010860429, 0.023335471558241304,
    0.022789500982609529, 0.022256304259381455, 0.021735582523906651,
    0.021227043903949847, 0.020730403356092247, 0.02024538250596045,
    0.01977170949219352, 0.019309118814060656, 0.0188573511826441,
    0.018416153375503896, 0.017985278094742926, 0.0175644838283928,
    0.017153534715042836, 0.016752200411636227, 0.016360255964359364,
    0.015977481682551895, 0.015603663015566861, 0.015238590432511879,
    0.014882059304803982, 0.014533869791472273, 0.014193826727144096,
    0.013861739512651973, 0.013537422008199936, 0.013220692429029427,
    0.012911373243526248, 0.012609291073711464, 0.012314276598060487,
    0.012026164456595854, 0.011744793158200508, 0.011470004990099649,
    0.011201645929460382, 0.01093956555705964, 0.010683616972971996,
    0.010433656714230067, 0.010189544674411412, 0.0099511440251067989,
    0.009718321139225862, 0.0094909455160971448, 0.0092688897083205365,
    0.00905202925033112, 0.00884024258863439, 0.0086334110136737086,
    0.008431418593291851, 0.00823415210774932, 0.0080415009862629932,
    0.0078533572450295783, 0.0076696154266990843, 0.0074901725412644254,
    0.0073149280083339907, 0.00714378360075485, 0.0069766433895549823,
    0.0068134136901736673, 0.006654003009949905, 0.0064983219968394205,
    0.0063462833893315291, 0.006197801967537761, 0.006052794505424861,
    0.00591117972416536, 0.0057728782465795931, 0.005637812552643613,
    0.0055059069360380722, 0.0053770874617137124, 0.0052512819244496748,
    0.0051284198083814021, 0.0050084322474754596, 0.0048912519869290993,
    0.00477681334547295, 0.0046650521785556983, 0.0045559058423901106,
    0.0044493131588402715, 0.0043452143811303287, 0.0042435511603555447,
    0.0041442665127768693, 0.0040473047878807136, 0.0039526116371860114,
    0.0038601339837810965, 0.0037698199925733024, 0.0036816190412346304,
    0.0035954816918271838, 0.0035113596630924736, 0.0034292058033890582,
    0.0033489740642633527, 0.003270619474638786, 0.0031940981156088509,
    0.0031193670958199046, 0.0030463845274299318, 0.0029751095026297903,
    0.0029055020707137772, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.000806267598511844,
    0.023894522010860429, 0.023335471558241304, 0.022789500982609529,
    0.022256304259381455, 0.021735582523906651, 0.021227043903949847,
    0.020730403356092247, 0.02024538250596045, 0.01977170949219352,
    0.019309118814060656, 0.0188573511826441, 0.018416153375503896,
    0.017985278094742926, 0.0175644838283928, 0.017153534715042836,
    0.016752200411636227, 0.016360255964359364, 0.015977481682551895,
    0.015603663015566861, 0.015238590432511879, 0.014882059304803982,
    0.014533869791472273, 0.014193826727144096, 0.013861739512651973,
    0.013537422008199936, 0.013220692429029427, 0.012911373243526248,
    0.012609291073711464, 0.012314276598060487, 0.012026164456595854,
    0.011744793158200508, 0.011470004990099649, 0.011201645929460382,
    0.01093956555705964, 0.010683616972971996, 0.010433656714230067,
    0.010189544674411412, 0.0099511440251067989, 0.009718321139225862,
    0.0094909455160971448, 0.0092688897083205365, 0.00905202925033112,
    0.00884024258863439, 0.0086334110136737086, 0.008431418593291851,
    0.00823415210774932, 0.0080415009862629932, 0.0078533572450295783,
    0.0076696154266990843, 0.0074901725412644254, 0.0073149280083339907,
    0.00714378360075485, 0.0069766433895549823, 0.0068134136901736673,
    0.006654003009949905, 0.0064983219968394205, 0.0063462833893315291,
    0.006197801967537761, 0.006052794505424861, 0.00591117972416536,
    0.0057728782465795931, 0.005637812552643613, 0.0055059069360380722,
    0.0053770874617137124, 0.0052512819244496748, 0.0051284198083814021,
    0.0050084322474754596, 0.0048912519869290993, 0.00477681334547295,
    0.0046650521785556983, 0.0045559058423901106, 0.0044493131588402715,
    0.0043452143811303287, 0.0042435511603555447, 0.0041442665127768693,
    0.0040473047878807136, 0.0039526116371860114, 0.0038601339837810965,
    0.0037698199925733024, 0.0036816190412346304, 0.0035954816918271838,
    0.0035113596630924736, 0.0034292058033890582, 0.0033489740642633527,
    0.003270619474638786, 0.0031940981156088509, 0.0031193670958199046,
    0.0030463845274299318, 0.0029751095026297903, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.000806267598511844, 0.023894522010860429, 0.023335471558241304,
    0.022789500982609529, 0.022256304259381455, 0.021735582523906651,
    0.021227043903949847, 0.020730403356092247, 0.02024538250596045,
    0.01977170949219352, 0.019309118814060656, 0.0188573511826441,
    0.018416153375503896, 0.017985278094742926, 0.0175644838283928,
    0.017153534715042836, 0.016752200411636227, 0.016360255964359364,
    0.015977481682551895, 0.015603663015566861, 0.015238590432511879,
    0.014882059304803982, 0.014533869791472273, 0.014193826727144096,
    0.013861739512651973, 0.013537422008199936, 0.013220692429029427,
    0.012911373243526248, 0.012609291073711464, 0.012314276598060487,
    0.012026164456595854, 0.011744793158200508, 0.011470004990099649,
    0.011201645929460382, 0.01093956555705964, 0.010683616972971996,
    0.010433656714230067, 0.010189544674411412, 0.0099511440251067989,
    0.009718321139225862, 0.0094909455160971448, 0.0092688897083205365,
    0.00905202925033112, 0.00884024258863439, 0.0086334110136737086,
    0.008431418593291851, 0.00823415210774932, 0.0080415009862629932,
    0.0078533572450295783, 0.0076696154266990843, 0.0074901725412644254,
    0.0073149280083339907, 0.00714378360075485, 0.0069766433895549823,
    0.0068134136901736673, 0.006654003009949905, 0.0064983219968394205,
    0.0063462833893315291, 0.006197801967537761, 0.006052794505424861,
    0.00591117972416536, 0.0057728782465795931, 0.005637812552643613,
    0.0055059069360380722, 0.0053770874617137124, 0.0052512819244496748,
    0.0051284198083814021, 0.0050084322474754596, 0.0048912519869290993,
    0.00477681334547295, 0.0046650521785556983, 0.0045559058423901106,
    0.0044493131588402715, 0.0043452143811303287, 0.0042435511603555447,
    0.0041442665127768693, 0.0040473047878807136, 0.0039526116371860114,
    0.0038601339837810965, 0.0037698199925733024, 0.0036816190412346304,
    0.0035954816918271838, 0.0035113596630924736, 0.0034292058033890582,
    0.0033489740642633527, 0.003270619474638786, 0.0031940981156088509,
    0.0031193670958199046, 0.0030463845274299318, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.000806267598511844, 0.023894522010860429, 0.023335471558241304,
    0.022789500982609529, 0.022256304259381455, 0.021735582523906651,
    0.021227043903949847, 0.020730403356092247, 0.02024538250596045,
    0.01977170949219352, 0.019309118814060656, 0.0188573511826441,
    0.018416153375503896, 0.017985278094742926, 0.0175644838283928,
    0.017153534715042836, 0.016752200411636227, 0.016360255964359364,
    0.015977481682551895, 0.015603663015566861, 0.015238590432511879,
    0.014882059304803982, 0.014533869791472273, 0.014193826727144096,
    0.013861739512651973, 0.013537422008199936, 0.013220692429029427,
    0.012911373243526248, 0.012609291073711464, 0.012314276598060487,
    0.012026164456595854, 0.011744793158200508, 0.011470004990099649,
    0.011201645929460382, 0.01093956555705964, 0.010683616972971996,
    0.010433656714230067, 0.010189544674411412, 0.0099511440251067989,
    0.009718321139225862, 0.0094909455160971448, 0.0092688897083205365,
    0.00905202925033112, 0.00884024258863439, 0.0086334110136737086,
    0.008431418593291851, 0.00823415210774932, 0.0080415009862629932,
    0.0078533572450295783, 0.0076696154266990843, 0.0074901725412644254,
    0.0073149280083339907, 0.00714378360075485, 0.0069766433895549823,
    0.0068134136901736673, 0.006654003009949905, 0.0064983219968394205,
    0.0063462833893315291, 0.006197801967537761, 0.006052794505424861,
    0.00591117972416536, 0.0057728782465795931, 0.005637812552643613,
    0.0055059069360380722, 0.0053770874617137124, 0.0052512819244496748,
    0.0051284198083814021, 0.0050084322474754596, 0.0048912519869290993,
    0.00477681334547295, 0.0046650521785556983, 0.0045559058423901106,
    0.0044493131588402715, 0.0043452143811303287, 0.0042435511603555447,
    0.0041442665127768693, 0.0040473047878807136, 0.0039526116371860114,
    0.0038601339837810965, 0.0037698199925733024, 0.0036816190412346304,
    0.0035954816918271838, 0.0035113596630924736, 0.0034292058033890582,
    0.0033489740642633527, 0.003270619474638786, 0.0031940981156088509,
    0.0031193670958199046, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.000806267598511844, 0.023894522010860429, 0.023335471558241304,
    0.022789500982609529, 0.022256304259381455, 0.021735582523906651,
    0.021227043903949847, 0.020730403356092247, 0.02024538250596045,
    0.01977170949219352, 0.019309118814060656, 0.0188573511826441,
    0.018416153375503896, 0.017985278094742926, 0.0175644838283928,
    0.017153534715042836, 0.016752200411636227, 0.016360255964359364,
    0.015977481682551895, 0.015603663015566861, 0.015238590432511879,
    0.014882059304803982, 0.014533869791472273, 0.014193826727144096,
    0.013861739512651973, 0.013537422008199936, 0.013220692429029427,
    0.012911373243526248, 0.012609291073711464, 0.012314276598060487,
    0.012026164456595854, 0.011744793158200508, 0.011470004990099649,
    0.011201645929460382, 0.01093956555705964, 0.010683616972971996,
    0.010433656714230067, 0.010189544674411412, 0.0099511440251067989,
    0.009718321139225862, 0.0094909455160971448, 0.0092688897083205365,
    0.00905202925033112, 0.00884024258863439, 0.0086334110136737086,
    0.008431418593291851, 0.00823415210774932, 0.0080415009862629932,
    0.0078533572450295783, 0.0076696154266990843, 0.0074901725412644254,
    0.0073149280083339907, 0.00714378360075485, 0.0069766433895549823,
    0.0068134136901736673, 0.006654003009949905, 0.0064983219968394205,
    0.0063462833893315291, 0.006197801967537761, 0.006052794505424861,
    0.00591117972416536, 0.0057728782465795931, 0.005637812552643613,
    0.0055059069360380722, 0.0053770874617137124, 0.0052512819244496748,
    0.0051284198083814021, 0.0050084322474754596, 0.0048912519869290993,
    0.00477681334547295, 0.0046650521785556983, 0.0045559058423901106,
    0.0044493131588402715, 0.0043452143811303287, 0.0042435511603555447,
    0.0041442665127768693, 0.0040473047878807136, 0.0039526116371860114,
    0.0038601339837810965, 0.0037698199925733024, 0.0036816190412346304,
    0.0035954816918271838, 0.0035113596630924736, 0.0034292058033890582,
    0.0033489740642633527, 0.003270619474638786, 0.0031940981156088509, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.000806267598511844,
    0.023894522010860429, 0.023335471558241304, 0.022789500982609529,
    0.022256304259381455, 0.021735582523906651, 0.021227043903949847,
    0.020730403356092247, 0.02024538250596045, 0.01977170949219352,
    0.019309118814060656, 0.0188573511826441, 0.018416153375503896,
    0.017985278094742926, 0.0175644838283928, 0.017153534715042836,
    0.016752200411636227, 0.016360255964359364, 0.015977481682551895,
    0.015603663015566861, 0.015238590432511879, 0.014882059304803982,
    0.014533869791472273, 0.014193826727144096, 0.013861739512651973,
    0.013537422008199936, 0.013220692429029427, 0.012911373243526248,
    0.012609291073711464, 0.012314276598060487, 0.012026164456595854,
    0.011744793158200508, 0.011470004990099649, 0.011201645929460382,
    0.01093956555705964, 0.010683616972971996, 0.010433656714230067,
    0.010189544674411412, 0.0099511440251067989, 0.009718321139225862,
    0.0094909455160971448, 0.0092688897083205365, 0.00905202925033112,
    0.00884024258863439, 0.0086334110136737086, 0.008431418593291851,
    0.00823415210774932, 0.0080415009862629932, 0.0078533572450295783,
    0.0076696154266990843, 0.0074901725412644254, 0.0073149280083339907,
    0.00714378360075485, 0.0069766433895549823, 0.0068134136901736673,
    0.006654003009949905, 0.0064983219968394205, 0.0063462833893315291,
    0.006197801967537761, 0.006052794505424861, 0.00591117972416536,
    0.0057728782465795931, 0.005637812552643613, 0.0055059069360380722,
    0.0053770874617137124, 0.0052512819244496748, 0.0051284198083814021,
    0.0050084322474754596, 0.0048912519869290993, 0.00477681334547295,
    0.0046650521785556983, 0.0045559058423901106, 0.0044493131588402715,
    0.0043452143811303287, 0.0042435511603555447, 0.0041442665127768693,
    0.0040473047878807136, 0.0039526116371860114, 0.0038601339837810965,
    0.0037698199925733024, 0.0036816190412346304, 0.0035954816918271838,
    0.0035113596630924736, 0.0034292058033890582, 0.0033489740642633527,
    0.003270619474638786, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.000806267598511844, 0.023894522010860429, 0.023335471558241304,
    0.022789500982609529, 0.022256304259381455, 0.021735582523906651,
    0.021227043903949847, 0.020730403356092247, 0.02024538250596045,
    0.01977170949219352, 0.019309118814060656, 0.0188573511826441,
    0.018416153375503896, 0.017985278094742926, 0.0175644838283928,
    0.017153534715042836, 0.016752200411636227, 0.016360255964359364,
    0.015977481682551895, 0.015603663015566861, 0.015238590432511879,
    0.014882059304803982, 0.014533869791472273, 0.014193826727144096,
    0.013861739512651973, 0.013537422008199936, 0.013220692429029427,
    0.012911373243526248, 0.012609291073711464, 0.012314276598060487,
    0.012026164456595854, 0.011744793158200508, 0.011470004990099649,
    0.011201645929460382, 0.01093956555705964, 0.010683616972971996,
    0.010433656714230067, 0.010189544674411412, 0.0099511440251067989,
    0.009718321139225862, 0.0094909455160971448, 0.0092688897083205365,
    0.00905202925033112, 0.00884024258863439, 0.0086334110136737086,
    0.008431418593291851, 0.00823415210774932, 0.0080415009862629932,
    0.0078533572450295783, 0.0076696154266990843, 0.0074901725412644254,
    0.0073149280083339907, 0.00714378360075485, 0.0069766433895549823,
    0.0068134136901736673, 0.006654003009949905, 0.0064983219968394205,
    0.0063462833893315291, 0.006197801967537761, 0.006052794505424861,
    0.00591117972416536, 0.0057728782465795931, 0.005637812552643613,
    0.0055059069360380722, 0.0053770874617137124, 0.0052512819244496748,
    0.0051284198083814021, 0.0050084322474754596, 0.0048912519869290993,
    0.00477681334547295, 0.0046650521785556983, 0.0045559058423901106,
    0.0044493131588402715, 0.0043452143811303287, 0.0042435511603555447,
    0.0041442665127768693, 0.0040473047878807136, 0.0039526116371860114,
    0.0038601339837810965, 0.0037698199925733024, 0.0036816190412346304,
    0.0035954816918271838, 0.0035113596630924736, 0.0034292058033890582,
    0.0033489740642633527, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.000806267598511844, 0.023894522010860429, 0.023335471558241304,
    0.022789500982609529, 0.022256304259381455, 0.021735582523906651,
    0.021227043903949847, 0.020730403356092247, 0.02024538250596045,
    0.01977170949219352, 0.019309118814060656, 0.0188573511826441,
    0.018416153375503896, 0.017985278094742926, 0.0175644838283928,
    0.017153534715042836, 0.016752200411636227, 0.016360255964359364,
    0.015977481682551895, 0.015603663015566861, 0.015238590432511879,
    0.014882059304803982, 0.014533869791472273, 0.014193826727144096,
    0.013861739512651973, 0.013537422008199936, 0.013220692429029427,
    0.012911373243526248, 0.012609291073711464, 0.012314276598060487,
    0.012026164456595854, 0.011744793158200508, 0.011470004990099649,
    0.011201645929460382, 0.01093956555705964, 0.010683616972971996,
    0.010433656714230067, 0.010189544674411412, 0.0099511440251067989,
    0.009718321139225862, 0.0094909455160971448, 0.0092688897083205365,
    0.00905202925033112, 0.00884024258863439, 0.0086334110136737086,
    0.008431418593291851, 0.00823415210774932, 0.0080415009862629932,
    0.0078533572450295783, 0.0076696154266990843, 0.0074901725412644254,
    0.0073149280083339907, 0.00714378360075485, 0.0069766433895549823,
    0.0068134136901736673, 0.006654003009949905, 0.0064983219968394205,
    0.0063462833893315291, 0.006197801967537761, 0.006052794505424861,
    0.00591117972416536, 0.0057728782465795931, 0.005637812552643613,
    0.0055059069360380722, 0.0053770874617137124, 0.0052512819244496748,
    0.0051284198083814021, 0.0050084322474754596, 0.0048912519869290993,
    0.00477681334547295, 0.0046650521785556983, 0.0045559058423901106,
    0.0044493131588402715, 0.0043452143811303287, 0.0042435511603555447,
    0.0041442665127768693, 0.0040473047878807136, 0.0039526116371860114,
    0.0038601339837810965, 0.0037698199925733024, 0.0036816190412346304,
    0.0035954816918271838, 0.0035113596630924736, 0.0034292058033890582, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.000806267598511844,
    0.023894522010860429, 0.023335471558241304, 0.022789500982609529,
    0.022256304259381455, 0.021735582523906651, 0.021227043903949847,
    0.020730403356092247, 0.02024538250596045, 0.01977170949219352,
    0.019309118814060656, 0.0188573511826441, 0.018416153375503896,
    0.017985278094742926, 0.0175644838283928, 0.017153534715042836,
    0.016752200411636227, 0.016360255964359364, 0.015977481682551895,
    0.015603663015566861, 0.015238590432511879, 0.014882059304803982,
    0.014533869791472273, 0.014193826727144096, 0.013861739512651973,
    0.013537422008199936, 0.013220692429029427, 0.012911373243526248,
    0.012609291073711464, 0.012314276598060487, 0.012026164456595854,
    0.011744793158200508, 0.011470004990099649, 0.011201645929460382,
    0.01093956555705964, 0.010683616972971996, 0.010433656714230067,
    0.010189544674411412, 0.0099511440251067989, 0.009718321139225862,
    0.0094909455160971448, 0.0092688897083205365, 0.00905202925033112,
    0.00884024258863439, 0.0086334110136737086, 0.008431418593291851,
    0.00823415210774932, 0.0080415009862629932, 0.0078533572450295783,
    0.0076696154266990843, 0.0074901725412644254, 0.0073149280083339907,
    0.00714378360075485, 0.0069766433895549823, 0.0068134136901736673,
    0.006654003009949905, 0.0064983219968394205, 0.0063462833893315291,
    0.006197801967537761, 0.006052794505424861, 0.00591117972416536,
    0.0057728782465795931, 0.005637812552643613, 0.0055059069360380722,
    0.0053770874617137124, 0.0052512819244496748, 0.0051284198083814021,
    0.0050084322474754596, 0.0048912519869290993, 0.00477681334547295,
    0.0046650521785556983, 0.0045559058423901106, 0.0044493131588402715,
    0.0043452143811303287, 0.0042435511603555447, 0.0041442665127768693,
    0.0040473047878807136, 0.0039526116371860114, 0.0038601339837810965,
    0.0037698199925733024, 0.0036816190412346304, 0.0035954816918271838,
    0.0035113596630924736, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.000806267598511844, 0.023894522010860429, 0.023335471558241304,
    0.022789500982609529, 0.022256304259381455, 0.021735582523906651,
    0.021227043903949847, 0.020730403356092247, 0.02024538250596045,
    0.01977170949219352, 0.019309118814060656, 0.0188573511826441,
    0.018416153375503896, 0.017985278094742926, 0.0175644838283928,
    0.017153534715042836, 0.016752200411636227, 0.016360255964359364,
    0.015977481682551895, 0.015603663015566861, 0.015238590432511879,
    0.014882059304803982, 0.014533869791472273, 0.014193826727144096,
    0.013861739512651973, 0.013537422008199936, 0.013220692429029427,
    0.012911373243526248, 0.012609291073711464, 0.012314276598060487,
    0.012026164456595854, 0.011744793158200508, 0.011470004990099649,
    0.011201645929460382, 0.01093956555705964, 0.010683616972971996,
    0.010433656714230067, 0.010189544674411412, 0.0099511440251067989,
    0.009718321139225862, 0.0094909455160971448, 0.0092688897083205365,
    0.00905202925033112, 0.00884024258863439, 0.0086334110136737086,
    0.008431418593291851, 0.00823415210774932, 0.0080415009862629932,
    0.0078533572450295783, 0.0076696154266990843, 0.0074901725412644254,
    0.0073149280083339907, 0.00714378360075485, 0.0069766433895549823,
    0.0068134136901736673, 0.006654003009949905, 0.0064983219968394205,
    0.0063462833893315291, 0.006197801967537761, 0.006052794505424861,
    0.00591117972416536, 0.0057728782465795931, 0.005637812552643613,
    0.0055059069360380722, 0.0053770874617137124, 0.0052512819244496748,
    0.0051284198083814021, 0.0050084322474754596, 0.0048912519869290993,
    0.00477681334547295, 0.0046650521785556983, 0.0045559058423901106,
    0.0044493131588402715, 0.0043452143811303287, 0.0042435511603555447,
    0.0041442665127768693, 0.0040473047878807136, 0.0039526116371860114,
    0.0038601339837810965, 0.0037698199925733024, 0.0036816190412346304,
    0.0035954816918271838, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.000806267598511844, 0.023894522010860429,
    0.023335471558241304, 0.022789500982609529, 0.022256304259381455,
    0.021735582523906651, 0.021227043903949847, 0.020730403356092247,
    0.02024538250596045, 0.01977170949219352, 0.019309118814060656,
    0.0188573511826441, 0.018416153375503896, 0.017985278094742926,
    0.0175644838283928, 0.017153534715042836, 0.016752200411636227,
    0.016360255964359364, 0.015977481682551895, 0.015603663015566861,
    0.015238590432511879, 0.014882059304803982, 0.014533869791472273,
    0.014193826727144096, 0.013861739512651973, 0.013537422008199936,
    0.013220692429029427, 0.012911373243526248, 0.012609291073711464,
    0.012314276598060487, 0.012026164456595854, 0.011744793158200508,
    0.011470004990099649, 0.011201645929460382, 0.01093956555705964,
    0.010683616972971996, 0.010433656714230067, 0.010189544674411412,
    0.0099511440251067989, 0.009718321139225862, 0.0094909455160971448,
    0.0092688897083205365, 0.00905202925033112, 0.00884024258863439,
    0.0086334110136737086, 0.008431418593291851, 0.00823415210774932,
    0.0080415009862629932, 0.0078533572450295783, 0.0076696154266990843,
    0.0074901725412644254, 0.0073149280083339907, 0.00714378360075485,
    0.0069766433895549823, 0.0068134136901736673, 0.006654003009949905,
    0.0064983219968394205, 0.0063462833893315291, 0.006197801967537761,
    0.006052794505424861, 0.00591117972416536, 0.0057728782465795931,
    0.005637812552643613, 0.0055059069360380722, 0.0053770874617137124,
    0.0052512819244496748, 0.0051284198083814021, 0.0050084322474754596,
    0.0048912519869290993, 0.00477681334547295, 0.0046650521785556983,
    0.0045559058423901106, 0.0044493131588402715, 0.0043452143811303287,
    0.0042435511603555447, 0.0041442665127768693, 0.0040473047878807136,
    0.0039526116371860114, 0.0038601339837810965, 0.0037698199925733024,
    0.0036816190412346304, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.000806267598511844, 0.023894522010860429,
    0.023335471558241304, 0.022789500982609529, 0.022256304259381455,
    0.021735582523906651, 0.021227043903949847, 0.020730403356092247,
    0.02024538250596045, 0.01977170949219352, 0.019309118814060656,
    0.0188573511826441, 0.018416153375503896, 0.017985278094742926,
    0.0175644838283928, 0.017153534715042836, 0.016752200411636227,
    0.016360255964359364, 0.015977481682551895, 0.015603663015566861,
    0.015238590432511879, 0.014882059304803982, 0.014533869791472273,
    0.014193826727144096, 0.013861739512651973, 0.013537422008199936,
    0.013220692429029427, 0.012911373243526248, 0.012609291073711464,
    0.012314276598060487, 0.012026164456595854, 0.011744793158200508,
    0.011470004990099649, 0.011201645929460382, 0.01093956555705964,
    0.010683616972971996, 0.010433656714230067, 0.010189544674411412,
    0.0099511440251067989, 0.009718321139225862, 0.0094909455160971448,
    0.0092688897083205365, 0.00905202925033112, 0.00884024258863439,
    0.0086334110136737086, 0.008431418593291851, 0.00823415210774932,
    0.0080415009862629932, 0.0078533572450295783, 0.0076696154266990843,
    0.0074901725412644254, 0.0073149280083339907, 0.00714378360075485,
    0.0069766433895549823, 0.0068134136901736673, 0.006654003009949905,
    0.0064983219968394205, 0.0063462833893315291, 0.006197801967537761,
    0.006052794505424861, 0.00591117972416536, 0.0057728782465795931,
    0.005637812552643613, 0.0055059069360380722, 0.0053770874617137124,
    0.0052512819244496748, 0.0051284198083814021, 0.0050084322474754596,
    0.0048912519869290993, 0.00477681334547295, 0.0046650521785556983,
    0.0045559058423901106, 0.0044493131588402715, 0.0043452143811303287,
    0.0042435511603555447, 0.0041442665127768693, 0.0040473047878807136,
    0.0039526116371860114, 0.0038601339837810965, 0.0037698199925733024, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.000806267598511844, 0.023894522010860429, 0.023335471558241304,
    0.022789500982609529, 0.022256304259381455, 0.021735582523906651,
    0.021227043903949847, 0.020730403356092247, 0.02024538250596045,
    0.01977170949219352, 0.019309118814060656, 0.0188573511826441,
    0.018416153375503896, 0.017985278094742926, 0.0175644838283928,
    0.017153534715042836, 0.016752200411636227, 0.016360255964359364,
    0.015977481682551895, 0.015603663015566861, 0.015238590432511879,
    0.014882059304803982, 0.014533869791472273, 0.014193826727144096,
    0.013861739512651973, 0.013537422008199936, 0.013220692429029427,
    0.012911373243526248, 0.012609291073711464, 0.012314276598060487,
    0.012026164456595854, 0.011744793158200508, 0.011470004990099649,
    0.011201645929460382, 0.01093956555705964, 0.010683616972971996,
    0.010433656714230067, 0.010189544674411412, 0.0099511440251067989,
    0.009718321139225862, 0.0094909455160971448, 0.0092688897083205365,
    0.00905202925033112, 0.00884024258863439, 0.0086334110136737086,
    0.008431418593291851, 0.00823415210774932, 0.0080415009862629932,
    0.0078533572450295783, 0.0076696154266990843, 0.0074901725412644254,
    0.0073149280083339907, 0.00714378360075485, 0.0069766433895549823,
    0.0068134136901736673, 0.006654003009949905, 0.0064983219968394205,
    0.0063462833893315291, 0.006197801967537761, 0.006052794505424861,
    0.00591117972416536, 0.0057728782465795931, 0.005637812552643613,
    0.0055059069360380722, 0.0053770874617137124, 0.0052512819244496748,
    0.0051284198083814021, 0.0050084322474754596, 0.0048912519869290993,
    0.00477681334547295, 0.0046650521785556983, 0.0045559058423901106,
    0.0044493131588402715, 0.0043452143811303287, 0.0042435511603555447,
    0.0041442665127768693, 0.0040473047878807136, 0.0039526116371860114,
    0.0038601339837810965, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.000806267598511844, 0.023894522010860429,
    0.023335471558241304, 0.022789500982609529, 0.022256304259381455,
    0.021735582523906651, 0.021227043903949847, 0.020730403356092247,
    0.02024538250596045, 0.01977170949219352, 0.019309118814060656,
    0.0188573511826441, 0.018416153375503896, 0.017985278094742926,
    0.0175644838283928, 0.017153534715042836, 0.016752200411636227,
    0.016360255964359364, 0.015977481682551895, 0.015603663015566861,
    0.015238590432511879, 0.014882059304803982, 0.014533869791472273,
    0.014193826727144096, 0.013861739512651973, 0.013537422008199936,
    0.013220692429029427, 0.012911373243526248, 0.012609291073711464,
    0.012314276598060487, 0.012026164456595854, 0.011744793158200508,
    0.011470004990099649, 0.011201645929460382, 0.01093956555705964,
    0.010683616972971996, 0.010433656714230067, 0.010189544674411412,
    0.0099511440251067989, 0.009718321139225862, 0.0094909455160971448,
    0.0092688897083205365, 0.00905202925033112, 0.00884024258863439,
    0.0086334110136737086, 0.008431418593291851, 0.00823415210774932,
    0.0080415009862629932, 0.0078533572450295783, 0.0076696154266990843,
    0.0074901725412644254, 0.0073149280083339907, 0.00714378360075485,
    0.0069766433895549823, 0.0068134136901736673, 0.006654003009949905,
    0.0064983219968394205, 0.0063462833893315291, 0.006197801967537761,
    0.006052794505424861, 0.00591117972416536, 0.0057728782465795931,
    0.005637812552643613, 0.0055059069360380722, 0.0053770874617137124,
    0.0052512819244496748, 0.0051284198083814021, 0.0050084322474754596,
    0.0048912519869290993, 0.00477681334547295, 0.0046650521785556983,
    0.0045559058423901106, 0.0044493131588402715, 0.0043452143811303287,
    0.0042435511603555447, 0.0041442665127768693, 0.0040473047878807136,
    0.0039526116371860114, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.000806267598511844,
    0.023894522010860429, 0.023335471558241304, 0.022789500982609529,
    0.022256304259381455, 0.021735582523906651, 0.021227043903949847,
    0.020730403356092247, 0.02024538250596045, 0.01977170949219352,
    0.019309118814060656, 0.0188573511826441, 0.018416153375503896,
    0.017985278094742926, 0.0175644838283928, 0.017153534715042836,
    0.016752200411636227, 0.016360255964359364, 0.015977481682551895,
    0.015603663015566861, 0.015238590432511879, 0.014882059304803982,
    0.014533869791472273, 0.014193826727144096, 0.013861739512651973,
    0.013537422008199936, 0.013220692429029427, 0.012911373243526248,
    0.012609291073711464, 0.012314276598060487, 0.012026164456595854,
    0.011744793158200508, 0.011470004990099649, 0.011201645929460382,
    0.01093956555705964, 0.010683616972971996, 0.010433656714230067,
    0.010189544674411412, 0.0099511440251067989, 0.009718321139225862,
    0.0094909455160971448, 0.0092688897083205365, 0.00905202925033112,
    0.00884024258863439, 0.0086334110136737086, 0.008431418593291851,
    0.00823415210774932, 0.0080415009862629932, 0.0078533572450295783,
    0.0076696154266990843, 0.0074901725412644254, 0.0073149280083339907,
    0.00714378360075485, 0.0069766433895549823, 0.0068134136901736673,
    0.006654003009949905, 0.0064983219968394205, 0.0063462833893315291,
    0.006197801967537761, 0.006052794505424861, 0.00591117972416536,
    0.0057728782465795931, 0.005637812552643613, 0.0055059069360380722,
    0.0053770874617137124, 0.0052512819244496748, 0.0051284198083814021,
    0.0050084322474754596, 0.0048912519869290993, 0.00477681334547295,
    0.0046650521785556983, 0.0045559058423901106, 0.0044493131588402715,
    0.0043452143811303287, 0.0042435511603555447, 0.0041442665127768693,
    0.0040473047878807136, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.000806267598511844,
    0.023894522010860429, 0.023335471558241304, 0.022789500982609529,
    0.022256304259381455, 0.021735582523906651, 0.021227043903949847,
    0.020730403356092247, 0.02024538250596045, 0.01977170949219352,
    0.019309118814060656, 0.0188573511826441, 0.018416153375503896,
    0.017985278094742926, 0.0175644838283928, 0.017153534715042836,
    0.016752200411636227, 0.016360255964359364, 0.015977481682551895,
    0.015603663015566861, 0.015238590432511879, 0.014882059304803982,
    0.014533869791472273, 0.014193826727144096, 0.013861739512651973,
    0.013537422008199936, 0.013220692429029427, 0.012911373243526248,
    0.012609291073711464, 0.012314276598060487, 0.012026164456595854,
    0.011744793158200508, 0.011470004990099649, 0.011201645929460382,
    0.01093956555705964, 0.010683616972971996, 0.010433656714230067,
    0.010189544674411412, 0.0099511440251067989, 0.009718321139225862,
    0.0094909455160971448, 0.0092688897083205365, 0.00905202925033112,
    0.00884024258863439, 0.0086334110136737086, 0.008431418593291851,
    0.00823415210774932, 0.0080415009862629932, 0.0078533572450295783,
    0.0076696154266990843, 0.0074901725412644254, 0.0073149280083339907,
    0.00714378360075485, 0.0069766433895549823, 0.0068134136901736673,
    0.006654003009949905, 0.0064983219968394205, 0.0063462833893315291,
    0.006197801967537761, 0.006052794505424861, 0.00591117972416536,
    0.0057728782465795931, 0.005637812552643613, 0.0055059069360380722,
    0.0053770874617137124, 0.0052512819244496748, 0.0051284198083814021,
    0.0050084322474754596, 0.0048912519869290993, 0.00477681334547295,
    0.0046650521785556983, 0.0045559058423901106, 0.0044493131588402715,
    0.0043452143811303287, 0.0042435511603555447, 0.0041442665127768693, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.000806267598511844, 0.023894522010860429,
    0.023335471558241304, 0.022789500982609529, 0.022256304259381455,
    0.021735582523906651, 0.021227043903949847, 0.020730403356092247,
    0.02024538250596045, 0.01977170949219352, 0.019309118814060656,
    0.0188573511826441, 0.018416153375503896, 0.017985278094742926,
    0.0175644838283928, 0.017153534715042836, 0.016752200411636227,
    0.016360255964359364, 0.015977481682551895, 0.015603663015566861,
    0.015238590432511879, 0.014882059304803982, 0.014533869791472273,
    0.014193826727144096, 0.013861739512651973, 0.013537422008199936,
    0.013220692429029427, 0.012911373243526248, 0.012609291073711464,
    0.012314276598060487, 0.012026164456595854, 0.011744793158200508,
    0.011470004990099649, 0.011201645929460382, 0.01093956555705964,
    0.010683616972971996, 0.010433656714230067, 0.010189544674411412,
    0.0099511440251067989, 0.009718321139225862, 0.0094909455160971448,
    0.0092688897083205365, 0.00905202925033112, 0.00884024258863439,
    0.0086334110136737086, 0.008431418593291851, 0.00823415210774932,
    0.0080415009862629932, 0.0078533572450295783, 0.0076696154266990843,
    0.0074901725412644254, 0.0073149280083339907, 0.00714378360075485,
    0.0069766433895549823, 0.0068134136901736673, 0.006654003009949905,
    0.0064983219968394205, 0.0063462833893315291, 0.006197801967537761,
    0.006052794505424861, 0.00591117972416536, 0.0057728782465795931,
    0.005637812552643613, 0.0055059069360380722, 0.0053770874617137124,
    0.0052512819244496748, 0.0051284198083814021, 0.0050084322474754596,
    0.0048912519869290993, 0.00477681334547295, 0.0046650521785556983,
    0.0045559058423901106, 0.0044493131588402715, 0.0043452143811303287,
    0.0042435511603555447, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.000806267598511844,
    0.023894522010860429, 0.023335471558241304, 0.022789500982609529,
    0.022256304259381455, 0.021735582523906651, 0.021227043903949847,
    0.020730403356092247, 0.02024538250596045, 0.01977170949219352,
    0.019309118814060656, 0.0188573511826441, 0.018416153375503896,
    0.017985278094742926, 0.0175644838283928, 0.017153534715042836,
    0.016752200411636227, 0.016360255964359364, 0.015977481682551895,
    0.015603663015566861, 0.015238590432511879, 0.014882059304803982,
    0.014533869791472273, 0.014193826727144096, 0.013861739512651973,
    0.013537422008199936, 0.013220692429029427, 0.012911373243526248,
    0.012609291073711464, 0.012314276598060487, 0.012026164456595854,
    0.011744793158200508, 0.011470004990099649, 0.011201645929460382,
    0.01093956555705964, 0.010683616972971996, 0.010433656714230067,
    0.010189544674411412, 0.0099511440251067989, 0.009718321139225862,
    0.0094909455160971448, 0.0092688897083205365, 0.00905202925033112,
    0.00884024258863439, 0.0086334110136737086, 0.008431418593291851,
    0.00823415210774932, 0.0080415009862629932, 0.0078533572450295783,
    0.0076696154266990843, 0.0074901725412644254, 0.0073149280083339907,
    0.00714378360075485, 0.0069766433895549823, 0.0068134136901736673,
    0.006654003009949905, 0.0064983219968394205, 0.0063462833893315291,
    0.006197801967537761, 0.006052794505424861, 0.00591117972416536,
    0.0057728782465795931, 0.005637812552643613, 0.0055059069360380722,
    0.0053770874617137124, 0.0052512819244496748, 0.0051284198083814021,
    0.0050084322474754596, 0.0048912519869290993, 0.00477681334547295,
    0.0046650521785556983, 0.0045559058423901106, 0.0044493131588402715,
    0.0043452143811303287, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.000806267598511844,
    0.023894522010860429, 0.023335471558241304, 0.022789500982609529,
    0.022256304259381455, 0.021735582523906651, 0.021227043903949847,
    0.020730403356092247, 0.02024538250596045, 0.01977170949219352,
    0.019309118814060656, 0.0188573511826441, 0.018416153375503896,
    0.017985278094742926, 0.0175644838283928, 0.017153534715042836,
    0.016752200411636227, 0.016360255964359364, 0.015977481682551895,
    0.015603663015566861, 0.015238590432511879, 0.014882059304803982,
    0.014533869791472273, 0.014193826727144096, 0.013861739512651973,
    0.013537422008199936, 0.013220692429029427, 0.012911373243526248,
    0.012609291073711464, 0.012314276598060487, 0.012026164456595854,
    0.011744793158200508, 0.011470004990099649, 0.011201645929460382,
    0.01093956555705964, 0.010683616972971996, 0.010433656714230067,
    0.010189544674411412, 0.0099511440251067989, 0.009718321139225862,
    0.0094909455160971448, 0.0092688897083205365, 0.00905202925033112,
    0.00884024258863439, 0.0086334110136737086, 0.008431418593291851,
    0.00823415210774932, 0.0080415009862629932, 0.0078533572450295783,
    0.0076696154266990843, 0.0074901725412644254, 0.0073149280083339907,
    0.00714378360075485, 0.0069766433895549823, 0.0068134136901736673,
    0.006654003009949905, 0.0064983219968394205, 0.0063462833893315291,
    0.006197801967537761, 0.006052794505424861, 0.00591117972416536,
    0.0057728782465795931, 0.005637812552643613, 0.0055059069360380722,
    0.0053770874617137124, 0.0052512819244496748, 0.0051284198083814021,
    0.0050084322474754596, 0.0048912519869290993, 0.00477681334547295,
    0.0046650521785556983, 0.0045559058423901106, 0.0044493131588402715, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.000806267598511844,
    0.023894522010860429, 0.023335471558241304, 0.022789500982609529,
    0.022256304259381455, 0.021735582523906651, 0.021227043903949847,
    0.020730403356092247, 0.02024538250596045, 0.01977170949219352,
    0.019309118814060656, 0.0188573511826441, 0.018416153375503896,
    0.017985278094742926, 0.0175644838283928, 0.017153534715042836,
    0.016752200411636227, 0.016360255964359364, 0.015977481682551895,
    0.015603663015566861, 0.015238590432511879, 0.014882059304803982,
    0.014533869791472273, 0.014193826727144096, 0.013861739512651973,
    0.013537422008199936, 0.013220692429029427, 0.012911373243526248,
    0.012609291073711464, 0.012314276598060487, 0.012026164456595854,
    0.011744793158200508, 0.011470004990099649, 0.011201645929460382,
    0.01093956555705964, 0.010683616972971996, 0.010433656714230067,
    0.010189544674411412, 0.0099511440251067989, 0.009718321139225862,
    0.0094909455160971448, 0.0092688897083205365, 0.00905202925033112,
    0.00884024258863439, 0.0086334110136737086, 0.008431418593291851,
    0.00823415210774932, 0.0080415009862629932, 0.0078533572450295783,
    0.0076696154266990843, 0.0074901725412644254, 0.0073149280083339907,
    0.00714378360075485, 0.0069766433895549823, 0.0068134136901736673,
    0.006654003009949905, 0.0064983219968394205, 0.0063462833893315291,
    0.006197801967537761, 0.006052794505424861, 0.00591117972416536,
    0.0057728782465795931, 0.005637812552643613, 0.0055059069360380722,
    0.0053770874617137124, 0.0052512819244496748, 0.0051284198083814021,
    0.0050084322474754596, 0.0048912519869290993, 0.00477681334547295,
    0.0046650521785556983, 0.0045559058423901106, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.000806267598511844, 0.023894522010860429,
    0.023335471558241304, 0.022789500982609529, 0.022256304259381455,
    0.021735582523906651, 0.021227043903949847, 0.020730403356092247,
    0.02024538250596045, 0.01977170949219352, 0.019309118814060656,
    0.0188573511826441, 0.018416153375503896, 0.017985278094742926,
    0.0175644838283928, 0.017153534715042836, 0.016752200411636227,
    0.016360255964359364, 0.015977481682551895, 0.015603663015566861,
    0.015238590432511879, 0.014882059304803982, 0.014533869791472273,
    0.014193826727144096, 0.013861739512651973, 0.013537422008199936,
    0.013220692429029427, 0.012911373243526248, 0.012609291073711464,
    0.012314276598060487, 0.012026164456595854, 0.011744793158200508,
    0.011470004990099649, 0.011201645929460382, 0.01093956555705964,
    0.010683616972971996, 0.010433656714230067, 0.010189544674411412,
    0.0099511440251067989, 0.009718321139225862, 0.0094909455160971448,
    0.0092688897083205365, 0.00905202925033112, 0.00884024258863439,
    0.0086334110136737086, 0.008431418593291851, 0.00823415210774932,
    0.0080415009862629932, 0.0078533572450295783, 0.0076696154266990843,
    0.0074901725412644254, 0.0073149280083339907, 0.00714378360075485,
    0.0069766433895549823, 0.0068134136901736673, 0.006654003009949905,
    0.0064983219968394205, 0.0063462833893315291, 0.006197801967537761,
    0.006052794505424861, 0.00591117972416536, 0.0057728782465795931,
    0.005637812552643613, 0.0055059069360380722, 0.0053770874617137124,
    0.0052512819244496748, 0.0051284198083814021, 0.0050084322474754596,
    0.0048912519869290993, 0.00477681334547295, 0.0046650521785556983, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.000806267598511844,
    0.023894522010860429, 0.023335471558241304, 0.022789500982609529,
    0.022256304259381455, 0.021735582523906651, 0.021227043903949847,
    0.020730403356092247, 0.02024538250596045, 0.01977170949219352,
    0.019309118814060656, 0.0188573511826441, 0.018416153375503896,
    0.017985278094742926, 0.0175644838283928, 0.017153534715042836,
    0.016752200411636227, 0.016360255964359364, 0.015977481682551895,
    0.015603663015566861, 0.015238590432511879, 0.014882059304803982,
    0.014533869791472273, 0.014193826727144096, 0.013861739512651973,
    0.013537422008199936, 0.013220692429029427, 0.012911373243526248,
    0.012609291073711464, 0.012314276598060487, 0.012026164456595854,
    0.011744793158200508, 0.011470004990099649, 0.011201645929460382,
    0.01093956555705964, 0.010683616972971996, 0.010433656714230067,
    0.010189544674411412, 0.0099511440251067989, 0.009718321139225862,
    0.0094909455160971448, 0.0092688897083205365, 0.00905202925033112,
    0.00884024258863439, 0.0086334110136737086, 0.008431418593291851,
    0.00823415210774932, 0.0080415009862629932, 0.0078533572450295783,
    0.0076696154266990843, 0.0074901725412644254, 0.0073149280083339907,
    0.00714378360075485, 0.0069766433895549823, 0.0068134136901736673,
    0.006654003009949905, 0.0064983219968394205, 0.0063462833893315291,
    0.006197801967537761, 0.006052794505424861, 0.00591117972416536,
    0.0057728782465795931, 0.005637812552643613, 0.0055059069360380722,
    0.0053770874617137124, 0.0052512819244496748, 0.0051284198083814021,
    0.0050084322474754596, 0.0048912519869290993, 0.00477681334547295, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.000806267598511844,
    0.023894522010860429, 0.023335471558241304, 0.022789500982609529,
    0.022256304259381455, 0.021735582523906651, 0.021227043903949847,
    0.020730403356092247, 0.02024538250596045, 0.01977170949219352,
    0.019309118814060656, 0.0188573511826441, 0.018416153375503896,
    0.017985278094742926, 0.0175644838283928, 0.017153534715042836,
    0.016752200411636227, 0.016360255964359364, 0.015977481682551895,
    0.015603663015566861, 0.015238590432511879, 0.014882059304803982,
    0.014533869791472273, 0.014193826727144096, 0.013861739512651973,
    0.013537422008199936, 0.013220692429029427, 0.012911373243526248,
    0.012609291073711464, 0.012314276598060487, 0.012026164456595854,
    0.011744793158200508, 0.011470004990099649, 0.011201645929460382,
    0.01093956555705964, 0.010683616972971996, 0.010433656714230067,
    0.010189544674411412, 0.0099511440251067989, 0.009718321139225862,
    0.0094909455160971448, 0.0092688897083205365, 0.00905202925033112,
    0.00884024258863439, 0.0086334110136737086, 0.008431418593291851,
    0.00823415210774932, 0.0080415009862629932, 0.0078533572450295783,
    0.0076696154266990843, 0.0074901725412644254, 0.0073149280083339907,
    0.00714378360075485, 0.0069766433895549823, 0.0068134136901736673,
    0.006654003009949905, 0.0064983219968394205, 0.0063462833893315291,
    0.006197801967537761, 0.006052794505424861, 0.00591117972416536,
    0.0057728782465795931, 0.005637812552643613, 0.0055059069360380722,
    0.0053770874617137124, 0.0052512819244496748, 0.0051284198083814021,
    0.0050084322474754596, 0.0048912519869290993, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.000806267598511844, 0.023894522010860429,
    0.023335471558241304, 0.022789500982609529, 0.022256304259381455,
    0.021735582523906651, 0.021227043903949847, 0.020730403356092247,
    0.02024538250596045, 0.01977170949219352, 0.019309118814060656,
    0.0188573511826441, 0.018416153375503896, 0.017985278094742926,
    0.0175644838283928, 0.017153534715042836, 0.016752200411636227,
    0.016360255964359364, 0.015977481682551895, 0.015603663015566861,
    0.015238590432511879, 0.014882059304803982, 0.014533869791472273,
    0.014193826727144096, 0.013861739512651973, 0.013537422008199936,
    0.013220692429029427, 0.012911373243526248, 0.012609291073711464,
    0.012314276598060487, 0.012026164456595854, 0.011744793158200508,
    0.011470004990099649, 0.011201645929460382, 0.01093956555705964,
    0.010683616972971996, 0.010433656714230067, 0.010189544674411412,
    0.0099511440251067989, 0.009718321139225862, 0.0094909455160971448,
    0.0092688897083205365, 0.00905202925033112, 0.00884024258863439,
    0.0086334110136737086, 0.008431418593291851, 0.00823415210774932,
    0.0080415009862629932, 0.0078533572450295783, 0.0076696154266990843,
    0.0074901725412644254, 0.0073149280083339907, 0.00714378360075485,
    0.0069766433895549823, 0.0068134136901736673, 0.006654003009949905,
    0.0064983219968394205, 0.0063462833893315291, 0.006197801967537761,
    0.006052794505424861, 0.00591117972416536, 0.0057728782465795931,
    0.005637812552643613, 0.0055059069360380722, 0.0053770874617137124,
    0.0052512819244496748, 0.0051284198083814021, 0.0050084322474754596, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.000806267598511844, 0.023894522010860429, 0.023335471558241304,
    0.022789500982609529, 0.022256304259381455, 0.021735582523906651,
    0.021227043903949847, 0.020730403356092247, 0.02024538250596045,
    0.01977170949219352, 0.019309118814060656, 0.0188573511826441,
    0.018416153375503896, 0.017985278094742926, 0.0175644838283928,
    0.017153534715042836, 0.016752200411636227, 0.016360255964359364,
    0.015977481682551895, 0.015603663015566861, 0.015238590432511879,
    0.014882059304803982, 0.014533869791472273, 0.014193826727144096,
    0.013861739512651973, 0.013537422008199936, 0.013220692429029427,
    0.012911373243526248, 0.012609291073711464, 0.012314276598060487,
    0.012026164456595854, 0.011744793158200508, 0.011470004990099649,
    0.011201645929460382, 0.01093956555705964, 0.010683616972971996,
    0.010433656714230067, 0.010189544674411412, 0.0099511440251067989,
    0.009718321139225862, 0.0094909455160971448, 0.0092688897083205365,
    0.00905202925033112, 0.00884024258863439, 0.0086334110136737086,
    0.008431418593291851, 0.00823415210774932, 0.0080415009862629932,
    0.0078533572450295783, 0.0076696154266990843, 0.0074901725412644254,
    0.0073149280083339907, 0.00714378360075485, 0.0069766433895549823,
    0.0068134136901736673, 0.006654003009949905, 0.0064983219968394205,
    0.0063462833893315291, 0.006197801967537761, 0.006052794505424861,
    0.00591117972416536, 0.0057728782465795931, 0.005637812552643613,
    0.0055059069360380722, 0.0053770874617137124, 0.0052512819244496748,
    0.0051284198083814021, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.000806267598511844, 0.023894522010860429,
    0.023335471558241304, 0.022789500982609529, 0.022256304259381455,
    0.021735582523906651, 0.021227043903949847, 0.020730403356092247,
    0.02024538250596045, 0.01977170949219352, 0.019309118814060656,
    0.0188573511826441, 0.018416153375503896, 0.017985278094742926,
    0.0175644838283928, 0.017153534715042836, 0.016752200411636227,
    0.016360255964359364, 0.015977481682551895, 0.015603663015566861,
    0.015238590432511879, 0.014882059304803982, 0.014533869791472273,
    0.014193826727144096, 0.013861739512651973, 0.013537422008199936,
    0.013220692429029427, 0.012911373243526248, 0.012609291073711464,
    0.012314276598060487, 0.012026164456595854, 0.011744793158200508,
    0.011470004990099649, 0.011201645929460382, 0.01093956555705964,
    0.010683616972971996, 0.010433656714230067, 0.010189544674411412,
    0.0099511440251067989, 0.009718321139225862, 0.0094909455160971448,
    0.0092688897083205365, 0.00905202925033112, 0.00884024258863439,
    0.0086334110136737086, 0.008431418593291851, 0.00823415210774932,
    0.0080415009862629932, 0.0078533572450295783, 0.0076696154266990843,
    0.0074901725412644254, 0.0073149280083339907, 0.00714378360075485,
    0.0069766433895549823, 0.0068134136901736673, 0.006654003009949905,
    0.0064983219968394205, 0.0063462833893315291, 0.006197801967537761,
    0.006052794505424861, 0.00591117972416536, 0.0057728782465795931,
    0.005637812552643613, 0.0055059069360380722, 0.0053770874617137124,
    0.0052512819244496748, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.000806267598511844, 0.023894522010860429,
    0.023335471558241304, 0.022789500982609529, 0.022256304259381455,
    0.021735582523906651, 0.021227043903949847, 0.020730403356092247,
    0.02024538250596045, 0.01977170949219352, 0.019309118814060656,
    0.0188573511826441, 0.018416153375503896, 0.017985278094742926,
    0.0175644838283928, 0.017153534715042836, 0.016752200411636227,
    0.016360255964359364, 0.015977481682551895, 0.015603663015566861,
    0.015238590432511879, 0.014882059304803982, 0.014533869791472273,
    0.014193826727144096, 0.013861739512651973, 0.013537422008199936,
    0.013220692429029427, 0.012911373243526248, 0.012609291073711464,
    0.012314276598060487, 0.012026164456595854, 0.011744793158200508,
    0.011470004990099649, 0.011201645929460382, 0.01093956555705964,
    0.010683616972971996, 0.010433656714230067, 0.010189544674411412,
    0.0099511440251067989, 0.009718321139225862, 0.0094909455160971448,
    0.0092688897083205365, 0.00905202925033112, 0.00884024258863439,
    0.0086334110136737086, 0.008431418593291851, 0.00823415210774932,
    0.0080415009862629932, 0.0078533572450295783, 0.0076696154266990843,
    0.0074901725412644254, 0.0073149280083339907, 0.00714378360075485,
    0.0069766433895549823, 0.0068134136901736673, 0.006654003009949905,
    0.0064983219968394205, 0.0063462833893315291, 0.006197801967537761,
    0.006052794505424861, 0.00591117972416536, 0.0057728782465795931,
    0.005637812552643613, 0.0055059069360380722, 0.0053770874617137124, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.000806267598511844, 0.023894522010860429, 0.023335471558241304,
    0.022789500982609529, 0.022256304259381455, 0.021735582523906651,
    0.021227043903949847, 0.020730403356092247, 0.02024538250596045,
    0.01977170949219352, 0.019309118814060656, 0.0188573511826441,
    0.018416153375503896, 0.017985278094742926, 0.0175644838283928,
    0.017153534715042836, 0.016752200411636227, 0.016360255964359364,
    0.015977481682551895, 0.015603663015566861, 0.015238590432511879,
    0.014882059304803982, 0.014533869791472273, 0.014193826727144096,
    0.013861739512651973, 0.013537422008199936, 0.013220692429029427,
    0.012911373243526248, 0.012609291073711464, 0.012314276598060487,
    0.012026164456595854, 0.011744793158200508, 0.011470004990099649,
    0.011201645929460382, 0.01093956555705964, 0.010683616972971996,
    0.010433656714230067, 0.010189544674411412, 0.0099511440251067989,
    0.009718321139225862, 0.0094909455160971448, 0.0092688897083205365,
    0.00905202925033112, 0.00884024258863439, 0.0086334110136737086,
    0.008431418593291851, 0.00823415210774932, 0.0080415009862629932,
    0.0078533572450295783, 0.0076696154266990843, 0.0074901725412644254,
    0.0073149280083339907, 0.00714378360075485, 0.0069766433895549823,
    0.0068134136901736673, 0.006654003009949905, 0.0064983219968394205,
    0.0063462833893315291, 0.006197801967537761, 0.006052794505424861,
    0.00591117972416536, 0.0057728782465795931, 0.005637812552643613,
    0.0055059069360380722, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.000806267598511844, 0.023894522010860429,
    0.023335471558241304, 0.022789500982609529, 0.022256304259381455,
    0.021735582523906651, 0.021227043903949847, 0.020730403356092247,
    0.02024538250596045, 0.01977170949219352, 0.019309118814060656,
    0.0188573511826441, 0.018416153375503896, 0.017985278094742926,
    0.0175644838283928, 0.017153534715042836, 0.016752200411636227,
    0.016360255964359364, 0.015977481682551895, 0.015603663015566861,
    0.015238590432511879, 0.014882059304803982, 0.014533869791472273,
    0.014193826727144096, 0.013861739512651973, 0.013537422008199936,
    0.013220692429029427, 0.012911373243526248, 0.012609291073711464,
    0.012314276598060487, 0.012026164456595854, 0.011744793158200508,
    0.011470004990099649, 0.011201645929460382, 0.01093956555705964,
    0.010683616972971996, 0.010433656714230067, 0.010189544674411412,
    0.0099511440251067989, 0.009718321139225862, 0.0094909455160971448,
    0.0092688897083205365, 0.00905202925033112, 0.00884024258863439,
    0.0086334110136737086, 0.008431418593291851, 0.00823415210774932,
    0.0080415009862629932, 0.0078533572450295783, 0.0076696154266990843,
    0.0074901725412644254, 0.0073149280083339907, 0.00714378360075485,
    0.0069766433895549823, 0.0068134136901736673, 0.006654003009949905,
    0.0064983219968394205, 0.0063462833893315291, 0.006197801967537761,
    0.006052794505424861, 0.00591117972416536, 0.0057728782465795931,
    0.005637812552643613, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.000806267598511844,
    0.023894522010860429, 0.023335471558241304, 0.022789500982609529,
    0.022256304259381455, 0.021735582523906651, 0.021227043903949847,
    0.020730403356092247, 0.02024538250596045, 0.01977170949219352,
    0.019309118814060656, 0.0188573511826441, 0.018416153375503896,
    0.017985278094742926, 0.0175644838283928, 0.017153534715042836,
    0.016752200411636227, 0.016360255964359364, 0.015977481682551895,
    0.015603663015566861, 0.015238590432511879, 0.014882059304803982,
    0.014533869791472273, 0.014193826727144096, 0.013861739512651973,
    0.013537422008199936, 0.013220692429029427, 0.012911373243526248,
    0.012609291073711464, 0.012314276598060487, 0.012026164456595854,
    0.011744793158200508, 0.011470004990099649, 0.011201645929460382,
    0.01093956555705964, 0.010683616972971996, 0.010433656714230067,
    0.010189544674411412, 0.0099511440251067989, 0.009718321139225862,
    0.0094909455160971448, 0.0092688897083205365, 0.00905202925033112,
    0.00884024258863439, 0.0086334110136737086, 0.008431418593291851,
    0.00823415210774932, 0.0080415009862629932, 0.0078533572450295783,
    0.0076696154266990843, 0.0074901725412644254, 0.0073149280083339907,
    0.00714378360075485, 0.0069766433895549823, 0.0068134136901736673,
    0.006654003009949905, 0.0064983219968394205, 0.0063462833893315291,
    0.006197801967537761, 0.006052794505424861, 0.00591117972416536,
    0.0057728782465795931, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.000806267598511844,
    0.023894522010860429, 0.023335471558241304, 0.022789500982609529,
    0.022256304259381455, 0.021735582523906651, 0.021227043903949847,
    0.020730403356092247, 0.02024538250596045, 0.01977170949219352,
    0.019309118814060656, 0.0188573511826441, 0.018416153375503896,
    0.017985278094742926, 0.0175644838283928, 0.017153534715042836,
    0.016752200411636227, 0.016360255964359364, 0.015977481682551895,
    0.015603663015566861, 0.015238590432511879, 0.014882059304803982,
    0.014533869791472273, 0.014193826727144096, 0.013861739512651973,
    0.013537422008199936, 0.013220692429029427, 0.012911373243526248,
    0.012609291073711464, 0.012314276598060487, 0.012026164456595854,
    0.011744793158200508, 0.011470004990099649, 0.011201645929460382,
    0.01093956555705964, 0.010683616972971996, 0.010433656714230067,
    0.010189544674411412, 0.0099511440251067989, 0.009718321139225862,
    0.0094909455160971448, 0.0092688897083205365, 0.00905202925033112,
    0.00884024258863439, 0.0086334110136737086, 0.008431418593291851,
    0.00823415210774932, 0.0080415009862629932, 0.0078533572450295783,
    0.0076696154266990843, 0.0074901725412644254, 0.0073149280083339907,
    0.00714378360075485, 0.0069766433895549823, 0.0068134136901736673,
    0.006654003009949905, 0.0064983219968394205, 0.0063462833893315291,
    0.006197801967537761, 0.006052794505424861, 0.00591117972416536, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.000806267598511844, 0.023894522010860429,
    0.023335471558241304, 0.022789500982609529, 0.022256304259381455,
    0.021735582523906651, 0.021227043903949847, 0.020730403356092247,
    0.02024538250596045, 0.01977170949219352, 0.019309118814060656,
    0.0188573511826441, 0.018416153375503896, 0.017985278094742926,
    0.0175644838283928, 0.017153534715042836, 0.016752200411636227,
    0.016360255964359364, 0.015977481682551895, 0.015603663015566861,
    0.015238590432511879, 0.014882059304803982, 0.014533869791472273,
    0.014193826727144096, 0.013861739512651973, 0.013537422008199936,
    0.013220692429029427, 0.012911373243526248, 0.012609291073711464,
    0.012314276598060487, 0.012026164456595854, 0.011744793158200508,
    0.011470004990099649, 0.011201645929460382, 0.01093956555705964,
    0.010683616972971996, 0.010433656714230067, 0.010189544674411412,
    0.0099511440251067989, 0.009718321139225862, 0.0094909455160971448,
    0.0092688897083205365, 0.00905202925033112, 0.00884024258863439,
    0.0086334110136737086, 0.008431418593291851, 0.00823415210774932,
    0.0080415009862629932, 0.0078533572450295783, 0.0076696154266990843,
    0.0074901725412644254, 0.0073149280083339907, 0.00714378360075485,
    0.0069766433895549823, 0.0068134136901736673, 0.006654003009949905,
    0.0064983219968394205, 0.0063462833893315291, 0.006197801967537761,
    0.006052794505424861, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.000806267598511844,
    0.023894522010860429, 0.023335471558241304, 0.022789500982609529,
    0.022256304259381455, 0.021735582523906651, 0.021227043903949847,
    0.020730403356092247, 0.02024538250596045, 0.01977170949219352,
    0.019309118814060656, 0.0188573511826441, 0.018416153375503896,
    0.017985278094742926, 0.0175644838283928, 0.017153534715042836,
    0.016752200411636227, 0.016360255964359364, 0.015977481682551895,
    0.015603663015566861, 0.015238590432511879, 0.014882059304803982,
    0.014533869791472273, 0.014193826727144096, 0.013861739512651973,
    0.013537422008199936, 0.013220692429029427, 0.012911373243526248,
    0.012609291073711464, 0.012314276598060487, 0.012026164456595854,
    0.011744793158200508, 0.011470004990099649, 0.011201645929460382,
    0.01093956555705964, 0.010683616972971996, 0.010433656714230067,
    0.010189544674411412, 0.0099511440251067989, 0.009718321139225862,
    0.0094909455160971448, 0.0092688897083205365, 0.00905202925033112,
    0.00884024258863439, 0.0086334110136737086, 0.008431418593291851,
    0.00823415210774932, 0.0080415009862629932, 0.0078533572450295783,
    0.0076696154266990843, 0.0074901725412644254, 0.0073149280083339907,
    0.00714378360075485, 0.0069766433895549823, 0.0068134136901736673,
    0.006654003009949905, 0.0064983219968394205, 0.0063462833893315291,
    0.006197801967537761, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.000806267598511844,
    0.023894522010860429, 0.023335471558241304, 0.022789500982609529,
    0.022256304259381455, 0.021735582523906651, 0.021227043903949847,
    0.020730403356092247, 0.02024538250596045, 0.01977170949219352,
    0.019309118814060656, 0.0188573511826441, 0.018416153375503896,
    0.017985278094742926, 0.0175644838283928, 0.017153534715042836,
    0.016752200411636227, 0.016360255964359364, 0.015977481682551895,
    0.015603663015566861, 0.015238590432511879, 0.014882059304803982,
    0.014533869791472273, 0.014193826727144096, 0.013861739512651973,
    0.013537422008199936, 0.013220692429029427, 0.012911373243526248,
    0.012609291073711464, 0.012314276598060487, 0.012026164456595854,
    0.011744793158200508, 0.011470004990099649, 0.011201645929460382,
    0.01093956555705964, 0.010683616972971996, 0.010433656714230067,
    0.010189544674411412, 0.0099511440251067989, 0.009718321139225862,
    0.0094909455160971448, 0.0092688897083205365, 0.00905202925033112,
    0.00884024258863439, 0.0086334110136737086, 0.008431418593291851,
    0.00823415210774932, 0.0080415009862629932, 0.0078533572450295783,
    0.0076696154266990843, 0.0074901725412644254, 0.0073149280083339907,
    0.00714378360075485, 0.0069766433895549823, 0.0068134136901736673,
    0.006654003009949905, 0.0064983219968394205, 0.0063462833893315291, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.000806267598511844, 0.023894522010860429,
    0.023335471558241304, 0.022789500982609529, 0.022256304259381455,
    0.021735582523906651, 0.021227043903949847, 0.020730403356092247,
    0.02024538250596045, 0.01977170949219352, 0.019309118814060656,
    0.0188573511826441, 0.018416153375503896, 0.017985278094742926,
    0.0175644838283928, 0.017153534715042836, 0.016752200411636227,
    0.016360255964359364, 0.015977481682551895, 0.015603663015566861,
    0.015238590432511879, 0.014882059304803982, 0.014533869791472273,
    0.014193826727144096, 0.013861739512651973, 0.013537422008199936,
    0.013220692429029427, 0.012911373243526248, 0.012609291073711464,
    0.012314276598060487, 0.012026164456595854, 0.011744793158200508,
    0.011470004990099649, 0.011201645929460382, 0.01093956555705964,
    0.010683616972971996, 0.010433656714230067, 0.010189544674411412,
    0.0099511440251067989, 0.009718321139225862, 0.0094909455160971448,
    0.0092688897083205365, 0.00905202925033112, 0.00884024258863439,
    0.0086334110136737086, 0.008431418593291851, 0.00823415210774932,
    0.0080415009862629932, 0.0078533572450295783, 0.0076696154266990843,
    0.0074901725412644254, 0.0073149280083339907, 0.00714378360075485,
    0.0069766433895549823, 0.0068134136901736673, 0.006654003009949905,
    0.0064983219968394205, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.000806267598511844, 0.023894522010860429, 0.023335471558241304,
    0.022789500982609529, 0.022256304259381455, 0.021735582523906651,
    0.021227043903949847, 0.020730403356092247, 0.02024538250596045,
    0.01977170949219352, 0.019309118814060656, 0.0188573511826441,
    0.018416153375503896, 0.017985278094742926, 0.0175644838283928,
    0.017153534715042836, 0.016752200411636227, 0.016360255964359364,
    0.015977481682551895, 0.015603663015566861, 0.015238590432511879,
    0.014882059304803982, 0.014533869791472273, 0.014193826727144096,
    0.013861739512651973, 0.013537422008199936, 0.013220692429029427,
    0.012911373243526248, 0.012609291073711464, 0.012314276598060487,
    0.012026164456595854, 0.011744793158200508, 0.011470004990099649,
    0.011201645929460382, 0.01093956555705964, 0.010683616972971996,
    0.010433656714230067, 0.010189544674411412, 0.0099511440251067989,
    0.009718321139225862, 0.0094909455160971448, 0.0092688897083205365,
    0.00905202925033112, 0.00884024258863439, 0.0086334110136737086,
    0.008431418593291851, 0.00823415210774932, 0.0080415009862629932,
    0.0078533572450295783, 0.0076696154266990843, 0.0074901725412644254,
    0.0073149280083339907, 0.00714378360075485, 0.0069766433895549823,
    0.0068134136901736673, 0.006654003009949905, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.000806267598511844, 0.023894522010860429,
    0.023335471558241304, 0.022789500982609529, 0.022256304259381455,
    0.021735582523906651, 0.021227043903949847, 0.020730403356092247,
    0.02024538250596045, 0.01977170949219352, 0.019309118814060656,
    0.0188573511826441, 0.018416153375503896, 0.017985278094742926,
    0.0175644838283928, 0.017153534715042836, 0.016752200411636227,
    0.016360255964359364, 0.015977481682551895, 0.015603663015566861,
    0.015238590432511879, 0.014882059304803982, 0.014533869791472273,
    0.014193826727144096, 0.013861739512651973, 0.013537422008199936,
    0.013220692429029427, 0.012911373243526248, 0.012609291073711464,
    0.012314276598060487, 0.012026164456595854, 0.011744793158200508,
    0.011470004990099649, 0.011201645929460382, 0.01093956555705964,
    0.010683616972971996, 0.010433656714230067, 0.010189544674411412,
    0.0099511440251067989, 0.009718321139225862, 0.0094909455160971448,
    0.0092688897083205365, 0.00905202925033112, 0.00884024258863439,
    0.0086334110136737086, 0.008431418593291851, 0.00823415210774932,
    0.0080415009862629932, 0.0078533572450295783, 0.0076696154266990843,
    0.0074901725412644254, 0.0073149280083339907, 0.00714378360075485,
    0.0069766433895549823, 0.0068134136901736673, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.000806267598511844, 0.023894522010860429,
    0.023335471558241304, 0.022789500982609529, 0.022256304259381455,
    0.021735582523906651, 0.021227043903949847, 0.020730403356092247,
    0.02024538250596045, 0.01977170949219352, 0.019309118814060656,
    0.0188573511826441, 0.018416153375503896, 0.017985278094742926,
    0.0175644838283928, 0.017153534715042836, 0.016752200411636227,
    0.016360255964359364, 0.015977481682551895, 0.015603663015566861,
    0.015238590432511879, 0.014882059304803982, 0.014533869791472273,
    0.014193826727144096, 0.013861739512651973, 0.013537422008199936,
    0.013220692429029427, 0.012911373243526248, 0.012609291073711464,
    0.012314276598060487, 0.012026164456595854, 0.011744793158200508,
    0.011470004990099649, 0.011201645929460382, 0.01093956555705964,
    0.010683616972971996, 0.010433656714230067, 0.010189544674411412,
    0.0099511440251067989, 0.009718321139225862, 0.0094909455160971448,
    0.0092688897083205365, 0.00905202925033112, 0.00884024258863439,
    0.0086334110136737086, 0.008431418593291851, 0.00823415210774932,
    0.0080415009862629932, 0.0078533572450295783, 0.0076696154266990843,
    0.0074901725412644254, 0.0073149280083339907, 0.00714378360075485,
    0.0069766433895549823, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.000806267598511844, 0.023894522010860429, 0.023335471558241304,
    0.022789500982609529, 0.022256304259381455, 0.021735582523906651,
    0.021227043903949847, 0.020730403356092247, 0.02024538250596045,
    0.01977170949219352, 0.019309118814060656, 0.0188573511826441,
    0.018416153375503896, 0.017985278094742926, 0.0175644838283928,
    0.017153534715042836, 0.016752200411636227, 0.016360255964359364,
    0.015977481682551895, 0.015603663015566861, 0.015238590432511879,
    0.014882059304803982, 0.014533869791472273, 0.014193826727144096,
    0.013861739512651973, 0.013537422008199936, 0.013220692429029427,
    0.012911373243526248, 0.012609291073711464, 0.012314276598060487,
    0.012026164456595854, 0.011744793158200508, 0.011470004990099649,
    0.011201645929460382, 0.01093956555705964, 0.010683616972971996,
    0.010433656714230067, 0.010189544674411412, 0.0099511440251067989,
    0.009718321139225862, 0.0094909455160971448, 0.0092688897083205365,
    0.00905202925033112, 0.00884024258863439, 0.0086334110136737086,
    0.008431418593291851, 0.00823415210774932, 0.0080415009862629932,
    0.0078533572450295783, 0.0076696154266990843, 0.0074901725412644254,
    0.0073149280083339907, 0.00714378360075485, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.000806267598511844,
    0.023894522010860429, 0.023335471558241304, 0.022789500982609529,
    0.022256304259381455, 0.021735582523906651, 0.021227043903949847,
    0.020730403356092247, 0.02024538250596045, 0.01977170949219352,
    0.019309118814060656, 0.0188573511826441, 0.018416153375503896,
    0.017985278094742926, 0.0175644838283928, 0.017153534715042836,
    0.016752200411636227, 0.016360255964359364, 0.015977481682551895,
    0.015603663015566861, 0.015238590432511879, 0.014882059304803982,
    0.014533869791472273, 0.014193826727144096, 0.013861739512651973,
    0.013537422008199936, 0.013220692429029427, 0.012911373243526248,
    0.012609291073711464, 0.012314276598060487, 0.012026164456595854,
    0.011744793158200508, 0.011470004990099649, 0.011201645929460382,
    0.01093956555705964, 0.010683616972971996, 0.010433656714230067,
    0.010189544674411412, 0.0099511440251067989, 0.009718321139225862,
    0.0094909455160971448, 0.0092688897083205365, 0.00905202925033112,
    0.00884024258863439, 0.0086334110136737086, 0.008431418593291851,
    0.00823415210774932, 0.0080415009862629932, 0.0078533572450295783,
    0.0076696154266990843, 0.0074901725412644254, 0.0073149280083339907, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.000806267598511844, 0.023894522010860429, 0.023335471558241304,
    0.022789500982609529, 0.022256304259381455, 0.021735582523906651,
    0.021227043903949847, 0.020730403356092247, 0.02024538250596045,
    0.01977170949219352, 0.019309118814060656, 0.0188573511826441,
    0.018416153375503896, 0.017985278094742926, 0.0175644838283928,
    0.017153534715042836, 0.016752200411636227, 0.016360255964359364,
    0.015977481682551895, 0.015603663015566861, 0.015238590432511879,
    0.014882059304803982, 0.014533869791472273, 0.014193826727144096,
    0.013861739512651973, 0.013537422008199936, 0.013220692429029427,
    0.012911373243526248, 0.012609291073711464, 0.012314276598060487,
    0.012026164456595854, 0.011744793158200508, 0.011470004990099649,
    0.011201645929460382, 0.01093956555705964, 0.010683616972971996,
    0.010433656714230067, 0.010189544674411412, 0.0099511440251067989,
    0.009718321139225862, 0.0094909455160971448, 0.0092688897083205365,
    0.00905202925033112, 0.00884024258863439, 0.0086334110136737086,
    0.008431418593291851, 0.00823415210774932, 0.0080415009862629932,
    0.0078533572450295783, 0.0076696154266990843, 0.0074901725412644254, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.000806267598511844, 0.023894522010860429, 0.023335471558241304,
    0.022789500982609529, 0.022256304259381455, 0.021735582523906651,
    0.021227043903949847, 0.020730403356092247, 0.02024538250596045,
    0.01977170949219352, 0.019309118814060656, 0.0188573511826441,
    0.018416153375503896, 0.017985278094742926, 0.0175644838283928,
    0.017153534715042836, 0.016752200411636227, 0.016360255964359364,
    0.015977481682551895, 0.015603663015566861, 0.015238590432511879,
    0.014882059304803982, 0.014533869791472273, 0.014193826727144096,
    0.013861739512651973, 0.013537422008199936, 0.013220692429029427,
    0.012911373243526248, 0.012609291073711464, 0.012314276598060487,
    0.012026164456595854, 0.011744793158200508, 0.011470004990099649,
    0.011201645929460382, 0.01093956555705964, 0.010683616972971996,
    0.010433656714230067, 0.010189544674411412, 0.0099511440251067989,
    0.009718321139225862, 0.0094909455160971448, 0.0092688897083205365,
    0.00905202925033112, 0.00884024258863439, 0.0086334110136737086,
    0.008431418593291851, 0.00823415210774932, 0.0080415009862629932,
    0.0078533572450295783, 0.0076696154266990843, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.000806267598511844,
    0.023894522010860429, 0.023335471558241304, 0.022789500982609529,
    0.022256304259381455, 0.021735582523906651, 0.021227043903949847,
    0.020730403356092247, 0.02024538250596045, 0.01977170949219352,
    0.019309118814060656, 0.0188573511826441, 0.018416153375503896,
    0.017985278094742926, 0.0175644838283928, 0.017153534715042836,
    0.016752200411636227, 0.016360255964359364, 0.015977481682551895,
    0.015603663015566861, 0.015238590432511879, 0.014882059304803982,
    0.014533869791472273, 0.014193826727144096, 0.013861739512651973,
    0.013537422008199936, 0.013220692429029427, 0.012911373243526248,
    0.012609291073711464, 0.012314276598060487, 0.012026164456595854,
    0.011744793158200508, 0.011470004990099649, 0.011201645929460382,
    0.01093956555705964, 0.010683616972971996, 0.010433656714230067,
    0.010189544674411412, 0.0099511440251067989, 0.009718321139225862,
    0.0094909455160971448, 0.0092688897083205365, 0.00905202925033112,
    0.00884024258863439, 0.0086334110136737086, 0.008431418593291851,
    0.00823415210774932, 0.0080415009862629932, 0.0078533572450295783, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.000806267598511844, 0.023894522010860429, 0.023335471558241304,
    0.022789500982609529, 0.022256304259381455, 0.021735582523906651,
    0.021227043903949847, 0.020730403356092247, 0.02024538250596045,
    0.01977170949219352, 0.019309118814060656, 0.0188573511826441,
    0.018416153375503896, 0.017985278094742926, 0.0175644838283928,
    0.017153534715042836, 0.016752200411636227, 0.016360255964359364,
    0.015977481682551895, 0.015603663015566861, 0.015238590432511879,
    0.014882059304803982, 0.014533869791472273, 0.014193826727144096,
    0.013861739512651973, 0.013537422008199936, 0.013220692429029427,
    0.012911373243526248, 0.012609291073711464, 0.012314276598060487,
    0.012026164456595854, 0.011744793158200508, 0.011470004990099649,
    0.011201645929460382, 0.01093956555705964, 0.010683616972971996,
    0.010433656714230067, 0.010189544674411412, 0.0099511440251067989,
    0.009718321139225862, 0.0094909455160971448, 0.0092688897083205365,
    0.00905202925033112, 0.00884024258863439, 0.0086334110136737086,
    0.008431418593291851, 0.00823415210774932, 0.0080415009862629932, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.000806267598511844, 0.023894522010860429, 0.023335471558241304,
    0.022789500982609529, 0.022256304259381455, 0.021735582523906651,
    0.021227043903949847, 0.020730403356092247, 0.02024538250596045,
    0.01977170949219352, 0.019309118814060656, 0.0188573511826441,
    0.018416153375503896, 0.017985278094742926, 0.0175644838283928,
    0.017153534715042836, 0.016752200411636227, 0.016360255964359364,
    0.015977481682551895, 0.015603663015566861, 0.015238590432511879,
    0.014882059304803982, 0.014533869791472273, 0.014193826727144096,
    0.013861739512651973, 0.013537422008199936, 0.013220692429029427,
    0.012911373243526248, 0.012609291073711464, 0.012314276598060487,
    0.012026164456595854, 0.011744793158200508, 0.011470004990099649,
    0.011201645929460382, 0.01093956555705964, 0.010683616972971996,
    0.010433656714230067, 0.010189544674411412, 0.0099511440251067989,
    0.009718321139225862, 0.0094909455160971448, 0.0092688897083205365,
    0.00905202925033112, 0.00884024258863439, 0.0086334110136737086,
    0.008431418593291851, 0.00823415210774932, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.000806267598511844, 0.023894522010860429, 0.023335471558241304,
    0.022789500982609529, 0.022256304259381455, 0.021735582523906651,
    0.021227043903949847, 0.020730403356092247, 0.02024538250596045,
    0.01977170949219352, 0.019309118814060656, 0.0188573511826441,
    0.018416153375503896, 0.017985278094742926, 0.0175644838283928,
    0.017153534715042836, 0.016752200411636227, 0.016360255964359364,
    0.015977481682551895, 0.015603663015566861, 0.015238590432511879,
    0.014882059304803982, 0.014533869791472273, 0.014193826727144096,
    0.013861739512651973, 0.013537422008199936, 0.013220692429029427,
    0.012911373243526248, 0.012609291073711464, 0.012314276598060487,
    0.012026164456595854, 0.011744793158200508, 0.011470004990099649,
    0.011201645929460382, 0.01093956555705964, 0.010683616972971996,
    0.010433656714230067, 0.010189544674411412, 0.0099511440251067989,
    0.009718321139225862, 0.0094909455160971448, 0.0092688897083205365,
    0.00905202925033112, 0.00884024258863439, 0.0086334110136737086,
    0.008431418593291851, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.000806267598511844,
    0.023894522010860429, 0.023335471558241304, 0.022789500982609529,
    0.022256304259381455, 0.021735582523906651, 0.021227043903949847,
    0.020730403356092247, 0.02024538250596045, 0.01977170949219352,
    0.019309118814060656, 0.0188573511826441, 0.018416153375503896,
    0.017985278094742926, 0.0175644838283928, 0.017153534715042836,
    0.016752200411636227, 0.016360255964359364, 0.015977481682551895,
    0.015603663015566861, 0.015238590432511879, 0.014882059304803982,
    0.014533869791472273, 0.014193826727144096, 0.013861739512651973,
    0.013537422008199936, 0.013220692429029427, 0.012911373243526248,
    0.012609291073711464, 0.012314276598060487, 0.012026164456595854,
    0.011744793158200508, 0.011470004990099649, 0.011201645929460382,
    0.01093956555705964, 0.010683616972971996, 0.010433656714230067,
    0.010189544674411412, 0.0099511440251067989, 0.009718321139225862,
    0.0094909455160971448, 0.0092688897083205365, 0.00905202925033112,
    0.00884024258863439, 0.0086334110136737086, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.000806267598511844, 0.023894522010860429, 0.023335471558241304,
    0.022789500982609529, 0.022256304259381455, 0.021735582523906651,
    0.021227043903949847, 0.020730403356092247, 0.02024538250596045,
    0.01977170949219352, 0.019309118814060656, 0.0188573511826441,
    0.018416153375503896, 0.017985278094742926, 0.0175644838283928,
    0.017153534715042836, 0.016752200411636227, 0.016360255964359364,
    0.015977481682551895, 0.015603663015566861, 0.015238590432511879,
    0.014882059304803982, 0.014533869791472273, 0.014193826727144096,
    0.013861739512651973, 0.013537422008199936, 0.013220692429029427,
    0.012911373243526248, 0.012609291073711464, 0.012314276598060487,
    0.012026164456595854, 0.011744793158200508, 0.011470004990099649,
    0.011201645929460382, 0.01093956555705964, 0.010683616972971996,
    0.010433656714230067, 0.010189544674411412, 0.0099511440251067989,
    0.009718321139225862, 0.0094909455160971448, 0.0092688897083205365,
    0.00905202925033112, 0.00884024258863439, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.000806267598511844, 0.023894522010860429, 0.023335471558241304,
    0.022789500982609529, 0.022256304259381455, 0.021735582523906651,
    0.021227043903949847, 0.020730403356092247, 0.02024538250596045,
    0.01977170949219352, 0.019309118814060656, 0.0188573511826441,
    0.018416153375503896, 0.017985278094742926, 0.0175644838283928,
    0.017153534715042836, 0.016752200411636227, 0.016360255964359364,
    0.015977481682551895, 0.015603663015566861, 0.015238590432511879,
    0.014882059304803982, 0.014533869791472273, 0.014193826727144096,
    0.013861739512651973, 0.013537422008199936, 0.013220692429029427,
    0.012911373243526248, 0.012609291073711464, 0.012314276598060487,
    0.012026164456595854, 0.011744793158200508, 0.011470004990099649,
    0.011201645929460382, 0.01093956555705964, 0.010683616972971996,
    0.010433656714230067, 0.010189544674411412, 0.0099511440251067989,
    0.009718321139225862, 0.0094909455160971448, 0.0092688897083205365,
    0.00905202925033112, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.000806267598511844, 0.023894522010860429, 0.023335471558241304,
    0.022789500982609529, 0.022256304259381455, 0.021735582523906651,
    0.021227043903949847, 0.020730403356092247, 0.02024538250596045,
    0.01977170949219352, 0.019309118814060656, 0.0188573511826441,
    0.018416153375503896, 0.017985278094742926, 0.0175644838283928,
    0.017153534715042836, 0.016752200411636227, 0.016360255964359364,
    0.015977481682551895, 0.015603663015566861, 0.015238590432511879,
    0.014882059304803982, 0.014533869791472273, 0.014193826727144096,
    0.013861739512651973, 0.013537422008199936, 0.013220692429029427,
    0.012911373243526248, 0.012609291073711464, 0.012314276598060487,
    0.012026164456595854, 0.011744793158200508, 0.011470004990099649,
    0.011201645929460382, 0.01093956555705964, 0.010683616972971996,
    0.010433656714230067, 0.010189544674411412, 0.0099511440251067989,
    0.009718321139225862, 0.0094909455160971448, 0.0092688897083205365, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.000806267598511844,
    0.023894522010860429, 0.023335471558241304, 0.022789500982609529,
    0.022256304259381455, 0.021735582523906651, 0.021227043903949847,
    0.020730403356092247, 0.02024538250596045, 0.01977170949219352,
    0.019309118814060656, 0.0188573511826441, 0.018416153375503896,
    0.017985278094742926, 0.0175644838283928, 0.017153534715042836,
    0.016752200411636227, 0.016360255964359364, 0.015977481682551895,
    0.015603663015566861, 0.015238590432511879, 0.014882059304803982,
    0.014533869791472273, 0.014193826727144096, 0.013861739512651973,
    0.013537422008199936, 0.013220692429029427, 0.012911373243526248,
    0.012609291073711464, 0.012314276598060487, 0.012026164456595854,
    0.011744793158200508, 0.011470004990099649, 0.011201645929460382,
    0.01093956555705964, 0.010683616972971996, 0.010433656714230067,
    0.010189544674411412, 0.0099511440251067989, 0.009718321139225862,
    0.0094909455160971448, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.000806267598511844, 0.023894522010860429, 0.023335471558241304,
    0.022789500982609529, 0.022256304259381455, 0.021735582523906651,
    0.021227043903949847, 0.020730403356092247, 0.02024538250596045,
    0.01977170949219352, 0.019309118814060656, 0.0188573511826441,
    0.018416153375503896, 0.017985278094742926, 0.0175644838283928,
    0.017153534715042836, 0.016752200411636227, 0.016360255964359364,
    0.015977481682551895, 0.015603663015566861, 0.015238590432511879,
    0.014882059304803982, 0.014533869791472273, 0.014193826727144096,
    0.013861739512651973, 0.013537422008199936, 0.013220692429029427,
    0.012911373243526248, 0.012609291073711464, 0.012314276598060487,
    0.012026164456595854, 0.011744793158200508, 0.011470004990099649,
    0.011201645929460382, 0.01093956555705964, 0.010683616972971996,
    0.010433656714230067, 0.010189544674411412, 0.0099511440251067989,
    0.009718321139225862, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.000806267598511844, 0.023894522010860429, 0.023335471558241304,
    0.022789500982609529, 0.022256304259381455, 0.021735582523906651,
    0.021227043903949847, 0.020730403356092247, 0.02024538250596045,
    0.01977170949219352, 0.019309118814060656, 0.0188573511826441,
    0.018416153375503896, 0.017985278094742926, 0.0175644838283928,
    0.017153534715042836, 0.016752200411636227, 0.016360255964359364,
    0.015977481682551895, 0.015603663015566861, 0.015238590432511879,
    0.014882059304803982, 0.014533869791472273, 0.014193826727144096,
    0.013861739512651973, 0.013537422008199936, 0.013220692429029427,
    0.012911373243526248, 0.012609291073711464, 0.012314276598060487,
    0.012026164456595854, 0.011744793158200508, 0.011470004990099649,
    0.011201645929460382, 0.01093956555705964, 0.010683616972971996,
    0.010433656714230067, 0.010189544674411412, 0.0099511440251067989, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.000806267598511844,
    0.023894522010860429, 0.023335471558241304, 0.022789500982609529,
    0.022256304259381455, 0.021735582523906651, 0.021227043903949847,
    0.020730403356092247, 0.02024538250596045, 0.01977170949219352,
    0.019309118814060656, 0.0188573511826441, 0.018416153375503896,
    0.017985278094742926, 0.0175644838283928, 0.017153534715042836,
    0.016752200411636227, 0.016360255964359364, 0.015977481682551895,
    0.015603663015566861, 0.015238590432511879, 0.014882059304803982,
    0.014533869791472273, 0.014193826727144096, 0.013861739512651973,
    0.013537422008199936, 0.013220692429029427, 0.012911373243526248,
    0.012609291073711464, 0.012314276598060487, 0.012026164456595854,
    0.011744793158200508, 0.011470004990099649, 0.011201645929460382,
    0.01093956555705964, 0.010683616972971996, 0.010433656714230067,
    0.010189544674411412, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.000806267598511844, 0.023894522010860429, 0.023335471558241304,
    0.022789500982609529, 0.022256304259381455, 0.021735582523906651,
    0.021227043903949847, 0.020730403356092247, 0.02024538250596045,
    0.01977170949219352, 0.019309118814060656, 0.0188573511826441,
    0.018416153375503896, 0.017985278094742926, 0.0175644838283928,
    0.017153534715042836, 0.016752200411636227, 0.016360255964359364,
    0.015977481682551895, 0.015603663015566861, 0.015238590432511879,
    0.014882059304803982, 0.014533869791472273, 0.014193826727144096,
    0.013861739512651973, 0.013537422008199936, 0.013220692429029427,
    0.012911373243526248, 0.012609291073711464, 0.012314276598060487,
    0.012026164456595854, 0.011744793158200508, 0.011470004990099649,
    0.011201645929460382, 0.01093956555705964, 0.010683616972971996,
    0.010433656714230067, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.000806267598511844, 0.023894522010860429,
    0.023335471558241304, 0.022789500982609529, 0.022256304259381455,
    0.021735582523906651, 0.021227043903949847, 0.020730403356092247,
    0.02024538250596045, 0.01977170949219352, 0.019309118814060656,
    0.0188573511826441, 0.018416153375503896, 0.017985278094742926,
    0.0175644838283928, 0.017153534715042836, 0.016752200411636227,
    0.016360255964359364, 0.015977481682551895, 0.015603663015566861,
    0.015238590432511879, 0.014882059304803982, 0.014533869791472273,
    0.014193826727144096, 0.013861739512651973, 0.013537422008199936,
    0.013220692429029427, 0.012911373243526248, 0.012609291073711464,
    0.012314276598060487, 0.012026164456595854, 0.011744793158200508,
    0.011470004990099649, 0.011201645929460382, 0.01093956555705964,
    0.010683616972971996, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.000806267598511844, 0.023894522010860429,
    0.023335471558241304, 0.022789500982609529, 0.022256304259381455,
    0.021735582523906651, 0.021227043903949847, 0.020730403356092247,
    0.02024538250596045, 0.01977170949219352, 0.019309118814060656,
    0.0188573511826441, 0.018416153375503896, 0.017985278094742926,
    0.0175644838283928, 0.017153534715042836, 0.016752200411636227,
    0.016360255964359364, 0.015977481682551895, 0.015603663015566861,
    0.015238590432511879, 0.014882059304803982, 0.014533869791472273,
    0.014193826727144096, 0.013861739512651973, 0.013537422008199936,
    0.013220692429029427, 0.012911373243526248, 0.012609291073711464,
    0.012314276598060487, 0.012026164456595854, 0.011744793158200508,
    0.011470004990099649, 0.011201645929460382, 0.01093956555705964, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.000806267598511844, 0.023894522010860429, 0.023335471558241304,
    0.022789500982609529, 0.022256304259381455, 0.021735582523906651,
    0.021227043903949847, 0.020730403356092247, 0.02024538250596045,
    0.01977170949219352, 0.019309118814060656, 0.0188573511826441,
    0.018416153375503896, 0.017985278094742926, 0.0175644838283928,
    0.017153534715042836, 0.016752200411636227, 0.016360255964359364,
    0.015977481682551895, 0.015603663015566861, 0.015238590432511879,
    0.014882059304803982, 0.014533869791472273, 0.014193826727144096,
    0.013861739512651973, 0.013537422008199936, 0.013220692429029427,
    0.012911373243526248, 0.012609291073711464, 0.012314276598060487,
    0.012026164456595854, 0.011744793158200508, 0.011470004990099649,
    0.011201645929460382, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.000806267598511844, 0.023894522010860429,
    0.023335471558241304, 0.022789500982609529, 0.022256304259381455,
    0.021735582523906651, 0.021227043903949847, 0.020730403356092247,
    0.02024538250596045, 0.01977170949219352, 0.019309118814060656,
    0.0188573511826441, 0.018416153375503896, 0.017985278094742926,
    0.0175644838283928, 0.017153534715042836, 0.016752200411636227,
    0.016360255964359364, 0.015977481682551895, 0.015603663015566861,
    0.015238590432511879, 0.014882059304803982, 0.014533869791472273,
    0.014193826727144096, 0.013861739512651973, 0.013537422008199936,
    0.013220692429029427, 0.012911373243526248, 0.012609291073711464,
    0.012314276598060487, 0.012026164456595854, 0.011744793158200508,
    0.011470004990099649, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.000806267598511844,
    0.023894522010860429, 0.023335471558241304, 0.022789500982609529,
    0.022256304259381455, 0.021735582523906651, 0.021227043903949847,
    0.020730403356092247, 0.02024538250596045, 0.01977170949219352,
    0.019309118814060656, 0.0188573511826441, 0.018416153375503896,
    0.017985278094742926, 0.0175644838283928, 0.017153534715042836,
    0.016752200411636227, 0.016360255964359364, 0.015977481682551895,
    0.015603663015566861, 0.015238590432511879, 0.014882059304803982,
    0.014533869791472273, 0.014193826727144096, 0.013861739512651973,
    0.013537422008199936, 0.013220692429029427, 0.012911373243526248,
    0.012609291073711464, 0.012314276598060487, 0.012026164456595854,
    0.011744793158200508, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.000806267598511844,
    0.023894522010860429, 0.023335471558241304, 0.022789500982609529,
    0.022256304259381455, 0.021735582523906651, 0.021227043903949847,
    0.020730403356092247, 0.02024538250596045, 0.01977170949219352,
    0.019309118814060656, 0.0188573511826441, 0.018416153375503896,
    0.017985278094742926, 0.0175644838283928, 0.017153534715042836,
    0.016752200411636227, 0.016360255964359364, 0.015977481682551895,
    0.015603663015566861, 0.015238590432511879, 0.014882059304803982,
    0.014533869791472273, 0.014193826727144096, 0.013861739512651973,
    0.013537422008199936, 0.013220692429029427, 0.012911373243526248,
    0.012609291073711464, 0.012314276598060487, 0.012026164456595854, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.000806267598511844, 0.023894522010860429,
    0.023335471558241304, 0.022789500982609529, 0.022256304259381455,
    0.021735582523906651, 0.021227043903949847, 0.020730403356092247,
    0.02024538250596045, 0.01977170949219352, 0.019309118814060656,
    0.0188573511826441, 0.018416153375503896, 0.017985278094742926,
    0.0175644838283928, 0.017153534715042836, 0.016752200411636227,
    0.016360255964359364, 0.015977481682551895, 0.015603663015566861,
    0.015238590432511879, 0.014882059304803982, 0.014533869791472273,
    0.014193826727144096, 0.013861739512651973, 0.013537422008199936,
    0.013220692429029427, 0.012911373243526248, 0.012609291073711464,
    0.012314276598060487, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.000806267598511844,
    0.023894522010860429, 0.023335471558241304, 0.022789500982609529,
    0.022256304259381455, 0.021735582523906651, 0.021227043903949847,
    0.020730403356092247, 0.02024538250596045, 0.01977170949219352,
    0.019309118814060656, 0.0188573511826441, 0.018416153375503896,
    0.017985278094742926, 0.0175644838283928, 0.017153534715042836,
    0.016752200411636227, 0.016360255964359364, 0.015977481682551895,
    0.015603663015566861, 0.015238590432511879, 0.014882059304803982,
    0.014533869791472273, 0.014193826727144096, 0.013861739512651973,
    0.013537422008199936, 0.013220692429029427, 0.012911373243526248,
    0.012609291073711464, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.000806267598511844,
    0.023894522010860429, 0.023335471558241304, 0.022789500982609529,
    0.022256304259381455, 0.021735582523906651, 0.021227043903949847,
    0.020730403356092247, 0.02024538250596045, 0.01977170949219352,
    0.019309118814060656, 0.0188573511826441, 0.018416153375503896,
    0.017985278094742926, 0.0175644838283928, 0.017153534715042836,
    0.016752200411636227, 0.016360255964359364, 0.015977481682551895,
    0.015603663015566861, 0.015238590432511879, 0.014882059304803982,
    0.014533869791472273, 0.014193826727144096, 0.013861739512651973,
    0.013537422008199936, 0.013220692429029427, 0.012911373243526248, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.000806267598511844, 0.023894522010860429,
    0.023335471558241304, 0.022789500982609529, 0.022256304259381455,
    0.021735582523906651, 0.021227043903949847, 0.020730403356092247,
    0.02024538250596045, 0.01977170949219352, 0.019309118814060656,
    0.0188573511826441, 0.018416153375503896, 0.017985278094742926,
    0.0175644838283928, 0.017153534715042836, 0.016752200411636227,
    0.016360255964359364, 0.015977481682551895, 0.015603663015566861,
    0.015238590432511879, 0.014882059304803982, 0.014533869791472273,
    0.014193826727144096, 0.013861739512651973, 0.013537422008199936,
    0.013220692429029427, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.000806267598511844, 0.023894522010860429, 0.023335471558241304,
    0.022789500982609529, 0.022256304259381455, 0.021735582523906651,
    0.021227043903949847, 0.020730403356092247, 0.02024538250596045,
    0.01977170949219352, 0.019309118814060656, 0.0188573511826441,
    0.018416153375503896, 0.017985278094742926, 0.0175644838283928,
    0.017153534715042836, 0.016752200411636227, 0.016360255964359364,
    0.015977481682551895, 0.015603663015566861, 0.015238590432511879,
    0.014882059304803982, 0.014533869791472273, 0.014193826727144096,
    0.013861739512651973, 0.013537422008199936, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.000806267598511844, 0.023894522010860429,
    0.023335471558241304, 0.022789500982609529, 0.022256304259381455,
    0.021735582523906651, 0.021227043903949847, 0.020730403356092247,
    0.02024538250596045, 0.01977170949219352, 0.019309118814060656,
    0.0188573511826441, 0.018416153375503896, 0.017985278094742926,
    0.0175644838283928, 0.017153534715042836, 0.016752200411636227,
    0.016360255964359364, 0.015977481682551895, 0.015603663015566861,
    0.015238590432511879, 0.014882059304803982, 0.014533869791472273,
    0.014193826727144096, 0.013861739512651973, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.000806267598511844, 0.023894522010860429,
    0.023335471558241304, 0.022789500982609529, 0.022256304259381455,
    0.021735582523906651, 0.021227043903949847, 0.020730403356092247,
    0.02024538250596045, 0.01977170949219352, 0.019309118814060656,
    0.0188573511826441, 0.018416153375503896, 0.017985278094742926,
    0.0175644838283928, 0.017153534715042836, 0.016752200411636227,
    0.016360255964359364, 0.015977481682551895, 0.015603663015566861,
    0.015238590432511879, 0.014882059304803982, 0.014533869791472273,
    0.014193826727144096, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.000806267598511844, 0.023894522010860429, 0.023335471558241304,
    0.022789500982609529, 0.022256304259381455, 0.021735582523906651,
    0.021227043903949847, 0.020730403356092247, 0.02024538250596045,
    0.01977170949219352, 0.019309118814060656, 0.0188573511826441,
    0.018416153375503896, 0.017985278094742926, 0.0175644838283928,
    0.017153534715042836, 0.016752200411636227, 0.016360255964359364,
    0.015977481682551895, 0.015603663015566861, 0.015238590432511879,
    0.014882059304803982, 0.014533869791472273, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.000806267598511844,
    0.023894522010860429, 0.023335471558241304, 0.022789500982609529,
    0.022256304259381455, 0.021735582523906651, 0.021227043903949847,
    0.020730403356092247, 0.02024538250596045, 0.01977170949219352,
    0.019309118814060656, 0.0188573511826441, 0.018416153375503896,
    0.017985278094742926, 0.0175644838283928, 0.017153534715042836,
    0.016752200411636227, 0.016360255964359364, 0.015977481682551895,
    0.015603663015566861, 0.015238590432511879, 0.014882059304803982, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.000806267598511844, 0.023894522010860429, 0.023335471558241304,
    0.022789500982609529, 0.022256304259381455, 0.021735582523906651,
    0.021227043903949847, 0.020730403356092247, 0.02024538250596045,
    0.01977170949219352, 0.019309118814060656, 0.0188573511826441,
    0.018416153375503896, 0.017985278094742926, 0.0175644838283928,
    0.017153534715042836, 0.016752200411636227, 0.016360255964359364,
    0.015977481682551895, 0.015603663015566861, 0.015238590432511879, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.000806267598511844, 0.023894522010860429, 0.023335471558241304,
    0.022789500982609529, 0.022256304259381455, 0.021735582523906651,
    0.021227043903949847, 0.020730403356092247, 0.02024538250596045,
    0.01977170949219352, 0.019309118814060656, 0.0188573511826441,
    0.018416153375503896, 0.017985278094742926, 0.0175644838283928,
    0.017153534715042836, 0.016752200411636227, 0.016360255964359364,
    0.015977481682551895, 0.015603663015566861, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.000806267598511844,
    0.023894522010860429, 0.023335471558241304, 0.022789500982609529,
    0.022256304259381455, 0.021735582523906651, 0.021227043903949847,
    0.020730403356092247, 0.02024538250596045, 0.01977170949219352,
    0.019309118814060656, 0.0188573511826441, 0.018416153375503896,
    0.017985278094742926, 0.0175644838283928, 0.017153534715042836,
    0.016752200411636227, 0.016360255964359364, 0.015977481682551895, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.000806267598511844, 0.023894522010860429, 0.023335471558241304,
    0.022789500982609529, 0.022256304259381455, 0.021735582523906651,
    0.021227043903949847, 0.020730403356092247, 0.02024538250596045,
    0.01977170949219352, 0.019309118814060656, 0.0188573511826441,
    0.018416153375503896, 0.017985278094742926, 0.0175644838283928,
    0.017153534715042836, 0.016752200411636227, 0.016360255964359364, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.000806267598511844, 0.023894522010860429, 0.023335471558241304,
    0.022789500982609529, 0.022256304259381455, 0.021735582523906651,
    0.021227043903949847, 0.020730403356092247, 0.02024538250596045,
    0.01977170949219352, 0.019309118814060656, 0.0188573511826441,
    0.018416153375503896, 0.017985278094742926, 0.0175644838283928,
    0.017153534715042836, 0.016752200411636227, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.000806267598511844, 0.023894522010860429, 0.023335471558241304,
    0.022789500982609529, 0.022256304259381455, 0.021735582523906651,
    0.021227043903949847, 0.020730403356092247, 0.02024538250596045,
    0.01977170949219352, 0.019309118814060656, 0.0188573511826441,
    0.018416153375503896, 0.017985278094742926, 0.0175644838283928,
    0.017153534715042836, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.000806267598511844,
    0.023894522010860429, 0.023335471558241304, 0.022789500982609529,
    0.022256304259381455, 0.021735582523906651, 0.021227043903949847,
    0.020730403356092247, 0.02024538250596045, 0.01977170949219352,
    0.019309118814060656, 0.0188573511826441, 0.018416153375503896,
    0.017985278094742926, 0.0175644838283928, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.000806267598511844, 0.023894522010860429, 0.023335471558241304,
    0.022789500982609529, 0.022256304259381455, 0.021735582523906651,
    0.021227043903949847, 0.020730403356092247, 0.02024538250596045,
    0.01977170949219352, 0.019309118814060656, 0.0188573511826441,
    0.018416153375503896, 0.017985278094742926, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.000806267598511844, 0.023894522010860429, 0.023335471558241304,
    0.022789500982609529, 0.022256304259381455, 0.021735582523906651,
    0.021227043903949847, 0.020730403356092247, 0.02024538250596045,
    0.01977170949219352, 0.019309118814060656, 0.0188573511826441,
    0.018416153375503896, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.000806267598511844, 0.023894522010860429, 0.023335471558241304,
    0.022789500982609529, 0.022256304259381455, 0.021735582523906651,
    0.021227043903949847, 0.020730403356092247, 0.02024538250596045,
    0.01977170949219352, 0.019309118814060656, 0.0188573511826441, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.000806267598511844, 0.023894522010860429,
    0.023335471558241304, 0.022789500982609529, 0.022256304259381455,
    0.021735582523906651, 0.021227043903949847, 0.020730403356092247,
    0.02024538250596045, 0.01977170949219352, 0.019309118814060656, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.000806267598511844,
    0.023894522010860429, 0.023335471558241304, 0.022789500982609529,
    0.022256304259381455, 0.021735582523906651, 0.021227043903949847,
    0.020730403356092247, 0.02024538250596045, 0.01977170949219352, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.000806267598511844,
    0.023894522010860429, 0.023335471558241304, 0.022789500982609529,
    0.022256304259381455, 0.021735582523906651, 0.021227043903949847,
    0.020730403356092247, 0.02024538250596045, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.000806267598511844, 0.023894522010860429,
    0.023335471558241304, 0.022789500982609529, 0.022256304259381455,
    0.021735582523906651, 0.021227043903949847, 0.020730403356092247, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.000806267598511844,
    0.023894522010860429, 0.023335471558241304, 0.022789500982609529,
    0.022256304259381455, 0.021735582523906651, 0.021227043903949847, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.000806267598511844, 0.023894522010860429, 0.023335471558241304,
    0.022789500982609529, 0.022256304259381455, 0.021735582523906651, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.000806267598511844, 0.023894522010860429, 0.023335471558241304,
    0.022789500982609529, 0.022256304259381455, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.000806267598511844,
    0.023894522010860429, 0.023335471558241304, 0.022789500982609529, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.000806267598511844, 0.023894522010860429, 0.023335471558241304, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.000806267598511844, 0.023894522010860429, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.000806267598511844, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0 };

  static const real_T c_a[16] = { 0.852455585554066, 0.4265123202653045, 0.0,
    0.0, 0.25527703446737615, 0.12772372206390006, 0.0, 0.0, 0.0, 0.0,
    0.97660340506644039, 0.0, 0.0, 0.0, 0.0, 1.0 };

  static const real_T d_a[4] = { 3.2441662774097004, 1.5687690986716871, 0.0,
    0.0 };

  static const real_T e_a[8] = { 0.0, 0.0, 27.805655775074666, 0.0, 0.0, 0.0,
    0.0, 0.0 };

  static const real_T f_a[4] = { 2.2601766028974559E-5, 1.1308426895749486E-5,
    0.00036491168483683529, 0.99889096040184588 };

  real_T rtb_useq[101];
  int32_T i;
  real_T xk[4];
  real_T tmp[2];
  real_T tmp_0[8];
  real_T tmp_1[2];
  real_T tmp_2[404];
  real_T tmp_3[100];
  real_T f[4];
  real_T tmp_4[100];

  /* RateTransition: '<Root>/Rate Transition2' */
  udp_conn_B.RateTransition2 = udp_conn_B.Sum1;

  /* Constant: '<Root>/Constant2' */
  udp_conn_B.Constant2 = udp_conn_P.Constant2_Value;

  /* RateTransition: '<Root>/Rate Transition1' */
  udp_conn_B.RateTransition1 = udp_conn_B.Sum;

  /* Constant: '<Root>/tref3' */
  udp_conn_B.tref3 = udp_conn_P.tref3_Value;

  /* Constant: '<Root>/tref4' */
  udp_conn_B.tref4 = udp_conn_P.tref4_Value;

  /* Constant: '<Root>/tref2' */
  udp_conn_B.tref2 = udp_conn_P.tref2_Value;

  /* MATLAB Function: '<S9>/optimizer' incorporates:
   *  Math: '<S9>/Math Function'
   *  Math: '<S9>/Math Function1'
   *  Math: '<S9>/Math Function2'
   *  Memory: '<S9>/Memory'
   *  Memory: '<S9>/last_x'
   *  UnitDelay: '<S9>/last_mv'
   */
  /* MATLAB Function 'MPC Controller/MPC/optimizer': '<S28>:1' */
  /* '<S28>:1:161' */
  /* '<S28>:1:145' */
  /* '<S28>:1:143' */
  /* '<S28>:1:140' */
  /* '<S28>:1:139' */
  /* '<S28>:1:82' */
  /* '<S28>:1:80' */
  /* '<S28>:1:78' */
  /* '<S28>:1:53' */
  for (i = 0; i < 202; i++) {
    vseq[i] = 0.0;
  }

  for (i = 0; i < 101; i++) {
    vseq[(i * (int32_T)udp_conn_nv + (int32_T)udp_conn_nv) - 1] = 1.0;
  }

  for (i = 0; i < 100; i++) {
    rseq[i] = udp_conn_B.Constant2 * udp_conn_RYscale;
  }

  for (i = 0; i < 101; i++) {
    vseq[i * (int32_T)udp_conn_nv] = udp_conn_RMDscale *
      udp_conn_B.RateTransition2;
  }

  /* '<S28>:1:58' */
  /* '<S28>:1:68' */
  /* '<S28>:1:75' */
  /* '<S28>:1:78' */
  /* '<S28>:1:80' */
  /* '<S28>:1:81' */
  y_innov = udp_conn_B.RateTransition1 * udp_conn_RYscale -
    ((((0.0039427191263614976 * udp_conn_DW.last_x_PreviousInput[0] + 0.0 *
        udp_conn_DW.last_x_PreviousInput[1]) + 0.000859340351622988 *
       udp_conn_DW.last_x_PreviousInput[2]) + udp_conn_DW.last_x_PreviousInput[3])
     + (0.000806267598511844 * vseq[0] + 0.0 * vseq[1]));

  /* '<S28>:1:82' */
  /* '<S28>:1:137' */
  xk[0] = 2.3259704182862089E-5 * y_innov + udp_conn_DW.last_x_PreviousInput[0];
  xk[1] = 1.0866239047888191E-5 * y_innov + udp_conn_DW.last_x_PreviousInput[1];
  xk[2] = 0.00034820391500277689 * y_innov + udp_conn_DW.last_x_PreviousInput[2];
  xk[3] = 0.99889096040184588 * y_innov + udp_conn_DW.last_x_PreviousInput[3];
  tmp[0] = 1.0;
  tmp[1] = 0.0;
  for (i = 0; i < 8; i++) {
    tmp_0[i] = 0.0;
  }

  tmp_1[0] = -1.0;
  tmp_1[1] = 1.0;
  for (i = 0; i < 404; i++) {
    tmp_2[i] = 0.0;
  }

  for (i = 0; i < 100; i++) {
    tmp_3[i] = 0.0;
    tmp_4[i] = 1.0;
  }

  f[0] = 10397.548967344635;
  f[1] = 0.0;
  f[2] = 0.0;
  f[3] = 100000.0;
  udp_conn_mpcblock_optimizer(rseq, vseq, xk, udp_conn_DW.last_mv_DSTATE,
    udp_conn_DW.Memory_PreviousInput, tmp, tmp_0, tmp_1, tmp_2, tmp_3,
    udp_conn_uoff, f, h, udp_conn_B.tref3, udp_conn_B.tref4, udp_conn_B.tref2, k,
    l, l, m, n, tmp_4, &u, rtb_useq, &status, udp_conn_B.iAout);

  /* '<S28>:1:137' */
  udp_conn_B.u = u;

  /* Gain: '<S9>/umin_scale1' */
  /* '<S28>:1:137' */
  /* '<S28>:1:153' */
  /* '<S28>:1:154' */
  /* '<S28>:1:161' */
  /* '<S28>:1:163' */
  /* '<S28>:1:166' */
  udp_conn_B.umin_scale1 = udp_conn_P.umin_scale1_Gain * udp_conn_B.u;
  for (i = 0; i < 4; i++) {
    /* MATLAB Function: '<S9>/optimizer' incorporates:
     *  Memory: '<S9>/last_x'
     */
    udp_conn_B.xk1[i] = (((((c_a[i + 4] * udp_conn_DW.last_x_PreviousInput[1] +
      c_a[i] * udp_conn_DW.last_x_PreviousInput[0]) + c_a[i + 8] *
      udp_conn_DW.last_x_PreviousInput[2]) + c_a[i + 12] *
      udp_conn_DW.last_x_PreviousInput[3]) + d_a[i] * u) + (0.0 * vseq[1] +
      e_a[i] * vseq[0])) + f_a[i] * y_innov;

    /* RateTransition: '<Root>/Rate Transition3' */
    udp_conn_B.time_UTC1_a[i] = udp_conn_B.time_UTC1[i];
  }

  /* RateTransition: '<Root>/Rate Transition4' */
  udp_conn_B.RateTransition4 = udp_conn_B.Sum;

  /* RateTransition: '<Root>/Rate Transition6' */
  udp_conn_B.RateTransition6 = udp_conn_B.Sum1;
}

/* Model update function for TID2 */
void udp_conn_update2(void)            /* Sample time: [30.0s, 0.0s] */
{
  /* Update for Memory: '<S9>/last_x' */
  udp_conn_DW.last_x_PreviousInput[0] = udp_conn_B.xk1[0];
  udp_conn_DW.last_x_PreviousInput[1] = udp_conn_B.xk1[1];
  udp_conn_DW.last_x_PreviousInput[2] = udp_conn_B.xk1[2];
  udp_conn_DW.last_x_PreviousInput[3] = udp_conn_B.xk1[3];

  /* Update for UnitDelay: '<S9>/last_mv' */
  udp_conn_DW.last_mv_DSTATE = udp_conn_B.u;

  /* Update for Memory: '<S9>/Memory' */
  udp_conn_DW.Memory_PreviousInput[0] = udp_conn_B.iAout[0];
  udp_conn_DW.Memory_PreviousInput[1] = udp_conn_B.iAout[1];

  /* Update absolute time */
  /* The "clockTick2" counts the number of times the code of this task has
   * been executed. The absolute time is the multiplication of "clockTick2"
   * and "Timing.stepSize2". Size of "clockTick2" ensures timer will not
   * overflow during the application lifespan selected.
   * Timer of this task consists of two 32 bit unsigned integers.
   * The two integers represent the low bits Timing.clockTick2 and the high bits
   * Timing.clockTickH2. When the low bit overflows to 0, the high bits increment.
   */
  if (!(++udp_conn_M->Timing.clockTick2)) {
    ++udp_conn_M->Timing.clockTickH2;
  }

  udp_conn_M->Timing.t[2] = udp_conn_M->Timing.clockTick2 *
    udp_conn_M->Timing.stepSize2 + udp_conn_M->Timing.clockTickH2 *
    udp_conn_M->Timing.stepSize2 * 4294967296.0;
}

/* Model output function for TID3 */
void udp_conn_output3(void)            /* Sample time: [300.0s, 0.0s] */
{
  /* RateTransition: '<Root>/Rate Transition9' */
  udp_conn_B.time_UTC1_c[0] = udp_conn_B.time_UTC1[0];
  udp_conn_B.time_UTC1_c[1] = udp_conn_B.time_UTC1[1];
  udp_conn_B.time_UTC1_c[2] = udp_conn_B.time_UTC1[2];
  udp_conn_B.time_UTC1_c[3] = udp_conn_B.time_UTC1[3];
}

/* Model update function for TID3 */
void udp_conn_update3(void)            /* Sample time: [300.0s, 0.0s] */
{
  /* Update absolute time */
  /* The "clockTick3" counts the number of times the code of this task has
   * been executed. The absolute time is the multiplication of "clockTick3"
   * and "Timing.stepSize3". Size of "clockTick3" ensures timer will not
   * overflow during the application lifespan selected.
   * Timer of this task consists of two 32 bit unsigned integers.
   * The two integers represent the low bits Timing.clockTick3 and the high bits
   * Timing.clockTickH3. When the low bit overflows to 0, the high bits increment.
   */
  if (!(++udp_conn_M->Timing.clockTick3)) {
    ++udp_conn_M->Timing.clockTickH3;
  }

  udp_conn_M->Timing.t[3] = udp_conn_M->Timing.clockTick3 *
    udp_conn_M->Timing.stepSize3 + udp_conn_M->Timing.clockTickH3 *
    udp_conn_M->Timing.stepSize3 * 4294967296.0;
}

/* Model output wrapper function for compatibility with a static main program */
void udp_conn_output(int_T tid)
{
  switch (tid) {
   case 0 :
    udp_conn_output0();
    break;

   case 1 :
    udp_conn_output1();
    break;

   case 2 :
    udp_conn_output2();
    break;

   case 3 :
    udp_conn_output3();
    break;

   default :
    break;
  }
}

/* Model update wrapper function for compatibility with a static main program */
void udp_conn_update(int_T tid)
{
  switch (tid) {
   case 0 :
    udp_conn_update0();
    break;

   case 1 :
    udp_conn_update1();
    break;

   case 2 :
    udp_conn_update2();
    break;

   case 3 :
    udp_conn_update3();
    break;

   default :
    break;
  }
}

/* Model initialize function */
void udp_conn_initialize(void)
{
  /* Start for Constant: '<Root>/Constant2' */
  udp_conn_B.Constant2 = udp_conn_P.Constant2_Value;

  /* InitializeConditions for Memory: '<S9>/last_x' */
  udp_conn_DW.last_x_PreviousInput[0] = udp_conn_P.last_x_InitialCondition[0];
  udp_conn_DW.last_x_PreviousInput[1] = udp_conn_P.last_x_InitialCondition[1];
  udp_conn_DW.last_x_PreviousInput[2] = udp_conn_P.last_x_InitialCondition[2];
  udp_conn_DW.last_x_PreviousInput[3] = udp_conn_P.last_x_InitialCondition[3];

  /* InitializeConditions for UnitDelay: '<S9>/last_mv' */
  udp_conn_DW.last_mv_DSTATE = udp_conn_P.last_mv_InitialCondition;

  /* InitializeConditions for Memory: '<S9>/Memory' */
  udp_conn_DW.Memory_PreviousInput[0] = udp_conn_P.Memory_InitialCondition[0];
  udp_conn_DW.Memory_PreviousInput[1] = udp_conn_P.Memory_InitialCondition[1];
}

/* Model terminate function */
void udp_conn_terminate(void)
{
  /* (no terminate code required) */
}

/*========================================================================*
 * Start of Classic call interface                                        *
 *========================================================================*/
void MdlOutputs(int_T tid)
{
  udp_conn_output(tid);
}

void MdlUpdate(int_T tid)
{
  udp_conn_update(tid);
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
    mdlTsMap[1] = 1;
    mdlTsMap[2] = 2;
    mdlTsMap[3] = 3;
    udp_conn_M->Timing.sampleTimeTaskIDPtr = (&mdlTsMap[0]);
    udp_conn_M->Timing.sampleTimes = (&udp_conn_M->Timing.sampleTimesArray[0]);
    udp_conn_M->Timing.offsetTimes = (&udp_conn_M->Timing.offsetTimesArray[0]);

    /* task periods */
    udp_conn_M->Timing.sampleTimes[0] = (1.0);
    udp_conn_M->Timing.sampleTimes[1] = (20.0);
    udp_conn_M->Timing.sampleTimes[2] = (30.0);
    udp_conn_M->Timing.sampleTimes[3] = (300.0);

    /* task offsets */
    udp_conn_M->Timing.offsetTimes[0] = (0.0);
    udp_conn_M->Timing.offsetTimes[1] = (0.0);
    udp_conn_M->Timing.offsetTimes[2] = (0.0);
    udp_conn_M->Timing.offsetTimes[3] = (0.0);
  }

  rtmSetTPtr(udp_conn_M, &udp_conn_M->Timing.tArray[0]);

  {
    int_T *mdlSampleHits = udp_conn_M->Timing.sampleHitArray;
    int_T *mdlPerTaskSampleHits = udp_conn_M->Timing.perTaskSampleHitsArray;
    udp_conn_M->Timing.perTaskSampleHits = (&mdlPerTaskSampleHits[0]);
    mdlSampleHits[0] = 1;
    udp_conn_M->Timing.sampleHits = (&mdlSampleHits[0]);
  }

  rtmSetTFinal(udp_conn_M, 7200.0);
  udp_conn_M->Timing.stepSize0 = 1.0;
  udp_conn_M->Timing.stepSize1 = 20.0;
  udp_conn_M->Timing.stepSize2 = 30.0;
  udp_conn_M->Timing.stepSize3 = 300.0;

  /* External mode info */
  udp_conn_M->Sizes.checksums[0] = (2109982856U);
  udp_conn_M->Sizes.checksums[1] = (3987842756U);
  udp_conn_M->Sizes.checksums[2] = (2661924319U);
  udp_conn_M->Sizes.checksums[3] = (3525155547U);

  {
    static const sysRanDType rtAlwaysEnabled = SUBSYS_RAN_BC_ENABLE;
    static RTWExtModeInfo rt_ExtModeInfo;
    static const sysRanDType *systemRan[2];
    udp_conn_M->extModeInfo = (&rt_ExtModeInfo);
    rteiSetSubSystemActiveVectorAddresses(&rt_ExtModeInfo, systemRan);
    systemRan[0] = &rtAlwaysEnabled;
    systemRan[1] = &rtAlwaysEnabled;
    rteiSetModelMappingInfoPtr(udp_conn_M->extModeInfo,
      &udp_conn_M->SpecialInfo.mappingInfo);
    rteiSetChecksumsPtr(udp_conn_M->extModeInfo, udp_conn_M->Sizes.checksums);
    rteiSetTPtr(udp_conn_M->extModeInfo, rtmGetTPtr(udp_conn_M));
  }

  udp_conn_M->solverInfoPtr = (&udp_conn_M->solverInfo);
  udp_conn_M->Timing.stepSize = (1.0);
  rtsiSetFixedStepSize(&udp_conn_M->solverInfo, 1.0);
  rtsiSetSolverMode(&udp_conn_M->solverInfo, SOLVER_MODE_MULTITASKING);

  /* block I/O */
  udp_conn_M->blockIO = ((void *) &udp_conn_B);
  (void) memset(((void *) &udp_conn_B), 0,
                sizeof(B_udp_conn_T));

  {
    udp_conn_B.Gain1 = 0.0;
    udp_conn_B.Sum1 = 0.0;
    udp_conn_B.RateTransition2 = 0.0;
    udp_conn_B.Constant2 = 0.0;
    udp_conn_B.Gain = 0.0;
    udp_conn_B.Sum = 0.0;
    udp_conn_B.RateTransition1 = 0.0;
    udp_conn_B.tref3 = 0.0;
    udp_conn_B.tref4 = 0.0;
    udp_conn_B.tref2 = 0.0;
    udp_conn_B.umin_scale1 = 0.0;
    udp_conn_B.time_UTC1[0] = 0.0;
    udp_conn_B.time_UTC1[1] = 0.0;
    udp_conn_B.time_UTC1[2] = 0.0;
    udp_conn_B.time_UTC1[3] = 0.0;
    udp_conn_B.time_UTC1_a[0] = 0.0;
    udp_conn_B.time_UTC1_a[1] = 0.0;
    udp_conn_B.time_UTC1_a[2] = 0.0;
    udp_conn_B.time_UTC1_a[3] = 0.0;
    udp_conn_B.time_UTC1_i[0] = 0.0;
    udp_conn_B.time_UTC1_i[1] = 0.0;
    udp_conn_B.time_UTC1_i[2] = 0.0;
    udp_conn_B.time_UTC1_i[3] = 0.0;
    udp_conn_B.time_UTC1_c[0] = 0.0;
    udp_conn_B.time_UTC1_c[1] = 0.0;
    udp_conn_B.time_UTC1_c[2] = 0.0;
    udp_conn_B.time_UTC1_c[3] = 0.0;
    udp_conn_B.RateTransition4 = 0.0;
    udp_conn_B.RateTransition6 = 0.0;
    udp_conn_B.xk1[0] = 0.0;
    udp_conn_B.xk1[1] = 0.0;
    udp_conn_B.xk1[2] = 0.0;
    udp_conn_B.xk1[3] = 0.0;
    udp_conn_B.u = 0.0;
  }

  /* parameters */
  udp_conn_M->defaultParam = ((real_T *)&udp_conn_P);

  /* states (dwork) */
  udp_conn_M->dwork = ((void *) &udp_conn_DW);
  (void) memset((void *)&udp_conn_DW, 0,
                sizeof(DW_udp_conn_T));
  udp_conn_DW.last_mv_DSTATE = 0.0;
  udp_conn_DW.last_x_PreviousInput[0] = 0.0;
  udp_conn_DW.last_x_PreviousInput[1] = 0.0;
  udp_conn_DW.last_x_PreviousInput[2] = 0.0;
  udp_conn_DW.last_x_PreviousInput[3] = 0.0;

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
  udp_conn_M->Sizes.numSampTimes = (4);/* Number of sample times */
  udp_conn_M->Sizes.numBlocks = (89);  /* Number of blocks */
  udp_conn_M->Sizes.numBlockIO = (40); /* Number of block outputs */
  udp_conn_M->Sizes.numBlockPrms = (45);/* Sum of parameter "widths" */
  return udp_conn_M;
}

/*========================================================================*
 * End of Classic call interface                                          *
 *========================================================================*/
