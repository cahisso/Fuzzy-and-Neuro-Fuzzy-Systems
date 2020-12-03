#include "__cf_ModelSquareFCM.h"
#ifndef RTW_HEADER_ModelSquareFCM_h_
#define RTW_HEADER_ModelSquareFCM_h_
#include <stddef.h>
#include <string.h>
#include "rtw_modelmap.h"
#ifndef ModelSquareFCM_COMMON_INCLUDES_
#define ModelSquareFCM_COMMON_INCLUDES_
#include <stdlib.h>
#include "rtwtypes.h"
#include "simtarget/slSimTgtSigstreamRTW.h"
#include "simtarget/slSimTgtSlioCoreRTW.h"
#include "simtarget/slSimTgtSlioClientsRTW.h"
#include "simtarget/slSimTgtSlioSdiRTW.h"
#include "sigstream_rtw.h"
#include "simstruc.h"
#include "fixedpoint.h"
#include "raccel.h"
#include "slsv_diagnostic_codegen_c_api.h"
#include "rt_logging.h"
#include "dt_info.h"
#include "ext_work.h"
#endif
#include "ModelSquareFCM_types.h"
#include "multiword_types.h"
#include "mwmathutil.h"
#include "rt_defines.h"
#include "rtGetInf.h"
#include "rt_nonfinite.h"
#define MODEL_NAME ModelSquareFCM
#define NSAMPLE_TIMES (4) 
#define NINPUTS (0)       
#define NOUTPUTS (0)     
#define NBLOCKIO (13) 
#define NUM_ZC_EVENTS (0) 
#ifndef NCSTATES
#define NCSTATES (4)   
#elif NCSTATES != 4
#error Invalid specification of NCSTATES defined in compiler command
#endif
#ifndef rtmGetDataMapInfo
#define rtmGetDataMapInfo(rtm) (*rt_dataMapInfoPtr)
#endif
#ifndef rtmSetDataMapInfo
#define rtmSetDataMapInfo(rtm, val) (rt_dataMapInfoPtr = &val)
#endif
#ifndef IN_RACCEL_MAIN
#endif
typedef struct { real_T afl4hqinfn ; real_T hjv5d3p4m1 ; real_T aph5oovzhh ;
real_T gbdjjsqnje ; real_T pfgq40ccxy ; real_T nemq2hjter ; real_T dhsswuc42m
; real_T p4hgg5u1di ; real_T iv241rxjgr [ 6 ] ; real_T kowqnwte5g ; real_T
pscr3snzpm ; real_T nz0o15v2fr ; real_T ozoet0a4nu ; } B ; typedef struct {
real_T ibbcz5ezoa ; real_T ksl24mocme ; real_T isaloycosl ; real_T p0measvac2
; real_T prp1tr1hgg ; real_T apz2qxtnrj ; struct { void * LoggedData ; }
kbg0e0vtoh ; struct { void * LoggedData ; } pfhhqztabe ; } DW ; typedef
struct { real_T bjsnhwunkd [ 3 ] ; real_T j5xa1qzpvy ; } X ; typedef struct {
real_T bjsnhwunkd [ 3 ] ; real_T j5xa1qzpvy ; } XDot ; typedef struct {
boolean_T bjsnhwunkd [ 3 ] ; boolean_T j5xa1qzpvy ; } XDis ; typedef struct {
real_T bjsnhwunkd [ 3 ] ; real_T j5xa1qzpvy ; } CStateAbsTol ; typedef struct
{ rtwCAPI_ModelMappingInfo mmi ; } DataMapInfo ; struct P_ { real_T
OutputSamplePoints_Value ; real_T TransferFcn_A [ 3 ] ; real_T TransferFcn_C
[ 3 ] ; real_T UnitDelay3_InitialCondition ; real_T
UnitDelay4_InitialCondition ; real_T UnitDelay5_InitialCondition ; real_T
UnitDelay_InitialCondition ; real_T UnitDelay1_InitialCondition ; real_T
UnitDelay2_InitialCondition ; real_T Integrator_IC ; real_T
SignalGenerator_Amplitude ; real_T SignalGenerator_Frequency ; } ; extern
const char * RT_MEMORY_ALLOCATION_ERROR ; extern B rtB ; extern X rtX ;
extern DW rtDW ; extern P rtP ; extern const rtwCAPI_ModelMappingStaticInfo *
ModelSquareFCM_GetCAPIStaticMap ( void ) ; extern SimStruct * const rtS ;
extern const int_T gblNumToFiles ; extern const int_T gblNumFrFiles ; extern
const int_T gblNumFrWksBlocks ; extern rtInportTUtable * gblInportTUtables ;
extern const char * gblInportFileName ; extern const int_T
gblNumRootInportBlks ; extern const int_T gblNumModelInputs ; extern const
int_T gblInportDataTypeIdx [ ] ; extern const int_T gblInportDims [ ] ;
extern const int_T gblInportComplex [ ] ; extern const int_T
gblInportInterpoFlag [ ] ; extern const int_T gblInportContinuous [ ] ;
extern const int_T gblParameterTuningTid ; extern DataMapInfo *
rt_dataMapInfoPtr ; extern rtwCAPI_ModelMappingInfo * rt_modelMapInfoPtr ;
void MdlOutputs ( int_T tid ) ; void MdlOutputsParameterSampleTime ( int_T
tid ) ; void MdlUpdate ( int_T tid ) ; void MdlTerminate ( void ) ; void
MdlInitializeSizes ( void ) ; void MdlInitializeSampleTimes ( void ) ;
SimStruct * raccel_register_model ( void ) ;
#endif
