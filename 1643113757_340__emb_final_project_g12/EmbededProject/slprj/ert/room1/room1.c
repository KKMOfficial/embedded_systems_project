/*
 * File: room1.c
 *
 * Code generated for Simulink model 'room1'.
 *
 * Model version                  : 1.39
 * Simulink Coder version         : 9.5 (R2021a) 14-Nov-2020
 * C/C++ source code generated on : Mon Jan 24 05:55:23 2022
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Atmel->AVR
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "room1.h"
#include "room1_private.h"

P_room1_T room1_P = {
  /* Expression: 0
   * Referenced by: '<S1>/Constant'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S2>/Constant'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<Root>/Integrator'
   */
  0.0
};

/* System initialize for referenced model: 'room1' */
void room1_Init(X_room1_n_T *localX)
{
  /* InitializeConditions for Integrator: '<Root>/Integrator' */
  localX->Integrator_CSTATE = room1_P.Integrator_IC;
}

/* Outputs for referenced model: 'room1' */
void room1(const real_T *rtu_X_u, const real_T *rtu_X_x1, const real_T *rtu_X_x2,
           const real_T *rtu_X_x3, const real_T *rtu_X_x4, const int8_T
           *rtu_H_h1, const real_T rtu_C_A[16], const real_T rtu_C_b[4], const
           real_T rtu_C_c[4], const real_T rtu_C_x0[4], const real_T rtu_C_off[4],
           const real_T rtu_C_on[4], real_T *rty_x1, B_room1_c_T *localB,
           X_room1_n_T *localX)
{
  real_T rtb_Subtract;
  real_T rtb_Sum3;
  real_T rtb_Sum4;
  real_T rtb_Sum_idx_0;
  real_T rtb_Sum_idx_1;
  real_T rtb_Sum_idx_2;
  real_T rtb_Sum_idx_3;

  /* Sum: '<Root>/Sum' */
  rtb_Sum_idx_0 = *rtu_X_x1 - *rtu_X_x1;
  rtb_Sum_idx_1 = *rtu_X_x2 - *rtu_X_x1;
  rtb_Sum_idx_2 = *rtu_X_x3 - *rtu_X_x1;
  rtb_Sum_idx_3 = *rtu_X_x4 - *rtu_X_x1;

  /* S-Function (sdspsubmtrx): '<Root>/Submatrix3' */
  localB->Submatrix3[0L] = rtu_C_A[0L];
  localB->Submatrix3[1L] = rtu_C_A[4L];
  localB->Submatrix3[2L] = rtu_C_A[8L];
  localB->Submatrix3[3L] = rtu_C_A[12L];

  /* Sum: '<Root>/Sum4' incorporates:
   *  S-Function (sdspsubmtrx): '<Root>/Submatrix6'
   */
  rtb_Sum4 = *rtu_X_x1 - rtu_C_on[0L];

  /* Sum: '<Root>/Sum3' incorporates:
   *  S-Function (sdspsubmtrx): '<Root>/Submatrix5'
   */
  rtb_Sum3 = *rtu_X_x1 - rtu_C_off[0L];

  /* Sum: '<Root>/Subtract' */
  rtb_Subtract = *rtu_X_u - *rtu_X_x1;

  /* Product: '<Root>/Product' incorporates:
   *  Constant: '<S1>/Constant'
   *  Constant: '<S2>/Constant'
   *  Product: '<Root>/Product3'
   *  RelationalOperator: '<S1>/Compare'
   *  RelationalOperator: '<S2>/Compare'
   *  S-Function (sdspsubmtrx): '<Root>/Submatrix1'
   */
  rtb_Sum4 = floor((real_T)((int16_T)((uint16_T)(rtb_Sum4 <=
    room1_P.Constant_Value) * (rtb_Sum3 <= room1_P.Constant_Value_e)) *
    *rtu_H_h1) * rtu_C_c[0L]);
  if (rtIsNaN(rtb_Sum4) || rtIsInf(rtb_Sum4)) {
    rtb_Sum4 = 0.0;
  } else {
    rtb_Sum4 = fmod(rtb_Sum4, 4.294967296E+9);
  }

  /* Sum: '<Root>/Sum1' incorporates:
   *  Product: '<Root>/Product'
   *  Product: '<Root>/Product1'
   *  Product: '<Root>/Product2'
   *  S-Function (sdspsubmtrx): '<Root>/Submatrix2'
   *  S-Function (sdspsubmtrx): '<Root>/Submatrix3'
   */
  localB->Sum1 = (((localB->Submatrix3[0] * rtb_Sum_idx_0 + localB->Submatrix3[1]
                    * rtb_Sum_idx_1) + localB->Submatrix3[2] * rtb_Sum_idx_2) +
                  localB->Submatrix3[3] * rtb_Sum_idx_3) + (rtu_C_b[0L] *
    rtb_Subtract + (real_T)(rtb_Sum4 < 0.0 ? -(int32_T)(uint32_T)-rtb_Sum4 :
    (int32_T)(uint32_T)rtb_Sum4));

  /* Sum: '<Root>/Sum2' incorporates:
   *  Integrator: '<Root>/Integrator'
   *  S-Function (sdspsubmtrx): '<Root>/Submatrix4'
   */
  *rty_x1 = rtu_C_x0[0L] + localX->Integrator_CSTATE;
}

/* Update for referenced model: 'room1' */
void room1_Update(void)
{
}

/* Derivatives for referenced model: 'room1' */
void room1_Deriv(B_room1_c_T *localB, XDot_room1_n_T *localXdot)
{
  /* Derivatives for Integrator: '<Root>/Integrator' */
  localXdot->Integrator_CSTATE = localB->Sum1;
}

/* Model initialize function */
void room1_initialize(const char_T **rt_errorStatus, boolean_T *rt_stopRequested,
                      RTWSolverInfo *rt_solverInfo, RT_MODEL_room1_T *const
                      room1_M)
{
  /* Registration code */

  /* initialize non-finites */
  rt_InitInfAndNaN(sizeof(real_T));

  /* initialize error status */
  rtmSetErrorStatusPointer(room1_M, rt_errorStatus);

  /* initialize stop requested flag */
  rtmSetStopRequestedPtr(room1_M, rt_stopRequested);

  /* initialize RTWSolverInfo */
  room1_M->solverInfo = (rt_solverInfo);

  /* Set the Timing fields to the appropriate data in the RTWSolverInfo */
  rtmSetSimTimeStepPointer(room1_M, rtsiGetSimTimeStepPtr(room1_M->solverInfo));
  room1_M->Timing.stepSize0 = (rtsiGetStepSize(room1_M->solverInfo));
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
