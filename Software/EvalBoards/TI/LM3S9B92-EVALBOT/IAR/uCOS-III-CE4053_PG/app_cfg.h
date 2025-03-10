/*
*********************************************************************************************************
*                                              EXAMPLE CODE
*
*                           (c) Copyright 2009-2010; Micrium, Inc.; Weston, FL
*
*               All rights reserved.  Protected by international copyright laws.
*               Knowledge of the source code may NOT be used to develop a similar product.
*               Please help us continue to provide the Embedded community with the finest
*               software available.  Your honesty is greatly appreciated.
*********************************************************************************************************
*/

/*
*********************************************************************************************************
*                                      APPLICATION CONFIGURATION
*
* Filename      : app_cfg.h
* Version       : V1.00
* Programmer(s) : JJL
*                 EHS
*                 KWN
*********************************************************************************************************
*/

#ifndef  __APP_CFG_H__
#define  __APP_CFG_H__

#define  R1Ceil                                         25u
#define  R2Ceil                                         11u
#define  R3Ceil                                         11u

/*
*********************************************************************************************************
*                                            BSP CONFIGURATION
*********************************************************************************************************
*/

#define  BSP_CFG_LED_SPI2_EN                     DEF_ENABLED    /* Enable/disable LEDs on SPI port.                   */
#define  BSP_CFG_LED_PIOC_EN                     DEF_ENABLED    /* Enable/disable PIOC LEDs.                          */


/*
*********************************************************************************************************
*                                            TASK PRIORITIES
*********************************************************************************************************
*/

#define  APP_TASK_START_PRIO                        	1u

#define  APP_TASK_ONE_PRIO                              3u
#define  APP_TASK_TWO_PRIO                              12u
#define  APP_TASK_THREE_PRIO                            13u



/*
*********************************************************************************************************
*                                            TASK STACK SIZES
*                             Size of the task stacks (# of OS_STK entries)
*********************************************************************************************************
*/

#define  APP_TASK_START_STK_SIZE                    128u
#define  APP_TASK_ONE_STK_SIZE                      128u
#define  APP_TASK_TWO_STK_SIZE                      128u
#define  APP_TASK_THREE_STK_SIZE                    128u

/*
*********************************************************************************************************
*                                           uC/LIB CONFIGURATION
*********************************************************************************************************
*/

#include <lib_cfg.h>

/*
*********************************************************************************************************
*                                          uC/Probe CONFIGURATION
*********************************************************************************************************
*/

#define  APP_CFG_PROBE_OS_PLUGIN_EN              DEF_DISABLED
#define  APP_CFG_PROBE_COM_EN                    DEF_DISABLED

/*
*********************************************************************************************************
*                                    BSP CONFIGURATION: RS-232
*********************************************************************************************************
*/

#define  BSP_SER_COMM_EN                         DEF_ENABLED
#define  BSP_CFG_SER_COMM_SEL           BSP_SER_COMM_UART_02
#define  BSP_CFG_TS_TMR_SEL                                2


/*
*********************************************************************************************************
*                                     TRACE / DEBUG CONFIGURATION
*********************************************************************************************************
*/

#define  TRACE_LEVEL_OFF                                  0u
#define  TRACE_LEVEL_INFO                                 1u
#define  TRACE_LEVEL_DEBUG                                2u

#define  APP_TRACE_LEVEL                    TRACE_LEVEL_INFO
#define  APP_TRACE                            BSP_Ser_Printf

#define  APP_TRACE_INFO(x)            ((APP_TRACE_LEVEL >= TRACE_LEVEL_INFO)  ? (void)(APP_TRACE x) : (void)0)
#define  APP_TRACE_DEBUG(x)           ((APP_TRACE_LEVEL >= TRACE_LEVEL_DEBUG) ? (void)(APP_TRACE x) : (void)0)


#endif