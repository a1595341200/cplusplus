/*********************************************************************************
* Copyright(C) JiKa Inc. All rights reserved.
* FileName: Jk_idProvider.c
* Author:  ruifeng.ding
* Version: 1.00
* Date:  2021/08/11
* Description: provide unique IDs for objects rsp. tracks.
	This code was formerly part of Jk_idManagement.c and has now been moved to a seperate file.
	See the public header Jk_idProvider.h for a more detailed description.
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

/*==================[inclusions]====================================*/

#include "Jk_idProvider.h"
#include "Jk_idProvider_int.h"
#include "JkObjFusn_ConfigAlgorithm.h"
#include "JkObjFusn_TrackableProps.h"
#include "JkObjFusn_ErrorCodes.h"
#include "JkObjFusn_AAU_Codes.h"
#include "Jk_error_management.h"

/*==================[type definitions]====================================*/

/*==================[static variables]====================================*/
/* indicates the next id that will be assigned (starting from 0) */
#define ObjFusn_START_SEC_VAR16
#include "ObjFusn_MemMap.h"
LOCAL VAR(uint16, ObjFusn_VAR_NOINIT) s_u16CurrentFusionID = S_U16CURRENTFUSIONID_INIT;
#define ObjFusn_STOP_SEC_VAR16
#include "ObjFusn_MemMap.h"

#define ObjFusn_START_SEC_VAR8
#include "ObjFusn_MemMap.h"
/* an array that indicates for each possible fusion id whether it is currently
   * in use (1) or not (0) */
/* TODO: why u16_t? bool should be enough, or u8_t! */
/* PRQA S 2022 2 */ /* Array is explicitly initialised during the initialisation function */
LOCAL VAR(uint8, ObjFusn_VAR_NOINIT) s_au8UsedFusionId[S_AU16USEDFUSIONID_ELEMENTS];
#define ObjFusn_STOP_SEC_VAR8
#include "ObjFusn_MemMap.h"

#define ObjFusn_START_SEC_VAR8
#include "ObjFusn_MemMap.h"
/*  variable for current state of ID management */
LOCAL VAR(uint8, ObjFusn_VAR_NOINIT) s_u8IdpCurrentState = JK_IDPROVIDER_UNINITIALIZED;
#define ObjFusn_STOP_SEC_VAR8
#include "ObjFusn_MemMap.h"

/*==================[method definitions]====================================*/

#define ObjFusn_START_SEC_SLOW_CODE
#include "ObjFusn_MemMap.h"
/* PRQA S 1532 2 *//* Function called from external AAU */
FUNC(void, ObjFusn_CODE) idProvider_init(void)
{  
   /* function is only used once in the fusion initialization */
   uint16 u16FusionId;

   /* the next usable fusion id starts with zero */
   s_u16CurrentFusionID = S_U16CURRENTFUSIONID_INIT;

   /* all fusion ids are free, so the value of usedFusionId is zero for all IDs */
   for (u16FusionId = 0u; u16FusionId < S_AU16USEDFUSIONID_ELEMENTS; u16FusionId++)
   {
      s_au8UsedFusionId[u16FusionId] = U8FUSIONID_NOT_INUSE;
   }

   s_u8IdpCurrentState = JK_IDPROVIDER_INITIALIZED;
}
#define ObjFusn_STOP_SEC_SLOW_CODE
#include "ObjFusn_MemMap.h"

#define ObjFusn_START_SEC_CODE
#include "ObjFusn_MemMap.h"
/* PRQA S 1532 2 *//* Function called from external AAU */
FUNC(uint16, ObjFusn_CODE) idProvider_getNewFusionId(void)
{
   /* main function, which is called always by getting a new, unused fusion id */
   uint16 u16NewId;

   /* loop counter to ensure we don't endup in an endless loop */
   uint16 loopCnt = 0u;

   /* loop through all fusion ids and check if they are in use -
   end loop when loopCnt equals max fusion ID, then all ids have been checked */
   if (s_u8IdpCurrentState == JK_IDPROVIDER_INITIALIZED)
   {
      while ((U8FUSIONID_NOT_INUSE != s_au8UsedFusionId[s_u16CurrentFusionID]) && 
             (S_AU16USEDFUSIONID_RANGE > loopCnt))
      {
         /* increment variable and return new fusion id */
         s_u16CurrentFusionID = ((s_u16CurrentFusionID + 1u) % S_AU16USEDFUSIONID_SIZE);

         loopCnt++;
      }

      /* check if all ID's are taken and return (invalid) default ID if that is the case -
      this results afterwards to an error state of the fusion */
      if ((S_AU16USEDFUSIONID_RANGE == loopCnt) && 
          (U8FUSIONID_NOT_INUSE != s_au8UsedFusionId[s_u16CurrentFusionID]))
      {
         u16NewId = JKOBJFUSN_TRACKABLE_U16ID_DEFAULT;
      }
      else
      {
         /* mark fusion id as used */
         s_au8UsedFusionId[s_u16CurrentFusionID] = U8FUSIONID_INUSE;

         /* save using id because it will be overwritten in the next step */
         u16NewId = s_u16CurrentFusionID + JKOBJFUSN_IDPROVIDER_U16ID_MIN;

         /* post-increment Fusion ID for the next usage */
         s_u16CurrentFusionID = ((s_u16CurrentFusionID + 1u) % S_AU16USEDFUSIONID_SIZE);
      }
   }
   else
   {
      u16NewId = JKOBJFUSN_TRACKABLE_U16ID_DEFAULT;
   }

   return u16NewId;
}

FUNC(uint32, ObjFusn_CODE) idProvider_releaseFusionId(const uint16 u16FusionId)
{
   /* function is always used if a track died and the id can be reused */
   uint32 u32Success = JKOBJFUSN_ERROR_NOERROR;   /* PRQA S 3204 1 *//* variable may be set to other values depending on run-time check activation */

   if (s_u8IdpCurrentState == JK_IDPROVIDER_INITIALIZED)
   {
      /* ensure u16FusionId is valid */
      if ((
#if (0u < JKOBJFUSN_TRACKABLE_U16ID_MIN)
          (u16FusionId >= JKOBJFUSN_TRACKABLE_U16ID_MIN) &&
#endif
          (u16FusionId <= JKOBJFUSN_TRACKABLE_U16ID_MAX)) &&
          (s_au8UsedFusionId[u16FusionId - JKOBJFUSN_IDPROVIDER_U16ID_MIN] == U8FUSIONID_INUSE))
      {
         /* release id by setting the usedFusionId to zero */
         s_au8UsedFusionId[u16FusionId - JKOBJFUSN_IDPROVIDER_U16ID_MIN] = U8FUSIONID_DELETED;
      }
      else
      {
#if (JK_RUNTIME_ERROR_CHECK == STD_ON)
         /* error state because fusion id is out of config range */
         u32Success = JKOBJFUSN_ERROR_INVALID_INPUT;
         (void)jk_error_management_addError(JKOBJFUSN_ERROR_INVALID_INPUT, JKOBJFUSN_AAU_IDPROVIDER,
                                                 JKOBJFUSN_AAU_ID_PROVIDER_RELEASE_FUSION_ID);
#endif
      }
   }
   else
   {
#if (JK_RUNTIME_ERROR_CHECK == STD_ON)
      u32Success = JKOBJFUSN_ERROR_AAU_NOT_INITIALIZED;
      (void)jk_error_management_addError(JKOBJFUSN_ERROR_AAU_NOT_INITIALIZED, JKOBJFUSN_AAU_IDPROVIDER,
                                              JKOBJFUSN_AAU_ID_PROVIDER_RELEASE_FUSION_ID);
#endif
   }

   return u32Success;
}

/* PRQA S 1532 2 *//* Function called from external AAU */
FUNC(void, ObjFusn_CODE) idProvider_finishCycle(void)
{
   /* function is always used if a track died and the id can be reused */
   uint16 u16i;

   for (u16i = 0u; u16i < S_AU16USEDFUSIONID_SIZE; u16i++)
   {
      if (s_au8UsedFusionId[u16i] == U8FUSIONID_DELETED)
      {
         s_au8UsedFusionId[u16i] = U8FUSIONID_NOT_INUSE;
      }
      else
      {
         /* MISRA */
      }
   }
}
#define ObjFusn_STOP_SEC_CODE
#include "ObjFusn_MemMap.h"

#ifdef UNITTEST
/* only needed for unit tests to get the static values */

uint8 * idProvider_accessIdList(void)       /* PRQA S 3219 */ /** used for tests only */
{
   return s_au8UsedFusionId;
}

uint8 * idProvider_accessCurrentState(void)  /* PRQA S 3219 */ /** used for tests only */
{
   return &s_u8IdpCurrentState;
}
#endif /* UNITTEST */

/**
 * \}
 */
