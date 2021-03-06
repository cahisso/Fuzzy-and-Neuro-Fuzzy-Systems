#include "ModelSawtoothFCM_capi_host.h"
static ModelSawtoothFCM_host_DataMapInfo_T root;
static int initialized = 0;
rtwCAPI_ModelMappingInfo *getRootMappingInfo()
{
    if (initialized == 0) {
        initialized = 1;
        ModelSawtoothFCM_host_InitializeDataMapInfo(&(root), "ModelSawtoothFCM");
    }
    return &root.mmi;
}

rtwCAPI_ModelMappingInfo *mexFunction() {return(getRootMappingInfo());}
