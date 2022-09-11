/*
 * File: ConstantMem_4_types.h
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

#ifndef RTW_HEADER_ConstantMem_4_types_h_
#define RTW_HEADER_ConstantMem_4_types_h_
#include "rtwtypes.h"

/* Model Code Variants */
#ifndef DEFINED_TYPEDEF_FOR_C_
#define DEFINED_TYPEDEF_FOR_C_

typedef struct {
  real_T A[16];
  real_T b[4];
  real_T c[4];
  real_T x0[4];
  real_T off[4];
  real_T on[4];
  real_T get[4];
  real_T diff[4];
} C;

#endif

/* Parameters (default storage) */
typedef struct P_ConstantMem_4_T_ P_ConstantMem_4_T;

/* Forward declaration for rtModel */
typedef struct tag_RTM_ConstantMem_4_T RT_MODEL_ConstantMem_4_T;

#endif                                 /* RTW_HEADER_ConstantMem_4_types_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
