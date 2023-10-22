/*********************************************************************************
* Copyright(C) JiKa Inc. All rights reserved.
* FileName: JkObjFusn_TrackableListUtilsTmp.c
* Author:  ruifeng.ding
* Version: 1.00
* Date:  2021/08/11
* Description:
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

#include "JkObjFusn_TrackableListUtils.h"
#include "JkObjFusn_ErrorCodes.h"
#include "JkObjFusn_AAU_Codes.h"
#include "Jk_error_management.h"
#include "Jk_fusion_memory.h"
#include "JkObjFusn_TrackableConstants.h"
#include "JkObjFusn_TrackableListProps.h"
#include "JkObjFusn_TrackableProps.h"
#include "JkObjFusn_ObjectListProps.h"

/*==================[variables]=============================================*/
/// @name TrackableListUtils global variables

/**
 * Save the sensor pattern for each input. 
 * Used to map an inputted object list to the corresponding index 
 */
#define ObjFusn_START_SEC_VAR32
#include "ObjFusn_MemMap.h"
LOCAL VAR(uint32, ObjFusn_VAR_ZERO_INIT) s_sensorPatternListTrkbl[JK_FUSION_MAX_INPUTS] = {0u};
#define ObjFusn_STOP_SEC_VAR32
#include "ObjFusn_MemMap.h"

/// @}

/*==================[functions]=============================================*/

/**
 * @fn   void Trackable_initSensorPatternBuffer(void)
 *
 * @brief   Inits the static sensor pattern array to default values. 
 *
 * @return  void
 */
/* PRQA S 1532 4 *//* External Interface to static buffer */
#define ObjFusn_START_SEC_SLOW_CODE
#include "ObjFusn_MemMap.h"
FUNC(void, ObjFusn_CODE) Trackable_initSensorPatternBuffer(void)
{
   uint16 u16i = 0u;

   for(u16i = 0u; u16i < JK_FUSION_MAX_INPUTS; u16i++)
   {
      s_sensorPatternListTrkbl[u16i] = JKOBJFUSN_TRACKABLE_U32SENSOR_INVALID;
   }
}
#define ObjFusn_STOP_SEC_SLOW_CODE
#include "ObjFusn_MemMap.h"

/**
 * @fn   uint32 Trackable_setSensorInfos(u32_t const au32SensPatList[], u16_t const u16NumLists)
 *
 * @brief   Copies the inputted sensor pattern array to the local static buffer
 *
 * @param   au32SensPatList[]    u32_t const, sensor pattern array 
 * @param   u16NumLists          u16_t const, length of sensor pattern array
 *
 * @return  JKOBJFUSN_ERROR_NOERROR if no error occured and error code otherwise.
 */
/* PRQA S 1532 4 *//* External Interface to static buffer called by Fusion AAU */
#define ObjFusn_START_SEC_CODE
#include "ObjFusn_MemMap.h"

FUNC(uint32, ObjFusn_CODE) Trackable_setSensorInfos(const uint32 au32SensPatList[], const uint16 u16NumLists)
{
   uint16 u16Sens;
   uint32 u32Success = JKOBJFUSN_ERROR_NOERROR;   /* PRQA S 3204 1 *//* variable may be set to other values depending on run-time pointer check activation */

#if (JK_RUNTIME_ERROR_CHECK == STD_ON)
#if (JK_RUNTIME_POINTER_CHECK == STD_ON)
   if (NULL_PTR == au32SensPatList)
   {
      u32Success = JKOBJFUSN_ERROR_NULL_POINTER_EXCEPTION;
      (void) jk_error_management_addError(u32Success, JKOBJFUSN_AAU_TRACKABLE_LIST_UTILS,
         JKOBJFUSN_AAU_TRACKABLE_LIST_UTILS_SET_SENSOR_INFOS);
   }
   else
#endif
   if (JK_FUSION_MAX_INPUTS < u16NumLists)
   {
      u32Success = JKOBJFUSN_ERROR_INVALID_INPUT;
      (void) jk_error_management_addError(u32Success, JKOBJFUSN_AAU_TRACKABLE_LIST_UTILS,
         JKOBJFUSN_AAU_TRACKABLE_LIST_UTILS_SET_SENSOR_INFOS);
   }
   else
#endif
   {
      for (u16Sens = 0u; u16Sens < u16NumLists; ++u16Sens)
      {
         if (JKOBJFUSN_TRACKABLE_U32SENSORSCURR_MIN != au32SensPatList[u16Sens])
         {
            s_sensorPatternListTrkbl[u16Sens] = au32SensPatList[u16Sens];     
         }
         else
         {
            /* MISRA */
         }
      }
   }

   return u32Success;
}

/**
 * @fn   uint16 Trackable_getSensPos(uint32 const u32SensorCurr)
 *
 * @brief   Get the index of the inputted sensor pattern in the sensor pattern array
 *
 * @param   u32SensorCurr     u32_t const, sensor pattern array 
 *
 * @return  the index in the sensor pattern array if the corresponding pattern war found and JK_FUSION_MAX_INPUTS + 1u
            if not found
 */
FUNC(uint16, ObjFusn_CODE) Trackable_getSensPos(const uint32 u32SensorCurr)
{
   uint16 u16Senspos = JKOBJFUSN_SENS_POS_INVALID;
   uint16 u16i;

   for (u16i = 0u; u16i < JK_FUSION_MAX_INPUTS; ++u16i)
   {
       //Ryan modify; for trackMerge,eg: u32SensorCurr == 3
      if (0 != (u32SensorCurr & s_sensorPatternListTrkbl[u16i]))
      //if (u32SensorCurr == s_sensorPatternListTrkbl[u16i])
      {
         u16Senspos = u16i;
      }
      else
      {
         /* MISRA */
      }

   }
   return u16Senspos;
}

/* PRQA S 1532 2 *//* Library Function */
FUNC(uint32, ObjFusn_CODE) Trackable_getSensPattern(const uint16 u16Idx)
{
   uint32 _u32SensorPattern;

   if (u16Idx < JK_FUSION_MAX_INPUTS)
   {
      _u32SensorPattern = s_sensorPatternListTrkbl[u16Idx];
   }
   else
   {
      _u32SensorPattern = JKOBJFUSN_TRACKABLE_U32SENSOR_INVALID;
   }

   return _u32SensorPattern;
}

/**
 * @fn   uint32 Trackable_init(JkObjFusn_TrackableType * const pTrkble)
 *
 * @brief    Initialization of a trackable.
 *           Set all values to default values
 *
 * @param   pTrkble    JkObjFusn_TrackableType * const, Input trackable 
 *
 * @return  JKOBJFUSN_ERROR_NOERROR if no error occured and error code otherwise.
 */
FUNC(uint32, ObjFusn_CODE) Trackable_init(CONSTP2VAR(JkObjFusn_TrackableType, AUTOMATIC, ObjFusn_VAR_NOINIT) pTrkble)
{
   uint32 u32Success;
   uint16 u16i;

#if (JK_RUNTIME_POINTER_CHECK == STD_ON)
   if (NULL_PTR == pTrkble)
   {
      u32Success = JKOBJFUSN_ERROR_NULL_POINTER_EXCEPTION;
      (void) jk_error_management_addError(u32Success, JKOBJFUSN_AAU_TRACKABLE_LIST_UTILS,
         JKOBJFUSN_AAU_TRACKABLE_LIST_UTILS_TRACKABLE_INIT);
   }
   else
#endif
   {
      /* set each trackable object values to default */
      pTrkble->bUpdated = JKOBJFUSN_TRACKABLE_BUPDATED_DEFAULT;
      pTrkble->u8VisionIdx = JKOBJFUSN_TRACKABLE_U8VISIONIDX_DEFAULT;
      pTrkble->u16ID = JKOBJFUSN_TRACKABLE_U16ID_DEFAULT;
      pTrkble->u16Age = JKOBJFUSN_TRACKABLE_U16AGE_DEFAULT;
      pTrkble->u16Lifespan = JKOBJFUSN_TRACKABLE_U16LIFESPAN_DEFAULT;
      pTrkble->u32SensorsCurr = JKOBJFUSN_TRACKABLE_U32SENSORSCURR_DEFAULT;
      pTrkble->u32SensorsHist = JKOBJFUSN_TRACKABLE_U32SENSORSHIST_DEFAULT;
      pTrkble->u8CyclesNoRadar = JKOBJFUSN_TRACKABLE_U8CYCLESNORADAR_DEFAULT;
      pTrkble->u8CyclesNoVision = JKOBJFUSN_TRACKABLE_U8CYCLESNOVISION_DEFAULT;

      for (u16i = 0u; u16i < JK_FUSION_MAX_INPUTS; ++u16i)
      {
         pTrkble->au16SensorID[u16i] = JKOBJFUSN_TRACKABLE_U16ID_DEFAULT;
         pTrkble->au16SensorIDLast[u16i] = JKOBJFUSN_TRACKABLE_U16ID_DEFAULT;
      }

      u32Success = f32VecZeros(&pTrkble->vecX, JKOBJFUSN_MATRIX_SIZE);
      u32Success |= f32SymMatZeros(&pTrkble->matP, JKOBJFUSN_MATRIX_SIZE);
      pTrkble->f32TrackQuality         = JKOBJFUSN_TRACKABLE_F32TRACKQUALITY_DEFAULT;
      pTrkble->f32ExistenceQuality     = JKOBJFUSN_TRACKABLE_F32EXISTENCEQUALITY_DEFAULT;
      pTrkble->f32ObstacleProbability  = JKOBJFUSN_TRACKABLE_F32OBSTACLEPROBABILITY_MAX;
      pTrkble->f32Width                = JKOBJFUSN_TRACKABLE_F32WIDTH_DEFAULT;
      pTrkble->f32Length               = JKOBJFUSN_TRACKABLE_F32LENGTH_DEFAULT;
      pTrkble->f32Height               = JKOBJFUSN_TRACKABLE_F32HEIGHT_DEFAULT;
      pTrkble->u16RefPoint             = JKOBJFUSN_TRACKABLE_U16REFPOINT_DEFAULT;
      pTrkble->u8CoordSystem           = JKOBJFUSN_TRACKABLE_U8COORDSYSTEM_DEFAULT;
      pTrkble->u16MotionType           = JKOBJFUSN_TRACKABLE_U16MOTIONTYPE_DEFAULT;
      pTrkble->u16Class                = JKOBJFUSN_TRACKABLE_U16CLASS_DEFAULT;
      pTrkble->u16ClassProb            = JKOBJFUSN_TRACKABLE_U16CLASSPROB_DEFAULT;
      pTrkble->u8IsAsilVerified        = JKOBJFUSN_TRACKABLE_U8ISASILVERIFIED_DEFAULT;
      pTrkble->f32Gain                 = JKOBJFUSN_TRACKABLE_F32GAIN_DEFAULT;
      pTrkble->f32GainVar              = JKOBJFUSN_TRACKABLE_F32GAINVAR_DEFAULT;
      pTrkble->u8TrkblBinPosition      = JKOBJFUSN_TRACKABLE_U8TRKBLBINPOSITION_DEFAULT;

      /** Coordinated Turn Model */
      pTrkble->f32Heading              = JKOBJFUSN_TRACKABLE_F32HEADING_DEFAULT;
      pTrkble->f32HeadingVar           = JKOBJFUSN_TRACKABLE_F32HEADINGVAR_DEFAULT;
      pTrkble->f32YawRate              = JKOBJFUSN_TRACKABLE_F32YAWRATE_DEFAULT;
      pTrkble->f32YawRateVar           = JKOBJFUSN_TRACKABLE_F32YAWRATEVAR_DEFAULT;
      pTrkble->f32CovarHeadingYawRate  = JKOBJFUSN_TRACKABLE_F32COVARHEADINGYAWRATE_DEFAULT;
   }

   return u32Success;
}

/**
 * @fn   uint32 Trackable_initObjectList(JkObjFusn_ObjectListType * const pObjList)
 *
 * @brief    Initialization of an object list to default values 
 *
 * @param   pObjList    JkObjFusn_ObjectListType * const, Input object list list
 *
 * @return  JKOBJFUSN_ERROR_NOERROR if no error occured and error code otherwise.
 */

FUNC(uint32, ObjFusn_CODE) Trackable_initObjectList(CONSTP2VAR(JkObjFusn_ObjectListType, AUTOMATIC, ObjFusn_VAR_NOINIT) pObjList)
{
   uint32 u32Success = JKOBJFUSN_ERROR_NOERROR;
   uint16 u16it;

#if (JK_RUNTIME_POINTER_CHECK == STD_ON)
   if (NULL_PTR == pObjList)
   {
      /* error handling */
      u32Success = JKOBJFUSN_ERROR_NULL_POINTER_EXCEPTION;
      (void) jk_error_management_addError(u32Success, JKOBJFUSN_AAU_TRACKABLE_LIST_UTILS,
         JKOBJFUSN_AAU_TRACKABLE_LIST_UTILS_INIT_OBJECT_LIST);
   }
   else
#endif
   {
      /* set main list values to default */
      pObjList->f32MeasurementLatency  = JKOBJFUSN_OBJECTLIST_F32MEASUREMENTLATENCY_DEFAULT;
      pObjList->u16ListUpdateCounter   = JKOBJFUSN_OBJECTLIST_U16LISTUPDATECOUNTER_DEFAULT;
      /* no valid trackables (i.e. not default!)*/
      pObjList->u16NumObjects          = JKOBJFUSN_OBJECTLIST_U16NUMOBJECTS_MIN;
      pObjList->u32SensorPattern       = JKOBJFUSN_OBJECTLIST_U32SENSORPATTERN_DEFAULT;

      for (u16it = 0u; u16it < JK_FUSION_OBJECT_LIST_SIZE; u16it++)
      {
         u32Success |= Trackable_init(&pObjList->aTrackable[u16it]);
      }
   }

   return u32Success;
}
#define ObjFusn_STOP_SEC_CODE
#include "ObjFusn_MemMap.h"

/**
 * @fn   uint32 Trackable_listInit(JkObjFusn_TrackableListType * const pJkTrackableList)
 *
 * @brief    Initialization of a trackable list
 *           Set all values to default values
 *
 * @param   pTrkble    JkObjFusn_TrackableListType * const, Input trackable list
 *
 * @return  JKOBJFUSN_ERROR_NOERROR if no error occured and error code otherwise.
 */
#define ObjFusn_START_SEC_SLOW_CODE
#include "ObjFusn_MemMap.h"
/* PRQA S 1532 2 *//* Library Function */
FUNC(uint32, ObjFusn_CODE) Trackable_listInit(CONSTP2VAR(JkObjFusn_TrackableListType, AUTOMATIC, ObjFusn_VAR_NOINIT) pJkTrackableList)
{
   uint32 u32Success = JKOBJFUSN_ERROR_NOERROR;
   uint16 u16it;

#if (JK_RUNTIME_POINTER_CHECK == STD_ON)
   if (NULL_PTR == pJkTrackableList)
   {
      /* error handling */
      u32Success = JKOBJFUSN_ERROR_NULL_POINTER_EXCEPTION;
      (void) jk_error_management_addError(u32Success, JKOBJFUSN_AAU_TRACKABLE_LIST_UTILS,
         JKOBJFUSN_AAU_TRACKABLE_LIST_UTILS_TRACKABLE_LIST_INIT);
   }
   else
#endif
   {
      /* need a memset here to make tests pass because the trackable list is not well-aligned */
      //(void)memset(pJkTrackableList, 0, (size_t)sizeof(JkObjFusn_TrackableListType));

      /* set main list values to default */
      pJkTrackableList->f32MeasurementLatency  = JKOBJFUSN_TRACKABLELIST_F32MEASUREMENTLATENCY_DEFAULT;
      /* no valid trackables (i.e. not default!)*/
      pJkTrackableList->u16ValidTrackables     = JKOBJFUSN_TRACKABLELIST_U16VALIDTRACKABLES_MIN;
 
      for (u16it = 0u; u16it < JKOBJFUSN_TRACKABLELIST_U16VALIDTRACKABLES_MAX; u16it++)
      {
         pJkTrackableList->as16TrackableMap[u16it] = JKOBJFUSN_TRACKABLELIST_AS16TRACKABLEMAP_DEFAULT;
         u32Success |= Trackable_init(&pJkTrackableList->aTrackable[u16it]);
      }
   }
   return u32Success;
}
#define ObjFusn_STOP_SEC_SLOW_CODE
#include "ObjFusn_MemMap.h"

#define ObjFusn_START_SEC_CODE
#include "ObjFusn_MemMap.h"

FUNC(uint32, ObjFusn_CODE) Trackable_copyTrackable(CONSTP2VAR(JkObjFusn_TrackableType, AUTOMATIC, ObjFusn_VAR_NOINIT) pDest, CONSTP2CONST(JkObjFusn_TrackableType, AUTOMATIC, ObjFusn_VAR_NOINIT) pSrc)
{
   uint32 u32Success    = JKOBJFUSN_ERROR_NOERROR;   /* PRQA S 3204 1 *//* variable may be set to other values depending on run-time pointer check activation */
   const uint32 u32Size = (uint32) sizeof(JkObjFusn_TrackableType);

#if (JK_RUNTIME_POINTER_CHECK == STD_ON)
   if ((NULL_PTR == pDest) || (NULL_PTR == pSrc))
   {
      u32Success = JKOBJFUSN_ERROR_NULL_POINTER_EXCEPTION;
      (void)jk_error_management_addError(u32Success, JKOBJFUSN_AAU_TRACKABLE_LIST_UTILS,
         JKOBJFUSN_AAU_TRACKABLE_LIST_UTILS_COPY_TRACKABLE);
   }
   else
#endif
   {
      /* PRQA S 0314 1 *//* Cast to void required for copy function */
      jk_fusion_memcpy((void *)pDest, (const void *)pSrc, u32Size);
   }

   return u32Success;
}
#define ObjFusn_STOP_SEC_CODE
#include "ObjFusn_MemMap.h"

/** /} */
