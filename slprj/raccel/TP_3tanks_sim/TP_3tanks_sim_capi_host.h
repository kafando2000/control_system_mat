#ifndef TP_3tanks_sim_cap_host_h__
#define TP_3tanks_sim_cap_host_h__
#ifdef HOST_CAPI_BUILD
#include "rtw_capi.h"
#include "rtw_modelmap_simtarget.h"
typedef struct { rtwCAPI_ModelMappingInfo mmi ; }
TP_3tanks_sim_host_DataMapInfo_T ;
#ifdef __cplusplus
extern "C" {
#endif
void TP_3tanks_sim_host_InitializeDataMapInfo ( TP_3tanks_sim_host_DataMapInfo_T
* dataMap , const char * path ) ;
#ifdef __cplusplus
}
#endif
#endif
#endif
