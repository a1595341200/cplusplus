/*********************************************************************************
* Copyright(C) JiKa Inc. All rights reserved.
* FileName: Jk_validation_management.c
* Author:  ruifeng.ding
* Version: 1.00
* Date:  2021/08/11
* Description:
* Others:
* Function List:
    1.��������
    2.��������
* History: 
    1.Date:
      Author:
      Modification:
    2.��������
**********************************************************************************/ 

/*==================[inclusions]============================================*/

#include "Jk_validation_management.h"
#include "Jk_validation_management_int.h"
#include "Jk_common_array_utils.h"
#include "JkObjFusn_ParameterInterface.h"
#include "JkObjFusn_ErrorCodes.h"
#include "JkObjFusn_AAU_Codes.h"
#include "Jk_error_management.h"
#include "Jk_fusion_tools.h"
#include "Jk_fusion_math.h"
#include "JkObjFusn_TrackableConstants.h"
#include "JkObjFusn_TrackableListProps.h"
#include "JkObjFusn_TrackableProps.h"
#include "JkObjFusn_ObjectListProps.h"

/*****************************************************************************
FUNCTIONS
*****************************************************************************/

/**
* @fn   bool_t Trackable_validateTrackable(JkObjFusn_TrackableType const * const pTrackable)
*
* @brief     Validate trackable by checking all fields to be within defined ranges. 
*
* @param   pTrackable    JkObjFusn_TrackableType const * const, Trackable
*
* @return  TRUE (trackable list valid) or FALSE (trackable list not valid)
*/
/* PRQA S 1505 2*//* library function */
#define ObjFusn_START_SEC_CODE
#include "ObjFusn_MemMap.h"
/* PRQA S 3206 ++ */ /* argument may be set to other values depending on run-time check activation */
LOCAL FUNC(uint32, ObjFusn_CODE) jk_validate_trackable(CONSTP2CONST(JkObjFusn_TrackableType, AUTOMATIC, ObjFusn_VAR_NOINIT) pTrackable)
{
   uint32 u32Success = JKOBJFUSN_ERROR_NOERROR;   /* PRQA S 3204 1 *//* variable may be set to other values depending on run-time check activation */

#if (JK_RUNTIME_ERROR_CHECK == STD_ON)
#if (JK_RUNTIME_POINTER_CHECK == STD_ON)
   if (NULL_PTR == pTrackable)
   {
      u32Success = JKOBJFUSN_ERROR_NULL_POINTER_EXCEPTION;
      (void) jk_error_management_addError(u32Success, JKOBJFUSN_AAU_VALIDATION_MANAGEMENT,
         JKOBJFUSN_AAU_VALIDATION_MANAGEMENT_VALIDATE_TRACKABLE);
   }
   else
#endif
   {
#if (STD_ON == JKOBJFUSN_TRACKABLE_U16ID_FILLEDBYFUSION)
      if (
#if (JKOBJFUSN_TRACKABLE_U16ID_MIN > 0u)
          (pTrackable->u16ID < JKOBJFUSN_TRACKABLE_U16ID_MIN) ||
#endif
          (pTrackable->u16ID > JKOBJFUSN_TRACKABLE_U16ID_MAX))
      {
         u32Success = JKOBJFUSN_ERROR_TRACKABLELIST_INVALID_OBJECT;
      }
      else
      {
         /** MISRA */
      }
#endif  
#if (STD_ON == JKOBJFUSN_TRACKABLE_U16LIFESPAN_FILLEDBYFUSION)
      if (
#if (JKOBJFUSN_TRACKABLE_U16LIFESPAN_MIN > 0u)
          (pTrackable->u16Lifespan < JKOBJFUSN_TRACKABLE_U16LIFESPAN_MIN) ||
#endif
          (pTrackable->u16Lifespan > JKOBJFUSN_TRACKABLE_U16LIFESPAN_MAX))
      {
         u32Success = JKOBJFUSN_ERROR_TRACKABLELIST_INVALID_OBJECT;
      }
      else
      {
         /** MISRA */
      }
#endif
#if (STD_ON == JKOBJFUSN_TRACKABLE_U16AGE_FILLEDBYFUSION)
      if (
#if (JKOBJFUSN_TRACKABLE_U16AGE_MIN > 0u)
          (pTrackable->u16Age < JKOBJFUSN_TRACKABLE_U16AGE_MIN) ||
#endif
          (pTrackable->u16Age > JKOBJFUSN_TRACKABLE_U16AGE_MAX))
      {
         u32Success = JKOBJFUSN_ERROR_TRACKABLELIST_INVALID_OBJECT;
      }
      else
      {
         /** MISRA */
      }
#endif 
#if (STD_ON == JKOBJFUSN_TRACKABLE_S16QUALITY_FILLEDBYFUSION)
      if ((pTrackable->s16Quality < JKOBJFUSN_TRACKABLE_S16QUALITY_MIN) ||
          (pTrackable->s16Quality > JKOBJFUSN_TRACKABLE_S16QUALITY_MAX))
      {
         u32Success = JKOBJFUSN_ERROR_TRACKABLELIST_INVALID_OBJECT;
      }
      else
      {
         /** MISRA */
      }
#endif
#if (STD_ON == JKOBJFUSN_TRACKABLE_U32SENSORSCURR_FILLEDBYFUSION)
      if (
#if (JKOBJFUSN_TRACKABLE_U32SENSORSCURR_MIN > 0u)
          (pTrackable->u32SensorsCurr < JKOBJFUSN_TRACKABLE_U32SENSORSCURR_MIN) ||
#endif
          (pTrackable->u32SensorsCurr > JKOBJFUSN_TRACKABLE_U32SENSORSCURR_MAX))
      {
         u32Success = JKOBJFUSN_ERROR_TRACKABLELIST_INVALID_OBJECT;
      }
      else
      {
         /** MISRA */
      }
#endif 
#if (STD_ON == JKOBJFUSN_TRACKABLE_U32SENSORSHIST_FILLEDBYFUSION)
      if (
#if (JKOBJFUSN_TRACKABLE_U32SENSORSHIST_MIN > 0u)
          (pTrackable->u32SensorsHist < JKOBJFUSN_TRACKABLE_U32SENSORSHIST_MIN) ||
#endif
          (pTrackable->u32SensorsHist > JKOBJFUSN_TRACKABLE_U32SENSORSHIST_MAX))
      {
         u32Success = JKOBJFUSN_ERROR_TRACKABLELIST_INVALID_OBJECT;
      }
      else
      {
         /** MISRA */
      }
#endif
#if (STD_ON == JKOBJFUSN_TRACKABLE_F32POSX_FILLEDBYFUSION)
      if (((pTrackable->vecX.data[TRACKABLE_POSX]) < JKOBJFUSN_TRACKABLE_F32POSX_MIN) || 
          ((pTrackable->vecX.data[TRACKABLE_POSX]) > JKOBJFUSN_TRACKABLE_F32POSX_MAX))
      {
         u32Success = JKOBJFUSN_ERROR_TRACKABLELIST_INVALID_OBJECT;
      }
      else
      {
         /** MISRA */
      }
#endif 
#if (STD_ON == JKOBJFUSN_TRACKABLE_F32POSY_FILLEDBYFUSION)
      if (((pTrackable->vecX.data[TRACKABLE_POSY]) < JKOBJFUSN_TRACKABLE_F32POSY_MIN) || 
          ((pTrackable->vecX.data[TRACKABLE_POSY]) > JKOBJFUSN_TRACKABLE_F32POSY_MAX))
      {
         u32Success = JKOBJFUSN_ERROR_TRACKABLELIST_INVALID_OBJECT;
      }
      else
      {
         /** MISRA */
      }
#endif 
#if (STD_ON == JKOBJFUSN_TRACKABLE_F32POSVARX_FILLEDBYFUSION)
      if (((pTrackable->matP.data[TRACKABLE_INDEX_VARIANCE_POSX]) < JKOBJFUSN_TRACKABLE_F32POSVARX_MIN) || 
          ((pTrackable->matP.data[TRACKABLE_INDEX_VARIANCE_POSX]) > JKOBJFUSN_TRACKABLE_F32POSVARX_MAX))
      {
         u32Success = JKOBJFUSN_ERROR_TRACKABLELIST_INVALID_OBJECT;
      }
      else
      {
         /** MISRA */
      }
#endif 
#if (STD_ON == JKOBJFUSN_TRACKABLE_F32POSVARY_FILLEDBYFUSION)
      if (((pTrackable->matP.data[TRACKABLE_INDEX_VARIANCE_POSY]) < JKOBJFUSN_TRACKABLE_F32POSVARY_MIN) || 
          ((pTrackable->matP.data[TRACKABLE_INDEX_VARIANCE_POSY]) > JKOBJFUSN_TRACKABLE_F32POSVARY_MAX))
      {
         u32Success = JKOBJFUSN_ERROR_TRACKABLELIST_INVALID_OBJECT;
      }   
      else
      {
         /** MISRA */
      }
#endif 
#if (STD_ON == JKOBJFUSN_TRACKABLE_F32POSCOVXY_FILLEDBYFUSION)
      if (((pTrackable->matP.data[TRACKABLE_INDEX_COVARIANCE_POSX_POSY]) < JKOBJFUSN_TRACKABLE_F32POSCOVXY_MIN) ||
          ((pTrackable->matP.data[TRACKABLE_INDEX_COVARIANCE_POSX_POSY]) > JKOBJFUSN_TRACKABLE_F32POSCOVXY_MAX))
      {
         u32Success = JKOBJFUSN_ERROR_TRACKABLELIST_INVALID_OBJECT;
      }
      else
      {
         /** MISRA */
      }
#endif
#if (STD_ON == JKOBJFUSN_TRACKABLE_F32VELX_FILLEDBYFUSION)
      if (((pTrackable->vecX.data[TRACKABLE_VELX]) < JKOBJFUSN_TRACKABLE_F32VELX_MIN) || 
          ((pTrackable->vecX.data[TRACKABLE_VELX]) > JKOBJFUSN_TRACKABLE_F32VELX_MAX))
      {
         u32Success = JKOBJFUSN_ERROR_TRACKABLELIST_INVALID_OBJECT;
      }
      else
      {
         /** MISRA */
      }
#endif
#if (STD_ON == JKOBJFUSN_TRACKABLE_F32VELY_FILLEDBYFUSION)
      if (((pTrackable->vecX.data[TRACKABLE_VELY]) < JKOBJFUSN_TRACKABLE_F32VELY_MIN) || 
          ((pTrackable->vecX.data[TRACKABLE_VELY]) > JKOBJFUSN_TRACKABLE_F32VELY_MAX))
      {
         u32Success = JKOBJFUSN_ERROR_TRACKABLELIST_INVALID_OBJECT;
      }
      else
      {
         /** MISRA */
      }

#endif
#if (STD_ON == JKOBJFUSN_TRACKABLE_F32VELVARX_FILLEDBYFUSION)
      if (((pTrackable->matP.data[TRACKABLE_INDEX_VARIANCE_VELX]) < JKOBJFUSN_TRACKABLE_F32VELVARX_MIN) || 
          ((pTrackable->matP.data[TRACKABLE_INDEX_VARIANCE_VELX]) > JKOBJFUSN_TRACKABLE_F32VELVARX_MAX))
      {
         u32Success = JKOBJFUSN_ERROR_TRACKABLELIST_INVALID_OBJECT;
      }
      else
      {
         /** MISRA */
      }
#endif
#if (STD_ON == JKOBJFUSN_TRACKABLE_F32VELVARY_FILLEDBYFUSION)
      if (((pTrackable->matP.data[TRACKABLE_INDEX_VARIANCE_VELY]) < JKOBJFUSN_TRACKABLE_F32VELVARY_MIN) || 
          ((pTrackable->matP.data[TRACKABLE_INDEX_VARIANCE_VELY]) > JKOBJFUSN_TRACKABLE_F32VELVARY_MAX))
      {
         u32Success = JKOBJFUSN_ERROR_TRACKABLELIST_INVALID_OBJECT;
      }
      else
      {
         /** MISRA */
      }
#endif
#if (STD_ON == JKOBJFUSN_TRACKABLE_F32VELCOVXY_FILLEDBYFUSION)
      if (((pTrackable->matP.data[TRACKABLE_INDEX_COVARIANCE_VELX_VELY]) < JKOBJFUSN_TRACKABLE_F32VELCOVXY_MIN) || 
          ((pTrackable->matP.data[TRACKABLE_INDEX_COVARIANCE_VELX_VELY]) > JKOBJFUSN_TRACKABLE_F32VELCOVXY_MAX))
      {
         u32Success = JKOBJFUSN_ERROR_TRACKABLELIST_INVALID_OBJECT;
      }
      else
      {
         /** MISRA */
      }
#endif
#if (STD_ON == JKOBJFUSN_TRACKABLE_F32ACCX_FILLEDBYFUSION)
      if (((pTrackable->vecX.data[TRACKABLE_ACCX]) < JKOBJFUSN_TRACKABLE_F32ACCX_MIN) || 
          ((pTrackable->vecX.data[TRACKABLE_ACCX]) > JKOBJFUSN_TRACKABLE_F32ACCX_MAX))
      {
         u32Success = JKOBJFUSN_ERROR_TRACKABLELIST_INVALID_OBJECT;
      }
      else
      {
         /** MISRA */
      }
#endif
#if (STD_ON == JKOBJFUSN_TRACKABLE_F32ACCY_FILLEDBYFUSION)
      if (((pTrackable->vecX.data[TRACKABLE_ACCY]) < JKOBJFUSN_TRACKABLE_F32ACCY_MIN) || 
          ((pTrackable->vecX.data[TRACKABLE_ACCY]) > JKOBJFUSN_TRACKABLE_F32ACCY_MAX))
      {
         u32Success = JKOBJFUSN_ERROR_TRACKABLELIST_INVALID_OBJECT;
      }
      else
      {
         /** MISRA */
      }
#endif
#if (STD_ON == JKOBJFUSN_TRACKABLE_F32ACCVARX_FILLEDBYFUSION)
      if (((pTrackable->matP.data[TRACKABLE_INDEX_VARIANCE_ACCX]) < JKOBJFUSN_TRACKABLE_F32ACCVARX_MIN) || 
          ((pTrackable->matP.data[TRACKABLE_INDEX_VARIANCE_ACCX]) > JKOBJFUSN_TRACKABLE_F32ACCVARX_MAX))
      {
         u32Success = JKOBJFUSN_ERROR_TRACKABLELIST_INVALID_OBJECT;
      }
      else
      {
         /** MISRA */
      }
#endif
#if (STD_ON == JKOBJFUSN_TRACKABLE_F32ACCVARY_FILLEDBYFUSION)
      if (((pTrackable->matP.data[TRACKABLE_INDEX_VARIANCE_ACCY]) < JKOBJFUSN_TRACKABLE_F32ACCVARY_MIN) || 
          ((pTrackable->matP.data[TRACKABLE_INDEX_VARIANCE_ACCY]) > JKOBJFUSN_TRACKABLE_F32ACCVARY_MAX))
      {
         u32Success = JKOBJFUSN_ERROR_TRACKABLELIST_INVALID_OBJECT;
      }
      else
      {
         /** MISRA */
      }
#endif
#if (STD_ON == JKOBJFUSN_TRACKABLE_F32ACCCOVXY_FILLEDBYFUSION)
      if (((pTrackable->matP.data[TRACKABLE_INDEX_COVARIANCE_ACCX_ACCY]) < JKOBJFUSN_TRACKABLE_F32ACCCOVXY_MIN) || 
          ((pTrackable->matP.data[TRACKABLE_INDEX_COVARIANCE_ACCX_ACCY]) > JKOBJFUSN_TRACKABLE_F32ACCCOVXY_MAX))
      {
         u32Success = JKOBJFUSN_ERROR_TRACKABLELIST_INVALID_OBJECT;
      }
      else
      {
         /** MISRA */
      }
#endif
#if (STD_ON == JKOBJFUSN_TRACKABLE_F32WIDTH_FILLEDBYFUSION)
      if ((pTrackable->f32Width < JKOBJFUSN_TRACKABLE_F32WIDTH_MIN) || 
          (pTrackable->f32Width > JKOBJFUSN_TRACKABLE_F32WIDTH_MAX))
      {
         u32Success = JKOBJFUSN_ERROR_TRACKABLELIST_INVALID_OBJECT;
      }
      else
      {
         /** MISRA */
      }
#endif
#if (STD_ON == JKOBJFUSN_TRACKABLE_F32LENGTH_FILLEDBYFUSION)
      if ((pTrackable->f32Length < JKOBJFUSN_TRACKABLE_F32LENGTH_MIN) || 
          (pTrackable->f32Length > JKOBJFUSN_TRACKABLE_F32LENGTH_MAX))
      {
         u32Success = JKOBJFUSN_ERROR_TRACKABLELIST_INVALID_OBJECT;
      }
      else
      {
         /** MISRA */
      }
#endif
#if (STD_ON == JKOBJFUSN_TRACKABLE_F32HEIGHT_FILLEDBYFUSION)
      if ((pTrackable->f32Height < JKOBJFUSN_TRACKABLE_F32HEIGHT_MIN) || 
          (pTrackable->f32Height > JKOBJFUSN_TRACKABLE_F32HEIGHT_MAX))
      {
         u32Success = JKOBJFUSN_ERROR_TRACKABLELIST_INVALID_OBJECT;
      }
      else
      {
         /** MISRA */
      }
#endif
#if (STD_ON == JKOBJFUSN_TRACKABLE_F32HEADING_FILLEDBYFUSION)
      if ((pTrackable->f32Heading < JKOBJFUSN_TRACKABLE_F32HEADING_MIN) || 
          (pTrackable->f32Heading > JKOBJFUSN_TRACKABLE_F32HEADING_MAX))
      {
         u32Success = JKOBJFUSN_ERROR_TRACKABLELIST_INVALID_OBJECT;
      }
      else
      {
         /** MISRA */
      }
#endif
#if (STD_ON == JKOBJFUSN_TRACKABLE_F32HEADINGVAR_FILLEDBYFUSION)
      if ((pTrackable->f32HeadingVar < JKOBJFUSN_TRACKABLE_F32HEADINGVAR_MIN) || 
          (pTrackable->f32HeadingVar > JKOBJFUSN_TRACKABLE_F32HEADINGVAR_MAX))
      {
         u32Success = JKOBJFUSN_ERROR_TRACKABLELIST_INVALID_OBJECT;
      }
      else
      {
         /** MISRA */
      }
#endif
#if (STD_ON == JKOBJFUSN_TRACKABLE_F32YAWRATE_FILLEDBYFUSION)
      if (((pTrackable->f32YawRate) < JKOBJFUSN_TRACKABLE_F32YAWRATE_MIN) || 
          ((pTrackable->f32YawRate) > JKOBJFUSN_TRACKABLE_F32YAWRATE_MAX))
      {
         u32Success = JKOBJFUSN_ERROR_TRACKABLELIST_INVALID_OBJECT;
      }
      else
      {
         /** MISRA */
      }
#endif
#if (STD_ON == JKOBJFUSN_TRACKABLE_F32YAWRATEVAR_FILLEDBYFUSION)
      if (((pTrackable->f32YawRateVar) < JKOBJFUSN_TRACKABLE_F32YAWRATEVAR_MIN) || 
          ((pTrackable->f32YawRateVar) > JKOBJFUSN_TRACKABLE_F32YAWRATEVAR_MAX))
      {
         u32Success = JKOBJFUSN_ERROR_TRACKABLELIST_INVALID_OBJECT;
      }
      else
      {
         /** MISRA */
      }
#endif
#if (STD_ON == JKOBJFUSN_TRACKABLE_F32EXISTENCEQUALITY_FILLEDBYFUSION)
      if (((pTrackable->f32ExistenceQuality) < JKOBJFUSN_TRACKABLE_F32EXISTENCEQUALITY_MIN) || 
          ((pTrackable->f32ExistenceQuality) > JKOBJFUSN_TRACKABLE_F32EXISTENCEQUALITY_MAX))
      {
         u32Success = JKOBJFUSN_ERROR_TRACKABLELIST_INVALID_OBJECT;
      }
      else
      {
         /** MISRA */
      }
#endif
#if (STD_ON == JKOBJFUSN_TRACKABLE_F32TRACKQUALITY_FILLEDBYFUSION)
      if (((pTrackable->f32TrackQuality) < JKOBJFUSN_TRACKABLE_F32TRACKQUALITY_MIN) || 
          ((pTrackable->f32TrackQuality) > JKOBJFUSN_TRACKABLE_F32TRACKQUALITY_MAX))
      {
         u32Success = JKOBJFUSN_ERROR_TRACKABLELIST_INVALID_OBJECT;
      }
      else
      {
         /** MISRA */
      }
#endif
#if (STD_ON == JKOBJFUSN_TRACKABLE_U16REFPOINT_FILLEDBYFUSION)
      if (
#if (JKOBJFUSN_TRACKABLE_U16REFPOINT_MIN > 0u)
          (pTrackable->u16RefPoint < JKOBJFUSN_TRACKABLE_U16REFPOINT_MIN) ||
#endif
          (pTrackable->u16RefPoint > JKOBJFUSN_TRACKABLE_U16REFPOINT_MAX))
      {
         u32Success = JKOBJFUSN_ERROR_TRACKABLELIST_INVALID_OBJECT;
      }
      else
      {
         /** MISRA */
      }
#endif
#if (STD_ON == JKOBJFUSN_TRACKABLE_U16MOTIONTYPE_FILLEDBYFUSION)
      if (
#if (JKOBJFUSN_TRACKABLE_U16MOTIONTYPE_MIN > 0u)
          (pTrackable->u16MotionType < JKOBJFUSN_TRACKABLE_U16MOTIONTYPE_MIN) ||
#endif
          (pTrackable->u16MotionType > JKOBJFUSN_TRACKABLE_U16MOTIONTYPE_MAX))
      {
         u32Success = JKOBJFUSN_ERROR_TRACKABLELIST_INVALID_OBJECT;
      }
      else
      {
         /** MISRA */
      }
#endif
#if (STD_ON == JKOBJFUSN_TRACKABLE_U16CLASS_FILLEDBYFUSION)
      if (
#if (JKOBJFUSN_TRACKABLE_U16CLASS_MIN > 0u)
          (pTrackable->u16Class < JKOBJFUSN_TRACKABLE_U16CLASS_MIN) ||
#endif
          (pTrackable->u16Class > JKOBJFUSN_TRACKABLE_U16CLASS_MAX))
      {
         u32Success = JKOBJFUSN_ERROR_TRACKABLELIST_INVALID_OBJECT;
      }
      else
      {
         /** MISRA */
      }
#endif
#if (STD_ON == JKOBJFUSN_TRACKABLE_U16CLASSPROB_FILLEDBYFUSION)
      if (
#if (JKOBJFUSN_TRACKABLE_U16CLASSPROB_MIN > 0u)
          (pTrackable->u16ClassProb < JKOBJFUSN_TRACKABLE_U16CLASSPROB_MIN) ||
#endif
          (pTrackable->u16ClassProb > JKOBJFUSN_TRACKABLE_U16CLASSPROB_MAX))
      {
         u32Success = JKOBJFUSN_ERROR_TRACKABLELIST_INVALID_OBJECT;
      }
      else
      {
         /** MISRA */
      }
#endif
#if (STD_ON == JKOBJFUSN_TRACKABLE_U16SENSORERROR_FILLEDBYFUSION)
      if (
#if (JKOBJFUSN_TRACKABLE_U16SENSORERROR_MIN > 0u)
          (pTrackable->u16SensorError < JKOBJFUSN_TRACKABLE_U16SENSORERROR_MIN) ||
#endif
          (pTrackable->u16SensorError > JKOBJFUSN_TRACKABLE_U16SENSORERROR_MAX))
      {
         u32Success = JKOBJFUSN_ERROR_TRACKABLELIST_INVALID_OBJECT;
      }
      else
      {
         /** MISRA */
      }
#endif
      if (JKOBJFUSN_ERROR_NOERROR != u32Success)
      {
         (void)jk_error_management_addError(u32Success, JKOBJFUSN_AAU_VALIDATION_MANAGEMENT,
            JKOBJFUSN_AAU_VALIDATION_MANAGEMENT_VALIDATE_TRACKABLE);
      }
      else
      {
         /* MISRA */
      }
   }
#endif

   return u32Success;
}
/* PRQA S 3206 -- */
#define ObjFusn_STOP_SEC_CODE
#include "ObjFusn_MemMap.h"

/**
* @fn   uint32 Trackable_validityCheck(JkObjFusn_TrackableListType const* const pJkTrackableList)
*
* @brief      Check the whole trackable list by scanning through all trackables.
*             Return TRUE if all objects within the map have a valid lifespan and all
*             others have lifespan "FREE SLOT". Otherwise return FALSE.
*
* @param   pJkTrackableList    JkObjFusn_TrackableListType const * const, Trackable list
*
* @return  TRUE (trackable list valid) or FALSE (trackable list not valid)
*/
#define ObjFusn_START_SEC_CODE
#include "ObjFusn_MemMap.h"
/* PRQA S 3206 ++ */ /* argument may be set to other values depending on run-time check activation */
FUNC(uint32, ObjFusn_CODE) jk_validate_trackable_map(CONSTP2CONST(JkObjFusn_TrackableListType, AUTOMATIC, ObjFusn_VAR_NOINIT) pJkTrackableList) /* PRQA S 1505 *//* library function */
{
   uint32 u32Success = JKOBJFUSN_ERROR_NOERROR;   /* PRQA S 3204 1 *//* variable may be set to other values depending on run-time check activation */

#if (JK_RUNTIME_ERROR_CHECK == STD_ON)
   uint16 u16iSlot;
   uint16 u16NumTrackables = 0u;
   sint16 s16Idx;
   boolean abFoundIdx [JKOBJFUSN_TRACKABLELIST_U16VALIDTRACKABLES_MAX];

   jk_common_array_utils_defaultInit_abool(abFoundIdx, JKOBJFUSN_TRACKABLELIST_U16VALIDTRACKABLES_MAX, FALSE);

   for (u16iSlot = 0u; u16iSlot < JKOBJFUSN_TRACKABLELIST_U16VALIDTRACKABLES_MAX; u16iSlot++)
   {
      s16Idx = pJkTrackableList->as16TrackableMap[u16iSlot];

      if ((s16Idx < JKOBJFUSN_TRACKABLELIST_AS16TRACKABLEMAP_MIN) ||
         (s16Idx > ((sint16)JKOBJFUSN_TRACKABLELIST_AS16TRACKABLEMAP_MAX)))
      {
         u32Success = JKOBJFUSN_ERROR_TRACKABLELIST_INVALID_MAP;
      }
      else
      if (JKOBJFUSN_TRACKABLELIST_AS16TRACKABLEMAP_DEFAULT != s16Idx)
      {
         u16NumTrackables++;
         abFoundIdx[s16Idx] = TRUE;

         /** Lifespan of occupied slot must not be set to free slot */
         if (pJkTrackableList->aTrackable[s16Idx].u16Lifespan == JKOBJFUSN_TRACKABLE_U16LIFESPAN_FREE_SLOT)
         {
            u32Success = JKOBJFUSN_ERROR_TRACKABLELIST_INVALID_MAP;
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

   /* Now check free slots */
   for (u16iSlot = 0u; u16iSlot < JKOBJFUSN_TRACKABLELIST_U16VALIDTRACKABLES_MAX; u16iSlot++)
   {
      if ((FALSE == abFoundIdx[u16iSlot]) &&
          (JKOBJFUSN_TRACKABLE_U16LIFESPAN_FREE_SLOT != pJkTrackableList->aTrackable[u16iSlot].u16Lifespan))
      {
         u32Success = JKOBJFUSN_ERROR_TRACKABLELIST_INVALID_MAP;
      }
      else
      {
         /* MISRA */
      }
   }

   if (u16NumTrackables != pJkTrackableList->u16ValidTrackables)
   {
      u32Success = FALSE;
   }
   else
   {
      /* MISRA */
   }

   if (JKOBJFUSN_ERROR_NOERROR != u32Success)
   {
      (void)jk_error_management_addError(u32Success, JKOBJFUSN_AAU_VALIDATION_MANAGEMENT,
         JKOBJFUSN_AAU_VALIDATION_MANAGEMENT_VALIDATE_TRACKABLE_MAP);
   }
   else
   {
      /* MISRA */
   }
#endif

   return u32Success;
}
/* PRQA S 3206 -- */
#define ObjFusn_STOP_SEC_CODE
#include "ObjFusn_MemMap.h"

/**
* @fn   uint32 Trackable_validateTrackableList(JkObjFusn_TrackableListType const * const pJkTrackableList)
*
* @brief     Validates a trackable list by checking for num objects and update counter 
*
* @param   pJkTrackableList    JkObjFusn_TrackableListType const * const, Trackable list
*
* @return  TRUE (trackable list valid) or FALSE (trackable list not valid)
*/
#define ObjFusn_START_SEC_CODE
#include "ObjFusn_MemMap.h"
/* PRQA S 1532 2 *//* Library Function */
FUNC(uint32, ObjFusn_CODE) jk_validate_trackable_list(CONSTP2CONST(JkObjFusn_TrackableListType, AUTOMATIC, ObjFusn_VAR_NOINIT) pJkTrackableList)
{
   uint32 u32Success;
   sint16 s16Idx;
   uint16 u16i;

#if (JK_RUNTIME_ERROR_CHECK == STD_ON)
#if (JK_RUNTIME_POINTER_CHECK == STD_ON)
   if (NULL_PTR == pJkTrackableList)
   {
      /* error handling */
      u32Success = JKOBJFUSN_ERROR_NULL_POINTER_EXCEPTION;
      (void)jk_error_management_addError(u32Success, JKOBJFUSN_AAU_VALIDATION_MANAGEMENT,
         JKOBJFUSN_AAU_VALIDATION_MANAGEMENT_VALIDATE_TRACKABLE_LIST);
   }
   else
#endif
   if (pJkTrackableList->u16ValidTrackables > JKOBJFUSN_TRACKABLELIST_U16VALIDTRACKABLES_MAX)
   {
      u32Success = JKOBJFUSN_ERROR_NUMBER_OF_OBJECTS_EXCEEDS_MAXIMUM_SIZE;
      (void)jk_error_management_addError(u32Success, JKOBJFUSN_AAU_VALIDATION_MANAGEMENT,
         JKOBJFUSN_AAU_VALIDATION_MANAGEMENT_VALIDATE_TRACKABLE_LIST);
   }
   else
#endif
   {
      u32Success = jk_validate_trackable_map(pJkTrackableList);
#if (JK_RUNTIME_ERROR_CHECK == STD_ON)
      if (u32Success != JKOBJFUSN_ERROR_NOERROR)
      {
         /* MISRA */
      }
      else
#endif
      {
         /* Check each valid trackable */
         for (u16i = 0u; u16i < (pJkTrackableList->u16ValidTrackables); u16i++)
         {
            s16Idx = (pJkTrackableList->as16TrackableMap)[u16i];
            u32Success |= jk_validate_trackable(&((pJkTrackableList->aTrackable)[s16Idx]));
         }
      }
   }

   return u32Success;
}
#define ObjFusn_STOP_SEC_CODE
#include "ObjFusn_MemMap.h"

/** /} */