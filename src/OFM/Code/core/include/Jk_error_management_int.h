/*********************************************************************************
* Copyright(C) JiKa Inc. All rights reserved.
* FileName: Jk_error_management_int.h
* Author:  ruifeng.ding
* Version: 1.00
* Date:  2021/08/11
* Description: Internal header for error management AAU.
* Others:
* Function List:
    1.¡­¡­¡­¡­
    2.¡­¡­¡­¡­
* History: 
    1.Date:
      Author:
      Modification:
    2.¡­¡­¡­¡­
**********************************************************************************/

#ifndef JK_ERROR_MANAGEMENT_INT_H
#define JK_ERROR_MANAGEMENT_INT_H

#ifdef	__cplusplus
extern "C" {
#endif

/*==================[inclusions]============================================*/
#include "Jk_common_types.h"
#include "JkObjFusn_ErrorBufferType.h"

/*==================[macros]================================================*/
/** 
 * Determines if AAU is not initialized
 */
#define JK_ERROR_MANAGEMENT_STATE_NOT_INITIALIZED         (0x00u)

/** 
 * Determines if AAU is initialized
 */
#define JK_ERROR_MANAGEMENT_STATE_INITIALIZED            (0x01u)

/** 
 * New error is initialized with Age zero 
 */
#define JK_ERROR_MANAGEMENT_U16AGE_NEW                    (0u)

/** 
 * Indicates empty error management buffer
 */
#define JK_ERROR_MANAGEMENT_BUFFER_SIZE_EMPTY             (0u)


/*==================[type definitions]======================================*/

/*==================[forward declarations]==================================*/
/*==================[symbolic constants]====================================*/
/*==================[return codes]==========================================*/
/*==================[functions]=============================================*/

/**
* @brief  Inits an JkObjFusn_ErrorType item to default values
*
* @param    pErrorItem, JkObjFusn_ErrorType * const  item to be initialized
* @return JKOBJFUSN_ERROR_NOERROR or corresponding error code
*/
#define ObjFusn_START_SEC_CODE
#include "ObjFusn_MemMap.h"
LOCAL FUNC(uint32, ObjFusn_CODE) jk_error_management_initErrorItem(CONSTP2VAR(JkObjFusn_ErrorType, AUTOMATIC, ObjFusn_VAR_NOINIT) pErrorItem);
#define ObjFusn_STOP_SEC_CODE
#include "ObjFusn_MemMap.h"

/**
* @brief  Updates wite index to next free item. 
*
* @return JKOBJFUSN_ERROR_NOERROR or corresponding error code
*/
#if JK_RUNTIME_ERROR_CHECK == STD_ON
#define ObjFusn_START_SEC_CODE
#include "ObjFusn_MemMap.h"
LOCAL FUNC(uint32, ObjFusn_CODE) jk_error_management_updateWriteIndex(void);
#define ObjFusn_STOP_SEC_CODE
#include "ObjFusn_MemMap.h"
#endif

/**
* @brief  Checks if provided error with has already been saved in current cycle
*
* @return TRUE if error is found in buffer with Age zero and FALSE otherwise
*/
#define ObjFusn_START_SEC_CODE
#include "ObjFusn_MemMap.h"
LOCAL FUNC(boolean, ObjFusn_CODE) jk_error_management_containsError(const uint32 u32Error, const uint8 u8AAU, const uint8 u8Function);
#define ObjFusn_STOP_SEC_CODE
#include "ObjFusn_MemMap.h"

#ifdef UNITTEST
/**
* @brief  Returns pointer to error buffer. 
*
* @return Address of error buffer structure. 
*/
JkObjFusn_ErrorBufferType * jk_error_management_getErrorBuffer(void);
#endif


/*==================[external function declarations]========================*/
/*==================[external constants]====================================*/
/*==================[external data]=========================================*/

#ifdef	__cplusplus
}
#endif

#endif /* JK_ERROR_MANAGEMENT_H */
/**@}==================[end of file]===========================================*/
