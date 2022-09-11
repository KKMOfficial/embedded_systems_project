/*
 * File: room1.h
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

#ifndef RTW_HEADER_room1_h_
#define RTW_HEADER_room1_h_
#include <math.h>
#ifndef room1_COMMON_INCLUDES_
#define room1_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "rtw_continuous.h"
#include "rtw_solver.h"
#endif                                 /* room1_COMMON_INCLUDES_ */

#include "room1_types.h"
#include "MW_target_hardware_resources.h"
#include "rt_nonfinite.h"
#include "rtGetInf.h"

/* Block signals for model 'room1' */
typedef struct {
  real_T Submatrix3[4];                /* '<Root>/Submatrix3' */
  real_T Sum1;                         /* '<Root>/Sum1' */
} B_room1_c_T;

/* Continuous states for model 'room1' */
typedef struct {
  real_T Integrator_CSTATE;            /* '<Root>/Integrator' */
} X_room1_n_T;

/* State derivatives for model 'room1' */
typedef struct {
  real_T Integrator_CSTATE;            /* '<Root>/Integrator' */
} XDot_room1_n_T;

/* State Disabled for model 'room1' */
typedef struct {
  boolean_T Integrator_CSTATE;         /* '<Root>/Integrator' */
} XDis_room1_n_T;

/* Parameters (default storage) */
struct P_room1_T_ {
  real_T Constant_Value;               /* Expression: 0
                                        * Referenced by: '<S1>/Constant'
                                        */
  real_T Constant_Value_e;             /* Expression: 0
                                        * Referenced by: '<S2>/Constant'
                                        */
  real_T Integrator_IC;                /* Expression: 0
                                        * Referenced by: '<Root>/Integrator'
                                        */
};

/* Real-time Model Data Structure */
struct tag_RTM_room1_T {
  const char_T **errorStatus;
  RTWSolverInfo *solverInfo;

  /*
   * Timing:
   * The following substructure contains information regarding
   * the timing information for the model.
   */
  struct {
    time_T stepSize0;
    SimTimeStep *simTimeStep;
    boolean_T *stopRequestedFlag;
  } Timing;
};

typedef struct {
  B_room1_c_T rtb;
  RT_MODEL_room1_T rtm;
} MdlrefDW_room1_T;

/* Model reference registration function */
extern void room1_initialize(const char_T **rt_errorStatus, boolean_T
  *rt_stopRequested, RTWSolverInfo *rt_solverInfo, RT_MODEL_room1_T *const
  room1_M);
extern void room1_Init(X_room1_n_T *localX);
extern void room1_Deriv(B_room1_c_T *localB, XDot_room1_n_T *localXdot);
extern void room1_Update(void);
extern void room1(const real_T *rtu_X_u, const real_T *rtu_X_x1, const real_T
                  *rtu_X_x2, const real_T *rtu_X_x3, const real_T *rtu_X_x4,
                  const int8_T *rtu_H_h1, const real_T rtu_C_A[16], const real_T
                  rtu_C_b[4], const real_T rtu_C_c[4], const real_T rtu_C_x0[4],
                  const real_T rtu_C_off[4], const real_T rtu_C_on[4], real_T
                  *rty_x1, B_room1_c_T *localB, X_room1_n_T *localX);

/*-
 * The generated code includes comments that allow you to trace directly
 * back to the appropriate location in the model.  The basic format
 * is <system>/block_name, where system is the system number (uniquely
 * assigned by Simulink) and block_name is the name of the block.
 *
 * Use the MATLAB hilite_system command to trace the generated code back
 * to the model.  For example,
 *
 * hilite_system('<S3>')    - opens system 3
 * hilite_system('<S3>/Kp') - opens and selects block Kp which resides in S3
 *
 * Here is the system hierarchy for this model
 *
 * '<Root>' : 'room1'
 * '<S1>'   : 'room1/Compare To Zero'
 * '<S2>'   : 'room1/Compare To Zero1'
 */
#endif                                 /* RTW_HEADER_room1_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
