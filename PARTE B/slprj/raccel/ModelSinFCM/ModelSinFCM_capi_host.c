#include "ModelSinFCM_capi_host.h"
static ModelSinFCM_host_DataMapInfo_T root;
static int initialized = 0;
rtwCAPI_ModelMappingInfo *getRootMappingInfo()
{
    if (initialized == 0) {
        initialized = 1;
        ModelSinFCM_host_InitializeDataMapInfo(&(root), "ModelSinFCM");
    }
    return &root.mmi;
}

rtwCAPI_ModelMappingInfo *mexFunction() {return(getRootMappingInfo());}
