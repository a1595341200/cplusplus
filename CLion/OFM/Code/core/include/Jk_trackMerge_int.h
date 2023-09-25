/*********************************************************************************
* Copyright(C) JiKa Inc. All rights reserved.
* FileName: Jk_trackMerge_int.h
* Author:  ruifeng.ding
* Version: 1.00
* Date:  2021/08/11
* Description: internal header for track merge
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

#ifndef JK_TRACKMERGE_INT_H
#define JK_TRACKMERGE_INT_H

#ifdef __cplusplus
extern "C" {
#endif

/*==================[inclusions]============================================*/
#include "Jk_common_types.h"   /*uint16, float32*/
#include "JkObjFusn_DistMatrix.h"
#include "JkObjFusn_EgoMotionType.h"
/*==================[macros]================================================*/

/*==================[type definitions]======================================*/
#define JK_TRACKMERGE_FACTOR_GATE    (1.2f)
   
/*==================[forward declarations]==================================*/
/*==================[symbolic constants]====================================*/
/*==================[return codes]==========================================*/
/*==================[functions]=============================================*/

/**
* \fn   trackMerge_mergeTrkble(JkObjFusn_TrackableType * const pTrackA, JkObjFusn_TrackableType * const pTrackB)
*
* \brief   takes two trackables and merge them and output it in pTrackA, the ID of pTrackB will be released
*
* \param   [in,out]  pTrackA   JkObjFusn_TrackableType * const, trackable, which is kept
* \param   [in]      pTrackB   JkObjFusn_TrackableType * const, trackable, which will be deleted, can not be const since gain correction is applied
*
* \return  TRUE (ok) or FALSE (error occured)
*/   
#define ObjFusn_START_SEC_CODE
#include "ObjFusn_MemMap.h"
LOCAL FUNC(uint32, ObjFusn_CODE) trackMerge_mergeTrkble(CONSTP2VAR(JkObjFusn_TrackableType, AUTOMATIC, ObjFusn_VAR_NOINIT) pTrackA,
                                                          CONSTP2VAR(JkObjFusn_TrackableType, AUTOMATIC, ObjFusn_VAR_NOINIT) pTrackB,
                                                          CONSTP2CONST(JkObjFusn_EgoMotionType, AUTOMATIC, ObjFusn_VAR_NOINIT) pEgoMotion);
#define ObjFusn_STOP_SEC_CODE
#include "ObjFusn_MemMap.h"

/**
* \fn   trackMerge_distanceCam2Radar(const JkObjFusn_TrackableListType * const pTrackList, f32_t * const pf32MaxExtendedDist,stDistMatrix_t* const pDist_mat);
*
* \brief   calculates distance between all camera-only and radar-only tracks, taking gain uncertainty of camera into accout,
*          if gain value of camera only track is available and Fusion_get_bCalculateCameraGain() == TRUE, since gain is used to adapt camera measurement
*          gain value of radar-only track is never used
*          distance is stored in pDist_mat, currently it is Trackable_Size * Trackable_Size
*          todo: make it sparse, so only for camera_only * radar_only
*
* \param   [in] pTrackList             JkObjFusn_TrackableListType * const, trackable list (usually TRK_LIST)
*          [in] pf32MaxExtendedDist    f32_t, if distance is larger than this value -> this value is stored in pDist_Mat
*          [in,out] pDist_mat          stDistMatrix_t*, distance matrix between all camera-only and radar-only tracks 
* \return  TRUE (ok) or FALSE (error occured)
*/
#define ObjFusn_START_SEC_CODE
#include "ObjFusn_MemMap.h"
LOCAL FUNC(uint32, ObjFusn_CODE) trackMerge_distanceCam2Radar(CONSTP2CONST(JkObjFusn_TrackableListType, AUTOMATIC, ObjFusn_VAR_NOINIT) pTrackList,
                                                                const float32 f32MatchGate,
                                                                CONSTP2VAR(stDistMatrix_t, AUTOMATIC, ObjFusn_VAR_NOINIT) pDist_mat,
                                                                const uint16 au16IdxRadarOnlyTracks[], const uint16 u16NumRadarOnlyTracks,
                                                                const uint16 au16IdxVisionOnlyTracks[], const uint16 u16NumVisionOnlyTracks,
                                                                CONSTP2CONST(JkObjFusn_EgoMotionType, AUTOMATIC, ObjFusn_VAR_NOINIT) pEgoMotion);
#define ObjFusn_STOP_SEC_CODE
#include "ObjFusn_MemMap.h"

/**
* \fn   trackMerge_findNonFusedTracks(const JkObjFusn_TrackableListType * const pTrackList, 
*                                      s16_t * const au8IdxRadarToDistMatrix, u16_t const u16nElementsRadarToDistMatrix,
*                                      s16_t * const au8IdxVisionToDIstMatrix, u16_t const u16nElementsVisionToDistMatrix )
*
* \brief    Identifies all non fused tracks by looping through the trackable list and writes the indices of non fused tracks to
*           the corresponding index array
*
* \param    [in]        pTrackList                       JkObjFusn_TrackableListType * const, trackable list (usually TRK_LIST)
*           [in,out]    as16IdxRadarToDistMatrix         s16_t * const, pointer to index array for radar tracks
*           [in,out]    as16IdxVisionToDistMatrix        s16_t * const, pointer to index array for vision tracks
*           [out]       u16NumRadarOnlyTracks            number of radar only tracks in tracklist
*           [out]       u16NumVisionOnlyTracks           number of vision only tracks in tracklist
*           [in]        u16nElementsRadarToDistMatrix    length of index array for radar tracks
*           [in]        u16nElementsVisionToDistMatrix   length of index array for vision tracks
*
* \return  TRUE (ok) or FALSE (error occured)
*/
#define ObjFusn_START_SEC_CODE
#include "ObjFusn_MemMap.h"
LOCAL FUNC(uint32, ObjFusn_CODE) trackMerge_findNonFusedTracks(CONSTP2CONST(JkObjFusn_TrackableListType, AUTOMATIC, ObjFusn_VAR_NOINIT) pTrackList,
                                                                 uint16 au16IdxRadarOnlyTracks[], const uint16 u16nElementsRadarToDistMatrix,
                                                                 CONSTP2VAR(uint16, AUTOMATIC, ObjFusn_VAR_NOINIT) pu16NumRadarOnlyTracks, 
                                                                 uint16 au16IdxVisionOnlyTracks[], const uint16 u16nElementsVisionToDistMatrix,
                                                                 CONSTP2VAR(uint16, AUTOMATIC, ObjFusn_VAR_NOINIT) pu16NumVisionOnlyTracks);
#define ObjFusn_STOP_SEC_CODE
#include "ObjFusn_MemMap.h"

/**
* \fn   trackMerge_dropObjects(const boolean abMarkedForDeletion[])
*
* \brief    Drops merged objects without releasing the track ID
*
* \param    [in]        abMarkedForDeletion              const boolean array
*
* \return  TRUE (ok) or FALSE (error occured)
*/

#define ObjFusn_START_SEC_CODE
#include "ObjFusn_MemMap.h"

LOCAL FUNC(uint32, ObjFusn_CODE) trackMerge_dropObjects(CONSTP2VAR(JkObjFusn_TrackableListType, AUTOMATIC, ObjFusn_VAR_NOINIT) pTrackList, const boolean abMarkedForDeletion[]);

#define ObjFusn_STOP_SEC_CODE
#include "ObjFusn_MemMap.h"

/**
* \fn   trackMerge_increaseVariance(stf32SymMat * const matP)
*
* \brief    Increase all variances stored in P-Matrix. 
*
* \param    [in]        matP              P-Matrix
*
* \return  void
*/
LOCAL FUNC(void, ObjFusn_CODE) trackMerge_increaseVariance(CONSTP2VAR(stf32SymMatrix_t, AUTOMATIC, ObjFusn_VAR_NOINIT) pMatP);


/*==================[external function declarations]========================*/
/*==================[external constants]====================================*/
/*==================[external data]=========================================*/

#ifdef __cplusplus
}
#endif

#endif /* JK_TRACKMERGE_INT_H */
/**
 * @}
 */
/*==================[end of file]===========================================*/
