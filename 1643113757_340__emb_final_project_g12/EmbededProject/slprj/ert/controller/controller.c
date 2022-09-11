/*
 * File: controller.c
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

#include "controller.h"
#include "controller_private.h"

/* Named constants for Chart: '<Root>/Chart' */
#define controller_IN_h1h2             ((uint8_T)1U)
#define controller_IN_h1h3             ((uint8_T)2U)
#define controller_IN_h1h4             ((uint8_T)3U)
#define controller_IN_h2h3             ((uint8_T)4U)
#define controller_IN_h2h4             ((uint8_T)5U)
#define controller_IN_h3h4             ((uint8_T)6U)
#define controller_IN_init_state       ((uint8_T)7U)

/* System initialize for referenced model: 'controller' */
void controller_Init(int8_T *rty_H_h2, int8_T *rty_H_h3, DW_controller_f_T
                     *localDW)
{
  /* SystemInitialize for Chart: '<Root>/Chart' */
  *rty_H_h2 = 1;
  *rty_H_h3 = 1;

  /* Chart: '<Root>/Chart' */
  localDW->is_c3_controller = controller_IN_init_state;
}

/* Output and update for referenced model: 'controller' */
void controller(const real_T *rtu_X_x1, const real_T *rtu_X_x2, const real_T
                *rtu_X_x3, const real_T *rtu_X_x4, const real_T rtu_C_get[4],
                const real_T rtu_C_diff[4], int8_T *rty_H_h1, int8_T *rty_H_h2,
                int8_T *rty_H_h3, int8_T *rty_H_h4, B_controller_c_T *localB,
                DW_controller_f_T *localDW)
{
  real_T VectorConcatenate_idx_3;
  real_T tmp;
  real_T tmp_0;
  real_T tmp_1;
  real_T tmp_2;
  real_T tmp_3;
  real_T tmp_4;
  int8_T h1;
  int8_T h2;
  int8_T h3;
  int8_T h4;

  /* Chart: '<Root>/Chart' */
  switch (localDW->is_c3_controller) {
   case controller_IN_h1h2:
    *rty_H_h3 = 0;
    *rty_H_h4 = 0;
    *rty_H_h1 = 1;
    *rty_H_h2 = 1;
    break;

   case controller_IN_h1h3:
    *rty_H_h2 = 0;
    *rty_H_h4 = 0;
    *rty_H_h1 = 1;
    *rty_H_h3 = 1;
    break;

   case controller_IN_h1h4:
    *rty_H_h2 = 0;
    *rty_H_h3 = 0;
    *rty_H_h1 = 1;
    *rty_H_h4 = 1;
    break;

   case controller_IN_h2h3:
    *rty_H_h1 = 0;
    *rty_H_h4 = 0;
    *rty_H_h2 = 1;
    *rty_H_h3 = 1;
    break;

   case controller_IN_h2h4:
    *rty_H_h1 = 0;
    *rty_H_h3 = 0;
    *rty_H_h2 = 1;
    *rty_H_h4 = 1;
    break;

   case controller_IN_h3h4:
    *rty_H_h1 = 0;
    *rty_H_h2 = 0;
    *rty_H_h3 = 1;
    *rty_H_h4 = 1;
    break;

   default:
    /* case IN_init_state: */
    break;
  }

  /* End of Chart: '<Root>/Chart' */

  /* SignalConversion generated from: '<Root>/Vector Concatenate' */
  localB->VectorConcatenate_idx_0 = *rtu_X_x1;

  /* SignalConversion generated from: '<Root>/Vector Concatenate' */
  localB->VectorConcatenate_idx_1 = *rtu_X_x2;

  /* SignalConversion generated from: '<Root>/Vector Concatenate' */
  localB->VectorConcatenate_idx_2 = *rtu_X_x3;

  /* SignalConversion generated from: '<Root>/Vector Concatenate' */
  VectorConcatenate_idx_3 = *rtu_X_x4;

  /* Update for Chart: '<Root>/Chart' */
  h4 = *rty_H_h4;
  h3 = *rty_H_h3;
  h2 = *rty_H_h2;
  h1 = *rty_H_h1;
  switch (localDW->is_c3_controller) {
   case controller_IN_h1h2:
    h3 = 0;
    h4 = 0;
    h1 = 1;
    h2 = 1;
    break;

   case controller_IN_h1h3:
    h2 = 0;
    h4 = 0;
    h1 = 1;
    h3 = 1;
    break;

   case controller_IN_h1h4:
    h2 = 0;
    h3 = 0;
    h1 = 1;
    h4 = 1;
    break;

   case controller_IN_h2h3:
    h1 = 0;
    h4 = 0;
    h2 = 1;
    h3 = 1;
    break;

   case controller_IN_h2h4:
    h1 = 0;
    h3 = 0;
    h2 = 1;
    h4 = 1;
    break;

   case controller_IN_h3h4:
    h1 = 0;
    h2 = 0;
    h3 = 1;
    h4 = 1;
    break;

   default:
    /* case IN_init_state: */
    break;
  }

  switch (localDW->is_c3_controller) {
   case controller_IN_h1h2:
    tmp = localB->VectorConcatenate_idx_0 - localB->VectorConcatenate_idx_2;
    tmp_0 = localB->VectorConcatenate_idx_1 - localB->VectorConcatenate_idx_2;
    tmp_4 = localB->VectorConcatenate_idx_1 - localB->VectorConcatenate_idx_0;
    if (((localB->VectorConcatenate_idx_2 <= rtu_C_get[2]) && (tmp_0 >=
          rtu_C_diff[2])) || ((localB->VectorConcatenate_idx_0 <= rtu_C_get[0]) &&
         (tmp_4 >= rtu_C_diff[0]) && ((localB->VectorConcatenate_idx_2 <=
           rtu_C_get[2]) && (tmp >= rtu_C_diff[2])))) {
      localDW->is_c3_controller = controller_IN_h1h3;
    } else {
      tmp_1 = localB->VectorConcatenate_idx_0 - VectorConcatenate_idx_3;
      tmp_2 = localB->VectorConcatenate_idx_1 - VectorConcatenate_idx_3;
      if (((localB->VectorConcatenate_idx_2 <= rtu_C_get[2]) && (tmp >=
            rtu_C_diff[2]) && ((VectorConcatenate_idx_3 <= rtu_C_get[3]) &&
            (tmp_2 >= rtu_C_diff[3]))) || ((VectorConcatenate_idx_3 <=
            rtu_C_get[3]) && (tmp_1 >= rtu_C_diff[3]) &&
           ((localB->VectorConcatenate_idx_2 <= rtu_C_get[2]) && (tmp_0 >=
             rtu_C_diff[2])))) {
        localDW->is_c3_controller = controller_IN_h3h4;
      } else {
        tmp_3 = localB->VectorConcatenate_idx_0 -
          localB->VectorConcatenate_idx_1;
        if (((VectorConcatenate_idx_3 <= rtu_C_get[3]) && (tmp_1 >= rtu_C_diff[3]))
            || ((localB->VectorConcatenate_idx_1 <= rtu_C_get[1]) && (tmp_3 >=
              rtu_C_diff[1]) && ((VectorConcatenate_idx_3 <= rtu_C_get[3]) &&
              (tmp_2 >= rtu_C_diff[3])))) {
          localDW->is_c3_controller = controller_IN_h2h4;
        } else if (((localB->VectorConcatenate_idx_2 <= rtu_C_get[2]) && (tmp >=
          rtu_C_diff[2])) || ((localB->VectorConcatenate_idx_1 <= rtu_C_get[1]) &&
                              (tmp_3 >= rtu_C_diff[1]) &&
                              ((localB->VectorConcatenate_idx_2 <= rtu_C_get[2])
          && (tmp_0 >= rtu_C_diff[2])))) {
          localDW->is_c3_controller = controller_IN_h2h3;
        } else if (((VectorConcatenate_idx_3 <= rtu_C_get[3]) && (tmp_2 >=
                     rtu_C_diff[3])) || ((localB->VectorConcatenate_idx_0 <=
                     rtu_C_get[0]) && (tmp_4 >= rtu_C_diff[0]) &&
                    ((VectorConcatenate_idx_3 <= rtu_C_get[3]) && (tmp_1 >=
                      rtu_C_diff[3])))) {
          localDW->is_c3_controller = controller_IN_h1h4;
        }
      }
    }
    break;

   case controller_IN_h1h3:
    tmp = localB->VectorConcatenate_idx_2 - localB->VectorConcatenate_idx_0;
    tmp_0 = localB->VectorConcatenate_idx_0 - localB->VectorConcatenate_idx_1;
    tmp_4 = localB->VectorConcatenate_idx_2 - localB->VectorConcatenate_idx_1;
    if (((localB->VectorConcatenate_idx_1 <= rtu_C_get[1]) && (tmp_4 >=
          rtu_C_diff[1])) || ((localB->VectorConcatenate_idx_1 <= rtu_C_get[1]) &&
         (tmp_0 >= rtu_C_diff[1]) && ((localB->VectorConcatenate_idx_0 <=
           rtu_C_get[0]) && (tmp >= rtu_C_diff[0])))) {
      localDW->is_c3_controller = controller_IN_h1h2;
    } else {
      tmp_1 = localB->VectorConcatenate_idx_2 - VectorConcatenate_idx_3;
      tmp_2 = localB->VectorConcatenate_idx_0 - VectorConcatenate_idx_3;
      if (((VectorConcatenate_idx_3 <= rtu_C_get[3]) && (tmp_1 >= rtu_C_diff[3]))
          || ((VectorConcatenate_idx_3 <= rtu_C_get[3]) && (tmp_2 >= rtu_C_diff
            [3]) && ((localB->VectorConcatenate_idx_0 <= rtu_C_get[0]) && (tmp >=
             rtu_C_diff[0])))) {
        localDW->is_c3_controller = controller_IN_h1h4;
      } else {
        tmp = localB->VectorConcatenate_idx_0 - localB->VectorConcatenate_idx_2;
        if (((localB->VectorConcatenate_idx_1 <= rtu_C_get[1]) && (tmp_0 >=
              rtu_C_diff[1])) || ((localB->VectorConcatenate_idx_2 <= rtu_C_get
              [2]) && (tmp >= rtu_C_diff[2]) &&
             ((localB->VectorConcatenate_idx_1 <= rtu_C_get[1]) && (tmp_4 >=
               rtu_C_diff[1])))) {
          localDW->is_c3_controller = controller_IN_h2h3;
        } else if (((localB->VectorConcatenate_idx_1 <= rtu_C_get[1]) && (tmp_0 >=
          rtu_C_diff[1]) && ((VectorConcatenate_idx_3 <= rtu_C_get[3]) && (tmp_1
          >= rtu_C_diff[3]))) || ((VectorConcatenate_idx_3 <= rtu_C_get[3]) &&
                    (tmp_2 >= rtu_C_diff[3]) &&
                    ((localB->VectorConcatenate_idx_1 <= rtu_C_get[1]) && (tmp_4
          >= rtu_C_diff[1])))) {
          localDW->is_c3_controller = controller_IN_h2h4;
        } else if (((VectorConcatenate_idx_3 <= rtu_C_get[3]) && (tmp_2 >=
                     rtu_C_diff[3])) || ((VectorConcatenate_idx_3 <= rtu_C_get[3])
                    && (tmp_1 >= rtu_C_diff[3]) &&
                    ((localB->VectorConcatenate_idx_2 <= rtu_C_get[2]) && (tmp >=
          rtu_C_diff[2])))) {
          localDW->is_c3_controller = controller_IN_h3h4;
        }
      }
    }
    break;

   case controller_IN_h1h4:
    tmp = VectorConcatenate_idx_3 - localB->VectorConcatenate_idx_2;
    tmp_0 = localB->VectorConcatenate_idx_0 - localB->VectorConcatenate_idx_2;
    tmp_4 = VectorConcatenate_idx_3 - localB->VectorConcatenate_idx_0;
    if (((localB->VectorConcatenate_idx_2 <= rtu_C_get[2]) && (tmp >=
          rtu_C_diff[2])) || ((localB->VectorConcatenate_idx_0 <= rtu_C_get[0]) &&
         (tmp_4 >= rtu_C_diff[0]) && ((localB->VectorConcatenate_idx_2 <=
           rtu_C_get[2]) && (tmp_0 >= rtu_C_diff[2])))) {
      localDW->is_c3_controller = controller_IN_h1h3;
    } else {
      tmp_1 = VectorConcatenate_idx_3 - localB->VectorConcatenate_idx_1;
      tmp_2 = localB->VectorConcatenate_idx_0 - localB->VectorConcatenate_idx_1;
      if (((localB->VectorConcatenate_idx_1 <= rtu_C_get[1]) && (tmp_2 >=
            rtu_C_diff[1]) && ((localB->VectorConcatenate_idx_2 <= rtu_C_get[2])
            && (tmp >= rtu_C_diff[2]))) || ((localB->VectorConcatenate_idx_1 <=
            rtu_C_get[1]) && (tmp_1 >= rtu_C_diff[1]) &&
           ((localB->VectorConcatenate_idx_2 <= rtu_C_get[2]) && (tmp_0 >=
             rtu_C_diff[2])))) {
        localDW->is_c3_controller = controller_IN_h2h3;
      } else {
        tmp_3 = localB->VectorConcatenate_idx_0 - VectorConcatenate_idx_3;
        if (((localB->VectorConcatenate_idx_2 <= rtu_C_get[2]) && (tmp_0 >=
              rtu_C_diff[2])) || ((VectorConcatenate_idx_3 <= rtu_C_get[3]) &&
             (tmp_3 >= rtu_C_diff[3]) && ((localB->VectorConcatenate_idx_2 <=
               rtu_C_get[2]) && (tmp >= rtu_C_diff[2])))) {
          localDW->is_c3_controller = controller_IN_h3h4;
        } else if (((localB->VectorConcatenate_idx_1 <= rtu_C_get[1]) && (tmp_1 >=
          rtu_C_diff[1])) || ((localB->VectorConcatenate_idx_1 <= rtu_C_get[1]) &&
                              (tmp_2 >= rtu_C_diff[1]) &&
                              ((localB->VectorConcatenate_idx_0 <= rtu_C_get[0])
          && (tmp_4 >= rtu_C_diff[0])))) {
          localDW->is_c3_controller = controller_IN_h1h2;
        } else if (((localB->VectorConcatenate_idx_1 <= rtu_C_get[1]) && (tmp_2 >=
          rtu_C_diff[1])) || ((VectorConcatenate_idx_3 <= rtu_C_get[3]) &&
                              (tmp_3 >= rtu_C_diff[3]) &&
                              ((localB->VectorConcatenate_idx_1 <= rtu_C_get[1])
          && (tmp_1 >= rtu_C_diff[1])))) {
          localDW->is_c3_controller = controller_IN_h2h4;
        }
      }
    }
    break;

   case controller_IN_h2h3:
    tmp = localB->VectorConcatenate_idx_2 - VectorConcatenate_idx_3;
    tmp_0 = localB->VectorConcatenate_idx_1 - VectorConcatenate_idx_3;
    tmp_4 = localB->VectorConcatenate_idx_1 - localB->VectorConcatenate_idx_0;
    tmp_1 = localB->VectorConcatenate_idx_2 - localB->VectorConcatenate_idx_0;
    if (((localB->VectorConcatenate_idx_0 <= rtu_C_get[0]) && (tmp_4 >=
          rtu_C_diff[0]) && ((VectorConcatenate_idx_3 <= rtu_C_get[3]) && (tmp >=
           rtu_C_diff[3]))) || ((VectorConcatenate_idx_3 <= rtu_C_get[3]) &&
         (tmp_0 >= rtu_C_diff[3]) && ((localB->VectorConcatenate_idx_0 <=
           rtu_C_get[0]) && (tmp_1 >= rtu_C_diff[0])))) {
      localDW->is_c3_controller = controller_IN_h1h4;
    } else {
      tmp_2 = localB->VectorConcatenate_idx_2 - localB->VectorConcatenate_idx_1;
      if (((VectorConcatenate_idx_3 <= rtu_C_get[3]) && (tmp >= rtu_C_diff[3])) ||
          ((VectorConcatenate_idx_3 <= rtu_C_get[3]) && (tmp_0 >= rtu_C_diff[3])
           && ((localB->VectorConcatenate_idx_1 <= rtu_C_get[1]) && (tmp_2 >=
             rtu_C_diff[1])))) {
        localDW->is_c3_controller = controller_IN_h2h4;
      } else {
        tmp_3 = localB->VectorConcatenate_idx_1 -
          localB->VectorConcatenate_idx_2;
        if (((localB->VectorConcatenate_idx_0 <= rtu_C_get[0]) && (tmp_4 >=
              rtu_C_diff[0])) || ((localB->VectorConcatenate_idx_0 <= rtu_C_get
              [0]) && (tmp_1 >= rtu_C_diff[0]) &&
             ((localB->VectorConcatenate_idx_2 <= rtu_C_get[2]) && (tmp_3 >=
               rtu_C_diff[2])))) {
          localDW->is_c3_controller = controller_IN_h1h3;
        } else if (((localB->VectorConcatenate_idx_0 <= rtu_C_get[0]) && (tmp_1 >=
          rtu_C_diff[0])) || ((localB->VectorConcatenate_idx_0 <= rtu_C_get[0]) &&
                              (tmp_4 >= rtu_C_diff[0]) &&
                              ((localB->VectorConcatenate_idx_1 <= rtu_C_get[1])
          && (tmp_2 >= rtu_C_diff[1])))) {
          localDW->is_c3_controller = controller_IN_h1h2;
        } else if (((VectorConcatenate_idx_3 <= rtu_C_get[3]) && (tmp_0 >=
                     rtu_C_diff[3])) || ((localB->VectorConcatenate_idx_2 <=
                     rtu_C_get[2]) && (tmp_3 >= rtu_C_diff[2]) &&
                    ((VectorConcatenate_idx_3 <= rtu_C_get[3]) && (tmp >=
                      rtu_C_diff[3])))) {
          localDW->is_c3_controller = controller_IN_h3h4;
        }
      }
    }
    break;

   case controller_IN_h2h4:
    tmp = localB->VectorConcatenate_idx_1 - localB->VectorConcatenate_idx_2;
    tmp_0 = VectorConcatenate_idx_3 - localB->VectorConcatenate_idx_2;
    tmp_4 = VectorConcatenate_idx_3 - localB->VectorConcatenate_idx_1;
    if (((localB->VectorConcatenate_idx_2 <= rtu_C_get[2]) && (tmp_0 >=
          rtu_C_diff[2])) || ((localB->VectorConcatenate_idx_1 <= rtu_C_get[1]) &&
         (tmp_4 >= rtu_C_diff[1]) && ((localB->VectorConcatenate_idx_2 <=
           rtu_C_get[2]) && (tmp >= rtu_C_diff[2])))) {
      localDW->is_c3_controller = controller_IN_h2h3;
    } else {
      tmp_1 = localB->VectorConcatenate_idx_1 - VectorConcatenate_idx_3;
      if (((localB->VectorConcatenate_idx_2 <= rtu_C_get[2]) && (tmp >=
            rtu_C_diff[2])) || ((VectorConcatenate_idx_3 <= rtu_C_get[3]) &&
           (tmp_1 >= rtu_C_diff[3]) && ((localB->VectorConcatenate_idx_2 <=
             rtu_C_get[2]) && (tmp_0 >= rtu_C_diff[2])))) {
        localDW->is_c3_controller = controller_IN_h3h4;
      } else {
        tmp_2 = localB->VectorConcatenate_idx_1 -
          localB->VectorConcatenate_idx_0;
        tmp_3 = VectorConcatenate_idx_3 - localB->VectorConcatenate_idx_0;
        if (((localB->VectorConcatenate_idx_0 <= rtu_C_get[0]) && (tmp_3 >=
              rtu_C_diff[0])) || ((localB->VectorConcatenate_idx_0 <= rtu_C_get
              [0]) && (tmp_2 >= rtu_C_diff[0]) &&
             ((localB->VectorConcatenate_idx_1 <= rtu_C_get[1]) && (tmp_4 >=
               rtu_C_diff[1])))) {
          localDW->is_c3_controller = controller_IN_h1h2;
        } else if (((localB->VectorConcatenate_idx_0 <= rtu_C_get[0]) && (tmp_2 >=
          rtu_C_diff[0]) && ((localB->VectorConcatenate_idx_2 <= rtu_C_get[2]) &&
                             (tmp_0 >= rtu_C_diff[2]))) ||
                   ((localB->VectorConcatenate_idx_0 <= rtu_C_get[0]) && (tmp_3 >=
          rtu_C_diff[0]) && ((localB->VectorConcatenate_idx_2 <= rtu_C_get[2]) &&
                             (tmp >= rtu_C_diff[2])))) {
          localDW->is_c3_controller = controller_IN_h1h3;
        } else if (((localB->VectorConcatenate_idx_0 <= rtu_C_get[0]) && (tmp_2 >=
          rtu_C_diff[0])) || ((localB->VectorConcatenate_idx_0 <= rtu_C_get[0]) &&
                              (tmp_3 >= rtu_C_diff[0]) &&
                              ((VectorConcatenate_idx_3 <= rtu_C_get[3]) &&
                               (tmp_1 >= rtu_C_diff[3])))) {
          localDW->is_c3_controller = controller_IN_h1h4;
        }
      }
    }
    break;

   case controller_IN_h3h4:
    tmp = VectorConcatenate_idx_3 - localB->VectorConcatenate_idx_1;
    tmp_0 = localB->VectorConcatenate_idx_2 - localB->VectorConcatenate_idx_1;
    tmp_4 = localB->VectorConcatenate_idx_2 - VectorConcatenate_idx_3;
    if (((localB->VectorConcatenate_idx_1 <= rtu_C_get[1]) && (tmp_0 >=
          rtu_C_diff[1])) || ((localB->VectorConcatenate_idx_1 <= rtu_C_get[1]) &&
         (tmp >= rtu_C_diff[1]) && ((VectorConcatenate_idx_3 <= rtu_C_get[3]) &&
          (tmp_4 >= rtu_C_diff[3])))) {
      localDW->is_c3_controller = controller_IN_h2h4;
    } else {
      tmp_1 = localB->VectorConcatenate_idx_2 - localB->VectorConcatenate_idx_0;
      tmp_2 = VectorConcatenate_idx_3 - localB->VectorConcatenate_idx_0;
      if (((localB->VectorConcatenate_idx_0 <= rtu_C_get[0]) && (tmp_1 >=
            rtu_C_diff[0]) && ((localB->VectorConcatenate_idx_1 <= rtu_C_get[1])
            && (tmp >= rtu_C_diff[1]))) || ((localB->VectorConcatenate_idx_0 <=
            rtu_C_get[0]) && (tmp_2 >= rtu_C_diff[0]) &&
           ((localB->VectorConcatenate_idx_1 <= rtu_C_get[1]) && (tmp_0 >=
             rtu_C_diff[1])))) {
        localDW->is_c3_controller = controller_IN_h1h2;
      } else if (((localB->VectorConcatenate_idx_0 <= rtu_C_get[0]) && (tmp_1 >=
        rtu_C_diff[0])) || ((localB->VectorConcatenate_idx_0 <= rtu_C_get[0]) &&
                            (tmp_2 >= rtu_C_diff[0]) &&
                            ((VectorConcatenate_idx_3 <= rtu_C_get[3]) && (tmp_4
        >= rtu_C_diff[3])))) {
        localDW->is_c3_controller = controller_IN_h1h4;
      } else {
        tmp_4 = VectorConcatenate_idx_3 - localB->VectorConcatenate_idx_2;
        if (((localB->VectorConcatenate_idx_0 <= rtu_C_get[0]) && (tmp_2 >=
              rtu_C_diff[0])) || ((localB->VectorConcatenate_idx_2 <= rtu_C_get
              [2]) && (tmp_4 >= rtu_C_diff[2]) &&
             ((localB->VectorConcatenate_idx_0 <= rtu_C_get[0]) && (tmp_1 >=
               rtu_C_diff[0])))) {
          localDW->is_c3_controller = controller_IN_h1h3;
        } else if (((localB->VectorConcatenate_idx_1 <= rtu_C_get[1]) && (tmp >=
          rtu_C_diff[1])) || ((localB->VectorConcatenate_idx_1 <= rtu_C_get[1]) &&
                              (tmp_0 >= rtu_C_diff[1]) &&
                              ((localB->VectorConcatenate_idx_2 <= rtu_C_get[2])
          && (tmp_4 >= rtu_C_diff[2])))) {
          localDW->is_c3_controller = controller_IN_h2h3;
        }
      }
    }
    break;

   default:
    /* case IN_init_state: */
    if ((h1 == 1) && (h2 == 1)) {
      localDW->is_c3_controller = controller_IN_h1h2;
    } else if ((h1 == 1) && (h3 == 1)) {
      localDW->is_c3_controller = controller_IN_h1h3;
    } else if ((h1 == 1) && (h4 == 1)) {
      localDW->is_c3_controller = controller_IN_h1h4;
    } else if ((h3 == 1) && (h4 == 1)) {
      localDW->is_c3_controller = controller_IN_h3h4;
    } else if ((h2 == 1) && (h3 == 1)) {
      localDW->is_c3_controller = controller_IN_h2h3;
    } else if ((h2 == 1) && (h4 == 1)) {
      localDW->is_c3_controller = controller_IN_h2h4;
    }
    break;
  }

  /* End of Update for Chart: '<Root>/Chart' */
}

/* Model initialize function */
void controller_initialize(const char_T **rt_errorStatus, RT_MODEL_controller_T *
  const controller_M)
{
  /* Registration code */

  /* initialize error status */
  rtmSetErrorStatusPointer(controller_M, rt_errorStatus);
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
