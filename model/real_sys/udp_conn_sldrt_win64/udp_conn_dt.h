/*
 * udp_conn_dt.h
 *
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Code generation for model "udp_conn".
 *
 * Model version              : 1.137
 * Simulink Coder version : 9.0 (R2018b) 24-May-2018
 * C source code generated on : Mon Dec  3 20:56:32 2018
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
  { (char_T *)(&udp_conn_B.Sum), 0, 0, 193 },

  { (char_T *)(&udp_conn_B.PacketInput_o1), 7, 0, 2 },

  { (char_T *)(&udp_conn_B.DataTypeConversion), 3, 0, 1 },

  { (char_T *)(&udp_conn_B.iAout[0]), 8, 0, 108 }
  ,

  { (char_T *)(&udp_conn_DW.last_mv_DSTATE[0]), 0, 0, 189 },

  { (char_T *)(&udp_conn_DW.PacketInput_PWORK), 11, 0, 5 },

  { (char_T *)(&udp_conn_DW.systemEnable), 6, 0, 1 },

  { (char_T *)(&udp_conn_DW.Memory_PreviousInput[0]), 8, 0, 108 }
};

/* data type transition table for block I/O structure */
static DataTypeTransitionTable rtBTransTable = {
  8U,
  rtBTransitions
};

/* data type transitions for Parameters structure */
static DataTypeTransition rtPTransitions[] = {
  { (char_T *)(&udp_conn_P.PacketInput_MaxMissedTicks), 0, 0, 6 },

  { (char_T *)(&udp_conn_P.PacketInput_PacketID), 6, 0, 3 },

  { (char_T *)(&udp_conn_P.Gain_Gain), 0, 0, 237 },

  { (char_T *)(&udp_conn_P.Memory_InitialCondition[0]), 8, 0, 108 }
};

/* data type transition table for Parameters structure */
static DataTypeTransitionTable rtPTransTable = {
  4U,
  rtPTransitions
};

/* [EOF] udp_conn_dt.h */
