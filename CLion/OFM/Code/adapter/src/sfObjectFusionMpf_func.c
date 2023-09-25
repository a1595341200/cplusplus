/******************************************************************************

JIKA ELECTRONIC document.

-------------------------------------

Copyright JiKa Inc. All rights reserved.

*******************************************************************************
C-File Template Version: 
******************************************************************************/
/* PRQA S 0288 ++ */
/*
 * Explanation:
 *    Source file for s-function wrapper Fusion Core in CADS4 simulink
 */
/*
$Revision: 1.2 $
$ProjectName: e:/Automated_Driving_System_Library/ComponentLibrary/ObjFusn/Integration/Platform/Simulink/Geely/Wrapper/ObjectFusionMpf/project.pj $
*/
/* PRQA S 0288 -- */
/*!****************************************************************************

@details
   <Describes details of this module 'Template.c' file within overall
    context of component implementation>

******************************************************************************/
/******************************************************************************
EXTERNAL DEPENDENCIES
******************************************************************************/

#include "sfObjectFusionMpf_func.h"

/******************************************************************************
MODULE DEFINES
******************************************************************************/

/******************************************************************************
MODULE TYPES
******************************************************************************/

/******************************************************************************
DECLARATION OF LOCAL FUNCTIONS
******************************************************************************/

/******************************************************************************
DEFINITION OF EXPORTED VARIABLES
******************************************************************************/

/******************************************************************************
DEFINITION OF LOCAL CONSTANT DATA
******************************************************************************/

/******************************************************************************
DEFINITION OF EXPORTED CONSTANT DATA
******************************************************************************/

/******************************************************************************
MODULE FUNCTION-LIKE MACROS
******************************************************************************/

/******************************************************************************
DEFINITION OF LOCAL FUNCTION
******************************************************************************/

/******************************************************************************
DEFINITION OF APIs
******************************************************************************/

/*!****************************************************************************
* @details
*     Initialize Jk object fusion with input parameters
* @param[in]
*     const uint32 u32SensorMode
* @param[in]
*     const uint8  u8FusionMode
* @param[in]
*     const float32 f32PostPrediction
* @param[in]
*     const uint8  u8WeightMode
* @param[in]
*     const float32 f32MatchGate
* @param[in]
*     const uint8 u8OosmMode
* @param[in]
*     const uint8 u8AssociationMode
* @param[in]
*     const boolean bUseForMotionAccX
* @param[in]
*     const boolean bUseForMotionAccY
* @param[out]
*     none
* @return
*     none
* @constraints
*     <>
* @invocation_criteria
*     <>
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
                                 const uint8 ASDMVehicleType)
{
   uint32 u32Success = TRUE;

   Fusion_init();
   
   u32Success = Fusion_set_u32SensorMode(u32SensorMode);
   u32Success = Fusion_set_f32MatchGate(f32MatchGate);
   
   u32Success = Fusion_set_f32PedestrianVarianceInXForQ(f32PedestrianVarianceInXForQ);
   u32Success = Fusion_set_f32PedestrianVarianceInYForQ(f32PedestrianVarianceInYForQ);

   u32Success = Fusion_set_f32VehicleVarianceInXForQ(f32VehicleVarianceInXForQ);
   u32Success = Fusion_set_f32VehicleVarianceInYForQ(f32VehicleVarianceInYForQ);

   u32Success = Fusion_set_bUseTrackMerge(bUseTrackMerge);

   u32Success = Fusion_set_bOutputIsOverground(bOutputIsOverground);
   u32Success = Fusion_set_bUseCoasting(bUseCoasting);

   /* set default DynCal values to SX11 */
   u32Success |= Fusion_set_u8VehCfgPrmInt(ASDMVehicleType);
   u32Success |= Fusion_set_f32DynCalPrmForAxleDstReToVehFrnt(f32DynCalPrmForAxleDstReToVehFrnt);
   u32Success |= Fusion_set_f32DynCalPrmForCamLatDistToVehFrnt0(f32DynCalPrmForCamLatDistToVehFrnt);
   u32Success |= Fusion_set_f32DynCalPrmForCamLongDistToVehFrnt0(f32DynCalPrmForCamLongDistToVehFrnt);

}


/*!****************************************************************************
* @details
*     Call input adapters, Object Fusion and output adapter
* @param[in]
*     const stJkObjectList_t *pCamObjLists_Input
* @param[in]
*     const stJkObjectList_t *pRadarObjLists_Input
* @param[in]
*     JkObjFusn_EgoMotionType *EgoMotion
* @param[in]
*     JkObjFusn_EgoMotionType *EgoMotion
* @param[out]
*     const uint32 u32TimeStamp
* @param[out]
*     stRaCamObjectVcc_t *pRACAMObjListOut
* @return
*     none
* @constraints
*     <>
* @invocation_criteria
*     <>
******************************************************************************/

void sfObjectFusionMpf_Outputs_wrapper(const FrntRdrObjList_4D *const pFrntRadarObjLists_Input,
        const FrntCamObjList *const pCamObjLists_Input,
        const AroundCamObjList *const pAroundCamObjList_Input_LF,
        const AroundCamObjList *const pAroundCamObjList_Input_RF,
        const AroundCamObjList *const pAroundCamObjList_Input_LR,
        const AroundCamObjList *const pAroundCamObjList_Input_RR,
        const JkObjFusn_EgoMotionType *const EgoMotion,
        const uint32 u32TimeStamp,
        JkObjFusn_ObjectListType *const pFusnObjLists_Output,
        JkObjFusn_ErrorBufferType  *const pErrorBuffer)
{

   JkObjFusn_ObjectListType *inObjListVector[3];   /* array of pointers to lists */                /* only internal, unused in Simulink implementation */

   JkObjFusn_ObjectListType radarObjectsOut_4D_F;
   JkObjFusn_ObjectListType camObjectsOut;
   JkObjFusn_ObjectListType camObjectsOut_FL;
   JkObjFusn_ObjectListType camObjectsOut_FR;
   JkObjFusn_ObjectListType camObjectsOut_RL;
   JkObjFusn_ObjectListType camObjectsOut_RR;
   
   // Trackable_initObjectList(&radarObjectsOut_4D_F);
   // Trackable_initObjectList(&camObjectsOut);
   // Trackable_initObjectList(&camObjectsOut_FL);
   // Trackable_initObjectList(&camObjectsOut_FR);
   // Trackable_initObjectList(&camObjectsOut_RL);
   // Trackable_initObjectList(&camObjectsOut_RR);

   Trackable_initObjectList(pFusnObjLists_Output);

   FrntRdrObjListToJkObjListConverter_4D(&radarObjectsOut_4D_F,pFrntRadarObjLists_Input,u32TimeStamp);
   FrntCamObjListToJkObjListConverter(&camObjectsOut,pCamObjLists_Input, u32TimeStamp);
   // AroundCamObjListToJkObjListConverter(&camObjectsOut_FL,pAroundCamObjList_Input_LF, u32TimeStamp,1u);
   // AroundCamObjListToJkObjListConverter(&camObjectsOut_FR,pAroundCamObjList_Input_RF, u32TimeStamp,2u);
   // AroundCamObjListToJkObjListConverter(&camObjectsOut_RL,pAroundCamObjList_Input_LR, u32TimeStamp,3u);
   // AroundCamObjListToJkObjListConverter(&camObjectsOut_RR,pAroundCamObjList_Input_RR, u32TimeStamp,4u);
   
   inObjListVector[0] = &camObjectsOut;
   inObjListVector[1] = &radarObjectsOut_4D_F;
   

   // inObjListVector[2] = &camObjectsOut_FL;
   // inObjListVector[3] = &camObjectsOut_FR;
   // inObjListVector[4] = &camObjectsOut_RL;
   // inObjListVector[5] = &camObjectsOut_RR;


   inObjListVector[2] = (JkObjFusn_ObjectListType *)NULL_PTR; /* the fusion cycle method expects the input list to be NULL terminated (unless n == N) */

   PerformFusionCycle(inObjListVector, EgoMotion, 0.025, pFusnObjLists_Output,pErrorBuffer);


}


/******************************************************************************
End Of File
*****************************************************************************/
