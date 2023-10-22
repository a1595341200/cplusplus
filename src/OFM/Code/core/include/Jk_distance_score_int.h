/*********************************************************************************
* Copyright(C) JiKa Inc. All rights reserved.
* FileName: Jk_distance_score_int.h
* Author:  ruifeng.ding
* Version: 1.00
* Date:  2021/08/11
* Description: private header for distance score module
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

#ifndef JK_DISTANCE_SCORE_INT_H
#define JK_DISTANCE_SCORE_INT_H

#ifdef   __cplusplus
extern "C" {
#endif

/*****************************************************************************
   INCLUDES
*****************************************************************************/
#include "Jk_common_types.h"
#include "Jk_common_matrix.h"
#include "JkObjFusn_DistMatrix.h"
#include "JkObjFusn_TrackableListType.h"
#include "JkObjFusn_ConfigAlgorithm.h"
#include "JkObjFusn_EgoMotionType.h"

/*****************************************************************************
   SYMBOLIC CONSTANTS
*****************************************************************************/

/*****************************************************************************
   MACROS
*****************************************************************************/

/*****************************************************************************
   CONSTANTS
*****************************************************************************/

/** Index of extra costs for class unknown */
#define DIST_SCORE_CLASS_INDEX_UNKNOWN          (0x0u)

/** Index of extra costs for class vehicle */
#define DIST_SCORE_CLASS_INDEX_VEHICLE          (0x1u)

/** Index of extra costs for class pedestrian */
#define DIST_SCORE_CLASS_INDEX_PEDESTRIAN       (0x2u)

/** Default index for extra costs */
#define DIST_SCORE_CLASS_INDEX_DEFAULT          (0x3u)

/** Dimension of the cost map of classes */
#define DIST_SCORE_DIM_COST_MAP                 (4u)

#define DIST_SCORE_MAX_CLASS_VALUE              (JKOBJFUSN_TRACKABLE_U16CLASS_PEDESTRIAN_UNKNOWN)

/**
 * Cost map matrix for classification.
 * The rows represent the classes of the fusion center track: (vehicle , pedestian, generic)
 * The columns represent the classes of the sensor track: (unknown, vehicle , pedestian, generic)
 */
#define DIST_SCORE_COST_MAP_VALUES   {                                                                                                    \
                                       {FLT_ZERO, FLT_ZERO, FLT_ZERO, FLT_ZERO },                                                                        \
                                       {FLT_ZERO, -(FLT_ONE_HALF * JK_DISTANCE_SCORE_MAX_CLASS_PENALTY), JK_DISTANCE_SCORE_MAX_CLASS_PENALTY, JK_DISTANCE_SCORE_MAX_CLASS_PENALTY}, \
                                       {FLT_ZERO, JK_DISTANCE_SCORE_MAX_CLASS_PENALTY, -(FLT_ONE_HALF * JK_DISTANCE_SCORE_MAX_CLASS_PENALTY), JK_DISTANCE_SCORE_MAX_CLASS_PENALTY}, \
                                       {FLT_ZERO, JK_DISTANCE_SCORE_MAX_CLASS_PENALTY, JK_DISTANCE_SCORE_MAX_CLASS_PENALTY, -(FLT_ONE_HALF * JK_DISTANCE_SCORE_MAX_CLASS_PENALTY)}  \
                                     }

/** 
 * Return this default value in case an error is detected during distance calculation 
 */
#define DIST_SCORE_DEFAULT_ON_ERROR          (1000.f)

/**
 * Number of states must be greater in order to calculate distance score 
 */
#define DIST_SCORE_MAHAL_MIN_MATRIX_SIZE     (2u)

/**
 * Expected matrix size that shall be used for matrix inversion 
 */
#define DIST_SCORE_MAT_INV_EXPECTED_SIZE     (3u)

/**
 * Minimum value for determinante in matrix inversion
 */
#define DIST_SCORE_MAT_INV_MIN_DET           (1e-6f)


/*****************************************************************************
   FORWARD DECLARATIONS
*****************************************************************************/

/*****************************************************************************
   TYPEDEFS
*****************************************************************************/

typedef struct stMeasGainCompType_t
{
	boolean bUsed;
	float32 f32tempMT;
	float32 f32RadMeas;
	float32 f32MeasRangeSq;
} stMeasGainCompType;

/*****************************************************************************
   VARIABLES
*****************************************************************************/

/*****************************************************************************
   FUNCTIONS
*****************************************************************************/
#define ObjFusn_START_SEC_CODE
#include "ObjFusn_MemMap.h"

/**
 * @fn      bool_t calculateDistance(  const stf32Matrix_t* const pStateA, const stf32Matrix_t* const pCovA, 
 *                                     const stf32Matrix_t* const pStateB, const stf32Matrix_t* const pCovB, f32_t* const pf32Distance)
 *
 * @brief   Computes distance depending on the selected distance mode.
 *
 * @param   pStateA              const stf32Matrix_t* const, State estimation of the fusion center
 * @param   pCovA                const stf32Matrix_t* const, Covariance matrix of the fusion center
 * @param   pStateB              const stf32Matrix_t* const, State estimation of the sensor
 * @param   pCovB                const stf32Matrix_t* const, Covariance of the sensor
 * @param   [out]pf32Distance    f32_t* const, calculated distance
 *
 * @return  TRUE (ok) or FALSE (error occured)
 */

LOCAL FUNC(uint32, ObjFusn_CODE) calculateDistance(CONSTP2CONST(stf32Vec_t, AUTOMATIC, ObjFusn_VAR_NOINIT) pVecA,
                                                     CONSTP2CONST(stf32SymMatrix_t, AUTOMATIC, ObjFusn_VAR_NOINIT) pCovA,
                                                     CONSTP2CONST(stf32Vec_t, AUTOMATIC, ObjFusn_VAR_NOINIT) pVecB,
                                                     CONSTP2CONST(stf32SymMatrix_t, AUTOMATIC, ObjFusn_VAR_NOINIT) pCovB,
                                                     CONSTP2VAR(float32, AUTOMATIC, ObjFusn_VAR_NOINIT) pf32SquareDistance);

#if JK_GAIN_ESTIMATION_ENABLE_GAIN_CALCULATION == STD_ON
LOCAL FUNC(uint32, ObjFusn_CODE) distance_score_calculateGain(CONSTP2CONST(JkObjFusn_TrackableType, AUTOMATIC, ObjFusn_VAR_NOINIT) pTrack, 
   CONSTP2CONST(JkObjFusn_TrackableType, AUTOMATIC, ObjFusn_VAR_NOINIT) pMeas, CONSTP2VAR(stMeasGainCompType, AUTOMATIC, ObjFusn_VAR_NOINIT) pMeasComp,
   CONSTP2VAR(JkObjFusn_TrackableType, AUTOMATIC, ObjFusn_VAR_NOINIT) pTrkblTmp, CONSTP2CONST(JkObjFusn_EgoMotionType, AUTOMATIC, ObjFusn_VAR_NOINIT) pEgoMotion,
   const float32 f32TrackRangeSq, const float32 f32RadTrack, const float32 f32RadTrackVar,
   CONSTP2VAR(boolean, AUTOMATIC, ObjFusn_VAR_NOINIT) pbMeasModified, CONSTP2VAR(boolean, AUTOMATIC, ObjFusn_VAR_NOINIT) pbTrackModified);
#endif

/**
 * \fn      uint16 getCostMapIndex(const uint16 u16Class)
 *
 * \brief   Reduces the number of track types for class cost computation.
 *
 * \param   u16Class          u16_t const, Class identifier of the trackable list
 *
 * \return  index for the class cost map
 */
#if JK_DISTANCE_SCORE_USE_CLASS_INFORMATION == STD_ON
LOCAL FUNC(uint16, ObjFusn_CODE) getCostMapIndex(const uint16 u16Class);
#endif

/**
 * \fn      uint32 distance_score_calculateSymMatInv(stf32SymMatrix_t * const pMat)
 *
 * \brief   Calculates the inverse of a 3 x 3 symmetric matrix. 
 *
 * \param   pMat  stf32SymMatrix_t * const pMat, Input matrix
 *
 * \return  error code
 */
LOCAL FUNC(uint32, ObjFusn_CODE) distance_score_calculateSymMatInv(CONSTP2VAR(stf32SymMatrix_t, AUTOMATIC, ObjFusn_VAR_NOINIT) pMat);

/**
 * \fn      uint32 distance_score_calculateSymMatDet(const stf32SymMatrix_t * const pMat, float32 * const pf32Det)
 *
 * \brief   Calculates the inverse of a 3 x 3 symmetric matrix. 
 *
 * \param[in]     pMat     const stf32SymMatrix_t * const pMat, Input matrix
 * \param[out]    pf32Det  float32 * const pf32Det, calculated determinante
 *
 * \return  error code
 */
LOCAL FUNC(uint32, ObjFusn_CODE) distance_score_calculateSymMatDet(CONSTP2CONST(stf32SymMatrix_t, AUTOMATIC, ObjFusn_VAR_NOINIT) pMat, 
   CONSTP2VAR(float32, AUTOMATIC, ObjFusn_VAR_NOINIT) pf32Det);



#define ObjFusn_STOP_SEC_CODE
#include "ObjFusn_MemMap.h"

/*==================[external function declarations]========================*/
/*==================[external constants]====================================*/
/*==================[external data]=========================================*/

#ifdef   __cplusplus
}
#endif

#endif /* JK_DISTANCE_SCORE_INT_H */
/**@}==================[end of file]===========================================*/
