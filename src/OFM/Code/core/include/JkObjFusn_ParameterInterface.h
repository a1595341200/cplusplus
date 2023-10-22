/*********************************************************************************
* Copyright(C) JiKa Inc. All rights reserved.
* FileName: JKOBJFUSN_ParameterInterface.h
* Author:  ruifeng.ding
* Version: 1.00
* Date:  2021/08/11
* Description: 
	way for setting fusion parameters from host application

	Currently all parameters need to be set at startup time, i.e. after
	Fusion_init has been called and before the start of the first cycle
	in the near future additional parameters might get introduced that
	may be changed during runtime.
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

#ifndef JKOBJFUSN_PARAMETERINTERFACE_H
#define JKOBJFUSN_PARAMETERINTERFACE_H

#ifdef   __cplusplus
extern "C" {
#endif

#include "Jk_common_types.h"
#include "JkObjFusn_Params.h"


/*==================[setter functions]================================================*/
#define ObjFusn_START_SEC_SLOW_CODE
#include "ObjFusn_MemMap.h"
FUNC(uint32, ObjFusn_CODE) Fusion_set_u32SensorMode(const uint32 u32Value);

FUNC(uint32, ObjFusn_CODE) Fusion_set_f32MatchGate(const float32 f32Value);

FUNC(uint32, ObjFusn_CODE) Fusion_set_f32PedestrianVarianceInXForQ(const float32 f32Value);

FUNC(uint32, ObjFusn_CODE) Fusion_set_f32PedestrianVarianceInYForQ(const float32 f32Value);

FUNC(uint32, ObjFusn_CODE) Fusion_set_f32VehicleVarianceInXForQ(const float32 f32Value);

FUNC(uint32, ObjFusn_CODE) Fusion_set_f32VehicleVarianceInYForQ(const float32 f32Value);

FUNC(uint32, ObjFusn_CODE) Fusion_set_bOutputIsOverground(const boolean bValue);

FUNC(uint32, ObjFusn_CODE) Fusion_set_bUseTrackMerge(const boolean bValue);

FUNC(uint32, ObjFusn_CODE) Fusion_set_bUseCoasting(const boolean bValue);


/* Set dynamic calibration parameters */
FUNC(uint32, ObjFusn_CODE) Fusion_set_f32DynCalPrmForAxleDstReToVehFrnt(const float32 f32Value);
FUNC(uint32, ObjFusn_CODE) Fusion_set_f32DynCalPrmForCamLatDistToVehFrnt0(const float32 f32Value);
FUNC(uint32, ObjFusn_CODE) Fusion_set_f32DynCalPrmForCamLongDistToVehFrnt0(const float32 f32Value);
FUNC(uint32, ObjFusn_CODE) Fusion_set_u8VehCfgPrmInt(const uint8 u8Value);

/*==================[getter functions]================================================*/
FUNC(uint32, ObjFusn_CODE) Fusion_get_u32SensorMode(void);
FUNC(float32, ObjFusn_CODE) Fusion_get_f32MatchGate(void);
FUNC(float32, ObjFusn_CODE) Fusion_get_f32PedestrianVarianceInXForQ(void);
FUNC(float32, ObjFusn_CODE) Fusion_get_f32PedestrianVarianceInYForQ(void);
FUNC(float32, ObjFusn_CODE) Fusion_get_f32VehicleVarianceInXForQ(void);
FUNC(float32, ObjFusn_CODE) Fusion_get_f32VehicleVarianceInYForQ(void);
FUNC(boolean, ObjFusn_CODE) Fusion_get_bOutputIsOverground(void);
FUNC(boolean, ObjFusn_CODE) Fusion_get_bUseTrackMerge(void);
FUNC(boolean, ObjFusn_CODE) Fusion_get_bUseCoasting(void);

/* get dynamic calibration parameters  old version 20210813*/
//extern _declspec(dllexport) FUNC(float32, ObjFusn_CODE) Fusion_get_f32DynCalPrmForAxleDstReToVehFrnt(void);
//extern _declspec(dllexport) FUNC(float32, ObjFusn_CODE) Fusion_get_f32DynCalPrmForCamLatDistToVehFrnt0(void);
//extern _declspec(dllexport) FUNC(float32, ObjFusn_CODE) Fusion_get_f32DynCalPrmForCamLongDistToVehFrnt0(void);
//extern _declspec(dllexport) FUNC(float32, ObjFusn_CODE) Fusion_get_f32DynCalPrmForCamLongDistToRearAxle(void);
//extern _declspec(dllexport) FUNC(uint8, ObjFusn_CODE) Fusion_get_u8VehCfgPrmInt(void);

FUNC(float32, ObjFusn_CODE) Fusion_get_f32DynCalPrmForAxleDstReToVehFrnt(void);
FUNC(float32, ObjFusn_CODE) Fusion_get_f32DynCalPrmForCamLatDistToVehFrnt0(void);
FUNC(float32, ObjFusn_CODE) Fusion_get_f32DynCalPrmForCamLongDistToVehFrnt0(void);
FUNC(float32, ObjFusn_CODE) Fusion_get_f32DynCalPrmForCamLongDistToRearAxle(void);
FUNC(uint8, ObjFusn_CODE) Fusion_get_u8VehCfgPrmInt(void);


/** this method sets all fusion parameters to their default values */
FUNC(void, ObjFusn_CODE) Fusion_set_DefaultParameters(void);

/** this method is only exported for integration testing. It allows to read the
 * internal parameter structure. More precisely it copies the contents of the 
 * internal parameter structure to the given location. */

FUNC(void, ObjFusn_CODE) Fusion_get_allParameters(CONSTP2VAR(JkObjFusn_ParametersType, AUTOMATIC, ObjFusn_VAR_NOINIT) _sParameters);

#define ObjFusn_STOP_SEC_SLOW_CODE
#include "ObjFusn_MemMap.h"

#ifdef   __cplusplus
}
#endif

#endif /**@} JKOBJFUSN_PARAMETERINTERFACE_H */

