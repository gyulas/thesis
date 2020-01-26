/*
 * udp_conn_data.c
 *
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Code generation for model "udp_conn".
 *
 * Model version              : 1.125
 * Simulink Coder version : 8.11 (R2016b) 25-Aug-2016
 * C source code generated on : Thu Nov 29 01:25:24 2018
 *
 * Target selection: sldrt.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "udp_conn.h"
#include "udp_conn_private.h"

/* Block parameters (auto storage) */
P_udp_conn_T udp_conn_P = {
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
  50.0,                                /* Expression: 50
                                        * Referenced by: '<Root>/Sine Wave (double) 0.5Hz'
                                        */
  50.0,                                /* Expression: 50
                                        * Referenced by: '<Root>/Sine Wave (double) 0.5Hz'
                                        */
  0.31,                                /* Expression: 0.62*0.5
                                        * Referenced by: '<Root>/Sine Wave (double) 0.5Hz'
                                        */
  0.0                                  /* Expression: 0
                                        * Referenced by: '<Root>/Sine Wave (double) 0.5Hz'
                                        */
};
