#include "__cf_Padlofutes.h"
#ifndef RTW_HEADER_Padlofutes_h_
#define RTW_HEADER_Padlofutes_h_
#include <string.h>
#include <stddef.h>
#include "rtw_modelmap.h"
#ifndef Padlofutes_COMMON_INCLUDES_
#define Padlofutes_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "slsv_diagnostic_codegen_c_api.h"
#include "simstruc.h"
#include "fixedpoint.h"
#endif
#include "Padlofutes_types.h"
#include "multiword_types.h"
#include "rt_nonfinite.h"
typedef struct { real_T n23vgcf35m ; } iiq2vtahrh ; struct lfenq35a4pk_ {
real_T P_0 ; real_T P_1 ; real_T P_2 ; real_T P_3 ; real_T P_4 ; real_T P_5 ;
real_T P_6 ; real_T P_7 ; real_T P_8 ; real_T P_9 ; real_T P_10 ; } ; struct
ldf3nd23nz { struct SimStruct_tag * _mdlRefSfcnS ; struct {
rtwCAPI_ModelMappingInfo mmi ; rtwCAPI_ModelMapLoggingInstanceInfo
mmiLogInstanceInfo ; sysRanDType * systemRan [ 2 ] ; int_T systemTid [ 2 ] ;
} DataMapInfo ; struct { int_T mdlref_GlobalTID [ 2 ] ; } Timing ; } ;
typedef struct { iiq2vtahrh rtb ; l5ag5mbxv2 rtm ; } ap0aiyhvxwb ; extern
void iffcfnyznu ( SimStruct * _mdlRefSfcnS , int_T mdlref_TID0 , int_T
mdlref_TID1 , l5ag5mbxv2 * const oaa5euk2iz , iiq2vtahrh * localB , void *
sysRanPtr , int contextTid , rtwCAPI_ModelMappingInfo * rt_ParentMMI , const
char_T * rt_ChildPath , int_T rt_ChildMMIIdx , int_T rt_CSTATEIdx ) ; extern
void mr_Padlofutes_MdlInfoRegFcn ( SimStruct * mdlRefSfcnS , char_T *
modelName , int_T * retVal ) ; extern mxArray * mr_Padlofutes_GetDWork (
const ap0aiyhvxwb * mdlrefDW ) ; extern void mr_Padlofutes_SetDWork (
ap0aiyhvxwb * mdlrefDW , const mxArray * ssDW ) ; extern void
mr_Padlofutes_RegisterSimStateChecksum ( SimStruct * S ) ; extern mxArray *
mr_Padlofutes_GetSimStateDisallowedBlocks ( ) ; extern const
rtwCAPI_ModelMappingStaticInfo * Padlofutes_GetCAPIStaticMap ( void ) ;
extern void Padlofutes ( const real_T * fhtycvposp , const real_T *
mnsmrovqwg , const real_T * dbvojo22yj , const real_T * dk1v51ffab , real_T *
iujdagvy0v , iiq2vtahrh * localB ) ; extern void PadlofutesTID1 ( iiq2vtahrh
* localB ) ; extern void myjxmqf5uc ( l5ag5mbxv2 * const oaa5euk2iz ) ;
#endif
