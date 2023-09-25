/*********************************************************************************
* Copyright(C) JiKa Inc. All rights reserved.
* FileName: JkObjFusn_ObjListInputConstants.h
* Author:  ruifeng.ding
* Version: 1.00
* Date:  2021/08/11
* Description: 
	This is is a list of preprocessor definitions to be used together with JkObjFusn_ObjListInput.h
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

#ifndef JKOBJFUSN_TRACKABLELISTCONSTANTS_H_
#define JKOBJFUSN_TRACKABLELISTCONSTANTS_H_

/******************/
/* u32SensorsCurr */
/* u32SensorsHist */
/******************/
/** 00000000 00000000 00000000 00000001: radar on the front left */
#define JKOBJFUSN_TRACKABLE_U32SENSOR_RADAR_FRONT_LEFT                   (0x00000001u)
/** 00000000 00000000 00000000 00000010: radar centered on the front bumper */
#define JKOBJFUSN_TRACKABLE_U32SENSOR_RADAR_FRONT_CENTER                 (0x00000002u)
/** 00000000 00000000 00000000 00000100: radar on the front right */
#define JKOBJFUSN_TRACKABLE_U32SENSOR_RADAR_FRONT_RIGHT                  (0x00000004u)
/** 00000000 00000000 00000000 00001000: radar on the right side of the car */
#define JKOBJFUSN_TRACKABLE_U32SENSOR_RADAR_MIDDLE_RIGHT                 (0x00000008u)
/** 00000000 00000000 00000000 00010000: radar on the rear right */
#define JKOBJFUSN_TRACKABLE_U32SENSOR_RADAR_REAR_RIGHT                   (0x00000010u)
/** 00000000 00000000 00000000 00100000: radar centered on the rear bumper */
#define JKOBJFUSN_TRACKABLE_U32SENSOR_RADAR_REAR_CENTER                  (0x00000020u)
/** 00000000 00000000 00000000 01000000: radar on the rear left */
#define JKOBJFUSN_TRACKABLE_U32SENSOR_RADAR_REAR_LEFT                    (0x00000040u)
/** 00000000 00000000 00000000 10000000: radar on the left side of the car */
#define JKOBJFUSN_TRACKABLE_U32SENSOR_RADAR_MIDDLE_LEFT                  (0x00000080u)
/** 00000000 00000000 00000001 00000000: [reserved] */
/** 00000000 00000000 00000010 00000000: [reserved] */
/** 00000000 00000000 00000010 00000000: mono vision system on the front side of the car*/
#define JKOBJFUSN_TRACKABLE_U32SENSOR_MVS_FRONT                          (0x00000200u)
/** 00000000 00000000 00000100 00000000: mono vision system on the front left side of the car*/
#define JKOBJFUSN_TRACKABLE_U32SENSOR_MVS_FRONT_LEFT                     (0x00000400u)
/** 00000000 00000000 00001000 00000000: mono vision system on the front right side of the car*/
#define JKOBJFUSN_TRACKABLE_U32SENSOR_MVS_FRONT_RIGHT                    (0x00000800u)
/** 00000000 00000000 00010000 00000000: mono vision system on the rear left side of the car*/
#define JKOBJFUSN_TRACKABLE_U32SENSOR_MVS_REAR_LEFT                      (0x00001000u)
/** 00000000 00000000 00100000 00000000: mono vision system on the rear right side of the car*/
#define JKOBJFUSN_TRACKABLE_U32SENSOR_MVS_REAR_RIGHT                     (0x00002000u)
/** 00000000 00000000 01000000 00000000: forward looking stereo vision system */
#define JKOBJFUSN_TRACKABLE_U32SENSOR_SVS_FRONT                          (0x00004000u)
/** 00000000 00000000 10000000 00000000: stereo vision system on the right side of the car*/
#define JKOBJFUSN_TRACKABLE_U32SENSOR_SVS_RIGHT                          (0x00008000u)
/** 00000000 00000001 00000000 00000000: backwards looking stereo vision system */
#define JKOBJFUSN_TRACKABLE_U32SENSOR_SVS_REAR                           (0x00010000u)
/** 00000000 00000010 00000000 00000000: stereo vision system on the left side of the car*/
#define JKOBJFUSN_TRACKABLE_U32SENSOR_SVS_LEFT                           (0x00020000u)
/** 00000000 00000100 00000000 00000000: forward looking night vision system */
#define JKOBJFUSN_TRACKABLE_U32SENSOR_NV_FRONT                           (0x00040000u)
/** 00000000 00001000 00000000 00000000: night vision system on the right side of the car*/
#define JKOBJFUSN_TRACKABLE_U32SENSOR_NV_RIGHT                           (0x00080000u)
/* 00000000 00010000 00000000 00000000: backwards looking night vision system */
#define JKOBJFUSN_TRACKABLE_U32SENSOR_NV_REAR                            (0x00100000u)
/* 00000000 00100000 00000000 00000000: night vision system on the left side of the car*/
#define JKOBJFUSN_TRACKABLE_U32SENSOR_NV_LEFT                            (0x00200000u)
/* 00000000 01000000 00000000 00000000: [reserved] */
/* 00000000 10000000 00000000 00000000: [reserved] */
/* 00000001 00000000 00000000 00000000: [reserved] */
/* 00000010 00000000 00000000 00000000: [reserved] */
/* 00000100 00000000 00000000 00000000: [reserved] */
/* 00001000 00000000 00000000 00000000: [reserved] */
/* 00010000 00000000 00000000 00000000: [reserved] */
/* 00100000 00000000 00000000 00000000: [reserved] */
/* 01000000 00000000 00000000 00000000: [reserved] */

/* Combinations of sensors */
/** any radar sensor */
#define JKOBJFUSN_TRACKABLE_U32SENSOR_RADAR                  (\
            JKOBJFUSN_TRACKABLE_U32SENSOR_RADAR_FRONT_LEFT   | \
            JKOBJFUSN_TRACKABLE_U32SENSOR_RADAR_FRONT_CENTER | \
            JKOBJFUSN_TRACKABLE_U32SENSOR_RADAR_FRONT_RIGHT  | \
            JKOBJFUSN_TRACKABLE_U32SENSOR_RADAR_MIDDLE_RIGHT | \
            JKOBJFUSN_TRACKABLE_U32SENSOR_RADAR_REAR_RIGHT   | \
            JKOBJFUSN_TRACKABLE_U32SENSOR_RADAR_REAR_CENTER  | \
            JKOBJFUSN_TRACKABLE_U32SENSOR_RADAR_REAR_LEFT    | \
            JKOBJFUSN_TRACKABLE_U32SENSOR_RADAR_MIDDLE_LEFT  )
/** corner radar sensor */
#define JKOBJFUSN_TRACKABLE_U32SENSOR_CORNER_RADAR           (\
            JKOBJFUSN_TRACKABLE_U32SENSOR_RADAR_FRONT_LEFT   | \
            JKOBJFUSN_TRACKABLE_U32SENSOR_RADAR_FRONT_RIGHT  | \
            JKOBJFUSN_TRACKABLE_U32SENSOR_RADAR_REAR_RIGHT   | \
            JKOBJFUSN_TRACKABLE_U32SENSOR_RADAR_REAR_LEFT    )
/** any MVS */
#define JKOBJFUSN_TRACKABLE_U32SENSOR_MVS                  (\
            JKOBJFUSN_TRACKABLE_U32SENSOR_MVS_FRONT        | \
            JKOBJFUSN_TRACKABLE_U32SENSOR_MVS_FRONT_LEFT   | \
            JKOBJFUSN_TRACKABLE_U32SENSOR_MVS_FRONT_RIGHT  | \
            JKOBJFUSN_TRACKABLE_U32SENSOR_MVS_REAR_LEFT    | \
            JKOBJFUSN_TRACKABLE_U32SENSOR_MVS_REAR_RIGHT   )
/** any MVS FRONT */
#define JKOBJFUSN_TRACKABLE_U32SENSOR_MVS_FRONTS           (\
            JKOBJFUSN_TRACKABLE_U32SENSOR_MVS_FRONT        | \
            JKOBJFUSN_TRACKABLE_U32SENSOR_MVS_FRONT_LEFT   | \
            JKOBJFUSN_TRACKABLE_U32SENSOR_MVS_FRONT_RIGHT  )
            
/** any MVS REAR*/
#define JKOBJFUSN_TRACKABLE_U32SENSOR_MVS_REARS            (\
            JKOBJFUSN_TRACKABLE_U32SENSOR_MVS_REAR_LEFT    | \
            JKOBJFUSN_TRACKABLE_U32SENSOR_MVS_REAR_RIGHT   )    

/** any SVS */
#define JKOBJFUSN_TRACKABLE_U32SENSOR_SVS           (\
            JKOBJFUSN_TRACKABLE_U32SENSOR_SVS_FRONT | \
            JKOBJFUSN_TRACKABLE_U32SENSOR_SVS_RIGHT | \
            JKOBJFUSN_TRACKABLE_U32SENSOR_SVS_REAR  | \
            JKOBJFUSN_TRACKABLE_U32SENSOR_SVS_LEFT )
/** any NV */
#define JKOBJFUSN_TRACKABLE_U32SENSOR_NV           (\
            JKOBJFUSN_TRACKABLE_U32SENSOR_NV_FRONT | \
            JKOBJFUSN_TRACKABLE_U32SENSOR_NV_RIGHT | \
            JKOBJFUSN_TRACKABLE_U32SENSOR_NV_REAR  | \
            JKOBJFUSN_TRACKABLE_U32SENSOR_NV_LEFT )
/** and Vision */
#define JKOBJFUSN_TRACKABLE_U32SENSOR_VISION  (\
            JKOBJFUSN_TRACKABLE_U32SENSOR_MVS | \
            JKOBJFUSN_TRACKABLE_U32SENSOR_SVS | \
            JKOBJFUSN_TRACKABLE_U32SENSOR_NV  )

/** any camera */
#define  JKOBJFUSN_TRACKABLE_U32SENSOR_CAMERA (\
               JKOBJFUSN_TRACKABLE_U32SENSOR_MVS | \
               JKOBJFUSN_TRACKABLE_U32SENSOR_SVS )

#define  JKOBJFUSN_TRACKABLE_U32SENSOR_INVALID       (0x00000000u)

/** Same pattern is used to identify coasted data */
#define  JKOBJFUSN_TRACKABLE_U32SENSOR_COASTED       (0x00000000u)

#define  JKOBJFUSN_TRACKABLE_U32SENSOR_RADAR_VISION  (JKOBJFUSN_TRACKABLE_U32SENSOR_RADAR | JKOBJFUSN_TRACKABLE_U32SENSOR_CAMERA)

// this bit cannot be used for a sensor since it decodes the default value for 
// the u32SensorsCurr and the u32SensorsHist fields!
/* 10000000 00000000 00000000 00000000: [reserved] */ 

/*****************/
/* u16MotionType */
/*****************/
/* motion type could not be determined */
#define JKOBJFUSN_TRACKABLE_U16MOTIONTYPE_UNKNOWN                        (0x0000u)
/* motion type is moving traffic in the direction of ego driving. Target going forward */
#define JKOBJFUSN_TRACKABLE_U16MOTIONTYPE_MOVING_EGODIRECTION_DRIVING    (0x0111u)
/* motion type is moving traffic in the direction of ego driving. Target not moving at the moment*/
#define JKOBJFUSN_TRACKABLE_U16MOTIONTYPE_MOVING_EGODIRECTION_STOPPED    (0x0112u)
/* motion type is moving traffic in the direction of ego driving. Target reversing */
#define JKOBJFUSN_TRACKABLE_U16MOTIONTYPE_MOVING_EGODIRECTION_REVERSING  (0x0113u)
/* motion type is moving traffic in the opposite direction of ego driving */
#define JKOBJFUSN_TRACKABLE_U16MOTIONTYPE_MOVING_ONCOMING                (0x0120u)
/* motion type is crossing traffic with respect to the ego driving direction */
#define JKOBJFUSN_TRACKABLE_U16MOTIONTYPE_MOVING_CROSSING                (0x0130u)
/* motion type is not moving and it will most likely stay like this */
#define JKOBJFUSN_TRACKABLE_U16MOTIONTYPE_STATIONARY                     (0x0200u)


/************/
/* u16Class */
/************/
/* the object class could be determined */
#define JKOBJFUSN_TRACKABLE_U16CLASS_UNKNOWN                             (0x0000u)
/* the object is no traffic participant but cannot be further classified */
#define JKOBJFUSN_TRACKABLE_U16CLASS_OBSTACLE_UNKNOWN                    (0x0100u)
/* the object is an obstacle that may neither be overrun nor be underrun  (like trees, ...)*/
#define JKOBJFUSN_TRACKABLE_U16CLASS_OBSTACLE_PATHBLOCKING               (0x0110u)
/* the object is an obstacle that may be overrun (like cans, drain covers, ...*/
#define JKOBJFUSN_TRACKABLE_U16CLASS_OBSTACLE_OVERRUNNABLE               (0x0120u)
/* the object is an obstacle that may be underrun (like bridges, highway traffic signs, ...)*/
#define JKOBJFUSN_TRACKABLE_U16CLASS_OBSTACLE_UNDERRUNNABLE              (0x0130u)
/* the object is a vehicle that cannot be further classified */
#define JKOBJFUSN_TRACKABLE_U16CLASS_VEHICLE_UNKNOWN                     (0x0200u)
/* the object is a car */
#define JKOBJFUSN_TRACKABLE_U16CLASS_VEHICLE_CAR                         (0x0210u)
/* the object is a truck */
#define JKOBJFUSN_TRACKABLE_U16CLASS_VEHICLE_TRUCK                       (0x0220u)
/* the object is a trailer (the car or the truck pulling the trailer is a separate object) */
#define JKOBJFUSN_TRACKABLE_U16CLASS_VEHICLE_TRAILER                     (0x0230u)
/* the object is a 2 wheeler that cannot be further classified */
#define JKOBJFUSN_TRACKABLE_U16CLASS_2WHEELER_UNKNOWN                    (0x0400u)
/* the object is a bicycle */
#define JKOBJFUSN_TRACKABLE_U16CLASS_2WHEELER_BICYCLE                    (0x0410u)
/* the object is a motor cycle */
#define JKOBJFUSN_TRACKABLE_U16CLASS_2WHEELER_MOTORCYCLE                 (0x0420u)
/* the object is a pedestrian that cannot be further classified */
#define JKOBJFUSN_TRACKABLE_U16CLASS_PEDESTRIAN_UNKNOWN                  (0x0800u)
/* the object is a child */
#define JKOBJFUSN_TRACKABLE_U16CLASS_PEDESTRIAN_CHILD                    (0x0810u)
/* the object is an adult */
#define JKOBJFUSN_TRACKABLE_U16CLASS_PEDESTRIAN_ADULT                    (0x0820u)
/* the object is a animal that cannot be further classified */
#define JKOBJFUSN_TRACKABLE_U16CLASS_ANIMAL_UNKNOWN                      (0x1000u)
/* the object is a large animal that poses a significant threat to traffic safety (e.g. Alces alces) */
#define JKOBJFUSN_TRACKABLE_U16CLASS_ANIMAL_LARGE                        (0x1010u)
/* the object is a small animal that may be overrun in otherwise critical situations */
#define JKOBJFUSN_TRACKABLE_U16CLASS_ANIMAL_SMALL                        (0x1020u)

/***************/
/* u16RefPoint */
/***************/
/* The target has no dimensions and no orientation. it's just a point. */
#define JKOBJFUSN_TRACKABLE_U16REFPOINT_POINT_OBJECT                     (0u)
/* The center point of the cuboid defined by length, width (& height). Orientation is given */
#define JKOBJFUSN_TRACKABLE_U16REFPOINT_CENTROID                         (1u)
/* The target is seen from the front or rear. The point provided (position, velocities, ...)
 * lies at the center of the line closer to the ego vehicle (front or rear).
 * Width & orientation are reliably given, length may be provided. */
#define JKOBJFUSN_TRACKABLE_U16REFPOINT_CENTER_OF_WIDTH                  (2u)

/* Maps to indices in vector and regular matrix structure */
#define  TRACKABLE_POSX        (0u)
#define  TRACKABLE_POSY        (1u)
#define  TRACKABLE_VELX        (2u)
#define  TRACKABLE_VELY        (3u)
#define  TRACKABLE_ACCX        (4u)
#define  TRACKABLE_ACCY        (5u)

/** 
 * Symmetrix Matrix is stored as lower triangular matrix with the following mapping
 *
 *        x   y  vx vy ax ay
 *  x   ( 0                  )
 *  y   ( 1   2              )
 *  vx  ( 3   4  5           )
 *  vy  ( 6   7  8  9        )
 *  ax  (10  11 12 13 14     )
 *  ay  (15  16 17 18 19  20 )
 *
 */

/* Maps to indices in symmetrix matrix structure */
#define  TRACKABLE_INDEX_VARIANCE_POSX          (0u)
#define  TRACKABLE_INDEX_VARIANCE_POSY          (2u)
#define  TRACKABLE_INDEX_VARIANCE_VELX          (5u)
#define  TRACKABLE_INDEX_VARIANCE_VELY          (9u)
#define  TRACKABLE_INDEX_VARIANCE_ACCX          (14u)
#define  TRACKABLE_INDEX_VARIANCE_ACCY          (20u)

#define  TRACKABLE_INDEX_COVARIANCE_POSX_POSY   (1u)
#define  TRACKABLE_INDEX_COVARIANCE_POSX_VELX   (3u)
#define  TRACKABLE_INDEX_COVARIANCE_POSX_VELY   (6u)
#define  TRACKABLE_INDEX_COVARIANCE_POSX_ACCX   (10u)
#define  TRACKABLE_INDEX_COVARIANCE_POSX_ACCY   (15u)

#define  TRACKABLE_INDEX_COVARIANCE_POSY_VELX   (4u)
#define  TRACKABLE_INDEX_COVARIANCE_POSY_VELY   (7u)
#define  TRACKABLE_INDEX_COVARIANCE_POSY_ACCX   (11u)
#define  TRACKABLE_INDEX_COVARIANCE_POSY_ACCY   (16u)

#define  TRACKABLE_INDEX_COVARIANCE_VELX_VELY   (8u)
#define  TRACKABLE_INDEX_COVARIANCE_VELX_ACCX   (12u)
#define  TRACKABLE_INDEX_COVARIANCE_VELX_ACCY   (17u)

#define  TRACKABLE_INDEX_COVARIANCE_VELY_ACCX   (13u)
#define  TRACKABLE_INDEX_COVARIANCE_VELY_ACCY   (18u)

#define  TRACKABLE_INDEX_COVARIANCE_ACCX_ACCY   (19u)

/* Maps to variances and covariances in symmetric matrix structure */

/**************/
/* u8CoordSystem */
/**************/
/* origin of cooridinate system is at ego front bumper and measured values are relative */
#define JKOBJFUSN_U8COORDSYSTEM_FRONTBUMP_RELATIVE                        (0x00u)
/* origin of cooridinate system is at ego front bumper and measured values are overground */
#define JKOBJFUSN_U8COORDSYSTEM_FRONTBUMP_OVERGROUND                      (0x01u)
/* origin of cooridinate system is at ego rear axis and measured values are relative */
#define JKOBJFUSN_U8COORDSYSTEM_REARAXLE_RELATIVE                         (0x10u)
/* origin of cooridinate system is at ego rear axis and measured values are overground */
#define JKOBJFUSN_U8COORDSYSTEM_REARAXLE_OVERGROUND                    (0x11u)
/* origin of cooridinate system is at sensor position and measured values are relative */
#define JKOBJFUSN_U8COORDSYSTEM_SENSOR_RELATIVE                           (0x20u)
/* origin of cooridinate system is at sensor position and measured values are overground */
#define JKOBJFUSN_U8COORDSYSTEM_SENSOR_OVERGROUND                         (0x21u)
/* the coordinate system is global  */
#define JKOBJFUSN_U8COORDSYSTEM_GLOBAL                                    (0x40u)

/**************/
/* u16Lifespan */
/**************/
/* no track */
#define JKOBJFUSN_TRACKABLE_U16LIFESPAN_FREE_SLOT   (0u)
/* coasted track */
#define JKOBJFUSN_TRACKABLE_U16LIFESPAN_COASTED     (JK_COASTING_LIFESPAN + 1u)
/* track has to die */
#define JKOBJFUSN_TRACKABLE_U16LIFESPAN_DEAD        (JKOBJFUSN_TRACKABLE_U16LIFESPAN_FREE_SLOT + 1u)
/* new track */
#define JKOBJFUSN_TRACKABLE_U16LIFESPAN_NEW         (JKOBJFUSN_TRACKABLE_U16LIFESPAN_DEAD + 1u)

#endif /** JKOBJFUSN_TRACKABLELISTCONSTANTS_H_ */
