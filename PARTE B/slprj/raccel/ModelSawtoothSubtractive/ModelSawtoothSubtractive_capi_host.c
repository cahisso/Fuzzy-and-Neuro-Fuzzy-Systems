#include "ModelSawtoothSubtractive_capi_host.h"
static ModelSawtoothSubtractive_host_DataMapInfo_T root;
static int initialized = 0;
rtwCAPI_ModelMappingInfo *getRootMappingInfo()
{
    if (initialized == 0) {
        initialized = 1;
        ModelSawtoothSubtractive_host_InitializeDataMapInfo(&(root), "ModelSawtoothSubtractive");
    }
    return &root.mmi;
}

rtwCAPI_ModelMappingInfo *mexFunction() {return(getRootMappingInfo());}
