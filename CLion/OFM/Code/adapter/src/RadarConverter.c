#include "RadarConverter.h"
#include "RadarConverter_Cfg.h"
#include "RadarConverter_int.h"
#include "JkObjFusn_TrackableProps.h"
#include "JkObjFusn_ObjectListProps.h"
#include "Jk_fusion_math.h"
#include "Jk_error_management.h"
#include "JkObjFusn_ErrorCodes.h" // Ryan add 20211210
#include "JkObjFusn_AAU_Codes.h"  // Ryan add 20211210

#define ObjFusn_START_SEC_SLOW_CODE
#include "ObjFusn_MemMap.h"

LOCAL INLINE FUNC(uint32, ObjFusn_CODE) ConvertRdrSensorPat(const uint8 u8RdrSnsrIdx)
{
    /* PRQA S 3223 8 *//* static variable requires function-scope only */
    static const uint32 RdrSensorPat[] =
    {
       JKOBJFUSN_TRACKABLE_U32SENSOR_INVALID,
       JKOBJFUSN_TRACKABLE_U32SENSOR_RADAR_FRONT_CENTER,
       JKOBJFUSN_TRACKABLE_U32SENSOR_RADAR_FRONT_RIGHT,
       JKOBJFUSN_TRACKABLE_U32SENSOR_RADAR_REAR_RIGHT,
       JKOBJFUSN_TRACKABLE_U32SENSOR_RADAR_REAR_LEFT,
       JKOBJFUSN_TRACKABLE_U32SENSOR_RADAR_FRONT_LEFT
    };
    uint32 u32SensorPat;
    u32SensorPat = RdrSensorPat[u8RdrSnsrIdx];

    return u32SensorPat;
}

LOCAL INLINE FUNC(uint16, ObjFusn_CODE) ConvertRdrObjType_4D(const uint8 objType)
{
	
	static const uint16 objType_4dMapObjClass[] =
	{
        JKOBJFUSN_TRACKABLE_U16CLASS_UNKNOWN,    //EClassification_Point = 0
        JKOBJFUSN_TRACKABLE_U16CLASS_VEHICLE_CAR,    //EClassification_Car
        JKOBJFUSN_TRACKABLE_U16CLASS_VEHICLE_TRUCK,    //EClassification_Truck
        JKOBJFUSN_TRACKABLE_U16CLASS_PEDESTRIAN_UNKNOWN,    //EClassification_Pedestrian
        JKOBJFUSN_TRACKABLE_U16CLASS_2WHEELER_MOTORCYCLE,    //EClassification_Motorcycle
        JKOBJFUSN_TRACKABLE_U16CLASS_2WHEELER_BICYCLE,    //EClassification_Bicycle
        JKOBJFUSN_TRACKABLE_U16CLASS_UNKNOWN,    //EClassification_Wide
        JKOBJFUSN_TRACKABLE_U16CLASS_UNKNOWN,    //EClassification_Reserved1
        JKOBJFUSN_TRACKABLE_U16CLASS_UNKNOWN,    //EClassification_Reserved2
        JKOBJFUSN_TRACKABLE_U16CLASS_UNKNOWN,    //EClassification_Reserved3
        JKOBJFUSN_TRACKABLE_U16CLASS_UNKNOWN,    //EClassification_Unclassified
        JKOBJFUSN_TRACKABLE_U16CLASS_UNKNOWN,    //EClassification_Reserved4
        JKOBJFUSN_TRACKABLE_U16CLASS_UNKNOWN,    //EClassification_Reserved5
        JKOBJFUSN_TRACKABLE_U16CLASS_UNKNOWN,    //EClassification_Reserved6
        JKOBJFUSN_TRACKABLE_U16CLASS_UNKNOWN,    //EClassification_Reserved7
        JKOBJFUSN_TRACKABLE_U16CLASS_UNKNOWN    //EClassification_Reserved8 = 15
	};
	
    uint16 u16ObjClass;
    u16ObjClass = objType_4dMapObjClass[objType];
    return u16ObjClass;
}

LOCAL INLINE FUNC(uint16, ObjFusn_CODE) ConvertRdrMtnPat_4D(const uint8 objMtnPat)
{
	static const uint16 objMtnPat_4dMapObjMotionPat[] =
	{
        JKOBJFUSN_TRACKABLE_U16MOTIONTYPE_MOVING_EGODIRECTION_DRIVING,    //EDynamicProperty_Moving = 0
        JKOBJFUSN_TRACKABLE_U16MOTIONTYPE_STATIONARY,    //EDynamicProperty_Stationary
        JKOBJFUSN_TRACKABLE_U16MOTIONTYPE_MOVING_ONCOMING,    //EDynamicProperty_Oncoming
        JKOBJFUSN_TRACKABLE_U16MOTIONTYPE_MOVING_CROSSING,    //EDynamicProperty_CrossingLeftToRight
        JKOBJFUSN_TRACKABLE_U16MOTIONTYPE_MOVING_CROSSING,    //EDynamicProperty_CrossingRightToLeft
        JKOBJFUSN_TRACKABLE_U16MOTIONTYPE_UNKNOWN,    //EDynamicProperty_Unknown
        JKOBJFUSN_TRACKABLE_U16MOTIONTYPE_MOVING_EGODIRECTION_STOPPED,    //EDynamicProperty_Stopped
        JKOBJFUSN_TRACKABLE_U16MOTIONTYPE_UNKNOWN    //EDynamicProperty_Reserved1 = 7

	};
    uint16 u16ObjMtnPat;
    u16ObjMtnPat = objMtnPat_4dMapObjMotionPat[objMtnPat];
    return u16ObjMtnPat;
}

LOCAL INLINE FUNC(uint16, ObjFusn_CODE) ConvertRdrTypConf_4D(const uint16 objType, CONSTP2CONST(RdrObjType_4D, AUTOMATIC, ObjFusn_VAR_NOINIT) pObject)
{
    uint16 u16ClassProb = 0u;
	if (objType == JKOBJFUSN_TRACKABLE_U16CLASS_VEHICLE_CAR ||
        objType == JKOBJFUSN_TRACKABLE_U16CLASS_VEHICLE_TRUCK ||
        objType == JKOBJFUSN_TRACKABLE_U16CLASS_PEDESTRIAN_UNKNOWN ||
        objType == JKOBJFUSN_TRACKABLE_U16CLASS_2WHEELER_MOTORCYCLE ||
        objType == JKOBJFUSN_TRACKABLE_U16CLASS_2WHEELER_BICYCLE) {
        
		//u16ClassProb = (uint16)pObject->TargetClassificationConfidence;
		if (pObject->ProbabilityOfExistence >= 8) {
			u16ClassProb = (uint16)99;
		}

	} else {
        u16ClassProb = 0u;
	}

    if (u16ClassProb > 100) { // if Max is 105
        u16ClassProb = JKOBJLIST_RAD_SENSOR_DEFAULT_CLASS_PROB;
    }
    else {
        // MISRA
    }
    return u16ClassProb;
}

// add 4D Radar adapter for function : RdrObjToTrackableConverter -> RdrObjToTrackableConverter_4D
LOCAL FUNC(void, ObjFusn_CODE) RdrObjToTrackableConverter_4D(CONSTP2VAR(JkObjFusn_TrackableType, AUTOMATIC, ObjFusn_VAR_NOINIT) pNewObject,
    CONSTP2CONST(RdrObjType_4D, AUTOMATIC, ObjFusn_VAR_NOINIT) pOldObject, const uint8 u8RdrSnsrIdx)
{
    pNewObject->u16ID = pOldObject->ID;
    pNewObject->u16Age = 0u;
    pNewObject->u16Lifespan = JKOBJFUSN_TRACKABLE_U16LIFESPAN_NEW;
    pNewObject->u32SensorsCurr = ConvertRdrSensorPat(u8RdrSnsrIdx);
    pNewObject->u32SensorsHist = 0u;

    /* Position */
    // pNewObject->vecX.data[TRACKABLE_POSX] = pOldObject->DistX;
    // pNewObject->vecX.data[TRACKABLE_POSY] = pOldObject->DistY;
    /*TMP FIX BUG : For ACC test and debug */
    pNewObject->vecX.data[TRACKABLE_POSX] = pOldObject->ObjNearestPtX;
    pNewObject->vecX.data[TRACKABLE_POSY] = pOldObject->ObjNearestPtY;

    /* Velocity */
    pNewObject->vecX.data[TRACKABLE_VELX] = pOldObject->VabsX;
    pNewObject->vecX.data[TRACKABLE_VELY] = pOldObject->VabsY;

    /* Acceleration */
    pNewObject->vecX.data[TRACKABLE_ACCX] = pOldObject->ObjXAccRel;
    pNewObject->vecX.data[TRACKABLE_ACCY] = pOldObject->ObjYAccRel;

    calculateVariances_Radar(pNewObject);

#if JKOBJLIST_RAD_USE_ACCELERATION == STD_ON
    pNewObject->vecX.nRows = 6u;   /* PRQA S 3120 *//* fixed vector size */
    pNewObject->matP.u16Size = 6u;   /* PRQA S 3120 *//* fixed vector size */
#else
    pNewObject->vecX.nRows = 4u;   /* PRQA S 3120 *//* fixed vector size */
    pNewObject->matP.u16Size = 4u;   /* PRQA S 3120 *//* fixed vector size */
#endif
	pNewObject->u8CoordSystem = JKOBJFUSN_U8COORDSYSTEM_REARAXLE_RELATIVE;
    //pNewObject->u8CoordSystem = JKOBJFUSN_U8COORDSYSTEM_REARAXLE_OVERGROUND;
    /* Geometry */
    pNewObject->f32Heading = pOldObject->HeadingAngle;
    pNewObject->f32HeadingVar = JKOBJFUSN_TRACKABLE_F32HEADINGVAR_DEFAULT;
    pNewObject->f32YawRate = JKOBJFUSN_TRACKABLE_F32YAWRATE_DEFAULT;
    pNewObject->f32YawRateVar = JKOBJFUSN_TRACKABLE_F32YAWRATEVAR_DEFAULT;
    //pNewObject->f32ExistenceQuality = (float32)pOldObject->ProbabilityOfExistence;
    if (pOldObject->ProbabilityOfExistence >= 8) {
		pNewObject->f32ExistenceQuality = (float32)99;
	}	
    pNewObject->f32ObstacleProbability = JKOBJFUSN_TRACKABLE_F32OBSTACLEPROBABILITY_MAX;
    pNewObject->bUpdated = pOldObject->UpdateBit;

    pNewObject->u16Class = ConvertRdrObjType_4D(pOldObject->Classification);
    pNewObject->u16MotionType = ConvertRdrMtnPat_4D(pOldObject->DynamicProperty);
    pNewObject->u16ClassProb = ConvertRdrTypConf_4D(pNewObject->u16Class, pOldObject);
    pNewObject->u8IsAsilVerified = JKOBJLIST_RAD_BITPATTERN_ASIL_INVALID;
}

FUNC(boolean, ObjFusn_CODE) FrntRdrObjListToJkObjListConverter_4D(CONSTP2VAR(JkObjFusn_ObjectListType, AUTOMATIC, ObjFusn_VAR_NOINIT) pNewObjList,
    CONSTP2CONST(FrntRdrObjList_4D, AUTOMATIC, ObjFusn_VAR_NOINIT) pOldObjList, const uint32 u32globalTimeStamp)
{
    uint16  u16i = 0u;
    boolean bSuccess = TRUE;
    uint16 u16NumObj = 0u;
    float32 f32CorrLatency = FLT_ZERO;
    float32 f32MeasurementAge = FLT_ZERO;

    boolean abProcessTracks[FRONT_RADAR_CONVERTER_OBJECTS_U8NUMOBJECTS_MAX];

    /* PRQA S 3223 1 *//* static variable requires function-scope only */
    static uint16 u16updateCount = 0u;
    /* PRQA S 3223 1 *//* static variable requires function-scope only */
    static float32 f32radarTimeStampPrev = 0u;

    if ((NULL_PTR == pNewObjList) || (NULL_PTR == pOldObjList))
    {
        bSuccess = FALSE;
    }
    // else if (pOldObjList->Status.StsRdrNrObj > FRONT_RADAR_CONVERTER_OBJECTS_U8NUMOBJECTS_MAX)
    // {
    //     bSuccess = FALSE;
    //     pNewObjList->u16NumObjects = 0u;
    //     pNewObjList->u32SensorPattern = JKOBJFUSN_TRACKABLE_U32SENSOR_RADAR_FRONT_CENTER;
    //     pNewObjList->u16ListUpdateCounter = u16updateCount;
    // }
    else
    {
        // work around problem : radar frequency is too slow ,object update too slow
        u16updateCount = ((u16updateCount + 1u) % JKOBJFUSN_OBJECTLIST_U16LISTUPDATECOUNTER_MAX);
        f32radarTimeStampPrev = (pOldObjList->Status.StsTiStamp);
        // if (f32radarTimeStampPrev != pOldObjList->Status.StsTiStamp)
        // {
        //     u16updateCount = ((u16updateCount + 1u) % JKOBJFUSN_OBJECTLIST_U16LISTUPDATECOUNTER_MAX);
        //     f32radarTimeStampPrev = (pOldObjList->Status.StsTiStamp);
        // }
        // else
        // {
        //     /* MISRA */
        // }
        /* correct latency using global timestamp */
        f32CorrLatency = ((float32)u32globalTimeStamp - f32radarTimeStampPrev) / JKOBJLIST_RAD_LATENCY_TO_SECONDS; //convert latency from ms to s
        f32MeasurementAge = (float32)pOldObjList->Status.StsLatency / JKOBJLIST_RAD_LATENCY_TO_SECONDS;// Ryan add
        /* Check sensor failure flags  */
        if ((pOldObjList->Status.StsBlkd0bin == TRUE) || (pOldObjList->Status.StsFaulty == TRUE)
            || !(pOldObjList->Status.StsMisAlign & 0x3))
        {
            bSuccess = FALSE;
            pNewObjList->u16NumObjects = 0u;
        }
        else if (f32MeasurementAge > JKOBJLIST_RAD_MAX_MEASUREMENT_AGE)
        {
            bSuccess = FALSE;
            pNewObjList->u16NumObjects = 0u;
        }
        else
        {
            pNewObjList->u16ListUpdateCounter = u16updateCount;
            pNewObjList->f32MeasurementLatency = f32MeasurementAge;
            pNewObjList->u32SensorPattern = JKOBJFUSN_TRACKABLE_U32SENSOR_RADAR_FRONT_CENTER;

            getFrontRdrObjListToProcess_4D(pOldObjList, abProcessTracks);

            for (u16i = 0u; u16i < FRONT_RADAR_CONVERTER_OBJECTS_U8NUMOBJECTS_MAX; u16i++)
            {
                if (TRUE == abProcessTracks[u16i])
                {
                    RdrObjToTrackableConverter_4D(&(pNewObjList->aTrackable[u16NumObj]), &(pOldObjList->Objects[u16i]), 1);  // 1: Front radar
                    u16NumObj++;
                }
                else
                {
                    /* Ignore this object */
                }
            }
            pNewObjList->u16NumObjects = u16NumObj;
        }
    }

    return bSuccess;
}

#if STD_ON == JKOBJLIST_RAD_ENABLE_ROAD_BOUNDARY_DETECTION
LOCAL INLINE FUNC(float32, ObjFusn_CODE) calculateDistanceClustering_4D(CONSTP2CONST(RdrObjType_4D, AUTOMATIC, ObjFusn_VAR_NOINIT) pObjOne,
    CONSTP2CONST(RdrObjType_4D, AUTOMATIC, ObjFusn_VAR_NOINIT) pObjTwo)
{
    float32 f32Dist = FLT_MAX;
    float32 f32DeltaX = FLT_ZERO;
    float32 f32DeltaY = FLT_ZERO;

    if ((pObjOne == NULL_PTR) || (pObjTwo == NULL_PTR))
    {
        /* MISRA */
    }
    else
    {
        f32DeltaX = (pObjOne->DistX - pObjTwo->DistX);
        f32DeltaY = (pObjOne->DistY - pObjTwo->DistY);

        if (f32DeltaX < FLT_ZERO)
        {
            f32DeltaX = -f32DeltaX;
        }
        else
        {
            /* MISRA */
        }

        if (f32DeltaY < FLT_ZERO)
        {
            f32DeltaY = -f32DeltaY;
        }
        else
        {
            /* MISRA */
        }

        f32Dist = (JKOBJLIST_RAD_ROAD_BOUNDARY_DETECTION_DIST_WEIGHT_X * f32DeltaX) +
            (JKOBJLIST_RAD_ROAD_BOUNDARY_DETECTION_DIST_WEIGHT_Y * f32DeltaY);
    }

    return f32Dist;
}
#endif


#if STD_ON == JKOBJLIST_RAD_ENABLE_ROAD_BOUNDARY_DETECTION
LOCAL FUNC(uint16, ObjFusn_CODE) findNeighbors_4D(CONSTP2CONST(FrntRdrObjList_4D, AUTOMATIC, ObjFusn_VAR_NOINIT) pOldObjList,
    const uint16 u16IdxObj, uint16 au16Neighbors[], const uint16 au16Clusters[],
    const boolean abRelevantTracks[], CONSTP2VAR(uint16, AUTOMATIC, ObjFusn_VAR_NOINIT) pu16Offset)
{
    uint16 u16NumNeighbors = 0u;
    uint16 u16i = 0u;
    float32 f32Dist = FLT_MAX;
    boolean bIsNeighbor = FALSE;
    P2CONST(RdrObjType_4D, AUTOMATIC, ObjFusn_VAR_NOINIT) pCurrObj;

    /* No Initialization of au16Neighbors needed, array is assumed to be large enough */

    if ((NULL_PTR == pOldObjList) || (NULL_PTR == pu16Offset))
    {
        /* NULL_PTR check */
    }
    else if (u16IdxObj >= FRONT_RADAR_CONVERTER_OBJECTS_U8NUMOBJECTS_MAX)
    {
        /* Invalid Index */
    }
    else
    {
        pCurrObj = &(pOldObjList->Objects[u16IdxObj]);

        for (u16i = 0u; u16i < FRONT_RADAR_CONVERTER_OBJECTS_U8NUMOBJECTS_MAX; u16i++)
        {
            if ((u16i != u16IdxObj) && (TRUE == abRelevantTracks[u16i]))
            {
                f32Dist = calculateDistanceClustering_4D(pCurrObj, &(pOldObjList->Objects[u16i]));

                if (f32Dist < JKOBJLIST_RAD_ROAD_BOUNDARY_DETECTION_MAX_DIST)
                {
                    bIsNeighbor = array_contains_u16(au16Neighbors, (*pu16Offset), u16i);
                    u16NumNeighbors++;

                    if (((FALSE == bIsNeighbor) && ((*pu16Offset) < FRONT_RADAR_CONVERTER_OBJECTS_U8NUMOBJECTS_MAX)) &&
                        ((au16Clusters[u16i] == JKOBJLIST_RAD_ROAD_BOUNDARY_DETECTION_LABEL_UNKNOWN) ||
                            (au16Clusters[u16i] == JKOBJLIST_RAD_ROAD_BOUNDARY_DETECTION_LABEL_NOISE)))
                    {
                        au16Neighbors[*pu16Offset] = u16i;
                        (*pu16Offset)++;
                    }
                    else
                    {
                        /* MISRA */
                    }
                }
                else
                {
                    /* MISRA */
                }
            }
            else
            {
                /* MISRA */
            }
        }
    }

    return u16NumNeighbors;
}

#endif


#if STD_ON == JKOBJLIST_RAD_ENABLE_ROAD_BOUNDARY_DETECTION
LOCAL FUNC(void, ObjFusn_CODE) runClustering_4D(CONSTP2CONST(FrntRdrObjList_4D, AUTOMATIC, ObjFusn_VAR_NOINIT) pOldObjList,
    const boolean abRelevantTracks[], uint16 au16Clusters[], uint16 au16NumTracksPerCluster[])
{
    uint16 au16Neighbors[FRONT_RADAR_CONVERTER_OBJECTS_U8NUMOBJECTS_MAX];
    uint16 u16i = 0u;
    uint16 u16j = 0u;
    uint16 u16NumNeighbors = 0u;
    uint16 u16Offset = 0u;
    uint16 u16OldOffset = 0u;
    uint16 u16ClusterIndex = 0u;
    uint16 u16CurrentLabel = 0u;

    /* au16RelevantTracks and au16Clusters are assumed to be correctly initialized */
    for (u16i = 0u; u16i < FRONT_RADAR_CONVERTER_OBJECTS_U8NUMOBJECTS_MAX; u16i++)
    {
        if (FALSE == abRelevantTracks[u16i])
        {
            /* Track is not located in Region of interest, skip this one */
        }
        else if (au16Clusters[u16i] != JKOBJLIST_RAD_ROAD_BOUNDARY_DETECTION_LABEL_UNKNOWN)
        {
            /* Already labelled, nothing to do */
        }
        else
        {
            u16Offset = 0u;
            u16OldOffset = 0u;

            u16NumNeighbors = findNeighbors_4D(pOldObjList, u16i, au16Neighbors, au16Clusters, abRelevantTracks, &u16Offset);

            if (u16NumNeighbors < JKOBJLIST_RAD_ROAD_BOUNDARY_DETECTION_MIN_NUM_NEIGHBORS)
            {
                /* Not enough neighbors, label as noise */
                au16Clusters[u16i] = JKOBJLIST_RAD_ROAD_BOUNDARY_DETECTION_LABEL_NOISE;
            }
            else
            {
                u16ClusterIndex = u16CurrentLabel;

                /* Get new label for cluster */
                u16CurrentLabel++;

                /* Assign label to track */
                au16Clusters[u16i] = u16CurrentLabel;
                au16NumTracksPerCluster[u16ClusterIndex]++;

                /* Process all neighboring tracks */
                for (u16j = 0u; u16j < u16Offset; u16j++)
                {
                    if (au16Clusters[au16Neighbors[u16j]] == JKOBJLIST_RAD_ROAD_BOUNDARY_DETECTION_LABEL_NOISE)
                    {
                        /* Track previously labelled as noise -> assumed to be boundary point of the cluster */
                        au16Clusters[au16Neighbors[u16j]] = u16CurrentLabel;
                        au16NumTracksPerCluster[u16ClusterIndex]++;
                    }
                    else if (au16Clusters[au16Neighbors[u16j]] != JKOBJLIST_RAD_ROAD_BOUNDARY_DETECTION_LABEL_UNKNOWN)
                    {
                        /* Already part of a different cluster, do nothing */
                    }
                    else
                    {
                        /* Label neighbor to be part of the cluster */
                        au16Clusters[au16Neighbors[u16j]] = u16CurrentLabel;
                        au16NumTracksPerCluster[u16ClusterIndex]++;

                        /* Find neighbors */
                        u16OldOffset = u16Offset;
                        u16NumNeighbors = findNeighbors_4D(pOldObjList, au16Neighbors[u16j], au16Neighbors, au16Clusters,
                            abRelevantTracks, &u16Offset);

                        if (u16NumNeighbors < JKOBJLIST_RAD_ROAD_BOUNDARY_DETECTION_MIN_NUM_NEIGHBORS)
                        {
                            /* Only add neighboring points to seed set if enough neighbors -> density check */
                            u16Offset = u16OldOffset;
                        }
                        else
                        {
                            /* MISRA */
                        }
                    }
                }
            }
        }
    }
}

#endif

#if STD_ON == JKOBJLIST_RAD_ENABLE_ROAD_BOUNDARY_DETECTION
LOCAL FUNC(void, ObjFusn_CODE) findRelevantTracks_4D(CONSTP2CONST(FrntRdrObjList_4D, AUTOMATIC, ObjFusn_VAR_NOINIT) pRdrObjList,
    boolean abRelevantTracks[], const boolean abValidTracks[])
{
    uint16 u16i = 0u;

    float32 f32PosX = FLT_ZERO;
    float32 f32PosY = FLT_ZERO;
    uint8 u8MotionType = 0u;

    if (NULL_PTR == pRdrObjList)
    {
    }
    else
    {
        for (u16i = 0u; u16i < FRONT_RADAR_CONVERTER_OBJECTS_U8NUMOBJECTS_MAX; u16i++)
        {
            abRelevantTracks[u16i] = FALSE;
        }

        for (u16i = 0u; u16i < FRONT_RADAR_CONVERTER_OBJECTS_U8NUMOBJECTS_MAX; u16i++)
        {
            f32PosX = pRdrObjList->Objects[u16i].DistX;
            f32PosY = pRdrObjList->Objects[u16i].DistY;
            u8MotionType = pRdrObjList->Objects[u16i].DynamicProperty;

            if (f32PosY < FLT_ZERO)
            {
                f32PosY = -f32PosY;
            }
            else
            {
                /* MISRA */
            }

            if ((((f32PosX > JKOBJLIST_RAD_ROAD_BOUNDARY_DETECTION_OFFSET_X) && (f32PosX < (JKOBJLIST_RAD_ROAD_BOUNDARY_DETECTION_OFFSET_X + JKOBJLIST_RAD_ROAD_BOUNDARY_DETECTION_LENGTH))) &&
                ((f32PosY > JKOBJLIST_RAD_ROAD_BOUNDARY_DETECTION_OFFSET_Y) && (f32PosY < (JKOBJLIST_RAD_ROAD_BOUNDARY_DETECTION_OFFSET_Y + JKOBJLIST_RAD_ROAD_BOUNDARY_DETECTION_WIDTH)))) &&
                ((TRUE == abValidTracks[u16i]) && (u8MotionType == 0x1u)))  //0x1u: EDynamicProperty_Stationary
            {
                abRelevantTracks[u16i] = TRUE;
            }
            else
            {
                /* MISRA */
            }
        }
    }
}
#endif

#if STD_ON == JKOBJLIST_RAD_ENABLE_ROAD_BOUNDARY_DETECTION
LOCAL FUNC(uint16, ObjFusn_CODE) runLinearRegression_4D(CONSTP2CONST(FrntRdrObjList_4D, AUTOMATIC, ObjFusn_VAR_NOINIT) pRdrObjList,
    const uint16 au16Clusters[], const uint16 au16NumTracksPerCluster[], float32 af32CoefficientsB0[], float32 af32CoefficientsB1[])
{
    float32  af32MeanX[JKOBJLIST_RAD_ROAD_BOUNDARY_DETECTION_MAX_NUM_CLUSTERS];
    float32  af32MeanY[JKOBJLIST_RAD_ROAD_BOUNDARY_DETECTION_MAX_NUM_CLUSTERS];
    uint16   au16TracksPerClusterTmp[JKOBJLIST_RAD_ROAD_BOUNDARY_DETECTION_MAX_NUM_CLUSTERS];

    /* Tmp arrays to store nominator and denominator when calculating coefficient b1 */
    float32  af32CoefficientsB1_Nominator[JKOBJLIST_RAD_ROAD_BOUNDARY_DETECTION_MAX_NUM_CLUSTERS];
    float32  af32CoefficientsB1_Denominator[JKOBJLIST_RAD_ROAD_BOUNDARY_DETECTION_MAX_NUM_CLUSTERS];


    uint16 u16i = 0u;
    uint16 u16ClusterLabel = 0u;
    uint16 u16ClusterIndex = 0u;
    float32 f32x = FLT_ZERO;
    float32 f32y = FLT_ZERO;
    uint16 u16NumLines = 0u;
    float32 f32Slope = FLT_ZERO;
    float32 f32OffsetY = FLT_ZERO;

    if (NULL_PTR == pRdrObjList)
    {
    }
    else
    {
        for (u16i = 0u; u16i < JKOBJLIST_RAD_ROAD_BOUNDARY_DETECTION_MAX_NUM_CLUSTERS; u16i++)
        {
            af32MeanX[u16i] = FLT_ZERO;
            af32MeanY[u16i] = FLT_ZERO;
            au16TracksPerClusterTmp[u16i] = 0u;
            af32CoefficientsB0[u16i] = FLT_ZERO;
            af32CoefficientsB1[u16i] = FLT_ZERO;
            af32CoefficientsB1_Nominator[u16i] = FLT_ZERO;
            af32CoefficientsB1_Denominator[u16i] = FLT_ZERO;
        }

        /* First iteration to calcualte mean values */
        for (u16i = 0u; u16i < FRONT_RADAR_CONVERTER_OBJECTS_U8NUMOBJECTS_MAX; u16i++)
        {
            u16ClusterLabel = au16Clusters[u16i];

            if (((u16ClusterLabel != JKOBJLIST_RAD_ROAD_BOUNDARY_DETECTION_LABEL_UNKNOWN) &&
                (u16ClusterLabel != JKOBJLIST_RAD_ROAD_BOUNDARY_DETECTION_LABEL_NOISE)) &&
                (u16ClusterLabel < JKOBJLIST_RAD_ROAD_BOUNDARY_DETECTION_MAX_NUM_CLUSTERS))
            {
                /* Valid labels start with 1u, subtract 1u to map to array index */
                u16ClusterIndex = u16ClusterLabel - 1u;

                if (au16NumTracksPerCluster[u16ClusterIndex] < JKOBJLIST_RAD_ROAD_BOUNDARY_DETECTION_MIN_TRACKS_PER_CLUSTER)
                {
                    /* MISRA */
                }
                else if (au16TracksPerClusterTmp[u16ClusterIndex] == 0u)
                {
                    af32MeanX[u16ClusterIndex] = pRdrObjList->Objects[u16i].DistX;
                    af32MeanY[u16ClusterIndex] = pRdrObjList->Objects[u16i].DistY;

                    au16TracksPerClusterTmp[u16ClusterIndex]++;
                }
                else
                {
                    af32MeanX[u16ClusterIndex] += (pRdrObjList->Objects[u16i].DistX - af32MeanX[u16ClusterIndex]) /
                        (((float32)au16TracksPerClusterTmp[u16ClusterIndex]) + FLT_ONE);

                    af32MeanY[u16ClusterIndex] += (pRdrObjList->Objects[u16i].DistY - af32MeanY[u16ClusterIndex]) /
                        (((float32)au16TracksPerClusterTmp[u16ClusterIndex]) + FLT_ONE);

                    au16TracksPerClusterTmp[u16ClusterIndex]++;
                }

            }
            else
            {
                /* MISRA */
            }
        }

        /* Now run second iteration to calculate linear approximation y = b_0 + b_1 * x */
        for (u16i = 0u; u16i < FRONT_RADAR_CONVERTER_OBJECTS_U8NUMOBJECTS_MAX; u16i++)
        {
            u16ClusterLabel = au16Clusters[u16i];

            if (((u16ClusterLabel != JKOBJLIST_RAD_ROAD_BOUNDARY_DETECTION_LABEL_UNKNOWN) &&
                (u16ClusterLabel != JKOBJLIST_RAD_ROAD_BOUNDARY_DETECTION_LABEL_NOISE)) &&
                (u16ClusterLabel < JKOBJLIST_RAD_ROAD_BOUNDARY_DETECTION_MAX_NUM_CLUSTERS))
            {
                u16ClusterIndex = u16ClusterLabel - 1u;

                if (au16NumTracksPerCluster[u16ClusterIndex] < JKOBJLIST_RAD_ROAD_BOUNDARY_DETECTION_MIN_TRACKS_PER_CLUSTER)
                {
                    /* MISRA */
                }
                else
                {
                    f32x = pRdrObjList->Objects[u16i].DistX;
                    f32y = pRdrObjList->Objects[u16i].DistY;

                    /* Calculate coefficient b_1 as b_1 = (sum (x_i * mean_x) * (y_i * mean_y)) / (sum (x_i - mean_x) * (x_i - mean_x)) */
                    af32CoefficientsB1_Nominator[u16ClusterIndex] += (f32x - af32MeanX[u16ClusterIndex]) * (f32y - af32MeanY[u16ClusterIndex]);
                    af32CoefficientsB1_Denominator[u16ClusterIndex] += (f32x - af32MeanX[u16ClusterIndex]) * (f32x - af32MeanX[u16ClusterIndex]);
                }
            }
            else
            {
                /* MISRA */
            }
        }

        /* Calcualte coefficients b1 and b0 */
        for (u16i = 0u; u16i < JKOBJLIST_RAD_ROAD_BOUNDARY_DETECTION_MAX_NUM_CLUSTERS; u16i++)
        {
            if (au16NumTracksPerCluster[u16i] < JKOBJLIST_RAD_ROAD_BOUNDARY_DETECTION_MIN_TRACKS_PER_CLUSTER)
            {
                /* MISRA */
            }
            else if (af32CoefficientsB1_Denominator[u16i] > FLT_EPSILON)
            {
                f32Slope = af32CoefficientsB1_Nominator[u16i] / af32CoefficientsB1_Denominator[u16i];
                f32OffsetY = (af32MeanY[u16i]) - (f32Slope * (af32MeanX[u16i]));

                if (f32Slope < FLT_ZERO)
                {
                    f32Slope = -f32Slope;
                }
                else
                {
                    /* MISRA */
                }

                if (f32OffsetY < FLT_ZERO)
                {
                    f32OffsetY = -f32OffsetY;
                }
                else
                {
                    /* MISRA */
                }

                /* Reject lines not parallel to the ego-vehicle */
                if ((f32Slope < JKOBJLIST_RAD_ROAD_BOUNDARY_DETECTION_MAX_SLOPE) && (f32OffsetY > JKOBJLIST_RAD_ROAD_BOUNDARY_DETECTION_OFFSET_Y))
                {

                    af32CoefficientsB1[u16NumLines] = (af32CoefficientsB1_Nominator[u16i]) / (af32CoefficientsB1_Denominator[u16i]);
                    af32CoefficientsB0[u16NumLines] = (af32MeanY[u16i]) - ((af32CoefficientsB1[u16i]) * (af32MeanX[u16i]));
                    u16NumLines++;
                }
                else
                {
                    /* MISRA */
                }
            }
            else
            {
                /* MISRA */
            }
        }
    }

    return u16NumLines;
}

#endif

LOCAL FUNC(void, ObjFusn_CODE) getFrontRdrObjListToProcess_4D(CONSTP2CONST(FrntRdrObjList_4D, AUTOMATIC, ObjFusn_VAR_NOINIT) pRdrObjList,
    boolean abProcessTracks[])
{
    uint16 u16i = 0u;
	uint16 u16_CIPV_Idx_Rdr_F = 99u;
    float32 f32ObjDxTmp = 99.0f;

#if STD_ON == JKOBJLIST_RAD_ENABLE_ROAD_BOUNDARY_DETECTION
    boolean abIsValid[FRONT_RADAR_CONVERTER_OBJECTS_U8NUMOBJECTS_MAX];
#endif

    if (NULL_PTR == pRdrObjList)
    {
        /* MISRA */
    }
    else
    {
        /* Initialize arrays used for road boundary detection */
        for (u16i = 0u; u16i < FRONT_RADAR_CONVERTER_OBJECTS_U8NUMOBJECTS_MAX; u16i++)
        {
#if STD_ON == JKOBJLIST_RAD_ENABLE_ROAD_BOUNDARY_DETECTION
            if (((pRdrObjList->Status).HostYawRate) < JKOBJLIST_RAD_ROAD_BOUNDARY_DETECTION_MAX_YAW)
            {
                abIsValid[u16i] = validateRadarObject_4D(&(pRdrObjList->Objects[u16i]));
            }
            else
            {
                abProcessTracks[u16i] = validateRadarObject_4D(&(pRdrObjList->Objects[u16i]));
            }
#else
            abProcessTracks[u16i] = validateRadarObject_4D(&(pRdrObjList->Objects[u16i]));
#endif
        }
        /* Find the radar only object closest to the ego car in the current lane   ruifeng add*/
		for (u16i = 0u; u16i < FRONT_RADAR_CONVERTER_OBJECTS_U8NUMOBJECTS_MAX; u16i++)
        {
            if ((pRdrObjList->Objects[u16i].DistX < 15.0f) && (pRdrObjList->Objects[u16i].DistX > 3.0f) &&
                (pRdrObjList->Objects[u16i].DistY < 1.0f) && (pRdrObjList->Objects[u16i].DistY > -1.0f) &&
                (pRdrObjList->Objects[u16i].VabsX < 2.0f) && (pRdrObjList->Status.HostSpeed < 5.0f))
            {
                if (pRdrObjList->Objects[u16i].DistX < f32ObjDxTmp)
                {
                    f32ObjDxTmp = pRdrObjList->Objects[u16i].DistX;
                    u16_CIPV_Idx_Rdr_F = u16i;
                }
                else
                {
                    /* MISRA C */
                }
                
            }
            else
            {
                /* MISRA C */
            }
        }
        if (u16_CIPV_Idx_Rdr_F != 99)
        {
            abProcessTracks[u16_CIPV_Idx_Rdr_F] = TRUE;
        }
        else
        {
            u16_CIPV_Idx_Rdr_F = 99u;
            f32ObjDxTmp = 99.0f;
        }
		
#if STD_ON == JKOBJLIST_RAD_ENABLE_ROAD_BOUNDARY_DETECTION
        if (((pRdrObjList->Status).HostYawRate) < JKOBJLIST_RAD_ROAD_BOUNDARY_DETECTION_MAX_YAW)
        {
            runRoadBoundaryDetection_4D(pRdrObjList, abIsValid, abProcessTracks);
        }
        else
        {
            /* MISRA */
        }
#endif
    }
}

#if STD_ON == JKOBJLIST_RAD_ENABLE_ROAD_BOUNDARY_DETECTION
LOCAL FUNC(void, ObjFusn_CODE) runRoadBoundaryDetection_4D(CONSTP2CONST(FrntRdrObjList_4D, AUTOMATIC, ObjFusn_VAR_NOINIT) pRdrObjList,
    const boolean abValidTracks[], boolean abProcessTracks[])
{
    boolean abRelevantTracks[FRONT_RADAR_CONVERTER_OBJECTS_U8NUMOBJECTS_MAX];
    uint16 au16Clusters[FRONT_RADAR_CONVERTER_OBJECTS_U8NUMOBJECTS_MAX];
    uint16 au16NumTracksPerCluster[FRONT_RADAR_CONVERTER_OBJECTS_U8NUMOBJECTS_MAX];
    float32 af32CoefficientsB0[JKOBJLIST_RAD_ROAD_BOUNDARY_DETECTION_MAX_NUM_CLUSTERS];
    float32 af32CoefficientsB1[JKOBJLIST_RAD_ROAD_BOUNDARY_DETECTION_MAX_NUM_CLUSTERS];
    float32 af32MaxDistance[JKOBJLIST_RAD_ROAD_BOUNDARY_DETECTION_MAX_NUM_CLUSTERS];

    float32 f32PosX = FLT_ZERO;
    float32 f32PosY = FLT_ZERO;
    float32 f32PosY_Model = FLT_ZERO;

    uint16 u16i = 0u;
    uint16 u16j = 0u;
    uint16 u16NumLines = 0u;

    /* Initialize arrays used for road boundary detection */
    for (u16i = 0u; u16i < FRONT_RADAR_CONVERTER_OBJECTS_U8NUMOBJECTS_MAX; u16i++)
    {
        abRelevantTracks[u16i] = FALSE;
        au16Clusters[u16i] = JKOBJLIST_RAD_ROAD_BOUNDARY_DETECTION_LABEL_UNKNOWN;
        au16NumTracksPerCluster[u16i] = 0u;
        abProcessTracks[u16i] = TRUE;
    }

    if (NULL_PTR == pRdrObjList)
    {
        /* MISRA */
    }
    else
    {

        /* Now search for relevant tracks in road boundary area */
        findRelevantTracks_4D(pRdrObjList, abRelevantTracks, abValidTracks);

        /* run Clustering */
        runClustering_4D(pRdrObjList, abRelevantTracks, au16Clusters, au16NumTracksPerCluster);

        /* Run simple linear regression for line fitting */
        u16NumLines = runLinearRegression_4D(pRdrObjList, au16Clusters, au16NumTracksPerCluster, af32CoefficientsB0, af32CoefficientsB1);

        /* Calculate a maximum distance (longitudinal) for each line, i.e. tracks beyond this distance are not removed */
        for (u16i = 0u; u16i < u16NumLines; u16i++)
        {
            /* Check if approximated line will intersect with boundary of ROI, i.e. positive offset (left of vehicle) but  */
            /* negative slope intersects ROI at some longitudinal distance */
            if (((af32CoefficientsB0[u16i] > FLT_ZERO) && ((af32CoefficientsB1[u16i]) < FLT_ZERO)) ||
                ((af32CoefficientsB0[u16i] < FLT_ZERO) && ((af32CoefficientsB1[u16i]) > FLT_ZERO)))
            {
                af32MaxDistance[u16i] = (JKOBJLIST_RAD_ROAD_BOUNDARY_DETECTION_OFFSET_Y - af32CoefficientsB0[u16i]) /
                    af32CoefficientsB1[u16i];
            }
            else
            {
                af32MaxDistance[u16i] = RADAR_CONVERTER_OBJECTS_OBJDX_MAX;
            }
        }

        /* Check each track to be valid and within detected ROI, i.e. not beyond road boundaries */
        for (u16i = 0u; u16i < FRONT_RADAR_CONVERTER_OBJECTS_U8NUMOBJECTS_MAX; u16i++)
        {
            if (FALSE == abValidTracks[u16i])
            {
                abProcessTracks[u16i] = FALSE;
            }
            else
            {
                f32PosX = pRdrObjList->Objects[u16i].DistX;
                f32PosY = pRdrObjList->Objects[u16i].DistY;

                /* Now check all available lines */
                for (u16j = 0u; (u16j < u16NumLines) && (TRUE == abProcessTracks[u16i]); u16j++)
                {
                    f32PosY_Model = (af32CoefficientsB0[u16j]) + ((af32CoefficientsB1[u16j]) * f32PosX);

                    if (((f32PosY > FLT_ZERO) && (f32PosY_Model > FLT_ZERO)) && (f32PosX < af32MaxDistance[u16j]))
                    {
                        /** ToDo: should we check for f32PosY_Model > JKOBJLIST_RAD_ROAD_BOUNDARY_DETECTION_OFFSET_Y or
                        f32PosY_Model > FLT_ZERO ?? */
                        if (f32PosY > f32PosY_Model)
                        {
                            abProcessTracks[u16i] = FALSE;
                        }
                        else if ((f32PosY_Model - f32PosY) < JKOBJLIST_RAD_ROAD_BOUNDARY_DETECTION_MAX_DIST_TO_LINE)
                        {
                            abProcessTracks[u16i] = FALSE;
                        }
                        else
                        {
                            /* MISRA */
                        }
                    }
                    else if (((f32PosY < FLT_ZERO) && (f32PosY_Model < FLT_ZERO)) && (f32PosX < af32MaxDistance[u16j]))
                    {
                        if (f32PosY < f32PosY_Model)
                        {
                            abProcessTracks[u16i] = FALSE;
                        }
                        else if ((f32PosY - f32PosY_Model) < JKOBJLIST_RAD_ROAD_BOUNDARY_DETECTION_MAX_DIST_TO_LINE)
                        {
                            abProcessTracks[u16i] = FALSE;
                        }
                        else
                        {
                            /* MISRA */
                        }
                    }
                    else
                    {
                        /* MISRA */
                    }
                }
            }
        }
    }
}




LOCAL FUNC(boolean, ObjFusn_CODE) array_contains_u16(const uint16 u16Arr[], const uint16 u16ArrSize,
    const uint16 u16Element)
{
    boolean bFound = FALSE;
    uint16 u16i = 0u;

    for (u16i = 0u; (u16i < u16ArrSize) && (bFound == FALSE); u16i++)
    {
        if (u16Arr[u16i] == u16Element)
        {
            bFound = TRUE;
        }
        else
        {
            /* MISRA */
        }
    }

    return bFound;
}

#endif

LOCAL FUNC(void, ObjFusn_CODE) calculateVariances_Radar(CONSTP2VAR(JkObjFusn_TrackableType, AUTOMATIC, ObjFusn_VAR_NOINIT) pRdrObj)
{
    float32 f32PosX = FLT_ZERO;
    float32 f32PosY = FLT_ZERO;
    float32 f32VarX = FLT_ZERO;
    float32 f32VarY = FLT_ZERO;
    float32 f32VarVx = FLT_ZERO;
    float32 f32VarVy = FLT_ZERO;
    float32 f32VarAx = FLT_ZERO;
    float32 f32Angle = FLT_ZERO;
    float32 f32Sin = FLT_ZERO;
    float32 f32Cos = FLT_ZERO;

    float32 f32Vx = FLT_ZERO;  // Ryan add

    if (NULL_PTR != pRdrObj)
    {
        f32Angle = jk_fusion_atan2(f32PosY, f32PosX);
        f32Sin = jk_fusion_sin(f32Angle);
        f32Cos = jk_fusion_cos(f32Angle);

        f32PosX = pRdrObj->vecX.data[TRACKABLE_POSX];
        f32PosY = pRdrObj->vecX.data[TRACKABLE_POSY];
		f32Vx = pRdrObj->vecX.data[TRACKABLE_VELX];  //Ryan add

        f32VarX = JKOBJLIST_RAD_SENSOR_MODEL_POS_X_BETA_0;
        f32VarX += JKOBJLIST_RAD_SENSOR_MODEL_POS_X_BETA_1 * f32PosX;
        f32VarX += JKOBJLIST_RAD_SENSOR_MODEL_POS_X_BETA_2 * f32PosY;
        f32VarX += JKOBJLIST_RAD_SENSOR_MODEL_POS_X_BETA_3 * (f32PosX * f32PosX);
        f32VarX += JKOBJLIST_RAD_SENSOR_MODEL_POS_X_BETA_4 * (f32PosY * f32PosY);
        f32VarX += JKOBJLIST_RAD_SENSOR_MODEL_POS_X_BETA_5 * (f32PosX * f32PosY);

        f32VarY = JKOBJLIST_RAD_SENSOR_MODEL_POS_Y_BETA_0;
        f32VarY += JKOBJLIST_RAD_SENSOR_MODEL_POS_Y_BETA_1 * f32PosX;
        f32VarY += JKOBJLIST_RAD_SENSOR_MODEL_POS_Y_BETA_2 * f32PosY;
        f32VarY += JKOBJLIST_RAD_SENSOR_MODEL_POS_Y_BETA_3 * (f32PosX * f32PosX);
        f32VarY += JKOBJLIST_RAD_SENSOR_MODEL_POS_Y_BETA_4 * (f32PosY * f32PosY);
        f32VarY += JKOBJLIST_RAD_SENSOR_MODEL_POS_Y_BETA_5 * (f32PosX * f32PosY);

        f32VarVx = JKOBJLIST_RAD_SENSOR_MODEL_VEL_X_BETA_0;
        f32VarVx += JKOBJLIST_RAD_SENSOR_MODEL_VEL_X_BETA_1 * f32PosX;
        f32VarVx += JKOBJLIST_RAD_SENSOR_MODEL_VEL_X_BETA_2 * f32PosY;
        f32VarVx += JKOBJLIST_RAD_SENSOR_MODEL_VEL_X_BETA_3 * (f32PosX * f32PosX);
        f32VarVx += JKOBJLIST_RAD_SENSOR_MODEL_VEL_X_BETA_4 * (f32PosY * f32PosY);
        f32VarVx += JKOBJLIST_RAD_SENSOR_MODEL_VEL_X_BETA_5 * (f32PosX * f32PosY);

        f32VarVy = JKOBJLIST_RAD_SENSOR_MODEL_VEL_Y_BETA_0;
        f32VarVy += JKOBJLIST_RAD_SENSOR_MODEL_VEL_Y_BETA_1 * f32PosX;
        f32VarVy += JKOBJLIST_RAD_SENSOR_MODEL_VEL_Y_BETA_2 * f32PosY;
        f32VarVy += JKOBJLIST_RAD_SENSOR_MODEL_VEL_Y_BETA_3 * (f32PosX * f32PosX);
        f32VarVy += JKOBJLIST_RAD_SENSOR_MODEL_VEL_Y_BETA_4 * (f32PosY * f32PosY);
        f32VarVy += JKOBJLIST_RAD_SENSOR_MODEL_VEL_Y_BETA_5 * (f32PosX * f32PosY);

        f32VarAx = JKOBJLIST_RAD_SENSOR_MODEL_ACC_X_BETA_0;
        f32VarAx += JKOBJLIST_RAD_SENSOR_MODEL_ACC_X_BETA_1 * f32PosX;
        f32VarAx += JKOBJLIST_RAD_SENSOR_MODEL_ACC_X_BETA_2 * f32PosY;
        f32VarAx += JKOBJLIST_RAD_SENSOR_MODEL_ACC_X_BETA_3 * (f32PosX * f32PosX);
        f32VarAx += JKOBJLIST_RAD_SENSOR_MODEL_ACC_X_BETA_4 * (f32PosY * f32PosY);
        f32VarAx += JKOBJLIST_RAD_SENSOR_MODEL_ACC_X_BETA_5 * (f32PosX * f32PosY);

        if ((f32PosX < 20.0f) && (f32PosX > 0.0f) && (f32Vx < 7.0f) && (f32Vx > -7.0f))
        {
            f32VarX = 10.0f;   //Ryan add
            f32VarVx = JKOBJLIST_RAD_SENSOR_MODEL_VEL_X_MAX;  //Ryan add
        }
        else
        {
            f32VarX = JKOBJLIST_RAD_SENSOR_MODEL_POS_X_MIN;   //Ryan add
            f32VarVx = JKOBJLIST_RAD_SENSOR_MODEL_VEL_X_MIN;  //Ryan add
        }
        
        f32VarX = JKOBJLIST_RAD_SENSOR_MODEL_POS_X_MIN;
        f32VarVx = JKOBJLIST_RAD_SENSOR_MODEL_VEL_X_MIN;
        f32VarY = JKOBJLIST_RAD_SENSOR_MODEL_POS_Y_MIN;   //Ryan add
        f32VarVy = JKOBJLIST_RAD_SENSOR_MODEL_VEL_Y_MIN;  //Ryan add

        pRdrObj->matP.data[TRACKABLE_INDEX_VARIANCE_POSX] =
            jk_fusion_min_max_F32(f32VarX, JKOBJLIST_RAD_SENSOR_MODEL_POS_X_MIN,
                10.0f);

        pRdrObj->matP.data[TRACKABLE_INDEX_VARIANCE_POSY] =
            jk_fusion_min_max_F32(f32VarY, JKOBJLIST_RAD_SENSOR_MODEL_POS_Y_MIN,
                JKOBJLIST_RAD_SENSOR_MODEL_POS_Y_MAX);

        pRdrObj->matP.data[TRACKABLE_INDEX_VARIANCE_VELX] =
            jk_fusion_min_max_F32(f32VarVx, JKOBJLIST_RAD_SENSOR_MODEL_VEL_X_MIN,
                JKOBJLIST_RAD_SENSOR_MODEL_VEL_X_MAX);

        pRdrObj->matP.data[TRACKABLE_INDEX_VARIANCE_VELY] =
            jk_fusion_min_max_F32(f32VarVy, JKOBJLIST_RAD_SENSOR_MODEL_VEL_Y_MIN,
                JKOBJLIST_RAD_SENSOR_MODEL_VEL_Y_MAX);

        pRdrObj->matP.data[TRACKABLE_INDEX_VARIANCE_ACCX] =
            jk_fusion_min_max_F32(f32VarAx, JKOBJLIST_RAD_SENSOR_MODEL_ACC_X_MIN,
                JKOBJLIST_RAD_SENSOR_MODEL_ACC_X_MAX);

        pRdrObj->matP.data[TRACKABLE_INDEX_VARIANCE_ACCY] = FLT_ZERO;
        pRdrObj->matP.data[TRACKABLE_INDEX_COVARIANCE_POSX_POSY] = FLT_ZERO;
        pRdrObj->matP.data[TRACKABLE_INDEX_COVARIANCE_POSX_VELX] = FLT_ZERO;
        pRdrObj->matP.data[TRACKABLE_INDEX_COVARIANCE_POSY_VELX] = FLT_ZERO;
        pRdrObj->matP.data[TRACKABLE_INDEX_COVARIANCE_POSX_VELY] = FLT_ZERO;
        pRdrObj->matP.data[TRACKABLE_INDEX_COVARIANCE_POSY_VELY] = FLT_ZERO;
        pRdrObj->matP.data[TRACKABLE_INDEX_COVARIANCE_VELX_VELY] = FLT_ZERO;
        pRdrObj->matP.data[TRACKABLE_INDEX_COVARIANCE_POSX_ACCX] = FLT_ZERO;
        pRdrObj->matP.data[TRACKABLE_INDEX_COVARIANCE_POSY_ACCX] = FLT_ZERO;
        pRdrObj->matP.data[TRACKABLE_INDEX_COVARIANCE_VELX_ACCX] = FLT_ZERO;
        pRdrObj->matP.data[TRACKABLE_INDEX_COVARIANCE_VELY_ACCX] = FLT_ZERO;
        pRdrObj->matP.data[TRACKABLE_INDEX_COVARIANCE_POSX_ACCY] = FLT_ZERO;
        pRdrObj->matP.data[TRACKABLE_INDEX_COVARIANCE_POSY_ACCY] = FLT_ZERO;
        pRdrObj->matP.data[TRACKABLE_INDEX_COVARIANCE_VELX_ACCY] = FLT_ZERO;
        pRdrObj->matP.data[TRACKABLE_INDEX_COVARIANCE_VELY_ACCY] = FLT_ZERO;
        pRdrObj->matP.data[TRACKABLE_INDEX_COVARIANCE_ACCX_ACCY] = FLT_ZERO;
        pRdrObj->matP.u16Size = 5u; /* PRQA S 3120 *//* fixed vector size */

        (void)f32RotateSymMat(&(pRdrObj->matP), &(pRdrObj->matP), f32Sin, f32Cos);

        /* Reset Covariances as negative co-variances may result in negative variances in LKF*/
        /* Also check  https://alvc-jir02.alv.autoliv.int/browse/AMF-378 for detailed problem description*/
        pRdrObj->matP.data[TRACKABLE_INDEX_COVARIANCE_POSX_POSY] = FLT_ZERO;
        pRdrObj->matP.data[TRACKABLE_INDEX_COVARIANCE_POSX_VELX] = FLT_ZERO;
        pRdrObj->matP.data[TRACKABLE_INDEX_COVARIANCE_POSY_VELX] = FLT_ZERO;
        pRdrObj->matP.data[TRACKABLE_INDEX_COVARIANCE_POSX_VELY] = FLT_ZERO;
        pRdrObj->matP.data[TRACKABLE_INDEX_COVARIANCE_POSY_VELY] = FLT_ZERO;
        pRdrObj->matP.data[TRACKABLE_INDEX_COVARIANCE_VELX_VELY] = FLT_ZERO;
    }
    else
    {
        /* MISRA */
    }
}

LOCAL FUNC(uint32, ObjFusn_CODE) calculateFCRdrObjectAngle_4D(CONSTP2CONST(RdrObjType_4D , AUTOMATIC, ObjFusn_VAR_NOINIT) pObject,
    CONSTP2VAR(float32, AUTOMATIC, ObjFusn_VAR_NOINIT) f32Angle)
{
    uint32 u32Success = JKOBJFUSN_ERROR_NOERROR;   /* variable may be set to other values depending on run-time pointer check activation */
    float32 f32PosX;
    float32 f32PosY;
    float32 f32AngleTmp;

#if (JK_RUNTIME_POINTER_CHECK == STD_ON)
    if ((NULL_PTR == pObject) || (NULL_PTR == f32Angle))
    {
        u32Success = JKOBJFUSN_ERROR_NULL_POINTER_EXCEPTION;
        (void)jk_error_management_addError(u32Success, JKOBJFUSN_AAU_RADAR_CONVERT,
            JKOBJFUSN_AAU_RADAR_CONVERT_CALCULATE_OBJECT_ANGLE);
    }
    else
#endif
    {
        f32PosX = pObject->DistX;
        f32PosY = pObject->DistY;

        f32AngleTmp = jk_fusion_atan2(f32PosY, f32PosX);
        f32AngleTmp = jk_fusion_rtod(f32AngleTmp);
        *f32Angle = jk_fusion_abs(f32AngleTmp);
    }

    return u32Success;
}

LOCAL FUNC(boolean, ObjFusn_CODE) validateRadarObject_4D(CONSTP2CONST(RdrObjType_4D, AUTOMATIC, ObjFusn_VAR_NOINIT) pObject)
{
    boolean bIsValid = TRUE;
    // DX11-45632
    if ((pObject->ObstacleProbability < 0 ||
         pObject->ObstacleProbability > 100)) {
        // printf("pObject->ID invalid : %d\n",pObject->ID);
        bIsValid = FALSE;
        return bIsValid;
    }
    // DX11-45604
    if ((pObject->ID <= RADAR_CONVERTER_OBJECTS_OBJID_MIN) ||
        (pObject->ID > RADAR_CONVERTER_OBJECTS_OBJID_MAX))
    {
        //printf("pObject->ID invalid : %d\n",pObject->ID);
        bIsValid = FALSE;
        return bIsValid;
    }
    if (
#if (RADAR_CONVERTER_OBJECTS_UPDATEBIT_MIN > 0u)
        (pObject->UpdateBit < RADAR_CONVERTER_OBJECTS_UPDATEBIT_MIN) ||
#endif
        (pObject->UpdateBit > RADAR_CONVERTER_OBJECTS_UPDATEBIT_MAX))
    {
        //printf("pObject->UpdateBit invalid:%d\n",pObject->UpdateBit);
        //bIsValid = FALSE;
    }
    if ((pObject->HeadingAngle < RADAR_CONVERTER_OBJECTS_HEADING_MIN) || (pObject->HeadingAngle > RADAR_CONVERTER_OBJECTS_HEADING_MAX))
    {
        //printf("pObject->HeadingAngle invalid : %f\n",pObject->HeadingAngle);
        //bIsValid = FALSE;
    }
/*
    else if ((pObject->BoxCenterLat < RADAR_CONVERTER_OBJECTS_BOXCENTERLAT_MIN) || (pObject->BoxCenterLat > RADAR_CONVERTER_OBJECTS_BOXCENTERLAT_MAX))
    {
        bIsValid = FALSE;
    }
    else if ((pObject->BoxCenterLgt < RADAR_CONVERTER_OBJECTS_BOXCENTERLGT_MIN) || (pObject->BoxCenterLgt > RADAR_CONVERTER_OBJECTS_BOXCENTERLGT_MAX))
    {
        bIsValid = FALSE;
    }
    else if (
#if (RADAR_CONVERTER_OBJECTS_OBSERVATIONHIST_MIN > 0u)
        (pObject->ObservationHist < RADAR_CONVERTER_OBJECTS_OBSERVATIONHIST_MIN) ||
#endif
        (pObject->ObservationHist > RADAR_CONVERTER_OBJECTS_OBSERVATIONHIST_MAX))
    {
        bIsValid = FALSE;
    }
    else if (
#if (RADAR_CONVERTER_OBJECTS_QUALITYBITS_MIN > 0u)
        (pObject->QualityBits < RADAR_CONVERTER_OBJECTS_QUALITYBITS_MIN) ||
#endif
        (pObject->QualityBits > RADAR_CONVERTER_OBJECTS_QUALITYBITS_MAX))
    {
        bIsValid = FALSE;
    }
*/
//DX11-45628
    if ((pObject->ObjXAccRel < RADAR_CONVERTER_OBJECTS_OBJAX_MIN) || (pObject->ObjXAccRel > RADAR_CONVERTER_OBJECTS_OBJAX_MAX))
    {
        // printf("pObject->ObjXAccRel invalid : %f\n",pObject->ObjXAccRel);
        bIsValid = FALSE;
    }

    //DX11-45624
    if ((pObject->ObjYAccRel < RADAR_CONVERTER_OBJECTS_OBJAY_MIN) || (pObject->ObjYAccRel > RADAR_CONVERTER_OBJECTS_OBJAY_MAX))
    {
        // printf("pObject->ObjYAccRel invalid : %f\n",pObject->ObjYAccRel);
        bIsValid = FALSE;
    }
    if ((pObject->ObjBoundingBoxLength < RADAR_CONVERTER_OBJECTS_BOXLENGTH_MIN) || (pObject->ObjBoundingBoxLength > RADAR_CONVERTER_OBJECTS_BOXLENGTH_MAX))
    {
        // printf("pObject->ObjBoundingBoxLength invalid : %f\n",pObject->ObjBoundingBoxLength);
        bIsValid = FALSE;
    }
    if ((pObject->ObjBoundingBoxWidth < RADAR_CONVERTER_OBJECTS_BOXWIDTH_MIN) || (pObject->ObjBoundingBoxWidth > RADAR_CONVERTER_OBJECTS_BOXWIDTH_MAX))
    {
        // printf("pObject->ObjBoundingBoxWidth invalid : %f\n",pObject->ObjBoundingBoxWidth);
        bIsValid = FALSE;
    }
    if ((pObject->ObjBoundingBoxHeight < RADAR_CONVERTER_OBJECTS_BOXHEIGHT_MIN) || (pObject->ObjBoundingBoxHeight > RADAR_CONVERTER_OBJECTS_BOXHEIGHT_MAX))
    {
        // printf("pObject->ObjBoundingBoxWidth invalid : %f\n",pObject->ObjBoundingBoxWidth);
        // bIsValid = FALSE;
    }
    if (
#if (RADAR_CONVERTER_OBJECTS_OBJCHKS_MIN > 0u)
        (pObject->Chks < RADAR_CONVERTER_OBJECTS_OBJCHKS_MIN) ||
#endif
        (pObject->Chks > RADAR_CONVERTER_OBJECTS_OBJCHKS_MAX))
    {
        //printf("pObject->Chks invalid : %d\n",pObject->Chks);
        //bIsValid = FALSE; //asdasd
    }
    if (
#if (RADAR_CONVERTER_OBJECTS_OBJCNTR_MIN > 0u)
        (pObject->Cntr < RADAR_CONVERTER_OBJECTS_OBJCNTR_MIN) ||
#endif
        (pObject->Cntr > RADAR_CONVERTER_OBJECTS_OBJCNTR_MAX))
    {
        //printf("pObject->Cntr invalid : %d\n",pObject->Cntr);
        //bIsValid = FALSE; //asdasd
    }
/*
    else if (
#if (RADAR_CONVERTER_OBJECTS_OBJCOASTCNT_MIN > 0u)
        (pObject->ObjCoastCnt < RADAR_CONVERTER_OBJECTS_OBJCOASTCNT_MIN) ||
#endif
        (pObject->ObjCoastCnt > RADAR_CONVERTER_OBJECTS_OBJCOASTCNT_MAX))
    {
        bIsValid = FALSE;
    }
    else if (
#if (RADAR_CONVERTER_OBJECTS_OBJCONF_MIN > 0u)
        (pObject->ObjConf < RADAR_CONVERTER_OBJECTS_OBJCONF_MIN) ||
#endif
        (pObject->ObjConf > RADAR_CONVERTER_OBJECTS_OBJCONF_MAX))
    {
        bIsValid = FALSE;
    }
	*/
    // DX11-45612
    if ((pObject->DistX < RADAR_CONVERTER_OBJECTS_OBJDX_MIN) ||
        (pObject->DistX > RADAR_CONVERTER_OBJECTS_OBJDX_MAX))
    {
        // printf("pObject->DistX invalid : %f\n",pObject->DistX);
        bIsValid = FALSE;
    }
    if ((pObject->DistXStd < RADAR_CONVERTER_OBJECTS_OBJDXSTDDE_MIN) ||
        (pObject->DistXStd > RADAR_CONVERTER_OBJECTS_OBJDXSTDDE_MAX))
    {
        //printf("pObject->DistXStd invalid : %f\n",pObject->DistXStd);
        //bIsValid = FALSE;
    }
    //DX11-45608
    if ((pObject->DistY < RADAR_CONVERTER_OBJECTS_OBJDY_MIN) ||
        (pObject->DistY > RADAR_CONVERTER_OBJECTS_OBJDY_MAX))
    {
        // printf("pObject->DistY invalid : %f\n",pObject->DistY);
        bIsValid = FALSE;
    }
    if ((pObject->DistYStd < RADAR_CONVERTER_OBJECTS_OBJDYSTDDE_MIN) ||
        (pObject->DistYStd > RADAR_CONVERTER_OBJECTS_OBJDYSTDDE_MAX))
    {
        //printf("pObject->DistYStd invalid : %f\n",pObject->DistYStd);
        //bIsValid = FALSE;
    }
    if ((pObject->DistZ < RADAR_CONVERTER_OBJECTS_OBJDZ_MIN) ||
        (pObject->DistZ > RADAR_CONVERTER_OBJECTS_OBJDZ_MAX))
    {
        // printf("pObject->DistY invalid : %f\n",pObject->DistY);
        // bIsValid = FALSE;
    }
    if ((pObject->DistZStd < RADAR_CONVERTER_OBJECTS_OBJDYSTDDE_MIN) ||
        (pObject->DistZStd > RADAR_CONVERTER_OBJECTS_OBJDYSTDDE_MAX))
    {
        //printf("pObject->DistYStd invalid : %f\n",pObject->DistYStd);
        //bIsValid = FALSE;
    }
/*
    else if (
#if (RADAR_CONVERTER_OBJECTS_OBJELEVNCONF_MIN > 0u)
        (pObject->ObjElevnConf < RADAR_CONVERTER_OBJECTS_OBJELEVNCONF_MIN) ||
#endif
        (pObject->ObjElevnConf > RADAR_CONVERTER_OBJECTS_OBJELEVNCONF_MAX))
    {
        bIsValid = FALSE;
    }
    else if (
#if (RADAR_CONVERTER_OBJECTS_OBJELEVNSTS_MIN > 0u)
        (pObject->ObjElevnSts < RADAR_CONVERTER_OBJECTS_OBJELEVNSTS_MIN) ||
#endif
        (pObject->ObjElevnSts > RADAR_CONVERTER_OBJECTS_OBJELEVNSTS_MAX))
    {
        bIsValid = FALSE;
    }
*/

/*
    else if (
#if (CONTI_RADAR_CONVERTER_OBJECTS_ISINFREESPACE_MIN > 0u)
        (pObject->ObjIsInFreeSpace < CONTI_RADAR_CONVERTER_OBJECTS_ISINFREESPACE_MIN) ||
#endif
        (pObject->ObjIsInFreeSpace > CONTI_RADAR_CONVERTER_OBJECTS_ISINFREESPACE_MAX))
    {
        bIsValid = FALSE;
    }
    // ghost obj: 105%   real obj: 0%
    else if (pObject->ObjMirrProblty > RADAR_CONVERTER_OBJECTS_OBJMIRRPROBLTY_MAX)
    {
        bIsValid = FALSE;
    }
    else if (
#if (RADAR_CONVERTER_OBJECTS_U8MOTIONPATTERN_MIN > 0u)
        (pObject->ObjMtnPat < RADAR_CONVERTER_OBJECTS_U8MOTIONPATTERN_MIN) ||
#endif
        (pObject->ObjMtnPat > RADAR_CONVERTER_OBJECTS_U8MOTIONPATTERN_MAX))
    {
        bIsValid = FALSE;
    }
    else if (
#if (RADAR_CONVERTER_OBJECTS_OBJNOTREALPROBLTY_MIN > 0u)
        (pObject->ObjNotRealProblty < RADAR_CONVERTER_OBJECTS_OBJNOTREALPROBLTY_MIN) ||
#endif
        (pObject->ObjNotRealProblty > RADAR_CONVERTER_OBJECTS_OBJNOTREALPROBLTY_MAX))
    {
        bIsValid = FALSE;
    }
    else if (
#if (RADAR_CONVERTER_OBJECTS_OBJSTATYCNT_MIN > 0u)
        (pObject->ObjStatyCnt < RADAR_CONVERTER_OBJECTS_OBJSTATYCNT_MIN) ||
#endif
        (pObject->ObjStatyCnt > RADAR_CONVERTER_OBJECTS_OBJSTATYCNT_MAX))
    {
        bIsValid = FALSE;
    }
    else if (
#if (RADAR_CONVERTER_OBJECTS_OBJTIALV_MIN > 0u)
        (pObject->ObjTiAlv < RADAR_CONVERTER_OBJECTS_OBJTIALV_MIN) ||
#endif
        (pObject->ObjTiAlv > RADAR_CONVERTER_OBJECTS_OBJTIALV_MAX))
    {
        bIsValid = FALSE;
    }
    else if (
#if (RADAR_CONVERTER_OBJECTS_OBJTRACKSTS_MIN > 0u)
        (pObject->ObjTrackSts < RADAR_CONVERTER_OBJECTS_OBJTRACKSTS_MIN) ||
#endif
        (pObject->ObjTrackSts > RADAR_CONVERTER_OBJECTS_OBJTRACKSTS_MAX))
    {
        bIsValid = FALSE;
    }
    else if (
        (pObject->ObjTyp < RADAR_CONVERTER_OBJECTS_OBJTYP_MIN) ||  //Ryan add
        (pObject->ObjTyp > RADAR_CONVERTER_OBJECTS_OBJTYP_MAX))
    {
        bIsValid = FALSE;
    }
*/
    if (
#if (RADAR_CONVERTER_OBJECTS_OBJTYPCONFVEH_MIN > 0u)
        (pObject->TargetClassificationConfidence < RADAR_CONVERTER_OBJECTS_OBJTYPCONFVEH_MIN) ||
#endif
        (pObject->TargetClassificationConfidence > RADAR_CONVERTER_OBJECTS_OBJTYPCONFVEH_MAX))
    {
        //printf("pObject->TargetClassificationConfidence invalid : %f\n",pObject->TargetClassificationConfidence);
        //bIsValid = FALSE;
    }
/*
    else if (
#if (RADAR_CONVERTER_OBJECTS_OBJUSEDTRACKER_MIN > 0u)
        (pObject->ObjUsedTracker < RADAR_CONVERTER_OBJECTS_OBJUSEDTRACKER_MIN) ||
#endif
        (pObject->ObjUsedTracker > RADAR_CONVERTER_OBJECTS_OBJUSEDTRACKER_MAX))
    {
        bIsValid = FALSE;
    }
*/

    //DX11-45620
    if ((pObject->VabsX < RADAR_CONVERTER_OBJECTS_OBJVX_MIN) ||
        (pObject->VabsX > RADAR_CONVERTER_OBJECTS_OBJVX_MAX))
    {
        // printf("pObject->VabsX invalid : %f\n",pObject->VabsX);
        bIsValid = FALSE;
    }
    if ((pObject->VabsXStd < RADAR_CONVERTER_OBJECTS_OBJVXSTDDE_MIN) ||
        (pObject->VabsXStd > RADAR_CONVERTER_OBJECTS_OBJVXSTDDE_MAX))
    {
        //printf("pObject->VabsXStd invalid : %f\n",pObject->VabsXStd);
        //bIsValid = FALSE;
    }

    //DX11-45616
    if ((pObject->VabsY < RADAR_CONVERTER_OBJECTS_OBJVY_MIN) ||
        (pObject->VabsY > RADAR_CONVERTER_OBJECTS_OBJVY_MAX))
    {
        // printf("pObject->VabsY invalid : %f\n",pObject->VabsY);
        bIsValid = FALSE;
    }
    if ((pObject->VabsYStd < RADAR_CONVERTER_OBJECTS_OBJVYSTDDE_MIN) ||
        (pObject->VabsYStd > RADAR_CONVERTER_OBJECTS_OBJVYSTDDE_MAX))
    {
        //printf("pObject->VabsYStd invalid : %f\n",pObject->VabsYStd);
        //bIsValid = FALSE;
    }
/*
    else if ((pObject->RelVx < RADAR_CONVERTER_OBJECTS_RELVX_MIN) ||
        (pObject->RelVx > RADAR_CONVERTER_OBJECTS_RELVX_MAX))
    {
        bIsValid = FALSE;
    }
    else if ((pObject->RelVy < RADAR_CONVERTER_OBJECTS_RELVY_MIN) ||
        (pObject->RelVy > RADAR_CONVERTER_OBJECTS_RELVY_MAX))
    {
        bIsValid = FALSE;
    }
*/
    else
    {
        /* MISRA */
    }
    return bIsValid;
}

#define ObjFusn_STOP_SEC_SLOW_CODE
#include "ObjFusn_MemMap.h"
