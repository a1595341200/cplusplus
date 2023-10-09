/*********************************************************************************
* Copyright(C) JiKa Inc. All rights reserved.
* FileName: JkObjFusn_TrackableType.h
* Author:  ruifeng.ding
* Version: 1.00
* Date:  2021/08/11
* Description: This is a structure definition file for the representation of an object. 
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

#ifndef JKOBJFUSN_TRACKABLETYPE_H_
#define JKOBJFUSN_TRACKABLETYPE_H_

#include "Jk_common_types.h"
#include "Jk_common_matrix.h"
#include "JkObjFusn_ConfigVehicle.h"

/** Representation of a single track and object.  All values in this object are necessary for the 
 * the Kalman filter or are representative of object properties. 
 * The trackable is an internal structure to store all necessary processing data */
typedef struct JkObjFusn_TrackableTypeTag
{
   // YIYU
     /* Object Definition */
   uint16      u16MotionType;    /** stationary, moving, stopped,... (find the definition in: JkObjFusn_ObjListInputConstants.h) */
   uint16      u16Class;         /** Object Class: vehicle, two-wheeler, pedestrian,... (find the definition in: JkObjFusn_ObjListInputConstants.h) */
   uint16      u16ClassProb;     /** classification probability (0 is [default]; 1...99 is "probability value"; 101 is "probability undecided/unavailable" */
   uint8       u8IsAsilVerified; /** bit pattern if both sensors confirm ASIL verification -> 0xFFu means valid */
   uint8       u8Reserved;
   uint16      u16Reserved;

   /* Object Information */
   boolean     bUpdated;           /** Updated in current cycle */
   uint8       u8CoordSystem;      /** Indicates in which coordinate system the ego position lives */
   uint8       u8TrkblBinPosition; /** Indicate the objects bin position for object selection */
   uint8       u8VisionIdx;          /** vision idx for vision ID mapping in output converter */

   uint16      u16ID;            /** u16ID is an identifier number that allows for tracking of persistent objects over time. 0 is a valid ID. */
   uint16      u16Age;           /** Time [ms] that has passed since initialization of underlying track: 0...65000 is 0...65sec; 65001 is more than 65sec (saturation value) */ 
   uint16      u16Lifespan;      /** Lifespan of trackable to handle coasting and to see if trackable is valid or not */
   uint16      u16RefPoint;        /** Indicates which point of the target object is given by the coordinates */
   uint8       u8CyclesNoVision; /** number of consequitve vision updates without confirmation of this object -> reset to 0 if object is updated */
   uint8       u8CyclesNoRadar;  /** number of consequitve radar updates without confirmation of this object -> reset to 0 if object is updated */

   uint16      au16SensorID[JK_FUSION_MAX_INPUTS];  /** u16ID of the sensor input object. 0 is a valid ID. The order must always map to the sensor pattern array in trackabListUtils*/   
   uint16      au16SensorIDLast[JK_FUSION_MAX_INPUTS];  /** u16ID of the sensor nput object from the last update. 0 is a valid ID. The order must always map to the sensor pattern array in trackabListUtils*/   

   uint32      u32SensorsCurr;   /** Bit pattern that indicates which sensors have seen this object during their last measurements. Each of the first 31 bits has a specific meaning (see defines). */
   uint32      u32SensorsHist;   /** Bit pattern that indicates which sensors have seen this object at some point in time. Each of the 31 LSB Bits has a specific meaning (see defines). */

   /* Kinematics */
   stf32Vec_t  vecX;             /** state vector from Kalman filter including position, velocity, acceleration */

   stf32SymMatrix_t  matP;       /** P matrix from Kalman filter including variances and covariances of all states */

   float32           f32Gain;    /** camera gain for this object */
   float32           f32GainVar; /** Variance of camera gain for this object */

   /* Coordinated Turn Model */
   float32    f32YawRate;             /** Yaw rate of target vehicle */
   float32    f32YawRateVar;          /** Variance of yaw rate for this object */
   float32    f32Heading;             /** Heading for this object */
   float32    f32HeadingVar;          /** Variance of heading for this object */
   float32    f32CovarHeadingYawRate; /** Covariance of heading and yaw rate for this object */

   /* Qualities */
   float32     f32ObstacleProbability; /** Track Quality **/
   float32     f32ExistenceQuality;    /** Existence Quality **/
   float32     f32TrackQuality;        /** Track Quality **/

   /* Geometry */
   float32     f32Width;           /** [m] */
   float32     f32Length;          /** [m] */
   float32     f32Height;          /** [m] */

   // YIYU
  //  /* Object Definition */
  //  uint16      u16MotionType;    /** stationary, moving, stopped,... (find the definition in: JkObjFusn_ObjListInputConstants.h) */
  //  uint16      u16Class;         /** Object Class: vehicle, two-wheeler, pedestrian,... (find the definition in: JkObjFusn_ObjListInputConstants.h) */
  //  uint16      u16ClassProb;     /** classification probability (0 is [default]; 1...99 is "probability value"; 101 is "probability undecided/unavailable" */
  //  uint8       u8IsAsilVerified; /** bit pattern if both sensors confirm ASIL verification -> 0xFFu means valid */
  //  uint8       u8Reserved;
  //  uint16      u16Reserved;

} JkObjFusn_TrackableType;

#endif /**\} JKOBJFUSN_TRACKABLETYPE_H_ */
