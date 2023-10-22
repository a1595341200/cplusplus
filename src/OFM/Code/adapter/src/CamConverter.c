/*==================[inclusions]============================================*/
#include "CamConverter.h"
#include "CamConverter_Cfg.h"
#include "CamConverter_int.h"
#include "JkObjFusn_TrackableProps.h"
#include "JkObjFusn_ObjectListProps.h"
#include "Jk_fusion_math.h"
#include "Jk_error_management.h"
#include "Jk_common_array_utils.h"   //jk_common_array_utils_defaultInit_as8()

/*==================[macros]================================================*/
/*==================[type definitions]======================================*/
/*==================[function]==============================================*/

#define ObjFusn_START_SEC_SLOW_CODE
#include "ObjFusn_MemMap.h"

LOCAL INLINE FUNC(uint16, ObjFusn_CODE) ConvertCamMtnPat(const uint8 objMtnPat)
{
    static const uint16 objmotionPat[] =
    {
       JKOBJFUSN_TRACKABLE_U16MOTIONTYPE_UNKNOWN,
       JKOBJFUSN_TRACKABLE_U16MOTIONTYPE_STATIONARY,
       JKOBJFUSN_TRACKABLE_U16MOTIONTYPE_MOVING_EGODIRECTION_DRIVING,
       JKOBJFUSN_TRACKABLE_U16MOTIONTYPE_MOVING_EGODIRECTION_STOPPED,
       JKOBJFUSN_TRACKABLE_U16MOTIONTYPE_MOVING_EGODIRECTION_REVERSING,
       JKOBJFUSN_TRACKABLE_U16MOTIONTYPE_MOVING_ONCOMING,
       JKOBJFUSN_TRACKABLE_U16MOTIONTYPE_MOVING_CROSSING,
       JKOBJFUSN_TRACKABLE_U16MOTIONTYPE_MOVING_CROSSING
    };
    uint16 u16ObjMtnPat;
    u16ObjMtnPat = objmotionPat[objMtnPat];
    return u16ObjMtnPat;
}

LOCAL INLINE FUNC(uint16, ObjFusn_CODE) ConvertCamObjType(const uint8 objType)
{
    static const uint16 objClassLookUp[] =
    {
       JKOBJFUSN_TRACKABLE_U16CLASS_UNKNOWN,
       JKOBJFUSN_TRACKABLE_U16CLASS_VEHICLE_CAR,
       JKOBJFUSN_TRACKABLE_U16CLASS_VEHICLE_TRUCK,
       JKOBJFUSN_TRACKABLE_U16CLASS_VEHICLE_TRUCK,
       JKOBJFUSN_TRACKABLE_U16CLASS_2WHEELER_MOTORCYCLE,
       JKOBJFUSN_TRACKABLE_U16CLASS_2WHEELER_UNKNOWN,
       JKOBJFUSN_TRACKABLE_U16CLASS_2WHEELER_BICYCLE,
       JKOBJFUSN_TRACKABLE_U16CLASS_PEDESTRIAN_UNKNOWN,
       JKOBJFUSN_TRACKABLE_U16CLASS_ANIMAL_UNKNOWN,
       JKOBJFUSN_TRACKABLE_U16CLASS_UNKNOWN,
       JKOBJFUSN_TRACKABLE_U16CLASS_UNKNOWN,
       JKOBJFUSN_TRACKABLE_U16CLASS_UNKNOWN,
       JKOBJFUSN_TRACKABLE_U16CLASS_UNKNOWN,
       JKOBJFUSN_TRACKABLE_U16CLASS_UNKNOWN,
       JKOBJFUSN_TRACKABLE_U16CLASS_UNKNOWN,
       JKOBJFUSN_TRACKABLE_U16CLASS_UNKNOWN
    };
    uint16 u16ObjClass;
    u16ObjClass = objClassLookUp[objType];
    return u16ObjClass;
}

/*!****************************************************************************
* \details
*     convert  MVS Object to JK Fusion object format
* \param[in]
*     pOldObject input pointer to MVS object
* \param[out]
*     pNewObject output pointer to fusion object
* \return
*     none
* \constraints
*     <>
* \invocation_criteria
*     <>
******************************************************************************/
LOCAL FUNC(void, ObjFusn_CODE) CamObjToTrackableConverter_convertObject(CONSTP2VAR(JkObjFusn_TrackableType, AUTOMATIC, ObjFusn_VAR_NOINIT) pNewObject,
    CONSTP2CONST(CamObjType_ReDefine1, AUTOMATIC, ObjFusn_VAR_NOINIT) pOldObject, const uint32 sensorPattern)
{
    static float32 f32CamTimeStampPrev = 0.0f;
    if (f32CamTimeStampPrev != pOldObject->TimeStamp)
    {
        f32CamTimeStampPrev = pOldObject->TimeStamp;
    }

    /* Object Information */
    pNewObject->u16ID = (uint16)pOldObject->Id;
    pNewObject->u16Age = 0u;
    pNewObject->u16Lifespan = JKOBJFUSN_TRACKABLE_U16LIFESPAN_NEW;
    pNewObject->u8CoordSystem = JKOBJFUSN_U8COORDSYSTEM_REARAXLE_RELATIVE;
    pNewObject->u32SensorsCurr = sensorPattern;
    pNewObject->u32SensorsHist = 0u;
    pNewObject->f32ExistenceQuality = pOldObject->ExsistConfidence * 100.0f; //Ryan add
    pNewObject->f32ObstacleProbability = JKOBJFUSN_TRACKABLE_F32OBSTACLEPROBABILITY_MAX;
    /* Position */
    pNewObject->vecX.data[TRACKABLE_POSX] = pOldObject->LgtPos;
    pNewObject->vecX.data[TRACKABLE_POSY] = pOldObject->LatPos;
    /* Velocity */
    pNewObject->vecX.data[TRACKABLE_VELX] = pOldObject->LgtVel;
    pNewObject->vecX.data[TRACKABLE_VELY] = pOldObject->LatVel;
    /* Acceleration */
    pNewObject->vecX.data[TRACKABLE_ACCX] = pOldObject->LgtAcc;
    pNewObject->vecX.data[TRACKABLE_ACCY] = pOldObject->LatAcc;
    
    pNewObject->vecX.nRows = 4u;   /* PRQA S 3120 *//* fixed vector size */

    /* Object Definition */
    pNewObject->u16MotionType = ConvertCamMtnPat(pOldObject->Pose);
    pNewObject->u16Class = ConvertCamObjType(pOldObject->Type);

    calculateVariances_Cam(pNewObject);

    /* Geometry */
    pNewObject->f32Width = pOldObject->Width;
    pNewObject->f32Heading     = pOldObject->HeadingAngle;
    pNewObject->f32HeadingVar  = jk_fusion_pow2(pOldObject->HeadingAngleStdDev);
    pNewObject->f32YawRate = JKOBJFUSN_TRACKABLE_F32YAWRATE_DEFAULT;
    pNewObject->f32YawRateVar = JKOBJFUSN_TRACKABLE_F32YAWRATEVAR_DEFAULT;
    pNewObject->u16RefPoint = JKOBJFUSN_TRACKABLE_U16REFPOINT_CENTER_OF_WIDTH;
    pNewObject->u16ClassProb = (uint16)(pOldObject->ClassConfidence * 100.0f);  //Ryan add


    /*
    * 3: objID   x   Vx   y   Vy   YawAngle
    * 2: objID   x   Vx   y   Vy
    * 1: x      Vx   y   Vy
    * 0: others
    */
    if (pOldObject->CmsConfidence > 0u)
    {
        pNewObject->u8IsAsilVerified = JKOBJLIST_MVS_BITPATTERN_ASIL;
    }
    else
    {
        /* MISRA */
    }
}

/*!****************************************************************************
* \details
*     convert Front camera object list to JK fusion object list
* \param[in]
*     pOldObjList input pointer to front camera object list
* \param[out]
*     pNewObjList output pointer to Fusion object list
* \return
*     none
* \constraints
*     <>
* \invocation_criteria
*     <>
******************************************************************************/
/* PRQA S 1503 2 */ /**< Init method, only external function calls */
FUNC(boolean, ObjFusn_CODE) FrntCamObjListToJkObjListConverter(CONSTP2VAR(JkObjFusn_ObjectListType, AUTOMATIC, ObjFusn_VAR_NOINIT) pNewObjList,
    CONSTP2CONST(FrntCamObjList, AUTOMATIC, ObjFusn_VAR_NOINIT) pOldObjList, const uint32 u32globalTimeStamp) // 1ns
{
    uint16   u16i;
    boolean  bSuccess = TRUE;
    uint16   u16NumConvertedObjects = 0u;
    boolean  bObjIsValid = FALSE;
    float32  f32TempTiStamp;
    sint8    inputValidObjIdx[JK_FUSION_MAX_OBJECTS_FRONT_CAMERA];
    sint8    u8Idx;

    /* PRQA S 3223 1 *//* static variable requires function-scope only */
    static uint16 u16UpdateCount = 0u;

    if ((NULL_PTR == pNewObjList) || (NULL_PTR == pOldObjList))
    {
        bSuccess = FALSE;
    }
    else
    {
        //    pNewObjList->f32MeasurementLatency = (float32)u32globalTimeStamp / 10000.0f - f32TempTiStamp;// Convert to s
        pNewObjList->f32MeasurementLatency = 0.055f; // 55ms
        u16UpdateCount = ((u16UpdateCount + 1u) % JKOBJFUSN_OBJECTLIST_U16LISTUPDATECOUNTER_MAX);

        /* TODO: Check sensor failure flags  */
         // 0000 0000 0000 0010 : object detection Error
        //if((pOldObjList->Status.Blockage == TRUE) || (pOldObjList->Status.Fault != 0u) || (pOldObjList->Status.Calibration != 3u))
        //{
        //   bSuccess = FALSE;
        //}
        //else
        //{
        pNewObjList->u16ListUpdateCounter = u16UpdateCount;
        pNewObjList->u32SensorPattern = JKOBJFUSN_TRACKABLE_U32SENSOR_MVS_FRONT;

        for (u16i = 0u; u16i < JK_FUSION_MAX_OBJECTS_FRONT_CAMERA; u16i++)
        {
            bObjIsValid = validateVisionObject(&(pOldObjList->Objects[u16i]));

            if (bObjIsValid == TRUE)
            {
                CamObjToTrackableConverter_convertObject(&(pNewObjList->aTrackable[u16NumConvertedObjects]), &(pOldObjList->Objects[u16i]), pNewObjList->u32SensorPattern);
                u16NumConvertedObjects++;
            }
            else
            {
                /* MISRA */
            }
        }
        pNewObjList->u16NumObjects = u16NumConvertedObjects;
        //  }
    }

    return bSuccess;
}

LOCAL FUNC(boolean, ObjFusn_CODE) validateTimestamp_FrntCam(CONSTP2CONST(FrntCamObjList, AUTOMATIC, ObjFusn_VAR_NOINIT) pOldObjList,
    CONSTP2VAR(float32, AUTOMATIC, ObjFusn_VAR_NOINIT) time, VAR(sint8, ObjFusn_VAR_NOINIT) pValidObjIdx[])
{
    boolean bIsValid = FALSE;
    boolean bObjIsValid = TRUE;
    float32 f32TempTiStamp = 0.0f;

    jk_common_array_utils_defaultInit_as8(pValidObjIdx, JK_FUSION_MAX_OBJECTS_FRONT_CAMERA, -1);

    for (uint16 u16i = 0; u16i < JK_FUSION_MAX_OBJECTS_FRONT_CAMERA; u16i++)
    {
        bObjIsValid = validateVisionObject(&(pOldObjList->Objects[u16i]));

        if (bObjIsValid == TRUE)
        {
            pValidObjIdx[u16i] = (sint8)u16i;
            if (f32TempTiStamp == 0.0f)
            {
                f32TempTiStamp = pOldObjList->Objects[u16i].TimeStamp;
                bIsValid = TRUE;
            }
            else
            {
                if ((pOldObjList->Objects[u16i].TimeStamp - f32TempTiStamp) > 0.4)  //0.04:40ms
                {
                    bIsValid = FALSE;
                    break;
                }
                else
                {
                    /* MISRA */
                }
            }

        }
        else
        {
            /* MISTA */
        }
    }
    *time = f32TempTiStamp;
    return bIsValid;
}

LOCAL FUNC(boolean, ObjFusn_CODE) validateVisionObject(CONSTP2CONST(CamObjType_ReDefine1, AUTOMATIC, ObjFusn_VAR_NOINIT) pVisionObj)
{
    boolean bIsValid = TRUE;
    // DX11-45384 DX11-45428 DX11-45472 DX11-45516 DX11-45560
    if (((pVisionObj->Id) <= FRONT_CAM_CONVERTER_OBJECTS_ID_MIN) ||
        ((pVisionObj->Id) > FRONT_CAM_CONVERTER_OBJECTS_ID_MAX))
    {
        //printf("pVisionObj->Id invalid:%d\n",pVisionObj->Id);
        bIsValid = FALSE;
        return bIsValid;
    }
    // if (((pVisionObj->Angle) < FRONT_CAM_CONVERTER_OBJECTS_ANGLE_MIN) ||
    //     ((pVisionObj->Angle) > FRONT_CAM_CONVERTER_OBJECTS_ANGLE_MAX))
    // {
    //     //printf("pVisionObj->Angle invalid:%f\n",pVisionObj->Angle);
    //     //bIsValid = FALSE;
    // }

    // DX11-45416 DX11-45460 DX11-45504 DX11-45548 DX11-45592
    if (((pVisionObj->Type) < FRONT_CAM_CONVERTER_OBJECTS_TYPE_MIN) ||
        ((pVisionObj->Type) > FRONT_CAM_CONVERTER_OBJECTS_TYPE_MAX))
    {
        //printf("pVisionObj->Type invalid:%d\n",pVisionObj->Type);
        bIsValid = FALSE;
    }
    if (((pVisionObj->AngleStdDev) < FRONT_CAM_CONVERTER_OBJECTS_ANGLESTDDEV_MIN) ||
        ((pVisionObj->AngleStdDev) > FRONT_CAM_CONVERTER_OBJECTS_ANGLESTDDEV_MAX))
    {
        //printf("pVisionObj->AngleStdDev invalid:%f\n",pVisionObj->AngleStdDev);
        //bIsValid = FALSE;
    }
    // DX11-45412 DX11-45456 DX11-45500 DX11-45544 DX11-45588
    if (((pVisionObj->HeadingAngle) < FRONT_CAM_CONVERTER_OBJECTS_HEADINGANGLE_MIN) ||
        ((pVisionObj->HeadingAngle) > FRONT_CAM_CONVERTER_OBJECTS_HEADINGANGLE_MAX))
    {
        //printf("pVisionObj->HeadingAngle invalid:%f\n",pVisionObj->HeadingAngle);
        bIsValid = FALSE;
    }
    if (((pVisionObj->HeadingAngleStdDev) < FRONT_CAM_CONVERTER_OBJECTS_HEADINGANGLESTDDEV_MIN) ||
        ((pVisionObj->HeadingAngleStdDev) > FRONT_CAM_CONVERTER_OBJECTS_HEADINGANGLESTDDEV_MAX))
    {
        // printf("pVisionObj->HeadingAngleStdDev invalid:%f\n",pVisionObj->HeadingAngleStdDev);
        //  bIsValid = FALSE;
    }
    if (((pVisionObj->Height) < FRONT_CAM_CONVERTER_OBJECTS_HEIGHT_MIN) ||
        ((pVisionObj->Height) > FRONT_CAM_CONVERTER_OBJECTS_HEIGHT_MAX))
    {
        //printf("pVisionObj->Height invalid:%f\n",pVisionObj->Height);
        bIsValid = FALSE;
    }
    if (((pVisionObj->HeightStdDev) < FRONT_CAM_CONVERTER_OBJECTS_HEIGHTSTDDEV_MIN) ||
        ((pVisionObj->HeightStdDev) > FRONT_CAM_CONVERTER_OBJECTS_HEIGHTSTDDEV_MAX))
    {
        //printf("pVisionObj->HeightStdDev invalid:%f\n",pVisionObj->HeightStdDev);
        // bIsValid = FALSE;
    }
    if (((pVisionObj->Width) < FRONT_CAM_CONVERTER_OBJECTS_WIDTH_MIN) ||
        ((pVisionObj->Width) > FRONT_CAM_CONVERTER_OBJECTS_WIDTH_MAX))
    {
        //printf("pVisionObj->Width invalid:%f\n",pVisionObj->Width);
        bIsValid = FALSE;
    }
    if (((pVisionObj->WidthStdDev) < FRONT_CAM_CONVERTER_OBJECTS_WIDTHSTDDEV_MIN) ||
        ((pVisionObj->WidthStdDev) > FRONT_CAM_CONVERTER_OBJECTS_WIDTHSTDDEV_MAX))
    {
        //printf("pVisionObj->WidthStdDev invalid:%f\n",pVisionObj->WidthStdDev);
        //bIsValid = FALSE;
    }
    if (((pVisionObj->Length) < FRONT_CAM_CONVERTER_OBJECTS_LENGTH_MIN) ||
        ((pVisionObj->Length) > FRONT_CAM_CONVERTER_OBJECTS_LENGTH_MAX))
    {
        //printf("pVisionObj->Length invalid:%f\n",pVisionObj->Length);
        bIsValid = FALSE;
    }
    if (((pVisionObj->LengthStdDev) < FRONT_CAM_CONVERTER_OBJECTS_LENGTHSTDDEV_MIN) ||
        ((pVisionObj->LengthStdDev) > FRONT_CAM_CONVERTER_OBJECTS_LENGTHSTDDEV_MAX))
    {
        //printf("pVisionObj->LengthStdDev invalid:%f\n",pVisionObj->LengthStdDev);
        //bIsValid = FALSE;
    }
    if (((pVisionObj->Chks) < FRONT_CAM_CONVERTER_OBJECTS_CHKS_MIN) ||
        ((pVisionObj->Chks) > FRONT_CAM_CONVERTER_OBJECTS_CHKS_MAX))
    {
        //printf("pVisionObj->Chks invalid:%d\n",pVisionObj->Chks);
        //bIsValid = FALSE;
    }
    if (((pVisionObj->ClassConfidence) < FRONT_CAM_CONVERTER_OBJECTS_CLASSCONFIDENCE_MIN) ||
        ((pVisionObj->ClassConfidence) > FRONT_CAM_CONVERTER_OBJECTS_CLASSCONFIDENCE_MAX))
    {
        //printf("pVisionObj->ClassConfidence invalid:%f\n",pVisionObj->ClassConfidence);
        //bIsValid = FALSE;
    }
    // DX11-45424 DX11-45468 DX11-45512 DX11-45556 DX11-45600
    if (((pVisionObj->CmsConfidence) < FRONT_CAM_CONVERTER_OBJECTS_CMSCONFIDENCE_MIN) ||
        ((pVisionObj->CmsConfidence) > FRONT_CAM_CONVERTER_OBJECTS_CMSCONFIDENCE_MAX))
    {
        //printf("pVisionObj->CmsConfidence invalid:%f\n",pVisionObj->CmsConfidence);
        //bIsValid = FALSE;
    }
    if (((pVisionObj->Cntr) < FRONT_CAM_CONVERTER_OBJECTS_CNTR_MIN) ||
        ((pVisionObj->Cntr) > FRONT_CAM_CONVERTER_OBJECTS_CNTR_MAX))
    {
        //printf("pVisionObj->Cntr invalid:%d\n",pVisionObj->Cntr);
        //bIsValid = FALSE;
    }
    if (((pVisionObj->DetectionHistory) < FRONT_CAM_CONVERTER_OBJECTS_DETECTIONHISTORY_MIN) ||
        ((pVisionObj->DetectionHistory) > FRONT_CAM_CONVERTER_OBJECTS_DETECTIONHISTORY_MAX))
    {
        //printf("pVisionObj->DetectionHistory invalid:%d\n",pVisionObj->DetectionHistory);
        //bIsValid = FALSE;
    }
    if (((pVisionObj->ExsistConfidence) < FRONT_CAM_CONVERTER_OBJECTS_EXSISTCONFIDENCE_MIN) ||
        ((pVisionObj->ExsistConfidence) > FRONT_CAM_CONVERTER_OBJECTS_EXSISTCONFIDENCE_MAX))
    {
        //printf("pVisionObj->ExsistConfidence invalid:%f\n",pVisionObj->ExsistConfidence);
        //bIsValid = FALSE;
    }

    if (((pVisionObj->ImgFrameCtr) < FRONT_CAM_CONVERTER_OBJECTS_IMGFRAMECTR_MIN) ||
        ((pVisionObj->ImgFrameCtr) > FRONT_CAM_CONVERTER_OBJECTS_IMGFRAMECTR_MAX))
    {
        //printf("pVisionObj->ImgFrameCtr invalid:%d\n",pVisionObj->ImgFrameCtr);
        //bIsValid = FALSE;
    }
    if (((pVisionObj->LaneAssignment) < FRONT_CAM_CONVERTER_OBJECTS_LANEASSIGNMENT_MIN) ||
        ((pVisionObj->LaneAssignment) > FRONT_CAM_CONVERTER_OBJECTS_LANEASSIGNMENT_MAX))
    {
        //printf("pVisionObj->LaneAssignment invalid:%d\n",pVisionObj->LaneAssignment);
        //bIsValid = FALSE;
    }
    if (((pVisionObj->LaneOffsetLeft) < FRONT_CAM_CONVERTER_OBJECTS_LANEOFFSETLEFT_MIN) ||
        ((pVisionObj->LaneOffsetLeft) > FRONT_CAM_CONVERTER_OBJECTS_LANEOFFSETLEFT_MAX))
    {
        //printf("pVisionObj->LaneOffsetLeft invalid:%f\n",pVisionObj->LaneOffsetLeft);
        //bIsValid = FALSE;
    }
    if (((pVisionObj->LaneOffsetLeftStdDev) < FRONT_CAM_CONVERTER_OBJECTS_LANEOFFSETLEFTSTDDEV_MIN) ||
        ((pVisionObj->LaneOffsetLeftStdDev) > FRONT_CAM_CONVERTER_OBJECTS_LANEOFFSETLEFTSTDDEV_MAX))
    {
        //printf("pVisionObj->LaneOffsetLeftStdDev invalid:%f\n",pVisionObj->LaneOffsetLeftStdDev);
        //bIsValid = FALSE;
    }
    if (((pVisionObj->LaneOffsetRight) < FRONT_CAM_CONVERTER_OBJECTS_LANEOFFSETRIGHT_MIN) ||
        ((pVisionObj->LaneOffsetRight) > FRONT_CAM_CONVERTER_OBJECTS_LANEOFFSETRIGHT_MAX))
    {
        //printf("pVisionObj->LaneOffsetRight invalid:%f\n",pVisionObj->LaneOffsetRight);
        //bIsValid = FALSE;
    }
    if (((pVisionObj->LaneOffsetRightStdDev) < FRONT_CAM_CONVERTER_OBJECTS_LANEOFFSETRIGHTSTDDEV_MIN) ||
        ((pVisionObj->LaneOffsetRightStdDev) > FRONT_CAM_CONVERTER_OBJECTS_LANEOFFSETRIGHTSTDDEV_MAX))
    {
        //printf("pVisionObj->LaneOffsetRightStdDev invalid:%f\n",pVisionObj->LaneOffsetRightStdDev);
        //bIsValid = FALSE;
    }
    // DX11-45404 DX11-45448 DX11-45492 DX11-45536 DX11-45580
    if (((pVisionObj->LatAcc) < FRONT_CAM_CONVERTER_OBJECTS_LATACC_MIN) ||
        ((pVisionObj->LatAcc) > FRONT_CAM_CONVERTER_OBJECTS_LATACC_MAX))
    {
        //printf("pVisionObj->LatAcc invalid:%f\n",pVisionObj->LatAcc);
        //bIsValid = FALSE;
    }
    if (((pVisionObj->LatAccStdDev) < FRONT_CAM_CONVERTER_OBJECTS_LATACCSTDDEV_MIN) ||
        ((pVisionObj->LatAccStdDev) > FRONT_CAM_CONVERTER_OBJECTS_LATACCSTDDEV_MAX))
    {
        //printf("pVisionObj->LatAccStdDev invalid:%f\n",pVisionObj->LatAccStdDev);
        //bIsValid = FALSE;
    }

    //DX11-45388 DX11-45432 DX11-45476 DX11-45520 DX11-45564
    if (((pVisionObj->LatPos) < FRONT_CAM_CONVERTER_OBJECTS_LATPOS_MIN) ||
        ((pVisionObj->LatPos) > FRONT_CAM_CONVERTER_OBJECTS_LATPOS_MAX))
    {
        //printf("pVisionObj->LatPos invalid:%f\n",pVisionObj->LatPos);
        bIsValid = FALSE;
    }
    if (((pVisionObj->LatPosStdDev) < FRONT_CAM_CONVERTER_OBJECTS_LATPOSSTDDEV_MIN) ||
        ((pVisionObj->LatPosStdDev) > FRONT_CAM_CONVERTER_OBJECTS_LATPOSSTDDEV_MAX))
    {
        //printf("pVisionObj->LatPosStdDev invalid:%f\n",pVisionObj->LatPosStdDev);
        //bIsValid = FALSE;
    }
    // DX11-45396 DX11-45440 DX11-45484 DX11-45528 DX11-45572
    if (((pVisionObj->LatVel) < FRONT_CAM_CONVERTER_OBJECTS_LATVEL_MIN) ||
        ((pVisionObj->LatVel) > FRONT_CAM_CONVERTER_OBJECTS_LATVEL_MAX))
    {
        //printf("pVisionObj->LatVel invalid:%f\n",pVisionObj->LatVel);
        //bIsValid = FALSE;
    }
    if (((pVisionObj->LatVelStdDev) < FRONT_CAM_CONVERTER_OBJECTS_LATVELSTDDEV_MIN) ||
        ((pVisionObj->LatVelStdDev) > FRONT_CAM_CONVERTER_OBJECTS_LATVELSTDDEV_MAX))
    {
        //printf("pVisionObj->LatVelStdDev invalid:%f\n",pVisionObj->LatVelStdDev);
        //bIsValid = FALSE;
    }
    // DX11-45408 DX11-45452 DX11-45496 DX11-45540 DX11-45584
    if (((pVisionObj->LgtAcc) < FRONT_CAM_CONVERTER_OBJECTS_LGTACC_MIN) ||
        ((pVisionObj->LgtAcc) > FRONT_CAM_CONVERTER_OBJECTS_LGTACC_MAX))
    {
        //printf("pVisionObj->LgtAcc invalid:%f\n",pVisionObj->LgtAcc);
        //bIsValid = FALSE;
    }
    if (((pVisionObj->LgtAccStdDev) < FRONT_CAM_CONVERTER_OBJECTS_LGTACCSTDDEV_MIN) ||
        ((pVisionObj->LgtAccStdDev) > FRONT_CAM_CONVERTER_OBJECTS_LGTACCSTDDEV_MAX))
    {
        //printf("pVisionObj->LgtAccStdDev invalid:%f\n",pVisionObj->LgtAccStdDev);
        //bIsValid = FALSE;
    }
    // DX11-45392 DX11-45436 DX11-45480 DX11-45524 DX11-45568
    if (((pVisionObj->LgtPos) < FRONT_CAM_CONVERTER_OBJECTS_LGTPOS_MIN) ||
        ((pVisionObj->LgtPos) > FRONT_CAM_CONVERTER_OBJECTS_LGTPOS_MAX))
    {
        //printf("pVisionObj->LgtPos invalid:%f\n",pVisionObj->LgtPos);
        bIsValid = FALSE;
    }
    if (((pVisionObj->LgtPosStdDev) < FRONT_CAM_CONVERTER_OBJECTS_LGTPOSSTDDEV_MIN) ||
        ((pVisionObj->LgtPosStdDev) > FRONT_CAM_CONVERTER_OBJECTS_LGTPOSSTDDEV_MAX))
    {
        //printf("pVisionObj->LgtPosStdDev invalid:%f\n",pVisionObj->LgtPosStdDev);
        //bIsValid = FALSE;
    }
    //DX11-45400 DX11-45444 DX11-45488 DX11-45532 DX11-45576
    if (((pVisionObj->LgtVel) < FRONT_CAM_CONVERTER_OBJECTS_LGTVEL_MIN) ||
        ((pVisionObj->LgtVel) > FRONT_CAM_CONVERTER_OBJECTS_LGTVEL_MAX))
    {
        //printf("pVisionObj->LgtVel invalid:%f\n",pVisionObj->LgtVel);
        //bIsValid = FALSE;
    }
    if (((pVisionObj->LgtVelStdDev) < FRONT_CAM_CONVERTER_OBJECTS_LGTVELSTDDEV_MIN) ||
        ((pVisionObj->LgtVelStdDev) > FRONT_CAM_CONVERTER_OBJECTS_LGTVELSTDDEV_MAX))
    {
        //printf("pVisionObj->LgtVelStdDev invalid:%f\n",pVisionObj->LgtVelStdDev);
        //bIsValid = FALSE;
    }
    if (((pVisionObj->NearestSide) < FRONT_CAM_CONVERTER_OBJECTS_NEARESTSIDE_MIN) ||
        ((pVisionObj->NearestSide) > FRONT_CAM_CONVERTER_OBJECTS_NEARESTSIDE_MAX))
    {
        //printf("pVisionObj->NearestSide invalid:%d\n",pVisionObj->NearestSide);
        //bIsValid = FALSE;
    }
    // DX11-45420 DX11-45464 DX11-45508 DX11-45552 DX11-45596
    if (((pVisionObj->Pose) < FRONT_CAM_CONVERTER_OBJECTS_POSE_MIN) ||
        ((pVisionObj->Pose) > FRONT_CAM_CONVERTER_OBJECTS_POSE_MAX))
    {
        //printf("pVisionObj->Pose invalid:%d\n",pVisionObj->Pose);
        //bIsValid = FALSE;
    }
/*
    else if (((pVisionObj->TimeStamp) < FRONT_CAM_CONVERTER_OBJECTS_TIMESTAMP_MIN) ||
        ((pVisionObj->TimeStamp) > FRONT_CAM_CONVERTER_OBJECTS_TIMESTAMP_MAX))
    {
        bIsValid = FALSE;
    }
*/
    if (((pVisionObj->TrackSts) < FRONT_CAM_CONVERTER_OBJECTS_TRACKSTS_MIN) ||
        ((pVisionObj->TrackSts) > FRONT_CAM_CONVERTER_OBJECTS_TRACKSTS_MAX))
    {
        //printf("pVisionObj->TrackSts invalid:%d\n",pVisionObj->TrackSts);
        //bIsValid = FALSE;
    }
    if (((pVisionObj->TurnIndicator) < FRONT_CAM_CONVERTER_OBJECTS_TURNINDICATOR_MIN) ||
        ((pVisionObj->TurnIndicator) > FRONT_CAM_CONVERTER_OBJECTS_TURNINDICATOR_MAX))
    {
        //printf("pVisionObj->TurnIndicator invalid:%d\n",pVisionObj->TurnIndicator);
        //bIsValid = FALSE;
    }
    else
    {
        /* MISRA */
    }

    return bIsValid;
}


LOCAL FUNC(void, ObjFusn_CODE) calculateVariances_Cam(CONSTP2VAR(JkObjFusn_TrackableType, AUTOMATIC, ObjFusn_VAR_NOINIT) pCamObj)
{
    float32 f32PosX = FLT_ZERO;
    float32 f32PosY = FLT_ZERO;
    float32 f32PosVarX = FLT_ZERO;
    float32 f32PosVarY = FLT_ZERO;
    float32 f32VelVarX = FLT_ZERO;
    float32 f32VelVarY = FLT_ZERO;
    float32 f32Angle = FLT_ZERO;
    float32 f32Sin = FLT_ZERO;
    float32 f32Cos = FLT_ZERO;

    float32 f32Vx = FLT_ZERO;  //Ryan add

    if (pCamObj != NULL_PTR)
    {
        f32PosX = pCamObj->vecX.data[TRACKABLE_POSX];
        f32PosY = pCamObj->vecX.data[TRACKABLE_POSY];
        f32Angle = jk_fusion_atan2(f32PosY, f32PosX);
        f32Sin = jk_fusion_sin(f32Angle);
        f32Cos = jk_fusion_cos(f32Angle);

        f32Vx = pCamObj->vecX.data[TRACKABLE_VELX];  //Ryan add

        if (((pCamObj->u16Class) & JKOBJFUSN_TRACKABLE_U16CLASS_VEHICLE_UNKNOWN) > 0u)
        {
            f32PosVarX = JKOBJLIST_MVS_SENSOR_MODEL_VEHICLE_POS_X_BETA_0;
            f32PosVarX += JKOBJLIST_MVS_SENSOR_MODEL_VEHICLE_POS_X_BETA_1 * f32PosX;
            f32PosVarX += JKOBJLIST_MVS_SENSOR_MODEL_VEHICLE_POS_X_BETA_2 * f32PosY;
            f32PosVarX += JKOBJLIST_MVS_SENSOR_MODEL_VEHICLE_POS_X_BETA_3 * (f32PosX * f32PosX);
            f32PosVarX += JKOBJLIST_MVS_SENSOR_MODEL_VEHICLE_POS_X_BETA_4 * (f32PosY * f32PosY);
            f32PosVarX += JKOBJLIST_MVS_SENSOR_MODEL_VEHICLE_POS_X_BETA_5 * (f32PosY * f32PosX);

            f32PosVarY = JKOBJLIST_MVS_SENSOR_MODEL_VEHICLE_POS_Y_BETA_0;
            f32PosVarY += JKOBJLIST_MVS_SENSOR_MODEL_VEHICLE_POS_Y_BETA_1 * f32PosX;
            f32PosVarY += JKOBJLIST_MVS_SENSOR_MODEL_VEHICLE_POS_Y_BETA_2 * f32PosY;
            f32PosVarY += JKOBJLIST_MVS_SENSOR_MODEL_VEHICLE_POS_Y_BETA_3 * (f32PosX * f32PosX);
            f32PosVarY += JKOBJLIST_MVS_SENSOR_MODEL_VEHICLE_POS_Y_BETA_4 * (f32PosY * f32PosY);
            f32PosVarY += JKOBJLIST_MVS_SENSOR_MODEL_VEHICLE_POS_Y_BETA_5 * (f32PosY * f32PosX);

            f32VelVarX = JKOBJLIST_MVS_SENSOR_MODEL_VEHICLE_VEL_X_BETA_0;
            f32VelVarX += JKOBJLIST_MVS_SENSOR_MODEL_VEHICLE_VEL_X_BETA_1 * f32PosX;
            f32VelVarX += JKOBJLIST_MVS_SENSOR_MODEL_VEHICLE_VEL_X_BETA_2 * f32PosY;
            f32VelVarX += JKOBJLIST_MVS_SENSOR_MODEL_VEHICLE_VEL_X_BETA_3 * (f32PosX * f32PosX);
            f32VelVarX += JKOBJLIST_MVS_SENSOR_MODEL_VEHICLE_VEL_X_BETA_4 * (f32PosY * f32PosY);
            f32VelVarX += JKOBJLIST_MVS_SENSOR_MODEL_VEHICLE_VEL_X_BETA_5 * (f32PosY * f32PosX);

            f32VelVarY = JKOBJLIST_MVS_SENSOR_MODEL_VEHICLE_VEL_Y_BETA_0;
            f32VelVarY += JKOBJLIST_MVS_SENSOR_MODEL_VEHICLE_VEL_Y_BETA_1 * f32PosX;
            f32VelVarY += JKOBJLIST_MVS_SENSOR_MODEL_VEHICLE_VEL_Y_BETA_2 * f32PosY;
            f32VelVarY += JKOBJLIST_MVS_SENSOR_MODEL_VEHICLE_VEL_Y_BETA_3 * (f32PosX * f32PosX);
            f32VelVarY += JKOBJLIST_MVS_SENSOR_MODEL_VEHICLE_VEL_Y_BETA_4 * (f32PosY * f32PosY);
            f32VelVarY += JKOBJLIST_MVS_SENSOR_MODEL_VEHICLE_VEL_Y_BETA_5 * (f32PosY * f32PosX);

            if ((f32PosX < 30.0f) && (f32PosX > 0.0f) && (f32Vx < 7.0f) && (f32Vx > -7.0f))
            {
                f32PosVarX = JKOBJLIST_MVS_SENSOR_MODEL_VEHICLE_POS_X_MAX;   //Ryan add
                f32VelVarX = JKOBJLIST_MVS_SENSOR_MODEL_VEHICLE_VEL_X_MAX;   //Ryan add
            }
            else
            {
                f32PosVarX = JKOBJLIST_MVS_SENSOR_MODEL_VEHICLE_POS_X_MAX;   //Ryan add
                f32VelVarX = JKOBJLIST_MVS_SENSOR_MODEL_VEHICLE_VEL_X_MAX;  //Ryan add
            }

            f32PosVarY = JKOBJLIST_MVS_SENSOR_MODEL_VEHICLE_POS_Y_MAX; //Ryan add
            f32VelVarY = JKOBJLIST_MVS_SENSOR_MODEL_VEHICLE_VEL_Y_MAX; //Ryan add

            pCamObj->matP.data[TRACKABLE_INDEX_VARIANCE_POSX] = jk_fusion_min_max_F32(f32PosVarX,
                0.1f, JKOBJLIST_MVS_SENSOR_MODEL_VEHICLE_POS_X_MAX);

            pCamObj->matP.data[TRACKABLE_INDEX_VARIANCE_POSY] = jk_fusion_min_max_F32(f32PosVarY,
                JKOBJLIST_MVS_SENSOR_MODEL_VEHICLE_POS_Y_MIN, JKOBJLIST_MVS_SENSOR_MODEL_VEHICLE_POS_Y_MAX);

            pCamObj->matP.data[TRACKABLE_INDEX_VARIANCE_VELX] = jk_fusion_min_max_F32(f32VelVarX,
                JKOBJLIST_MVS_SENSOR_MODEL_VEHICLE_VEL_X_MIN, JKOBJLIST_MVS_SENSOR_MODEL_VEHICLE_VEL_X_MAX);

            pCamObj->matP.data[TRACKABLE_INDEX_VARIANCE_VELY] = jk_fusion_min_max_F32(f32VelVarY,
                JKOBJLIST_MVS_SENSOR_MODEL_VEHICLE_VEL_Y_MIN, JKOBJLIST_MVS_SENSOR_MODEL_VEHICLE_VEL_Y_MAX);
        }
        else
        {
            f32PosVarX = JKOBJLIST_MVS_SENSOR_MODEL_PEDESTRIAN_POS_X_BETA_0;
            f32PosVarX += JKOBJLIST_MVS_SENSOR_MODEL_PEDESTRIAN_POS_X_BETA_1 * f32PosX;
            f32PosVarX += JKOBJLIST_MVS_SENSOR_MODEL_PEDESTRIAN_POS_X_BETA_2 * f32PosY;
            f32PosVarX += JKOBJLIST_MVS_SENSOR_MODEL_PEDESTRIAN_POS_X_BETA_3 * (f32PosX * f32PosX);
            f32PosVarX += JKOBJLIST_MVS_SENSOR_MODEL_PEDESTRIAN_POS_X_BETA_4 * (f32PosY * f32PosY);
            f32PosVarX += JKOBJLIST_MVS_SENSOR_MODEL_PEDESTRIAN_POS_X_BETA_5 * (f32PosY * f32PosX);

            f32PosVarY = JKOBJLIST_MVS_SENSOR_MODEL_PEDESTRIAN_POS_Y_BETA_0;
            f32PosVarY += JKOBJLIST_MVS_SENSOR_MODEL_PEDESTRIAN_POS_Y_BETA_1 * f32PosX;
            f32PosVarY += JKOBJLIST_MVS_SENSOR_MODEL_PEDESTRIAN_POS_Y_BETA_2 * f32PosY;
            f32PosVarY += JKOBJLIST_MVS_SENSOR_MODEL_PEDESTRIAN_POS_Y_BETA_3 * (f32PosX * f32PosX);
            f32PosVarY += JKOBJLIST_MVS_SENSOR_MODEL_PEDESTRIAN_POS_Y_BETA_4 * (f32PosY * f32PosY);
            f32PosVarY += JKOBJLIST_MVS_SENSOR_MODEL_PEDESTRIAN_POS_Y_BETA_5 * (f32PosY * f32PosX);

            f32VelVarX = JKOBJLIST_MVS_SENSOR_MODEL_PEDESTRIAN_VEL_X_BETA_0;
            f32VelVarX += JKOBJLIST_MVS_SENSOR_MODEL_PEDESTRIAN_VEL_X_BETA_1 * f32PosX;
            f32VelVarX += JKOBJLIST_MVS_SENSOR_MODEL_PEDESTRIAN_VEL_X_BETA_2 * f32PosY;
            f32VelVarX += JKOBJLIST_MVS_SENSOR_MODEL_PEDESTRIAN_VEL_X_BETA_3 * (f32PosX * f32PosX);
            f32VelVarX += JKOBJLIST_MVS_SENSOR_MODEL_PEDESTRIAN_VEL_X_BETA_4 * (f32PosY * f32PosY);
            f32VelVarX += JKOBJLIST_MVS_SENSOR_MODEL_PEDESTRIAN_VEL_X_BETA_5 * (f32PosY * f32PosX);

            f32VelVarY = JKOBJLIST_MVS_SENSOR_MODEL_PEDESTRIAN_VEL_Y_BETA_0;
            f32VelVarY += JKOBJLIST_MVS_SENSOR_MODEL_PEDESTRIAN_VEL_Y_BETA_1 * f32PosX;
            f32VelVarY += JKOBJLIST_MVS_SENSOR_MODEL_PEDESTRIAN_VEL_Y_BETA_2 * f32PosY;
            f32VelVarY += JKOBJLIST_MVS_SENSOR_MODEL_PEDESTRIAN_VEL_Y_BETA_3 * (f32PosX * f32PosX);
            f32VelVarY += JKOBJLIST_MVS_SENSOR_MODEL_PEDESTRIAN_VEL_Y_BETA_4 * (f32PosY * f32PosY);
            f32VelVarY += JKOBJLIST_MVS_SENSOR_MODEL_PEDESTRIAN_VEL_Y_BETA_5 * (f32PosY * f32PosX);

         if ((f32PosX < 30.0f) && (f32PosX > 0.0f) && (f32Vx < 1.7f) && (f32Vx > -1.7f))
            {
                f32PosVarX = JKOBJLIST_MVS_SENSOR_MODEL_PEDESTRIAN_POS_X_MIN;   //Ryan add
                f32VelVarX = JKOBJLIST_MVS_SENSOR_MODEL_PEDESTRIAN_VEL_X_MIN;   //Ryan add
            }
            else
            {
                f32PosVarX = JKOBJLIST_MVS_SENSOR_MODEL_PEDESTRIAN_POS_X_MAX;   //Ryan add
                f32VelVarX = JKOBJLIST_MVS_SENSOR_MODEL_PEDESTRIAN_VEL_X_MAX;  //Ryan add
            }
            f32PosVarY = JKOBJLIST_MVS_SENSOR_MODEL_PEDESTRIAN_POS_Y_MIN; //Ryan add
            f32VelVarY = JKOBJLIST_MVS_SENSOR_MODEL_PEDESTRIAN_VEL_Y_MIN; //Ryan add

            pCamObj->matP.data[TRACKABLE_INDEX_VARIANCE_POSX] = jk_fusion_min_max_F32(f32PosVarX,
                JKOBJLIST_MVS_SENSOR_MODEL_PEDESTRIAN_POS_X_MIN, JKOBJLIST_MVS_SENSOR_MODEL_PEDESTRIAN_POS_X_MAX);

            pCamObj->matP.data[TRACKABLE_INDEX_VARIANCE_POSY] = jk_fusion_min_max_F32(f32PosVarY,
                JKOBJLIST_MVS_SENSOR_MODEL_PEDESTRIAN_POS_Y_MIN, JKOBJLIST_MVS_SENSOR_MODEL_PEDESTRIAN_POS_Y_MAX);

            pCamObj->matP.data[TRACKABLE_INDEX_VARIANCE_VELX] = jk_fusion_min_max_F32(f32VelVarX,
                JKOBJLIST_MVS_SENSOR_MODEL_PEDESTRIAN_VEL_X_MIN, JKOBJLIST_MVS_SENSOR_MODEL_PEDESTRIAN_VEL_X_MAX);

            pCamObj->matP.data[TRACKABLE_INDEX_VARIANCE_VELY] = jk_fusion_min_max_F32(f32VelVarY,
                JKOBJLIST_MVS_SENSOR_MODEL_PEDESTRIAN_VEL_Y_MIN, JKOBJLIST_MVS_SENSOR_MODEL_PEDESTRIAN_VEL_Y_MAX);
        }

        pCamObj->matP.data[TRACKABLE_INDEX_VARIANCE_ACCX] = FLT_ZERO;
        pCamObj->matP.data[TRACKABLE_INDEX_VARIANCE_ACCY] = FLT_ZERO;

        /* Covariances */
        /* set only if sensor delivers valid covariances */
        pCamObj->matP.data[TRACKABLE_INDEX_COVARIANCE_POSX_POSY] = FLT_ZERO;
        pCamObj->matP.data[TRACKABLE_INDEX_COVARIANCE_POSX_VELX] = FLT_ZERO;
        pCamObj->matP.data[TRACKABLE_INDEX_COVARIANCE_POSY_VELX] = FLT_ZERO;
        pCamObj->matP.data[TRACKABLE_INDEX_COVARIANCE_POSX_VELY] = FLT_ZERO;
        pCamObj->matP.data[TRACKABLE_INDEX_COVARIANCE_POSY_VELY] = FLT_ZERO;
        pCamObj->matP.data[TRACKABLE_INDEX_COVARIANCE_VELX_VELY] = FLT_ZERO;
        pCamObj->matP.data[TRACKABLE_INDEX_COVARIANCE_POSX_ACCX] = FLT_ZERO;
        pCamObj->matP.data[TRACKABLE_INDEX_COVARIANCE_POSY_ACCX] = FLT_ZERO;
        pCamObj->matP.data[TRACKABLE_INDEX_COVARIANCE_VELX_ACCX] = FLT_ZERO;
        pCamObj->matP.data[TRACKABLE_INDEX_COVARIANCE_VELY_ACCX] = FLT_ZERO;
        pCamObj->matP.data[TRACKABLE_INDEX_COVARIANCE_POSX_ACCY] = FLT_ZERO;
        pCamObj->matP.data[TRACKABLE_INDEX_COVARIANCE_POSY_ACCY] = FLT_ZERO;
        pCamObj->matP.data[TRACKABLE_INDEX_COVARIANCE_VELX_ACCY] = FLT_ZERO;
        pCamObj->matP.data[TRACKABLE_INDEX_COVARIANCE_VELY_ACCY] = FLT_ZERO;
        pCamObj->matP.data[TRACKABLE_INDEX_COVARIANCE_ACCX_ACCY] = FLT_ZERO;
        pCamObj->matP.u16Size = 4u; /* PRQA S 3120 *//* fixed vector size */

        (void)f32RotateSymMat(&(pCamObj->matP), &(pCamObj->matP), f32Sin, f32Cos);

        pCamObj->matP.data[TRACKABLE_INDEX_COVARIANCE_POSX_POSY] = FLT_ZERO;
        pCamObj->matP.data[TRACKABLE_INDEX_COVARIANCE_POSX_VELX] = FLT_ZERO;
        pCamObj->matP.data[TRACKABLE_INDEX_COVARIANCE_POSY_VELX] = FLT_ZERO;
        pCamObj->matP.data[TRACKABLE_INDEX_COVARIANCE_POSX_VELY] = FLT_ZERO;
        pCamObj->matP.data[TRACKABLE_INDEX_COVARIANCE_POSY_VELY] = FLT_ZERO;
        pCamObj->matP.data[TRACKABLE_INDEX_COVARIANCE_VELX_VELY] = FLT_ZERO;

    }
    else
    {
        /* MISRA */
    }

}

FUNC(boolean, ObjFusn_CODE) AroundCamObjListToJkObjListConverter(CONSTP2VAR(JkObjFusn_ObjectListType, AUTOMATIC, ObjFusn_VAR_NOINIT) pNewObjList,
    CONSTP2CONST(AroundCamObjList, AUTOMATIC, ObjFusn_VAR_NOINIT) pOldObjList, const uint32 u32globalTimeStamp, const uint32 sensorPattern) // 1ns
{
    uint16   u16i;
    boolean  bSuccess = TRUE;
    uint16   u16NumConvertedObjects = 0u;
    boolean  bObjIsValid = FALSE;
    float32  f32TempTiStamp;
    sint8    inputValidObjIdx[JK_FUSION_MAX_OBJECTS_AROUND_CAMERA];
    sint8    u8Idx;

    /* PRQA S 3223 1 *//* static variable requires function-scope only */
    static uint16 u16UpdateCountFrontLeftCam = 0u;
    static uint16 u16UpdateCountFrontRightCam = 0u;
    static uint16 u16UpdateCountRearLeftCam = 0u;
    static uint16 u16UpdateCountRearRightCam = 0u;

    if ((NULL_PTR == pNewObjList) || (NULL_PTR == pOldObjList))
    {
        bSuccess = FALSE;
    }
    else
    {
        //    pNewObjList->f32MeasurementLatency = (float32)u32globalTimeStamp / 10000.0f - f32TempTiStamp;// Convert to s
        pNewObjList->f32MeasurementLatency = 0.055f; // 55ms
        //u16UpdateCount = ((u16UpdateCount + 1u) % JKOBJFUSN_OBJECTLIST_U16LISTUPDATECOUNTER_MAX);

        /* TODO: Check sensor failure flags  */
         // 0000 0000 0000 0010 : object detection Error
        //if((pOldObjList->Status.Blockage == TRUE) || (pOldObjList->Status.Fault != 0u) || (pOldObjList->Status.Calibration != 3u))
        //{
        //   bSuccess = FALSE;
        //}
        //else
        //{
        //pNewObjList->u16ListUpdateCounter = u16UpdateCount;
        //TO DO ： check logic
        if (1 == sensorPattern)
        {
            pNewObjList->u32SensorPattern = JKOBJFUSN_TRACKABLE_U32SENSOR_MVS_FRONT_LEFT;
            pNewObjList->u16ListUpdateCounter = (++u16UpdateCountFrontLeftCam) % JKOBJFUSN_OBJECTLIST_U16LISTUPDATECOUNTER_MAX;
        }
        else if(2 == sensorPattern)
        {
            pNewObjList->u32SensorPattern = JKOBJFUSN_TRACKABLE_U32SENSOR_MVS_FRONT_RIGHT;
            pNewObjList->u16ListUpdateCounter = (++u16UpdateCountFrontRightCam) % JKOBJFUSN_OBJECTLIST_U16LISTUPDATECOUNTER_MAX;
        }
        else if(3 == sensorPattern)
        {
            pNewObjList->u32SensorPattern = JKOBJFUSN_TRACKABLE_U32SENSOR_MVS_REAR_LEFT;
            pNewObjList->u16ListUpdateCounter = (++u16UpdateCountRearLeftCam) % JKOBJFUSN_OBJECTLIST_U16LISTUPDATECOUNTER_MAX;
        }
        else if(4 == sensorPattern)
        {
            pNewObjList->u32SensorPattern = JKOBJFUSN_TRACKABLE_U32SENSOR_MVS_REAR_RIGHT;
            pNewObjList->u16ListUpdateCounter = (++u16UpdateCountRearRightCam) % JKOBJFUSN_OBJECTLIST_U16LISTUPDATECOUNTER_MAX;
        }
        else
        {
            /* MISRA */
        }
        for (u16i = 0u; u16i < JK_FUSION_MAX_OBJECTS_AROUND_CAMERA; u16i++)
        {
            bObjIsValid = validateVisionObject(&(pOldObjList->Objects[u16i]));

            if (bObjIsValid == TRUE)
            {
                CamObjToTrackableConverter_convertObject(&(pNewObjList->aTrackable[u16NumConvertedObjects]), &(pOldObjList->Objects[u16i]), pNewObjList->u32SensorPattern);
                u16NumConvertedObjects++;
            }
            else
            {
                /* MISRA */
            }
        }
        pNewObjList->u16NumObjects = u16NumConvertedObjects;
        //  }
    }

    return bSuccess;
}


#define ObjFusn_STOP_SEC_SLOW_CODE
#include "ObjFusn_MemMap.h"
/******************************************************************************
End Of File
*****************************************************************************/
