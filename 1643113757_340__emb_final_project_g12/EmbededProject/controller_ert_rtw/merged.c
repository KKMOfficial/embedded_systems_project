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
/*
 * File: rtwtypes.h
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

#ifndef RTWTYPES_H
#define RTWTYPES_H

/* Logical type definitions */
#if (!defined(__cplusplus))
#ifndef false
#define false                          (0U)
#endif

#ifndef true
#define true                           (1U)
#endif
#endif

/*=======================================================================*
 * Target hardware information
 *   Device type: Atmel->AVR
 *   Number of bits:     char:   8    short:   16    int:  16
 *                       long:  32
 *                       native word size:   8
 *   Byte ordering: LittleEndian
 *   Signed integer division rounds to: Zero
 *   Shift right on a signed integer as arithmetic shift: on
 *=======================================================================*/

/*=======================================================================*
 * Fixed width word size data types:                                     *
 *   int8_T, int16_T, int32_T     - signed 8, 16, or 32 bit integers     *
 *   uint8_T, uint16_T, uint32_T  - unsigned 8, 16, or 32 bit integers   *
 *   real32_T, real64_T           - 32 and 64 bit floating point numbers *
 *=======================================================================*/
typedef signed char int8_T;
typedef unsigned char uint8_T;
typedef int int16_T;
typedef unsigned int uint16_T;
typedef long int32_T;
typedef unsigned long uint32_T;
typedef float real32_T;
typedef double real64_T;

/*===========================================================================*
 * Generic type definitions: boolean_T, char_T, byte_T, int_T, uint_T,       *
 *                           real_T, time_T, ulong_T.                        *
 *===========================================================================*/
typedef double real_T;
typedef double time_T;
typedef unsigned char boolean_T;
typedef int int_T;
typedef unsigned int uint_T;
typedef unsigned long ulong_T;
typedef char char_T;
typedef unsigned char uchar_T;
typedef char_T byte_T;

/*===========================================================================*
 * Complex number type definitions                                           *
 *===========================================================================*/
#define CREAL_T

typedef struct {
  real32_T re;
  real32_T im;
} creal32_T;

typedef struct {
  real64_T re;
  real64_T im;
} creal64_T;

typedef struct {
  real_T re;
  real_T im;
} creal_T;

#define CINT8_T

typedef struct {
  int8_T re;
  int8_T im;
} cint8_T;

#define CUINT8_T

typedef struct {
  uint8_T re;
  uint8_T im;
} cuint8_T;

#define CINT16_T

typedef struct {
  int16_T re;
  int16_T im;
} cint16_T;

#define CUINT16_T

typedef struct {
  uint16_T re;
  uint16_T im;
} cuint16_T;

#define CINT32_T

typedef struct {
  int32_T re;
  int32_T im;
} cint32_T;

#define CUINT32_T

typedef struct {
  uint32_T re;
  uint32_T im;
} cuint32_T;

/*=======================================================================*
 * Min and Max:                                                          *
 *   int8_T, int16_T, int32_T     - signed 8, 16, or 32 bit integers     *
 *   uint8_T, uint16_T, uint32_T  - unsigned 8, 16, or 32 bit integers   *
 *=======================================================================*/
#define MAX_int8_T                     ((int8_T)(127))
#define MIN_int8_T                     ((int8_T)(-128))
#define MAX_uint8_T                    ((uint8_T)(255U))
#define MAX_int16_T                    ((int16_T)(32767))
#define MIN_int16_T                    ((int16_T)(-32768))
#define MAX_uint16_T                   ((uint16_T)(65535U))
#define MAX_int32_T                    ((int32_T)(2147483647L))
#define MIN_int32_T                    ((int32_T)(-2147483647L-1L))
#define MAX_uint32_T                   ((uint32_T)(0xFFFFFFFFUL))

/* Block D-Work pointer type */
typedef void * pointer_T;

#endif                                 /* RTWTYPES_H */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */

#endif                                 /* controller_COMMON_INCLUDES_ */

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
/*
 * File: rtwtypes.h
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

#ifndef RTWTYPES_H
#define RTWTYPES_H

/* Logical type definitions */
#if (!defined(__cplusplus))
#ifndef false
#define false                          (0U)
#endif

#ifndef true
#define true                           (1U)
#endif
#endif

/*=======================================================================*
 * Target hardware information
 *   Device type: Atmel->AVR
 *   Number of bits:     char:   8    short:   16    int:  16
 *                       long:  32
 *                       native word size:   8
 *   Byte ordering: LittleEndian
 *   Signed integer division rounds to: Zero
 *   Shift right on a signed integer as arithmetic shift: on
 *=======================================================================*/

/*=======================================================================*
 * Fixed width word size data types:                                     *
 *   int8_T, int16_T, int32_T     - signed 8, 16, or 32 bit integers     *
 *   uint8_T, uint16_T, uint32_T  - unsigned 8, 16, or 32 bit integers   *
 *   real32_T, real64_T           - 32 and 64 bit floating point numbers *
 *=======================================================================*/
typedef signed char int8_T;
typedef unsigned char uint8_T;
typedef int int16_T;
typedef unsigned int uint16_T;
typedef long int32_T;
typedef unsigned long uint32_T;
typedef float real32_T;
typedef double real64_T;

/*===========================================================================*
 * Generic type definitions: boolean_T, char_T, byte_T, int_T, uint_T,       *
 *                           real_T, time_T, ulong_T.                        *
 *===========================================================================*/
typedef double real_T;
typedef double time_T;
typedef unsigned char boolean_T;
typedef int int_T;
typedef unsigned int uint_T;
typedef unsigned long ulong_T;
typedef char char_T;
typedef unsigned char uchar_T;
typedef char_T byte_T;

/*===========================================================================*
 * Complex number type definitions                                           *
 *===========================================================================*/
#define CREAL_T

typedef struct {
  real32_T re;
  real32_T im;
} creal32_T;

typedef struct {
  real64_T re;
  real64_T im;
} creal64_T;

typedef struct {
  real_T re;
  real_T im;
} creal_T;

#define CINT8_T

typedef struct {
  int8_T re;
  int8_T im;
} cint8_T;

#define CUINT8_T

typedef struct {
  uint8_T re;
  uint8_T im;
} cuint8_T;

#define CINT16_T

typedef struct {
  int16_T re;
  int16_T im;
} cint16_T;

#define CUINT16_T

typedef struct {
  uint16_T re;
  uint16_T im;
} cuint16_T;

#define CINT32_T

typedef struct {
  int32_T re;
  int32_T im;
} cint32_T;

#define CUINT32_T

typedef struct {
  uint32_T re;
  uint32_T im;
} cuint32_T;

/*=======================================================================*
 * Min and Max:                                                          *
 *   int8_T, int16_T, int32_T     - signed 8, 16, or 32 bit integers     *
 *   uint8_T, uint16_T, uint32_T  - unsigned 8, 16, or 32 bit integers   *
 *=======================================================================*/
#define MAX_int8_T                     ((int8_T)(127))
#define MIN_int8_T                     ((int8_T)(-128))
#define MAX_uint8_T                    ((uint8_T)(255U))
#define MAX_int16_T                    ((int16_T)(32767))
#define MIN_int16_T                    ((int16_T)(-32768))
#define MAX_uint16_T                   ((uint16_T)(65535U))
#define MAX_int32_T                    ((int32_T)(2147483647L))
#define MIN_int32_T                    ((int32_T)(-2147483647L-1L))
#define MAX_uint32_T                   ((uint32_T)(0xFFFFFFFFUL))

/* Block D-Work pointer type */
typedef void * pointer_T;

#endif                                 /* RTWTYPES_H */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */


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

#ifndef PORTABLE_WORDSIZES
#ifdef __MW_TARGET_USE_HARDWARE_RESOURCES_H__
#ifndef __MW_TARGET_HARDWARE_RESOURCES_H__
#define __MW_TARGET_HARDWARE_RESOURCES_H__

#define MW_MULTI_TASKING_MODE 1
#include "arduinoAVRScheduler.h"

#define MW_USECODERTARGET 1
#define MW_TARGETHARDWARE Arduino Uno
#define MW_CONNECTIONINFO_SERIAL_IPADDRESS codertarget.arduinobase.registry.getLoopbackIP;
#define MW_CONNECTIONINFO_SERIAL_PORT 17725
#define MW_CONNECTIONINFO_SERIAL_VERBOSE 0
#define MW_CONNECTIONINFO_TCPIP_IPADDRESS codertarget.arduinobase.internal.getExternalModeMexArgs('Ethernet')
#define MW_CONNECTIONINFO_TCPIP_PORT 17725
#define MW_CONNECTIONINFO_TCPIP_VERBOSE 0
#define MW_CONNECTIONINFO_WIFI_IPADDRESS codertarget.arduinobase.internal.getExternalModeMexArgs('Wifi')
#define MW_CONNECTIONINFO_WIFI_PORT 17725
#define MW_CONNECTIONINFO_WIFI_VERBOSE 0
#define MW_CONNECTIONINFO_XCPONSERIAL_BAUDRATE codertarget.arduinobase.registry.getBaudRate
#define MW_CONNECTIONINFO_XCPONSERIAL_COMPORT codertarget.arduinobase.internal.getExternalModeMexArgs('Serial')
#define MW_CONNECTIONINFO_XCPONSERIAL_VERBOSE 0
#define MW_CONNECTIONINFO_XCPONTCPIP_IPADDRESS codertarget.arduinobase.internal.getExternalModeMexArgs('Ethernet')
#define MW_CONNECTIONINFO_XCPONTCPIP_PORT 17725
#define MW_CONNECTIONINFO_XCPONTCPIP_VERBOSE 0
#define MW_CONNECTIONINFO_XCPONWIFI_IPADDRESS codertarget.arduinobase.internal.getExternalModeMexArgs('Wifi')
#define MW_CONNECTIONINFO_XCPONWIFI_PORT 17725
#define MW_CONNECTIONINFO_XCPONWIFI_VERBOSE 0
#define MW_EXTMODE_CONFIGURATION Serial
#define MW_EXTMODE_COMPORTBAUD 921600
#define MW_EXTMODE_HOSTINTERFACE 0
#define MW_EXTMODE_SIGNALBUFFERSIZE 250.000000
#define MW_RTOS Baremetal
#define MW_SCHEDULER_INTERRUPT_SOURCE 0
#define MW_RUNTIME_BUILDACTION 1
#define MW_RUNTIME_DISABLEPARALLELBUILD 0
#define MW_RUNTIME_FORCEBUILDSTATICLIBRARY 0
#define MW_HOSTCOMPORT_SET_HOST_COM_PORT 0
#define MW_HOSTCOMPORT_COM_PORT_NUMBER 1
#define MW_SIMULINKIO_ENABLE_SIMULINKIO 1
#define MW_OVERRUNDETECTION_ENABLE_OVERRUN_DETECTION 0
#define MW_OVERRUNDETECTION_DIGITAL_OUTPUT_TO_SET_ON_OVERRUN 13
#define MW_ANALOGINREFVOLTAGE_ANALOG_INPUT_REFERENCE_VOLTAGE 0.000000
#define MW_SERIAL_SERIAL0_BAUD_RATE 3
#define MW_I2C_I2C0BUSSPEEDHZ 100000
#define MW_SPI_SPI_CLOCK_OUT_FREQUENCY 1
#define MW_SPI_SPI_MODE 0
#define MW_SPI_SPI_BITORDER 0
#define MW_SPI_SDSLAVESELECT 4.000000
#define MW_SPI_CANCHIPSELECT 9.000000
#define MW_ETHERNET_DISABLE_DHCP_ETHERNET 0
#define MW_ETHERNET_LOCAL_IP_ADDRESS 192.168.0.20
#define MW_ETHERNET_LOCAL_MAC_ADDRESS DE:AD:BE:EF:FE:ED
#define MW_WIFI_WIFI_HARDWARE 0
#define MW_WIFI_DISABLE_DHCP_WIFI 0
#define MW_WIFI_WIFI_IP_ADDRESS 192.168.1.20
#define MW_WIFI_WIFI_SSID yourNetwork
#define MW_WIFI_SET_WIFI_ENCRYPTION 0
#define MW_WIFI_WIFI_WEP_KEY D0D0DEADF00DABBADEAFBEADED
#define MW_WIFI_WIFI_WEP_KEY_INDEX 0
#define MW_WIFI_WIFI_WPA_PASSWORD secretPassword
#define MW_WIFI_WIFI_ESP8266_HW_SERIAL_PORT 0
#define MW_THINGSPEAK_ENABLE_CUSTOMSERVER 48
#define MW_THINGSPEAK_IP_ADDRESS 184.106.153.149
#define MW_THINGSPEAK_PORT 80
#define MW_CAN_CANBUSSPEED 10
#define MW_CAN_CANOSCILLATORFREQUENCY 1
#define MW_CAN_INTERRUPTPIN 2.000000
#define MW_CAN_ALLOWALLFILTER 0
#define MW_CAN_BUFFER0IDTYPE 0
#define MW_CAN_ACCEPTANCEMASK0_NOR 0
#define MW_CAN_ACCEPTANCEFILTER0_NOR 255
#define MW_CAN_ACCEPTANCEFILTER1_NOR 255
#define MW_CAN_ACCEPTANCEMASK0_EXT 0
#define MW_CAN_ACCEPTANCEFILTER0_EXT 255
#define MW_CAN_ACCEPTANCEFILTER1_EXT 255
#define MW_CAN_BUFFER1IDTYPE 0
#define MW_CAN_ACCEPTANCEMASK1_NOR 0
#define MW_CAN_ACCEPTANCEFILTER2_NOR 255
#define MW_CAN_ACCEPTANCEFILTER3_NOR 255
#define MW_CAN_ACCEPTANCEFILTER4_NOR 255
#define MW_CAN_ACCEPTANCEFILTER5_NOR 255
#define MW_CAN_ACCEPTANCEMASK1_EXT 0
#define MW_CAN_ACCEPTANCEFILTER2_EXT 255
#define MW_CAN_ACCEPTANCEFILTER3_EXT 255
#define MW_CAN_ACCEPTANCEFILTER4_EXT 255
#define MW_CAN_ACCEPTANCEFILTER5_EXT 255
#define MW_MODBUS_MODBUS_COMMS 0
#define MW_MODBUS_MODBUS_MODE 0
#define MW_MODBUS_MODBUS_SLAVEID 1
#define MW_MODBUS_MODBUS_CONFIGCOIL 49
#define MW_MODBUS_MODBUS_COILADDR 0
#define MW_MODBUS_MODBUS_COILNUM 1
#define MW_MODBUS_MODBUS_CONFIGINPUT 49
#define MW_MODBUS_MODBUS_INPUTADDR 0
#define MW_MODBUS_MODBUS_INPUTNUM 1
#define MW_MODBUS_MODBUS_CONFIGHOLDINGREG 49
#define MW_MODBUS_MODBUS_HOLDINGREGADDR 0
#define MW_MODBUS_MODBUS_HOLDINGREGNUM 1
#define MW_MODBUS_MODBUS_CONFIGINPUTREG 49
#define MW_MODBUS_MODBUS_INPUTREGADDR 0
#define MW_MODBUS_MODBUS_INPUTREGNUM 1
#define MW_MODBUS_MODBUS_MASTERTIMEOUT 100
#define MW_RS485_RS485_SERIAL 0
#define MW_RS485_RS485_BAUD 9600
#define MW_RS485_RS485_CONFIG 3
#define MW_RS485_RS485_DEPIN 8
#define MW_RS485_RS485_REPIN 9
#define MW_DISPLAY_ENABLECODEGEN 0
#define MW_DISPLAY_APPLAUNCHBUTTON 
#define MW_DATAVERSION 2016.02
#define MW_DASHBOARDCODEGENINFO_ENABLECODEGEN 0
#define MW_DASHBOARDCODEGENINFO_CIRCULARGAUGE_CODEGEN 1
#define MW_DASHBOARDCODEGENINFO_CIRCULARGAUGE_BLOCKCLASS codertarget.targetHiddenBlkInsert.internal.circularGauge
#define MW_DASHBOARDCODEGENINFO_CIRCULARGAUGE_REGFCN codertarget.arduinobase.blocks.registerDashboardBlk
#define MW_DASHBOARDCODEGENINFO_CIRCULARGAUGE_VALIDATEFCN codertarget.targetHiddenBlkInsert.internal.isDashboardBlockCodegenEnabled
#define MW_DASHBOARDCODEGENINFO_DISPLAYBLOCK_CODEGEN 1
#define MW_DASHBOARDCODEGENINFO_DISPLAYBLOCK_BLOCKCLASS codertarget.targetHiddenBlkInsert.internal.lcdTextDisplay
#define MW_DASHBOARDCODEGENINFO_DISPLAYBLOCK_REGFCN codertarget.arduinobase.blocks.registerDashboardBlk
#define MW_DASHBOARDCODEGENINFO_DISPLAYBLOCK_VALIDATEFCN codertarget.targetHiddenBlkInsert.internal.isDashboardBlockCodegenEnabled

#endif /* __MW_TARGET_HARDWARE_RESOURCES_H__ */

#endif

#endif


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

/*
 * File: controller_private.h
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

#ifndef RTW_HEADER_controller_private_h_
#define RTW_HEADER_controller_private_h_
/*
 * File: rtwtypes.h
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

#ifndef RTWTYPES_H
#define RTWTYPES_H

/* Logical type definitions */
#if (!defined(__cplusplus))
#ifndef false
#define false                          (0U)
#endif

#ifndef true
#define true                           (1U)
#endif
#endif

/*=======================================================================*
 * Target hardware information
 *   Device type: Atmel->AVR
 *   Number of bits:     char:   8    short:   16    int:  16
 *                       long:  32
 *                       native word size:   8
 *   Byte ordering: LittleEndian
 *   Signed integer division rounds to: Zero
 *   Shift right on a signed integer as arithmetic shift: on
 *=======================================================================*/

/*=======================================================================*
 * Fixed width word size data types:                                     *
 *   int8_T, int16_T, int32_T     - signed 8, 16, or 32 bit integers     *
 *   uint8_T, uint16_T, uint32_T  - unsigned 8, 16, or 32 bit integers   *
 *   real32_T, real64_T           - 32 and 64 bit floating point numbers *
 *=======================================================================*/
typedef signed char int8_T;
typedef unsigned char uint8_T;
typedef int int16_T;
typedef unsigned int uint16_T;
typedef long int32_T;
typedef unsigned long uint32_T;
typedef float real32_T;
typedef double real64_T;

/*===========================================================================*
 * Generic type definitions: boolean_T, char_T, byte_T, int_T, uint_T,       *
 *                           real_T, time_T, ulong_T.                        *
 *===========================================================================*/
typedef double real_T;
typedef double time_T;
typedef unsigned char boolean_T;
typedef int int_T;
typedef unsigned int uint_T;
typedef unsigned long ulong_T;
typedef char char_T;
typedef unsigned char uchar_T;
typedef char_T byte_T;

/*===========================================================================*
 * Complex number type definitions                                           *
 *===========================================================================*/
#define CREAL_T

typedef struct {
  real32_T re;
  real32_T im;
} creal32_T;

typedef struct {
  real64_T re;
  real64_T im;
} creal64_T;

typedef struct {
  real_T re;
  real_T im;
} creal_T;

#define CINT8_T

typedef struct {
  int8_T re;
  int8_T im;
} cint8_T;

#define CUINT8_T

typedef struct {
  uint8_T re;
  uint8_T im;
} cuint8_T;

#define CINT16_T

typedef struct {
  int16_T re;
  int16_T im;
} cint16_T;

#define CUINT16_T

typedef struct {
  uint16_T re;
  uint16_T im;
} cuint16_T;

#define CINT32_T

typedef struct {
  int32_T re;
  int32_T im;
} cint32_T;

#define CUINT32_T

typedef struct {
  uint32_T re;
  uint32_T im;
} cuint32_T;

/*=======================================================================*
 * Min and Max:                                                          *
 *   int8_T, int16_T, int32_T     - signed 8, 16, or 32 bit integers     *
 *   uint8_T, uint16_T, uint32_T  - unsigned 8, 16, or 32 bit integers   *
 *=======================================================================*/
#define MAX_int8_T                     ((int8_T)(127))
#define MIN_int8_T                     ((int8_T)(-128))
#define MAX_uint8_T                    ((uint8_T)(255U))
#define MAX_int16_T                    ((int16_T)(32767))
#define MIN_int16_T                    ((int16_T)(-32768))
#define MAX_uint16_T                   ((uint16_T)(65535U))
#define MAX_int32_T                    ((int32_T)(2147483647L))
#define MIN_int32_T                    ((int32_T)(-2147483647L-1L))
#define MAX_uint32_T                   ((uint32_T)(0xFFFFFFFFUL))

/* Block D-Work pointer type */
typedef void * pointer_T;

#endif                                 /* RTWTYPES_H */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */

#endif                                 /* RTW_HEADER_controller_private_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */


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
