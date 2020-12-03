#include "__cf_ModelSinSubtractive.h"
#ifndef RTW_HEADER_ModelSinSubtractive_h_
#define RTW_HEADER_ModelSinSubtractive_h_
#include <stddef.h>
#include <string.h>
#include "rtw_modelmap.h"
#ifndef ModelSinSubtractive_COMMON_INCLUDES_
#define ModelSinSubtractive_COMMON_INCLUDES_
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
#include "ModelSinSubtractive_types.h"
#include "multiword_types.h"
#include "mwmathutil.h"
#include "rt_defines.h"
#include "rtGetInf.h"
#include "rt_nonfinite.h"
#define MODEL_NAME ModelSinSubtractive
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
typedef struct { real_T gvwecitbto ; real_T nmtqc4pdl1 ; real_T exwastb10m ;
real_T gcuuy2sa0y ; real_T pdjzgfaxfm ; real_T polb5q05dh ; real_T naft2q4p3v
; real_T dpr2c4zkgy ; real_T ig1knjv2ht [ 6 ] ; real_T ieggzvopuq ; real_T
dccdydh3mb ; real_T ofr5q4u455 ; real_T o1e3iwnwjt ; } B ; typedef struct {
real_T ffivs0dop4 ; real_T hzhfyreth4 ; real_T kwavuotffo ; real_T dfmv1z0a2o
; real_T h54i5qz1fn ; real_T cstkwtxlwv ; struct { void * LoggedData ; }
pp3idxzo2g ; struct { void * LoggedData ; } ekjfjdrtol ; } DW ; typedef
struct { real_T jgttm3vruc [ 3 ] ; real_T hqktmca22n ; } X ; typedef struct {
real_T jgttm3vruc [ 3 ] ; real_T hqktmca22n ; } XDot ; typedef struct {
boolean_T jgttm3vruc [ 3 ] ; boolean_T hqktmca22n ; } XDis ; typedef struct {
real_T jgttm3vruc [ 3 ] ; real_T hqktmca22n ; } CStateAbsTol ; typedef struct
{ rtwCAPI_ModelMappingInfo mmi ; } DataMapInfo ; struct P_ { real_T
OutputSamplePoints_Value ; real_T TransferFcn_A [ 3 ] ; real_T TransferFcn_C
[ 3 ] ; real_T UnitDelay3_InitialCondition ; real_T
UnitDelay4_InitialCondition ; real_T UnitDelay5_InitialCondition ; real_T
UnitDelay_InitialCondition ; real_T UnitDelay1_InitialCondition ; real_T
UnitDelay2_InitialCondition ; real_T Integrator_IC ; real_T
SignalGenerator_Amplitude ; real_T SignalGenerator_Frequency ; } ; extern
const char * RT_MEMORY_ALLOCATION_ERROR ; extern B rtB ; extern X rtX ;
extern DW rtDW ; extern P rtP ; extern const rtwCAPI_ModelMappingStaticInfo *
ModelSinSubtractive_GetCAPIStaticMap ( void ) ; extern SimStruct * const rtS
; extern const int_T gblNumToFiles ; extern const int_T gblNumFrFiles ;
extern const int_T gblNumFrWksBlocks ; extern rtInportTUtable *
gblInportTUtables ; extern const char * gblInportFileName ; extern const
int_T gblNumRootInportBlks ; extern const int_T gblNumModelInputs ; extern
const int_T gblInportDataTypeIdx [ ] ; extern const int_T gblInportDims [ ] ;
extern const int_T gblInportComplex [ ] ; extern const int_T
gblInportInterpoFlag [ ] ; extern const int_T gblInportContinuous [ ] ;
extern const int_T gblParameterTuningTid ; extern DataMapInfo *
rt_dataMapInfoPtr ; extern rtwCAPI_ModelMappingInfo * rt_modelMapInfoPtr ;
void MdlOutputs ( int_T tid ) ; void MdlOutputsParameterSampleTime ( int_T
tid ) ; void MdlUpdate ( int_T tid ) ; void MdlTerminate ( void ) ; void
MdlInitializeSizes ( void ) ; void MdlInitializeSampleTimes ( void ) ;
SimStruct * raccel_register_model ( void ) ;
#endif
