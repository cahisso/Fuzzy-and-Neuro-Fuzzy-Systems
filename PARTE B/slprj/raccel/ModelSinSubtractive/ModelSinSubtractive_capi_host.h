#include "__cf_ModelSinSubtractive.h"
#ifndef RTW_HEADER_ModelSinSubtractive_cap_host_h_
#define RTW_HEADER_ModelSinSubtractive_cap_host_h_
#ifdef HOST_CAPI_BUILD
#include "rtw_capi.h"
#include "rtw_modelmap.h"
typedef struct { rtwCAPI_ModelMappingInfo mmi ; }
ModelSinSubtractive_host_DataMapInfo_T ;
#ifdef __cplusplus
extern "C" {
#endif
void ModelSinSubtractive_host_InitializeDataMapInfo (
ModelSinSubtractive_host_DataMapInfo_T * dataMap , const char * path ) ;
#ifdef __cplusplus
}
#endif
#endif
#endif
