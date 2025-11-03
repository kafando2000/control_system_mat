#include "TP_3tanks_sim_capi_host.h"
static TP_3tanks_sim_host_DataMapInfo_T root;
static int initialized = 0;
rtwCAPI_ModelMappingInfo *getRootMappingInfo()
{
    if (initialized == 0) {
        initialized = 1;
        TP_3tanks_sim_host_InitializeDataMapInfo(&(root), "TP_3tanks_sim");
    }
    return &root.mmi;
}

rtwCAPI_ModelMappingInfo *mexFunction(){return(getRootMappingInfo());}
