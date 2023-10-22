/*********************************************************************************
* Copyright(C) JiKa Inc. All rights reserved.
* FileName: Jk_distance_score.h
* Author:  ruifeng.ding
* Version: 1.00
* Date:  2021/08/11
* Description: public header for distance score module
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

#ifndef JK_DISTANCE_SCORE_H
#define JK_DISTANCE_SCORE_H

#ifdef	__cplusplus
extern "C" {
#endif

/*****************************************************************************
   INCLUDES
*****************************************************************************/
#include "Jk_common_types.h"
#include "JkObjFusn_TrackableListType.h"
#include "JkObjFusn_ObjectListType.h"
#include "JkObjFusn_DistMatrix.h"
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

/*****************************************************************************
   FORWARD DECLARATIONS
*****************************************************************************/

/*****************************************************************************
   TYPEDEFS
*****************************************************************************/

/*****************************************************************************
   VARIABLES
*****************************************************************************/

/*****************************************************************************
   FUNCTIONS
*****************************************************************************/

#define ObjFusn_START_SEC_CODE
#include "ObjFusn_MemMap.h"

/**
 * @fn   boolean distance_score_track2track( const JkObjFusn_TrackableListType* const pTrackListRow,
                                  const JkObjFusn_TrackableListType* const pTrackListCol,
                                  float32 const f32MatchGate,
                                  stDistMatrix_t* const pDist_mat )
 *
 * @brief   Computes distance matrix of two lists of trackables.
 *
 * @param   pTrackListInternal			const JkObjFusn_TrackableListType * const, first list of trackables
 * @param   pTrackListSensor			const JkObjFusn_TrackableListType * const, second list of trackables
 * @param   _f32MatchGate				const float32 , max match gate used in association step
 * @param   [out] pDist_mat				stDistMatrix_t*, calculated distance matrix
 * @param	au16IndicesMeasurement		const uint16[], trackable map for measurements trackable list
 * @param	au16IndicesSensors			const uint16[], trackable map for sensor trackable list
 * @param	pEgoMotion					const JkObjFusn_EgoMotionType * const, pointer to ego motion item, used for gain estimation 
 *
 * @return  JKOBJFUSN_ERROR_NOERROR or corresponding error code
 */
FUNC(uint32, ObjFusn_CODE) distance_score_track2track(CONSTP2VAR(JkObjFusn_TrackableListType, AUTOMATIC, ObjFusn_VAR_NOINIT) pTrackListInternal,
	CONSTP2VAR(JkObjFusn_ObjectListType, AUTOMATIC, ObjFusn_VAR_NOINIT) pTrackListSensor,
	const float32 _f32MatchGate,
	CONSTP2VAR(stDistMatrix_t, AUTOMATIC, ObjFusn_VAR_NOINIT) pDist_mat,
   uint16 au16IndicesMeasurements[], uint16 au16IndicesInternal[],
   CONSTP2CONST(JkObjFusn_EgoMotionType, AUTOMATIC, ObjFusn_VAR_NOINIT) pEgoMotion);

/**
 * @fn      bool_t computeExtendedDist(const JkObjFusn_TrackableType* const pTrackA, const JkObjFusn_TrackableType* const pTrackB, 
 *                                     f32_t const f32MatchGate, f32_t const f32MaxExtendedDist, f32_t* const pf32distance)
 *
 * @brief   Computes the association score version 1.
 *          The association score of version 1 is defined as
 *          l = l_meas + l_ID + l_class
 *          l_meas:          Measurement costs
 *          l_class:         Class cost
 *          l_ID:            ID costs
 *
 * @param   pTrackA                 const JkObjFusn_TrackableType* const, Track of the fusion center
 * @param   pTrackB                 const JkObjFusn_TrackableType* const, Sensor track
 * @param   f32MaxExtendedDist      f32_t const, If there is no association, the distance will be set to that value
 * @param   [out]pf32Distance       f32_t* const, calculated distance
 *
 * @return  TRUE (ok) or FALSE (error occured)
 */
FUNC(uint32, ObjFusn_CODE) distance_score_computeExtendedDist(CONSTP2VAR(JkObjFusn_TrackableType, AUTOMATIC, ObjFusn_VAR_NOINIT) pTrack,
                                                       CONSTP2VAR(JkObjFusn_TrackableType, AUTOMATIC, ObjFusn_VAR_NOINIT) pMeas,
                                                       const float32 _f32MatchGate,
                                                       CONSTP2VAR(float32, AUTOMATIC, ObjFusn_VAR_NOINIT) pf32Distance);

#define ObjFusn_STOP_SEC_CODE
#include "ObjFusn_MemMap.h"

/*==================[external function declarations]========================*/
/*==================[external constants]====================================*/
/*==================[external data]=========================================*/

#ifdef	__cplusplus
}
#endif

#endif /* JK_DISTANCE_SCORE_H */
/**@}==================[end of file]===========================================*/
