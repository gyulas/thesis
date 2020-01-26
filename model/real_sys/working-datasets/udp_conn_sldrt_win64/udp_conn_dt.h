/*
 * udp_conn_dt.h
 *
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Code generation for model "udp_conn".
 *
 * Model version              : 1.155
 * Simulink Coder version : 9.0 (R2018b) 24-May-2018
 * C source code generated on : Tue Dec  4 21:42:53 2018
 *
 * Target selection: sldrt.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "ext_types.h"

/* data type size table */
static uint_T rtDataTypeSizes[] = {
  sizeof(real_T),
  sizeof(real32_T),
  sizeof(int8_T),
  sizeof(uint8_T),
  sizeof(int16_T),
  sizeof(uint16_T),
  sizeof(int32_T),
  sizeof(uint32_T),
  sizeof(boolean_T),
  sizeof(fcn_call_T),
  sizeof(int_T),
  sizeof(pointer_T),
  sizeof(action_T),
  2*sizeof(uint32_T)
};

/* data type name table */
static const char_T * rtDataTypeNames[] = {
  "real_T",
  "real32_T",
  "int8_T",
  "uint8_T",
  "int16_T",
  "uint16_T",
  "int32_T",
  "uint32_T",
  "boolean_T",
  "fcn_call_T",
  "int_T",
  "pointer_T",
  "action_T",
  "timer_uint32_pair_T"
};

/* data type transitions for block I/O structure */
static DataTypeTransition rtBTransitions[] = {
  { (char_T *)(&udp_conn_B.Constant), 0, 0, 9 },

  { (char_T *)(&udp_conn_B.PacketInput1_o15), 6, 0, 1 },

  { (char_T *)(&udp_conn_B.Sum2), 5, 0, 4 },

  { (char_T *)(&udp_conn_B.PacketInput1_o1), 3, 0, 15 }
  ,

  { (char_T *)(&udp_conn_DW.PacketInput1_PWORK), 11, 0, 6 }
};

/* data type transition table for block I/O structure */
static DataTypeTransitionTable rtBTransTable = {
  5U,
  rtBTransitions
};

/* data type transitions for Parameters structure */
static DataTypeTransition rtPTransitions[] = {
  { (char_T *)(&udp_conn_P.PacketOutput_InitialValue), 0, 0, 5 },

  { (char_T *)(&udp_conn_P.PacketInput1_PacketID), 6, 0, 2 },

  { (char_T *)(&udp_conn_P.CompareToConstant_const), 3, 0, 2 },

  { (char_T *)(&udp_conn_P.Constant_Value), 0, 0, 4 },

  { (char_T *)(&udp_conn_P.Gain2_Gain), 3, 0, 4 }
};

/* data type transition table for Parameters structure */
static DataTypeTransitionTable rtPTransTable = {
  5U,
  rtPTransitions
};

/* [EOF] udp_conn_dt.h */
