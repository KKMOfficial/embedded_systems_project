/*
 * File: joinX_1.c
 *
 * Code generated for Simulink model 'joinX_1'.
 *
 * Model version                  : 1.10
 * Simulink Coder version         : 9.5 (R2021a) 14-Nov-2020
 * C/C++ source code generated on : Mon Jan 24 05:55:04 2022
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Atmel->AVR
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "joinX_1.h"
#include "joinX_1_private.h"

/* Output and update for referenced model: 'joinX_1' */
void joinX_1(const real_T *rtu_u, const real_T *rtu_x1, const real_T *rtu_x2,
             const real_T *rtu_x3, const real_T *rtu_x4, real_T *rty_X_u, real_T
             *rty_X_x1, real_T *rty_X_x2, real_T *rty_X_x3, real_T *rty_X_x4)
{
  /* SignalConversion generated from: '<Root>/u_Inport_1' */
  *rty_X_u = *rtu_u;

  /* SignalConversion generated from: '<Root>/x1_Inport_2' */
  *rty_X_x1 = *rtu_x1;

  /* SignalConversion generated from: '<Root>/x2_Inport_3' */
  *rty_X_x2 = *rtu_x2;

  /* SignalConversion generated from: '<Root>/x3_Inport_4' */
  *rty_X_x3 = *rtu_x3;

  /* SignalConversion generated from: '<Root>/x4_Inport_5' */
  *rty_X_x4 = *rtu_x4;
}

/* Model initialize function */
void joinX_1_initialize(const char_T **rt_errorStatus, RT_MODEL_joinX_1_T *const
  joinX_1_M)
{
  /* Registration code */

  /* initialize error status */
  rtmSetErrorStatusPointer(joinX_1_M, rt_errorStatus);
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
