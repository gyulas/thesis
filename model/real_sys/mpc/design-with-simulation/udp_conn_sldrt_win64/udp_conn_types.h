/*
 * udp_conn_types.h
 *
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Code generation for model "udp_conn".
 *
 * Model version              : 1.186
 * Simulink Coder version : 9.0 (R2018b) 24-May-2018
 * C source code generated on : Thu Dec  6 02:21:06 2018
 *
 * Target selection: sldrt.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_udp_conn_types_h_
#define RTW_HEADER_udp_conn_types_h_
#include "rtwtypes.h"
#include "multiword_types.h"
#include "zero_crossing_types.h"
#ifndef DEFINED_TYPEDEF_FOR_struct_NCeeZsuPm8jbYmu9ZorjKG_
#define DEFINED_TYPEDEF_FOR_struct_NCeeZsuPm8jbYmu9ZorjKG_

typedef struct {
  real_T values[411];
} struct_NCeeZsuPm8jbYmu9ZorjKG;

#endif

#ifndef DEFINED_TYPEDEF_FOR_struct_TABMGEHwDWar3kmUBAX3OF_
#define DEFINED_TYPEDEF_FOR_struct_TABMGEHwDWar3kmUBAX3OF_

typedef struct {
  real_T time[411];
  struct_NCeeZsuPm8jbYmu9ZorjKG signals;
} struct_TABMGEHwDWar3kmUBAX3OF;

#endif

#ifndef DEFINED_TYPEDEF_FOR_struct_fVwrsCDwRLBa0lKYF6x91E_
#define DEFINED_TYPEDEF_FOR_struct_fVwrsCDwRLBa0lKYF6x91E_

typedef struct {
  real_T values[35];
} struct_fVwrsCDwRLBa0lKYF6x91E;

#endif

#ifndef DEFINED_TYPEDEF_FOR_struct_TZ167RnX7fMz9vn71w8eL_
#define DEFINED_TYPEDEF_FOR_struct_TZ167RnX7fMz9vn71w8eL_

typedef struct {
  real_T time[35];
  struct_fVwrsCDwRLBa0lKYF6x91E signals;
} struct_TZ167RnX7fMz9vn71w8eL;

#endif

/* Custom Type definition for MATLAB Function: '<S50>/optimizer' */
#ifndef struct_tag_sjVaXfrJc3wv5faWU7kmQtG
#define struct_tag_sjVaXfrJc3wv5faWU7kmQtG

struct tag_sjVaXfrJc3wv5faWU7kmQtG
{
  boolean_T LT;
};

#endif                                 /*struct_tag_sjVaXfrJc3wv5faWU7kmQtG*/

#ifndef typedef_sjVaXfrJc3wv5faWU7kmQtG_udp_conn_T
#define typedef_sjVaXfrJc3wv5faWU7kmQtG_udp_conn_T

typedef struct tag_sjVaXfrJc3wv5faWU7kmQtG sjVaXfrJc3wv5faWU7kmQtG_udp_conn_T;

#endif                                 /*typedef_sjVaXfrJc3wv5faWU7kmQtG_udp_conn_T*/

#ifndef struct_tag_sKLpTDgVdadEcWmkZEqDlEH
#define struct_tag_sKLpTDgVdadEcWmkZEqDlEH

struct tag_sKLpTDgVdadEcWmkZEqDlEH
{
  uint32_T LT;
  uint32_T UT;
  uint32_T UHESS;
  uint32_T SYM;
  uint32_T POSDEF;
  uint32_T RECT;
  uint32_T TRANSA;
};

#endif                                 /*struct_tag_sKLpTDgVdadEcWmkZEqDlEH*/

#ifndef typedef_sKLpTDgVdadEcWmkZEqDlEH_udp_conn_T
#define typedef_sKLpTDgVdadEcWmkZEqDlEH_udp_conn_T

typedef struct tag_sKLpTDgVdadEcWmkZEqDlEH sKLpTDgVdadEcWmkZEqDlEH_udp_conn_T;

#endif                                 /*typedef_sKLpTDgVdadEcWmkZEqDlEH_udp_conn_T*/

#ifndef struct_tag_s9s8BC13iTohZXRbLMSIDHE
#define struct_tag_s9s8BC13iTohZXRbLMSIDHE

struct tag_s9s8BC13iTohZXRbLMSIDHE
{
  boolean_T CaseSensitivity;
  boolean_T StructExpand;
  boolean_T PartialMatching;
};

#endif                                 /*struct_tag_s9s8BC13iTohZXRbLMSIDHE*/

#ifndef typedef_s9s8BC13iTohZXRbLMSIDHE_udp_conn_T
#define typedef_s9s8BC13iTohZXRbLMSIDHE_udp_conn_T

typedef struct tag_s9s8BC13iTohZXRbLMSIDHE s9s8BC13iTohZXRbLMSIDHE_udp_conn_T;

#endif                                 /*typedef_s9s8BC13iTohZXRbLMSIDHE_udp_conn_T*/

/* Parameters (default storage) */
typedef struct P_udp_conn_T_ P_udp_conn_T;

/* Forward declaration for rtModel */
typedef struct tag_RTM_udp_conn_T RT_MODEL_udp_conn_T;

#endif                                 /* RTW_HEADER_udp_conn_types_h_ */
