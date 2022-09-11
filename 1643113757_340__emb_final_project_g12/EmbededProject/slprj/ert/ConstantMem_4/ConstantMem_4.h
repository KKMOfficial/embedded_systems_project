/*
 * File: ConstantMem_4.h
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

#ifndef RTW_HEADER_ConstantMem_4_h_
#define RTW_HEADER_ConstantMem_4_h_
#include <string.h>
#ifndef ConstantMem_4_COMMON_INCLUDES_
#define ConstantMem_4_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "rtw_continuous.h"
#include "rtw_solver.h"
#endif                                 /* ConstantMem_4_COMMON_INCLUDES_ */

#include "ConstantMem_4_types.h"
#include "MW_target_hardware_resources.h"

/* Parameters (default storage) */
struct P_ConstantMem_4_T_ {
  real_T Constant_Value[16];
  /* Expression: [0.0,0.3,0.4,0.3;0.3,0.0,0.5,0.0;0.4,0.5,0.0,0.3;0.3,0.0,0.3,0.0]
   * Referenced by: '<Root>/Constant'
   */
  real_T Constant1_Value[4];           /* Expression: [0.3;0.2;0.5;0.4]
                                        * Referenced by: '<Root>/Constant1'
                                        */
  real_T Constant2_Value[4];           /* Expression: [9;7;11;7]
                                        * Referenced by: '<Root>/Constant2'
                                        */
  real_T Constant3_Value[4];           /* Expression: [20;20;20;20]
                                        * Referenced by: '<Root>/Constant3'
                                        */
  real_T Constant4_Value[4];           /* Expression: [19;19;19;19]
                                        * Referenced by: '<Root>/Constant4'
                                        */
  real_T Constant5_Value[4];           /* Expression: [17;16;16;17]
                                        * Referenced by: '<Root>/Constant5'
                                        */
  real_T Constant6_Value[4];           /* Expression: [1;1;1;1]
                                        * Referenced by: '<Root>/Constant6'
                                        */
  real_T Constant7_Value[4];           /* Expression: [16.5;16.5;16.5;16.5]
                                        * Referenced by: '<Root>/Constant7'
                                        */
};

/* Real-time Model Data Structure */
struct tag_RTM_ConstantMem_4_T {
  const char_T **errorStatus;
};

typedef struct {
  RT_MODEL_ConstantMem_4_T rtm;
} MdlrefDW_ConstantMem_4_T;

/* Model reference registration function */
extern void ConstantMem_4_initialize(const char_T **rt_errorStatus,
  RT_MODEL_ConstantMem_4_T *const ConstantMem_4_M);
extern void ConstantMem_4_Init(real_T rty_C_A[16], real_T rty_C_b[4], real_T
  rty_C_c[4], real_T rty_C_x0[4], real_T rty_C_off[4], real_T rty_C_on[4],
  real_T rty_C_get[4], real_T rty_C_diff[4]);
extern void ConstantMem_4(real_T rty_C_A[16], real_T rty_C_b[4], real_T rty_C_c
  [4], real_T rty_C_x0[4], real_T rty_C_off[4], real_T rty_C_on[4], real_T
  rty_C_get[4], real_T rty_C_diff[4]);

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
 * '<Root>' : 'ConstantMem_4'
 */
#endif                                 /* RTW_HEADER_ConstantMem_4_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
