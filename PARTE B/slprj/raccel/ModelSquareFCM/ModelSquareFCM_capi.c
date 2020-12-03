#include "__cf_ModelSquareFCM.h"
#include "rtw_capi.h"
#ifdef HOST_CAPI_BUILD
#include "ModelSquareFCM_capi_host.h"
#define sizeof(s) ((size_t)(0xFFFF))
#undef rt_offsetof
#define rt_offsetof(s,el) ((uint16_T)(0xFFFF))
#define TARGET_CONST
#define TARGET_STRING(s) (s)    
#else
#include "builtin_typeid_types.h"
#include "ModelSquareFCM.h"
#include "ModelSquareFCM_capi.h"
#include "ModelSquareFCM_private.h"
#ifdef LIGHT_WEIGHT_CAPI
#define TARGET_CONST                  
#define TARGET_STRING(s)               (NULL)                    
#else
#define TARGET_CONST                   const
#define TARGET_STRING(s)               (s)
#endif
#endif
static const rtwCAPI_Signals rtBlockSignals [ ] = { { 0 , 0 , TARGET_STRING (
"ModelSquareFCM/Integrator" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } ,
{ 1 , 0 , TARGET_STRING ( "ModelSquareFCM/Product" ) , TARGET_STRING ( "" ) ,
0 , 0 , 0 , 0 , 0 } , { 2 , 0 , TARGET_STRING (
"ModelSquareFCM/Signal Generator" ) , TARGET_STRING ( "u(k)" ) , 0 , 0 , 0 ,
0 , 0 } , { 3 , 0 , TARGET_STRING ( "ModelSquareFCM/Sum" ) , TARGET_STRING (
"" ) , 0 , 0 , 0 , 0 , 0 } , { 4 , 0 , TARGET_STRING (
"ModelSquareFCM/Transfer Fcn" ) , TARGET_STRING ( "y(k)" ) , 0 , 0 , 0 , 0 ,
0 } , { 5 , 0 , TARGET_STRING ( "ModelSquareFCM/Unit Delay" ) , TARGET_STRING
( "u(k-1)" ) , 0 , 0 , 0 , 0 , 1 } , { 6 , 0 , TARGET_STRING (
"ModelSquareFCM/Unit Delay1" ) , TARGET_STRING ( "u(k-2)" ) , 0 , 0 , 0 , 0 ,
1 } , { 7 , 0 , TARGET_STRING ( "ModelSquareFCM/Unit Delay2" ) ,
TARGET_STRING ( "u(k-3)" ) , 0 , 0 , 0 , 0 , 1 } , { 8 , 0 , TARGET_STRING (
"ModelSquareFCM/Unit Delay3" ) , TARGET_STRING ( "y(k-1)" ) , 0 , 0 , 0 , 0 ,
1 } , { 9 , 0 , TARGET_STRING ( "ModelSquareFCM/Unit Delay4" ) ,
TARGET_STRING ( "y(k-2)" ) , 0 , 0 , 0 , 0 , 1 } , { 10 , 0 , TARGET_STRING (
"ModelSquareFCM/Unit Delay5" ) , TARGET_STRING ( "y(k-3)" ) , 0 , 0 , 0 , 0 ,
1 } , { 11 , 1 , TARGET_STRING (
"ModelSquareFCM/Fuzzy Logic  Controller  with Ruleviewer/Fuzzy Logic Controller"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 12 , 0 , TARGET_STRING (
"ModelSquareFCM/Fuzzy Logic  Controller  with Ruleviewer/Zero-Order Hold" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 2 } , { 13 , 1 , TARGET_STRING (
 "ModelSquareFCM/Fuzzy Logic  Controller  with Ruleviewer/Fuzzy Logic Controller/Defuzzify Outputs"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 0 , 0 , ( NULL ) , ( NULL
) , 0 , 0 , 0 , 0 , 0 } } ; static const rtwCAPI_BlockParameters
rtBlockParameters [ ] = { { 14 , TARGET_STRING ( "ModelSquareFCM/Integrator"
) , TARGET_STRING ( "InitialCondition" ) , 0 , 0 , 0 } , { 15 , TARGET_STRING
( "ModelSquareFCM/Signal Generator" ) , TARGET_STRING ( "Amplitude" ) , 0 , 0
, 0 } , { 16 , TARGET_STRING ( "ModelSquareFCM/Signal Generator" ) ,
TARGET_STRING ( "Frequency" ) , 0 , 0 , 0 } , { 17 , TARGET_STRING (
"ModelSquareFCM/Transfer Fcn" ) , TARGET_STRING ( "A" ) , 0 , 2 , 0 } , { 18
, TARGET_STRING ( "ModelSquareFCM/Transfer Fcn" ) , TARGET_STRING ( "C" ) , 0
, 3 , 0 } , { 19 , TARGET_STRING ( "ModelSquareFCM/Unit Delay" ) ,
TARGET_STRING ( "InitialCondition" ) , 0 , 0 , 0 } , { 20 , TARGET_STRING (
"ModelSquareFCM/Unit Delay1" ) , TARGET_STRING ( "InitialCondition" ) , 0 , 0
, 0 } , { 21 , TARGET_STRING ( "ModelSquareFCM/Unit Delay2" ) , TARGET_STRING
( "InitialCondition" ) , 0 , 0 , 0 } , { 22 , TARGET_STRING (
"ModelSquareFCM/Unit Delay3" ) , TARGET_STRING ( "InitialCondition" ) , 0 , 0
, 0 } , { 23 , TARGET_STRING ( "ModelSquareFCM/Unit Delay4" ) , TARGET_STRING
( "InitialCondition" ) , 0 , 0 , 0 } , { 24 , TARGET_STRING (
"ModelSquareFCM/Unit Delay5" ) , TARGET_STRING ( "InitialCondition" ) , 0 , 0
, 0 } , { 25 , TARGET_STRING (
 "ModelSquareFCM/Fuzzy Logic  Controller  with Ruleviewer/Fuzzy Logic Controller/Output Sample Points"
) , TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 0 , ( NULL ) , ( NULL ) , 0 ,
0 , 0 } } ; static const rtwCAPI_ModelParameters rtModelParameters [ ] = { {
0 , ( NULL ) , 0 , 0 , 0 } } ;
#ifndef HOST_CAPI_BUILD
static void * rtDataAddrMap [ ] = { & rtB . p4hgg5u1di , & rtB . pscr3snzpm ,
& rtB . nz0o15v2fr , & rtB . kowqnwte5g , & rtB . afl4hqinfn , & rtB .
pfgq40ccxy , & rtB . nemq2hjter , & rtB . dhsswuc42m , & rtB . hjv5d3p4m1 , &
rtB . aph5oovzhh , & rtB . gbdjjsqnje , & rtB . ozoet0a4nu , & rtB .
iv241rxjgr [ 0 ] , & rtB . ozoet0a4nu , & rtP . Integrator_IC , & rtP .
SignalGenerator_Amplitude , & rtP . SignalGenerator_Frequency , & rtP .
TransferFcn_A [ 0 ] , & rtP . TransferFcn_C [ 0 ] , & rtP .
UnitDelay_InitialCondition , & rtP . UnitDelay1_InitialCondition , & rtP .
UnitDelay2_InitialCondition , & rtP . UnitDelay3_InitialCondition , & rtP .
UnitDelay4_InitialCondition , & rtP . UnitDelay5_InitialCondition , & rtP .
OutputSamplePoints_Value , } ; static int32_T * rtVarDimsAddrMap [ ] = { (
NULL ) } ;
#endif
static TARGET_CONST rtwCAPI_DataTypeMap rtDataTypeMap [ ] = { { "double" ,
"real_T" , 0 , 0 , sizeof ( real_T ) , SS_DOUBLE , 0 , 0 } } ;
#ifdef HOST_CAPI_BUILD
#undef sizeof
#endif
static TARGET_CONST rtwCAPI_ElementMap rtElementMap [ ] = { { ( NULL ) , 0 ,
0 , 0 , 0 } , } ; static const rtwCAPI_DimensionMap rtDimensionMap [ ] = { {
rtwCAPI_SCALAR , 0 , 2 , 0 } , { rtwCAPI_VECTOR , 2 , 2 , 0 } , {
rtwCAPI_VECTOR , 4 , 2 , 0 } , { rtwCAPI_VECTOR , 6 , 2 , 0 } } ; static
const uint_T rtDimensionArray [ ] = { 1 , 1 , 6 , 1 , 3 , 1 , 1 , 3 } ;
static const real_T rtcapiStoredFloats [ ] = { 0.0 , 0.025 , 2.0 } ; static
const rtwCAPI_FixPtMap rtFixPtMap [ ] = { { ( NULL ) , ( NULL ) ,
rtwCAPI_FIX_RESERVED , 0 , 0 , 0 } , } ; static const rtwCAPI_SampleTimeMap
rtSampleTimeMap [ ] = { { ( const void * ) & rtcapiStoredFloats [ 0 ] , (
const void * ) & rtcapiStoredFloats [ 0 ] , 0 , 0 } , { ( const void * ) &
rtcapiStoredFloats [ 1 ] , ( const void * ) & rtcapiStoredFloats [ 0 ] , 1 ,
0 } , { ( const void * ) & rtcapiStoredFloats [ 2 ] , ( const void * ) &
rtcapiStoredFloats [ 0 ] , 2 , 0 } } ; static rtwCAPI_ModelMappingStaticInfo
mmiStatic = { { rtBlockSignals , 14 , ( NULL ) , 0 , ( NULL ) , 0 } , {
rtBlockParameters , 12 , rtModelParameters , 0 } , { ( NULL ) , 0 } , {
rtDataTypeMap , rtDimensionMap , rtFixPtMap , rtElementMap , rtSampleTimeMap
, rtDimensionArray } , "float" , { 2490509260U , 3199274809U , 3591690211U ,
1927858193U } , ( NULL ) , 0 , 0 } ; const rtwCAPI_ModelMappingStaticInfo *
ModelSquareFCM_GetCAPIStaticMap ( void ) { return & mmiStatic ; }
#ifndef HOST_CAPI_BUILD
void ModelSquareFCM_InitializeDataMapInfo ( void ) { rtwCAPI_SetVersion ( ( *
rt_dataMapInfoPtr ) . mmi , 1 ) ; rtwCAPI_SetStaticMap ( ( *
rt_dataMapInfoPtr ) . mmi , & mmiStatic ) ; rtwCAPI_SetLoggingStaticMap ( ( *
rt_dataMapInfoPtr ) . mmi , ( NULL ) ) ; rtwCAPI_SetDataAddressMap ( ( *
rt_dataMapInfoPtr ) . mmi , rtDataAddrMap ) ; rtwCAPI_SetVarDimsAddressMap (
( * rt_dataMapInfoPtr ) . mmi , rtVarDimsAddrMap ) ;
rtwCAPI_SetInstanceLoggingInfo ( ( * rt_dataMapInfoPtr ) . mmi , ( NULL ) ) ;
rtwCAPI_SetChildMMIArray ( ( * rt_dataMapInfoPtr ) . mmi , ( NULL ) ) ;
rtwCAPI_SetChildMMIArrayLen ( ( * rt_dataMapInfoPtr ) . mmi , 0 ) ; }
#else
#ifdef __cplusplus
extern "C" {
#endif
void ModelSquareFCM_host_InitializeDataMapInfo (
ModelSquareFCM_host_DataMapInfo_T * dataMap , const char * path ) {
rtwCAPI_SetVersion ( dataMap -> mmi , 1 ) ; rtwCAPI_SetStaticMap ( dataMap ->
mmi , & mmiStatic ) ; rtwCAPI_SetDataAddressMap ( dataMap -> mmi , NULL ) ;
rtwCAPI_SetVarDimsAddressMap ( dataMap -> mmi , NULL ) ; rtwCAPI_SetPath (
dataMap -> mmi , path ) ; rtwCAPI_SetFullPath ( dataMap -> mmi , NULL ) ;
rtwCAPI_SetChildMMIArray ( dataMap -> mmi , ( NULL ) ) ;
rtwCAPI_SetChildMMIArrayLen ( dataMap -> mmi , 0 ) ; }
#ifdef __cplusplus
}
#endif
#endif
