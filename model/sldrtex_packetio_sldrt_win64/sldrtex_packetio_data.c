/*
 * sldrtex_packetio_data.c
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

/* Block parameters (auto storage) */
P_sldrtex_packetio_T sldrtex_packetio_P = {
  50.0,                                /* Mask Parameter: PacketOutput_MaxMissedTicks
                                        * Referenced by: '<Root>/Packet Output'
                                        */
  50.0,                                /* Mask Parameter: PacketInput_MaxMissedTicks
                                        * Referenced by: '<Root>/Packet Input'
                                        */
  0.0,                                 /* Mask Parameter: PacketOutput_YieldWhenWaiting
                                        * Referenced by: '<Root>/Packet Output'
                                        */
  0.0,                                 /* Mask Parameter: PacketInput_YieldWhenWaiting
                                        * Referenced by: '<Root>/Packet Input'
                                        */
  1,                                   /* Mask Parameter: PacketOutput_PacketID
                                        * Referenced by: '<Root>/Packet Output'
                                        */
  1,                                   /* Mask Parameter: PacketInput_PacketID
                                        * Referenced by: '<Root>/Packet Input'
                                        */

  /*  Expression: 1:4
   * Referenced by: '<Root>/Sine Wave (double)'
   */
  { 1.0, 2.0, 3.0, 4.0 },
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<Root>/Sine Wave (double)'
                                        */
  2.0,                                 /* Expression: 2
                                        * Referenced by: '<Root>/Sine Wave (double)'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<Root>/Sine Wave (double)'
                                        */

  /*  Expression: 1:8
   * Referenced by: '<Root>/Sine Wave (int8)'
   */
  { 1.0, 2.0, 3.0, 4.0, 5.0, 6.0, 7.0, 8.0 },
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<Root>/Sine Wave (int8)'
                                        */
  2.0,                                 /* Expression: 2
                                        * Referenced by: '<Root>/Sine Wave (int8)'
                                        */
  0.0                                  /* Expression: 0
                                        * Referenced by: '<Root>/Sine Wave (int8)'
                                        */
};
