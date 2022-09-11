/*
 * File: outside.c
 *
 * Code generated for Simulink model 'outside'.
 *
 * Model version                  : 1.5
 * Simulink Coder version         : 9.5 (R2021a) 14-Nov-2020
 * C/C++ source code generated on : Mon Jan 24 05:55:16 2022
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Atmel->AVR
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "outside.h"
#include "outside_private.h"

P_outside_T outside_P = {
  /* Expression: 6
   * Referenced by: '<Root>/Constant'
   */
  6.0
};

/* System initialize for referenced model: 'outside' */
void outside_Init(real_T *rty_u)
{
  /* Start for Constant: '<Root>/Constant' */
  *rty_u = outside_P.Constant_Value;
}

/* Output and update for referenced model: 'outside' */
void outside(real_T *rty_u)
{
  /* Constant: '<Root>/Constant' */
  *rty_u = outside_P.Constant_Value;
}

/* Model initialize function */
void outside_initialize(const char_T **rt_errorStatus, RT_MODEL_outside_T *const
  outside_M)
{
  /* Registration code */

  /* initialize error status */
  rtmSetErrorStatusPointer(outside_M, rt_errorStatus);
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
