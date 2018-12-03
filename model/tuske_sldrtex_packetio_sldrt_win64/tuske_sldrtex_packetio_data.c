/*
 * tuske_sldrtex_packetio_data.c
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

/* Block parameters (default storage) */
P_tuske_sldrtex_packetio_T tuske_sldrtex_packetio_P = {
  /* Mask Parameter: PacketOutput_MaxMissedTicks
   * Referenced by: '<Root>/Packet Output'
   */
  50.0,

  /* Mask Parameter: PacketInput_MaxMissedTicks
   * Referenced by: '<Root>/Packet Input'
   */
  50.0,

  /* Mask Parameter: PacketOutput_YieldWhenWaiting
   * Referenced by: '<Root>/Packet Output'
   */
  0.0,

  /* Mask Parameter: PacketInput_YieldWhenWaiting
   * Referenced by: '<Root>/Packet Input'
   */
  0.0,

  /* Mask Parameter: PacketOutput_PacketID
   * Referenced by: '<Root>/Packet Output'
   */
  1,

  /* Mask Parameter: PacketInput_PacketID
   * Referenced by: '<Root>/Packet Input'
   */
  1,

  /* Expression: 100
   * Referenced by: '<Root>/Sine Wave (double)'
   */
  100.0,

  /* Expression: 0
   * Referenced by: '<Root>/Sine Wave (double)'
   */
  0.0,

  /* Expression: 2
   * Referenced by: '<Root>/Sine Wave (double)'
   */
  2.0,

  /* Expression: 0
   * Referenced by: '<Root>/Sine Wave (double)'
   */
  0.0
};
