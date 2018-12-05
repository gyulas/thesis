/*
 * udp_conn_data.c
 *
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Code generation for model "udp_conn".
 *
 * Model version              : 1.164
 * Simulink Coder version : 9.0 (R2018b) 24-May-2018
 * C source code generated on : Wed Dec  5 21:57:55 2018
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
  /* Mask Parameter: PacketInput1_MaxMissedTicks
   * Referenced by: '<Root>/Packet Input1'
   */
  1000.0,

  /* Mask Parameter: PacketInput1_YieldWhenWaiting
   * Referenced by: '<Root>/Packet Input1'
   */
  1.0,

  /* Mask Parameter: PacketInput1_PacketID
   * Referenced by: '<Root>/Packet Input1'
   */
  1,

  /* Mask Parameter: CompareToConstant_const
   * Referenced by: '<S1>/Constant'
   */
  25U,

  /* Mask Parameter: CompareToConstant1_const
   * Referenced by: '<S2>/Constant'
   */
  26U,

  /* Expression: lastx+xoff
   * Referenced by: '<S5>/last_x'
   */
  { 0.0, 0.0, 0.0, 0.0 },

  /* Expression: lastu+uoff
   * Referenced by: '<S5>/last_mv'
   */
  0.0,

  /* Expression: 0.1
   * Referenced by: '<Root>/Gain'
   */
  0.1,

  /* Expression: 273
   * Referenced by: '<Root>/Constant1'
   */
  273.0,

  /* Expression: 333
   * Referenced by: '<Root>/Constant2'
   */
  333.0,

  /* Expression: 0.1
   * Referenced by: '<Root>/Gain1'
   */
  0.1,

  /* Expression: zeros(1,1)
   * Referenced by: '<S4>/umin_zero'
   */
  0.0,

  /* Expression: RMVscale
   * Referenced by: '<S5>/umin_scale'
   */
  1.0,

  /* Expression: zeros(1,1)
   * Referenced by: '<S4>/umax_zero'
   */
  0.0,

  /* Expression: RMVscale
   * Referenced by: '<S5>/umax_scale'
   */
  1.0,

  /* Expression: zeros(1,1)
   * Referenced by: '<S4>/ymin_zero'
   */
  0.0,

  /* Expression: RYscale
   * Referenced by: '<S5>/ymin_scale'
   */
  0.033333333333333333,

  /* Expression: zeros(1,1)
   * Referenced by: '<S4>/ymax_zero'
   */
  0.0,

  /* Expression: RYscale
   * Referenced by: '<S5>/ymax_scale'
   */
  0.033333333333333333,

  /* Expression: zeros(1,1)
   * Referenced by: '<S4>/E_zero'
   */
  0.0,

  /* Expression: MVscale(:,ones(1,max(nCC,1)))'
   * Referenced by: '<S5>/umin_scale4'
   */
  1.0,

  /* Expression: zeros(1,1)
   * Referenced by: '<S4>/F_zero'
   */
  0.0,

  /* Expression: Yscale(:,ones(1,max(nCC,1)))'
   * Referenced by: '<S5>/ymin_scale1'
   */
  30.0,

  /* Expression: zeros(1,1)
   * Referenced by: '<S4>/G_zero'
   */
  0.0,

  /* Expression: zeros(1,1)
   * Referenced by: '<S4>/S_zero'
   */
  0.0,

  /* Expression: MDscale(:,ones(1,max(nCC,1)))'
   * Referenced by: '<S5>/ymin_scale2'
   */
  30.0,

  /* Expression: zeros(1,1)
   * Referenced by: '<S4>/switch_zero'
   */
  0.0,

  /* Expression: zeros(1,1)
   * Referenced by: '<S4>/ext.mv_zero'
   */
  0.0,

  /* Expression: RMVscale
   * Referenced by: '<S5>/ext.mv_scale'
   */
  1.0,

  /* Expression: zeros(1,1)
   * Referenced by: '<S4>/mv.target_zero'
   */
  0.0,

  /* Expression: RMVscale
   * Referenced by: '<S5>/ext.mv_scale1'
   */
  1.0,

  /* Expression: zeros(1,1)
   * Referenced by: '<S4>/y.wt_zero'
   */
  0.0,

  /* Expression: zeros(1,1)
   * Referenced by: '<S4>/u.wt_zero'
   */
  0.0,

  /* Expression: zeros(1,1)
   * Referenced by: '<S4>/du.wt_zero'
   */
  0.0,

  /* Expression: zeros(1,1)
   * Referenced by: '<S4>/ecr.wt_zero'
   */
  0.0,

  /* Expression: MVscale
   * Referenced by: '<S5>/umin_scale1'
   */
  1.0,

  /* Expression: iA
   * Referenced by: '<S5>/Memory'
   */
  { 0, 0 },

  /* Computed Parameter: Gain2_Gain
   * Referenced by: '<Root>/Gain2'
   */
  255U,

  /* Computed Parameter: Gain3_Gain
   * Referenced by: '<Root>/Gain3'
   */
  255U,

  /* Computed Parameter: Switch_Threshold
   * Referenced by: '<Root>/Switch'
   */
  0U,

  /* Computed Parameter: Switch1_Threshold
   * Referenced by: '<Root>/Switch1'
   */
  0U
};
