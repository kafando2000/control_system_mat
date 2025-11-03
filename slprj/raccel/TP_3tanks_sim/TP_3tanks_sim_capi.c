#include "rtw_capi.h"
#ifdef HOST_CAPI_BUILD
#include "TP_3tanks_sim_capi_host.h"
#define sizeof(...) ((size_t)(0xFFFF))
#undef rt_offsetof
#define rt_offsetof(s,el) ((uint16_T)(0xFFFF))
#define TARGET_CONST
#define TARGET_STRING(s) (s)
#ifndef SS_UINT64
#define SS_UINT64 17
#endif
#ifndef SS_INT64
#define SS_INT64 18
#endif
#else
#include "builtin_typeid_types.h"
#include "TP_3tanks_sim.h"
#include "TP_3tanks_sim_capi.h"
#include "TP_3tanks_sim_private.h"
#ifdef LIGHT_WEIGHT_CAPI
#define TARGET_CONST
#define TARGET_STRING(s)               ((NULL))
#else
#define TARGET_CONST                   const
#define TARGET_STRING(s)               (s)
#endif
#endif
static const rtwCAPI_Signals rtBlockSignals [ ] = { { 0 , 0 , TARGET_STRING ( "TP_3tanks_sim/SP2" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 1 , 0 , TARGET_STRING ( "TP_3tanks_sim/Sum" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 2 , 0 , TARGET_STRING ( "TP_3tanks_sim/Sum1" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 3 , 0 , TARGET_STRING ( "TP_3tanks_sim/Subsystem/Tank1/Gain" ) , TARGET_STRING ( "l1_dot" ) , 0 , 0 , 0 , 0 , 1 } , { 4 , 0 , TARGET_STRING ( "TP_3tanks_sim/Subsystem/Tank1/Integrator" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 5 , 0 , TARGET_STRING ( "TP_3tanks_sim/Subsystem/Tank1/Sum" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 6 , 0 , TARGET_STRING ( "TP_3tanks_sim/Subsystem/Tank2/Gain" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 7 , 0 , TARGET_STRING ( "TP_3tanks_sim/Subsystem/Tank2/Integrator" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 8 , 0 , TARGET_STRING ( "TP_3tanks_sim/Subsystem/Tank2/Sum" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 9 , 0 , TARGET_STRING ( "TP_3tanks_sim/Subsystem/Tank3/Gain" ) , TARGET_STRING ( "l3_dot" ) , 0 , 0 , 0 , 0 , 1 } , { 10 , 0 , TARGET_STRING ( "TP_3tanks_sim/Subsystem/Tank3/Integrator" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 11 , 0 , TARGET_STRING ( "TP_3tanks_sim/Subsystem/Tank3/Sum" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 12 , 0 , TARGET_STRING ( "TP_3tanks_sim/Subsystem/Valve1/Product" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 13 , 0 , TARGET_STRING ( "TP_3tanks_sim/Subsystem/Valve2/Product" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 14 , 0 , TARGET_STRING ( "TP_3tanks_sim/Subsystem/pipe1/Abs" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 15 , 0 , TARGET_STRING ( "TP_3tanks_sim/Subsystem/pipe1/Gain" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 16 , 0 , TARGET_STRING ( "TP_3tanks_sim/Subsystem/pipe1/Gain1" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 2 } , { 17 , 0 , TARGET_STRING ( "TP_3tanks_sim/Subsystem/pipe1/Product" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 18 , 0 , TARGET_STRING ( "TP_3tanks_sim/Subsystem/pipe1/Sum" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 19 , 0 , TARGET_STRING ( "TP_3tanks_sim/Subsystem/pipe2/Abs" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 20 , 0 , TARGET_STRING ( "TP_3tanks_sim/Subsystem/pipe2/Gain" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 21 , 0 , TARGET_STRING ( "TP_3tanks_sim/Subsystem/pipe2/Gain1" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 2 } , { 22 , 0 , TARGET_STRING ( "TP_3tanks_sim/Subsystem/pipe2/Product" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 23 , 0 , TARGET_STRING ( "TP_3tanks_sim/Subsystem/pipe3/Abs" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 24 , 0 , TARGET_STRING ( "TP_3tanks_sim/Subsystem/pipe3/Gain" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 25 , 0 , TARGET_STRING ( "TP_3tanks_sim/Subsystem/pipe3/Gain1" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 2 } , { 26 , 0 , TARGET_STRING ( "TP_3tanks_sim/Subsystem/pipe3/Product" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 27 , 0 , TARGET_STRING ( "TP_3tanks_sim/Subsystem/pipe3/Sum" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 28 , 0 , TARGET_STRING ( "TP_3tanks_sim/control law/Subsystem1/1//k1" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 29 , 0 , TARGET_STRING ( "TP_3tanks_sim/control law/Subsystem1/Gain1" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 30 , 0 , TARGET_STRING ( "TP_3tanks_sim/control law/Subsystem1/Sum" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 31 , 0 , TARGET_STRING ( "TP_3tanks_sim/control law/Subsystem2/1//k2" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 32 , 0 , TARGET_STRING ( "TP_3tanks_sim/control law/Subsystem2/Gain1" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 33 , 0 , TARGET_STRING ( "TP_3tanks_sim/control law/Subsystem2/Sum" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 34 , 0 , TARGET_STRING ( "TP_3tanks_sim/PID1/D Gain/Internal Parameters/Derivative Gain" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 35 , 0 , TARGET_STRING ( "TP_3tanks_sim/PID1/Filter/Cont. Filter/Filter" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 36 , 0 , TARGET_STRING ( "TP_3tanks_sim/PID1/Filter/Cont. Filter/SumD" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 37 , 0 , TARGET_STRING ( "TP_3tanks_sim/PID1/I Gain/Internal Parameters/Integral Gain" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 38 , 0 , TARGET_STRING ( "TP_3tanks_sim/PID1/Integrator/Continuous/Integrator" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 39 , 0 , TARGET_STRING ( "TP_3tanks_sim/PID1/N Gain/Internal Parameters/Filter Coefficient" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 40 , 0 , TARGET_STRING ( "TP_3tanks_sim/PID1/Parallel P Gain/Internal Parameters/Proportional Gain" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 41 , 0 , TARGET_STRING ( "TP_3tanks_sim/PID1/Sum/Sum_PID/Sum" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 42 , 0 , TARGET_STRING ( "TP_3tanks_sim/PID2/D Gain/Internal Parameters/Derivative Gain" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 43 , 0 , TARGET_STRING ( "TP_3tanks_sim/PID2/Filter/Cont. Filter/Filter" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 44 , 0 , TARGET_STRING ( "TP_3tanks_sim/PID2/Filter/Cont. Filter/SumD" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 45 , 0 , TARGET_STRING ( "TP_3tanks_sim/PID2/I Gain/Internal Parameters/Integral Gain" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 46 , 0 , TARGET_STRING ( "TP_3tanks_sim/PID2/Integrator/Continuous/Integrator" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 47 , 0 , TARGET_STRING ( "TP_3tanks_sim/PID2/N Gain/Internal Parameters/Filter Coefficient" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 48 , 0 , TARGET_STRING ( "TP_3tanks_sim/PID2/Parallel P Gain/Internal Parameters/Proportional Gain" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 49 , 0 , TARGET_STRING ( "TP_3tanks_sim/PID2/Sum/Sum_PID/Sum" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 0 , 0 , ( NULL ) , ( NULL ) , 0 , 0 , 0 , 0 , 0 } } ; static const rtwCAPI_BlockParameters rtBlockParameters [ ] = { { 50 , TARGET_STRING ( "TP_3tanks_sim/PID1" ) , TARGET_STRING ( "P" ) , 0 , 0 , 0 } , { 51 , TARGET_STRING ( "TP_3tanks_sim/PID1" ) , TARGET_STRING ( "I" ) , 0 , 0 , 0 } , { 52 , TARGET_STRING ( "TP_3tanks_sim/PID1" ) , TARGET_STRING ( "D" ) , 0 , 0 , 0 } , { 53 , TARGET_STRING ( "TP_3tanks_sim/PID1" ) , TARGET_STRING ( "N" ) , 0 , 0 , 0 } , { 54 , TARGET_STRING ( "TP_3tanks_sim/PID1" ) , TARGET_STRING ( "InitialConditionForIntegrator" ) , 0 , 0 , 0 } , { 55 , TARGET_STRING ( "TP_3tanks_sim/PID1" ) , TARGET_STRING ( "InitialConditionForFilter" ) , 0 , 0 , 0 } , { 56 , TARGET_STRING ( "TP_3tanks_sim/PID2" ) , TARGET_STRING ( "P" ) , 0 , 0 , 0 } , { 57 , TARGET_STRING ( "TP_3tanks_sim/PID2" ) , TARGET_STRING ( "I" ) , 0 , 0 , 0 } , { 58 , TARGET_STRING ( "TP_3tanks_sim/PID2" ) , TARGET_STRING ( "D" ) , 0 , 0 , 0 } , { 59 , TARGET_STRING ( "TP_3tanks_sim/PID2" ) , TARGET_STRING ( "N" ) , 0 , 0 , 0 } , { 60 , TARGET_STRING ( "TP_3tanks_sim/PID2" ) , TARGET_STRING ( "InitialConditionForIntegrator" ) , 0 , 0 , 0 } , { 61 , TARGET_STRING ( "TP_3tanks_sim/PID2" ) , TARGET_STRING ( "InitialConditionForFilter" ) , 0 , 0 , 0 } , { 62 , TARGET_STRING ( "TP_3tanks_sim/SP1" ) , TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 63 , TARGET_STRING ( "TP_3tanks_sim/SP2" ) , TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 64 , TARGET_STRING ( "TP_3tanks_sim/Subsystem/Tank1/Integrator" ) , TARGET_STRING ( "InitialCondition" ) , 0 , 0 , 0 } , { 65 , TARGET_STRING ( "TP_3tanks_sim/Subsystem/Tank2/Integrator" ) , TARGET_STRING ( "InitialCondition" ) , 0 , 0 , 0 } , { 66 , TARGET_STRING ( "TP_3tanks_sim/Subsystem/Tank3/Integrator" ) , TARGET_STRING ( "InitialCondition" ) , 0 , 0 , 0 } , { 0 , ( NULL ) , ( NULL ) , 0 , 0 , 0 } } ; static int_T rt_LoggedStateIdxList [ ] = { - 1 } ; static const rtwCAPI_Signals rtRootInputs [ ] = { { 0 , 0 , ( NULL ) , ( NULL ) , 0 , 0 , 0 , 0 , 0 } } ; static const rtwCAPI_Signals rtRootOutputs [ ] = { { 0 , 0 , ( NULL ) , ( NULL ) , 0 , 0 , 0 , 0 , 0 } } ; static const rtwCAPI_ModelParameters rtModelParameters [ ] = { { 67 , TARGET_STRING ( "S1" ) , 0 , 0 , 0 } , { 68 , TARGET_STRING ( "S2" ) , 0 , 0 , 0 } , { 69 , TARGET_STRING ( "S3" ) , 0 , 0 , 0 } , { 70 , TARGET_STRING ( "Sp" ) , 0 , 0 , 0 } , { 71 , TARGET_STRING ( "g" ) , 0 , 0 , 0 } , { 72 , TARGET_STRING ( "k1" ) , 0 , 0 , 0 } , { 73 , TARGET_STRING ( "k2" ) , 0 , 0 , 0 } , { 74 , TARGET_STRING ( "mu13" ) , 0 , 0 , 0 } , { 75 , TARGET_STRING ( "mu20" ) , 0 , 0 , 0 } , { 76 , TARGET_STRING ( "mu32" ) , 0 , 0 , 0 } , { 0 , ( NULL ) , 0 , 0 , 0 } } ;
#ifndef HOST_CAPI_BUILD
static void * rtDataAddrMap [ ] = { & rtB . owaggtb3jh , & rtB . lh1rtamgwh ,
& rtB . gzvje4yheq , & rtB . fx1u3t3o3i , & rtB . fmrdtcysiy , & rtB .
lsawee0sba , & rtB . ponnfk2reb , & rtB . pyylnyrkyk , & rtB . hkeghjoqcd , &
rtB . mkd5pkiwbq , & rtB . ndg5bbvt5t , & rtB . i5v2w35adz , & rtB .
kpowoosouy , & rtB . drc5u4dikf , & rtB . oifske3om2 , & rtB . l3cekvdxlr , &
rtB . gepgmjqvmm , & rtB . k3aiqwltvr , & rtB . kqg5clejgl , & rtB .
lhc3o3c552 , & rtB . frc20fcpgj , & rtB . ny1xywtzn1 , & rtB . prgwjhcjyd , &
rtB . ndeq0grkrm , & rtB . l3es4ln0w5 , & rtB . jrevm41lxg , & rtB .
nk000jat4c , & rtB . d5tmbkoarw , & rtB . dckkxlj4az , & rtB . lfoknfwtyg , &
rtB . mowvetndkm , & rtB . dkgc1qgtrh , & rtB . mqzdj3zbcj , & rtB .
aktocjtkco , & rtB . ho30ajnioy , & rtB . oni5qfqo4q , & rtB . aka4x4s0xm , &
rtB . nwl0ktgay5 , & rtB . ldqo4vwyfq , & rtB . anf324wzqo , & rtB .
cd5xvvmkid , & rtB . aktygf4nak , & rtB . keno31gsoo , & rtB . dxfp3apcae , &
rtB . h3txu4rfn2 , & rtB . f4zspnal5r , & rtB . lrudrzn5eh , & rtB .
d5gtrcd41l , & rtB . i2ubtdbpju , & rtB . jcpfllxmgs , & rtP . PID1_P , & rtP
. PID1_I , & rtP . PID1_D , & rtP . PID1_N , & rtP .
PID1_InitialConditionForIntegrator , & rtP . PID1_InitialConditionForFilter ,
& rtP . PID2_P , & rtP . PID2_I , & rtP . PID2_D , & rtP . PID2_N , & rtP .
PID2_InitialConditionForIntegrator , & rtP . PID2_InitialConditionForFilter ,
& rtP . SP1_Value , & rtP . SP2_Value , & rtP . Integrator_IC_nctofbypav , &
rtP . Integrator_IC , & rtP . Integrator_IC_fn2t5hk1b2 , & rtP . S1 , & rtP .
S2 , & rtP . S3 , & rtP . Sp , & rtP . g , & rtP . k1 , & rtP . k2 , & rtP .
mu13 , & rtP . mu20 , & rtP . mu32 , } ; static int32_T * rtVarDimsAddrMap [
] = { ( NULL ) } ;
#endif
static TARGET_CONST rtwCAPI_DataTypeMap rtDataTypeMap [ ] = { { "double" ,
"real_T" , 0 , 0 , sizeof ( real_T ) , ( uint8_T ) SS_DOUBLE , 0 , 0 , 0 } }
;
#ifdef HOST_CAPI_BUILD
#undef sizeof
#endif
static TARGET_CONST rtwCAPI_ElementMap rtElementMap [ ] = { { ( NULL ) , 0 ,
0 , 0 , 0 } , } ; static const rtwCAPI_DimensionMap rtDimensionMap [ ] = { {
rtwCAPI_SCALAR , 0 , 2 , 0 } } ; static const uint_T rtDimensionArray [ ] = {
1 , 1 } ; static const real_T rtcapiStoredFloats [ ] = { 0.0 , 1.0 } ; static
const rtwCAPI_FixPtMap rtFixPtMap [ ] = { { ( NULL ) , ( NULL ) ,
rtwCAPI_FIX_RESERVED , 0 , 0 , ( boolean_T ) 0 } , } ; static const
rtwCAPI_SampleTimeMap rtSampleTimeMap [ ] = { { ( NULL ) , ( NULL ) , 2 , 0 }
, { ( const void * ) & rtcapiStoredFloats [ 0 ] , ( const void * ) &
rtcapiStoredFloats [ 0 ] , ( int8_T ) 0 , ( uint8_T ) 0 } , { ( const void *
) & rtcapiStoredFloats [ 0 ] , ( const void * ) & rtcapiStoredFloats [ 1 ] ,
( int8_T ) 1 , ( uint8_T ) 0 } } ; static rtwCAPI_ModelMappingStaticInfo
mmiStatic = { { rtBlockSignals , 50 , rtRootInputs , 0 , rtRootOutputs , 0 }
, { rtBlockParameters , 17 , rtModelParameters , 10 } , { ( NULL ) , 0 } , {
rtDataTypeMap , rtDimensionMap , rtFixPtMap , rtElementMap , rtSampleTimeMap
, rtDimensionArray } , "float" , { 4088835168U , 706497940U , 710590238U ,
3535080702U } , ( NULL ) , 0 , ( boolean_T ) 0 , rt_LoggedStateIdxList } ;
const rtwCAPI_ModelMappingStaticInfo * TP_3tanks_sim_GetCAPIStaticMap ( void
) { return & mmiStatic ; }
#ifndef HOST_CAPI_BUILD
void TP_3tanks_sim_InitializeDataMapInfo ( void ) { rtwCAPI_SetVersion ( ( *
rt_dataMapInfoPtr ) . mmi , 1 ) ; rtwCAPI_SetStaticMap ( ( *
rt_dataMapInfoPtr ) . mmi , & mmiStatic ) ; rtwCAPI_SetLoggingStaticMap ( ( *
rt_dataMapInfoPtr ) . mmi , ( NULL ) ) ; rtwCAPI_SetDataAddressMap ( ( *
rt_dataMapInfoPtr ) . mmi , rtDataAddrMap ) ; rtwCAPI_SetVarDimsAddressMap ( ( *
rt_dataMapInfoPtr ) . mmi , rtVarDimsAddrMap ) ;
rtwCAPI_SetInstanceLoggingInfo ( ( * rt_dataMapInfoPtr ) . mmi , ( NULL ) ) ;
rtwCAPI_SetChildMMIArray ( ( * rt_dataMapInfoPtr ) . mmi , ( NULL ) ) ;
rtwCAPI_SetChildMMIArrayLen ( ( * rt_dataMapInfoPtr ) . mmi , 0 ) ; }
#else
#ifdef __cplusplus
extern "C" {
#endif
void TP_3tanks_sim_host_InitializeDataMapInfo ( TP_3tanks_sim_host_DataMapInfo_T
* dataMap , const char * path ) { rtwCAPI_SetVersion ( dataMap -> mmi , 1 ) ;
rtwCAPI_SetStaticMap ( dataMap -> mmi , & mmiStatic ) ;
rtwCAPI_SetDataAddressMap ( dataMap -> mmi , ( NULL ) ) ;
rtwCAPI_SetVarDimsAddressMap ( dataMap -> mmi , ( NULL ) ) ; rtwCAPI_SetPath
( dataMap -> mmi , path ) ; rtwCAPI_SetFullPath ( dataMap -> mmi , ( NULL ) )
; rtwCAPI_SetChildMMIArray ( dataMap -> mmi , ( NULL ) ) ;
rtwCAPI_SetChildMMIArrayLen ( dataMap -> mmi , 0 ) ; }
#ifdef __cplusplus
}
#endif
#endif
