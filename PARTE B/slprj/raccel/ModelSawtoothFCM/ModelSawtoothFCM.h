#include "__cf_ModelSawtoothFCM.h"
#ifndef RTW_HEADER_ModelSawtoothFCM_h_
#define RTW_HEADER_ModelSawtoothFCM_h_
#include <stddef.h>
#include <string.h>
#include "rtw_modelmap.h"
#ifndef ModelSawtoothFCM_COMMON_INCLUDES_
#define ModelSawtoothFCM_COMMON_INCLUDES_
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
#include "ModelSawtoothFCM_types.h"
#include "multiword_types.h"
#include "mwmathutil.h"
#include "rt_defines.h"
#include "rtGetInf.h"
#include "rt_nonfinite.h"
#define MODEL_NAME ModelSawtoothFCM
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
typedef struct { real_T o3cmgj1itm ; real_T g5xv5ebib4 ; real_T igcxebrhwg ;
real_T cqgr1db4ba ; real_T clfp2g2mmf ; real_T i3y0s0sye1 ; real_T nzp0z5yqcn
; real_T ads2okyo3d ; real_T orw15e3rce [ 6 ] ; real_T jp4li5rzzy ; real_T
b440f41izs ; real_T d2ddjc5byk ; real_T nmvc2in4u3 ; } B ; typedef struct {
real_T cxdvtmmch0 ; real_T kevnix5pix ; real_T ibwyhzfaga ; real_T mcvvrzx2f5
; real_T crwiariqyn ; real_T ba0rsl4rsd ; struct { void * LoggedData ; }
kdcwwlklr3 ; struct { void * LoggedData ; } iweoptd5az ; } DW ; typedef
struct { real_T ilhtgtegxl [ 3 ] ; real_T i41nrif3cs ; } X ; typedef struct {
real_T ilhtgtegxl [ 3 ] ; real_T i41nrif3cs ; } XDot ; typedef struct {
boolean_T ilhtgtegxl [ 3 ] ; boolean_T i41nrif3cs ; } XDis ; typedef struct {
real_T ilhtgtegxl [ 3 ] ; real_T i41nrif3cs ; } CStateAbsTol ; typedef struct
{ rtwCAPI_ModelMappingInfo mmi ; } DataMapInfo ; struct P_ { real_T
OutputSamplePoints_Value ; real_T TransferFcn_A [ 3 ] ; real_T TransferFcn_C
[ 3 ] ; real_T UnitDelay3_InitialCondition ; real_T
UnitDelay4_InitialCondition ; real_T UnitDelay5_InitialCondition ; real_T
UnitDelay_InitialCondition ; real_T UnitDelay1_InitialCondition ; real_T
UnitDelay2_InitialCondition ; real_T Integrator_IC ; real_T
SignalGenerator_Amplitude ; real_T SignalGenerator_Frequency ; } ; extern
const char * RT_MEMORY_ALLOCATION_ERROR ; extern B rtB ; extern X rtX ;
extern DW rtDW ; extern P rtP ; extern const rtwCAPI_ModelMappingStaticInfo *
ModelSawtoothFCM_GetCAPIStaticMap ( void ) ; extern SimStruct * const rtS ;
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
