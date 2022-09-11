/*
 * File: ConstantMem_4.c
 *
 * Code generated for Simulink model 'ConstantMem_4'.
 *
 * Model version                  : 1.16
 * Simulink Coder version         : 9.5 (R2021a) 14-Nov-2020
 * C/C++ source code generated on : Mon Jan 24 05:54:34 2022
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Atmel->AVR
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "ConstantMem_4.h"
#include "ConstantMem_4_private.h"

P_ConstantMem_4_T ConstantMem_4_P = {
  /* Expression: [0.0,0.3,0.4,0.3;0.3,0.0,0.5,0.0;0.4,0.5,0.0,0.3;0.3,0.0,0.3,0.0]
   * Referenced by: '<Root>/Constant'
   */
  { 0.0, 0.3, 0.4, 0.3, 0.3, 0.0, 0.5, 0.0, 0.4, 0.5, 0.0, 0.3, 0.3, 0.0, 0.3,
    0.0 },

  /* Expression: [0.3;0.2;0.5;0.4]
   * Referenced by: '<Root>/Constant1'
   */
  { 0.3, 0.2, 0.5, 0.4 },

  /* Expression: [9;7;11;7]
   * Referenced by: '<Root>/Constant2'
   */
  { 9.0, 7.0, 11.0, 7.0 },

  /* Expression: [20;20;20;20]
   * Referenced by: '<Root>/Constant3'
   */
  { 20.0, 20.0, 20.0, 20.0 },

  /* Expression: [19;19;19;19]
   * Referenced by: '<Root>/Constant4'
   */
  { 19.0, 19.0, 19.0, 19.0 },

  /* Expression: [17;16;16;17]
   * Referenced by: '<Root>/Constant5'
   */
  { 17.0, 16.0, 16.0, 17.0 },

  /* Expression: [1;1;1;1]
   * Referenced by: '<Root>/Constant6'
   */
  { 1.0, 1.0, 1.0, 1.0 },

  /* Expression: [16.5;16.5;16.5;16.5]
   * Referenced by: '<Root>/Constant7'
   */
  { 16.5, 16.5, 16.5, 16.5 }
};

/* System initialize for referenced model: 'ConstantMem_4' */
void ConstantMem_4_Init(real_T rty_C_A[16], real_T rty_C_b[4], real_T rty_C_c[4],
  real_T rty_C_x0[4], real_T rty_C_off[4], real_T rty_C_on[4], real_T rty_C_get
  [4], real_T rty_C_diff[4])
{
  /* Start for Constant: '<Root>/Constant' */
  memcpy(&rty_C_A[0], &ConstantMem_4_P.Constant_Value[0], sizeof(real_T) << 4U);

  /* Start for Constant: '<Root>/Constant1' */
  rty_C_b[0] = ConstantMem_4_P.Constant1_Value[0];

  /* Start for Constant: '<Root>/Constant2' */
  rty_C_c[0] = ConstantMem_4_P.Constant2_Value[0];

  /* Start for Constant: '<Root>/Constant3' */
  rty_C_off[0] = ConstantMem_4_P.Constant3_Value[0];

  /* Start for Constant: '<Root>/Constant4' */
  rty_C_on[0] = ConstantMem_4_P.Constant4_Value[0];

  /* Start for Constant: '<Root>/Constant5' */
  rty_C_get[0] = ConstantMem_4_P.Constant5_Value[0];

  /* Start for Constant: '<Root>/Constant6' */
  rty_C_diff[0] = ConstantMem_4_P.Constant6_Value[0];

  /* Start for Constant: '<Root>/Constant7' */
  rty_C_x0[0] = ConstantMem_4_P.Constant7_Value[0];

  /* Start for Constant: '<Root>/Constant1' */
  rty_C_b[1] = ConstantMem_4_P.Constant1_Value[1];

  /* Start for Constant: '<Root>/Constant2' */
  rty_C_c[1] = ConstantMem_4_P.Constant2_Value[1];

  /* Start for Constant: '<Root>/Constant3' */
  rty_C_off[1] = ConstantMem_4_P.Constant3_Value[1];

  /* Start for Constant: '<Root>/Constant4' */
  rty_C_on[1] = ConstantMem_4_P.Constant4_Value[1];

  /* Start for Constant: '<Root>/Constant5' */
  rty_C_get[1] = ConstantMem_4_P.Constant5_Value[1];

  /* Start for Constant: '<Root>/Constant6' */
  rty_C_diff[1] = ConstantMem_4_P.Constant6_Value[1];

  /* Start for Constant: '<Root>/Constant7' */
  rty_C_x0[1] = ConstantMem_4_P.Constant7_Value[1];

  /* Start for Constant: '<Root>/Constant1' */
  rty_C_b[2] = ConstantMem_4_P.Constant1_Value[2];

  /* Start for Constant: '<Root>/Constant2' */
  rty_C_c[2] = ConstantMem_4_P.Constant2_Value[2];

  /* Start for Constant: '<Root>/Constant3' */
  rty_C_off[2] = ConstantMem_4_P.Constant3_Value[2];

  /* Start for Constant: '<Root>/Constant4' */
  rty_C_on[2] = ConstantMem_4_P.Constant4_Value[2];

  /* Start for Constant: '<Root>/Constant5' */
  rty_C_get[2] = ConstantMem_4_P.Constant5_Value[2];

  /* Start for Constant: '<Root>/Constant6' */
  rty_C_diff[2] = ConstantMem_4_P.Constant6_Value[2];

  /* Start for Constant: '<Root>/Constant7' */
  rty_C_x0[2] = ConstantMem_4_P.Constant7_Value[2];

  /* Start for Constant: '<Root>/Constant1' */
  rty_C_b[3] = ConstantMem_4_P.Constant1_Value[3];

  /* Start for Constant: '<Root>/Constant2' */
  rty_C_c[3] = ConstantMem_4_P.Constant2_Value[3];

  /* Start for Constant: '<Root>/Constant3' */
  rty_C_off[3] = ConstantMem_4_P.Constant3_Value[3];

  /* Start for Constant: '<Root>/Constant4' */
  rty_C_on[3] = ConstantMem_4_P.Constant4_Value[3];

  /* Start for Constant: '<Root>/Constant5' */
  rty_C_get[3] = ConstantMem_4_P.Constant5_Value[3];

  /* Start for Constant: '<Root>/Constant6' */
  rty_C_diff[3] = ConstantMem_4_P.Constant6_Value[3];

  /* Start for Constant: '<Root>/Constant7' */
  rty_C_x0[3] = ConstantMem_4_P.Constant7_Value[3];
}

/* Output and update for referenced model: 'ConstantMem_4' */
void ConstantMem_4(real_T rty_C_A[16], real_T rty_C_b[4], real_T rty_C_c[4],
                   real_T rty_C_x0[4], real_T rty_C_off[4], real_T rty_C_on[4],
                   real_T rty_C_get[4], real_T rty_C_diff[4])
{
  /* Constant: '<Root>/Constant' */
  memcpy(&rty_C_A[0], &ConstantMem_4_P.Constant_Value[0], sizeof(real_T) << 4U);

  /* Constant: '<Root>/Constant1' */
  rty_C_b[0] = ConstantMem_4_P.Constant1_Value[0];

  /* Constant: '<Root>/Constant2' */
  rty_C_c[0] = ConstantMem_4_P.Constant2_Value[0];

  /* Constant: '<Root>/Constant3' */
  rty_C_off[0] = ConstantMem_4_P.Constant3_Value[0];

  /* Constant: '<Root>/Constant4' */
  rty_C_on[0] = ConstantMem_4_P.Constant4_Value[0];

  /* Constant: '<Root>/Constant5' */
  rty_C_get[0] = ConstantMem_4_P.Constant5_Value[0];

  /* Constant: '<Root>/Constant6' */
  rty_C_diff[0] = ConstantMem_4_P.Constant6_Value[0];

  /* Constant: '<Root>/Constant7' */
  rty_C_x0[0] = ConstantMem_4_P.Constant7_Value[0];

  /* Constant: '<Root>/Constant1' */
  rty_C_b[1] = ConstantMem_4_P.Constant1_Value[1];

  /* Constant: '<Root>/Constant2' */
  rty_C_c[1] = ConstantMem_4_P.Constant2_Value[1];

  /* Constant: '<Root>/Constant3' */
  rty_C_off[1] = ConstantMem_4_P.Constant3_Value[1];

  /* Constant: '<Root>/Constant4' */
  rty_C_on[1] = ConstantMem_4_P.Constant4_Value[1];

  /* Constant: '<Root>/Constant5' */
  rty_C_get[1] = ConstantMem_4_P.Constant5_Value[1];

  /* Constant: '<Root>/Constant6' */
  rty_C_diff[1] = ConstantMem_4_P.Constant6_Value[1];

  /* Constant: '<Root>/Constant7' */
  rty_C_x0[1] = ConstantMem_4_P.Constant7_Value[1];

  /* Constant: '<Root>/Constant1' */
  rty_C_b[2] = ConstantMem_4_P.Constant1_Value[2];

  /* Constant: '<Root>/Constant2' */
  rty_C_c[2] = ConstantMem_4_P.Constant2_Value[2];

  /* Constant: '<Root>/Constant3' */
  rty_C_off[2] = ConstantMem_4_P.Constant3_Value[2];

  /* Constant: '<Root>/Constant4' */
  rty_C_on[2] = ConstantMem_4_P.Constant4_Value[2];

  /* Constant: '<Root>/Constant5' */
  rty_C_get[2] = ConstantMem_4_P.Constant5_Value[2];

  /* Constant: '<Root>/Constant6' */
  rty_C_diff[2] = ConstantMem_4_P.Constant6_Value[2];

  /* Constant: '<Root>/Constant7' */
  rty_C_x0[2] = ConstantMem_4_P.Constant7_Value[2];

  /* Constant: '<Root>/Constant1' */
  rty_C_b[3] = ConstantMem_4_P.Constant1_Value[3];

  /* Constant: '<Root>/Constant2' */
  rty_C_c[3] = ConstantMem_4_P.Constant2_Value[3];

  /* Constant: '<Root>/Constant3' */
  rty_C_off[3] = ConstantMem_4_P.Constant3_Value[3];

  /* Constant: '<Root>/Constant4' */
  rty_C_on[3] = ConstantMem_4_P.Constant4_Value[3];

  /* Constant: '<Root>/Constant5' */
  rty_C_get[3] = ConstantMem_4_P.Constant5_Value[3];

  /* Constant: '<Root>/Constant6' */
  rty_C_diff[3] = ConstantMem_4_P.Constant6_Value[3];

  /* Constant: '<Root>/Constant7' */
  rty_C_x0[3] = ConstantMem_4_P.Constant7_Value[3];
}

/* Model initialize function */
void ConstantMem_4_initialize(const char_T **rt_errorStatus,
  RT_MODEL_ConstantMem_4_T *const ConstantMem_4_M)
{
  /* Registration code */

  /* initialize error status */
  rtmSetErrorStatusPointer(ConstantMem_4_M, rt_errorStatus);
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
