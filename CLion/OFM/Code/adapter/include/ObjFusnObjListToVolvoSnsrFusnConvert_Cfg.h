/*********************************************************************************
* Copyright(C) JiKa Inc. All rights reserved.
* FileName: ObjFusnObjListToVolvoSnsrFusnConvert_Cfg.h 
* Author:  ruifeng.ding
* Version: 1.00
* Date:  2021/08/11
* Description: 
	This module provides methods to convert objects of the volvo 
	CADS4 object list
	This file provides configuration data of this module.
* Others:
* Function List:
    1.
    2.
* History: 
    1.Date:
      Author:
      Modification:
    2.
**********************************************************************************/

#ifndef OBJFUSNOBJLISTTOVOLVOSNSRFUSNCONVERT_CFG_H_
#define OBJFUSNOBJLISTTOVOLVOSNSRFUSNCONVERT_CFG_H_

#ifdef __cplusplus
extern "C" {
#endif
    
#include "JkObjFusn_ConfigVehicle.h"

/*==================[macros]================================================*/

#define   JKRACAM_SPEED_THRESHOLD                          (1.5f)   /* speed threshold [m/s] */
#define   JKRACAM_SPEED_RADAR_THRESHOLD_SPEED              (4.0f)   /* speed threshold [m/s] for radar only objects for class unidentified vehicle      */
#define   JKRACAM_RADAR_ONLY_TO_UNID_VEHICLE_MAX_HEADING   (0.52f)  /* Maximum heading angle for radar only objects and class type unidentified vehicle */
#define   JKRACAM_RADAR_ONLY_TO_UNID_VEHICLE_MIN_CYCLES_EGO_MOVING  (80u)
#define   JKRACAM_RADAR_ONLY_TO_UNID_VEHICLE_NUM_CYCLES_EGO_STATIONARY (128u)   
#define   JKRACAM_SPEED_VAR_THRESHOLD                      (1.0f)   /* speed threshold [m/s] for calculation of stdDev */
#define   JKRACAM_SPEED_THRESHOLD_CONFIDENCE_CALCULATION   (2.0f)   /* If absolute speed is less than threshold, variance of heading and 
                                                                        acceleration will be set defined default values */
#define   JKRACAM_DEFAULT_ACCELERATION_VARIANCE            (1.0f)   /* Default values to be used if absolute speed is less than defined threshold */
#define   JKRACAM_DEFAULT_HEADING_VARIANCE                 (1.0f)

/** Geometry */
#define   JKRACAM_GEOMETRY_DEFAULT_WIDTH                   (0.2f)   /* Default width used if track is not confirmed by vision */
#define   JKRACAM_GEOMETRY_MAX_NO_VISION_CYCLES            (2u)     /* Use default width if number of no vision cycles exceeds paramter */

/* Sensor pattern indicating that object is seen by both sensors */
#define   JKRACAM_SENSOR_PATTERN_FUSED_OBJECT  (JKOBJFUSN_TRACKABLE_U32SENSOR_RADAR_FRONT_CENTER | JKOBJFUSN_TRACKABLE_U32SENSOR_MVS_FRONT)
#define   JKRACAM_SENSOR_PATTERN_COASTED       (0u)

/* Thresholds required for position confidence calculation */
#define  JKRACAM_POSITION_CONFIDENCE_ABS_SPEED_THRESHOLD   (15.f)    /* Oncoming vehicles with absolute velocity less than threshold are set to radar only */
#define  JKRACAM_POSITION_CONFIDENCE_TIMEOUT               (1000u)   /* for the first JKRACAM_POSITION_CONFIDENCE_TIMEOUT ms */

#define  JKRACAM_FUSION_SOURCE_COASTED            (0x00u)
#define  JKRACAM_FUSION_SOURCE_RADAR_ONLY         (0x01u)
#define  JKRACAM_FUSION_SOURCE_VISION_ONLY        (0x02u)
#define  JKRACAM_FUSION_SOURCE_FUSED              (0x03u)
#define  JKRACAM_FUSION_SOURCE_DEFAULT            (0xFFu)

/* Omit hardcoded magic numbers */
#define  JKRACAM_DEFAULT_LANE_LENGTH              (100.f)
#define  JKRACAM_DEFAULT_TURN_INDICATOR           (3u)
#define  JKRACAM_DEFAULT_VISION_ID                (0u)

/* Maximum values for Standard Deviation */
#define JKRACAM_MAX_STD_DEV_SPEED                 (10.f)
#define JKRACAM_MAX_STD_DEV_ACC                   (5.f)
#define JKRACAM_MAX_STD_DEV_HEADING               (1.57079f)
      
/** Thresholds to determine if ego-vehicle is stationary */
#define JKRACAM_EGO_MOTION_STATIONARY_MAX_SPEED         (0.30f)
#define JKRACAM_EGO_MOTION_STATIONARY_MAX_ACCELERATION  (0.25f)

/* Thresholds for assigning CMBB Values depending on quality */
// #define JK_RACAM_CONVERTER_CMBB_HIGH_THRES        (75.f)
// #define JK_RACAM_CONVERTER_CMBB_MED_THRES         (50.f)
// #define JK_RACAM_CONVERTER_CMBB_LOW_THRES         (25.f)

#define JK_RACAM_CONVERTER_CMBB_HIGH_THRES        (40.f) //Leo add :To adapter sensors data
#define JK_RACAM_CONVERTER_CMBB_MED_THRES         (30.f) //Leo add :To adapter sensors data
#define JK_RACAM_CONVERTER_CMBB_LOW_THRES         (25.f) //Leo add :To adapter sensors data
   
/* validate CMBBconfidence level with ROI*/
#define JK_RACAM_CONVERTER_CMBB_VALIDATION        (STD_OFF)

/* verify ASIL level of objects*/
#define JK_RACAM_CONVERTER_ASIL_VERIFICATION      (STD_OFF)

/* do plausibility checks for objects depending on class type */
#define JK_RACAM_CONVERTER_OBJ_PLAUSIBILITY       (STD_OFF)

#if JK_RACAM_CONVERTER_OBJ_PLAUSIBILITY == STD_ON
/** Maximum Ego-Speed to allow braking / warning on stationary targets */
#define JK_RACAM_CONVERTER_PLAUSIBILITY_CHECK_MAX_EGO_SPEED_STATIONARY (14.f)

/** Plausibility checks for class type Pedestrian */
#define JK_RACAM_CONVERTER_PLAUSIBILITY_CHECK_PEDESTRIAN_POS_X_MIN     (2.f)
#define JK_RACAM_CONVERTER_PLAUSIBILITY_CHECK_PEDESTRIAN_POS_X_MAX     (35.f)
#define JK_RACAM_CONVERTER_PLAUSIBILITY_CHECK_PEDESTRIAN_POS_Y_MIN     (-15.f)  
#define JK_RACAM_CONVERTER_PLAUSIBILITY_CHECK_PEDESTRIAN_POS_Y_MAX     (15.f)  
#define JK_RACAM_CONVERTER_PLAUSIBILITY_CHECK_PEDESTRIAN_VEL_X_MIN     (-8.f)
#define JK_RACAM_CONVERTER_PLAUSIBILITY_CHECK_PEDESTRIAN_VEL_X_MAX     (8.f)
#define JK_RACAM_CONVERTER_PLAUSIBILITY_CHECK_PEDESTRIAN_VEL_Y_MIN     (-8.f)
#define JK_RACAM_CONVERTER_PLAUSIBILITY_CHECK_PEDESTRIAN_VEL_Y_MAX     (8.f)
#define JK_RACAM_CONVERTER_PLAUSIBILITY_CHECK_PEDESTRIAN_SPEED_MAX     (8.f)
#define JK_RACAM_CONVERTER_PLAUSIBILITY_CHECK_PEDESTRIAN_ACC_X_MIN     (-1.5f)
#define JK_RACAM_CONVERTER_PLAUSIBILITY_CHECK_PEDESTRIAN_ACC_X_MAX     (1.5f)
#define JK_RACAM_CONVERTER_PLAUSIBILITY_CHECK_PEDESTRIAN_ACC_Y_MIN     (-1.5f)
#define JK_RACAM_CONVERTER_PLAUSIBILITY_CHECK_PEDESTRIAN_ACC_Y_MAX     (1.5f)
#define JK_RACAM_CONVERTER_PLAUSIBILITY_CHECK_PEDESTRIAN_YAW_RATE_MIN  (-1.2566f)
#define JK_RACAM_CONVERTER_PLAUSIBILITY_CHECK_PEDESTRIAN_YAW_RATE_MAX  (1.2566f)

/** Plausibility checks for class type Vehicle */
#define JK_RACAM_CONVERTER_PLAUSIBILITY_CHECK_VEHICLE_POS_X_MIN      (2.f)
#define JK_RACAM_CONVERTER_PLAUSIBILITY_CHECK_VEHICLE_POS_X_MAX      (70.f)
#define JK_RACAM_CONVERTER_PLAUSIBILITY_CHECK_VEHICLE_POS_Y_MIN      (-15.f)  
#define JK_RACAM_CONVERTER_PLAUSIBILITY_CHECK_VEHICLE_POS_Y_MAX      (15.f)  
#define JK_RACAM_CONVERTER_PLAUSIBILITY_CHECK_VEHICLE_VEL_X_MIN      (-4.f)
#define JK_RACAM_CONVERTER_PLAUSIBILITY_CHECK_VEHICLE_VEL_X_MAX      (20.f)
#define JK_RACAM_CONVERTER_PLAUSIBILITY_CHECK_VEHICLE_VEL_Y_MIN      (-5.f)
#define JK_RACAM_CONVERTER_PLAUSIBILITY_CHECK_VEHICLE_VEL_Y_MAX      (5.f)
#define JK_RACAM_CONVERTER_PLAUSIBILITY_CHECK_VEHICLE_ACC_X_MIN      (-10.f)
#define JK_RACAM_CONVERTER_PLAUSIBILITY_CHECK_VEHICLE_ACC_X_MAX      (10.f)
#define JK_RACAM_CONVERTER_PLAUSIBILITY_CHECK_VEHICLE_ACC_Y_MIN      (-1.5f)
#define JK_RACAM_CONVERTER_PLAUSIBILITY_CHECK_VEHICLE_ACC_Y_MAX      (1.5f)
#define JK_RACAM_CONVERTER_PLAUSIBILITY_CHECK_VEHICLE_SPEED_MAX      (20.f)
#define JK_RACAM_CONVERTER_PLAUSIBILITY_CHECK_VEHICLE_YAW_RATE_MIN   (-0.5236f)
#define JK_RACAM_CONVERTER_PLAUSIBILITY_CHECK_VEHICLE_YAW_RATE_MAX   (0.5236f)
#define JK_RACAM_CONVERTER_PLAUSIBILITY_CHECK_VEHICLE_HEADING_MIN    (-0.7854f)
#define JK_RACAM_CONVERTER_PLAUSIBILITY_CHECK_VEHICLE_HEADING_MAX    (0.7854f)


/** Plausibility checks for class type Bicycle */
#define JK_RACAM_CONVERTER_PLAUSIBILITY_CHECK_BICYCLE_POS_X_MIN      (2.f)
#define JK_RACAM_CONVERTER_PLAUSIBILITY_CHECK_BICYCLE_POS_X_MAX      (50.f)
#define JK_RACAM_CONVERTER_PLAUSIBILITY_CHECK_BICYCLE_POS_Y_MIN      (-15.f)  
#define JK_RACAM_CONVERTER_PLAUSIBILITY_CHECK_BICYCLE_POS_Y_MAX      (15.f)  
#define JK_RACAM_CONVERTER_PLAUSIBILITY_CHECK_BICYCLE_VEL_X_MIN      (-4.f)
#define JK_RACAM_CONVERTER_PLAUSIBILITY_CHECK_BICYCLE_VEL_X_MAX      (10.f)
#define JK_RACAM_CONVERTER_PLAUSIBILITY_CHECK_BICYCLE_VEL_Y_MIN      (-10.f)
#define JK_RACAM_CONVERTER_PLAUSIBILITY_CHECK_BICYCLE_VEL_Y_MAX      (10.f)
#define JK_RACAM_CONVERTER_PLAUSIBILITY_CHECK_BICYCLE_ACC_X_MIN      (-2.f)
#define JK_RACAM_CONVERTER_PLAUSIBILITY_CHECK_BICYCLE_ACC_X_MAX      (2.f)
#define JK_RACAM_CONVERTER_PLAUSIBILITY_CHECK_BICYCLE_ACC_Y_MIN      (-1.5f)
#define JK_RACAM_CONVERTER_PLAUSIBILITY_CHECK_BICYCLE_ACC_Y_MAX      (1.5f)
#define JK_RACAM_CONVERTER_PLAUSIBILITY_CHECK_BICYCLE_SPEED_MAX      (10.f)
#define JK_RACAM_CONVERTER_PLAUSIBILITY_CHECK_BICYCLE_YAW_RATE_MIN   (-1.2566f)
#define JK_RACAM_CONVERTER_PLAUSIBILITY_CHECK_BICYCLE_YAW_RATE_MAX   (1.2566f)
#define JK_RACAM_CONVERTER_PLAUSIBILITY_CHECK_BICYCLE_HEADING_MIN    (-2.3562f)
#define JK_RACAM_CONVERTER_PLAUSIBILITY_CHECK_BICYCLE_HEADING_MAX    (2.3562f)
#endif

#if JK_RACAM_CONVERTER_CMBB_VALIDATION == STD_ON
#define JK_RACAM_CONVERTER_ROI_LUT_SIZE               (9u)

LOCAL CONST(float32, ObjFusn_CONST) s_af32EgoSpeedDataPoints[JK_RACAM_CONVERTER_ROI_LUT_SIZE] = { 10.f / 3.6f,15.f / 3.6f,20.f / 3.6f,25.f / 3.6f,30.f / 3.6f,35.f / 3.6f,40.f / 3.6f,45.f / 3.6f,50.f / 3.6f };

/* Pedestrian/unknown class longitudinal values for confidence level 2 */
LOCAL CONST(float32, ObjFusn_CONST) s_af32PedLongLowConfidence[JK_RACAM_CONVERTER_ROI_LUT_SIZE] = { 2.6f,4.2f,6.f,6.5f,6.7f,8.15f,9.5f,10.f,10.5f };
LOCAL CONST(float32, ObjFusn_CONST) s_af32PedLatLowConfidence[JK_RACAM_CONVERTER_ROI_LUT_SIZE] = { 1.2f,1.3f,1.54f,1.65f,1.87f,1.87f,1.87f,1.87f,1.87f };

/* Pedestrian/unknown class longitudinal values for confidence level 3 */
LOCAL CONST(float32, ObjFusn_CONST) s_af32PedLongHighConfidence[JK_RACAM_CONVERTER_ROI_LUT_SIZE] = { 2.5f,3.85f,5.2f,5.7f,5.9f,7.15f,8.5f,9.f,9.5f };
LOCAL CONST(float32, ObjFusn_CONST) s_af32PedLatHighConfidence[JK_RACAM_CONVERTER_ROI_LUT_SIZE] = { 1.1f,1.15f,1.37f,1.4f,1.5f,1.5f,1.5f,1.5f,1.5f };

/* Car/Truck class longitudinal values for confidence level 2 */
LOCAL CONST(float32, ObjFusn_CONST) s_af32VehLongLowConfidence[JK_RACAM_CONVERTER_ROI_LUT_SIZE] = { 1.94f,3.5f,5.f,6.7f,8.75f,11.42f,14.45f,15.5f,19.f };
LOCAL CONST(float32, ObjFusn_CONST) s_af32VehLatLowConfidence[JK_RACAM_CONVERTER_ROI_LUT_SIZE] = { 1.f,1.f,1.f,1.f,1.f,1.f,1.f,1.f,1.f };

/* Car/Truck class longitudinal values for confidence level 3 */
LOCAL CONST(float32, ObjFusn_CONST) s_af32VehLongHighConfidence[JK_RACAM_CONVERTER_ROI_LUT_SIZE] = { 1.75f,3.1f,4.44f,5.f,6.5f,7.6f,9.5f,11.5f,13.f };
LOCAL CONST(float32, ObjFusn_CONST) s_af32VehLatHighConfidence[JK_RACAM_CONVERTER_ROI_LUT_SIZE] = { 1.f,1.f,1.f,1.f,1.f,1.f,1.f,1.f,1.f };

#endif


/*==================[function]====================================*/

/*==================[external constants]====================================*/



#ifdef __cplusplus
}
#endif

#endif /* OBJFUSNOBJLISTTOVOLVOSNSRFUSNCONVERT_CFG_H_ */
