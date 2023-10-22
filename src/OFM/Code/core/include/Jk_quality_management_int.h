/*********************************************************************************
* Copyright(C) JiKa Inc. All rights reserved.
* FileName: Jk_lkf_quality_management_int.h
* Author:  ruifeng.ding
* Version: 1.00
* Date:  2021/08/11
* Description: 
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

#ifndef JK_QUALITY_MANAGEMENT_INT_H
#define JK_QUALITY_MANAGEMENT_INT_H

#ifdef __cplusplus
extern "C" {
#endif

/*==================[inclusions]============================================*/

#include "Jk_common_types.h" /*uint16t, float32*/
#include "JkObjFusn_TrackableListType.h" /*JkObjFusn_TrackableType */

/*==================[macros]================================================*/


/**
 * Parametrization can be done as follows:
 *
 *
 *    P_D,k
 *    ^
 *    |
 *    |
 * c1 |  |------------------\
 *    |  |                   \
 *    |  |                    \
 * c2 |  |                     \_______
 *    |--|                      
 *    ---------------------x----x-----> Pos_x
 *       t_0              t_1  t_2    
 *                         
 *
 *    The define JK_QUALITY_MANAGEMENT_(SENSOR)_(CLASS)_PROBABILITY_TRUE_POSITIVE_CONSTANT refers to c
 *    The define JK_QUALITY_MANAGEMENT_(SENSOR)_(CLASS)_PROBABILITY_TRUE_POSITIVE_DISTANCE_START refers to threshold t_0
 *    The define JK_QUALITY_MANAGEMENT_(SENSOR)_(CLASS)_PROBABILITY_TRUE_POSITIVE_DISTANCE_THRESHOLD_1 refers to threshold t_1
 *    The define JK_QUALITY_MANAGEMENT_(SENSOR)_(CLASS)_PROBABILITY_TRUE_POSITIVE_DISTANCE_THRESHOLD_2 refers to threshold t_2
 *
 */

/** False-Positive Thresholds */
/** FP Vehicle */
#define  JK_QUALITY_MANAGEMENT_MVS_VEHICLE_PROBABILITY_FALSE_POSITIVE_OFFSET   (-6.636e-05f)
#define  JK_QUALITY_MANAGEMENT_MVS_VEHICLE_PROBABILITY_FALSE_POSITIVE_SLOPE    (0.00710880f)
#define  JK_QUALITY_MANAGEMENT_MVS_VEHICLE_PROBABILITY_FALSE_POSITIVE_MAX_DIST (80.f)

/** FP Pedestrian */
#define  JK_QUALITY_MANAGEMENT_MVS_PEDESTRIAN_PROBABILITY_FALSE_POSITIVE_OFFSET   (0.007697048f)
#define  JK_QUALITY_MANAGEMENT_MVS_PEDESTRIAN_PROBABILITY_FALSE_POSITIVE_SLOPE    (-1.4292e-04f)
#define  JK_QUALITY_MANAGEMENT_MVS_PEDESTRIAN_PROBABILITY_FALSE_POSITIVE_MAX_DIST (30.f)

#define  JK_QUALITY_MANAGEMENT_FLR_PROBABILITY_FALSE_POSITIVE                     (0.20f)


/** Thresholds for MVS Sensor */
#define  JK_QUALITY_MANAGEMENT_MVS_VEHICLE_PROBABILITY_TRUE_POSITIVE_CONSTANT_1                  (0.95f)
#define  JK_QUALITY_MANAGEMENT_MVS_VEHICLE_PROBABILITY_TRUE_POSITIVE_CONSTANT_2                  (0.45f)
#define  JK_QUALITY_MANAGEMENT_MVS_VEHICLE_PROBABILITY_TRUE_POSITIVE_DISTANCE_THRESHOLD_1        (80.f)
#define  JK_QUALITY_MANAGEMENT_MVS_VEHICLE_PROBABILITY_TRUE_POSITIVE_DISTANCE_THRESHOLD_2        (100.f)

#define  JK_QUALITY_MANAGEMENT_MVS_MOTORBIKE_PROBABILITY_TRUE_POSITIVE_CONSTANT_1                (0.70f)
#define  JK_QUALITY_MANAGEMENT_MVS_MOTORBIKE_PROBABILITY_TRUE_POSITIVE_CONSTANT_2                (0.25f)
#define  JK_QUALITY_MANAGEMENT_MVS_MOTORBIKE_PROBABILITY_TRUE_POSITIVE_DISTANCE_THRESHOLD_1      (50.f)
#define  JK_QUALITY_MANAGEMENT_MVS_MOTORBIKE_PROBABILITY_TRUE_POSITIVE_DISTANCE_THRESHOLD_2      (80.f)

#define  JK_QUALITY_MANAGEMENT_MVS_BICYCLE_PROBABILITY_TRUE_POSITIVE_CONSTANT_1                  (0.70f)
#define  JK_QUALITY_MANAGEMENT_MVS_BICYCLE_PROBABILITY_TRUE_POSITIVE_CONSTANT_2                  (0.20f)
#define  JK_QUALITY_MANAGEMENT_MVS_BICYCLE_PROBABILITY_TRUE_POSITIVE_DISTANCE_THRESHOLD_1        (30.f)
#define  JK_QUALITY_MANAGEMENT_MVS_BICYCLE_PROBABILITY_TRUE_POSITIVE_DISTANCE_THRESHOLD_2        (60.f)

#define  JK_QUALITY_MANAGEMENT_MVS_PEDESTRIAN_PROBABILITY_TRUE_POSITIVE_CONSTANT_1               (0.80f)
#define  JK_QUALITY_MANAGEMENT_MVS_PEDESTRIAN_PROBABILITY_TRUE_POSITIVE_CONSTANT_2               (0.20f)
#define  JK_QUALITY_MANAGEMENT_MVS_PEDESTRIAN_PROBABILITY_TRUE_POSITIVE_DISTANCE_THRESHOLD_1     (30.f)
#define  JK_QUALITY_MANAGEMENT_MVS_PEDESTRIAN_PROBABILITY_TRUE_POSITIVE_DISTANCE_THRESHOLD_2     (50.f)

#define  JK_QUALITY_MANAGEMENT_MVS_UNKNOWN_PROBABILITY_TRUE_POSITIVE_CONSTANT_1                  (0.50f)
#define  JK_QUALITY_MANAGEMENT_MVS_UNKNOWN_PROBABILITY_TRUE_POSITIVE_CONSTANT_2                  (0.20f)
#define  JK_QUALITY_MANAGEMENT_MVS_UNKNOWN_PROBABILITY_TRUE_POSITIVE_DISTANCE_THRESHOLD_1        (300.f)
#define  JK_QUALITY_MANAGEMENT_MVS_UNKNOWN_PROBABILITY_TRUE_POSITIVE_DISTANCE_THRESHOLD_2        (350.f)

/** Thresholds for FLR Sensor */
#define  JK_QUALITY_MANAGEMENT_FLR_PROBABILITY_TRUE_POSITIVE_CONSTANT_1                  (0.70f)
#define  JK_QUALITY_MANAGEMENT_FLR_PROBABILITY_TRUE_POSITIVE_CONSTANT_2                  JK_QUALITY_MANAGEMENT_FLR_PROBABILITY_FALSE_POSITIVE
#define  JK_QUALITY_MANAGEMENT_FLR_PROBABILITY_TRUE_POSITIVE_DISTANCE_THRESHOLD_1        (60.f)
#define  JK_QUALITY_MANAGEMENT_FLR_PROBABILITY_TRUE_POSITIVE_DISTANCE_THRESHOLD_2        (120.f)

#define  JK_QUALITY_MANAGEMENT_MIN_STATE_SIZE                (2u)

#define  JK_QUALITY_MANAGEMENT_EXISTENCE_LEVEL_3             (75.0f) 
#define  JK_QUALITY_MANAGEMENT_EXISTENCE_LEVEL_2             (50.0f)
#define  JK_QUALITY_MANAGEMENT_EXISTENCE_LEVEL_1             (25.0f)

/** Parameters used to tune the speed the existence quality adapts to changes */
#define  JK_QUALITY_MANAGEMENT_EXISTENCE_LEVEL_3_MISS_VEH        (2.00f)
#define  JK_QUALITY_MANAGEMENT_EXISTENCE_LEVEL_3_AVA_VEH         (0.20f)
#define  JK_QUALITY_MANAGEMENT_EXISTENCE_LEVEL_2_MISS_VEH        (1.25f)
#define  JK_QUALITY_MANAGEMENT_EXISTENCE_LEVEL_2_AVA_VEH         (0.35f)
#define  JK_QUALITY_MANAGEMENT_EXISTENCE_LEVEL_1_MISS_VEH        (0.75f)
#define  JK_QUALITY_MANAGEMENT_EXISTENCE_LEVEL_1_AVA_VEH         (0.60f)
#define  JK_QUALITY_MANAGEMENT_EXISTENCE_LEVEL_0_MISS_VEH        (0.50f)
#define  JK_QUALITY_MANAGEMENT_EXISTENCE_LEVEL_0_AVA_VEH         (0.75f)

#define  JK_QUALITY_MANAGEMENT_EXISTENCE_LEVEL_3_MISS_PED        (2.00f)
#define  JK_QUALITY_MANAGEMENT_EXISTENCE_LEVEL_3_AVA_PED         (0.20f)
#define  JK_QUALITY_MANAGEMENT_EXISTENCE_LEVEL_2_MISS_PED        (1.25f)
#define  JK_QUALITY_MANAGEMENT_EXISTENCE_LEVEL_2_AVA_PED         (0.35f)
#define  JK_QUALITY_MANAGEMENT_EXISTENCE_LEVEL_1_MISS_PED        (0.75f)
#define  JK_QUALITY_MANAGEMENT_EXISTENCE_LEVEL_1_AVA_PED         (0.60f)
#define  JK_QUALITY_MANAGEMENT_EXISTENCE_LEVEL_0_MISS_PED        (0.50f)
#define  JK_QUALITY_MANAGEMENT_EXISTENCE_LEVEL_0_AVA_PED         (0.75f)

#define  JK_QUALITY_MANAGEMENT_AVA_DEFAULT                       (FLT_ONE)
#define  JK_QUALITY_MANAGEMENT_MISS_DEFAULT                      (FLT_ONE)

#define  JK_QUALITY_MANAGEMENT_SENSOR_PATTERN_VEHICLE           (JKOBJFUSN_TRACKABLE_U32SENSOR_MVS_FRONT | JKOBJFUSN_TRACKABLE_U32SENSOR_RADAR_FRONT_CENTER)
#define  JK_QUALITY_MANAGEMENT_SENSOR_PATTERN_PEDESTRIAN        (JKOBJFUSN_TRACKABLE_U32SENSOR_MVS_FRONT)

#define JK_QUALITY_MANAGEMENT_TRACK_ALPHA                       (0.9f)


/*==================[type definitions]======================================*/

/*****************************************************************************
   FORWARD DECLARATIONS
*****************************************************************************/

/*****************************************************************************
   TYPEDEFS
*****************************************************************************/

/*****************************************************************************
   SYMBOLIC CONSTANTS
*****************************************************************************/

/*****************************************************************************
   RETURN CODES
*****************************************************************************/

/*****************************************************************************
   FUNCTIONS
*****************************************************************************/

/**
 * @fn   LOCAL bool_t getProbability_TruePositive(const JkObjFusn_TrackableType * const pTrkbl, f32_t * const pProbabilityTruePositive)
 *
 * @brief   Computes the probability that the measurement is a true positive event 
 *
 * @param   pTrkbl                            const JkObjFusn_TrackableType * const, the measurement 
 * @param   [out]pProbabilityTruePositive    f32_t * const, the probability that the inputted measurement is a true positive event
 *
 * @return  JKOBJFUSN_ERROR_NOERROR if no error occured and error code otherwise.
 */
#define ObjFusn_START_SEC_CODE
#include "ObjFusn_MemMap.h"
LOCAL FUNC(uint32, ObjFusn_CODE) jk_qualityManagement_getTruePositiveProbability (CONSTP2CONST(JkObjFusn_TrackableType, AUTOMATIC, ObjFusn_VAR_NOINIT) pTrkbl,
                                                               CONSTP2VAR(float32, AUTOMATIC, ObjFusn_VAR_NOINIT) pProbabilityTruePositive,
                                                                const uint32 u32SensorUpdatePattern);

/**
 * @fn   LOCAL bool_t getProbability_FalsePositive(const JkObjFusn_TrackableType * const pTrkbl, f32_t * const pProbabilityTruePositive)
 *
 * @brief   Computes the probability that the measurement is a true positive event 
 *
 * @param   pMeas                           const JkObjFusn_TrackableType * const, the measurement 
 * @param   [out]pProbalityFalsePositive    f32_t * const, the probability that the inputted measurement is a false positive event
 *
 * @return  JKOBJFUSN_ERROR_NOERROR if no error occured and error code otherwise.
 */
LOCAL FUNC(uint32, ObjFusn_CODE) jk_qualityManagement_getFalsePositiveProbability(CONSTP2CONST(JkObjFusn_TrackableType, AUTOMATIC, ObjFusn_VAR_NOINIT) pTrkbl,
                                                                CONSTP2VAR(float32, AUTOMATIC, ObjFusn_VAR_NOINIT) pProbalityFalsePositive,
                                                                const uint32 u32SensorUpdatePattern);

/**
 * @fn   LOCAL bool_t updateExistenceProbability(JkObjFusn_TrackableType * const pTrkbl, uint32 u32SensorUpdatePattern)
 *
 * @brief   Computes the tracks existence probability
 *
 * @param   [in,out]pTrkbl                  JkObjFusn_TrackableType * const, a trackable
 * @param   [out]pProbalityFalsePositive    u32_t, sensor update pattern
 *
 * @return  JKOBJFUSN_ERROR_NOERROR if no error occured and error code otherwise.
 */
LOCAL FUNC(uint32, ObjFusn_CODE) updateExistenceProbability(CONSTP2VAR(JkObjFusn_TrackableType, AUTOMATIC, ObjFusn_VAR_NOINIT) pTrkbl);


/**
 * \fn   LOCAL bool_t updateExistenceProbability(JkObjFusn_TrackableType * const pTrkbl)
 *
 * \brief   Updates the existence probability if the track is of type Vehicle.
 *
 * \param   [in,out]pTrkbl                  JkObjFusn_TrackableType * const, a trackable
 *
 * \return  JKOBJFUSN_ERROR_NOERROR if no error occured and error code otherwise.
 */
LOCAL FUNC(uint32, ObjFusn_CODE) jk_qualityManagement_isDetected(CONSTP2CONST(JkObjFusn_TrackableType, AUTOMATIC, ObjFusn_VAR_NOINIT) pTrkbl,
   CONSTP2VAR(boolean, AUTOMATIC, ObjFusn_VAR_NOINIT) pbIsDetected);

#define ObjFusn_STOP_SEC_CODE
#include "ObjFusn_MemMap.h"

/*==================[external function declarations]========================*/
/*==================[external constants]====================================*/
/*==================[external data]=========================================*/

#ifdef __cplusplus
}
#endif

#endif /* JK_LKF_QUALITY_MANAGEMENT_INT_H */
/*==================[end of file]===========================================*/
/** @} */
