/*
 * File: monitor.h
 *
 * Code generated for Simulink model 'monitor'.
 *
 * Model version                  : 1.10
 * Simulink Coder version         : 9.5 (R2021a) 14-Nov-2020
 * C/C++ source code generated on : Mon Jan 24 05:55:10 2022
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Atmel->AVR
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_monitor_h_
#define RTW_HEADER_monitor_h_
#ifndef monitor_COMMON_INCLUDES_
#define monitor_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "rtw_continuous.h"
#include "rtw_solver.h"
#endif                                 /* monitor_COMMON_INCLUDES_ */

#include "monitor_types.h"
#include "MW_target_hardware_resources.h"

/* Real-time Model Data Structure */
struct tag_RTM_monitor_T {
  const char_T **errorStatus;
};

typedef struct {
  RT_MODEL_monitor_T rtm;
} MdlrefDW_monitor_T;

/* Model reference registration function */
extern void monitor_initialize(const char_T **rt_errorStatus, RT_MODEL_monitor_T
  *const monitor_M);

/*-
 * These blocks were eliminated from the model due to optimizations:
 *
 * Block '<Root>/Scope' : Unused code path elimination
 */

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
 * '<Root>' : 'monitor'
 */
#endif                                 /* RTW_HEADER_monitor_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
