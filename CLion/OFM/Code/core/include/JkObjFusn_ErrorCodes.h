/*********************************************************************************
* Copyright(C) JiKa Inc. All rights reserved.
* FileName: JkObjFusn_ErrorCodes.h
* Author:  ruifeng.ding
* Version: 1.00
* Date:  2021/08/11
* Description: List of different errors that may occur during execution of object fusion
* Others:
* Function List:
    1.
    2.
* History: 
    1.Date:
      Author:
      Modification:
    2.
**********************************************************************************/

#ifndef JKOBJFUSN_ERRORCODES_H_
#define JKOBJFUSN_ERRORCODES_H_

/*****************************/
/* Shared Error Codes        */
/*****************************/
#define JKOBJFUSN_ERROR_NOERROR                                     (0x00000000u)

/********************************************************************
 * Run-Time Checks
 ********************************************************************/
#if !defined JK_RUNTIME_ERROR_CHECK
/** STD_ON for run-time pointer checks, else STD_OFF */
#define JK_RUNTIME_ERROR_CHECK              (STD_OFF)
#endif

#if (JK_RUNTIME_ERROR_CHECK == STD_ON)
/** @}*/
/** @name Run-Time check constant parameters
 @{**/
#if !defined JK_RUNTIME_POINTER_CHECK
/** STD_ON for run-time pointer checks, else STD_OFF */
#define JK_RUNTIME_POINTER_CHECK              (STD_OFF)
/** @}*/
#endif

#if (JK_RUNTIME_POINTER_CHECK == STD_ON)
#define JKOBJFUSN_ERROR_NULL_POINTER_EXCEPTION                      (0x00000001u)
#endif

#define JKOBJFUSN_ERROR_MATRIX_EXCEEDS_MAXIMUM_SIZE                 (0x00000002u)
#define JKOBJFUSN_ERROR_MATRIX_SIZE_NOT_EQUAL                       (0x00000004u)
#define JKOBJFUSN_ERROR_INVALID_POINTER                             (0x00000008u)
#define JKOBJFUSN_ERROR_MATRIX_EMPTY                                (0x00000010u)
#define JKOBJFUSN_ERROR_INVALID_PARAMETER                           (0x00000020u)
#define JKOBJFUSN_ERROR_INVALID_SENSOR_PATTERN                      (0x00000040u)
#define JKOBJFUSN_ERROR_NUMBER_OF_OBJECTS_EXCEEDS_MAXIMUM_SIZE      (0x00000080u)
#define JKOBJFUSN_ERROR_INTERNAL_ERROR                              (0x00000100u)
#define JKOBJFUSN_ERROR_COORD_SYSTEM_MISMATCH                       (0x00000200u)
#define JKOBJFUSN_ERROR_INVALID_VERISON                             (0x00000400u)
#define JKOBJFUSN_ERROR_INVALID_INPUT                               (0x00000800u)
#define JKOBJFUSN_ERROR_AAU_NOT_INITIALIZED                         (0x00001000u)
#define JKOBJFUSN_ERROR_INPUT_NOT_ENOUGH_STATES                     (0x00002000u)

/******************************************************/
/* Error codes dedicated to common matrix AAU         */
/******************************************************/
#define JKOBJFUSN_ERROR_COMMON_MATRIX_DIAG_ZERO                     (0x00004000u)
#define JKOBJFUSN_ERROR_COMMON_MATRIX_UNCONDITIONED                 (0x00008000u)
#define JKOBJFUSN_ERROR_COMMON_MATRIX_DET_ZERO                      (0x00004000u)

/******************************************************/
/* Error codes dedicated to  Distance Score AAU       */
/******************************************************/
#define JKOBJFUSN_ERROR_DISTANCE_SCORE_WHEIGHTS_NOT_VALID           (0x00010000u)

/******************************************************/
/* Error codes dedicated to  Gain Estimation AAU      */
/******************************************************/
#define JKOBJFUSN_ERROR_GAIN_ESTIMATION_GAIN_NOT_INITIALIZED        (0x00020000u)

/******************************************************/
/* Error codes dedicated to EgoMotion AAU             */
/******************************************************/
#define JKOBJFUSN_ERROR_EGO_MOTION_BUFFER_EMTPY                     (0x00040000u)

/******************************************************/
/* Error codes dedicated to lkf track management AAU  */
/******************************************************/
#define JKOBJFUSN_ERROR_LKF_TRACKMANAGEMENT_STATE_ERROR             (0x00080000u)
#define JKOBJFUSN_ERROR_LKF_TRACKMANAGEMENT_INVALID_MATCH_INDEX     (0x00100000u)

/******************************************************/
/* Error codes dedicated to validation management AAU */
/******************************************************/
#define JKOBJFUSN_ERROR_TRACKABLELIST_INVALID_HEADER                (0x00200000u)
#define JKOBJFUSN_ERROR_TRACKABLELIST_INVALID_OBJECT                (0x00400000u)
#define JKOBJFUSN_ERROR_TRACKABLELIST_INVALID_MAP                   (0x00800000u)

/******************************************************/
/* Error codes dedicated to sensor input */
/******************************************************/
#define JKOBJFUSN_ERROR_INVALID_OBJECT_LIST_PROVIDED                       (0x01000000u)
#define JKOBJFUSN_ERROR_INVALID_OBJECT_PROVIDED                            (0x02000000u)
#define JKOBJFUSN_ERROR_SENSOR_INPUT_OBJECTS_EXCEED_MAX_DEFAULT_OBJECTS    (0x04000000u)
#define JKOBJFUSN_ERROR_SENSOR_INPUT_TIMESTAMP_ABNORMAL                    (0x08000000u)
#define JKOBJFUSN_ERROR_SENSOR_INPUT_LATENCY_EXCEED_JK_DEFAULT             (0x10000000u)
#else
/* Run-Time pointer checking is disabled if run-time error checking is disabled */
#if defined JK_RUNTIME_POINTER_CHECK              
#undef JK_RUNTIME_POINTER_CHECK              
#else
#define JK_RUNTIME_POINTER_CHECK (STD_OFF)
#endif
#endif

#endif /** JKOBJFUSN_ERRORCODES_H_ */
