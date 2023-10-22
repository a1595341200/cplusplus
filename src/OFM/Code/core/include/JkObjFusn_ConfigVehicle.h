/*********************************************************************************
* Copyright(C) JiKa Inc. All rights reserved.
* FileName: JkObjFusn_ConfigVehicle.h
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

#ifndef JKOBJFUSN_CONFIGVEHICLE_H
#define JKOBJFUSN_CONFIGVEHICLE_H

#ifdef	__cplusplus
extern "C" {
#endif

/*==================[inclusions]============================================*/
/*==================[macros]================================================*/
/**
 * Define maximum number of sensor input object lists.
 * strongly affects memory footprint of certain fusion modes 
 */
#define JK_FUSION_MAX_INPUTS         (2u)

///**
// * maximum number of objects from any of the radar sensors
// */
//#define JK_FUSION_MAX_OBJECTS_RADAR   (42u)
//
///**
// * maximum number of objects from any of the vision sensors
// */
//#define JK_FUSION_MAX_OBJECTS_VISION  (32u) /* \todo: set to 21! */


// Ryan add 20210824
/**
* maximum number of objects from any of the radar sensors
*/
#define JK_FUSION_MAX_OBJECTS_FRONT_RADAR   (30u)

/**
* maximum number of objects from any of the radar sensors
*/
#define JK_FUSION_MAX_OBJECTS_CORNER_RADAR   (15u)

/**
 * maximum number of objects from any of the camera sensors
 */
#define JK_FUSION_MAX_OBJECTS_FRONT_CAMERA  (25u) /* \todo: set to 21! */

#define JK_FUSION_MAX_OBJECTS_AROUND_CAMERA (10u)



/**
 * number of buffer items for ego motion storage.
 * Ego motion data is buffered at the fusion cycle rate (usually 100Hz).
 * The buffer must be large enough to store ego motion for at least the
 * duration of maximum expected input measurement latency
 */
#define JKOBJFUSN_EGOMOTIONHISTORY_SIZE  (30u) //TODO what is a good value


/**
  * High ego acceleration and deceleration result in an increased uncertainity of the 
  * longitudinal acceleration measured by the sensor.
  * To reflect this uncertainity, the acceleration variance calculated by the sensor model shall be 
  * corrected using the increased uncertainity caused by the acceleration and deceleration of the ego vehicle.
  * This is done using a linear model with offset and slope 
  */
#define JKOBJFUSN_EGOMOTION_VARIANCE_ACC_SLOPE    (0.65f)

/** 
 * High yaw rate of the ego vehicle causes a higher uncertainity in 
 * the lateral velocity. This is especially true for statioary radar targets 
 */
#define JKOBJFUSN_EGOMOTION_VARIANCE_YAW_SLOPE    (0.0f)


/**
 * distance from front bumper to rear axle of the vehicle 
 */
#define JK_VEHICLE_DISTANCE_REAR_AXLE_TO_FRONT_BUMBER  (3.455f)

/** 
 * Offset of camera to front bumber, i.e. front bumber is xx m in front of MVS 
 */
#define JK_VEHICLE_CAM_TO_FRONT_BUMBER  (1.59723f)

/**
 * Lateral offset of MVS sensor to x-axis of front bumber coordinate system 
 * Identical to offset to rear axle coordinate system. Offset to driver side 
 */
#define JK_VEHICLE_LATERAL_OFFSET_CAM   (-0.017f)

/**
 * Longitudinal value of origin of camera coordinate system in rear axle coordinate system 
 * 1 .730 is from front bumper to camera -> distance is approx. 2m in front of rear axle
 */
#define JK_VEHICLE_DISTANCE_REAR_AXLE_TO_CAMERA         (JK_VEHICLE_DISTANCE_REAR_AXLE_TO_FRONT_BUMBER - JK_VEHICLE_CAM_TO_FRONT_BUMBER)

/**
 * Buffer Size used in error management for the ring buffer implementation
 */
#define JK_ERROR_MANAGEMENT_BUFFER_SIZE    (30u)

/**
 * A sensor timeout is assumed as soon as the last sensor update is older than specified 
 */
#define JK_VEHICLE_SENSOR_TIMEOUT          (0.300f)

/*==================[type definitions]======================================*/
/*==================[functions]============================================*/
/*==================[external function declarations]========================*/
/*==================[external constants]====================================*/
/*==================[external data]=========================================*/

#ifdef	__cplusplus
}
#endif

#endif /* JKOBJFUSN_CONFIGVEHICLE_H */
/**@}==================[end of file]===========================================*/
