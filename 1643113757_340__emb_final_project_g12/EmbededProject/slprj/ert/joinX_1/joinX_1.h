/*
 * File: joinX_1.h
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

#ifndef RTW_HEADER_joinX_1_h_
#define RTW_HEADER_joinX_1_h_
#ifndef joinX_1_COMMON_INCLUDES_
#define joinX_1_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "rtw_continuous.h"
#include "rtw_solver.h"
#endif                                 /* joinX_1_COMMON_INCLUDES_ */

#include "joinX_1_types.h"
#include "MW_target_hardware_resources.h"

/* Real-time Model Data Structure */
struct tag_RTM_joinX_1_T {
  const char_T **errorStatus;
};

typedef struct {
  RT_MODEL_joinX_1_T rtm;
} MdlrefDW_joinX_1_T;

/* Model reference registration function */
extern void joinX_1_initialize(const char_T **rt_errorStatus, RT_MODEL_joinX_1_T
  *const joinX_1_M);
extern void joinX_1(const real_T *rtu_u, const real_T *rtu_x1, const real_T
                    *rtu_x2, const real_T *rtu_x3, const real_T *rtu_x4, real_T *
                    rty_X_u, real_T *rty_X_x1, real_T *rty_X_x2, real_T
                    *rty_X_x3, real_T *rty_X_x4);

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
 * '<Root>' : 'joinX_1'
 */
#endif                                 /* RTW_HEADER_joinX_1_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
