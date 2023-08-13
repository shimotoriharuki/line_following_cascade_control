/*
 * Subsystem.c
 *
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Code generation for model "Subsystem".
 *
 * Model version              : 1.3
 * Simulink Coder version : 9.9 (R2023a) 19-Nov-2022
 * C source code generated on : Sun Aug 13 20:49:15 2023
 *
 * Target selection: grt.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "Subsystem.h"
#include "rtwtypes.h"
#include <string.h>
#include "Subsystem_private.h"
#include "rt_nonfinite.h"

/* Block states (default storage) */
DW_Subsystem_T Subsystem_DW;

/* External inputs (root inport signals with default storage) */
ExtU_Subsystem_T Subsystem_U;

/* External outputs (root outports fed by signals with default storage) */
ExtY_Subsystem_T Subsystem_Y;

/* Real-time model */
static RT_MODEL_Subsystem_T Subsystem_M_;
RT_MODEL_Subsystem_T *const Subsystem_M = &Subsystem_M_;

/* Model step function */
void Subsystem_step(void)
{
  real_T rtb_FilterCoefficient;
  real_T rtb_FilterCoefficient_l;
  real_T rtb_angle_diff;
  real_T rtb_anguler_velocity_diff;

  /* Sum: '<S1>/Sum' incorporates:
   *  Constant: '<S1>/Constant'
   *  Inport: '<Root>/angle'
   */
  rtb_angle_diff = Subsystem_P.Constant_Value - Subsystem_U.angle;

  /* Gain: '<S86>/Filter Coefficient' incorporates:
   *  DiscreteIntegrator: '<S78>/Filter'
   *  Gain: '<S77>/Derivative Gain'
   *  Sum: '<S78>/SumD'
   */
  rtb_FilterCoefficient = (Subsystem_P.DiscretePIDController1_D * rtb_angle_diff
    - Subsystem_DW.Filter_DSTATE) * Subsystem_P.DiscretePIDController1_N;

  /* Sum: '<S1>/Sum1' incorporates:
   *  DiscreteIntegrator: '<S83>/Integrator'
   *  Gain: '<S88>/Proportional Gain'
   *  Inport: '<Root>/anguler_velocity'
   *  Sum: '<S92>/Sum'
   */
  rtb_anguler_velocity_diff = ((Subsystem_P.DiscretePIDController1_P *
    rtb_angle_diff + Subsystem_DW.Integrator_DSTATE) + rtb_FilterCoefficient) -
    Subsystem_U.anguler_velocity;

  /* Gain: '<S38>/Filter Coefficient' incorporates:
   *  DiscreteIntegrator: '<S30>/Filter'
   *  Gain: '<S29>/Derivative Gain'
   *  Sum: '<S30>/SumD'
   */
  rtb_FilterCoefficient_l = (Subsystem_P.DiscretePIDController_D *
    rtb_anguler_velocity_diff - Subsystem_DW.Filter_DSTATE_k) *
    Subsystem_P.DiscretePIDController_N;

  /* Outport: '<Root>/duty' incorporates:
   *  DiscreteIntegrator: '<S35>/Integrator'
   *  Gain: '<S40>/Proportional Gain'
   *  Sum: '<S44>/Sum'
   */
  Subsystem_Y.duty = (Subsystem_P.DiscretePIDController_P *
                      rtb_anguler_velocity_diff +
                      Subsystem_DW.Integrator_DSTATE_m) +
    rtb_FilterCoefficient_l;

  /* Update for DiscreteIntegrator: '<S83>/Integrator' incorporates:
   *  Gain: '<S80>/Integral Gain'
   */
  Subsystem_DW.Integrator_DSTATE += Subsystem_P.DiscretePIDController1_I *
    rtb_angle_diff * Subsystem_P.Integrator_gainval;

  /* Update for DiscreteIntegrator: '<S78>/Filter' */
  Subsystem_DW.Filter_DSTATE += Subsystem_P.Filter_gainval *
    rtb_FilterCoefficient;

  /* Update for DiscreteIntegrator: '<S35>/Integrator' incorporates:
   *  Gain: '<S32>/Integral Gain'
   */
  Subsystem_DW.Integrator_DSTATE_m += Subsystem_P.DiscretePIDController_I *
    rtb_anguler_velocity_diff * Subsystem_P.Integrator_gainval_e;

  /* Update for DiscreteIntegrator: '<S30>/Filter' */
  Subsystem_DW.Filter_DSTATE_k += Subsystem_P.Filter_gainval_h *
    rtb_FilterCoefficient_l;

  /* Matfile logging */
  rt_UpdateTXYLogVars(Subsystem_M->rtwLogInfo, (&Subsystem_M->Timing.taskTime0));

  /* signal main to stop simulation */
  {                                    /* Sample time: [0.001s, 0.0s] */
    if ((rtmGetTFinal(Subsystem_M)!=-1) &&
        !((rtmGetTFinal(Subsystem_M)-Subsystem_M->Timing.taskTime0) >
          Subsystem_M->Timing.taskTime0 * (DBL_EPSILON))) {
      rtmSetErrorStatus(Subsystem_M, "Simulation finished");
    }
  }

  /* Update absolute time for base rate */
  /* The "clockTick0" counts the number of times the code of this task has
   * been executed. The absolute time is the multiplication of "clockTick0"
   * and "Timing.stepSize0". Size of "clockTick0" ensures timer will not
   * overflow during the application lifespan selected.
   * Timer of this task consists of two 32 bit unsigned integers.
   * The two integers represent the low bits Timing.clockTick0 and the high bits
   * Timing.clockTickH0. When the low bit overflows to 0, the high bits increment.
   */
  if (!(++Subsystem_M->Timing.clockTick0)) {
    ++Subsystem_M->Timing.clockTickH0;
  }

  Subsystem_M->Timing.taskTime0 = Subsystem_M->Timing.clockTick0 *
    Subsystem_M->Timing.stepSize0 + Subsystem_M->Timing.clockTickH0 *
    Subsystem_M->Timing.stepSize0 * 4294967296.0;
}

/* Model initialize function */
void Subsystem_initialize(void)
{
  /* Registration code */

  /* initialize non-finites */
  rt_InitInfAndNaN(sizeof(real_T));

  /* initialize real-time model */
  (void) memset((void *)Subsystem_M, 0,
                sizeof(RT_MODEL_Subsystem_T));
  rtmSetTFinal(Subsystem_M, 2.0);
  Subsystem_M->Timing.stepSize0 = 0.001;

  /* Setup for data logging */
  {
    static RTWLogInfo rt_DataLoggingInfo;
    rt_DataLoggingInfo.loggingInterval = (NULL);
    Subsystem_M->rtwLogInfo = &rt_DataLoggingInfo;
  }

  /* Setup for data logging */
  {
    rtliSetLogXSignalInfo(Subsystem_M->rtwLogInfo, (NULL));
    rtliSetLogXSignalPtrs(Subsystem_M->rtwLogInfo, (NULL));
    rtliSetLogT(Subsystem_M->rtwLogInfo, "tout");
    rtliSetLogX(Subsystem_M->rtwLogInfo, "");
    rtliSetLogXFinal(Subsystem_M->rtwLogInfo, "");
    rtliSetLogVarNameModifier(Subsystem_M->rtwLogInfo, "rt_");
    rtliSetLogFormat(Subsystem_M->rtwLogInfo, 4);
    rtliSetLogMaxRows(Subsystem_M->rtwLogInfo, 0);
    rtliSetLogDecimation(Subsystem_M->rtwLogInfo, 1);
    rtliSetLogY(Subsystem_M->rtwLogInfo, "");
    rtliSetLogYSignalInfo(Subsystem_M->rtwLogInfo, (NULL));
    rtliSetLogYSignalPtrs(Subsystem_M->rtwLogInfo, (NULL));
  }

  /* states (dwork) */
  (void) memset((void *)&Subsystem_DW, 0,
                sizeof(DW_Subsystem_T));

  /* external inputs */
  (void)memset(&Subsystem_U, 0, sizeof(ExtU_Subsystem_T));

  /* external outputs */
  Subsystem_Y.duty = 0.0;

  /* Matfile logging */
  rt_StartDataLoggingWithStartTime(Subsystem_M->rtwLogInfo, 0.0, rtmGetTFinal
    (Subsystem_M), Subsystem_M->Timing.stepSize0, (&rtmGetErrorStatus
    (Subsystem_M)));

  /* InitializeConditions for DiscreteIntegrator: '<S83>/Integrator' */
  Subsystem_DW.Integrator_DSTATE = Subsystem_P.DiscretePIDController1_Initia_n;

  /* InitializeConditions for DiscreteIntegrator: '<S78>/Filter' */
  Subsystem_DW.Filter_DSTATE = Subsystem_P.DiscretePIDController1_InitialC;

  /* InitializeConditions for DiscreteIntegrator: '<S35>/Integrator' */
  Subsystem_DW.Integrator_DSTATE_m = Subsystem_P.DiscretePIDController_Initial_l;

  /* InitializeConditions for DiscreteIntegrator: '<S30>/Filter' */
  Subsystem_DW.Filter_DSTATE_k = Subsystem_P.DiscretePIDController_InitialCo;
}

/* Model terminate function */
void Subsystem_terminate(void)
{
  /* (no terminate code required) */
}
