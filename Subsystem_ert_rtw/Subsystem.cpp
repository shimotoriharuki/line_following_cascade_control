//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// File: Subsystem.cpp
//
// Code generated for Simulink model 'Subsystem'.
//
// Model version                  : 1.3
// Simulink Coder version         : 9.9 (R2023a) 19-Nov-2022
// C/C++ source code generated on : Sun Aug 13 21:06:17 2023
//
// Target selection: ert.tlc
// Embedded hardware selection: STMicroelectronics->ST10/Super10
// Code generation objectives:
//    1. Execution efficiency
//    2. RAM efficiency
// Validation result: Not run
//
#include "Subsystem.h"
#include "rtwtypes.h"

// Model step function
void Subsystem::step()
{
  real_T rtb_FilterCoefficient;
  real_T rtb_FilterCoefficient_l;
  real_T rtb_anguler_velocity_diff;

  // Outputs for Atomic SubSystem: '<Root>/Subsystem'
  // Gain: '<S86>/Filter Coefficient' incorporates:
  //   Constant: '<S1>/Constant'
  //   DiscreteIntegrator: '<S78>/Filter'
  //   Gain: '<S77>/Derivative Gain'
  //   Inport: '<Root>/angle'
  //   Sum: '<S1>/Sum'
  //   Sum: '<S78>/SumD'

  rtb_FilterCoefficient = ((0.0 - rtU.angle) * 29.952480157366 -
    rtDW.Filter_DSTATE) * 19.935764748424;

  // Sum: '<S1>/Sum1' incorporates:
  //   Constant: '<S1>/Constant'
  //   DiscreteIntegrator: '<S83>/Integrator'
  //   Gain: '<S88>/Proportional Gain'
  //   Inport: '<Root>/angle'
  //   Inport: '<Root>/anguler_velocity'
  //   Sum: '<S1>/Sum'
  //   Sum: '<S92>/Sum'

  rtb_anguler_velocity_diff = (((0.0 - rtU.angle) * 238.049419477365 +
    rtDW.Integrator_DSTATE) + rtb_FilterCoefficient) - rtU.anguler_velocity;

  // Gain: '<S38>/Filter Coefficient' incorporates:
  //   DiscreteIntegrator: '<S30>/Filter'
  //   Gain: '<S29>/Derivative Gain'
  //   Sum: '<S30>/SumD'

  rtb_FilterCoefficient_l = (0.0114466127701894 * rtb_anguler_velocity_diff -
    rtDW.Filter_DSTATE_k) * 838.49688574406;

  // Outport: '<Root>/duty' incorporates:
  //   DiscreteIntegrator: '<S35>/Integrator'
  //   Gain: '<S40>/Proportional Gain'
  //   Sum: '<S44>/Sum'

  rtY.duty = (1.32429471708856 * rtb_anguler_velocity_diff +
              rtDW.Integrator_DSTATE_m) + rtb_FilterCoefficient_l;

  // Update for DiscreteIntegrator: '<S83>/Integrator' incorporates:
  //   Constant: '<S1>/Constant'
  //   Gain: '<S80>/Integral Gain'
  //   Inport: '<Root>/angle'
  //   Sum: '<S1>/Sum'

  rtDW.Integrator_DSTATE += (0.0 - rtU.angle) * 314.571040204805 * 0.001;

  // Update for DiscreteIntegrator: '<S78>/Filter'
  rtDW.Filter_DSTATE += 0.001 * rtb_FilterCoefficient;

  // Update for DiscreteIntegrator: '<S30>/Filter'
  rtDW.Filter_DSTATE_k += 0.001 * rtb_FilterCoefficient_l;

  // Update for DiscreteIntegrator: '<S35>/Integrator' incorporates:
  //   Gain: '<S32>/Integral Gain'

  rtDW.Integrator_DSTATE_m += 1.57739728537751 * rtb_anguler_velocity_diff *
    0.001;

  // End of Outputs for SubSystem: '<Root>/Subsystem'
}

// Model initialize function
void Subsystem::initialize()
{
  // (no initialization code required)
}

// Constructor
Subsystem::Subsystem() :
  rtU(),
  rtY(),
  rtDW(),
  rtM()
{
  // Currently there is no constructor body generated.
}

// Destructor
// Currently there is no destructor body generated.
Subsystem::~Subsystem() = default;

// Real-Time Model get method
Subsystem::RT_MODEL * Subsystem::getRTM()
{
  return (&rtM);
}

//
// File trailer for generated code.
//
// [EOF]
//
