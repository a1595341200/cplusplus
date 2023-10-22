/*********************************************************************************
* Copyright(C) JiKa Inc. All rights reserved.
* FileName: JkObjFusn_ConfigAlgorithm.h
* Author:  ruifeng.ding
* Version: 1.00
* Date:  2021/08/11
* Description: 
	This file provides a set of parameters to all fusion algorithms.
	Note that boolean values for initialization and parameterization may
	superimpose each other. So first of all for each variable choose the zero
	initialization. Then add either diag(1,1,1,1) to make the matrix parameter
	unitary or add other values for user-defined initialization. If, however,
	too many properties are chosen to be STD_ON, some elements of the matrix may
	end up being a sum of many different things which won't neccessarily make
	sense if you're not careful.
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

#ifndef JKOBJFUSN_CONFIGALGORITHM_H
#define JKOBJFUSN_CONFIGALGORITHM_H

#ifdef __cplusplus
extern "C" {
#endif

#include "Jk_common_types.h"

/********************************************************************
 * Motion Type thresholds
 ********************************************************************/
/** \name motion type thresholds **/
/**
 * Define threshold at between stationary/ stopped and moving object
 */
#define JKOBJFUSN_MOTIONTYPE_TO_MOVING               (1.70f)
#define JKOBJFUSN_MOTIONTYPE_TO_STATIONARY           (1.38f)
#define JKOBJFUSN_MOTIONTYPE_CROSSING_TO_DRIVING     (0.698f)    /* Threshold for transition driving to crossing (40 degree)  */
#define JKOBJFUSN_MOTIONTYPE_DRIVING_TO_CROSSING     (0.7853f)   /* Threshold for transition crossing to driving (45 degree)  */
#define JKOBJFUSN_MOTIONTYPE_ONCOMING_TO_CROSSING    (2.4434f)   /* Threshold for transition crossing to driving (140 degree) */
#define JKOBJFUSN_MOTIONTYPE_CROSSING_TO_ONCOMING    (2.5307f)   /* Threshold for transition crossing to driving (145 degree) */

 /** \}*/

/********************************************************************
 * ID Provider 
 ********************************************************************/

/** first valid u16ID */
#define JKOBJFUSN_IDPROVIDER_U16ID_MIN   (0u)
/** maximum value for u16ID */
#define JKOBJFUSN_IDPROVIDER_U16ID_MAX   (240u)

/********************************************************************
 * Age
 ********************************************************************/

#define JKOBJFUSN_MAX_AGE       (65001u)

/********************************************************************
 * Object Selection Bins
 ********************************************************************/

   /**
 * distance threshold for feature observation zones
 */

#define  JK_OBJECTSELECTION_LONG_DISTANCE_ROI1_THRESHOLD_OBJ    (70.0f)
#define  JK_OBJECTSELECTION_LONG_DISTANCE_ROI0_THRESHOLD_OBJ    (200.0f)
#define  JK_OBJECTSELECTION_ANGLE_ROI2_THRESHOLD_OBJ            (10.0f)
#define  JK_OBJECTSELECTION_ANGLE_ROI1_THRESHOLD_OBJ            (22.5f)
#define  JK_OBJECTSELECTION_RANGE_THRESH_OBSZONE6               (50.0f)
#define  JK_OBJECTSELECTION_RANGE_THRESH_OBSZONE5               (100.0f)
#define  JK_OBJECTSELECTION_RANGE_THRESH_OBSZONE4               (150.0f)


   /* distance and angle threshold for stationary radar only objects */

#define  JK_OBJECTSELECTION_RANGE_THRESH_STAT_RADAR             (50.0f)
#define  JK_OBJECTSELECTION_ANGLE_THRESH_STAT_RADAR             (10.0f)

/********************************************************************
 * Distance Score
 ********************************************************************/
 
 /**
  * The corner radar is not associated with the front radar
  */
#define JK_DISTANCE_SCORE_NOT_USE_CORNER_RADAR                (STD_OFF)

/** 
 * Adds a penalty term in case of different ids
 */
#define JK_DISTANCE_SCORE_USE_ID_INFORMATION                 (STD_ON)

/**
 * Adds a penalty term in case of different class types
 */
#define JK_DISTANCE_SCORE_USE_CLASS_INFORMATION              (STD_ON)

 /**
 * Adds a penalty term in case of low obstacle probability from radar
 */
#define JK_DISTANCE_SCORE_USE_OBSTACLE_PROBABILITY       		(STD_ON)

/**
 * Adds a penalty term in case of different class types
 */
#define JK_DISTANCE_SCORE_USE_PENALTY_TERM_FOR_MAHALANOBIS   (STD_ON)

/**
 * Number of states used in calculation of Mahalanobis distance 
 */
#define JK_DISTANCE_SCORE_MAHALANOBIS_STATE_SIZE             (3u)

/** Max value to be added if the object to track class differs */
#define JK_DISTANCE_SCORE_MAX_CLASS_PENALTY            (FLT_ONE)

/** Constant value to be added to distance score if track was updated by a measurement with a different ID 
    in previous cycles */
#define JK_DISTANCE_SCORE_DIFFERENT_ID_PENALTY         (0.84f)

/**
 * Maximal coarse distance for rectangular gating.
 * Unit: m
 */
#define JK_DISTANCE_SCORE_MAX_COARSE_DIST_X         (15.0f)
#define JK_DISTANCE_SCORE_MAX_COARSE_DIST_Y         (2.0f)
/**
 * Maximal coarse longitudinal velocity for gating.
 * Unit: m/s
 */
#define JK_DISTANCE_SCORE_MAX_COARSE_VEL_X          (15.0f)

/********************************************************************
 * Kalman Filter Parameters
 ********************************************************************/
/** \name Kalman Filter P-Matrix Parameters
 \{**/
/* Default Value for P-Matrix initialization if signal is not provided by sensor */
#define JK_LKF_FILTER_P_DEFAULT_DIAG                   (FLT_ONE)
/** \}*/




/********************************************************************
 * Coordinated Turn Model
 ********************************************************************/
/** \name Coordinated Turn Model constant parameters
 \{**/
/** Min squared target speed over ground to update coordinated turn model */
#define  JK_COORDINATED_TURN_MIN_TARGET_SPEED (2.25f)
/** \}*/

/** \{**/
/** Variance for Q used in predictin step of heading */
#define  JK_COORDINATED_TURN_VARIANCE_IN_HEADING_FOR_Q (0.025f)
/** \}*/


/********************************************************************
 * Error Management
 ********************************************************************/
/** @name Error Management constant parameters
 @{**/
/** Min target speed over ground to update coordinated turn model */
#define  JK_ERROR_MANAGEMENT_MAX_ERROR_AGE    (50u)
/** @}*/


/********************************************************************
 * Kinematics
 ********************************************************************/
/** @name Kinematics Config parameters
 \{**/
/** Enables and disables the covariances that are (potentially) sent by the sensors. If set to STD_OFF all covariances are assumed to be zero */
#define  JK_KINEMATICS_USE_SENSOR_COVARIANCES       (STD_OFF)

/** If set to STD_ON, the variance of the longitudinal velocity and acceleration is linearly increased depending on ego acceleration */
#define JK_KINEMATICS_USE_EGO_MOTION_FOR_VARIANCE   (STD_ON)
/** \}*/


/********************************************************************
 * Coasting
 ********************************************************************/
/** @name Coasting algorithm parameters
\{**/
/** Enables / Disables coasting of internal tracks */
#define JK_COASTING_ENABLE_COASTING     (STD_ON)

/** Sets sensors that shall be coasted. Currently set to Fused */
#define JK_COASTING_SENSOR_PATTERN      (0x0402u)

/** Lifespan of coasted objects in fusion cycles */
#define JK_COASTING_LIFESPAN            (20u)

/** \}*/

/********************************************************************
 * Camerea Gain Compensation
 ********************************************************************/
/** @name Camera Gain algorithm parameters
\{**/
/** Enables / Disables calculate of camera gain */
#define JK_GAIN_ESTIMATION_ENABLE_GAIN_CALCULATION     (STD_ON)

/** \}*/


/********************************************************************
 * Track Merge
 ********************************************************************/
/** @name Track Merge algorithm parameters
\{**/
/** Enables / Disables track merge algorithm*/
#define JK_TRACK_MERGE_ENABLE_TRACK_MERGE              (STD_ON)

/** \}*/

/********************************************************************
 * Object Selection
 ********************************************************************/
/** @name Object Selection 
\{**/
/** Enables / Disables down selection to JKOBJFUSN_MPF_OBJLISTINPUT_MAX_OBJECTS */
#define JK_OBJECT_SELCTION_ENABLE_OBJECT_SELECTION_FOR_OUTPUT          (STD_ON)

/** Resulting maximum number of output objects in case object selection is active */
#define JK_OBJECT_SELECTION_NUMBER_OF_OUTPUT_OBJECTS                   (32u)

/** \}*/

/********************************************************************
 * Clear vision information after xx cycles							*
 ********************************************************************/
/** @name Clear Vision Information if trackable is not updated by vision for multiple cycles 
\{**/
/** If enabled, radar motion types are used depending on the motion type of the previous cycle */
#define JK_LKF_TRACK_MANAGEMENT_NUM_CYCLES_TO_CLEAR_VISION                           (5u)
/** \}*/

/********************************************************************
* Clear radar information after xx cycles							*
********************************************************************/
/** @name Clear radar Information if trackable is not updated by radar for multiple cycles
\{**/
#define JK_LKF_TRACK_MANAGEMENT_NUM_CYCLES_TO_CLEAR_RADAR                           (5u)
/** \}*/


/********************************************
  * Set Bit pattern for ASIL relevant checks  *
  *********************************************/
/** @name Sets Bit pattern for ASIL relevant checks
\{**/

#define  JKOBJLIST_MVS_BITPATTERN_ASIL	           (0xFCu)
#define  JKOBJLIST_RAD_BITPATTERN_ASIL	           (0x02u)

  /***********************************************************
  * Set threshold for association using obstacle probability *
  ************************************************************/
  /** \name Set threshold for association using obstacle probability
  \{**/

#define  DIST_SCORE_LOW_OBSTACLE_PENALTY                       (30.f)
#define  JK_DISTANCE_SCORE_LOW_OBSTACLE_VEH_THRESHOLD     (54.f)
#define  JK_DISTANCE_SCORE_LOW_OBSTACLE_PED_THRESHOLD     (19.f)

  /***********************************************************
  * LKF Track Management AAU                                 *
  ************************************************************/
/** \name Algorithm Parameter used in LKF Track Management AAU */
/** \{ */
#define JK_LKF_TRACK_MANAGEMENT_ADDITIONAL_Q_ON_DIAGONAL  (0.02f)

#ifdef __cplusplus
}
#endif

#endif /* JKOBJFUSN_CONFIGALGORITHM_H */
