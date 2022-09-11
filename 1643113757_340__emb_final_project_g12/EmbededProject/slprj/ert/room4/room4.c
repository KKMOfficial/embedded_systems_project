/*
 * File: room4.c
 *
 * Code generated for Simulink model 'room4'.
 *
 * Model version                  : 1.16
 * Simulink Coder version         : 9.5 (R2021a) 14-Nov-2020
 * C/C++ source code generated on : Mon Jan 24 05:55:42 2022
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Atmel->AVR
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "room4.h"
#include "room4_private.h"

P_room4_T room4_P = {
  /* Expression: 0
   * Referenced by: '<S1>/Constant'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S2>/Constant'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<Root>/Integrator1'
   */
  0.0
};

/* System initialize for referenced model: 'room4' */
void room4_Init(X_room4_n_T *localX)
{
  /* InitializeConditions for Integrator: '<Root>/Integrator1' */
  localX->Integrator1_CSTATE = room4_P.Integrator1_IC;
}

/* Outputs for referenced model: 'room4' */
void room4(const real_T *rtu_X_u, const real_T *rtu_X_x1, const real_T *rtu_X_x2,
           const real_T *rtu_X_x3, const real_T *rtu_X_x4, const int8_T
           *rtu_H_h4, const real_T rtu_C_A[16], const real_T rtu_C_b[4], const
           real_T rtu_C_c[4], const real_T rtu_C_x0[4], const real_T rtu_C_off[4],
           const real_T rtu_C_on[4], real_T *rty_x4, B_room4_c_T *localB,
           X_room4_n_T *localX)
{
  real_T rtb_Subtract1;
  real_T rtb_Sum5_idx_0;
  real_T rtb_Sum5_idx_1;
  real_T rtb_Sum5_idx_2;
  real_T rtb_Sum5_idx_3;
  real_T rtb_Sum8;
  real_T rtb_Sum9;

  /* Sum: '<Root>/Sum5' */
  rtb_Sum5_idx_0 = *rtu_X_x1 - *rtu_X_x4;
  rtb_Sum5_idx_1 = *rtu_X_x2 - *rtu_X_x4;
  rtb_Sum5_idx_2 = *rtu_X_x3 - *rtu_X_x4;
  rtb_Sum5_idx_3 = *rtu_X_x4 - *rtu_X_x4;

  /* S-Function (sdspsubmtrx): '<Root>/Submatrix9' */
  localB->Submatrix9[0L] = rtu_C_A[3L];
  localB->Submatrix9[1L] = rtu_C_A[7L];
  localB->Submatrix9[2L] = rtu_C_A[11L];
  localB->Submatrix9[3L] = rtu_C_A[15L];

  /* Sum: '<Root>/Sum9' incorporates:
   *  S-Function (sdspsubmtrx): '<Root>/Submatrix12'
   */
  rtb_Sum9 = *rtu_X_x4 - rtu_C_on[3L];

  /* Sum: '<Root>/Sum8' incorporates:
   *  S-Function (sdspsubmtrx): '<Root>/Submatrix11'
   */
  rtb_Sum8 = *rtu_X_x4 - rtu_C_off[3L];

  /* Sum: '<Root>/Subtract1' */
  rtb_Subtract1 = *rtu_X_u - *rtu_X_x4;

  /* Product: '<Root>/Product4' incorporates:
   *  Constant: '<S1>/Constant'
   *  Constant: '<S2>/Constant'
   *  Product: '<Root>/Product7'
   *  RelationalOperator: '<S1>/Compare'
   *  RelationalOperator: '<S2>/Compare'
   *  S-Function (sdspsubmtrx): '<Root>/Submatrix7'
   */
  rtb_Sum9 = floor((real_T)((int16_T)((uint16_T)(rtb_Sum9 <=
    room4_P.Constant_Value) * (rtb_Sum8 <= room4_P.Constant_Value_f)) *
    *rtu_H_h4) * rtu_C_c[3L]);
  if (rtIsNaN(rtb_Sum9) || rtIsInf(rtb_Sum9)) {
    rtb_Sum9 = 0.0;
  } else {
    rtb_Sum9 = fmod(rtb_Sum9, 4.294967296E+9);
  }

  /* Sum: '<Root>/Sum6' incorporates:
   *  Product: '<Root>/Product4'
   *  Product: '<Root>/Product5'
   *  Product: '<Root>/Product6'
   *  S-Function (sdspsubmtrx): '<Root>/Submatrix8'
   *  S-Function (sdspsubmtrx): '<Root>/Submatrix9'
   */
  localB->Sum6 = (((localB->Submatrix9[0] * rtb_Sum5_idx_0 + localB->Submatrix9
                    [1] * rtb_Sum5_idx_1) + localB->Submatrix9[2] *
                   rtb_Sum5_idx_2) + localB->Submatrix9[3] * rtb_Sum5_idx_3) +
    (rtu_C_b[3L] * rtb_Subtract1 + (real_T)(rtb_Sum9 < 0.0 ? -(int32_T)(uint32_T)
      -rtb_Sum9 : (int32_T)(uint32_T)rtb_Sum9));

  /* Sum: '<Root>/Sum7' incorporates:
   *  Integrator: '<Root>/Integrator1'
   *  S-Function (sdspsubmtrx): '<Root>/Submatrix10'
   */
  *rty_x4 = rtu_C_x0[3L] + localX->Integrator1_CSTATE;
}

/* Update for referenced model: 'room4' */
void room4_Update(void)
{
}

/* Derivatives for referenced model: 'room4' */
void room4_Deriv(B_room4_c_T *localB, XDot_room4_n_T *localXdot)
{
  /* Derivatives for Integrator: '<Root>/Integrator1' */
  localXdot->Integrator1_CSTATE = localB->Sum6;
}

/* Model initialize function */
void room4_initialize(const char_T **rt_errorStatus, boolean_T *rt_stopRequested,
                      RTWSolverInfo *rt_solverInfo, RT_MODEL_room4_T *const
                      room4_M)
{
  /* Registration code */

  /* initialize non-finites */
  rt_InitInfAndNaN(sizeof(real_T));

  /* initialize error status */
  rtmSetErrorStatusPointer(room4_M, rt_errorStatus);

  /* initialize stop requested flag */
  rtmSetStopRequestedPtr(room4_M, rt_stopRequested);

  /* initialize RTWSolverInfo */
  room4_M->solverInfo = (rt_solverInfo);

  /* Set the Timing fields to the appropriate data in the RTWSolverInfo */
  rtmSetSimTimeStepPointer(room4_M, rtsiGetSimTimeStepPtr(room4_M->solverInfo));
  room4_M->Timing.stepSize0 = (rtsiGetStepSize(room4_M->solverInfo));
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
