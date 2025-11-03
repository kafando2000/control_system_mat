/*
 * TP_3tanks_sim.h
 *
 * Trial License - for use to evaluate programs for possible purchase as
 * an end-user only.
 *
 * Code generation for model "TP_3tanks_sim".
 *
 * Model version              : 1.19
 * Simulink Coder version : 24.2 (R2024b) 21-Jun-2024
 * C++ source code generated on : Fri Mar 29 11:18:57 2024
 *
 * Target selection: ert.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: Intel->x86-64 (Linux 64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef TP_3tanks_sim_h_
#define TP_3tanks_sim_h_
#include "rtwtypes.h"
#include "rtw_continuous.h"
#include "rtw_solver.h"
#include "TP_3tanks_sim_types.h"

extern "C"
{

#include "rt_nonfinite.h"

}

extern "C"
{

#include "rtGetNaN.h"

}

#include <string.h>
#include <stddef.h>

/* Macros for accessing real-time model data structure */
#ifndef rtmGetContStateDisabled
#define rtmGetContStateDisabled(rtm)   ((rtm)->contStateDisabled)
#endif

#ifndef rtmSetContStateDisabled
#define rtmSetContStateDisabled(rtm, val) ((rtm)->contStateDisabled = (val))
#endif

#ifndef rtmGetContStates
#define rtmGetContStates(rtm)          ((rtm)->contStates)
#endif

#ifndef rtmSetContStates
#define rtmSetContStates(rtm, val)     ((rtm)->contStates = (val))
#endif

#ifndef rtmGetContTimeOutputInconsistentWithStateAtMajorStepFlag
#define rtmGetContTimeOutputInconsistentWithStateAtMajorStepFlag(rtm) ((rtm)->CTOutputIncnstWithState)
#endif

#ifndef rtmSetContTimeOutputInconsistentWithStateAtMajorStepFlag
#define rtmSetContTimeOutputInconsistentWithStateAtMajorStepFlag(rtm, val) ((rtm)->CTOutputIncnstWithState = (val))
#endif

#ifndef rtmGetDerivCacheNeedsReset
#define rtmGetDerivCacheNeedsReset(rtm) ((rtm)->derivCacheNeedsReset)
#endif

#ifndef rtmSetDerivCacheNeedsReset
#define rtmSetDerivCacheNeedsReset(rtm, val) ((rtm)->derivCacheNeedsReset = (val))
#endif

#ifndef rtmGetIntgData
#define rtmGetIntgData(rtm)            ((rtm)->intgData)
#endif

#ifndef rtmSetIntgData
#define rtmSetIntgData(rtm, val)       ((rtm)->intgData = (val))
#endif

#ifndef rtmGetOdeF
#define rtmGetOdeF(rtm)                ((rtm)->odeF)
#endif

#ifndef rtmSetOdeF
#define rtmSetOdeF(rtm, val)           ((rtm)->odeF = (val))
#endif

#ifndef rtmGetOdeY
#define rtmGetOdeY(rtm)                ((rtm)->odeY)
#endif

#ifndef rtmSetOdeY
#define rtmSetOdeY(rtm, val)           ((rtm)->odeY = (val))
#endif

#ifndef rtmGetPeriodicContStateIndices
#define rtmGetPeriodicContStateIndices(rtm) ((rtm)->periodicContStateIndices)
#endif

#ifndef rtmSetPeriodicContStateIndices
#define rtmSetPeriodicContStateIndices(rtm, val) ((rtm)->periodicContStateIndices = (val))
#endif

#ifndef rtmGetPeriodicContStateRanges
#define rtmGetPeriodicContStateRanges(rtm) ((rtm)->periodicContStateRanges)
#endif

#ifndef rtmSetPeriodicContStateRanges
#define rtmSetPeriodicContStateRanges(rtm, val) ((rtm)->periodicContStateRanges = (val))
#endif

#ifndef rtmGetZCCacheNeedsReset
#define rtmGetZCCacheNeedsReset(rtm)   ((rtm)->zCCacheNeedsReset)
#endif

#ifndef rtmSetZCCacheNeedsReset
#define rtmSetZCCacheNeedsReset(rtm, val) ((rtm)->zCCacheNeedsReset = (val))
#endif

#ifndef rtmGetdX
#define rtmGetdX(rtm)                  ((rtm)->derivs)
#endif

#ifndef rtmSetdX
#define rtmSetdX(rtm, val)             ((rtm)->derivs = (val))
#endif

#ifndef rtmGetErrorStatus
#define rtmGetErrorStatus(rtm)         ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
#define rtmSetErrorStatus(rtm, val)    ((rtm)->errorStatus = (val))
#endif

#ifndef rtmGetStopRequested
#define rtmGetStopRequested(rtm)       ((rtm)->Timing.stopRequestedFlag)
#endif

#ifndef rtmSetStopRequested
#define rtmSetStopRequested(rtm, val)  ((rtm)->Timing.stopRequestedFlag = (val))
#endif

#ifndef rtmGetStopRequestedPtr
#define rtmGetStopRequestedPtr(rtm)    (&((rtm)->Timing.stopRequestedFlag))
#endif

#ifndef rtmGetT
#define rtmGetT(rtm)                   (rtmGetTPtr((rtm))[0])
#endif

#ifndef rtmGetTPtr
#define rtmGetTPtr(rtm)                ((rtm)->Timing.t)
#endif

#ifndef rtmGetTStart
#define rtmGetTStart(rtm)              ((rtm)->Timing.tStart)
#endif

/* Block signals (default storage) */
struct B_TP_3tanks_sim_T {
  real_T Integrator;                   /* '<S110>/Integrator' */
  real_T Sum;                          /* '<Root>/Sum' */
  real_T FilterCoefficient;            /* '<S94>/Filter Coefficient' */
  real_T Gain;                         /* '<S110>/Gain' */
  real_T Integrator_o;                 /* '<S109>/Integrator' */
  real_T l3_dot;                       /* '<S111>/Gain' */
  real_T Sum2;                         /* '<Root>/Sum2' */
  real_T Sum1;                         /* '<Root>/Sum1' */
  real_T FilterCoefficient_j;          /* '<S42>/Filter Coefficient' */
  real_T l1_dot;                       /* '<S109>/Gain' */
};

/* Continuous states (default storage) */
struct X_TP_3tanks_sim_T {
  real_T Integrator_CSTATE;            /* '<S110>/Integrator' */
  real_T Filter_CSTATE;                /* '<S86>/Filter' */
  real_T Integrator_CSTATE_p;          /* '<S91>/Integrator' */
  real_T Integrator_CSTATE_h;          /* '<S111>/Integrator' */
  real_T Integrator_CSTATE_a;          /* '<S109>/Integrator' */
  real_T Integrator_CSTATE_l;          /* '<S39>/Integrator' */
  real_T Filter_CSTATE_p;              /* '<S34>/Filter' */
};

/* State derivatives (default storage) */
struct XDot_TP_3tanks_sim_T {
  real_T Integrator_CSTATE;            /* '<S110>/Integrator' */
  real_T Filter_CSTATE;                /* '<S86>/Filter' */
  real_T Integrator_CSTATE_p;          /* '<S91>/Integrator' */
  real_T Integrator_CSTATE_h;          /* '<S111>/Integrator' */
  real_T Integrator_CSTATE_a;          /* '<S109>/Integrator' */
  real_T Integrator_CSTATE_l;          /* '<S39>/Integrator' */
  real_T Filter_CSTATE_p;              /* '<S34>/Filter' */
};

/* State disabled  */
struct XDis_TP_3tanks_sim_T {
  boolean_T Integrator_CSTATE;         /* '<S110>/Integrator' */
  boolean_T Filter_CSTATE;             /* '<S86>/Filter' */
  boolean_T Integrator_CSTATE_p;       /* '<S91>/Integrator' */
  boolean_T Integrator_CSTATE_h;       /* '<S111>/Integrator' */
  boolean_T Integrator_CSTATE_a;       /* '<S109>/Integrator' */
  boolean_T Integrator_CSTATE_l;       /* '<S39>/Integrator' */
  boolean_T Filter_CSTATE_p;           /* '<S34>/Filter' */
};

#ifndef ODE3_INTG
#define ODE3_INTG

/* ODE3 Integration Data */
struct ODE3_IntgData {
  real_T *y;                           /* output */
  real_T *f[3];                        /* derivatives */
};

#endif

/* Real-time Model Data Structure */
struct tag_RTM_TP_3tanks_sim_T {
  const char_T *errorStatus;
  RTWSolverInfo solverInfo;
  X_TP_3tanks_sim_T *contStates;
  int_T *periodicContStateIndices;
  real_T *periodicContStateRanges;
  real_T *derivs;
  XDis_TP_3tanks_sim_T *contStateDisabled;
  boolean_T zCCacheNeedsReset;
  boolean_T derivCacheNeedsReset;
  boolean_T CTOutputIncnstWithState;
  real_T odeY[7];
  real_T odeF[3][7];
  ODE3_IntgData intgData;

  /*
   * Sizes:
   * The following substructure contains sizes information
   * for many of the model attributes such as inputs, outputs,
   * dwork, sample times, etc.
   */
  struct {
    int_T numContStates;
    int_T numPeriodicContStates;
    int_T numSampTimes;
  } Sizes;

  /*
   * Timing:
   * The following substructure contains information regarding
   * the timing information for the model.
   */
  struct {
    uint32_T clockTick0;
    uint32_T clockTickH0;
    time_T stepSize0;
    uint32_T clockTick1;
    uint32_T clockTickH1;
    time_T tStart;
    SimTimeStep simTimeStep;
    boolean_T stopRequestedFlag;
    time_T *t;
    time_T tArray[2];
  } Timing;
};

/* Class declaration for model TP_3tanks_sim */
class TP_3tanks_sim
{
  /* public data and function members */
 public:
  /* Real-Time Model get method */
  RT_MODEL_TP_3tanks_sim_T * getRTM();

  /* model start function */
  void start();

  /* Initial conditions function */
  void initialize();

  /* model step function */
  void step();

  /* model terminate function */
  static void terminate();

  /* Constructor */
  TP_3tanks_sim();

  /* Destructor */
  ~TP_3tanks_sim();

  /* private data and function members */
 private:
  /* Block signals */
  B_TP_3tanks_sim_T TP_3tanks_sim_B;

  /* Block continuous states */
  X_TP_3tanks_sim_T TP_3tanks_sim_X;

  /* Block Continuous state disabled vector */
  XDis_TP_3tanks_sim_T TP_3tanks_sim_XDis;

  /* Global mass matrix */

  /* Continuous states update member function*/
  void rt_ertODEUpdateContinuousStates(RTWSolverInfo *si );

  /* Derivatives member function */
  void TP_3tanks_sim_derivatives();

  /* Real-Time Model */
  RT_MODEL_TP_3tanks_sim_T TP_3tanks_sim_M;
};

extern volatile boolean_T stopRequested;
extern volatile boolean_T runModel;

/*-
 * These blocks were eliminated from the model due to optimizations:
 *
 * Block '<S36>/Integral Gain' : Eliminated nontunable gain of 1
 * Block '<S44>/Proportional Gain' : Eliminated nontunable gain of 1
 * Block '<S88>/Integral Gain' : Eliminated nontunable gain of 1
 * Block '<S96>/Proportional Gain' : Eliminated nontunable gain of 1
 */

/*-
 * The generated code includes comments that allow you to trace directly
 * back to the appropriate location in the model.  The basic format
 * is <system>/block_name, where system is the system number (uniquely
 * assigned by Simulink) and block_name is the name of the block.
 *
 * Use the MATLAB hilite_system command to trace the generated code back
 * to the model.  For example,
 *
 * hilite_system('<S3>')    - opens system 3
 * hilite_system('<S3>/Kp') - opens and selects block Kp which resides in S3
 *
 * Here is the system hierarchy for this model
 *
 * '<Root>' : 'TP_3tanks_sim'
 * '<S1>'   : 'TP_3tanks_sim/PID1'
 * '<S2>'   : 'TP_3tanks_sim/PID2'
 * '<S3>'   : 'TP_3tanks_sim/Process'
 * '<S4>'   : 'TP_3tanks_sim/control law'
 * '<S5>'   : 'TP_3tanks_sim/PID1/Anti-windup'
 * '<S6>'   : 'TP_3tanks_sim/PID1/D Gain'
 * '<S7>'   : 'TP_3tanks_sim/PID1/External Derivative'
 * '<S8>'   : 'TP_3tanks_sim/PID1/Filter'
 * '<S9>'   : 'TP_3tanks_sim/PID1/Filter ICs'
 * '<S10>'  : 'TP_3tanks_sim/PID1/I Gain'
 * '<S11>'  : 'TP_3tanks_sim/PID1/Ideal P Gain'
 * '<S12>'  : 'TP_3tanks_sim/PID1/Ideal P Gain Fdbk'
 * '<S13>'  : 'TP_3tanks_sim/PID1/Integrator'
 * '<S14>'  : 'TP_3tanks_sim/PID1/Integrator ICs'
 * '<S15>'  : 'TP_3tanks_sim/PID1/N Copy'
 * '<S16>'  : 'TP_3tanks_sim/PID1/N Gain'
 * '<S17>'  : 'TP_3tanks_sim/PID1/P Copy'
 * '<S18>'  : 'TP_3tanks_sim/PID1/Parallel P Gain'
 * '<S19>'  : 'TP_3tanks_sim/PID1/Reset Signal'
 * '<S20>'  : 'TP_3tanks_sim/PID1/Saturation'
 * '<S21>'  : 'TP_3tanks_sim/PID1/Saturation Fdbk'
 * '<S22>'  : 'TP_3tanks_sim/PID1/Sum'
 * '<S23>'  : 'TP_3tanks_sim/PID1/Sum Fdbk'
 * '<S24>'  : 'TP_3tanks_sim/PID1/Tracking Mode'
 * '<S25>'  : 'TP_3tanks_sim/PID1/Tracking Mode Sum'
 * '<S26>'  : 'TP_3tanks_sim/PID1/Tsamp - Integral'
 * '<S27>'  : 'TP_3tanks_sim/PID1/Tsamp - Ngain'
 * '<S28>'  : 'TP_3tanks_sim/PID1/postSat Signal'
 * '<S29>'  : 'TP_3tanks_sim/PID1/preInt Signal'
 * '<S30>'  : 'TP_3tanks_sim/PID1/preSat Signal'
 * '<S31>'  : 'TP_3tanks_sim/PID1/Anti-windup/Passthrough'
 * '<S32>'  : 'TP_3tanks_sim/PID1/D Gain/Internal Parameters'
 * '<S33>'  : 'TP_3tanks_sim/PID1/External Derivative/Error'
 * '<S34>'  : 'TP_3tanks_sim/PID1/Filter/Cont. Filter'
 * '<S35>'  : 'TP_3tanks_sim/PID1/Filter ICs/Internal IC - Filter'
 * '<S36>'  : 'TP_3tanks_sim/PID1/I Gain/Internal Parameters'
 * '<S37>'  : 'TP_3tanks_sim/PID1/Ideal P Gain/Passthrough'
 * '<S38>'  : 'TP_3tanks_sim/PID1/Ideal P Gain Fdbk/Disabled'
 * '<S39>'  : 'TP_3tanks_sim/PID1/Integrator/Continuous'
 * '<S40>'  : 'TP_3tanks_sim/PID1/Integrator ICs/Internal IC'
 * '<S41>'  : 'TP_3tanks_sim/PID1/N Copy/Disabled'
 * '<S42>'  : 'TP_3tanks_sim/PID1/N Gain/Internal Parameters'
 * '<S43>'  : 'TP_3tanks_sim/PID1/P Copy/Disabled'
 * '<S44>'  : 'TP_3tanks_sim/PID1/Parallel P Gain/Internal Parameters'
 * '<S45>'  : 'TP_3tanks_sim/PID1/Reset Signal/Disabled'
 * '<S46>'  : 'TP_3tanks_sim/PID1/Saturation/Passthrough'
 * '<S47>'  : 'TP_3tanks_sim/PID1/Saturation Fdbk/Disabled'
 * '<S48>'  : 'TP_3tanks_sim/PID1/Sum/Sum_PID'
 * '<S49>'  : 'TP_3tanks_sim/PID1/Sum Fdbk/Disabled'
 * '<S50>'  : 'TP_3tanks_sim/PID1/Tracking Mode/Disabled'
 * '<S51>'  : 'TP_3tanks_sim/PID1/Tracking Mode Sum/Passthrough'
 * '<S52>'  : 'TP_3tanks_sim/PID1/Tsamp - Integral/TsSignalSpecification'
 * '<S53>'  : 'TP_3tanks_sim/PID1/Tsamp - Ngain/Passthrough'
 * '<S54>'  : 'TP_3tanks_sim/PID1/postSat Signal/Forward_Path'
 * '<S55>'  : 'TP_3tanks_sim/PID1/preInt Signal/Internal PreInt'
 * '<S56>'  : 'TP_3tanks_sim/PID1/preSat Signal/Forward_Path'
 * '<S57>'  : 'TP_3tanks_sim/PID2/Anti-windup'
 * '<S58>'  : 'TP_3tanks_sim/PID2/D Gain'
 * '<S59>'  : 'TP_3tanks_sim/PID2/External Derivative'
 * '<S60>'  : 'TP_3tanks_sim/PID2/Filter'
 * '<S61>'  : 'TP_3tanks_sim/PID2/Filter ICs'
 * '<S62>'  : 'TP_3tanks_sim/PID2/I Gain'
 * '<S63>'  : 'TP_3tanks_sim/PID2/Ideal P Gain'
 * '<S64>'  : 'TP_3tanks_sim/PID2/Ideal P Gain Fdbk'
 * '<S65>'  : 'TP_3tanks_sim/PID2/Integrator'
 * '<S66>'  : 'TP_3tanks_sim/PID2/Integrator ICs'
 * '<S67>'  : 'TP_3tanks_sim/PID2/N Copy'
 * '<S68>'  : 'TP_3tanks_sim/PID2/N Gain'
 * '<S69>'  : 'TP_3tanks_sim/PID2/P Copy'
 * '<S70>'  : 'TP_3tanks_sim/PID2/Parallel P Gain'
 * '<S71>'  : 'TP_3tanks_sim/PID2/Reset Signal'
 * '<S72>'  : 'TP_3tanks_sim/PID2/Saturation'
 * '<S73>'  : 'TP_3tanks_sim/PID2/Saturation Fdbk'
 * '<S74>'  : 'TP_3tanks_sim/PID2/Sum'
 * '<S75>'  : 'TP_3tanks_sim/PID2/Sum Fdbk'
 * '<S76>'  : 'TP_3tanks_sim/PID2/Tracking Mode'
 * '<S77>'  : 'TP_3tanks_sim/PID2/Tracking Mode Sum'
 * '<S78>'  : 'TP_3tanks_sim/PID2/Tsamp - Integral'
 * '<S79>'  : 'TP_3tanks_sim/PID2/Tsamp - Ngain'
 * '<S80>'  : 'TP_3tanks_sim/PID2/postSat Signal'
 * '<S81>'  : 'TP_3tanks_sim/PID2/preInt Signal'
 * '<S82>'  : 'TP_3tanks_sim/PID2/preSat Signal'
 * '<S83>'  : 'TP_3tanks_sim/PID2/Anti-windup/Passthrough'
 * '<S84>'  : 'TP_3tanks_sim/PID2/D Gain/Internal Parameters'
 * '<S85>'  : 'TP_3tanks_sim/PID2/External Derivative/Error'
 * '<S86>'  : 'TP_3tanks_sim/PID2/Filter/Cont. Filter'
 * '<S87>'  : 'TP_3tanks_sim/PID2/Filter ICs/Internal IC - Filter'
 * '<S88>'  : 'TP_3tanks_sim/PID2/I Gain/Internal Parameters'
 * '<S89>'  : 'TP_3tanks_sim/PID2/Ideal P Gain/Passthrough'
 * '<S90>'  : 'TP_3tanks_sim/PID2/Ideal P Gain Fdbk/Disabled'
 * '<S91>'  : 'TP_3tanks_sim/PID2/Integrator/Continuous'
 * '<S92>'  : 'TP_3tanks_sim/PID2/Integrator ICs/Internal IC'
 * '<S93>'  : 'TP_3tanks_sim/PID2/N Copy/Disabled'
 * '<S94>'  : 'TP_3tanks_sim/PID2/N Gain/Internal Parameters'
 * '<S95>'  : 'TP_3tanks_sim/PID2/P Copy/Disabled'
 * '<S96>'  : 'TP_3tanks_sim/PID2/Parallel P Gain/Internal Parameters'
 * '<S97>'  : 'TP_3tanks_sim/PID2/Reset Signal/Disabled'
 * '<S98>'  : 'TP_3tanks_sim/PID2/Saturation/Passthrough'
 * '<S99>'  : 'TP_3tanks_sim/PID2/Saturation Fdbk/Disabled'
 * '<S100>' : 'TP_3tanks_sim/PID2/Sum/Sum_PID'
 * '<S101>' : 'TP_3tanks_sim/PID2/Sum Fdbk/Disabled'
 * '<S102>' : 'TP_3tanks_sim/PID2/Tracking Mode/Disabled'
 * '<S103>' : 'TP_3tanks_sim/PID2/Tracking Mode Sum/Passthrough'
 * '<S104>' : 'TP_3tanks_sim/PID2/Tsamp - Integral/TsSignalSpecification'
 * '<S105>' : 'TP_3tanks_sim/PID2/Tsamp - Ngain/Passthrough'
 * '<S106>' : 'TP_3tanks_sim/PID2/postSat Signal/Forward_Path'
 * '<S107>' : 'TP_3tanks_sim/PID2/preInt Signal/Internal PreInt'
 * '<S108>' : 'TP_3tanks_sim/PID2/preSat Signal/Forward_Path'
 * '<S109>' : 'TP_3tanks_sim/Process/Tank1'
 * '<S110>' : 'TP_3tanks_sim/Process/Tank2'
 * '<S111>' : 'TP_3tanks_sim/Process/Tank3'
 * '<S112>' : 'TP_3tanks_sim/Process/Valve1'
 * '<S113>' : 'TP_3tanks_sim/Process/Valve2'
 * '<S114>' : 'TP_3tanks_sim/Process/pipe1'
 * '<S115>' : 'TP_3tanks_sim/Process/pipe2'
 * '<S116>' : 'TP_3tanks_sim/Process/pipe3'
 * '<S117>' : 'TP_3tanks_sim/control law/Subsystem1'
 * '<S118>' : 'TP_3tanks_sim/control law/Subsystem2'
 */
#endif                                 /* TP_3tanks_sim_h_ */
