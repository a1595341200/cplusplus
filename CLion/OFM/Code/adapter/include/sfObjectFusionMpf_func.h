
#ifndef SFOBJECTFUSIONMPF_FUNC_H_
#define SFOBJECTFUSIONMPF_FUNC_H_ 1   

#ifdef __cplusplus
extern "C" {
#endif
/******************************************************************************

JIKA ELECTRONIC document.

-------------------------------------------------------------------------------

Copyright JiKa Inc. All rights reserved.

*******************************************************************************
H-File Template Version: 
*******************************************************************************

Overview of the interfaces:
   Input interface: Radar, Camera Object lists and Egomotion structs
   Output interface: RaCam Object list

******************************************************************************/
/* PRQA S 0288 ++ */
/*
 * Explanation:
 *    Header file for s-function wrapper Fusion Core in CADS4 simulink
 */
/*
$Revision: 1.2 $
$ProjectName: e:/Automated_Driving_System_Library/ComponentLibrary/ObjFusn/Integration/Platform/Simulink/Geely/Wrapper/ObjectFusionMpf/project.pj $
*/
/* PRQA S 0288 -- */
/*****************************************************************************/
/******************************************************************************
EXTERNAL DEPENDENCIES
******************************************************************************/

#include "Jk_common_types.h"
#include "Jk_Fusion.h"
#include "JkObjFusn_EgoMotionType.h"
#include "JkObjFusn_ObjectListType.h"

#include "JkObjFusn_TrackableListUtils.h"

#include "RadarConverter.h"
#include "CamConverter.h"
   
/******************************************************************************
DEFINITION OF CONSTANTS
******************************************************************************/

/******************************************************************************
DECLARATION OF TYPES
******************************************************************************/

/******************************************************************************
DECLARATION OF VARIABLES
******************************************************************************/

/******************************************************************************
DECLARATION OF CONSTANT DATA
******************************************************************************/

/******************************************************************************
DECLARATION OF FUNCTIONS
******************************************************************************/

void sfObjectFusionMpf_Init_wrapper(const uint32 u32SensorMode,
                                 const float32 f32MatchGate,
                                 const float32 f32PedestrianVarianceInXForQ,
                                 const float32 f32PedestrianVarianceInYForQ,
                                 const float32 f32VehicleVarianceInXForQ,
                                 const float32 f32VehicleVarianceInYForQ,
                                 const boolean  bUseTrackMerge,
                                 const float32  f32AdditionalQonDiagonal,
                                 const boolean  bOutputIsOverground,
                                 const boolean  bUseCoasting,
                                 const uint32   u32CoastedSensor,
                                 const float32 f32DynCalPrmForAxleDstReToVehFrnt,
                                 const float32 f32DynCalPrmForCamLongDistToVehFrnt,
                                 const float32 f32DynCalPrmForCamLatDistToVehFrnt,
                                 const uint8 ASDMVehicleType);
 
void sfObjectFusionMpf_Outputs_wrapper(const FrntRdrObjList_4D *const pFrntRadarObjLists_Input,
        const FrntCamObjList *const pCamObjLists_Input,
        const AroundCamObjList *const pAroundCamObjList_Input_LF,
        const AroundCamObjList *const pAroundCamObjList_Input_RF,
        const AroundCamObjList *const pAroundCamObjList_Input_LR,
        const AroundCamObjList *const pAroundCamObjList_Input_RR,
        const JkObjFusn_EgoMotionType *const EgoMotion,
        const uint32 u32TimeStamp,
        JkObjFusn_ObjectListType *const pFusnObjLists_Output,
        JkObjFusn_ErrorBufferType  *const pErrorBuffer);


/******************************************************************************
DECLARATION OF FUNCTION-LIKE MACROS
******************************************************************************/

#ifdef __cplusplus
}
#endif

/******************************************************************************
End Of File
*****************************************************************************/

#endif /* _SFOBJECTFUSIONRACAM_WRAPPER_H_ */