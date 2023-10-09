/*********************************************************************************
* Copyright(C) JiKa Inc. All rights reserved.
* FileName: Jk_error_management.h
* Author:  ruifeng.ding
* Version: 1.00
* Date:  2021/08/11
* Description: Header for error management AAU.
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

#ifndef JK_ERROR_MANAGEMENT_H
#define JK_ERROR_MANAGEMENT_H

#ifdef	__cplusplus
extern "C" {
#endif

/*==================[inclusions]============================================*/
#include "Jk_common_types.h"
#include "JkObjFusn_ErrorBufferType.h"

/*==================[macros]================================================*/
/*==================[type definitions]======================================*/

/*==================[forward declarations]==================================*/
/*==================[symbolic constants]====================================*/
/*==================[return codes]==========================================*/
/*==================[functions]=============================================*/

#define ObjFusn_START_SEC_SLOW_CODE
#include "ObjFusn_MemMap.h"
/**
*  @brief Inits the error management AAU
*
*  @return void
*/
void jk_error_management_init(void);

/**
*  @brief increments age counter of each valid error item
*
*  This function should be called within pre-cycle routine to ensure the age of each existing error is 
*  incremented.
*
*  @return JKOBJFUSN_ERROR_NOERROR or corresponding error code
*/

uint32 jk_error_management_incrementAge(void);


/**
*  @brief  Removes all error items with u16Age > @ref JK_ERROR_MANAGEMENT_MAX_ERROR_AGE
*
*  This function should be called within the finalize cycle to remove all error items that occured 
*  @ref JK_ERROR_MANAGEMENT_MAX_ERROR_AGE cycles ago
*
*  @return JKOBJFUSN_ERROR_NOERROR or corresponding error code
*/

uint32 jk_error_management_clearBuffer(void);


/**
*  @brief  Adds a new error to the error buffer
*
*  This function adds a new error to the buffer by setting the item pointed by @ref u16NextWriteIdx.
*  In case the buffer is full, the 'oldest' item(s) are removed by calling the function @ref jk_error_management_clearObsoleteErrors
*
*  @param   u32Error, const u32_t Error Code
*  @param   u8AAU, const u8_t AAU Code
*  @param   u8Function, const u8_t Function Code
*
*  @return  JKOBJFUSN_ERROR_NOERROR or corresponding error code
*/

#if JK_RUNTIME_ERROR_CHECK == STD_ON

FUNC(uint32, ObjFusn_CODE) jk_error_management_addError(const uint32 u32Error, const uint8 u8AAU, const uint8 u8Function);

#endif


/**
*  @brief  Copy internal buffer to provided pointer
*
*  @param   pBuffer, JkObjFusn_ErrorBufferType * const  Pointer to output structure.
*
*  @return  JKOBJFUSN_ERROR_NOERROR or corresponding error code
*/

FUNC(uint32, ObjFusn_CODE) jk_error_management_copyBuffer(CONSTP2VAR(JkObjFusn_ErrorBufferType, AUTOMATIC, ObjFusn_VAR_NOINIT) pBuffer);


#define ObjFusn_STOP_SEC_SLOW_CODE
#include "ObjFusn_MemMap.h"

/*==================[external function declarations]========================*/
/*==================[external constants]====================================*/
/*==================[external data]=========================================*/

#ifdef	__cplusplus
}
#endif

#endif /* JK_ERROR_MANAGEMENT_H */
/**@}==================[end of file]===========================================*/
