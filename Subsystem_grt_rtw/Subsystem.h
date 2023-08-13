/*
 * Subsystem.h
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

#ifndef RTW_HEADER_Subsystem_h_
#define RTW_HEADER_Subsystem_h_
#ifndef Subsystem_COMMON_INCLUDES_
#define Subsystem_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "rtw_continuous.h"
#include "rtw_solver.h"
#include "rt_logging.h"
#endif                                 /* Subsystem_COMMON_INCLUDES_ */

#include "Subsystem_types.h"
#include <float.h>
#include <string.h>
#include <stddef.h>
#include "rt_nonfinite.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetFinalTime
#define rtmGetFinalTime(rtm)           ((rtm)->Timing.tFinal)
#endif

#ifndef rtmGetRTWLogInfo
#define rtmGetRTWLogInfo(rtm)          ((rtm)->rtwLogInfo)
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
#define rtmGetT(rtm)                   ((rtm)->Timing.taskTime0)
#endif

#ifndef rtmGetTFinal
#define rtmGetTFinal(rtm)              ((rtm)->Timing.tFinal)
#endif

#ifndef rtmGetTPtr
#define rtmGetTPtr(rtm)                (&(rtm)->Timing.taskTime0)
#endif

/* Block states (default storage) for system '<Root>' */
typedef struct {
  real_T Integrator_DSTATE;            /* '<S83>/Integrator' */
  real_T Filter_DSTATE;                /* '<S78>/Filter' */
  real_T Integrator_DSTATE_m;          /* '<S35>/Integrator' */
  real_T Filter_DSTATE_k;              /* '<S30>/Filter' */
} DW_Subsystem_T;

/* External inputs (root inport signals with default storage) */
typedef struct {
  real_T anguler_velocity;             /* '<Root>/anguler_velocity' */
  real_T angle;                        /* '<Root>/angle' */
} ExtU_Subsystem_T;

/* External outputs (root outports fed by signals with default storage) */
typedef struct {
  real_T duty;                         /* '<Root>/duty' */
} ExtY_Subsystem_T;

/* Parameters (default storage) */
struct P_Subsystem_T_ {
  real_T DiscretePIDController1_D;   /* Mask Parameter: DiscretePIDController1_D
                                      * Referenced by: '<S77>/Derivative Gain'
                                      */
  real_T DiscretePIDController_D;     /* Mask Parameter: DiscretePIDController_D
                                       * Referenced by: '<S29>/Derivative Gain'
                                       */
  real_T DiscretePIDController_I;     /* Mask Parameter: DiscretePIDController_I
                                       * Referenced by: '<S32>/Integral Gain'
                                       */
  real_T DiscretePIDController1_I;   /* Mask Parameter: DiscretePIDController1_I
                                      * Referenced by: '<S80>/Integral Gain'
                                      */
  real_T DiscretePIDController1_InitialC;
                              /* Mask Parameter: DiscretePIDController1_InitialC
                               * Referenced by: '<S78>/Filter'
                               */
  real_T DiscretePIDController_InitialCo;
                              /* Mask Parameter: DiscretePIDController_InitialCo
                               * Referenced by: '<S30>/Filter'
                               */
  real_T DiscretePIDController1_Initia_n;
                              /* Mask Parameter: DiscretePIDController1_Initia_n
                               * Referenced by: '<S83>/Integrator'
                               */
  real_T DiscretePIDController_Initial_l;
                              /* Mask Parameter: DiscretePIDController_Initial_l
                               * Referenced by: '<S35>/Integrator'
                               */
  real_T DiscretePIDController1_N;   /* Mask Parameter: DiscretePIDController1_N
                                      * Referenced by: '<S86>/Filter Coefficient'
                                      */
  real_T DiscretePIDController_N;     /* Mask Parameter: DiscretePIDController_N
                                       * Referenced by: '<S38>/Filter Coefficient'
                                       */
  real_T DiscretePIDController1_P;   /* Mask Parameter: DiscretePIDController1_P
                                      * Referenced by: '<S88>/Proportional Gain'
                                      */
  real_T DiscretePIDController_P;     /* Mask Parameter: DiscretePIDController_P
                                       * Referenced by: '<S40>/Proportional Gain'
                                       */
  real_T Constant_Value;               /* Expression: 0
                                        * Referenced by: '<S1>/Constant'
                                        */
  real_T Integrator_gainval;           /* Computed Parameter: Integrator_gainval
                                        * Referenced by: '<S83>/Integrator'
                                        */
  real_T Filter_gainval;               /* Computed Parameter: Filter_gainval
                                        * Referenced by: '<S78>/Filter'
                                        */
  real_T Integrator_gainval_e;       /* Computed Parameter: Integrator_gainval_e
                                      * Referenced by: '<S35>/Integrator'
                                      */
  real_T Filter_gainval_h;             /* Computed Parameter: Filter_gainval_h
                                        * Referenced by: '<S30>/Filter'
                                        */
};

/* Real-time Model Data Structure */
struct tag_RTM_Subsystem_T {
  const char_T *errorStatus;
  RTWLogInfo *rtwLogInfo;

  /*
   * Timing:
   * The following substructure contains information regarding
   * the timing information for the model.
   */
  struct {
    time_T taskTime0;
    uint32_T clockTick0;
    uint32_T clockTickH0;
    time_T stepSize0;
    time_T tFinal;
    boolean_T stopRequestedFlag;
  } Timing;
};

/* Block parameters (default storage) */
extern P_Subsystem_T Subsystem_P;

/* Block states (default storage) */
extern DW_Subsystem_T Subsystem_DW;

/* External inputs (root inport signals with default storage) */
extern ExtU_Subsystem_T Subsystem_U;

/* External outputs (root outports fed by signals with default storage) */
extern ExtY_Subsystem_T Subsystem_Y;

/* Model entry point functions */
extern void Subsystem_initialize(void);
extern void Subsystem_step(void);
extern void Subsystem_terminate(void);

/* Real-time Model object */
extern RT_MODEL_Subsystem_T *const Subsystem_M;

/*-
 * The generated code includes comments that allow you to trace directly
 * back to the appropriate location in the model.  The basic format
 * is <system>/block_name, where system is the system number (uniquely
 * assigned by Simulink) and block_name is the name of the block.
 *
 * Note that this particular code originates from a subsystem build,
 * and has its own system numbers different from the parent model.
 * Refer to the system hierarchy for this subsystem below, and use the
 * MATLAB hilite_system command to trace the generated code back
 * to the parent model.  For example,
 *
 * hilite_system('cascade_line_following_cgen/Subsystem')    - opens subsystem cascade_line_following_cgen/Subsystem
 * hilite_system('cascade_line_following_cgen/Subsystem/Kp') - opens and selects block Kp
 *
 * Here is the system hierarchy for this model
 *
 * '<Root>' : 'cascade_line_following_cgen'
 * '<S1>'   : 'cascade_line_following_cgen/Subsystem'
 * '<S2>'   : 'cascade_line_following_cgen/Subsystem/Discrete PID Controller'
 * '<S3>'   : 'cascade_line_following_cgen/Subsystem/Discrete PID Controller1'
 * '<S4>'   : 'cascade_line_following_cgen/Subsystem/Discrete PID Controller/Anti-windup'
 * '<S5>'   : 'cascade_line_following_cgen/Subsystem/Discrete PID Controller/D Gain'
 * '<S6>'   : 'cascade_line_following_cgen/Subsystem/Discrete PID Controller/Filter'
 * '<S7>'   : 'cascade_line_following_cgen/Subsystem/Discrete PID Controller/Filter ICs'
 * '<S8>'   : 'cascade_line_following_cgen/Subsystem/Discrete PID Controller/I Gain'
 * '<S9>'   : 'cascade_line_following_cgen/Subsystem/Discrete PID Controller/Ideal P Gain'
 * '<S10>'  : 'cascade_line_following_cgen/Subsystem/Discrete PID Controller/Ideal P Gain Fdbk'
 * '<S11>'  : 'cascade_line_following_cgen/Subsystem/Discrete PID Controller/Integrator'
 * '<S12>'  : 'cascade_line_following_cgen/Subsystem/Discrete PID Controller/Integrator ICs'
 * '<S13>'  : 'cascade_line_following_cgen/Subsystem/Discrete PID Controller/N Copy'
 * '<S14>'  : 'cascade_line_following_cgen/Subsystem/Discrete PID Controller/N Gain'
 * '<S15>'  : 'cascade_line_following_cgen/Subsystem/Discrete PID Controller/P Copy'
 * '<S16>'  : 'cascade_line_following_cgen/Subsystem/Discrete PID Controller/Parallel P Gain'
 * '<S17>'  : 'cascade_line_following_cgen/Subsystem/Discrete PID Controller/Reset Signal'
 * '<S18>'  : 'cascade_line_following_cgen/Subsystem/Discrete PID Controller/Saturation'
 * '<S19>'  : 'cascade_line_following_cgen/Subsystem/Discrete PID Controller/Saturation Fdbk'
 * '<S20>'  : 'cascade_line_following_cgen/Subsystem/Discrete PID Controller/Sum'
 * '<S21>'  : 'cascade_line_following_cgen/Subsystem/Discrete PID Controller/Sum Fdbk'
 * '<S22>'  : 'cascade_line_following_cgen/Subsystem/Discrete PID Controller/Tracking Mode'
 * '<S23>'  : 'cascade_line_following_cgen/Subsystem/Discrete PID Controller/Tracking Mode Sum'
 * '<S24>'  : 'cascade_line_following_cgen/Subsystem/Discrete PID Controller/Tsamp - Integral'
 * '<S25>'  : 'cascade_line_following_cgen/Subsystem/Discrete PID Controller/Tsamp - Ngain'
 * '<S26>'  : 'cascade_line_following_cgen/Subsystem/Discrete PID Controller/postSat Signal'
 * '<S27>'  : 'cascade_line_following_cgen/Subsystem/Discrete PID Controller/preSat Signal'
 * '<S28>'  : 'cascade_line_following_cgen/Subsystem/Discrete PID Controller/Anti-windup/Passthrough'
 * '<S29>'  : 'cascade_line_following_cgen/Subsystem/Discrete PID Controller/D Gain/Internal Parameters'
 * '<S30>'  : 'cascade_line_following_cgen/Subsystem/Discrete PID Controller/Filter/Disc. Forward Euler Filter'
 * '<S31>'  : 'cascade_line_following_cgen/Subsystem/Discrete PID Controller/Filter ICs/Internal IC - Filter'
 * '<S32>'  : 'cascade_line_following_cgen/Subsystem/Discrete PID Controller/I Gain/Internal Parameters'
 * '<S33>'  : 'cascade_line_following_cgen/Subsystem/Discrete PID Controller/Ideal P Gain/Passthrough'
 * '<S34>'  : 'cascade_line_following_cgen/Subsystem/Discrete PID Controller/Ideal P Gain Fdbk/Disabled'
 * '<S35>'  : 'cascade_line_following_cgen/Subsystem/Discrete PID Controller/Integrator/Discrete'
 * '<S36>'  : 'cascade_line_following_cgen/Subsystem/Discrete PID Controller/Integrator ICs/Internal IC'
 * '<S37>'  : 'cascade_line_following_cgen/Subsystem/Discrete PID Controller/N Copy/Disabled'
 * '<S38>'  : 'cascade_line_following_cgen/Subsystem/Discrete PID Controller/N Gain/Internal Parameters'
 * '<S39>'  : 'cascade_line_following_cgen/Subsystem/Discrete PID Controller/P Copy/Disabled'
 * '<S40>'  : 'cascade_line_following_cgen/Subsystem/Discrete PID Controller/Parallel P Gain/Internal Parameters'
 * '<S41>'  : 'cascade_line_following_cgen/Subsystem/Discrete PID Controller/Reset Signal/Disabled'
 * '<S42>'  : 'cascade_line_following_cgen/Subsystem/Discrete PID Controller/Saturation/Passthrough'
 * '<S43>'  : 'cascade_line_following_cgen/Subsystem/Discrete PID Controller/Saturation Fdbk/Disabled'
 * '<S44>'  : 'cascade_line_following_cgen/Subsystem/Discrete PID Controller/Sum/Sum_PID'
 * '<S45>'  : 'cascade_line_following_cgen/Subsystem/Discrete PID Controller/Sum Fdbk/Disabled'
 * '<S46>'  : 'cascade_line_following_cgen/Subsystem/Discrete PID Controller/Tracking Mode/Disabled'
 * '<S47>'  : 'cascade_line_following_cgen/Subsystem/Discrete PID Controller/Tracking Mode Sum/Passthrough'
 * '<S48>'  : 'cascade_line_following_cgen/Subsystem/Discrete PID Controller/Tsamp - Integral/TsSignalSpecification'
 * '<S49>'  : 'cascade_line_following_cgen/Subsystem/Discrete PID Controller/Tsamp - Ngain/Passthrough'
 * '<S50>'  : 'cascade_line_following_cgen/Subsystem/Discrete PID Controller/postSat Signal/Forward_Path'
 * '<S51>'  : 'cascade_line_following_cgen/Subsystem/Discrete PID Controller/preSat Signal/Forward_Path'
 * '<S52>'  : 'cascade_line_following_cgen/Subsystem/Discrete PID Controller1/Anti-windup'
 * '<S53>'  : 'cascade_line_following_cgen/Subsystem/Discrete PID Controller1/D Gain'
 * '<S54>'  : 'cascade_line_following_cgen/Subsystem/Discrete PID Controller1/Filter'
 * '<S55>'  : 'cascade_line_following_cgen/Subsystem/Discrete PID Controller1/Filter ICs'
 * '<S56>'  : 'cascade_line_following_cgen/Subsystem/Discrete PID Controller1/I Gain'
 * '<S57>'  : 'cascade_line_following_cgen/Subsystem/Discrete PID Controller1/Ideal P Gain'
 * '<S58>'  : 'cascade_line_following_cgen/Subsystem/Discrete PID Controller1/Ideal P Gain Fdbk'
 * '<S59>'  : 'cascade_line_following_cgen/Subsystem/Discrete PID Controller1/Integrator'
 * '<S60>'  : 'cascade_line_following_cgen/Subsystem/Discrete PID Controller1/Integrator ICs'
 * '<S61>'  : 'cascade_line_following_cgen/Subsystem/Discrete PID Controller1/N Copy'
 * '<S62>'  : 'cascade_line_following_cgen/Subsystem/Discrete PID Controller1/N Gain'
 * '<S63>'  : 'cascade_line_following_cgen/Subsystem/Discrete PID Controller1/P Copy'
 * '<S64>'  : 'cascade_line_following_cgen/Subsystem/Discrete PID Controller1/Parallel P Gain'
 * '<S65>'  : 'cascade_line_following_cgen/Subsystem/Discrete PID Controller1/Reset Signal'
 * '<S66>'  : 'cascade_line_following_cgen/Subsystem/Discrete PID Controller1/Saturation'
 * '<S67>'  : 'cascade_line_following_cgen/Subsystem/Discrete PID Controller1/Saturation Fdbk'
 * '<S68>'  : 'cascade_line_following_cgen/Subsystem/Discrete PID Controller1/Sum'
 * '<S69>'  : 'cascade_line_following_cgen/Subsystem/Discrete PID Controller1/Sum Fdbk'
 * '<S70>'  : 'cascade_line_following_cgen/Subsystem/Discrete PID Controller1/Tracking Mode'
 * '<S71>'  : 'cascade_line_following_cgen/Subsystem/Discrete PID Controller1/Tracking Mode Sum'
 * '<S72>'  : 'cascade_line_following_cgen/Subsystem/Discrete PID Controller1/Tsamp - Integral'
 * '<S73>'  : 'cascade_line_following_cgen/Subsystem/Discrete PID Controller1/Tsamp - Ngain'
 * '<S74>'  : 'cascade_line_following_cgen/Subsystem/Discrete PID Controller1/postSat Signal'
 * '<S75>'  : 'cascade_line_following_cgen/Subsystem/Discrete PID Controller1/preSat Signal'
 * '<S76>'  : 'cascade_line_following_cgen/Subsystem/Discrete PID Controller1/Anti-windup/Passthrough'
 * '<S77>'  : 'cascade_line_following_cgen/Subsystem/Discrete PID Controller1/D Gain/Internal Parameters'
 * '<S78>'  : 'cascade_line_following_cgen/Subsystem/Discrete PID Controller1/Filter/Disc. Forward Euler Filter'
 * '<S79>'  : 'cascade_line_following_cgen/Subsystem/Discrete PID Controller1/Filter ICs/Internal IC - Filter'
 * '<S80>'  : 'cascade_line_following_cgen/Subsystem/Discrete PID Controller1/I Gain/Internal Parameters'
 * '<S81>'  : 'cascade_line_following_cgen/Subsystem/Discrete PID Controller1/Ideal P Gain/Passthrough'
 * '<S82>'  : 'cascade_line_following_cgen/Subsystem/Discrete PID Controller1/Ideal P Gain Fdbk/Disabled'
 * '<S83>'  : 'cascade_line_following_cgen/Subsystem/Discrete PID Controller1/Integrator/Discrete'
 * '<S84>'  : 'cascade_line_following_cgen/Subsystem/Discrete PID Controller1/Integrator ICs/Internal IC'
 * '<S85>'  : 'cascade_line_following_cgen/Subsystem/Discrete PID Controller1/N Copy/Disabled'
 * '<S86>'  : 'cascade_line_following_cgen/Subsystem/Discrete PID Controller1/N Gain/Internal Parameters'
 * '<S87>'  : 'cascade_line_following_cgen/Subsystem/Discrete PID Controller1/P Copy/Disabled'
 * '<S88>'  : 'cascade_line_following_cgen/Subsystem/Discrete PID Controller1/Parallel P Gain/Internal Parameters'
 * '<S89>'  : 'cascade_line_following_cgen/Subsystem/Discrete PID Controller1/Reset Signal/Disabled'
 * '<S90>'  : 'cascade_line_following_cgen/Subsystem/Discrete PID Controller1/Saturation/Passthrough'
 * '<S91>'  : 'cascade_line_following_cgen/Subsystem/Discrete PID Controller1/Saturation Fdbk/Disabled'
 * '<S92>'  : 'cascade_line_following_cgen/Subsystem/Discrete PID Controller1/Sum/Sum_PID'
 * '<S93>'  : 'cascade_line_following_cgen/Subsystem/Discrete PID Controller1/Sum Fdbk/Disabled'
 * '<S94>'  : 'cascade_line_following_cgen/Subsystem/Discrete PID Controller1/Tracking Mode/Disabled'
 * '<S95>'  : 'cascade_line_following_cgen/Subsystem/Discrete PID Controller1/Tracking Mode Sum/Passthrough'
 * '<S96>'  : 'cascade_line_following_cgen/Subsystem/Discrete PID Controller1/Tsamp - Integral/TsSignalSpecification'
 * '<S97>'  : 'cascade_line_following_cgen/Subsystem/Discrete PID Controller1/Tsamp - Ngain/Passthrough'
 * '<S98>'  : 'cascade_line_following_cgen/Subsystem/Discrete PID Controller1/postSat Signal/Forward_Path'
 * '<S99>'  : 'cascade_line_following_cgen/Subsystem/Discrete PID Controller1/preSat Signal/Forward_Path'
 */
#endif                                 /* RTW_HEADER_Subsystem_h_ */
