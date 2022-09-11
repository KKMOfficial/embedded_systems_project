/*
 * File: controller.h
 *
 * Code generated for Simulink model 'controller'.
 *
 * Model version                  : 1.114
 * Simulink Coder version         : 9.5 (R2021a) 14-Nov-2020
 * C/C++ source code generated on : Mon Jan 24 14:02:39 2022
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Atmel->AVR
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_controller_h_
#define RTW_HEADER_controller_h_
#include <stddef.h>
#ifndef controller_COMMON_INCLUDES_
#define controller_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "rtw_continuous.h"
#include "rtw_solver.h"
#endif                                 /* controller_COMMON_INCLUDES_ */

#include "controller_types.h"
#include "MW_target_hardware_resources.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
#define rtmGetErrorStatus(rtm)         ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
#define rtmSetErrorStatus(rtm, val)    ((rtm)->errorStatus = (val))
#endif

/* Block states (default storage) for system '<Root>' */
typedef struct {
  uint8_T is_c3_controller;            /* '<Root>/Chart' */
} DW_controller_T;

/* External inputs (root inport signals with default storage) */
typedef struct {
  real_T X_u;                          /* '<Root>/B_-1_-1' */
  real_T X_x1;                         /* '<Root>/B_-1_-1' */
  real_T X_x2;                         /* '<Root>/B_-1_-1' */
  real_T X_x3;                         /* '<Root>/B_-1_-1' */
  real_T X_x4;                         /* '<Root>/B_-1_-1' */
  real_T C_A[16];                      /* '<Root>/B_-1_-1' */
  real_T C_b[4];                       /* '<Root>/B_-1_-1' */
  real_T C_c[4];                       /* '<Root>/B_-1_-1' */
  real_T C_x0[4];                      /* '<Root>/B_-1_-1' */
  real_T C_off[4];                     /* '<Root>/B_-1_-1' */
  real_T C_on[4];                      /* '<Root>/B_-1_-1' */
  real_T C_get[4];                     /* '<Root>/B_-1_-1' */
  real_T C_diff[4];                    /* '<Root>/B_-1_-1' */
} ExtU_controller_T;

/* External outputs (root outports fed by signals with default storage) */
typedef struct {
  int8_T H_h1;                         /* '<Root>/H_h1' */
  int8_T H_h2;                         /* '<Root>/H_h2' */
  int8_T H_h3;                         /* '<Root>/H_h3' */
  int8_T H_h4;                         /* '<Root>/H_h4' */
} ExtY_controller_T;

/* Real-time Model Data Structure */
struct tag_RTM_controller_T {
  const char_T *errorStatus;
};

/* Block states (default storage) */
extern DW_controller_T controller_DW;

/* External inputs (root inport signals with default storage) */
extern ExtU_controller_T controller_U;

/* External outputs (root outports fed by signals with default storage) */
extern ExtY_controller_T controller_Y;

/* Model entry point functions */
extern void controller_initialize(void);
extern void controller_step(void);
extern void controller_terminate(void);

/* Real-time Model object */
extern RT_MODEL_controller_T *const controller_M;
extern volatile boolean_T stopRequested;
extern volatile boolean_T runModel;

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
