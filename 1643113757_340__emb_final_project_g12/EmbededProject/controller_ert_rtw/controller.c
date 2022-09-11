/*
 * File: controller.c
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

/* Block states (default storage) */
DW_controller_T controller_DW;

/* External inputs (root inport signals with default storage) */
ExtU_controller_T controller_U;

/* External outputs (root outports fed by signals with default storage) */
ExtY_controller_T controller_Y;

/* Real-time model */
static RT_MODEL_controller_T controller_M_;
RT_MODEL_controller_T *const controller_M = &controller_M_;

/* Model step function */
void controller_step(void)
{
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
  switch (controller_DW.is_c3_controller) {
   case controller_IN_h1h2:
    /* Outport: '<Root>/H_h3' */
    controller_Y.H_h3 = 0;

    /* Outport: '<Root>/H_h4' */
    controller_Y.H_h4 = 0;

    /* Outport: '<Root>/H_h1' */
    controller_Y.H_h1 = 1;

    /* Outport: '<Root>/H_h2' */
    controller_Y.H_h2 = 1;
    break;

   case controller_IN_h1h3:
    /* Outport: '<Root>/H_h2' */
    controller_Y.H_h2 = 0;

    /* Outport: '<Root>/H_h4' */
    controller_Y.H_h4 = 0;

    /* Outport: '<Root>/H_h1' */
    controller_Y.H_h1 = 1;

    /* Outport: '<Root>/H_h3' */
    controller_Y.H_h3 = 1;
    break;

   case controller_IN_h1h4:
    /* Outport: '<Root>/H_h2' */
    controller_Y.H_h2 = 0;

    /* Outport: '<Root>/H_h3' */
    controller_Y.H_h3 = 0;

    /* Outport: '<Root>/H_h1' */
    controller_Y.H_h1 = 1;

    /* Outport: '<Root>/H_h4' */
    controller_Y.H_h4 = 1;
    break;

   case controller_IN_h2h3:
    /* Outport: '<Root>/H_h1' */
    controller_Y.H_h1 = 0;

    /* Outport: '<Root>/H_h4' */
    controller_Y.H_h4 = 0;

    /* Outport: '<Root>/H_h2' */
    controller_Y.H_h2 = 1;

    /* Outport: '<Root>/H_h3' */
    controller_Y.H_h3 = 1;
    break;

   case controller_IN_h2h4:
    /* Outport: '<Root>/H_h1' */
    controller_Y.H_h1 = 0;

    /* Outport: '<Root>/H_h3' */
    controller_Y.H_h3 = 0;

    /* Outport: '<Root>/H_h2' */
    controller_Y.H_h2 = 1;

    /* Outport: '<Root>/H_h4' */
    controller_Y.H_h4 = 1;
    break;

   case controller_IN_h3h4:
    /* Outport: '<Root>/H_h1' */
    controller_Y.H_h1 = 0;

    /* Outport: '<Root>/H_h2' */
    controller_Y.H_h2 = 0;

    /* Outport: '<Root>/H_h3' */
    controller_Y.H_h3 = 1;

    /* Outport: '<Root>/H_h4' */
    controller_Y.H_h4 = 1;
    break;

   default:
    /* case IN_init_state: */
    break;
  }

  /* End of Chart: '<Root>/Chart' */

  /* Update for Chart: '<Root>/Chart' incorporates:
   *  Inport: '<Root>/C_diff'
   *  Inport: '<Root>/C_get'
   *  Inport: '<Root>/X_x1'
   *  Inport: '<Root>/X_x2'
   *  Inport: '<Root>/X_x3'
   *  Inport: '<Root>/X_x4'
   *  Outport: '<Root>/H_h1'
   *  Outport: '<Root>/H_h2'
   *  Outport: '<Root>/H_h3'
   *  Outport: '<Root>/H_h4'
   */
  h4 = controller_Y.H_h4;
  h3 = controller_Y.H_h3;
  h2 = controller_Y.H_h2;
  h1 = controller_Y.H_h1;
  switch (controller_DW.is_c3_controller) {
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

  switch (controller_DW.is_c3_controller) {
   case controller_IN_h1h2:
    tmp = controller_U.X_x1 - controller_U.X_x3;
    tmp_0 = controller_U.X_x2 - controller_U.X_x3;
    tmp_4 = controller_U.X_x2 - controller_U.X_x1;
    if (((controller_U.X_x3 <= controller_U.C_get[2]) && (tmp_0 >=
          controller_U.C_diff[2])) || ((controller_U.X_x1 <= controller_U.C_get
          [0]) && (tmp_4 >= controller_U.C_diff[0]) && ((controller_U.X_x3 <=
           controller_U.C_get[2]) && (tmp >= controller_U.C_diff[2])))) {
      controller_DW.is_c3_controller = controller_IN_h1h3;
    } else {
      tmp_1 = controller_U.X_x1 - controller_U.X_x4;
      tmp_2 = controller_U.X_x2 - controller_U.X_x4;
      if (((controller_U.X_x3 <= controller_U.C_get[2]) && (tmp >=
            controller_U.C_diff[2]) && ((controller_U.X_x4 <=
             controller_U.C_get[3]) && (tmp_2 >= controller_U.C_diff[3]))) ||
          ((controller_U.X_x4 <= controller_U.C_get[3]) && (tmp_1 >=
            controller_U.C_diff[3]) && ((controller_U.X_x3 <=
             controller_U.C_get[2]) && (tmp_0 >= controller_U.C_diff[2])))) {
        controller_DW.is_c3_controller = controller_IN_h3h4;
      } else {
        tmp_3 = controller_U.X_x1 - controller_U.X_x2;
        if (((controller_U.X_x4 <= controller_U.C_get[3]) && (tmp_1 >=
              controller_U.C_diff[3])) || ((controller_U.X_x2 <=
              controller_U.C_get[1]) && (tmp_3 >= controller_U.C_diff[1]) &&
             ((controller_U.X_x4 <= controller_U.C_get[3]) && (tmp_2 >=
               controller_U.C_diff[3])))) {
          controller_DW.is_c3_controller = controller_IN_h2h4;
        } else if (((controller_U.X_x3 <= controller_U.C_get[2]) && (tmp >=
                     controller_U.C_diff[2])) || ((controller_U.X_x2 <=
                     controller_U.C_get[1]) && (tmp_3 >= controller_U.C_diff[1])
                    && ((controller_U.X_x3 <= controller_U.C_get[2]) && (tmp_0 >=
          controller_U.C_diff[2])))) {
          controller_DW.is_c3_controller = controller_IN_h2h3;
        } else if (((controller_U.X_x4 <= controller_U.C_get[3]) && (tmp_2 >=
                     controller_U.C_diff[3])) || ((controller_U.X_x1 <=
                     controller_U.C_get[0]) && (tmp_4 >= controller_U.C_diff[0])
                    && ((controller_U.X_x4 <= controller_U.C_get[3]) && (tmp_1 >=
          controller_U.C_diff[3])))) {
          controller_DW.is_c3_controller = controller_IN_h1h4;
        }
      }
    }
    break;

   case controller_IN_h1h3:
    tmp = controller_U.X_x3 - controller_U.X_x1;
    tmp_0 = controller_U.X_x1 - controller_U.X_x2;
    tmp_4 = controller_U.X_x3 - controller_U.X_x2;
    if (((controller_U.X_x2 <= controller_U.C_get[1]) && (tmp_4 >=
          controller_U.C_diff[1])) || ((controller_U.X_x2 <= controller_U.C_get
          [1]) && (tmp_0 >= controller_U.C_diff[1]) && ((controller_U.X_x1 <=
           controller_U.C_get[0]) && (tmp >= controller_U.C_diff[0])))) {
      controller_DW.is_c3_controller = controller_IN_h1h2;
    } else {
      tmp_1 = controller_U.X_x3 - controller_U.X_x4;
      tmp_2 = controller_U.X_x1 - controller_U.X_x4;
      if (((controller_U.X_x4 <= controller_U.C_get[3]) && (tmp_1 >=
            controller_U.C_diff[3])) || ((controller_U.X_x4 <=
            controller_U.C_get[3]) && (tmp_2 >= controller_U.C_diff[3]) &&
           ((controller_U.X_x1 <= controller_U.C_get[0]) && (tmp >=
             controller_U.C_diff[0])))) {
        controller_DW.is_c3_controller = controller_IN_h1h4;
      } else {
        tmp = controller_U.X_x1 - controller_U.X_x3;
        if (((controller_U.X_x2 <= controller_U.C_get[1]) && (tmp_0 >=
              controller_U.C_diff[1])) || ((controller_U.X_x3 <=
              controller_U.C_get[2]) && (tmp >= controller_U.C_diff[2]) &&
             ((controller_U.X_x2 <= controller_U.C_get[1]) && (tmp_4 >=
               controller_U.C_diff[1])))) {
          controller_DW.is_c3_controller = controller_IN_h2h3;
        } else if (((controller_U.X_x2 <= controller_U.C_get[1]) && (tmp_0 >=
                     controller_U.C_diff[1]) && ((controller_U.X_x4 <=
                      controller_U.C_get[3]) && (tmp_1 >= controller_U.C_diff[3])))
                   || ((controller_U.X_x4 <= controller_U.C_get[3]) && (tmp_2 >=
          controller_U.C_diff[3]) && ((controller_U.X_x2 <= controller_U.C_get[1])
          && (tmp_4 >= controller_U.C_diff[1])))) {
          controller_DW.is_c3_controller = controller_IN_h2h4;
        } else if (((controller_U.X_x4 <= controller_U.C_get[3]) && (tmp_2 >=
                     controller_U.C_diff[3])) || ((controller_U.X_x4 <=
                     controller_U.C_get[3]) && (tmp_1 >= controller_U.C_diff[3])
                    && ((controller_U.X_x3 <= controller_U.C_get[2]) && (tmp >=
                      controller_U.C_diff[2])))) {
          controller_DW.is_c3_controller = controller_IN_h3h4;
        }
      }
    }
    break;

   case controller_IN_h1h4:
    tmp = controller_U.X_x4 - controller_U.X_x3;
    tmp_0 = controller_U.X_x1 - controller_U.X_x3;
    tmp_4 = controller_U.X_x4 - controller_U.X_x1;
    if (((controller_U.X_x3 <= controller_U.C_get[2]) && (tmp >=
          controller_U.C_diff[2])) || ((controller_U.X_x1 <= controller_U.C_get
          [0]) && (tmp_4 >= controller_U.C_diff[0]) && ((controller_U.X_x3 <=
           controller_U.C_get[2]) && (tmp_0 >= controller_U.C_diff[2])))) {
      controller_DW.is_c3_controller = controller_IN_h1h3;
    } else {
      tmp_1 = controller_U.X_x4 - controller_U.X_x2;
      tmp_2 = controller_U.X_x1 - controller_U.X_x2;
      if (((controller_U.X_x2 <= controller_U.C_get[1]) && (tmp_2 >=
            controller_U.C_diff[1]) && ((controller_U.X_x3 <=
             controller_U.C_get[2]) && (tmp >= controller_U.C_diff[2]))) ||
          ((controller_U.X_x2 <= controller_U.C_get[1]) && (tmp_1 >=
            controller_U.C_diff[1]) && ((controller_U.X_x3 <=
             controller_U.C_get[2]) && (tmp_0 >= controller_U.C_diff[2])))) {
        controller_DW.is_c3_controller = controller_IN_h2h3;
      } else {
        tmp_3 = controller_U.X_x1 - controller_U.X_x4;
        if (((controller_U.X_x3 <= controller_U.C_get[2]) && (tmp_0 >=
              controller_U.C_diff[2])) || ((controller_U.X_x4 <=
              controller_U.C_get[3]) && (tmp_3 >= controller_U.C_diff[3]) &&
             ((controller_U.X_x3 <= controller_U.C_get[2]) && (tmp >=
               controller_U.C_diff[2])))) {
          controller_DW.is_c3_controller = controller_IN_h3h4;
        } else if (((controller_U.X_x2 <= controller_U.C_get[1]) && (tmp_1 >=
                     controller_U.C_diff[1])) || ((controller_U.X_x2 <=
                     controller_U.C_get[1]) && (tmp_2 >= controller_U.C_diff[1])
                    && ((controller_U.X_x1 <= controller_U.C_get[0]) && (tmp_4 >=
          controller_U.C_diff[0])))) {
          controller_DW.is_c3_controller = controller_IN_h1h2;
        } else if (((controller_U.X_x2 <= controller_U.C_get[1]) && (tmp_2 >=
                     controller_U.C_diff[1])) || ((controller_U.X_x4 <=
                     controller_U.C_get[3]) && (tmp_3 >= controller_U.C_diff[3])
                    && ((controller_U.X_x2 <= controller_U.C_get[1]) && (tmp_1 >=
          controller_U.C_diff[1])))) {
          controller_DW.is_c3_controller = controller_IN_h2h4;
        }
      }
    }
    break;

   case controller_IN_h2h3:
    tmp = controller_U.X_x3 - controller_U.X_x4;
    tmp_0 = controller_U.X_x2 - controller_U.X_x4;
    tmp_4 = controller_U.X_x2 - controller_U.X_x1;
    tmp_1 = controller_U.X_x3 - controller_U.X_x1;
    if (((controller_U.X_x1 <= controller_U.C_get[0]) && (tmp_4 >=
          controller_U.C_diff[0]) && ((controller_U.X_x4 <= controller_U.C_get[3])
          && (tmp >= controller_U.C_diff[3]))) || ((controller_U.X_x4 <=
          controller_U.C_get[3]) && (tmp_0 >= controller_U.C_diff[3]) &&
         ((controller_U.X_x1 <= controller_U.C_get[0]) && (tmp_1 >=
           controller_U.C_diff[0])))) {
      controller_DW.is_c3_controller = controller_IN_h1h4;
    } else {
      tmp_2 = controller_U.X_x3 - controller_U.X_x2;
      if (((controller_U.X_x4 <= controller_U.C_get[3]) && (tmp >=
            controller_U.C_diff[3])) || ((controller_U.X_x4 <=
            controller_U.C_get[3]) && (tmp_0 >= controller_U.C_diff[3]) &&
           ((controller_U.X_x2 <= controller_U.C_get[1]) && (tmp_2 >=
             controller_U.C_diff[1])))) {
        controller_DW.is_c3_controller = controller_IN_h2h4;
      } else {
        tmp_3 = controller_U.X_x2 - controller_U.X_x3;
        if (((controller_U.X_x1 <= controller_U.C_get[0]) && (tmp_4 >=
              controller_U.C_diff[0])) || ((controller_U.X_x1 <=
              controller_U.C_get[0]) && (tmp_1 >= controller_U.C_diff[0]) &&
             ((controller_U.X_x3 <= controller_U.C_get[2]) && (tmp_3 >=
               controller_U.C_diff[2])))) {
          controller_DW.is_c3_controller = controller_IN_h1h3;
        } else if (((controller_U.X_x1 <= controller_U.C_get[0]) && (tmp_1 >=
                     controller_U.C_diff[0])) || ((controller_U.X_x1 <=
                     controller_U.C_get[0]) && (tmp_4 >= controller_U.C_diff[0])
                    && ((controller_U.X_x2 <= controller_U.C_get[1]) && (tmp_2 >=
          controller_U.C_diff[1])))) {
          controller_DW.is_c3_controller = controller_IN_h1h2;
        } else if (((controller_U.X_x4 <= controller_U.C_get[3]) && (tmp_0 >=
                     controller_U.C_diff[3])) || ((controller_U.X_x3 <=
                     controller_U.C_get[2]) && (tmp_3 >= controller_U.C_diff[2])
                    && ((controller_U.X_x4 <= controller_U.C_get[3]) && (tmp >=
                      controller_U.C_diff[3])))) {
          controller_DW.is_c3_controller = controller_IN_h3h4;
        }
      }
    }
    break;

   case controller_IN_h2h4:
    tmp = controller_U.X_x2 - controller_U.X_x3;
    tmp_0 = controller_U.X_x4 - controller_U.X_x3;
    tmp_4 = controller_U.X_x4 - controller_U.X_x2;
    if (((controller_U.X_x3 <= controller_U.C_get[2]) && (tmp_0 >=
          controller_U.C_diff[2])) || ((controller_U.X_x2 <= controller_U.C_get
          [1]) && (tmp_4 >= controller_U.C_diff[1]) && ((controller_U.X_x3 <=
           controller_U.C_get[2]) && (tmp >= controller_U.C_diff[2])))) {
      controller_DW.is_c3_controller = controller_IN_h2h3;
    } else {
      tmp_1 = controller_U.X_x2 - controller_U.X_x4;
      if (((controller_U.X_x3 <= controller_U.C_get[2]) && (tmp >=
            controller_U.C_diff[2])) || ((controller_U.X_x4 <=
            controller_U.C_get[3]) && (tmp_1 >= controller_U.C_diff[3]) &&
           ((controller_U.X_x3 <= controller_U.C_get[2]) && (tmp_0 >=
             controller_U.C_diff[2])))) {
        controller_DW.is_c3_controller = controller_IN_h3h4;
      } else {
        tmp_2 = controller_U.X_x2 - controller_U.X_x1;
        tmp_3 = controller_U.X_x4 - controller_U.X_x1;
        if (((controller_U.X_x1 <= controller_U.C_get[0]) && (tmp_3 >=
              controller_U.C_diff[0])) || ((controller_U.X_x1 <=
              controller_U.C_get[0]) && (tmp_2 >= controller_U.C_diff[0]) &&
             ((controller_U.X_x2 <= controller_U.C_get[1]) && (tmp_4 >=
               controller_U.C_diff[1])))) {
          controller_DW.is_c3_controller = controller_IN_h1h2;
        } else if (((controller_U.X_x1 <= controller_U.C_get[0]) && (tmp_2 >=
                     controller_U.C_diff[0]) && ((controller_U.X_x3 <=
                      controller_U.C_get[2]) && (tmp_0 >= controller_U.C_diff[2])))
                   || ((controller_U.X_x1 <= controller_U.C_get[0]) && (tmp_3 >=
          controller_U.C_diff[0]) && ((controller_U.X_x3 <= controller_U.C_get[2])
          && (tmp >= controller_U.C_diff[2])))) {
          controller_DW.is_c3_controller = controller_IN_h1h3;
        } else if (((controller_U.X_x1 <= controller_U.C_get[0]) && (tmp_2 >=
                     controller_U.C_diff[0])) || ((controller_U.X_x1 <=
                     controller_U.C_get[0]) && (tmp_3 >= controller_U.C_diff[0])
                    && ((controller_U.X_x4 <= controller_U.C_get[3]) && (tmp_1 >=
          controller_U.C_diff[3])))) {
          controller_DW.is_c3_controller = controller_IN_h1h4;
        }
      }
    }
    break;

   case controller_IN_h3h4:
    tmp = controller_U.X_x4 - controller_U.X_x2;
    tmp_0 = controller_U.X_x3 - controller_U.X_x2;
    tmp_4 = controller_U.X_x3 - controller_U.X_x4;
    if (((controller_U.X_x2 <= controller_U.C_get[1]) && (tmp_0 >=
          controller_U.C_diff[1])) || ((controller_U.X_x2 <= controller_U.C_get
          [1]) && (tmp >= controller_U.C_diff[1]) && ((controller_U.X_x4 <=
           controller_U.C_get[3]) && (tmp_4 >= controller_U.C_diff[3])))) {
      controller_DW.is_c3_controller = controller_IN_h2h4;
    } else {
      tmp_1 = controller_U.X_x3 - controller_U.X_x1;
      tmp_2 = controller_U.X_x4 - controller_U.X_x1;
      if (((controller_U.X_x1 <= controller_U.C_get[0]) && (tmp_1 >=
            controller_U.C_diff[0]) && ((controller_U.X_x2 <=
             controller_U.C_get[1]) && (tmp >= controller_U.C_diff[1]))) ||
          ((controller_U.X_x1 <= controller_U.C_get[0]) && (tmp_2 >=
            controller_U.C_diff[0]) && ((controller_U.X_x2 <=
             controller_U.C_get[1]) && (tmp_0 >= controller_U.C_diff[1])))) {
        controller_DW.is_c3_controller = controller_IN_h1h2;
      } else if (((controller_U.X_x1 <= controller_U.C_get[0]) && (tmp_1 >=
                   controller_U.C_diff[0])) || ((controller_U.X_x1 <=
                   controller_U.C_get[0]) && (tmp_2 >= controller_U.C_diff[0]) &&
                  ((controller_U.X_x4 <= controller_U.C_get[3]) && (tmp_4 >=
                    controller_U.C_diff[3])))) {
        controller_DW.is_c3_controller = controller_IN_h1h4;
      } else {
        tmp_4 = controller_U.X_x4 - controller_U.X_x3;
        if (((controller_U.X_x1 <= controller_U.C_get[0]) && (tmp_2 >=
              controller_U.C_diff[0])) || ((controller_U.X_x3 <=
              controller_U.C_get[2]) && (tmp_4 >= controller_U.C_diff[2]) &&
             ((controller_U.X_x1 <= controller_U.C_get[0]) && (tmp_1 >=
               controller_U.C_diff[0])))) {
          controller_DW.is_c3_controller = controller_IN_h1h3;
        } else if (((controller_U.X_x2 <= controller_U.C_get[1]) && (tmp >=
                     controller_U.C_diff[1])) || ((controller_U.X_x2 <=
                     controller_U.C_get[1]) && (tmp_0 >= controller_U.C_diff[1])
                    && ((controller_U.X_x3 <= controller_U.C_get[2]) && (tmp_4 >=
          controller_U.C_diff[2])))) {
          controller_DW.is_c3_controller = controller_IN_h2h3;
        }
      }
    }
    break;

   default:
    /* case IN_init_state: */
    if ((h1 == 1) && (h2 == 1)) {
      controller_DW.is_c3_controller = controller_IN_h1h2;
    } else if ((h1 == 1) && (h3 == 1)) {
      controller_DW.is_c3_controller = controller_IN_h1h3;
    } else if ((h1 == 1) && (h4 == 1)) {
      controller_DW.is_c3_controller = controller_IN_h1h4;
    } else if ((h3 == 1) && (h4 == 1)) {
      controller_DW.is_c3_controller = controller_IN_h3h4;
    } else if ((h2 == 1) && (h3 == 1)) {
      controller_DW.is_c3_controller = controller_IN_h2h3;
    } else if ((h2 == 1) && (h4 == 1)) {
      controller_DW.is_c3_controller = controller_IN_h2h4;
    }
    break;
  }

  /* End of Update for Chart: '<Root>/Chart' */
}

/* Model initialize function */
void controller_initialize(void)
{
  /* InitializeConditions for Outport: '<Root>/H_h2' incorporates:
   *  Chart: '<Root>/Chart'
   */
  controller_Y.H_h2 = 1;

  /* InitializeConditions for Outport: '<Root>/H_h3' incorporates:
   *  Chart: '<Root>/Chart'
   */
  controller_Y.H_h3 = 1;

  /* Chart: '<Root>/Chart' */
  controller_DW.is_c3_controller = controller_IN_init_state;
}

/* Model terminate function */
void controller_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
