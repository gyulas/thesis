/*
 * udp_conn_data.c
 *
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Code generation for model "udp_conn".
 *
 * Model version              : 1.140
 * Simulink Coder version : 9.0 (R2018b) 24-May-2018
 * C source code generated on : Mon Dec  3 21:17:32 2018
 *
 * Target selection: sldrt.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "udp_conn.h"
#include "udp_conn_private.h"

/* Block parameters (default storage) */
P_udp_conn_T udp_conn_P = {
  /* Mask Parameter: PacketInput_MaxMissedTicks
   * Referenced by: '<Root>/Packet Input'
   */
  50.0,

  /* Mask Parameter: PacketOutput_MaxMissedTicks
   * Referenced by: '<Root>/Packet Output'
   */
  50.0,

  /* Mask Parameter: PacketInput_YieldWhenWaiting
   * Referenced by: '<Root>/Packet Input'
   */
  0.0,

  /* Mask Parameter: PacketOutput_YieldWhenWaiting
   * Referenced by: '<Root>/Packet Output'
   */
  0.0,

  /* Mask Parameter: PacketInput_PacketID
   * Referenced by: '<Root>/Packet Input'
   */
  1,

  /* Mask Parameter: PacketOutput_PacketID
   * Referenced by: '<Root>/Packet Output'
   */
  1,

  /* Expression: 0.1
   * Referenced by: '<Root>/Gain'
   */
  0.1,

  /* Expression: 273
   * Referenced by: '<Root>/Constant1'
   */
  273.0,

  /* Expression: 0.1
   * Referenced by: '<Root>/Gain1'
   */
  0.1,

  /* Expression: 1
   * Referenced by: '<Root>/Constant'
   */
  1.0,

  /* Expression: 50
   * Referenced by: '<Root>/Sine Wave (double) 0.5Hz'
   */
  50.0,

  /* Expression: 50
   * Referenced by: '<Root>/Sine Wave (double) 0.5Hz'
   */
  50.0,

  /* Expression: 0.62*0.5
   * Referenced by: '<Root>/Sine Wave (double) 0.5Hz'
   */
  0.31,

  /* Computed Parameter: SineWavedouble05Hz_Hsin
   * Referenced by: '<Root>/Sine Wave (double) 0.5Hz'
   */
  0.041580662433290491,

  /* Computed Parameter: SineWavedouble05Hz_HCos
   * Referenced by: '<Root>/Sine Wave (double) 0.5Hz'
   */
  -0.99913515027327948,

  /* Computed Parameter: SineWavedouble05Hz_PSin
   * Referenced by: '<Root>/Sine Wave (double) 0.5Hz'
   */
  -0.041580662433290491,

  /* Computed Parameter: SineWavedouble05Hz_PCos
   * Referenced by: '<Root>/Sine Wave (double) 0.5Hz'
   */
  -0.99913515027327948
};
