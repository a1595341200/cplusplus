/*********************************************************************************
* Copyright(C) JiKa Inc. All rights reserved.
* FileName: Jk_error_management.c
* Author:  ruifeng.ding
* Version: 1.00
* Date:  2021/08/11
* Description: Implementation file for error management AAU.
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

/*==================[inclusions]============================================*/
#include "Jk_common_types.h"
#include "JkObjFusn_ConfigVehicle.h"
#include "JkObjFusn_ConfigAlgorithm.h"
#include "JkObjFusn_ErrorCodes.h"
#include "Jk_error_management.h"
#include "Jk_error_management_int.h"
#include "Jk_fusion_math.h"
#include "Jk_fusion_memory.h"


#ifdef JK_DEBUG_OUTPUT
#include "support/debug/debug.h"
#endif

/*==================[macros]================================================*/
/*==================[type definitions]======================================*/

/*==================[static variables]====================================*/


#define ObjFusn_START_SEC_VAR8
#include "ObjFusn_MemMap.h"
/* PRQA S 3218 2 */
/* PRQA S 3229 1 */ /* variable may be accessed depending on run-time pointer check activation */
LOCAL VAR(uint8, ObjFusn_VAR_ZERO_INIT) s_u8ErrorManagementState = JK_ERROR_MANAGEMENT_STATE_NOT_INITIALIZED;
#define ObjFusn_STOP_SEC_VAR8
#include "ObjFusn_MemMap.h"

#define ObjFusn_START_SEC_VAR_UNSPECIFIED
#include "ObjFusn_MemMap.h"
LOCAL VAR(JkObjFusn_ErrorBufferType, ObjFusn_VAR_ZERO_INIT) stErrorManagementBuffer = { { { 0 } }, 0u, 0u };
#define ObjFusn_STOP_SEC_VAR_UNSPECIFIED
#include "ObjFusn_MemMap.h"
/*==================[forward declarations]==================================*/


/*==================[symbolic constants]====================================*/
/*==================[functions]============================================*/

#define ObjFusn_START_SEC_SLOW_CODE
#include "ObjFusn_MemMap.h"
/* PRQA S 1532 2 *//* Function called by external AAU */
FUNC(void, ObjFusn_CODE) jk_error_management_init(void)
{
   uint16 u16i;
   P2VAR(JkObjFusn_ErrorType, AUTOMATIC, ObjFusn_VAR_NOINIT) pError;
   
   stErrorManagementBuffer.u16NextWriteIdx = 0u;
   stErrorManagementBuffer.u16NumOfItems = 0u;

   for (u16i = 0u; u16i < JK_ERROR_MANAGEMENT_BUFFER_SIZE; u16i++)
   {
      pError = &stErrorManagementBuffer.aErrorBuffer[u16i];
      (void)jk_error_management_initErrorItem(pError);
   }

    s_u8ErrorManagementState = JK_ERROR_MANAGEMENT_STATE_INITIALIZED;

}

LOCAL FUNC(uint32, ObjFusn_CODE) jk_error_management_initErrorItem(CONSTP2VAR(JkObjFusn_ErrorType, AUTOMATIC, ObjFusn_VAR_NOINIT) pErrorItem)
{
   uint32 u32Success = JKOBJFUSN_ERROR_NOERROR;   /* PRQA S 3204 1 *//* variable may be set to other values depending on run-time pointer check activation */

#if (JK_RUNTIME_POINTER_CHECK == STD_ON)
   if (NULL_PTR == pErrorItem)
   {
      u32Success = JKOBJFUSN_ERROR_NULL_POINTER_EXCEPTION;
   }
   else
#endif
   {
      pErrorItem->u16Age           = JKOBJFUSN_ERRORBUFFER_U16AGE_DEFAULT;
      pErrorItem->u32ErrorCode     = JKOBJFUSN_ERRORBUFFER_U32ERRORCODE_DEFAULT;
      pErrorItem->u8AAU_Code       = JKOBJFUSN_ERRORBUFFER_U8AAUCODE_DEFAULT;
      pErrorItem->u8FunctionCode   = JKOBJFUSN_ERRORBUFFER_U8FUNCTIONCODE_DEFAULT;
   }

   return u32Success;
}

/* PRQA S 1532 2 *//* Function called by external AAU */
FUNC(uint32, ObjFusn_CODE) jk_error_management_incrementAge(void)
{
   uint32 u32Success = JKOBJFUSN_ERROR_NOERROR;   /* PRQA S 3204 1 *//* variable may be set to other values depending on run-time check activation */
   uint16 u16i;

#if (JK_RUNTIME_ERROR_CHECK == STD_ON)
   if (JK_ERROR_MANAGEMENT_STATE_NOT_INITIALIZED == s_u8ErrorManagementState)
   {
      u32Success = JKOBJFUSN_ERROR_AAU_NOT_INITIALIZED;
   }
   else if (stErrorManagementBuffer.u16NumOfItems > JK_ERROR_MANAGEMENT_BUFFER_SIZE)
   {
      u32Success = JKOBJFUSN_ERROR_NUMBER_OF_OBJECTS_EXCEEDS_MAXIMUM_SIZE;
   }
   else
#endif
   {
      for (u16i = 0u; u16i < JK_ERROR_MANAGEMENT_BUFFER_SIZE; u16i++)
      {
         if (stErrorManagementBuffer.aErrorBuffer[u16i].u16Age < JK_ERROR_MANAGEMENT_MAX_ERROR_AGE)
         {
            stErrorManagementBuffer.aErrorBuffer[u16i].u16Age++;
         }
         else
         {
            /* MISRA */
         }
      }
   }

   return u32Success;
}

/* PRQA S 1532 2 *//* Function called by external AAU */
FUNC(uint32, ObjFusn_CODE) jk_error_management_clearBuffer(void)
{
   uint32 u32Success = JKOBJFUSN_ERROR_NOERROR;
   uint16 u16i;
   uint16 u16NumElements = 0u;
   P2VAR(JkObjFusn_ErrorType, AUTOMATIC, ObjFusn_VAR_NOINIT) pCurrItem;

#if (JK_RUNTIME_ERROR_CHECK == STD_ON)
   if (JK_ERROR_MANAGEMENT_STATE_NOT_INITIALIZED == s_u8ErrorManagementState)
   {
      u32Success = JKOBJFUSN_ERROR_AAU_NOT_INITIALIZED;
   }
   else if (stErrorManagementBuffer.u16NumOfItems > JK_ERROR_MANAGEMENT_BUFFER_SIZE)
   {
      u32Success = JKOBJFUSN_ERROR_NUMBER_OF_OBJECTS_EXCEEDS_MAXIMUM_SIZE;
   }
   else
#endif
   {
      for (u16i = 0u; u16i < JK_ERROR_MANAGEMENT_BUFFER_SIZE; u16i++)
      {
         pCurrItem = &((stErrorManagementBuffer.aErrorBuffer)[u16i]);

         if ((pCurrItem->u16Age) < JK_ERROR_MANAGEMENT_MAX_ERROR_AGE)
         {
            u16NumElements++;
         }
         else if ((pCurrItem->u16Age) == JK_ERROR_MANAGEMENT_MAX_ERROR_AGE)
         {
            u32Success |= jk_error_management_initErrorItem(pCurrItem);
         }
         else
         {
            /* MISRA */
         }
      }

      if (JK_ERROR_MANAGEMENT_BUFFER_SIZE_EMPTY == u16NumElements)
      {
         stErrorManagementBuffer.u16NextWriteIdx = 0u;
      }
      else
      {
         /* MISRA */
      }
      
      stErrorManagementBuffer.u16NumOfItems = u16NumElements;
   }

   return u32Success;
}

#if JK_RUNTIME_ERROR_CHECK == STD_ON
FUNC(uint32, ObjFusn_CODE) jk_error_management_addError(const uint32 u32Error, const uint8 u8AAU, const uint8 u8Function)
{
   uint32   u32Success              = JKOBJFUSN_ERROR_NOERROR;
   const    uint32  u16WriteIndex  = stErrorManagementBuffer.u16NextWriteIdx;
   P2VAR(JkObjFusn_ErrorType, AUTOMATIC, ObjFusn_VAR_NOINIT) pCurrError;

#if (JK_RUNTIME_ERROR_CHECK == STD_ON)
   const    boolean bErrorInBuffer = jk_error_management_containsError(u32Error, u8AAU, u8Function);

   if ((JKOBJFUSN_ERROR_NOERROR == u32Error) || (u8AAU == 0x00u) || (u8Function == 0x00u))
   {
      u32Success = JKOBJFUSN_ERROR_INVALID_INPUT;
   }
   else if ((stErrorManagementBuffer.u16NumOfItems) > JK_ERROR_MANAGEMENT_BUFFER_SIZE)
   {
      u32Success = JKOBJFUSN_ERROR_NUMBER_OF_OBJECTS_EXCEEDS_MAXIMUM_SIZE;
   }
   else if (TRUE == bErrorInBuffer)
   {
      /* Do not store duplicate errors */
     
   }
   else
#endif
   {
#ifdef JK_DEBUG_OUTPUT
      const uint16 u16AauCode = ((u8AAU << 8u) | u8Function);

      DEBUG_LOG( "ObjFus AAU/Function: 0x%x ErrCode: 0x%x" NEWLINE, u16AauCode, u32Error);
#endif
      pCurrError = &((stErrorManagementBuffer.aErrorBuffer)[u16WriteIndex]);

         /* Write index valid, insert new error */
         pCurrError->u16Age = JK_ERROR_MANAGEMENT_U16AGE_NEW;
         pCurrError->u32ErrorCode = u32Error;
         pCurrError->u8AAU_Code = u8AAU;
         pCurrError->u8FunctionCode = u8Function;

         stErrorManagementBuffer.u16NumOfItems = jk_fusion_min_U16(JK_ERROR_MANAGEMENT_BUFFER_SIZE,
            stErrorManagementBuffer.u16NumOfItems + 1u);
         
         u32Success |= jk_error_management_updateWriteIndex();

   }

   return u32Success;
}
#endif

#if JK_RUNTIME_ERROR_CHECK == STD_ON
LOCAL FUNC(uint32, ObjFusn_CODE) jk_error_management_updateWriteIndex(void)
{
   uint32 u32Success = JKOBJFUSN_ERROR_NOERROR;
   const uint16 u16WriteIndex = stErrorManagementBuffer.u16NextWriteIdx;

   if (stErrorManagementBuffer.u16NumOfItems > JK_ERROR_MANAGEMENT_BUFFER_SIZE)
   {
      u32Success = JKOBJFUSN_ERROR_NUMBER_OF_OBJECTS_EXCEEDS_MAXIMUM_SIZE;
   }
   else if (stErrorManagementBuffer.u16NumOfItems == JK_ERROR_MANAGEMENT_BUFFER_SIZE_EMPTY)
   {
      stErrorManagementBuffer.u16NextWriteIdx = 0u;
   }
   else
   {
      stErrorManagementBuffer.u16NextWriteIdx = (u16WriteIndex + 1u) % JK_ERROR_MANAGEMENT_BUFFER_SIZE;
   }

   return u32Success;
}
#endif

/* PRQA S 1532 2 *//* Function called by external AAU */
FUNC(uint32, ObjFusn_CODE) jk_error_management_copyBuffer(CONSTP2VAR(JkObjFusn_ErrorBufferType, AUTOMATIC, ObjFusn_VAR_NOINIT) pBuffer)
{
   uint32 u32Success = JKOBJFUSN_ERROR_NOERROR;   /* PRQA S 3204 1 *//* variable may be set to other values depending on run-time check activation */
   const uint32 u32Size = (uint32) sizeof(JkObjFusn_ErrorBufferType);

#if (JK_RUNTIME_ERROR_CHECK == STD_ON)
#if (JK_RUNTIME_POINTER_CHECK == STD_ON)
   if (NULL_PTR == pBuffer)
   {
      u32Success = JKOBJFUSN_ERROR_NULL_POINTER_EXCEPTION;
   }
   else
#endif
   if (stErrorManagementBuffer.u16NumOfItems > JKOBJFUSN_ERRORBUFFER_U16NUMOFITEMS_MAX)
   {
      u32Success = JKOBJFUSN_ERROR_NUMBER_OF_OBJECTS_EXCEEDS_MAXIMUM_SIZE;
   }
   else if (stErrorManagementBuffer.u16NextWriteIdx > JKOBJFUSN_ERRORBUFFER_U16NEXTWRITEIDX_MAX)
   {
      u32Success = JKOBJFUSN_ERROR_INTERNAL_ERROR;
   }
   else
#endif
   {
      /* PRQA S 0314 1 *//* Cast to void required for copy function */
      jk_fusion_memcpy((void *)pBuffer, (void *)&stErrorManagementBuffer, u32Size);
   }

   return u32Success;
}

#if (JK_RUNTIME_ERROR_CHECK == STD_ON)
LOCAL FUNC(boolean, ObjFusn_CODE) jk_error_management_containsError(const uint32 u32Error, const uint8 u8AAU, const uint8 u8Function)
{
   boolean bFound = FALSE;
   uint16  u16i;
   P2VAR(JkObjFusn_ErrorType, AUTOMATIC, ObjFusn_VAR_NOINIT) pCurrError;

   for (u16i = 0u; u16i < JK_ERROR_MANAGEMENT_BUFFER_SIZE; u16i++)
   {
      if (FALSE == bFound)
      {
         pCurrError = &stErrorManagementBuffer.aErrorBuffer[u16i];
         if ((pCurrError->u32ErrorCode == u32Error) && (pCurrError->u8AAU_Code == u8AAU) &&
             (pCurrError->u8FunctionCode == u8Function) )
         {
            bFound = TRUE;

            pCurrError->u16Age = JK_ERROR_MANAGEMENT_U16AGE_NEW;

         }
         else
         {
            /* MISRA */
         }
      }
      else
      {
         /* MISRA */
      }
   }

   return bFound;
}
#endif

#define ObjFusn_STOP_SEC_SLOW_CODE
#include "ObjFusn_MemMap.h"

#ifdef UNITTEST
JkObjFusn_ErrorBufferType * jk_error_management_getErrorBuffer(void)
{  
   return &stErrorManagementBuffer;
}
#endif

/**
* \}
*/
