/*
 * TP_3tanks_sim.cpp
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

#include "TP_3tanks_sim.h"
#include "rtwtypes.h"

extern "C"
{

#include "rt_nonfinite.h"

}

#include <math.h>
#include "TP_3tanks_sim_private.h"

/*
 * This function updates continuous states using the ODE3 fixed-step
 * solver algorithm
 */
void TP_3tanks_sim::rt_ertODEUpdateContinuousStates(RTWSolverInfo *si )
{
  /* Solver Matrices */
  static const real_T rt_ODE3_A[3] = {
    1.0/2.0, 3.0/4.0, 1.0
  };

  static const real_T rt_ODE3_B[3][3] = {
    { 1.0/2.0, 0.0, 0.0 },

    { 0.0, 3.0/4.0, 0.0 },

    { 2.0/9.0, 1.0/3.0, 4.0/9.0 }
  };

  time_T t = rtsiGetT(si);
  time_T tnew = rtsiGetSolverStopTime(si);
  time_T h = rtsiGetStepSize(si);
  real_T *x = rtsiGetContStates(si);
  ODE3_IntgData *id = static_cast<ODE3_IntgData *>(rtsiGetSolverData(si));
  real_T *y = id->y;
  real_T *f0 = id->f[0];
  real_T *f1 = id->f[1];
  real_T *f2 = id->f[2];
  real_T hB[3];
  int_T i;
  int_T nXc = 7;
  rtsiSetSimTimeStep(si,MINOR_TIME_STEP);

  /* Save the state values at time t in y, we'll use x as ynew. */
  (void) memcpy(y, x,
                static_cast<uint_T>(nXc)*sizeof(real_T));

  /* Assumes that rtsiSetT and ModelOutputs are up-to-date */
  /* f0 = f(t,y) */
  rtsiSetdX(si, f0);
  TP_3tanks_sim_derivatives();

  /* f(:,2) = feval(odefile, t + hA(1), y + f*hB(:,1), args(:)(*)); */
  hB[0] = h * rt_ODE3_B[0][0];
  for (i = 0; i < nXc; i++) {
    x[i] = y[i] + (f0[i]*hB[0]);
  }

  rtsiSetT(si, t + h*rt_ODE3_A[0]);
  rtsiSetdX(si, f1);
  this->step();
  TP_3tanks_sim_derivatives();

  /* f(:,3) = feval(odefile, t + hA(2), y + f*hB(:,2), args(:)(*)); */
  for (i = 0; i <= 1; i++) {
    hB[i] = h * rt_ODE3_B[1][i];
  }

  for (i = 0; i < nXc; i++) {
    x[i] = y[i] + (f0[i]*hB[0] + f1[i]*hB[1]);
  }

  rtsiSetT(si, t + h*rt_ODE3_A[1]);
  rtsiSetdX(si, f2);
  this->step();
  TP_3tanks_sim_derivatives();

  /* tnew = t + hA(3);
     ynew = y + f*hB(:,3); */
  for (i = 0; i <= 2; i++) {
    hB[i] = h * rt_ODE3_B[2][i];
  }

  for (i = 0; i < nXc; i++) {
    x[i] = y[i] + (f0[i]*hB[0] + f1[i]*hB[1] + f2[i]*hB[2]);
  }

  rtsiSetT(si, tnew);
  rtsiSetSimTimeStep(si,MAJOR_TIME_STEP);
}

/* Model step function */
void TP_3tanks_sim::step()
{
  real_T Sum2_tmp;
  real_T rtb_Filter;
  real_T rtb_Step1;
  real_T tmp_0;
  boolean_T tmp;
  if (rtmIsMajorTimeStep((&TP_3tanks_sim_M))) {
    /* set solver stop time */
    if (!((&TP_3tanks_sim_M)->Timing.clockTick0+1)) {
      rtsiSetSolverStopTime(&(&TP_3tanks_sim_M)->solverInfo, (((&TP_3tanks_sim_M)
        ->Timing.clockTickH0 + 1) * (&TP_3tanks_sim_M)->Timing.stepSize0 *
        4294967296.0));
    } else {
      rtsiSetSolverStopTime(&(&TP_3tanks_sim_M)->solverInfo, (((&TP_3tanks_sim_M)
        ->Timing.clockTick0 + 1) * (&TP_3tanks_sim_M)->Timing.stepSize0 +
        (&TP_3tanks_sim_M)->Timing.clockTickH0 * (&TP_3tanks_sim_M)
        ->Timing.stepSize0 * 4294967296.0));
    }
  }                                    /* end MajorTimeStep */

  /* Update absolute time of base rate at minor time step */
  if (rtmIsMinorTimeStep((&TP_3tanks_sim_M))) {
    (&TP_3tanks_sim_M)->Timing.t[0] = rtsiGetT(&(&TP_3tanks_sim_M)->solverInfo);
  }

  /* Integrator: '<S110>/Integrator' */
  TP_3tanks_sim_B.Integrator = TP_3tanks_sim_X.Integrator_CSTATE;
  tmp = rtmIsMajorTimeStep((&TP_3tanks_sim_M));
  if (tmp) {
  }

  /* Sum: '<Root>/Sum' incorporates:
   *  Constant: '<Root>/SP2'
   */
  TP_3tanks_sim_B.Sum = 0.5 - TP_3tanks_sim_B.Integrator;

  /* Gain: '<S94>/Filter Coefficient' incorporates:
   *  Gain: '<S84>/Derivative Gain'
   *  Integrator: '<S86>/Filter'
   *  Sum: '<S86>/SumD'
   */
  TP_3tanks_sim_B.FilterCoefficient = (0.0 * TP_3tanks_sim_B.Sum -
    TP_3tanks_sim_X.Filter_CSTATE) * 100.0;

  /* Signum: '<S115>/Sign' */
  if (rtIsNaN(TP_3tanks_sim_B.Integrator)) {
    tmp_0 = (rtNaN);
  } else if (TP_3tanks_sim_B.Integrator < 0.0) {
    tmp_0 = -1.0;
  } else {
    tmp_0 = (TP_3tanks_sim_B.Integrator > 0.0);
  }

  /* Product: '<S115>/Product' incorporates:
   *  Abs: '<S115>/Abs'
   *  Gain: '<S115>/Gain'
   *  Gain: '<S115>/Gain1'
   *  Signum: '<S115>/Sign'
   *  Sqrt: '<S115>/Sqrt'
   */
  rtb_Step1 = 0.001284 * tmp_0 * sqrt(19.64 * fabs(TP_3tanks_sim_B.Integrator));

  /* Sum: '<S116>/Sum' incorporates:
   *  Integrator: '<S111>/Integrator'
   */
  rtb_Filter = TP_3tanks_sim_X.Integrator_CSTATE_h - TP_3tanks_sim_B.Integrator;

  /* Signum: '<S116>/Sign' */
  if (rtIsNaN(rtb_Filter)) {
    tmp_0 = (rtNaN);
  } else if (rtb_Filter < 0.0) {
    tmp_0 = -1.0;
  } else {
    tmp_0 = (rtb_Filter > 0.0);
  }

  /* Product: '<S116>/Product' incorporates:
   *  Abs: '<S116>/Abs'
   *  Gain: '<S116>/Gain'
   *  Gain: '<S116>/Gain1'
   *  Signum: '<S116>/Sign'
   *  Sqrt: '<S116>/Sqrt'
   */
  rtb_Filter = 0.001284 * tmp_0 * sqrt(19.64 * fabs(rtb_Filter));

  /* Gain: '<S110>/Gain' incorporates:
   *  Constant: '<S113>/k2'
   *  Gain: '<S118>/1//k2'
   *  Gain: '<S118>/Gain1'
   *  Integrator: '<S91>/Integrator'
   *  Product: '<S113>/Product'
   *  Sum: '<S100>/Sum'
   *  Sum: '<S110>/Sum'
   *  Sum: '<S118>/Sum'
   */
  TP_3tanks_sim_B.Gain = ((((((TP_3tanks_sim_B.Sum +
    TP_3tanks_sim_X.Integrator_CSTATE_p) + TP_3tanks_sim_B.FilterCoefficient) *
    0.037 + rtb_Step1) - rtb_Filter) * 4.166666666666667 * 0.24 + rtb_Filter) -
    rtb_Step1) * 27.027027027027028;

  /* Integrator: '<S109>/Integrator' */
  TP_3tanks_sim_B.Integrator_o = TP_3tanks_sim_X.Integrator_CSTATE_a;

  /* Sum: '<S114>/Sum' incorporates:
   *  Integrator: '<S111>/Integrator'
   */
  rtb_Step1 = TP_3tanks_sim_B.Integrator_o - TP_3tanks_sim_X.Integrator_CSTATE_h;

  /* Signum: '<S114>/Sign' */
  if (rtIsNaN(rtb_Step1)) {
    tmp_0 = (rtNaN);
  } else if (rtb_Step1 < 0.0) {
    tmp_0 = -1.0;
  } else {
    tmp_0 = (rtb_Step1 > 0.0);
  }

  /* Product: '<S114>/Product' incorporates:
   *  Abs: '<S114>/Abs'
   *  Gain: '<S114>/Gain'
   *  Gain: '<S114>/Gain1'
   *  Signum: '<S114>/Sign'
   *  Sqrt: '<S114>/Sqrt'
   */
  rtb_Step1 = 0.001284 * tmp_0 * sqrt(19.64 * fabs(rtb_Step1));

  /* Gain: '<S111>/Gain' incorporates:
   *  Sum: '<S111>/Sum'
   */
  TP_3tanks_sim_B.l3_dot = (rtb_Step1 - rtb_Filter) * 20.408163265306122;

  /* Step: '<Root>/Step' incorporates:
   *  Step: '<Root>/Step1'
   *  Step: '<Root>/Step2'
   */
  Sum2_tmp = (&TP_3tanks_sim_M)->Timing.t[0];
  if (Sum2_tmp < 30.0) {
    tmp_0 = 0.0;
  } else {
    tmp_0 = 0.4;
  }

  /* Step: '<Root>/Step1' */
  if (Sum2_tmp < 60.0) {
    rtb_Filter = 0.0;
  } else {
    rtb_Filter = 0.3;
  }

  /* Step: '<Root>/Step2' */
  if (Sum2_tmp < 90.0) {
    Sum2_tmp = 0.0;
  } else {
    Sum2_tmp = 0.45;
  }

  /* Sum: '<Root>/Sum2' incorporates:
   *  Step: '<Root>/Step'
   *  Step: '<Root>/Step1'
   *  Step: '<Root>/Step2'
   */
  TP_3tanks_sim_B.Sum2 = (tmp_0 + rtb_Filter) - Sum2_tmp;

  /* Sum: '<Root>/Sum1' */
  TP_3tanks_sim_B.Sum1 = TP_3tanks_sim_B.Sum2 - TP_3tanks_sim_B.Integrator_o;

  /* Gain: '<S42>/Filter Coefficient' incorporates:
   *  Gain: '<S32>/Derivative Gain'
   *  Integrator: '<S34>/Filter'
   *  Sum: '<S34>/SumD'
   */
  TP_3tanks_sim_B.FilterCoefficient_j = (0.0 * TP_3tanks_sim_B.Sum1 -
    TP_3tanks_sim_X.Filter_CSTATE_p) * 100.0;

  /* Gain: '<S109>/Gain' incorporates:
   *  Constant: '<S112>/k1'
   *  Gain: '<S117>/1//k1'
   *  Gain: '<S117>/Gain1'
   *  Integrator: '<S39>/Integrator'
   *  Product: '<S112>/Product'
   *  Sum: '<S109>/Sum'
   *  Sum: '<S117>/Sum'
   *  Sum: '<S48>/Sum'
   */
  TP_3tanks_sim_B.l1_dot = ((((TP_3tanks_sim_B.Sum1 +
    TP_3tanks_sim_X.Integrator_CSTATE_l) + TP_3tanks_sim_B.FilterCoefficient_j) *
    0.04 + rtb_Step1) * 3.125 * 0.32 - rtb_Step1) * 25.0;
  if (tmp) {
  }

  if (rtmIsMajorTimeStep((&TP_3tanks_sim_M))) {
    rt_ertODEUpdateContinuousStates(&(&TP_3tanks_sim_M)->solverInfo);

    /* Update absolute time for base rate */
    /* The "clockTick0" counts the number of times the code of this task has
     * been executed. The absolute time is the multiplication of "clockTick0"
     * and "Timing.stepSize0". Size of "clockTick0" ensures timer will not
     * overflow during the application lifespan selected.
     * Timer of this task consists of two 32 bit unsigned integers.
     * The two integers represent the low bits Timing.clockTick0 and the high bits
     * Timing.clockTickH0. When the low bit overflows to 0, the high bits increment.
     */
    if (!(++(&TP_3tanks_sim_M)->Timing.clockTick0)) {
      ++(&TP_3tanks_sim_M)->Timing.clockTickH0;
    }

    (&TP_3tanks_sim_M)->Timing.t[0] = rtsiGetSolverStopTime(&(&TP_3tanks_sim_M
      )->solverInfo);

    {
      /* Update absolute timer for sample time: [2.0s, 0.0s] */
      /* The "clockTick1" counts the number of times the code of this task has
       * been executed. The resolution of this integer timer is 2.0, which is the step size
       * of the task. Size of "clockTick1" ensures timer will not overflow during the
       * application lifespan selected.
       * Timer of this task consists of two 32 bit unsigned integers.
       * The two integers represent the low bits Timing.clockTick1 and the high bits
       * Timing.clockTickH1. When the low bit overflows to 0, the high bits increment.
       */
      (&TP_3tanks_sim_M)->Timing.clockTick1++;
      if (!(&TP_3tanks_sim_M)->Timing.clockTick1) {
        (&TP_3tanks_sim_M)->Timing.clockTickH1++;
      }
    }
  }                                    /* end MajorTimeStep */
}

/* Derivatives for root system: '<Root>' */
void TP_3tanks_sim::TP_3tanks_sim_derivatives()
{
  XDot_TP_3tanks_sim_T *_rtXdot;
  _rtXdot = ((XDot_TP_3tanks_sim_T *) (&TP_3tanks_sim_M)->derivs);

  /* Derivatives for Integrator: '<S110>/Integrator' */
  _rtXdot->Integrator_CSTATE = TP_3tanks_sim_B.Gain;

  /* Derivatives for Integrator: '<S86>/Filter' */
  _rtXdot->Filter_CSTATE = TP_3tanks_sim_B.FilterCoefficient;

  /* Derivatives for Integrator: '<S91>/Integrator' */
  _rtXdot->Integrator_CSTATE_p = TP_3tanks_sim_B.Sum;

  /* Derivatives for Integrator: '<S111>/Integrator' */
  _rtXdot->Integrator_CSTATE_h = TP_3tanks_sim_B.l3_dot;

  /* Derivatives for Integrator: '<S109>/Integrator' */
  _rtXdot->Integrator_CSTATE_a = TP_3tanks_sim_B.l1_dot;

  /* Derivatives for Integrator: '<S39>/Integrator' */
  _rtXdot->Integrator_CSTATE_l = TP_3tanks_sim_B.Sum1;

  /* Derivatives for Integrator: '<S34>/Filter' */
  _rtXdot->Filter_CSTATE_p = TP_3tanks_sim_B.FilterCoefficient_j;
}

/* Model initialize function */
void TP_3tanks_sim::initialize()
{
  /* Registration code */

  /* initialize non-finites */
  rt_InitInfAndNaN(sizeof(real_T));

  {
    /* Setup solver object */
    rtsiSetSimTimeStepPtr(&(&TP_3tanks_sim_M)->solverInfo, &(&TP_3tanks_sim_M)
                          ->Timing.simTimeStep);
    rtsiSetTPtr(&(&TP_3tanks_sim_M)->solverInfo, &rtmGetTPtr((&TP_3tanks_sim_M)));
    rtsiSetStepSizePtr(&(&TP_3tanks_sim_M)->solverInfo, &(&TP_3tanks_sim_M)
                       ->Timing.stepSize0);
    rtsiSetdXPtr(&(&TP_3tanks_sim_M)->solverInfo, &(&TP_3tanks_sim_M)->derivs);
    rtsiSetContStatesPtr(&(&TP_3tanks_sim_M)->solverInfo, (real_T **)
                         &(&TP_3tanks_sim_M)->contStates);
    rtsiSetNumContStatesPtr(&(&TP_3tanks_sim_M)->solverInfo, &(&TP_3tanks_sim_M
      )->Sizes.numContStates);
    rtsiSetNumPeriodicContStatesPtr(&(&TP_3tanks_sim_M)->solverInfo,
      &(&TP_3tanks_sim_M)->Sizes.numPeriodicContStates);
    rtsiSetPeriodicContStateIndicesPtr(&(&TP_3tanks_sim_M)->solverInfo,
      &(&TP_3tanks_sim_M)->periodicContStateIndices);
    rtsiSetPeriodicContStateRangesPtr(&(&TP_3tanks_sim_M)->solverInfo,
      &(&TP_3tanks_sim_M)->periodicContStateRanges);
    rtsiSetContStateDisabledPtr(&(&TP_3tanks_sim_M)->solverInfo, (boolean_T**)
      &(&TP_3tanks_sim_M)->contStateDisabled);
    rtsiSetErrorStatusPtr(&(&TP_3tanks_sim_M)->solverInfo, (&rtmGetErrorStatus((
      &TP_3tanks_sim_M))));
    rtsiSetRTModelPtr(&(&TP_3tanks_sim_M)->solverInfo, (&TP_3tanks_sim_M));
  }

  rtsiSetSimTimeStep(&(&TP_3tanks_sim_M)->solverInfo, MAJOR_TIME_STEP);
  rtsiSetIsMinorTimeStepWithModeChange(&(&TP_3tanks_sim_M)->solverInfo, false);
  rtsiSetIsContModeFrozen(&(&TP_3tanks_sim_M)->solverInfo, false);
  (&TP_3tanks_sim_M)->intgData.y = (&TP_3tanks_sim_M)->odeY;
  (&TP_3tanks_sim_M)->intgData.f[0] = (&TP_3tanks_sim_M)->odeF[0];
  (&TP_3tanks_sim_M)->intgData.f[1] = (&TP_3tanks_sim_M)->odeF[1];
  (&TP_3tanks_sim_M)->intgData.f[2] = (&TP_3tanks_sim_M)->odeF[2];
  (&TP_3tanks_sim_M)->contStates = ((X_TP_3tanks_sim_T *) &TP_3tanks_sim_X);
  (&TP_3tanks_sim_M)->contStateDisabled = ((XDis_TP_3tanks_sim_T *)
    &TP_3tanks_sim_XDis);
  (&TP_3tanks_sim_M)->Timing.tStart = (0.0);
  rtsiSetSolverData(&(&TP_3tanks_sim_M)->solverInfo, static_cast<void *>
                    (&(&TP_3tanks_sim_M)->intgData));
  rtsiSetSolverName(&(&TP_3tanks_sim_M)->solverInfo,"ode3");
  rtmSetTPtr((&TP_3tanks_sim_M), &(&TP_3tanks_sim_M)->Timing.tArray[0]);
  (&TP_3tanks_sim_M)->Timing.stepSize0 = 2.0;

  /* InitializeConditions for Integrator: '<S110>/Integrator' */
  TP_3tanks_sim_X.Integrator_CSTATE = 0.0;

  /* InitializeConditions for Integrator: '<S86>/Filter' */
  TP_3tanks_sim_X.Filter_CSTATE = 0.0;

  /* InitializeConditions for Integrator: '<S91>/Integrator' */
  TP_3tanks_sim_X.Integrator_CSTATE_p = 0.0;

  /* InitializeConditions for Integrator: '<S111>/Integrator' */
  TP_3tanks_sim_X.Integrator_CSTATE_h = 0.0;

  /* InitializeConditions for Integrator: '<S109>/Integrator' */
  TP_3tanks_sim_X.Integrator_CSTATE_a = 0.0;

  /* InitializeConditions for Integrator: '<S39>/Integrator' */
  TP_3tanks_sim_X.Integrator_CSTATE_l = 0.0;

  /* InitializeConditions for Integrator: '<S34>/Filter' */
  TP_3tanks_sim_X.Filter_CSTATE_p = 0.0;
}

/* Model terminate function */
void TP_3tanks_sim::terminate()
{
  /* (no terminate code required) */
}

/* Constructor */
TP_3tanks_sim::TP_3tanks_sim() :
  TP_3tanks_sim_B(),
  TP_3tanks_sim_X(),
  TP_3tanks_sim_XDis(),
  TP_3tanks_sim_M()
{
  /* Currently there is no constructor body generated.*/
}

/* Destructor */
TP_3tanks_sim::~TP_3tanks_sim()
{
  /* Currently there is no destructor body generated.*/
}

/* Real-Time Model get method */
RT_MODEL_TP_3tanks_sim_T * TP_3tanks_sim::getRTM()
{
  return (&TP_3tanks_sim_M);
}
