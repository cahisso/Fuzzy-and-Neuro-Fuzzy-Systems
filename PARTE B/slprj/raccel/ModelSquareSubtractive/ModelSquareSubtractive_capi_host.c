#include "ModelSquareSubtractive_capi_host.h"
static ModelSquareSubtractive_host_DataMapInfo_T root;
static int initialized = 0;
rtwCAPI_ModelMappingInfo *getRootMappingInfo()
{
    if (initialized == 0) {
        initialized = 1;
        ModelSquareSubtractive_host_InitializeDataMapInfo(&(root), "ModelSquareSubtractive");
    }
    return &root.mmi;
}

rtwCAPI_ModelMappingInfo *mexFunction() {return(getRootMappingInfo());}
