#ifndef TP_3tanks_sim_h_
#define TP_3tanks_sim_h_
#ifndef TP_3tanks_sim_COMMON_INCLUDES_
#define TP_3tanks_sim_COMMON_INCLUDES_
#include <stdlib.h>
#include "rtwtypes.h"
#include "sigstream_rtw.h"
#include "simtarget/slSimTgtSigstreamRTW.h"
#include "simtarget/slSimTgtSlioCoreRTW.h"
#include "simtarget/slSimTgtSlioClientsRTW.h"
#include "simtarget/slSimTgtSlioSdiRTW.h"
#include "simstruc.h"
#include "fixedpoint.h"
#include "raccel.h"
#include "slsv_diagnostic_codegen_c_api.h"
#include "rt_logging_simtarget.h"
#include "rt_nonfinite.h"
#include "math.h"
#include "dt_info.h"
#include "ext_work.h"
#endif
#include "TP_3tanks_sim_types.h"
#include <stddef.h>
#include "rtw_modelmap_simtarget.h"
#include "rt_defines.h"
#include <string.h>
#include "rtGetInf.h"
#define MODEL_NAME TP_3tanks_sim
#define NSAMPLE_TIMES (3) 
#define NINPUTS (0)       
#define NOUTPUTS (0)     
#define NBLOCKIO (50) 
#define NUM_ZC_EVENTS (0) 
#ifndef NCSTATES
#define NCSTATES (7)   
#elif NCSTATES != 7
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
typedef struct { real_T pyylnyrkyk ; real_T fmrdtcysiy ; real_T gzvje4yheq ;
real_T ho30ajnioy ; real_T oni5qfqo4q ; real_T aka4x4s0xm ; real_T nwl0ktgay5
; real_T ldqo4vwyfq ; real_T anf324wzqo ; real_T cd5xvvmkid ; real_T
aktygf4nak ; real_T lh1rtamgwh ; real_T keno31gsoo ; real_T dxfp3apcae ;
real_T h3txu4rfn2 ; real_T f4zspnal5r ; real_T lrudrzn5eh ; real_T d5gtrcd41l
; real_T i2ubtdbpju ; real_T jcpfllxmgs ; real_T ndg5bbvt5t ; real_T
kqg5clejgl ; real_T gepgmjqvmm ; real_T oifske3om2 ; real_T l3cekvdxlr ;
real_T k3aiqwltvr ; real_T lfoknfwtyg ; real_T mowvetndkm ; real_T dckkxlj4az
; real_T kpowoosouy ; real_T lsawee0sba ; real_T fx1u3t3o3i ; real_T
mqzdj3zbcj ; real_T d5tmbkoarw ; real_T jrevm41lxg ; real_T ndeq0grkrm ;
real_T l3es4ln0w5 ; real_T nk000jat4c ; real_T aktocjtkco ; real_T dkgc1qgtrh
; real_T drc5u4dikf ; real_T ny1xywtzn1 ; real_T lhc3o3c552 ; real_T
frc20fcpgj ; real_T prgwjhcjyd ; real_T hkeghjoqcd ; real_T ponnfk2reb ;
real_T i5v2w35adz ; real_T mkd5pkiwbq ; real_T owaggtb3jh ; } B ; typedef
struct { struct { void * LoggedData ; } h5vm5r025g ; int_T kryzqeen4d ; int_T
ck4nryb5ej ; int_T m5ds05o3uu ; int_T ltm5x5tfmn ; int_T bdm1pgxghb ; int_T
jmoyubmnmq ; int8_T gzq4y3twyi ; int8_T iqeu5zjhk3 ; int8_T dnginylpjf ; } DW
; typedef struct { real_T eseewfpcuj ; real_T ooqktvaqan ; real_T nlxhyj5cz0
; real_T nk1wqkfkcn ; real_T pvsdiskcjh ; real_T jjhz5pfjng ; real_T
likfjwdaky ; } X ; typedef struct { real_T eseewfpcuj ; real_T ooqktvaqan ;
real_T nlxhyj5cz0 ; real_T nk1wqkfkcn ; real_T pvsdiskcjh ; real_T jjhz5pfjng
; real_T likfjwdaky ; } XDot ; typedef struct { boolean_T eseewfpcuj ;
boolean_T ooqktvaqan ; boolean_T nlxhyj5cz0 ; boolean_T nk1wqkfkcn ;
boolean_T pvsdiskcjh ; boolean_T jjhz5pfjng ; boolean_T likfjwdaky ; } XDis ;
typedef struct { real_T eseewfpcuj ; real_T ooqktvaqan ; real_T nlxhyj5cz0 ;
real_T nk1wqkfkcn ; real_T pvsdiskcjh ; real_T jjhz5pfjng ; real_T likfjwdaky
; } CStateAbsTol ; typedef struct { real_T eseewfpcuj ; real_T ooqktvaqan ;
real_T nlxhyj5cz0 ; real_T nk1wqkfkcn ; real_T pvsdiskcjh ; real_T jjhz5pfjng
; real_T likfjwdaky ; } CXPtMin ; typedef struct { real_T eseewfpcuj ; real_T
ooqktvaqan ; real_T nlxhyj5cz0 ; real_T nk1wqkfkcn ; real_T pvsdiskcjh ;
real_T jjhz5pfjng ; real_T likfjwdaky ; } CXPtMax ; typedef struct { real_T
ewdt3cvlje ; real_T ctthrybdh1 ; real_T d1smsbx1gh ; real_T nj3fqchqbx ;
real_T jevoy4zkd3 ; real_T eqvri2dtl4 ; } ZCV ; typedef struct {
rtwCAPI_ModelMappingInfo mmi ; } DataMapInfo ; struct P_ { real_T S1 ; real_T
S2 ; real_T S3 ; real_T Sp ; real_T g ; real_T k1 ; real_T k2 ; real_T mu13 ;
real_T mu20 ; real_T mu32 ; real_T PID1_D ; real_T PID2_D ; real_T PID1_I ;
real_T PID2_I ; real_T PID1_InitialConditionForFilter ; real_T
PID2_InitialConditionForFilter ; real_T PID1_InitialConditionForIntegrator ;
real_T PID2_InitialConditionForIntegrator ; real_T PID1_N ; real_T PID2_N ;
real_T PID1_P ; real_T PID2_P ; real_T Integrator_IC ; real_T
Integrator_IC_nctofbypav ; real_T Integrator_IC_fn2t5hk1b2 ; real_T SP1_Value
; real_T SP2_Value ; } ; extern const char_T * RT_MEMORY_ALLOCATION_ERROR ;
extern B rtB ; extern X rtX ; extern DW rtDW ; extern P rtP ; extern mxArray
* mr_TP_3tanks_sim_GetDWork ( ) ; extern void mr_TP_3tanks_sim_SetDWork ( const
mxArray * ssDW ) ; extern mxArray *
mr_TP_3tanks_sim_GetSimStateDisallowedBlocks ( ) ; extern const
rtwCAPI_ModelMappingStaticInfo * TP_3tanks_sim_GetCAPIStaticMap ( void ) ;
extern SimStruct * const rtS ; extern DataMapInfo * rt_dataMapInfoPtr ;
extern rtwCAPI_ModelMappingInfo * rt_modelMapInfoPtr ; void MdlOutputs ( int_T
tid ) ; void MdlOutputsParameterSampleTime ( int_T tid ) ; void MdlUpdate ( int_T tid ) ; void MdlTerminate ( void ) ; void MdlInitializeSizes ( void ) ; void MdlInitializeSampleTimes ( void ) ; SimStruct * raccel_register_model ( ssExecutionInfo * executionInfo ) ;
#endif
