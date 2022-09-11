/*
 * File: controller.h
 *
 * Code generated for Simulink model 'controller'.
 *
 * Model version                  : 1.113
 * Simulink Coder version         : 9.5 (R2021a) 14-Nov-2020
 * C/C++ source code generated on : Mon Jan 24 05:54:57 2022
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Atmel->AVR
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_controller_h_
#define RTW_HEADER_controller_h_
#ifndef controller_COMMON_INCLUDES_
#define controller_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "rtw_continuous.h"
#include "rtw_solver.h"
#endif                                 /* controller_COMMON_INCLUDES_ */

#include "controller_types.h"
#include "MW_target_hardware_resources.h"

/* Block signals for model 'controller' */
typedef struct {
  real_T VectorConcatenate_idx_0;
  real_T VectorConcatenate_idx_1;
  real_T VectorConcatenate_idx_2;
} B_controller_c_T;

/* Block states (default storage) for model 'controller' */
typedef struct {
  uint8_T is_c3_controller;            /* '<Root>/Chart' */
} DW_controller_f_T;

/* Real-time Model Data Structure */
struct tag_RTM_controller_T {
  const char_T **errorStatus;
};

typedef struct {
  B_controller_c_T rtb;
  DW_controller_f_T rtdw;
  RT_MODEL_controller_T rtm;
} MdlrefDW_controller_T;

/* Model reference registration function */
extern void controller_initialize(const char_T **rt_errorStatus,
  RT_MODEL_controller_T *const controller_M);
extern void controller_Init(int8_T *rty_H_h2, int8_T *rty_H_h3,
  DW_controller_f_T *localDW);
extern void controller(const real_T *rtu_X_x1, const real_T *rtu_X_x2, const
  real_T *rtu_X_x3, const real_T *rtu_X_x4, const real_T rtu_C_get[4], const
  real_T rtu_C_diff[4], int8_T *rty_H_h1, int8_T *rty_H_h2, int8_T *rty_H_h3,
  int8_T *rty_H_h4, B_controller_c_T *localB, DW_controller_f_T *localDW);

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
 * '<Root>' : 'controller'
 * '<S1>'   : 'controller/Chart'
 */
#endif                                 /* RTW_HEADER_controller_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
