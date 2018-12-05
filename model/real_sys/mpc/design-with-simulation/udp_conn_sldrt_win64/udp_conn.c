/*
 * udp_conn.c
 *
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Code generation for model "udp_conn".
 *
 * Model version              : 1.177
 * Simulink Coder version : 9.0 (R2018b) 24-May-2018
 * C source code generated on : Thu Dec  6 00:27:55 2018
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

/* Named constants for MATLAB Function: '<S8>/optimizer' */
#define udp_conn_Ku1                   (0.052820632010358248)
#define udp_conn_RMDscale              (0.033333333333333333)
#define udp_conn_RYscale               (0.033333333333333333)
#define udp_conn_nv                    (2.0)

/* Named constants for MATLAB Function: '<S28>/optimizer' */
#define udp_conn_Ku1_b                 (1.9634847366330161)

/* Named constants for MATLAB Function: '<S68>/optimizer' */
#define udp_conn_Ku1_c                 (15.891958693785398)

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
const int SLDRTTimerCount = 3;
const double SLDRTTimers[6] = {
  1.0, 0.0,
  20.0, 0.0,
  30.0, 0.0,
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
static void rate_monotonic_scheduler(void);
time_T rt_SimUpdateDiscreteEvents(
  int_T rtmNumSampTimes, void *rtmTimingData, int_T *rtmSampleHitPtr, int_T
  *rtmPerTaskSampleHits )
{
  rtmSampleHitPtr[1] = rtmStepTask(udp_conn_M, 1);
  rtmSampleHitPtr[2] = rtmStepTask(udp_conn_M, 2);
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
}

/* Function for MATLAB Function: '<S8>/optimizer' */
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

/* Function for MATLAB Function: '<S8>/optimizer' */
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

/* Function for MATLAB Function: '<S8>/optimizer' */
static void udp_conn_abs(const real_T x[2], real_T y[2])
{
  y[0] = fabs(x[0]);
  y[1] = fabs(x[1]);
}

/* Function for MATLAB Function: '<S8>/optimizer' */
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

/* Function for MATLAB Function: '<S8>/optimizer' */
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

/* Function for MATLAB Function: '<S8>/optimizer' */
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

/* Function for MATLAB Function: '<S8>/optimizer' */
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

/* Function for MATLAB Function: '<S8>/optimizer' */
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

/* Function for MATLAB Function: '<S8>/optimizer' */
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

/* Function for MATLAB Function: '<S8>/optimizer' */
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

/* Function for MATLAB Function: '<S8>/optimizer' */
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

  /* Gain: '<Root>/Gain' incorporates:
   *  DataTypeConversion: '<Root>/Data Type Conversion2'
   */
  udp_conn_B.Gain = udp_conn_P.Gain_Gain * (real_T)udp_conn_B.Switch1;

  /* Sum: '<Root>/Sum' incorporates:
   *  Constant: '<Root>/Constant1'
   */
  udp_conn_B.Sum = udp_conn_B.Gain + udp_conn_P.Constant1_Value;

  /* Gain: '<Root>/Gain1' incorporates:
   *  DataTypeConversion: '<Root>/Data Type Conversion3'
   */
  udp_conn_B.Gain1 = udp_conn_P.Gain1_Gain * (real_T)udp_conn_B.Switch;

  /* Sum: '<Root>/Sum1' incorporates:
   *  Constant: '<Root>/Constant1'
   */
  udp_conn_B.Sum1 = udp_conn_B.Gain1 + udp_conn_P.Constant1_Value;

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
  real_T y_innov;
  real_T rseq[13];
  real_T vseq[28];
  real_T f[2];
  real_T zopt[2];
  real_T unusedU0[2];
  int16_T iAnew[2];
  static const real_T b_Linv[4] = { 3.9897790847306878, 0.0, 0.0,
    0.003162277660168379 };

  static const real_T b_Hinv[4] = { 15.918337144954444, 0.0, 0.0,
    9.9999999999999974E-6 };

  static const real_T b_Ac[4] = { -1.0, 1.0, 0.0, 0.0 };

  static const real_T c_a[13] = { -0.0085741394076400777, -0.016979488052154559,
    -0.025273399970785017, -0.033457352573261961, -0.0415328036820614,
    -0.049501191792089408, -0.057363936326923874, -0.06512243789165903,
    -0.072778078522397774, -0.080332221932436346, -0.087786213755185027,
    -0.0951413817838683, -0.10239903620804712 };

  static const real_T d_a[28] = { 0.01040200188698159, 0.0, 0.010435090261432675,
    0.0, 0.010331898379401353, 0.0, 0.010092117158238937, 0.0,
    0.0097153628078809756, 0.0, 0.0092012217130253461, 0.0,
    0.0085492502731363065, 0.0, 0.0077589747357340927, 0.0,
    0.0068298910229184495, 0.0, 0.00576146455107304, 0.0, 0.0045531300436960666,
    0.0, 0.0032042913373008493, 0.0, 0.0017143211803285212, 0.0,
    8.256102501338951E-5, 0.0 };

  static const real_T f_a[16] = { 0.85816326000163956, 0.42936806256227267, 0.0,
    0.0, 0.25698625924268775, 0.12857890494630125, 0.0, 0.0, 0.0, 0.0,
    0.98434080652075606, 0.0, 0.0, 0.0, 0.0, 1.0 };

  static const real_T g_a[4] = { 2.1746766971840179, 1.0336673407717247, 0.0,
    0.0 };

  static const real_T h_a[8] = { 0.0, 0.0, 18.610150102423628, 0.0, 0.0, 0.0,
    0.0, 0.0 };

  static const real_T i_a[4] = { 2.2797600855688276E-5, 1.140640967367466E-5,
    0.00036874480798892068, 0.99751204108632574 };

  real_T rseq_0[50];
  real_T vseq_0[102];
  static const real_T b_Linv_0[4] = { 0.71184118945683328, 0.0, 0.0,
    0.003162277660168379 };

  static const real_T b_Hinv_0[4] = { 0.50671787900731924, 0.0, 0.0,
    9.9999999999999974E-6 };

  static const real_T b_Ac_0[4] = { -1.0, 1.0, 0.0, 0.0 };

  static const real_T c_a_0[50] = { -0.0085741394076400777,
    -0.016979488052154559, -0.025273399970785017, -0.033457352573261961,
    -0.0415328036820614, -0.049501191792089408, -0.057363936326923874,
    -0.06512243789165903, -0.072778078522397774, -0.080332221932436346,
    -0.087786213755185027, -0.0951413817838683, -0.10239903620804712,
    -0.10956046984700532, -0.11662695838004195, -0.1235997605737103,
    -0.13048011850604438, -0.13726925778781243, -0.14396838778083734,
    -0.15057870181342242, -0.15710137739292118, -0.16353757641548886,
    -0.16988844537305312, -0.17615511555754074, -0.18233870326239676,
    -0.18844030998143185, -0.19446102260503345, -0.20040191361377549,
    -0.20626404126946135, -0.21204844980363402, -0.2177561696035869,
    -0.22338821739590864, -0.22894559642759446, -0.23442929664475642,
    -0.2398402948689643, -0.24517955497124866, -0.2504480280437969,
    -0.25564665256937308, -0.26077635458849158, -0.26583804786437437,
    -0.27083263404572139, -0.2757610028273228, -0.28062403210854203,
    -0.28542258814969756, -0.29015752572637138, -0.29482968828167183,
    -0.29943990807647769, -0.30398900633769033, -0.3084777934045202,
    -0.3129070688728342 };

  static const real_T d_a_0[102] = { 0.087301545828174384, 0.0,
    0.088557975578969578, 0.0, 0.089697586360649909, 0.0, 0.090720378686656056,
    0.0, 0.091626283288161789, 0.0, 0.092415206074602879, 0.0,
    0.093087028053278426, 0.0, 0.093641605243503789, 0.0, 0.094078768585284078,
    0.0, 0.094398323842475262, 0.0, 0.094600051500399088, 0.0,
    0.094683706657876884, 0.0, 0.0946490189136456, 0.0, 0.094495692247118679,
    0.0, 0.094223404893452378, 0.0, 0.093831809212877981, 0.0,
    0.093320531554257638, 0.0, 0.092689172112821558, 0.0, 0.091937304782041845,
    0.0, 0.09106447699959784, 0.0, 0.09007020958738586, 0.0, 0.0889539965855251,
    0.0, 0.087715305080309974, 0.0, 0.086353575026058088, 0.0,
    0.0848682190608011, 0.0, 0.08325862231576453, 0.0, 0.081524142218581688, 0.0,
    0.079664108290184166, 0.0, 0.07767782193531142, 0.0, 0.075564556226578983,
    0.0, 0.073323555682044628, 0.0, 0.070954036036209339, 0.0,
    0.068455184004388853, 0.0, 0.065826157040390076, 0.0, 0.0630660830874247,
    0.0, 0.0601740603221911, 0.0, 0.057149156892053909, 0.0,
    0.053990410645248912, 0.0, 0.050696828854039373, 0.0, 0.047267387930748223,
    0.0, 0.043701033136588831, 0.0, 0.039996678283215431, 0.0,
    0.036153205426912347, 0.0, 0.032169464555339727, 0.0, 0.028044273266751477,
    0.0, 0.023776416441599411, 0.0, 0.019364645906435711, 0.0,
    0.0148076800900241, 0.0, 0.010104203671568156, 0.0, 0.0052528672209633523,
    0.0, 0.00025228683097748019, 0.0 };

  static const real_T f_a_0[16] = { 0.85816326000163956, 0.42936806256227267,
    0.0, 0.0, 0.25698625924268775, 0.12857890494630125, 0.0, 0.0, 0.0, 0.0,
    0.98434080652075606, 0.0, 0.0, 0.0, 0.0, 1.0 };

  static const real_T g_a_0[4] = { 2.1746766971840179, 1.0336673407717247, 0.0,
    0.0 };

  static const real_T h_a_0[8] = { 0.0, 0.0, 18.610150102423628, 0.0, 0.0, 0.0,
    0.0, 0.0 };

  static const real_T i_a_0[4] = { 2.2797600855688276E-5, 1.140640967367466E-5,
    0.00036874480798892068, 0.99751204108632574 };

  static const real_T b_Linv_1[4] = { 0.71319769207329919, 0.0, 0.0,
    0.003162277660168379 };

  static const real_T b_Hinv_1[4] = { 0.50865094797868049, 0.0, 0.0,
    9.9999999999999974E-6 };

  static const real_T b_Ac_1[4] = { -1.0, 1.0, 0.0, 0.0 };

  static const real_T c_a_1[50] = { -0.0085741394076400777,
    -0.016979488052154559, -0.025273399970785017, -0.033457352573261961,
    -0.0415328036820614, -0.049501191792089408, -0.057363936326923874,
    -0.06512243789165903, -0.072778078522397774, -0.080332221932436346,
    -0.087786213755185027, -0.0951413817838683, -0.10239903620804712,
    -0.10956046984700532, -0.11662695838004195, -0.1235997605737103,
    -0.13048011850604438, -0.13726925778781243, -0.14396838778083734,
    -0.15057870181342242, -0.15710137739292118, -0.16353757641548886,
    -0.16988844537305312, -0.17615511555754074, -0.18233870326239676,
    -0.18844030998143185, -0.19446102260503345, -0.20040191361377549,
    -0.20626404126946135, -0.21204844980363402, -0.2177561696035869,
    -0.22338821739590864, -0.22894559642759446, -0.23442929664475642,
    -0.2398402948689643, -0.24517955497124866, -0.2504480280437969,
    -0.25564665256937308, -0.26077635458849158, -0.26583804786437437,
    -0.27083263404572139, -0.2757610028273228, -0.28062403210854203,
    -0.28542258814969756, -0.29015752572637138, -0.29482968828167183,
    -0.29943990807647769, -0.30398900633769033, -0.3084777934045202,
    -0.3129070688728342 };

  static const real_T d_a_1[102] = { 0.087301545828174384, 0.0,
    0.088557975578969578, 0.0, 0.089697586360649909, 0.0, 0.090720378686656056,
    0.0, 0.091626283288161789, 0.0, 0.092415206074602879, 0.0,
    0.093087028053278426, 0.0, 0.093641605243503789, 0.0, 0.094078768585284078,
    0.0, 0.094398323842475262, 0.0, 0.094600051500399088, 0.0,
    0.094683706657876884, 0.0, 0.0946490189136456, 0.0, 0.094495692247118679,
    0.0, 0.094223404893452378, 0.0, 0.093831809212877981, 0.0,
    0.093320531554257638, 0.0, 0.092689172112821558, 0.0, 0.091937304782041845,
    0.0, 0.09106447699959784, 0.0, 0.09007020958738586, 0.0, 0.0889539965855251,
    0.0, 0.087715305080309974, 0.0, 0.086353575026058088, 0.0,
    0.0848682190608011, 0.0, 0.08325862231576453, 0.0, 0.081524142218581688, 0.0,
    0.079664108290184166, 0.0, 0.07767782193531142, 0.0, 0.075564556226578983,
    0.0, 0.073323555682044628, 0.0, 0.070954036036209339, 0.0,
    0.068455184004388853, 0.0, 0.065826157040390076, 0.0, 0.0630660830874247,
    0.0, 0.0601740603221911, 0.0, 0.057149156892053909, 0.0,
    0.053990410645248912, 0.0, 0.050696828854039373, 0.0, 0.047267387930748223,
    0.0, 0.043701033136588831, 0.0, 0.039996678283215431, 0.0,
    0.036153205426912347, 0.0, 0.032169464555339727, 0.0, 0.028044273266751477,
    0.0, 0.023776416441599411, 0.0, 0.019364645906435711, 0.0,
    0.0148076800900241, 0.0, 0.010104203671568156, 0.0, 0.0052528672209633523,
    0.0, 0.00025228683097748019, 0.0 };

  static const real_T f_a_1[16] = { 0.85816326000163956, 0.42936806256227267,
    0.0, 0.0, 0.25698625924268775, 0.12857890494630125, 0.0, 0.0, 0.0, 0.0,
    0.98434080652075606, 0.0, 0.0, 0.0, 0.0, 1.0 };

  static const real_T g_a_1[4] = { 2.1746766971840179, 1.0336673407717247, 0.0,
    0.0 };

  static const real_T h_a_1[8] = { 0.0, 0.0, 18.610150102423628, 0.0, 0.0, 0.0,
    0.0, 0.0 };

  static const real_T i_a_1[4] = { 2.2797600855688276E-5, 1.140640967367466E-5,
    0.00036874480798892068, 0.99751204108632574 };

  int32_T i;
  real_T tmp[2];
  real_T c_a_2;
  real_T d_a_2;
  int32_T i_0;
  real_T rtb_xest_n_idx_0;
  real_T rtb_xest_n_idx_1;
  real_T rtb_xest_n_idx_2;
  real_T rtb_xest_n_idx_3;

  /* RateTransition: '<Root>/Rate Transition1' */
  udp_conn_B.RateTransition1 = udp_conn_B.Sum;

  /* Constant: '<Root>/Constant2' */
  udp_conn_B.Constant2 = udp_conn_P.Constant2_Value;

  /* RateTransition: '<Root>/Rate Transition2' */
  udp_conn_B.RateTransition2 = udp_conn_B.Sum1;

  /* MATLAB Function: '<S8>/optimizer' incorporates:
   *  Memory: '<S8>/Memory'
   *  Memory: '<S8>/last_x'
   *  UnitDelay: '<S8>/last_mv'
   */
  /* MATLAB Function 'MPC Controller/MPC/optimizer': '<S27>:1' */
  /* '<S27>:1:161' */
  /* '<S27>:1:143' */
  /* '<S27>:1:140' */
  /* '<S27>:1:139' */
  /* '<S27>:1:82' */
  /* '<S27>:1:80' */
  /* '<S27>:1:78' */
  /* '<S27>:1:53' */
  for (i = 0; i < 28; i++) {
    vseq[i] = 0.0;
  }

  for (i = 0; i < 14; i++) {
    vseq[(i * (int32_T)udp_conn_nv + (int32_T)udp_conn_nv) - 1] = 1.0;
  }

  for (i = 0; i < 13; i++) {
    rseq[i] = udp_conn_B.Constant2 * udp_conn_RYscale;
  }

  for (i = 0; i < 14; i++) {
    vseq[i * (int32_T)udp_conn_nv] = udp_conn_RMDscale *
      udp_conn_B.RateTransition2;
  }

  /* '<S27>:1:58' */
  /* '<S27>:1:68' */
  /* '<S27>:1:75' */
  /* '<S27>:1:78' */
  /* '<S27>:1:80' */
  /* '<S27>:1:81' */
  y_innov = udp_conn_B.RateTransition1 * udp_conn_RYscale -
    ((((0.0039427191263614976 * udp_conn_DW.last_x_PreviousInput[0] + 0.0 *
        udp_conn_DW.last_x_PreviousInput[1]) + 0.000859340351622988 *
       udp_conn_DW.last_x_PreviousInput[2]) + udp_conn_DW.last_x_PreviousInput[3])
     + (0.000806267598511844 * vseq[0] + 0.0 * vseq[1]));

  /* '<S27>:1:82' */
  rtb_xest_n_idx_0 = 2.3406075557134831E-5 * y_innov +
    udp_conn_DW.last_x_PreviousInput[0];
  rtb_xest_n_idx_1 = 1.0550629281592237E-5 * y_innov +
    udp_conn_DW.last_x_PreviousInput[1];
  rtb_xest_n_idx_2 = 0.000336691649034801 * y_innov +
    udp_conn_DW.last_x_PreviousInput[2];
  rtb_xest_n_idx_3 = 0.99751204108632574 * y_innov +
    udp_conn_DW.last_x_PreviousInput[3];

  /* '<S27>:1:137' */
  f[1] = 0.0;
  c_a_2 = 0.0;
  for (i_0 = 0; i_0 < 13; i_0++) {
    c_a_2 += c_a[i_0] * rseq[i_0];
  }

  d_a_2 = 0.0;
  for (i_0 = 0; i_0 < 28; i_0++) {
    d_a_2 += d_a[i_0] * vseq[i_0];
  }

  f[0] = (((((0.0022428664656002975 * rtb_xest_n_idx_0 + 0.00067165059358797042 *
              rtb_xest_n_idx_1) + 0.00055018980881451512 * rtb_xest_n_idx_2) +
            0.73624168189851 * rtb_xest_n_idx_3) + c_a_2) + udp_conn_Ku1 *
          udp_conn_DW.last_mv_DSTATE) + d_a_2;
  for (i = 0; i < 2; i++) {
    iAnew[i] = udp_conn_DW.Memory_PreviousInput[i];
    zopt[i] = 0.0;
    for (i_0 = 0; i_0 < 28; i_0++) {
      zopt[i] += 0.0 * vseq[i_0];
    }

    tmp[i] = -((((((0.0 * rtb_xest_n_idx_0 + 0.0 * rtb_xest_n_idx_1) + 0.0 *
                   rtb_xest_n_idx_2) + 0.0 * rtb_xest_n_idx_3) + (1.0 - (real_T)
      i)) + (2.0 * (real_T)i + -1.0) * udp_conn_DW.last_mv_DSTATE) + zopt[i]);
  }

  udp_conn_qpkwik(b_Linv, b_Hinv, f, b_Ac, tmp, iAnew, 120, 1.0E-6, zopt,
                  unusedU0, &rtb_xest_n_idx_0);
  if ((rtb_xest_n_idx_0 < 0.0) || (rtb_xest_n_idx_0 == 0.0)) {
    zopt[0] = 0.0;
  }

  rtb_xest_n_idx_0 = udp_conn_DW.last_mv_DSTATE + zopt[0];

  /* '<S27>:1:137' */
  udp_conn_B.u_c = rtb_xest_n_idx_0;

  /* '<S27>:1:137' */
  udp_conn_B.iAout_l[0] = (iAnew[0] != 0);
  udp_conn_B.iAout_l[1] = (iAnew[1] != 0);

  /* Gain: '<S8>/umin_scale1' */
  /* '<S27>:1:153' */
  /* '<S27>:1:154' */
  /* '<S27>:1:161' */
  /* '<S27>:1:163' */
  /* '<S27>:1:166' */
  udp_conn_B.umin_scale1 = udp_conn_P.umin_scale1_Gain * udp_conn_B.u_c;
  for (i = 0; i < 4; i++) {
    /* MATLAB Function: '<S8>/optimizer' incorporates:
     *  Memory: '<S8>/last_x'
     */
    udp_conn_B.xk1_c[i] = (((((f_a[i + 4] * udp_conn_DW.last_x_PreviousInput[1]
      + f_a[i] * udp_conn_DW.last_x_PreviousInput[0]) + f_a[i + 8] *
      udp_conn_DW.last_x_PreviousInput[2]) + f_a[i + 12] *
      udp_conn_DW.last_x_PreviousInput[3]) + g_a[i] * rtb_xest_n_idx_0) + (0.0 *
      vseq[1] + h_a[i] * vseq[0])) + i_a[i] * y_innov;

    /* RateTransition: '<Root>/Rate Transition3' */
    udp_conn_B.time_UTC1_a[i] = udp_conn_B.time_UTC1[i];
  }

  /* MATLAB Function: '<S48>/optimizer' incorporates:
   *  Constant: '<Root>/Constant4'
   *  Memory: '<S48>/Memory'
   *  Memory: '<S48>/last_x'
   *  UnitDelay: '<S48>/last_mv'
   */
  /* MATLAB Function 'MPC Controller/MPC/optimizer': '<S67>:1' */
  /* '<S67>:1:161' */
  /* '<S67>:1:143' */
  /* '<S67>:1:140' */
  /* '<S67>:1:139' */
  /* '<S67>:1:82' */
  /* '<S67>:1:80' */
  /* '<S67>:1:78' */
  /* '<S67>:1:53' */
  for (i = 0; i < 102; i++) {
    vseq_0[i] = 0.0;
  }

  for (i = 0; i < 51; i++) {
    vseq_0[(i * (int32_T)udp_conn_nv + (int32_T)udp_conn_nv) - 1] = 1.0;
  }

  for (i = 0; i < 50; i++) {
    rseq_0[i] = udp_conn_P.Constant4_Value * udp_conn_RYscale;
  }

  for (i = 0; i < 51; i++) {
    vseq_0[i * (int32_T)udp_conn_nv] = udp_conn_RMDscale *
      udp_conn_B.RateTransition2;
  }

  /* '<S67>:1:58' */
  /* '<S67>:1:68' */
  /* '<S67>:1:75' */
  /* '<S67>:1:78' */
  /* '<S67>:1:80' */
  /* '<S67>:1:81' */
  y_innov = udp_conn_B.RateTransition1 * udp_conn_RYscale -
    ((((0.0039427191263614976 * udp_conn_DW.last_x_PreviousInput_a[0] + 0.0 *
        udp_conn_DW.last_x_PreviousInput_a[1]) + 0.000859340351622988 *
       udp_conn_DW.last_x_PreviousInput_a[2]) +
      udp_conn_DW.last_x_PreviousInput_a[3]) + (0.000806267598511844 * vseq_0[0]
      + 0.0 * vseq_0[1]));

  /* '<S67>:1:82' */
  rtb_xest_n_idx_0 = 2.3406075557134831E-5 * y_innov +
    udp_conn_DW.last_x_PreviousInput_a[0];
  rtb_xest_n_idx_1 = 1.0550629281592237E-5 * y_innov +
    udp_conn_DW.last_x_PreviousInput_a[1];
  rtb_xest_n_idx_2 = 0.000336691649034801 * y_innov +
    udp_conn_DW.last_x_PreviousInput_a[2];
  rtb_xest_n_idx_3 = 0.99751204108632574 * y_innov +
    udp_conn_DW.last_x_PreviousInput_a[3];

  /* '<S67>:1:137' */
  f[1] = 0.0;
  c_a_2 = 0.0;
  for (i_0 = 0; i_0 < 50; i_0++) {
    c_a_2 += c_a_0[i_0] * rseq_0[i_0];
  }

  d_a_2 = 0.0;
  for (i_0 = 0; i_0 < 102; i_0++) {
    d_a_2 += d_a_0[i_0] * vseq_0[i_0];
  }

  f[0] = (((((0.019848373481438971 * rtb_xest_n_idx_0 + 0.0059438098678764456 *
              rtb_xest_n_idx_1) + 0.0046176131604560525 * rtb_xest_n_idx_2) +
            8.8436517526710645 * rtb_xest_n_idx_3) + c_a_2) + udp_conn_Ku1_b *
          udp_conn_DW.last_mv_DSTATE_c) + d_a_2;
  for (i = 0; i < 2; i++) {
    iAnew[i] = udp_conn_DW.Memory_PreviousInput_o[i];
    zopt[i] = 0.0;
    for (i_0 = 0; i_0 < 102; i_0++) {
      zopt[i] += 0.0 * vseq_0[i_0];
    }

    tmp[i] = -((((((0.0 * rtb_xest_n_idx_0 + 0.0 * rtb_xest_n_idx_1) + 0.0 *
                   rtb_xest_n_idx_2) + 0.0 * rtb_xest_n_idx_3) + (1.0 - (real_T)
      i)) + (2.0 * (real_T)i + -1.0) * udp_conn_DW.last_mv_DSTATE_c) + zopt[i]);
  }

  udp_conn_qpkwik(b_Linv_0, b_Hinv_0, f, b_Ac_0, tmp, iAnew, 120, 1.0E-6, zopt,
                  unusedU0, &rtb_xest_n_idx_0);
  if ((rtb_xest_n_idx_0 < 0.0) || (rtb_xest_n_idx_0 == 0.0)) {
    zopt[0] = 0.0;
  }

  rtb_xest_n_idx_0 = udp_conn_DW.last_mv_DSTATE_c + zopt[0];

  /* '<S67>:1:137' */
  udp_conn_B.u_n = rtb_xest_n_idx_0;

  /* '<S67>:1:137' */
  udp_conn_B.iAout_f[0] = (iAnew[0] != 0);
  udp_conn_B.iAout_f[1] = (iAnew[1] != 0);

  /* '<S67>:1:153' */
  /* '<S67>:1:154' */
  /* '<S67>:1:161' */
  /* '<S67>:1:163' */
  /* '<S67>:1:166' */
  for (i_0 = 0; i_0 < 4; i_0++) {
    udp_conn_B.xk1_k[i_0] = (((((f_a_0[i_0 + 4] *
      udp_conn_DW.last_x_PreviousInput_a[1] + f_a_0[i_0] *
      udp_conn_DW.last_x_PreviousInput_a[0]) + f_a_0[i_0 + 8] *
      udp_conn_DW.last_x_PreviousInput_a[2]) + f_a_0[i_0 + 12] *
      udp_conn_DW.last_x_PreviousInput_a[3]) + g_a_0[i_0] * rtb_xest_n_idx_0) +
      (0.0 * vseq_0[1] + h_a_0[i_0] * vseq_0[0])) + i_a_0[i_0] * y_innov;
  }

  /* End of MATLAB Function: '<S48>/optimizer' */

  /* Gain: '<S48>/umin_scale1' */
  udp_conn_B.umin_scale1_g = udp_conn_P.umin_scale1_Gain_n * udp_conn_B.u_n;

  /* MATLAB Function: '<S28>/optimizer' incorporates:
   *  Constant: '<Root>/Constant5'
   *  Memory: '<S28>/Memory'
   *  Memory: '<S28>/last_x'
   *  UnitDelay: '<S28>/last_mv'
   */
  /* MATLAB Function 'MPC Controller/MPC/optimizer': '<S47>:1' */
  /* '<S47>:1:161' */
  /* '<S47>:1:143' */
  /* '<S47>:1:140' */
  /* '<S47>:1:139' */
  /* '<S47>:1:82' */
  /* '<S47>:1:80' */
  /* '<S47>:1:78' */
  /* '<S47>:1:53' */
  for (i = 0; i < 102; i++) {
    vseq_0[i] = 0.0;
  }

  for (i = 0; i < 51; i++) {
    vseq_0[(i * (int32_T)udp_conn_nv + (int32_T)udp_conn_nv) - 1] = 1.0;
  }

  for (i = 0; i < 50; i++) {
    rseq_0[i] = udp_conn_P.Constant5_Value * udp_conn_RYscale;
  }

  for (i = 0; i < 51; i++) {
    vseq_0[i * (int32_T)udp_conn_nv] = udp_conn_RMDscale *
      udp_conn_B.RateTransition2;
  }

  /* '<S47>:1:58' */
  /* '<S47>:1:68' */
  /* '<S47>:1:75' */
  /* '<S47>:1:78' */
  /* '<S47>:1:80' */
  /* '<S47>:1:81' */
  y_innov = udp_conn_B.RateTransition1 * udp_conn_RYscale -
    ((((0.0039427191263614976 * udp_conn_DW.last_x_PreviousInput_g[0] + 0.0 *
        udp_conn_DW.last_x_PreviousInput_g[1]) + 0.000859340351622988 *
       udp_conn_DW.last_x_PreviousInput_g[2]) +
      udp_conn_DW.last_x_PreviousInput_g[3]) + (0.000806267598511844 * vseq_0[0]
      + 0.0 * vseq_0[1]));

  /* '<S47>:1:82' */
  rtb_xest_n_idx_0 = 2.3406075557134831E-5 * y_innov +
    udp_conn_DW.last_x_PreviousInput_g[0];
  rtb_xest_n_idx_1 = 1.0550629281592237E-5 * y_innov +
    udp_conn_DW.last_x_PreviousInput_g[1];
  rtb_xest_n_idx_2 = 0.000336691649034801 * y_innov +
    udp_conn_DW.last_x_PreviousInput_g[2];
  rtb_xest_n_idx_3 = 0.99751204108632574 * y_innov +
    udp_conn_DW.last_x_PreviousInput_g[3];

  /* '<S47>:1:137' */
  f[1] = 0.0;
  c_a_2 = 0.0;
  for (i_0 = 0; i_0 < 50; i_0++) {
    c_a_2 += c_a_1[i_0] * rseq_0[i_0];
  }

  d_a_2 = 0.0;
  for (i_0 = 0; i_0 < 102; i_0++) {
    d_a_2 += d_a_1[i_0] * vseq_0[i_0];
  }

  f[0] = (((((0.019848373481438971 * rtb_xest_n_idx_0 + 0.0059438098678764456 *
              rtb_xest_n_idx_1) + 0.0046176131604560525 * rtb_xest_n_idx_2) +
            8.8436517526710645 * rtb_xest_n_idx_3) + c_a_2) + udp_conn_Ku1_b *
          udp_conn_DW.last_mv_DSTATE_m) + d_a_2;
  for (i = 0; i < 2; i++) {
    iAnew[i] = udp_conn_DW.Memory_PreviousInput_g[i];
    zopt[i] = 0.0;
    for (i_0 = 0; i_0 < 102; i_0++) {
      zopt[i] += 0.0 * vseq_0[i_0];
    }

    tmp[i] = -((((((0.0 * rtb_xest_n_idx_0 + 0.0 * rtb_xest_n_idx_1) + 0.0 *
                   rtb_xest_n_idx_2) + 0.0 * rtb_xest_n_idx_3) + (1.0 - (real_T)
      i)) + (2.0 * (real_T)i + -1.0) * udp_conn_DW.last_mv_DSTATE_m) + zopt[i]);
  }

  udp_conn_qpkwik(b_Linv_1, b_Hinv_1, f, b_Ac_1, tmp, iAnew, 120, 1.0E-6, zopt,
                  unusedU0, &rtb_xest_n_idx_0);
  if ((rtb_xest_n_idx_0 < 0.0) || (rtb_xest_n_idx_0 == 0.0)) {
    zopt[0] = 0.0;
  }

  rtb_xest_n_idx_0 = udp_conn_DW.last_mv_DSTATE_m + zopt[0];

  /* '<S47>:1:137' */
  udp_conn_B.u_j = rtb_xest_n_idx_0;

  /* '<S47>:1:137' */
  udp_conn_B.iAout_a[0] = (iAnew[0] != 0);
  udp_conn_B.iAout_a[1] = (iAnew[1] != 0);

  /* Gain: '<S28>/umin_scale1' */
  /* '<S47>:1:153' */
  /* '<S47>:1:154' */
  /* '<S47>:1:161' */
  /* '<S47>:1:163' */
  /* '<S47>:1:166' */
  udp_conn_B.umin_scale1_gc = udp_conn_P.umin_scale1_Gain_g * udp_conn_B.u_j;
  for (i = 0; i < 4; i++) {
    /* MATLAB Function: '<S28>/optimizer' incorporates:
     *  Memory: '<S28>/last_x'
     */
    udp_conn_B.xk1_p[i] = (((((f_a_1[i + 4] *
      udp_conn_DW.last_x_PreviousInput_g[1] + f_a_1[i] *
      udp_conn_DW.last_x_PreviousInput_g[0]) + f_a_1[i + 8] *
      udp_conn_DW.last_x_PreviousInput_g[2]) + f_a_1[i + 12] *
      udp_conn_DW.last_x_PreviousInput_g[3]) + g_a_1[i] * rtb_xest_n_idx_0) +
      (0.0 * vseq_0[1] + h_a_1[i] * vseq_0[0])) + i_a_1[i] * y_innov;

    /* RateTransition: '<Root>/Rate Transition5' */
    udp_conn_B.time_UTC1_i[i] = udp_conn_B.time_UTC1[i];
  }
}

/* Model update function for TID1 */
void udp_conn_update1(void)            /* Sample time: [20.0s, 0.0s] */
{
  /* Update for Memory: '<S8>/last_x' */
  udp_conn_DW.last_x_PreviousInput[0] = udp_conn_B.xk1_c[0];
  udp_conn_DW.last_x_PreviousInput[1] = udp_conn_B.xk1_c[1];
  udp_conn_DW.last_x_PreviousInput[2] = udp_conn_B.xk1_c[2];
  udp_conn_DW.last_x_PreviousInput[3] = udp_conn_B.xk1_c[3];

  /* Update for UnitDelay: '<S8>/last_mv' */
  udp_conn_DW.last_mv_DSTATE = udp_conn_B.u_c;

  /* Update for Memory: '<S8>/Memory' */
  udp_conn_DW.Memory_PreviousInput[0] = udp_conn_B.iAout_l[0];
  udp_conn_DW.Memory_PreviousInput[1] = udp_conn_B.iAout_l[1];

  /* Update for Memory: '<S48>/last_x' */
  udp_conn_DW.last_x_PreviousInput_a[0] = udp_conn_B.xk1_k[0];
  udp_conn_DW.last_x_PreviousInput_a[1] = udp_conn_B.xk1_k[1];
  udp_conn_DW.last_x_PreviousInput_a[2] = udp_conn_B.xk1_k[2];
  udp_conn_DW.last_x_PreviousInput_a[3] = udp_conn_B.xk1_k[3];

  /* Update for UnitDelay: '<S48>/last_mv' */
  udp_conn_DW.last_mv_DSTATE_c = udp_conn_B.u_n;

  /* Update for Memory: '<S48>/Memory' */
  udp_conn_DW.Memory_PreviousInput_o[0] = udp_conn_B.iAout_f[0];
  udp_conn_DW.Memory_PreviousInput_o[1] = udp_conn_B.iAout_f[1];

  /* Update for Memory: '<S28>/last_x' */
  udp_conn_DW.last_x_PreviousInput_g[0] = udp_conn_B.xk1_p[0];
  udp_conn_DW.last_x_PreviousInput_g[1] = udp_conn_B.xk1_p[1];
  udp_conn_DW.last_x_PreviousInput_g[2] = udp_conn_B.xk1_p[2];
  udp_conn_DW.last_x_PreviousInput_g[3] = udp_conn_B.xk1_p[3];

  /* Update for UnitDelay: '<S28>/last_mv' */
  udp_conn_DW.last_mv_DSTATE_m = udp_conn_B.u_j;

  /* Update for Memory: '<S28>/Memory' */
  udp_conn_DW.Memory_PreviousInput_g[0] = udp_conn_B.iAout_a[0];
  udp_conn_DW.Memory_PreviousInput_g[1] = udp_conn_B.iAout_a[1];

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
  real_T f[2];
  real_T zopt[2];
  real_T unusedU0[2];
  int16_T iAnew[2];
  static const real_T b_Linv[4] = { 0.25084758242808247, 0.0, 0.0,
    0.003162277660168379 };

  static const real_T b_Hinv[4] = { 0.062924509610013626, 0.0, 0.0,
    9.9999999999999974E-6 };

  static const real_T b_Ac[4] = { -1.0, 1.0, 0.0, 0.0 };

  static const real_T c_a[100] = { -0.012790836431040205, -0.025273399970785013,
    -0.037508550458469347, -0.049501191792089394, -0.061256130670987695,
    -0.072778078522397746, -0.084071653389803158, -0.095141381783868259,
    -0.10599170049668193, -0.11662695838004189, -0.12705141808849216,
    -0.13726925778781235, -0.14728457282964338, -0.15710137739292113,
    -0.16672360609277559, -0.17615511555754065, -0.18539968597450637,
    -0.19446102260503337, -0.20334275726963663, -0.21204844980363394,
    -0.22058158948394233, -0.22894559642759438, -0.23714382296253511,
    -0.24517955497124855, -0.25305601320775284, -0.26077635458849141,
    -0.2683436734576381, -0.27576100282732263, -0.28303131559327444,
    -0.29015752572637116, -0.29714248944057003, -0.3039890063376901,
    -0.31069982052950396, -0.31727762173758889, -0.32372504637137817,
    -0.33004467858484476, -0.33623905131224063, -0.34231064728330718,
    -0.34826190001836321, -0.35409519480366997, -0.3598128696474634,
    -0.36541721621703754, -0.3709104807572538, -0.3762948649908453,
    -0.38157252700087613, -0.38674558209570981, -0.39181610365683345,
    -0.39678612396987761, -0.40165763503916446, -0.40643258938611132,
    -0.41111290083180907, -0.4157004452640895, -0.42019706138938884,
    -0.42460455146970849, -0.42892468204496925, -0.43315918464104758,
    -0.43730975646377812, -0.44137806107920075, -0.44536572908032468,
    -0.44927435874067667, -0.45310551665489551, -0.45686073836662966,
    -0.46054152898398915, -0.46414936378279931, -0.46768568879789707,
    -0.47115192140270767, -0.47454945087733374, -0.47787963896538438,
    -0.48114382041976744, -0.484343303537664, -0.48747937068489927,
    -0.49055327880991978, -0.49356625994758357, -0.49651952171296487,
    -0.49941424778537097, -0.50225159838276567, -0.50503271072678935,
    -0.50775869949856234, -0.51043065728545312, -0.51304965501899213,
    -0.51561674240410538, -0.51813294833984058, -0.5205992813317537,
    -0.52301672989612247, -0.52538626295614743, -0.52770883023030057,
    -0.52998536261297613, -0.532216772547597, -0.53440395439232558,
    -0.53654778477852616, -0.53864912296212264, -0.54070881116799141,
    -0.54272767492752871, -0.54470652340952708, -0.546646149744493,
    -0.54854733134253753, -0.55041083020496484, -0.55223739322968568,
    -0.55402775251057712, -0.55578262563090874 };

  static const real_T d_a[202] = { 0.24721966066795209, 0.0, 0.25283968908568105,
    0.0, 0.25828845107073239, 0.0, 0.26356795204491024, 0.0, 0.26868007919960379,
    0.0, 0.27362664715941454, 0.0, 0.2784093985781157, 0.0, 0.28303000470261919,
    0.0, 0.28749006590510029, 0.0, 0.29179111218341525, 0.0, 0.29593460362993596,
    0.0, 0.2999219308689044, 0.0, 0.30375441546240489, 0.0, 0.30743331028502557,
    0.0, 0.31095979986727862, 0.0, 0.31433500070782305, 0.0, 0.31755996155452704,
    0.0, 0.320635663654388, 0.0, 0.32356302097231471, 0.0, 0.32634288037876219,
    0.0, 0.32897602180619451, 0.0, 0.3314631583743346, 0.0, 0.333804936484147,
    0.0, 0.33600193588048327, 0.0, 0.33805466968330689, 0.0, 0.33996358438739327,
    0.0, 0.34172905983039453, 0.0, 0.34335140912913353, 0.0, 0.3448308785839837,
    0.0, 0.3461676475511708, 0.0, 0.34736182828281836, 0.0, 0.34841346573454424,
    0.0, 0.34932253734039687, 0.0, 0.35008895275490409, 0.0, 0.35071255356199416,
    0.0, 0.35119311295052735, 0.0, 0.35153033535616052, 0.0, 0.35172385606925671,
    0.0, 0.35177324080852246, 0.0, 0.35167798526004906, 0.0, 0.35143751458141304,
    0.0, 0.35105118287046722, 0.0, 0.350518272598447, 0.0, 0.34983799400698856,
    0.0, 0.34900948446864083, 0.0, 0.34803180781043475, 0.0, 0.34690395360005205,
    0.0, 0.34562483639411995, 0.0, 0.34419329494813344, 0.0, 0.34260809138749104,
    0.0, 0.34086791033910824, 0.0, 0.338971358023051, 0.0, 0.33691696130361126,
    0.0, 0.33470316669922795, 0.0, 0.33232833935062878, 0.0, 0.32979076194655321,
    0.0, 0.32708863360638907, 0.0, 0.32422006871903597, 0.0, 0.32118309573728276,
    0.0, 0.31797565592696353, 0.0, 0.31459560207013465, 0.0, 0.31104069712148508,
    0.0, 0.30730861281717481, 0.0, 0.30339692823526376, 0.0, 0.29930312830687061,
    0.0, 0.29502460227717608, 0.0, 0.2905586421153542, 0.0, 0.28590244087248995,
    0.0, 0.28105309098651454, 0.0, 0.27600758253315683, 0.0, 0.270762801421885,
    0.0, 0.26531552753577975, 0.0, 0.25966243281424961, 0.0, 0.25380007927746995,
    0.0, 0.24772491699139249, 0.0, 0.24143328197214409, 0.0, 0.23492139402859485,
    0.0, 0.22818535454184646, 0.0, 0.22122114418035513, 0.0, 0.21402462054936811,
    0.0, 0.20659151577331725, 0.0, 0.19891743400977668, 0.0, 0.19099784889355223,
    0.0, 0.18282810090943466, 0.0, 0.17440339469210697, 0.0, 0.16571879625165703,
    0.0, 0.156769230123106, 0.0, 0.14754947643832061, 0.0, 0.13805416791863459,
    0.0, 0.12827778678646107, 0.0, 0.11821466159413276, 0.0, 0.10785896396816094,
    0.0, 0.097204705267057767, 0.0, 0.086245733150818071, 0.0,
    0.074975728060108521, 0.0, 0.063388199603161666, 0.0, 0.051476482848320917,
    0.0, 0.039233734520131, 0.0, 0.026652929096814, 0.0, 0.013726854806917167,
    0.0, 0.00044810952286204004, 0.0 };

  static const real_T f_a[16] = { 0.852455585554066, 0.4265123202653045, 0.0,
    0.0, 0.25527703446737615, 0.12772372206390006, 0.0, 0.0, 0.0, 0.0,
    0.97660340506644039, 0.0, 0.0, 0.0, 0.0, 1.0 };

  static const real_T g_a[4] = { 3.2441662774097004, 1.5687690986716871, 0.0,
    0.0 };

  static const real_T h_a[8] = { 0.0, 0.0, 27.805655775074666, 0.0, 0.0, 0.0,
    0.0, 0.0 };

  static const real_T i_a[4] = { 2.2601766028974559E-5, 1.1308426895749486E-5,
    0.00036491168483683529, 0.99889096040184588 };

  int32_T i;
  real_T tmp[2];
  real_T c_a_0;
  real_T d_a_0;
  int32_T i_0;
  real_T rtb_xest_idx_0;
  real_T rtb_xest_idx_1;
  real_T rtb_xest_idx_2;
  real_T rtb_xest_idx_3;

  /* RateTransition: '<Root>/Rate Transition4' */
  udp_conn_B.RateTransition4 = udp_conn_B.Sum;

  /* RateTransition: '<Root>/Rate Transition6' */
  udp_conn_B.RateTransition6 = udp_conn_B.Sum1;

  /* MATLAB Function: '<S68>/optimizer' incorporates:
   *  Constant: '<Root>/Constant3'
   *  Memory: '<S68>/Memory'
   *  Memory: '<S68>/last_x'
   *  UnitDelay: '<S68>/last_mv'
   */
  /* MATLAB Function 'MPC Controller/MPC/optimizer': '<S87>:1' */
  /* '<S87>:1:161' */
  /* '<S87>:1:143' */
  /* '<S87>:1:140' */
  /* '<S87>:1:139' */
  /* '<S87>:1:82' */
  /* '<S87>:1:80' */
  /* '<S87>:1:78' */
  /* '<S87>:1:53' */
  for (i = 0; i < 202; i++) {
    vseq[i] = 0.0;
  }

  for (i = 0; i < 101; i++) {
    vseq[(i * (int32_T)udp_conn_nv + (int32_T)udp_conn_nv) - 1] = 1.0;
  }

  for (i = 0; i < 100; i++) {
    rseq[i] = udp_conn_P.Constant3_Value * udp_conn_RYscale;
  }

  for (i = 0; i < 101; i++) {
    vseq[i * (int32_T)udp_conn_nv] = udp_conn_RMDscale *
      udp_conn_B.RateTransition6;
  }

  /* '<S87>:1:58' */
  /* '<S87>:1:68' */
  /* '<S87>:1:75' */
  /* '<S87>:1:78' */
  /* '<S87>:1:80' */
  /* '<S87>:1:81' */
  y_innov = udp_conn_B.RateTransition4 * udp_conn_RYscale -
    ((((0.0039427191263614976 * udp_conn_DW.last_x_PreviousInput_b[0] + 0.0 *
        udp_conn_DW.last_x_PreviousInput_b[1]) + 0.000859340351622988 *
       udp_conn_DW.last_x_PreviousInput_b[2]) +
      udp_conn_DW.last_x_PreviousInput_b[3]) + (0.000806267598511844 * vseq[0] +
      0.0 * vseq[1]));

  /* '<S87>:1:82' */
  rtb_xest_idx_0 = 2.3259704182862089E-5 * y_innov +
    udp_conn_DW.last_x_PreviousInput_b[0];
  rtb_xest_idx_1 = 1.0866239047888191E-5 * y_innov +
    udp_conn_DW.last_x_PreviousInput_b[1];
  rtb_xest_idx_2 = 0.00034820391500277689 * y_innov +
    udp_conn_DW.last_x_PreviousInput_b[2];
  rtb_xest_idx_3 = 0.99889096040184588 * y_innov +
    udp_conn_DW.last_x_PreviousInput_b[3];

  /* '<S87>:1:137' */
  f[1] = 0.0;
  c_a_0 = 0.0;
  for (i_0 = 0; i_0 < 100; i_0++) {
    c_a_0 += c_a[i_0] * rseq[i_0];
  }

  d_a_0 = 0.0;
  for (i_0 = 0; i_0 < 202; i_0++) {
    d_a_0 += d_a[i_0] * vseq[i_0];
  }

  f[0] = (((((0.041296740929851146 * rtb_xest_idx_0 + 0.012366755214452513 *
              rtb_xest_idx_1) + 0.0086829659534272824 * rtb_xest_idx_2) +
            36.77453763099205 * rtb_xest_idx_3) + c_a_0) + udp_conn_Ku1_c *
          udp_conn_DW.last_mv_DSTATE_cl) + d_a_0;
  for (i = 0; i < 2; i++) {
    iAnew[i] = udp_conn_DW.Memory_PreviousInput_p[i];
    zopt[i] = 0.0;
    for (i_0 = 0; i_0 < 202; i_0++) {
      zopt[i] += 0.0 * vseq[i_0];
    }

    tmp[i] = -((((((0.0 * rtb_xest_idx_0 + 0.0 * rtb_xest_idx_1) + 0.0 *
                   rtb_xest_idx_2) + 0.0 * rtb_xest_idx_3) + (1.0 - (real_T)i))
                + (2.0 * (real_T)i + -1.0) * udp_conn_DW.last_mv_DSTATE_cl) +
               zopt[i]);
  }

  udp_conn_qpkwik(b_Linv, b_Hinv, f, b_Ac, tmp, iAnew, 120, 1.0E-6, zopt,
                  unusedU0, &rtb_xest_idx_0);
  if ((rtb_xest_idx_0 < 0.0) || (rtb_xest_idx_0 == 0.0)) {
    zopt[0] = 0.0;
  }

  rtb_xest_idx_0 = udp_conn_DW.last_mv_DSTATE_cl + zopt[0];

  /* '<S87>:1:137' */
  udp_conn_B.u = rtb_xest_idx_0;

  /* '<S87>:1:137' */
  udp_conn_B.iAout[0] = (iAnew[0] != 0);
  udp_conn_B.iAout[1] = (iAnew[1] != 0);

  /* '<S87>:1:153' */
  /* '<S87>:1:154' */
  /* '<S87>:1:161' */
  /* '<S87>:1:163' */
  /* '<S87>:1:166' */
  for (i_0 = 0; i_0 < 4; i_0++) {
    udp_conn_B.xk1[i_0] = (((((f_a[i_0 + 4] *
      udp_conn_DW.last_x_PreviousInput_b[1] + f_a[i_0] *
      udp_conn_DW.last_x_PreviousInput_b[0]) + f_a[i_0 + 8] *
      udp_conn_DW.last_x_PreviousInput_b[2]) + f_a[i_0 + 12] *
      udp_conn_DW.last_x_PreviousInput_b[3]) + g_a[i_0] * rtb_xest_idx_0) + (0.0
      * vseq[1] + h_a[i_0] * vseq[0])) + i_a[i_0] * y_innov;
  }

  /* End of MATLAB Function: '<S68>/optimizer' */

  /* Gain: '<S68>/umin_scale1' */
  udp_conn_B.umin_scale1_o = udp_conn_P.umin_scale1_Gain_b * udp_conn_B.u;
}

/* Model update function for TID2 */
void udp_conn_update2(void)            /* Sample time: [30.0s, 0.0s] */
{
  /* Update for Memory: '<S68>/last_x' */
  udp_conn_DW.last_x_PreviousInput_b[0] = udp_conn_B.xk1[0];
  udp_conn_DW.last_x_PreviousInput_b[1] = udp_conn_B.xk1[1];
  udp_conn_DW.last_x_PreviousInput_b[2] = udp_conn_B.xk1[2];
  udp_conn_DW.last_x_PreviousInput_b[3] = udp_conn_B.xk1[3];

  /* Update for UnitDelay: '<S68>/last_mv' */
  udp_conn_DW.last_mv_DSTATE_cl = udp_conn_B.u;

  /* Update for Memory: '<S68>/Memory' */
  udp_conn_DW.Memory_PreviousInput_p[0] = udp_conn_B.iAout[0];
  udp_conn_DW.Memory_PreviousInput_p[1] = udp_conn_B.iAout[1];

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

   default :
    break;
  }
}

/* Model initialize function */
void udp_conn_initialize(void)
{
  /* Start for Constant: '<Root>/Constant2' */
  udp_conn_B.Constant2 = udp_conn_P.Constant2_Value;

  /* InitializeConditions for Memory: '<S8>/last_x' */
  udp_conn_DW.last_x_PreviousInput[0] = udp_conn_P.last_x_InitialCondition[0];
  udp_conn_DW.last_x_PreviousInput[1] = udp_conn_P.last_x_InitialCondition[1];
  udp_conn_DW.last_x_PreviousInput[2] = udp_conn_P.last_x_InitialCondition[2];
  udp_conn_DW.last_x_PreviousInput[3] = udp_conn_P.last_x_InitialCondition[3];

  /* InitializeConditions for UnitDelay: '<S8>/last_mv' */
  udp_conn_DW.last_mv_DSTATE = udp_conn_P.last_mv_InitialCondition;

  /* InitializeConditions for Memory: '<S8>/Memory' */
  udp_conn_DW.Memory_PreviousInput[0] = udp_conn_P.Memory_InitialCondition[0];
  udp_conn_DW.Memory_PreviousInput[1] = udp_conn_P.Memory_InitialCondition[1];

  /* InitializeConditions for Memory: '<S48>/last_x' */
  udp_conn_DW.last_x_PreviousInput_a[0] = udp_conn_P.last_x_InitialCondition_c[0];
  udp_conn_DW.last_x_PreviousInput_a[1] = udp_conn_P.last_x_InitialCondition_c[1];
  udp_conn_DW.last_x_PreviousInput_a[2] = udp_conn_P.last_x_InitialCondition_c[2];
  udp_conn_DW.last_x_PreviousInput_a[3] = udp_conn_P.last_x_InitialCondition_c[3];

  /* InitializeConditions for UnitDelay: '<S48>/last_mv' */
  udp_conn_DW.last_mv_DSTATE_c = udp_conn_P.last_mv_InitialCondition_k;

  /* InitializeConditions for Memory: '<S48>/Memory' */
  udp_conn_DW.Memory_PreviousInput_o[0] = udp_conn_P.Memory_InitialCondition_n[0];
  udp_conn_DW.Memory_PreviousInput_o[1] = udp_conn_P.Memory_InitialCondition_n[1];

  /* InitializeConditions for Memory: '<S28>/last_x' */
  udp_conn_DW.last_x_PreviousInput_g[0] = udp_conn_P.last_x_InitialCondition_ck
    [0];
  udp_conn_DW.last_x_PreviousInput_g[1] = udp_conn_P.last_x_InitialCondition_ck
    [1];
  udp_conn_DW.last_x_PreviousInput_g[2] = udp_conn_P.last_x_InitialCondition_ck
    [2];
  udp_conn_DW.last_x_PreviousInput_g[3] = udp_conn_P.last_x_InitialCondition_ck
    [3];

  /* InitializeConditions for UnitDelay: '<S28>/last_mv' */
  udp_conn_DW.last_mv_DSTATE_m = udp_conn_P.last_mv_InitialCondition_b;

  /* InitializeConditions for Memory: '<S28>/Memory' */
  udp_conn_DW.Memory_PreviousInput_g[0] = udp_conn_P.Memory_InitialCondition_g[0];
  udp_conn_DW.Memory_PreviousInput_g[1] = udp_conn_P.Memory_InitialCondition_g[1];

  /* InitializeConditions for Memory: '<S68>/last_x' */
  udp_conn_DW.last_x_PreviousInput_b[0] = udp_conn_P.last_x_InitialCondition_n[0];
  udp_conn_DW.last_x_PreviousInput_b[1] = udp_conn_P.last_x_InitialCondition_n[1];
  udp_conn_DW.last_x_PreviousInput_b[2] = udp_conn_P.last_x_InitialCondition_n[2];
  udp_conn_DW.last_x_PreviousInput_b[3] = udp_conn_P.last_x_InitialCondition_n[3];

  /* InitializeConditions for UnitDelay: '<S68>/last_mv' */
  udp_conn_DW.last_mv_DSTATE_cl = udp_conn_P.last_mv_InitialCondition_a;

  /* InitializeConditions for Memory: '<S68>/Memory' */
  udp_conn_DW.Memory_PreviousInput_p[0] = udp_conn_P.Memory_InitialCondition_l[0];
  udp_conn_DW.Memory_PreviousInput_p[1] = udp_conn_P.Memory_InitialCondition_l[1];
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
    udp_conn_M->Timing.sampleTimeTaskIDPtr = (&mdlTsMap[0]);
    udp_conn_M->Timing.sampleTimes = (&udp_conn_M->Timing.sampleTimesArray[0]);
    udp_conn_M->Timing.offsetTimes = (&udp_conn_M->Timing.offsetTimesArray[0]);

    /* task periods */
    udp_conn_M->Timing.sampleTimes[0] = (1.0);
    udp_conn_M->Timing.sampleTimes[1] = (20.0);
    udp_conn_M->Timing.sampleTimes[2] = (30.0);

    /* task offsets */
    udp_conn_M->Timing.offsetTimes[0] = (0.0);
    udp_conn_M->Timing.offsetTimes[1] = (0.0);
    udp_conn_M->Timing.offsetTimes[2] = (0.0);
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

  /* External mode info */
  udp_conn_M->Sizes.checksums[0] = (152260148U);
  udp_conn_M->Sizes.checksums[1] = (856364839U);
  udp_conn_M->Sizes.checksums[2] = (48648007U);
  udp_conn_M->Sizes.checksums[3] = (953207832U);

  {
    static const sysRanDType rtAlwaysEnabled = SUBSYS_RAN_BC_ENABLE;
    static RTWExtModeInfo rt_ExtModeInfo;
    static const sysRanDType *systemRan[5];
    udp_conn_M->extModeInfo = (&rt_ExtModeInfo);
    rteiSetSubSystemActiveVectorAddresses(&rt_ExtModeInfo, systemRan);
    systemRan[0] = &rtAlwaysEnabled;
    systemRan[1] = &rtAlwaysEnabled;
    systemRan[2] = &rtAlwaysEnabled;
    systemRan[3] = &rtAlwaysEnabled;
    systemRan[4] = &rtAlwaysEnabled;
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
    udp_conn_B.Gain = 0.0;
    udp_conn_B.Sum = 0.0;
    udp_conn_B.RateTransition1 = 0.0;
    udp_conn_B.Constant2 = 0.0;
    udp_conn_B.Gain1 = 0.0;
    udp_conn_B.Sum1 = 0.0;
    udp_conn_B.RateTransition2 = 0.0;
    udp_conn_B.umin_scale1 = 0.0;
    udp_conn_B.time_UTC1[0] = 0.0;
    udp_conn_B.time_UTC1[1] = 0.0;
    udp_conn_B.time_UTC1[2] = 0.0;
    udp_conn_B.time_UTC1[3] = 0.0;
    udp_conn_B.time_UTC1_a[0] = 0.0;
    udp_conn_B.time_UTC1_a[1] = 0.0;
    udp_conn_B.time_UTC1_a[2] = 0.0;
    udp_conn_B.time_UTC1_a[3] = 0.0;
    udp_conn_B.umin_scale1_g = 0.0;
    udp_conn_B.umin_scale1_gc = 0.0;
    udp_conn_B.time_UTC1_i[0] = 0.0;
    udp_conn_B.time_UTC1_i[1] = 0.0;
    udp_conn_B.time_UTC1_i[2] = 0.0;
    udp_conn_B.time_UTC1_i[3] = 0.0;
    udp_conn_B.RateTransition4 = 0.0;
    udp_conn_B.RateTransition6 = 0.0;
    udp_conn_B.umin_scale1_o = 0.0;
    udp_conn_B.xk1[0] = 0.0;
    udp_conn_B.xk1[1] = 0.0;
    udp_conn_B.xk1[2] = 0.0;
    udp_conn_B.xk1[3] = 0.0;
    udp_conn_B.u = 0.0;
    udp_conn_B.xk1_k[0] = 0.0;
    udp_conn_B.xk1_k[1] = 0.0;
    udp_conn_B.xk1_k[2] = 0.0;
    udp_conn_B.xk1_k[3] = 0.0;
    udp_conn_B.u_n = 0.0;
    udp_conn_B.xk1_p[0] = 0.0;
    udp_conn_B.xk1_p[1] = 0.0;
    udp_conn_B.xk1_p[2] = 0.0;
    udp_conn_B.xk1_p[3] = 0.0;
    udp_conn_B.u_j = 0.0;
    udp_conn_B.xk1_c[0] = 0.0;
    udp_conn_B.xk1_c[1] = 0.0;
    udp_conn_B.xk1_c[2] = 0.0;
    udp_conn_B.xk1_c[3] = 0.0;
    udp_conn_B.u_c = 0.0;
  }

  /* parameters */
  udp_conn_M->defaultParam = ((real_T *)&udp_conn_P);

  /* states (dwork) */
  udp_conn_M->dwork = ((void *) &udp_conn_DW);
  (void) memset((void *)&udp_conn_DW, 0,
                sizeof(DW_udp_conn_T));
  udp_conn_DW.last_mv_DSTATE = 0.0;
  udp_conn_DW.last_mv_DSTATE_c = 0.0;
  udp_conn_DW.last_mv_DSTATE_m = 0.0;
  udp_conn_DW.last_mv_DSTATE_cl = 0.0;
  udp_conn_DW.last_x_PreviousInput[0] = 0.0;
  udp_conn_DW.last_x_PreviousInput[1] = 0.0;
  udp_conn_DW.last_x_PreviousInput[2] = 0.0;
  udp_conn_DW.last_x_PreviousInput[3] = 0.0;
  udp_conn_DW.last_x_PreviousInput_a[0] = 0.0;
  udp_conn_DW.last_x_PreviousInput_a[1] = 0.0;
  udp_conn_DW.last_x_PreviousInput_a[2] = 0.0;
  udp_conn_DW.last_x_PreviousInput_a[3] = 0.0;
  udp_conn_DW.last_x_PreviousInput_g[0] = 0.0;
  udp_conn_DW.last_x_PreviousInput_g[1] = 0.0;
  udp_conn_DW.last_x_PreviousInput_g[2] = 0.0;
  udp_conn_DW.last_x_PreviousInput_g[3] = 0.0;
  udp_conn_DW.last_x_PreviousInput_b[0] = 0.0;
  udp_conn_DW.last_x_PreviousInput_b[1] = 0.0;
  udp_conn_DW.last_x_PreviousInput_b[2] = 0.0;
  udp_conn_DW.last_x_PreviousInput_b[3] = 0.0;

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
  udp_conn_M->Sizes.numSampTimes = (3);/* Number of sample times */
  udp_conn_M->Sizes.numBlocks = (186); /* Number of blocks */
  udp_conn_M->Sizes.numBlockIO = (48); /* Number of block outputs */
  udp_conn_M->Sizes.numBlockPrms = (144);/* Sum of parameter "widths" */
  return udp_conn_M;
}

/*========================================================================*
 * End of Classic call interface                                          *
 *========================================================================*/
