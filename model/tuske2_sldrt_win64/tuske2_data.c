/*
 * tuske2_data.c
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

/* Block parameters (auto storage) */
P_tuske2_T tuske2_P = {
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
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<Root>/Pulse Generator'
                                        */
  8.0,                                 /* Expression: 8
                                        * Referenced by: '<Root>/Pulse Generator'
                                        */
  4.0,                                 /* Expression: 4
                                        * Referenced by: '<Root>/Pulse Generator'
                                        */
  0.0                                  /* Expression: 0
                                        * Referenced by: '<Root>/Pulse Generator'
                                        */
};
