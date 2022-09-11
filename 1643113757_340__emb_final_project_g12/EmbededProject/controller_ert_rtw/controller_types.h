/*
 * File: controller_types.h
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

#ifndef RTW_HEADER_controller_types_h_
#define RTW_HEADER_controller_types_h_
#include "rtwtypes.h"

/* Model Code Variants */
#ifndef DEFINED_TYPEDEF_FOR_controller_in_
#define DEFINED_TYPEDEF_FOR_controller_in_

typedef struct {
  real_T u;
  real_T x1;
  real_T x2;
  real_T x3;
  real_T x4;
} controller_in;

#endif

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

#ifndef DEFINED_TYPEDEF_FOR_controller_out_
#define DEFINED_TYPEDEF_FOR_controller_out_

typedef struct {
  int8_T h1;
  int8_T h2;
  int8_T h3;
  int8_T h4;
} controller_out;

#endif

/* Forward declaration for rtModel */
typedef struct tag_RTM_controller_T RT_MODEL_controller_T;

#endif                                 /* RTW_HEADER_controller_types_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
