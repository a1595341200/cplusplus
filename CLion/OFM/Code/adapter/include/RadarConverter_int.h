#ifndef RADAR_CONVERTER_INT_H_
#define RADAR_CONVERTER_INT_H_

/*==================[inclusions]============================================*/
#include "Jk_common_types.h"
#include "JkObjFusn_TrackableType.h"
#include "Converters_types.h"
#include "JkObjFusn_ConfigVehicle.h"

/*==================[macros]================================================*/

/**************************/
/* Front Radar NumObjects */
/**************************/
/// \name numObjects
/** minimum value */
#define FRONT_RADAR_CONVERTER_OBJECTS_U8NUMOBJECTS_MIN            (0u)
/** maximum value */
#define FRONT_RADAR_CONVERTER_OBJECTS_U8NUMOBJECTS_MAX            (JK_FUSION_MAX_OBJECTS_FRONT_RADAR)
/** default value */
#define FRONT_RADAR_CONVERTER_OBJECTS_U8NUMOBJECTS_DEFAULT        (0u)
/// \}

/**************************/
/* Corner Radar NumObjects */
/**************************/
/// \name numObjects
/** minimum value */
#define CORNER_RADAR_CONVERTER_OBJECTS_U8NUMOBJECTS_MIN            (0u)
/** maximum value */
#define CORNER_RADAR_CONVERTER_OBJECTS_U8NUMOBJECTS_MAX            (JK_FUSION_MAX_OBJECTS_CORNER_RADAR)
/** default value */
#define CORNER_RADAR_CONVERTER_OBJECTS_U8NUMOBJECTS_DEFAULT        (0u)
/// \}

/*************/
/* UpdateBit */
/*************/
/// \name UpdateBit
/** minimum value */
#define RADAR_CONVERTER_OBJECTS_UPDATEBIT_MIN            (FALSE)
/** maximum value */
#define RADAR_CONVERTER_OBJECTS_UPDATEBIT_MAX            (TRUE)
/** default value */
#define RADAR_CONVERTER_OBJECTS_UPDATEBIT_DEFAULT        (FALSE)
/// \}

/*************/
/* Heading */
/*************/
/// \name Heading
/** minimum value */
#define RADAR_CONVERTER_OBJECTS_HEADING_MIN            (-180.0f)
/** maximum value */
#define RADAR_CONVERTER_OBJECTS_HEADING_MAX            (180.0f)
/** default value */
#define RADAR_CONVERTER_OBJECTS_HEADING_DEFAULT        (0.0f)
/// \}

/*************/
/* BoxCenterLat */
/*************/
/// \name BoxCenterLat
/** minimum value */
#define RADAR_CONVERTER_OBJECTS_BOXCENTERLAT_MIN            (-25.0f)
/** maximum value */
#define RADAR_CONVERTER_OBJECTS_BOXCENTERLAT_MAX            (25.0f)
/** default value */
#define RADAR_CONVERTER_OBJECTS_BOXCENTERLAT_DEFAULT        (0.0f)
/// \}

/*************/
/* BoxCenterLgt */
/*************/
/// \name BoxCenterLgt
/** minimum value */
#define RADAR_CONVERTER_OBJECTS_BOXCENTERLGT_MIN            (-25.0f)
/** maximum value */
#define RADAR_CONVERTER_OBJECTS_BOXCENTERLGT_MAX            (25.0f)
/** default value */
#define RADAR_CONVERTER_OBJECTS_BOXCENTERLGT_DEFAULT        (0.0f)
/// \}

/*******************/
/* ObservationHist */
/*******************/
/// \name ObservationHist
/** minimum value */
#define RADAR_CONVERTER_OBJECTS_OBSERVATIONHIST_MIN            (0u)
/** maximum value */
#define RADAR_CONVERTER_OBJECTS_OBSERVATIONHIST_MAX            (4294967295u)
/** default value */
#define RADAR_CONVERTER_OBJECTS_OBSERVATIONHIST_DEFAULT        (0u)
/// \}

/*************/
/* QualityBits */
/*************/
/// \name QualityBits
/** minimum value */
#define RADAR_CONVERTER_OBJECTS_QUALITYBITS_MIN            (0u)
/** maximum value */
#define RADAR_CONVERTER_OBJECTS_QUALITYBITS_MAX            (262143u)
/** default value */
#define RADAR_CONVERTER_OBJECTS_QUALITYBITS_DEFAULT        (0u)
/// \}

/*************/
/* ObjAx */
/*************/
/// \name ObjAx
/** minimum value */
#define RADAR_CONVERTER_OBJECTS_OBJAX_MIN            (-44.5f)
/** maximum value */
#define RADAR_CONVERTER_OBJECTS_OBJAX_MAX            (44.5f)
/** default value */
#define RADAR_CONVERTER_OBJECTS_OBJAX_DEFAULT        (0.0f)
/// \}

/*************/
/* ObjAy */
/*************/
/// \name ObjAy
/** minimum value */
#define RADAR_CONVERTER_OBJECTS_OBJAY_MIN            (-12.8f)
/** maximum value */
#define RADAR_CONVERTER_OBJECTS_OBJAY_MAX            (12.7f)
/** default value */
#define RADAR_CONVERTER_OBJECTS_OBJAY_DEFAULT        (0.0f)
/// \}

/*************/
/* BoxLength */
/*************/
/// \name BoxLength
/** minimum value */
#define RADAR_CONVERTER_OBJECTS_BOXLENGTH_MIN            (0.0f)
/** maximum value */
#define RADAR_CONVERTER_OBJECTS_BOXLENGTH_MAX            (50.0f)
/** default value */
#define RADAR_CONVERTER_OBJECTS_BOXLENGTH_DEFAULT        (0.0f)
/// \}

/*************/
/* BoxWidth */
/*************/
/// \name BoxWidth
/** minimum value */
#define RADAR_CONVERTER_OBJECTS_BOXWIDTH_MIN            (0.0f)
/** maximum value */
#define RADAR_CONVERTER_OBJECTS_BOXWIDTH_MAX            (50.0f)
/** default value */
#define RADAR_CONVERTER_OBJECTS_BOXWIDTH_DEFAULT        (0.0f)
/// \}

/*************/
/* BoxHeight */
/*************/
/// \name BoxHeight
/** minimum value */
#define RADAR_CONVERTER_OBJECTS_BOXHEIGHT_MIN            (0.0f)
/** maximum value */
#define RADAR_CONVERTER_OBJECTS_BOXHEIGHT_MAX            (5.1f)
/** default value */
#define RADAR_CONVERTER_OBJECTS_BOXHEIGHT_DEFAULT        (0.0f)
/// \}

/*************/
/* ObjChks */
/*************/
/// \name ObjChks
/** minimum value */
#define RADAR_CONVERTER_OBJECTS_OBJCHKS_MIN            (0u)
/** maximum value */
#define RADAR_CONVERTER_OBJECTS_OBJCHKS_MAX            (255u)
/** default value */
#define RADAR_CONVERTER_OBJECTS_OBJCHKS_DEFAULT        (0u)
/// \}

/*************/
/* ObjCntr */
/*************/
/// \name ObjCntr
/** minimum value */
#define RADAR_CONVERTER_OBJECTS_OBJCNTR_MIN            (0u)
/** maximum value */
#define RADAR_CONVERTER_OBJECTS_OBJCNTR_MAX            (15u)
/** default value */
#define RADAR_CONVERTER_OBJECTS_OBJCNTR_DEFAULT        (0u)
/// \}

/*************/
/* ObjCoastCnt */
/*************/
/// \name ObjCoastCnt
/** minimum value */
#define RADAR_CONVERTER_OBJECTS_OBJCOASTCNT_MIN            (0u)
/** maximum value */
#define RADAR_CONVERTER_OBJECTS_OBJCOASTCNT_MAX            (31u)
/** default value */
#define RADAR_CONVERTER_OBJECTS_OBJCOASTCNT_DEFAULT        (0u)
/// \}

/*************/
/* ObjConf */
/*************/
/// \name ObjConf
/** minimum value */
#define RADAR_CONVERTER_OBJECTS_OBJCONF_MIN            (1u)
/** maximum value */
#define RADAR_CONVERTER_OBJECTS_OBJCONF_MAX            (105u)
/** default value */
#define RADAR_CONVERTER_OBJECTS_OBJCONF_DEFAULT        (0u)
/// \}

/*************/
/* ObjDx */
/*************/
/// \name ObjDx
/** minimum value */
#define RADAR_CONVERTER_OBJECTS_OBJDX_MIN            (0.5f)
/** maximum value */
#define RADAR_CONVERTER_OBJECTS_OBJDX_MAX            (200.0f)
/** default value */
#define RADAR_CONVERTER_OBJECTS_OBJDX_DEFAULT        (-200.0f)
/// \}

/*************/
/* ObjDxStdDe */
/*************/
/// \name ObjDxStdDe
/** minimum value */
#define RADAR_CONVERTER_OBJECTS_OBJDXSTDDE_MIN            (0.0f)
/** maximum value */
#define RADAR_CONVERTER_OBJECTS_OBJDXSTDDE_MAX            (12.7f)
/** default value */
#define RADAR_CONVERTER_OBJECTS_OBJDXSTDDE_DEFAULT        (0.0f)
/// \}

/*************/
/* ObjDy */
/*************/
/// \name ObjDy
/** minimum value */
#define RADAR_CONVERTER_OBJECTS_OBJDY_MIN            (-64.0f)
/** maximum value */
#define RADAR_CONVERTER_OBJECTS_OBJDY_MAX            (64.0f)
/** default value */
#define RADAR_CONVERTER_OBJECTS_OBJDY_DEFAULT        (-200.0f)
/// \}

/*************/
/* ObjDyStdDe */
/*************/
/// \name ObjDyStdDe
/** minimum value */
#define RADAR_CONVERTER_OBJECTS_OBJDYSTDDE_MIN            (0.0f)
/** maximum value */
#define RADAR_CONVERTER_OBJECTS_OBJDYSTDDE_MAX            (12.7f)
/** default value */
#define RADAR_CONVERTER_OBJECTS_OBJDYSTDDE_DEFAULT        (0.0f)
/// \}

/*************/
/* ObjDz */
/*************/
/// \name ObjDz
/** minimum value */
#define RADAR_CONVERTER_OBJECTS_OBJDZ_MIN            (-0.5f)
/** maximum value */
#define RADAR_CONVERTER_OBJECTS_OBJDZ_MAX            (5.1f)
/** default value */
#define RADAR_CONVERTER_OBJECTS_OBJDZ_DEFAULT        (-1.0f)
/// \}

/*************/
/* ObjDzStdDe */
/*************/
/// \name ObjDzStdDe
/** minimum value */
#define RADAR_CONVERTER_OBJECTS_OBJDZSTDDE_MIN            (0.0f)
/** maximum value */
#define RADAR_CONVERTER_OBJECTS_OBJDZSTDDE_MAX            (12.7f)
/** default value */
#define RADAR_CONVERTER_OBJECTS_OBJDZSTDDE_DEFAULT        (0.0f)
/// \}


/*************/
/* ObjElevnConf */
/*************/
/// \name ObjElevnConf
/** minimum value */
#define RADAR_CONVERTER_OBJECTS_OBJELEVNCONF_MIN            (0u)
/** maximum value */
#define RADAR_CONVERTER_OBJECTS_OBJELEVNCONF_MAX            (105u)
/** default value */
#define RADAR_CONVERTER_OBJECTS_OBJELEVNCONF_DEFAULT        (0u)
/// \}

/*************/
/* ObjElevnSts */
/*************/
/// \name ObjElevnSts
/** minimum value */
#define RADAR_CONVERTER_OBJECTS_OBJELEVNSTS_MIN            (0u)
/** maximum value */
#define RADAR_CONVERTER_OBJECTS_OBJELEVNSTS_MAX            (3u)
/** default value */
#define RADAR_CONVERTER_OBJECTS_OBJELEVNSTS_DEFAULT        (0u)
/// \}

/*************/
/* ObjID */
/*************/
/// \name ObjID
/** minimum value */
#define RADAR_CONVERTER_OBJECTS_OBJID_MIN            (0u)
/** maximum value */
#define RADAR_CONVERTER_OBJECTS_OBJID_MAX            (255u)
/** default value */
#define RADAR_CONVERTER_OBJECTS_OBJID_DEFAULT        (0u)
/// \}

/********************/
/* ObjIsInFreeSpace */
/********************/
/// \name ObjIsInFreeSpace
/** minimum value */
#define CONTI_RADAR_CONVERTER_OBJECTS_ISINFREESPACE_MIN            (FALSE)
/** maximum value */
#define CONTI_RADAR_CONVERTER_OBJECTS_ISINFREESPACE_MAX            (TRUE)
/** default value */
#define CONTI_RADAR_CONVERTER_OBJECTS_ISINFREESPACE_DEFAULT        (FALSE)
/// \}

/******************/
/* ObjMirrProblty */
/******************/
/// \name ObjMirrProblty
/** minimum value */
#define RADAR_CONVERTER_OBJECTS_OBJMIRRPROBLTY_MIN            (0u)
/** maximum value */
#define RADAR_CONVERTER_OBJECTS_OBJMIRRPROBLTY_MAX            (105u)
/** default value */
#define RADAR_CONVERTER_OBJECTS_OBJMIRRPROBLTY_DEFAULT        (0u)
/// \}

/*******************/
/* ObjMtnPat */
/*******************/
/// \name ObjMtnPat
/** minimum value */
#define RADAR_CONVERTER_OBJECTS_U8MOTIONPATTERN_MIN            (0u)
/** maximum value */
#define RADAR_CONVERTER_OBJECTS_U8MOTIONPATTERN_MAX            (7u)
/** default value */
#define RADAR_CONVERTER_OBJECTS_U8MOTIONPATTERN_DEFAULT        (0u)
/// \}

/*********************/
/* ObjNotRealProblty */
/*********************/
/// \name ObjNotRealProblty
/** minimum value */
#define RADAR_CONVERTER_OBJECTS_OBJNOTREALPROBLTY_MIN            (0u)
/** maximum value */
#define RADAR_CONVERTER_OBJECTS_OBJNOTREALPROBLTY_MAX            (105u)
/** default value */
#define RADAR_CONVERTER_OBJECTS_OBJNOTREALPROBLTY_DEFAULT        (0u)
/// \}

/***************/
/* ObjStatyCnt */
/***************/
/// \name ObjStatyCnt
/** minimum value */
#define RADAR_CONVERTER_OBJECTS_OBJSTATYCNT_MIN            (0u)
/** maximum value */
#define RADAR_CONVERTER_OBJECTS_OBJSTATYCNT_MAX            (127u)
/** default value */
#define RADAR_CONVERTER_OBJECTS_OBJSTATYCNT_DEFAULT        (0u)
/// \}

/************/
/* ObjTiAlv */
/************/
/// \name ObjTiAlv
/** minimum value */
#define RADAR_CONVERTER_OBJECTS_OBJTIALV_MIN            (0u)
/** maximum value */
#define RADAR_CONVERTER_OBJECTS_OBJTIALV_MAX            (127u)
/** default value */
#define RADAR_CONVERTER_OBJECTS_OBJTIALV_DEFAULT        (0u)
/// \}

/************/
/* ObjTrackSts */
/************/
/// \name ObjTrackSts
/** minimum value */
#define RADAR_CONVERTER_OBJECTS_OBJTRACKSTS_MIN            (0u)
/** maximum value */
#define RADAR_CONVERTER_OBJECTS_OBJTRACKSTS_MAX            (3u)
/** default value */
#define RADAR_CONVERTER_OBJECTS_OBJTRACKSTS_DEFAULT        (0u)
/// \}

/************/
/* ObjTyp */
/************/
/// \name ObjTyp
/** minimum value */
#define RADAR_CONVERTER_OBJECTS_OBJTYP_MIN            (0u)
/** maximum value */
#define RADAR_CONVERTER_OBJECTS_OBJTYP_MAX            (15u)
/** default value */
#define RADAR_CONVERTER_OBJECTS_OBJTYP_DEFAULT        (0u)
/// \}

/************/
/* ObjTypConfBike */
/************/
/// \name ObjTypConfBike
/** minimum value */
#define RADAR_CONVERTER_OBJECTS_OBJTYPCONFBIKE_MIN            (0u)
/** maximum value */
#define RADAR_CONVERTER_OBJECTS_OBJTYPCONFBIKE_MAX            (105u)
/** default value */
#define RADAR_CONVERTER_OBJECTS_OBJTYPCONFBIKE_DEFAULT        (0u)
/// \}

/************/
/* ObjTypConfPed */
/************/
/// \name ObjTypConfPed
/** minimum value */
#define RADAR_CONVERTER_OBJECTS_OBJTYPCONFPED_MIN            (0u)
/** maximum value */
#define RADAR_CONVERTER_OBJECTS_OBJTYPCONFPED_MAX            (105u)
/** default value */
#define RADAR_CONVERTER_OBJECTS_OBJTYPCONFPED_DEFAULT        (0u)
/// \}

/************/
/* ObjTypConfVeh */
/************/
/// \name ObjTypConfVeh
/** minimum value */
#define RADAR_CONVERTER_OBJECTS_OBJTYPCONFVEH_MIN            (0u)
/** maximum value */
#define RADAR_CONVERTER_OBJECTS_OBJTYPCONFVEH_MAX            (105u)
/** default value */
#define RADAR_CONVERTER_OBJECTS_OBJTYPCONFVEH_DEFAULT        (0u)
/// \}

/************/
/* ObjUsedTracker */
/************/
/// \name ObjUsedTracker
/** minimum value */
#define RADAR_CONVERTER_OBJECTS_OBJUSEDTRACKER_MIN            (0u)
/** maximum value */
#define RADAR_CONVERTER_OBJECTS_OBJUSEDTRACKER_MAX            (3u)
/** default value */
#define RADAR_CONVERTER_OBJECTS_OBJUSEDTRACKER_DEFAULT        (0u)
/// \}

/************/
/* ObjVx */
/************/
/// \name ObjVx
/** minimum value */
#define RADAR_CONVERTER_OBJECTS_OBJVX_MIN            (-102.0f)
/** maximum value */
#define RADAR_CONVERTER_OBJECTS_OBJVX_MAX            (102.0f)
/** default value */
#define RADAR_CONVERTER_OBJECTS_OBJVX_DEFAULT        (0.0f)
/// \}

/************/
/* ObjVxStdDe */
/************/
/// \name ObjVxStdDe
/** minimum value */
#define RADAR_CONVERTER_OBJECTS_OBJVXSTDDE_MIN            (0.0f)
/** maximum value */
#define RADAR_CONVERTER_OBJECTS_OBJVXSTDDE_MAX            (2.0f)
/** default value */
#define RADAR_CONVERTER_OBJECTS_OBJVXSTDDE_DEFAULT        (0.0f)
/// \}

/************/
/* ObjVy */
/************/
/// \name ObjVy
/** minimum value */
#define RADAR_CONVERTER_OBJECTS_OBJVY_MIN            (-102.0f)
/** maximum value */
#define RADAR_CONVERTER_OBJECTS_OBJVY_MAX            (102.0f)
/** default value */
#define RADAR_CONVERTER_OBJECTS_OBJVY_DEFAULT        (0.0f)
/// \}

/************/
/* ObjVyStdDe */
/************/
/// \name ObjVyStdDe
/** minimum value */
#define RADAR_CONVERTER_OBJECTS_OBJVYSTDDE_MIN            (0.0f)
/** maximum value */
#define RADAR_CONVERTER_OBJECTS_OBJVYSTDDE_MAX            (2.0f)
/** default value */
#define RADAR_CONVERTER_OBJECTS_OBJVYSTDDE_DEFAULT        (0.0f)
/// \}

/************/
/* RelVx */
/************/
/// \name RelVx
/** minimum value */
#define RADAR_CONVERTER_OBJECTS_RELVX_MIN            (-35.6f)
/** maximum value */
#define RADAR_CONVERTER_OBJECTS_RELVX_MAX            (35.6f)
/** default value */
#define RADAR_CONVERTER_OBJECTS_RELVX_DEFAULT        (0.0f)
/// \}

/************/
/* RelVy */
/************/
/// \name RelVy
/** minimum value */
#define RADAR_CONVERTER_OBJECTS_RELVY_MIN            (-35.6f)
/** maximum value */
#define RADAR_CONVERTER_OBJECTS_RELVY_MAX            (35.6f)
/** default value */
#define RADAR_CONVERTER_OBJECTS_RELVY_DEFAULT        (0.0f)
/// \}

/*==================[type definitions]======================================*/

/** Assign this label to all tracks that are not associated to a certain cluster during 
  * road boundary detection 
  */
#define JKOBJLIST_RAD_ROAD_BOUNDARY_DETECTION_LABEL_NOISE     (1234u)

/* Initially, all tracks are not labelled */
#define JKOBJLIST_RAD_ROAD_BOUNDARY_DETECTION_LABEL_UNKNOWN   (0u)

/*==================[function]==============================================*/

#define ObjFusn_START_SEC_SLOW_CODE
#include "ObjFusn_MemMap.h"

LOCAL INLINE FUNC(uint32, ObjFusn_CODE) ConvertRdrSensorPat(const uint8 u8RdrSnsrIdx);

LOCAL FUNC(void, ObjFusn_CODE) calculateVariances_Radar(CONSTP2VAR(JkObjFusn_TrackableType, AUTOMATIC, ObjFusn_VAR_NOINIT) pRdrObj);

#if STD_ON == JKOBJLIST_RAD_ENABLE_ROAD_BOUNDARY_DETECTION
LOCAL FUNC(boolean, ObjFusn_CODE) array_contains_u16(const uint16 u16Arr[], const uint16 u16ArrSize,
   const uint16 u16Element);
#endif

/*
* adapt 4D Radar 
*/
LOCAL FUNC(void, ObjFusn_CODE) RdrObjToTrackableConverter_4D(CONSTP2VAR(JkObjFusn_TrackableType, AUTOMATIC, ObjFusn_VAR_NOINIT) pNewObject,
   CONSTP2CONST(RdrObjType_4D, AUTOMATIC, ObjFusn_VAR_NOINIT) pOldObject, const uint8 u8RdrSnsrIdx);

LOCAL FUNC(boolean, ObjFusn_CODE) validateRadarObject_4D(CONSTP2CONST(RdrObjType_4D, AUTOMATIC, ObjFusn_VAR_NOINIT) pObject);

LOCAL INLINE FUNC(uint16, ObjFusn_CODE) ConvertRdrObjType_4D(const uint8 objType);

LOCAL INLINE FUNC(uint16, ObjFusn_CODE) ConvertRdrMtnPat_4D(const uint8 objMtnPat);

LOCAL INLINE FUNC(uint16, ObjFusn_CODE) ConvertRdrTypConf_4D(const uint16 objType, CONSTP2CONST(RdrObjType_4D, AUTOMATIC, ObjFusn_VAR_NOINIT) pObject);


LOCAL FUNC(void, ObjFusn_CODE) getFrontRdrObjListToProcess_4D(CONSTP2CONST(FrntRdrObjList_4D, AUTOMATIC, ObjFusn_VAR_NOINIT) pRdrObjList,
   boolean abProcessTracks[]);

#if STD_ON == JKOBJLIST_RAD_ENABLE_ROAD_BOUNDARY_DETECTION

LOCAL FUNC(uint16, ObjFusn_CODE) findNeighbors_4D(CONSTP2CONST(FrntRdrObjList_4D, AUTOMATIC, ObjFusn_VAR_NOINIT) pOldObjList,
   const uint16 u16IdxObj, uint16 au16Neighbors[], const uint16 au16Clusters[], 
   const boolean abRelevantTracks[], CONSTP2VAR(uint16, AUTOMATIC, ObjFusn_VAR_NOINIT) pu16Offset);

LOCAL INLINE FUNC(float32, ObjFusn_CODE) calculateDistanceClustering_4D(CONSTP2CONST(RdrObjType_4D, AUTOMATIC, ObjFusn_VAR_NOINIT) pObjOne,
   CONSTP2CONST(RdrObjType_4D, AUTOMATIC, ObjFusn_VAR_NOINIT) pObjTwo);

LOCAL FUNC(void, ObjFusn_CODE) runClustering_4D(CONSTP2CONST(FrntRdrObjList_4D, AUTOMATIC, ObjFusn_VAR_NOINIT) pOldObjList,
   const boolean abRelevantTracks[], uint16 au16Clusters[], uint16 au16NumTracksPerCluster[]);

LOCAL FUNC(void, ObjFusn_CODE) findRelevantTracks_4D(CONSTP2CONST(FrntRdrObjList_4D, AUTOMATIC, ObjFusn_VAR_NOINIT) pRdrObjList,
   boolean abRelevantTracks[], const boolean abValidTracks[]);

LOCAL FUNC(uint16, ObjFusn_CODE) runLinearRegression_4D(CONSTP2CONST(FrntRdrObjList_4D, AUTOMATIC, ObjFusn_VAR_NOINIT) pRdrObjList,
   const uint16 au16Clusters[], const uint16 au16NumTracksPerCluster[], float32 af32CoefficientsB0[], float32 af32CoefficientsB1[]);

LOCAL FUNC(void, ObjFusn_CODE) runRoadBoundaryDetection_4D(CONSTP2CONST(FrntRdrObjList_4D, AUTOMATIC, ObjFusn_VAR_NOINIT) pRdrObjList,
   const boolean abValidTracks[], boolean abProcessTracks[]);
#endif

LOCAL FUNC(uint32, ObjFusn_CODE) calculateFCRdrObjectAngle_4D(CONSTP2CONST(RdrObjType_4D, AUTOMATIC, ObjFusn_VAR_NOINIT) pObject,
	CONSTP2VAR(float32, AUTOMATIC, ObjFusn_VAR_NOINIT) f32Angle);

#define ObjFusn_STOP_SEC_SLOW_CODE
#include "ObjFusn_MemMap.h"

/*==================[external constants]====================================*/


#endif /* RADAR_CONVERTER_INT_H_ */
