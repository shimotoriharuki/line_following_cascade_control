/*
 * Subsystem_data.c
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

/* Block parameters (default storage) */
P_Subsystem_T Subsystem_P = {
  /* Mask Parameter: DiscretePIDController1_D
   * Referenced by: '<S77>/Derivative Gain'
   */
  29.952480157366,

  /* Mask Parameter: DiscretePIDController_D
   * Referenced by: '<S29>/Derivative Gain'
   */
  0.0114466127701894,

  /* Mask Parameter: DiscretePIDController_I
   * Referenced by: '<S32>/Integral Gain'
   */
  1.57739728537751,

  /* Mask Parameter: DiscretePIDController1_I
   * Referenced by: '<S80>/Integral Gain'
   */
  314.571040204805,

  /* Mask Parameter: DiscretePIDController1_InitialC
   * Referenced by: '<S78>/Filter'
   */
  0.0,

  /* Mask Parameter: DiscretePIDController_InitialCo
   * Referenced by: '<S30>/Filter'
   */
  0.0,

  /* Mask Parameter: DiscretePIDController1_Initia_n
   * Referenced by: '<S83>/Integrator'
   */
  0.0,

  /* Mask Parameter: DiscretePIDController_Initial_l
   * Referenced by: '<S35>/Integrator'
   */
  0.0,

  /* Mask Parameter: DiscretePIDController1_N
   * Referenced by: '<S86>/Filter Coefficient'
   */
  19.935764748424,

  /* Mask Parameter: DiscretePIDController_N
   * Referenced by: '<S38>/Filter Coefficient'
   */
  838.49688574406,

  /* Mask Parameter: DiscretePIDController1_P
   * Referenced by: '<S88>/Proportional Gain'
   */
  238.049419477365,

  /* Mask Parameter: DiscretePIDController_P
   * Referenced by: '<S40>/Proportional Gain'
   */
  1.32429471708856,

  /* Expression: 0
   * Referenced by: '<S1>/Constant'
   */
  0.0,

  /* Computed Parameter: Integrator_gainval
   * Referenced by: '<S83>/Integrator'
   */
  0.001,

  /* Computed Parameter: Filter_gainval
   * Referenced by: '<S78>/Filter'
   */
  0.001,

  /* Computed Parameter: Integrator_gainval_e
   * Referenced by: '<S35>/Integrator'
   */
  0.001,

  /* Computed Parameter: Filter_gainval_h
   * Referenced by: '<S30>/Filter'
   */
  0.001
};
