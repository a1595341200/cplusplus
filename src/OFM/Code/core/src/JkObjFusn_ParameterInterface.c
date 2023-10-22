/*********************************************************************************
* Copyright(C) JiKa Inc. All rights reserved.
* FileName: JkObjFusn_ParameterInterface.c
* Author:  ruifeng.ding
* Version: 1.00
* Date:  2021/08/11
* Description: This is the parameter Interface for Fusion
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

#include "JkObjFusn_ParameterInterface.h"
#include "JkObjFusn_Params.h"
#include "JkObjFusn_ErrorCodes.h"
#include "JkObjFusn_AAU_Codes.h"

#include "JkObjFusn_TrackableConstants.h"

#include "Jk_common_types.h"
#include "Jk_error_management.h"

/* Reason for waiving QAC warnings 3410:
 * This warning flags macro parameters which are not in parentheses.
 * In our case, we are using macro parameters as function or parameter names,
 * therefore we cannot put them into parentheses.
 */

/** \name Parameter Interface  global variables
 \{**/

/** memory object for ALL current fusion parameters */
#define ObjFusn_START_SEC_VAR_UNSPECIFIED
#include "ObjFusn_MemMap.h"
LOCAL VAR(JkObjFusn_ParametersType, ObjFusn_VAR_ZERO_INIT) sCurrentParams = {0};
#define ObjFusn_STOP_SEC_VAR_UNSPECIFIED
#include "ObjFusn_MemMap.h"

/** \}*/

/** \name Parameter Interface  functions
 \{**/
 
#define ObjFusn_START_SEC_SLOW_CODE
#include "ObjFusn_MemMap.h"
/* PRQA S 1532 2 *//* External Parameter Interface */
FUNC(void, ObjFusn_CODE) Fusion_set_DefaultParameters(void)
{
   sCurrentParams.u32SensorMode                          = JKOBJFUSN_PARAMS_U32SENSORMODE_DEFAULT;
   sCurrentParams.f32MatchGate                           = JKOBJFUSN_PARAMS_F32MATCHGATE_DEFAULT;
   sCurrentParams.f32PedestrianVarianceInXForQ           = JKOBJFUSN_PARAMS_F32PEDESTRIANVARIANCEINXFORQ_DEFAULT;
   sCurrentParams.f32PedestrianVarianceInYForQ           = JKOBJFUSN_PARAMS_F32PEDESTRIANVARIANCEINYFORQ_DEFAULT;
   sCurrentParams.f32VehicleVarianceInXForQ              = JKOBJFUSN_PARAMS_F32PEDESTRIANVARIANCEINXFORQ_DEFAULT;
   sCurrentParams.f32VehicleVarianceInYForQ              = JKOBJFUSN_PARAMS_F32PEDESTRIANVARIANCEINYFORQ_DEFAULT;
   sCurrentParams.bOutputIsOverground                    = JKOBJFUSN_PARAMS_BOUTPUTISOVERGROUND_DEFAULT;
   sCurrentParams.bUseTrackMerge                         = JKOBJFUSN_PARAMS_BUSETRACKMERGE_DEFAULT;
   sCurrentParams.bUseCoasting                           = JKOBJFUSN_PARAMS_BUSECOASTING_DEFAULT;

   /* set dynamic calibration parameters */

   sCurrentParams.f32DynCalPrmForAxleDstReToVehFrnt      = JKOBJFUSN_PARAMS_DYNCALREARTOVEHICLEFRONT_DEFAULT;
   sCurrentParams.f32DynCalPrmForCamLatDistToVehFrnt0    = JKOBJFUSN_PARAMS_DYNCALCAMLATOFFSET_DEFAULT;
   sCurrentParams.f32DynCalPrmForCamLongDistToVehFrnt0   = JKOBJFUSN_PARAMS_DYNCALCAMLONGOFFSET_DEFAULT;
   sCurrentParams.u8VehCfgPrmInt                         = JKOBJFUSN_PARAMS_VEHCFGPARAM_DEFAULT;
}
/** \}*/

/*==================[setter functions]================================================*/
/* PRQA S 1532 2 *//* External Parameter Interface */
FUNC(uint32, ObjFusn_CODE) Fusion_set_f32DynCalPrmForAxleDstReToVehFrnt(const float32 f32Value)
{
   uint32 u32Success = JKOBJFUSN_ERROR_NOERROR;   /* PRQA S 3204 1 *//* variable may be set to other values depending on run-time check activation */

#if (JK_RUNTIME_ERROR_CHECK == STD_ON)
   if ((f32Value < JKOBJFUSN_PARAMS_DYNCALREARTOVEHICLEFRONT_MIN) || (f32Value > JKOBJFUSN_PARAMS_DYNCALREARTOVEHICLEFRONT_MAX))
   {
      u32Success = JKOBJFUSN_ERROR_INVALID_PARAMETER;
      (void)jk_error_management_addError(JKOBJFUSN_ERROR_INVALID_PARAMETER, JKOBJFUSN_AAU_PARAMETER_INTERFACE,
         JKOBJFUSN_AAU_PARAMETER_INTERFACE_SET_F32DYNCALREARTOVEHICLEFRONT);
   }
   else
#endif
   {
      sCurrentParams.f32DynCalPrmForAxleDstReToVehFrnt = f32Value;
   }

   return u32Success;
}

/* PRQA S 1532 2 *//* External Parameter Interface */
FUNC(uint32, ObjFusn_CODE) Fusion_set_f32DynCalPrmForCamLatDistToVehFrnt0(const float32 f32Value)
{
   uint32 u32Success = JKOBJFUSN_ERROR_NOERROR;   /* PRQA S 3204 1 *//* variable may be set to other values depending on run-time check activation */

#if (JK_RUNTIME_ERROR_CHECK == STD_ON)
   if ((f32Value < JKOBJFUSN_PARAMS_DYNCALCAMLATOFFSET_MIN) || (f32Value > JKOBJFUSN_PARAMS_DYNCALCAMLATOFFSET_MAX))
   {
      u32Success = JKOBJFUSN_ERROR_INVALID_PARAMETER;
      (void)jk_error_management_addError(JKOBJFUSN_ERROR_INVALID_PARAMETER, JKOBJFUSN_AAU_PARAMETER_INTERFACE,
         JKOBJFUSN_AAU_PARAMETER_INTERFACE_SET_F32DYNCALCAMLATOFFSET);
   }
   else
#endif
   {
      sCurrentParams.f32DynCalPrmForCamLatDistToVehFrnt0 = f32Value;
   }

   return u32Success;
}

/* PRQA S 1532 2 *//* External Parameter Interface */
FUNC(uint32, ObjFusn_CODE) Fusion_set_f32DynCalPrmForCamLongDistToVehFrnt0(const float32 f32Value)
{
   uint32 u32Success = JKOBJFUSN_ERROR_NOERROR;   /* PRQA S 3204 1 *//* variable may be set to other values depending on run-time check activation */

                                                                      
#if (JK_RUNTIME_ERROR_CHECK == STD_ON)
   if ((f32Value < JKOBJFUSN_PARAMS_DYNCALCAMLONGOFFSET_MIN) || (f32Value > JKOBJFUSN_PARAMS_DYNCALCAMLONGOFFSET_MAX))
   {
      u32Success = JKOBJFUSN_ERROR_INVALID_PARAMETER;
      (void)jk_error_management_addError(JKOBJFUSN_ERROR_INVALID_PARAMETER, JKOBJFUSN_AAU_PARAMETER_INTERFACE,
         JKOBJFUSN_AAU_PARAMETER_INTERFACE_SET_F32DYNCALCAMLONGOFFSET);
   }
   else
#endif
   {
      sCurrentParams.f32DynCalPrmForCamLongDistToVehFrnt0 = f32Value;
   }

   return u32Success;
}


/* PRQA S 1532 2 *//* External Parameter Interface */
FUNC(uint32, ObjFusn_CODE) Fusion_set_u8VehCfgPrmInt(const uint8 u8Value)
{
   uint32 u32Success = JKOBJFUSN_ERROR_NOERROR;   /* PRQA S 3204 1 *//* variable may be set to other values depending on run-time check activation */

#if (JK_RUNTIME_ERROR_CHECK == STD_ON)
                                                                      /* PRQA S 3316 2 *//* Parameter can be configured to be greater than zero */
   if (
#if (JKOBJFUSN_PARAMS_VEHCFGPARAM_MIN > 0)
      (u8Value < JKOBJFUSN_PARAMS_VEHCFGPARAM_MIN) ||
#endif
      (u8Value > JKOBJFUSN_PARAMS_VEHCFGPARAM_MAX))
   {
      u32Success = JKOBJFUSN_ERROR_INVALID_PARAMETER;
      (void)jk_error_management_addError(JKOBJFUSN_ERROR_INVALID_PARAMETER, JKOBJFUSN_AAU_PARAMETER_INTERFACE,
         JKOBJFUSN_AAU_PARAMETER_INTERFACE_SET_F32VEHCFGPARAM);
   }
   else
#endif
   {
      sCurrentParams.u8VehCfgPrmInt = u8Value;
   }

   return u32Success;
}


/* PRQA S 1532 2 *//* External Parameter Interface */
FUNC(uint32, ObjFusn_CODE) Fusion_set_u32SensorMode(const uint32 u32Value)
{
   uint32 u32Success = JKOBJFUSN_ERROR_NOERROR;   /* PRQA S 3204 1 *//* variable may be set to other values depending on run-time check activation */

#if (JK_RUNTIME_ERROR_CHECK == STD_ON)
   /* PRQA S 3316 2 *//* Parameter can be configured to be greater than zero */
   if (
#if (JKOBJFUSN_PARAMS_U32SENSORMODE_MIN > 0)
       (u32Value < JKOBJFUSN_PARAMS_U32SENSORMODE_MIN) ||
#endif
       (u32Value > JKOBJFUSN_PARAMS_U32SENSORMODE_MAX))
   {
      u32Success = JKOBJFUSN_ERROR_INVALID_PARAMETER;
      (void)jk_error_management_addError(JKOBJFUSN_ERROR_INVALID_PARAMETER, JKOBJFUSN_AAU_PARAMETER_INTERFACE,
         JKOBJFUSN_AAU_PARAMETER_INTERFACE_SET_U32SENSORMODE);
   }
   else
#endif
   {
      sCurrentParams.u32SensorMode = u32Value;
   }

   return u32Success;
}

/* PRQA S 1532 2 *//* External Parameter Interface */
FUNC(uint32, ObjFusn_CODE) Fusion_set_f32MatchGate(const float32 f32Value)
{
   uint32 u32Success = JKOBJFUSN_ERROR_NOERROR;   /* PRQA S 3204 1 *//* variable may be set to other values depending on run-time check activation */

#if (JK_RUNTIME_ERROR_CHECK == STD_ON)
   if ((f32Value < JKOBJFUSN_PARAMS_F32MATCHGATE_MIN) || (f32Value > JKOBJFUSN_PARAMS_F32MATCHGATE_MAX))
   {
      u32Success = JKOBJFUSN_ERROR_INVALID_PARAMETER;
      (void)jk_error_management_addError(JKOBJFUSN_ERROR_INVALID_PARAMETER, JKOBJFUSN_AAU_PARAMETER_INTERFACE,
         JKOBJFUSN_AAU_PARAMETER_INTERFACE_SET_F32MATCHGATE);
   }
   else
#endif
   {
      sCurrentParams.f32MatchGate = f32Value;
   }

   return u32Success;
}

/* PRQA S 1532 2 *//* External Parameter Interface */
FUNC(uint32, ObjFusn_CODE) Fusion_set_f32PedestrianVarianceInXForQ(const float32 f32Value)
{
   uint32 u32Success = JKOBJFUSN_ERROR_NOERROR;   /* PRQA S 3204 1 *//* variable may be set to other values depending on run-time check activation */

#if (JK_RUNTIME_ERROR_CHECK == STD_ON)
   if ((f32Value < JKOBJFUSN_PARAMS_F32PEDESTRIANVARIANCEINXFORQ_MIN) || (f32Value > JKOBJFUSN_PARAMS_F32PEDESTRIANVARIANCEINXFORQ_MAX))
   {
      u32Success = JKOBJFUSN_ERROR_INVALID_PARAMETER;
      (void)jk_error_management_addError(JKOBJFUSN_ERROR_INVALID_PARAMETER, JKOBJFUSN_AAU_PARAMETER_INTERFACE,
         JKOBJFUSN_AAU_PARAMETER_INTERFACE_SET_F32PEDESTRIANVARIANCEINXFORQ);
   }
   else
#endif
   {
      sCurrentParams.f32PedestrianVarianceInXForQ = f32Value;
   }

   return u32Success;
}

/* PRQA S 1532 2 *//* External Parameter Interface */
FUNC(uint32, ObjFusn_CODE) Fusion_set_f32PedestrianVarianceInYForQ(const float32 f32Value)
{
   uint32 u32Success = JKOBJFUSN_ERROR_NOERROR;   /* PRQA S 3204 1 *//* variable may be set to other values depending on run-time check activation */

#if (JK_RUNTIME_ERROR_CHECK == STD_ON)
   /* PRQA S 3316 2 *//* Parameter can be configured to be greater than zero */
   if ((f32Value < JKOBJFUSN_PARAMS_F32PEDESTRIANVARIANCEINYFORQ_MIN) || (f32Value > JKOBJFUSN_PARAMS_F32PEDESTRIANVARIANCEINYFORQ_MAX))
   {
      u32Success = JKOBJFUSN_ERROR_INVALID_PARAMETER;
      (void)jk_error_management_addError(JKOBJFUSN_ERROR_INVALID_PARAMETER, JKOBJFUSN_AAU_PARAMETER_INTERFACE,
         JKOBJFUSN_AAU_PARAMETER_INTERFACE_SET_F32VEHICLEVARIANCEINYFORQ);
   }
   else
#endif
   {
      sCurrentParams.f32PedestrianVarianceInYForQ = f32Value;
   }

   return u32Success;
}

/* PRQA S 1532 2 *//* External Parameter Interface */
FUNC(uint32, ObjFusn_CODE) Fusion_set_f32VehicleVarianceInXForQ(const float32 f32Value)
{
   uint32 u32Success = JKOBJFUSN_ERROR_NOERROR;   /* PRQA S 3204 1 *//* variable may be set to other values depending on run-time check activation */

#if (JK_RUNTIME_ERROR_CHECK == STD_ON)
   if ((f32Value < JKOBJFUSN_PARAMS_F32VEHICLEVARIANCEINXFORQ_MIN) || (f32Value > JKOBJFUSN_PARAMS_F32VEHICLEVARIANCEINXFORQ_MAX))
   {
      u32Success = JKOBJFUSN_ERROR_INVALID_PARAMETER;
      (void)jk_error_management_addError(JKOBJFUSN_ERROR_INVALID_PARAMETER, JKOBJFUSN_AAU_PARAMETER_INTERFACE,
         JKOBJFUSN_AAU_PARAMETER_INTERFACE_SET_F32VEHICLEVARIANCEINXFORQ);
   }
   else
#endif
   {
      sCurrentParams.f32VehicleVarianceInXForQ = f32Value;
   }

   return u32Success;
}

/* PRQA S 1532 2 *//* External Parameter Interface */
FUNC(uint32, ObjFusn_CODE) Fusion_set_f32VehicleVarianceInYForQ(const float32 f32Value)
{
   uint32 u32Success = JKOBJFUSN_ERROR_NOERROR;   /* PRQA S 3204 1 *//* variable may be set to other values depending on run-time check activation */

#if (JK_RUNTIME_ERROR_CHECK == STD_ON)
   /* PRQA S 3316 2 *//* Parameter can be configured to be greater than zero */
   if ((f32Value < JKOBJFUSN_PARAMS_F32VEHICLEVARIANCEINYFORQ_MIN) || (f32Value > JKOBJFUSN_PARAMS_F32VEHICLEVARIANCEINYFORQ_MAX))
   {
      u32Success = JKOBJFUSN_ERROR_INVALID_PARAMETER;
      (void)jk_error_management_addError(JKOBJFUSN_ERROR_INVALID_PARAMETER, JKOBJFUSN_AAU_PARAMETER_INTERFACE,
         JKOBJFUSN_AAU_PARAMETER_INTERFACE_SET_F32VEHICLEVARIANCEINYFORQ);
   }
   else
#endif
   {
      sCurrentParams.f32VehicleVarianceInYForQ = f32Value;
   }

   return u32Success;
}

/* PRQA S 1532 2 *//* External Parameter Interface */
FUNC(uint32, ObjFusn_CODE) Fusion_set_bOutputIsOverground(const boolean bValue)
{
   uint32 u32Success = JKOBJFUSN_ERROR_NOERROR;   /* PRQA S 3204 1 *//* variable may be set to other values depending on run-time check activation */

#if (JK_RUNTIME_ERROR_CHECK == STD_ON)
   /* PRQA S 3316 2 *//* Parameter can be configured to be greater than zero */
   if (
#if (JKOBJFUSN_PARAMS_BOUTPUTISOVERGROUND_MIN > 0)
       (bValue < JKOBJFUSN_PARAMS_BOUTPUTISOVERGROUND_MIN) ||
#endif
       (bValue > JKOBJFUSN_PARAMS_BOUTPUTISOVERGROUND_MAX))
   {
      u32Success = JKOBJFUSN_ERROR_INVALID_PARAMETER;
      (void)jk_error_management_addError(JKOBJFUSN_ERROR_INVALID_PARAMETER, JKOBJFUSN_AAU_PARAMETER_INTERFACE,
         JKOBJFUSN_AAU_PARAMETER_INTERFACE_SET_BOUTPUTISOVERGROUND);
   }
   else
#endif
   {
      sCurrentParams.bOutputIsOverground = bValue;
   }

   return u32Success;
}

/* PRQA S 1532 2 *//* External Parameter Interface */
FUNC(uint32, ObjFusn_CODE) Fusion_set_bUseTrackMerge(const boolean bValue)
{
   uint32 u32Success = JKOBJFUSN_ERROR_NOERROR;   /* PRQA S 3204 1 *//* variable may be set to other values depending on run-time check activation */

#if (JK_RUNTIME_ERROR_CHECK == STD_ON)
   /* PRQA S 3316 2 *//* Parameter can be configured to be greater than zero */
   if (
#if (JKOBJFUSN_PARAMS_BUSETRACKMERGE_MIN > 0)
       (bValue < JKOBJFUSN_PARAMS_BUSETRACKMERGE_MIN) ||
#endif
       (bValue > JKOBJFUSN_PARAMS_BUSETRACKMERGE_MAX))
   {
      u32Success = JKOBJFUSN_ERROR_INVALID_PARAMETER;
      (void)jk_error_management_addError(JKOBJFUSN_ERROR_INVALID_PARAMETER, JKOBJFUSN_AAU_PARAMETER_INTERFACE,
         JKOBJFUSN_AAU_PARAMETER_INTERFACE_SET_BUSETRACKMERGE);
   }
   else
#endif
   {
      sCurrentParams.bUseTrackMerge = bValue;
   }

   return u32Success;
}

/* PRQA S 1532 2 *//* External Parameter Interface */
FUNC(uint32, ObjFusn_CODE) Fusion_set_bUseCoasting(const boolean bValue)
{
   uint32 u32Success = JKOBJFUSN_ERROR_NOERROR;   /* PRQA S 3204 1 *//* variable may be set to other values depending on run-time check activation */

#if (JK_RUNTIME_ERROR_CHECK == STD_ON)
   /* PRQA S 3316 2 *//* Parameter can be configured to be greater than zero */
   if (
#if (JKOBJFUSN_PARAMS_BUSECOASTING_MIN > 0)
       (bValue < JKOBJFUSN_PARAMS_BUSECOASTING_MIN) ||
#endif
       (bValue > JKOBJFUSN_PARAMS_BUSECOASTING_MAX))
   {
      u32Success = JKOBJFUSN_ERROR_INVALID_PARAMETER;
      (void)jk_error_management_addError(JKOBJFUSN_ERROR_INVALID_PARAMETER, JKOBJFUSN_AAU_PARAMETER_INTERFACE,
         JKOBJFUSN_AAU_PARAMETER_INTERFACE_SET_BUSECOASTING);
   }
   else
#endif
   {
      sCurrentParams.bUseCoasting = bValue;
   }

   return u32Success;
}

/*==================[getter functions]================================================*/

/* PRQA S 1532 2 *//* External Parameter Interface */
FUNC(float32, ObjFusn_CODE) Fusion_get_f32DynCalPrmForAxleDstReToVehFrnt(void)
{
   return sCurrentParams.f32DynCalPrmForAxleDstReToVehFrnt;
}

/* PRQA S 1532 2 *//* External Parameter Interface */
FUNC(float32, ObjFusn_CODE) Fusion_get_f32DynCalPrmForCamLatDistToVehFrnt0(void)
{
   return sCurrentParams.f32DynCalPrmForCamLatDistToVehFrnt0;
}

/* PRQA S 1532 2 *//* External Parameter Interface */
FUNC(float32, ObjFusn_CODE) Fusion_get_f32DynCalPrmForCamLongDistToVehFrnt0(void)
{
   return sCurrentParams.f32DynCalPrmForCamLongDistToVehFrnt0;
}

/* PRQA S 1532 2 *//* External Parameter Interface */
FUNC(float32, ObjFusn_CODE) Fusion_get_f32DynCalPrmForCamLongDistToRearAxle(void)
{
   return (sCurrentParams.f32DynCalPrmForAxleDstReToVehFrnt - sCurrentParams.f32DynCalPrmForCamLongDistToVehFrnt0);
}

/* PRQA S 1532 2 *//* External Parameter Interface */
FUNC(uint8, ObjFusn_CODE) Fusion_get_u8VehCfgPrmInt(void)
{
   return sCurrentParams.u8VehCfgPrmInt;
}


/* PRQA S 1532 2 *//* External Parameter Interface */
FUNC(uint32, ObjFusn_CODE) Fusion_get_u32SensorMode(void)
{
   return sCurrentParams.u32SensorMode;
}

/* PRQA S 1532 2 *//* External Parameter Interface */
FUNC(float32, ObjFusn_CODE) Fusion_get_f32MatchGate(void)
{
   return sCurrentParams.f32MatchGate;
}

/* PRQA S 1532 2 *//* External Parameter Interface */
FUNC(float32, ObjFusn_CODE) Fusion_get_f32PedestrianVarianceInXForQ(void)
{
   return sCurrentParams.f32PedestrianVarianceInXForQ;
}

/* PRQA S 1532 2 *//* External Parameter Interface */
FUNC(float32, ObjFusn_CODE) Fusion_get_f32PedestrianVarianceInYForQ(void)
{
   return sCurrentParams.f32PedestrianVarianceInYForQ;
}

/* PRQA S 1532 2 *//* External Parameter Interface */
FUNC(float32, ObjFusn_CODE) Fusion_get_f32VehicleVarianceInXForQ(void)
{
   return sCurrentParams.f32VehicleVarianceInXForQ;
}

/* PRQA S 1532 2 *//* External Parameter Interface */
FUNC(float32, ObjFusn_CODE) Fusion_get_f32VehicleVarianceInYForQ(void)
{
   return sCurrentParams.f32VehicleVarianceInYForQ;
}

/* PRQA S 1532 2 *//* External Parameter Interface */
FUNC(boolean, ObjFusn_CODE) Fusion_get_bOutputIsOverground(void)
{
   return sCurrentParams.bOutputIsOverground;
}

/* PRQA S 1532 2 *//* External Parameter Interface */
FUNC(boolean, ObjFusn_CODE) Fusion_get_bUseTrackMerge(void)
{
   return sCurrentParams.bUseTrackMerge;
}

/* PRQA S 1532 2 *//* External Parameter Interface */
FUNC(boolean, ObjFusn_CODE) Fusion_get_bUseCoasting(void)
{
   return sCurrentParams.bUseCoasting;
}

/* PRQA S 1503 2 *//* Required for Integration test */
FUNC(void, ObjFusn_CODE) Fusion_get_allParameters(CONSTP2VAR(JkObjFusn_ParametersType, AUTOMATIC, ObjFusn_VAR_NOINIT) _sParameters)
{
#if (JK_RUNTIME_POINTER_CHECK == STD_ON)
   if (NULL_PTR == _sParameters)
   {
   }
   else
#endif
   {
      _sParameters->bOutputIsOverground                  = sCurrentParams.bOutputIsOverground;
      _sParameters->bUseCoasting                         = sCurrentParams.bUseCoasting;  
      _sParameters->bUseTrackMerge                       = sCurrentParams.bUseTrackMerge;
      _sParameters->f32MatchGate                         = sCurrentParams.f32MatchGate;
      _sParameters->f32PedestrianVarianceInXForQ         = sCurrentParams.f32PedestrianVarianceInXForQ;
      _sParameters->f32PedestrianVarianceInYForQ         = sCurrentParams.f32PedestrianVarianceInYForQ;
      _sParameters->f32VehicleVarianceInXForQ            = sCurrentParams.f32VehicleVarianceInXForQ;
      _sParameters->f32VehicleVarianceInYForQ            = sCurrentParams.f32VehicleVarianceInYForQ;
      _sParameters->u32SensorMode                        = sCurrentParams.u32SensorMode;  
   }
}
#define ObjFusn_STOP_SEC_SLOW_CODE
#include "ObjFusn_MemMap.h"
/** /} */
