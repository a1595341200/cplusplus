
#ifndef CONVERTERS_TYPES_H
#define CONVERTERS_TYPES_H

#ifdef __cplusplus
extern "C" {
#endif

#include "Std_Types.h"
/* Inclusions ================================================================*/

#define CamDetectionType_GENERAL_OBJECT_PEDESTRIAN (1U)
#define CamDetectionType_GENERAL_OBJECT_VEHICLE (2U)
#define CamDetectionType_PRECISE_OBJECT_VEHICLE (3U)

#define CamMotionMode_UNKOWN (0U)
#define CamMotionMode_STATIC (1U)
#define CamMotionMode_PRECEDING (2U)
#define CamMotionMode_ONCOMING (3U)
#define CamMotionMode_CROSSING (4U)

//Ryan modify
#define CamObjClass_UNKOWN       (0U)
#define CamObjClass_CAR          (1U)
#define CamObjClass_TRUCK        (2U)
#define CamObjClass_TWO_WHEELER  (3U)
#define CamObjClass_PEDESTRIAN   (4U)
#define CamObjClass_BARRIER      (5U)
#define CamObjClass_OTHER_OBJECT (6U)

#define CamObjPos_UNKOWN (0U)
#define CamObjPos_LEFT_IS_FRONT (1U)
#define CamObjPos_RIGHT_IS_FRONT (2U)

#define CamTrackingStatus_PRECONFIRMED (0U)
#define CamTrackingStatus_CONFIRMED (1U)

#define RaMeasEnabled_DISABLED (0U)
#define RaMeasEnabled_ENABLED (1U)

#define RaMeasFlag_MEASURED (0U)
#define RaMeasFlag_EXTRAPOLATED (1U)

#define RaObjClass_UNKNOWN (0U)
#define RaObjClass_4_WHEELER (1U)
#define RaObjClass_2_WHEELER (2U)
#define RaObjClass_PEDESTRIAN (3U)

#define RaSGU_NOT_FAILED (0U)
#define RaSGU_FAILED (1U)

#define RaStatusBlkProg_NOT_BLOCKED (0U)
#define RaStatusBlkProg_BLOCKED (1U)

#define RaStatusHW_NOT_FAILED (0U)
#define RaStatusHW_FAILED (1U)

#define RaStatusMisalign_UNKNOWN (0U)
#define RaStatusMisalign_CALIBRATED (1U)
#define RaStatusMisalign_MISALIGNED (2U)
#define RaStatusMisalign_CALIB_IN_PROGRESS (3U)
#define RaStatusMisalign_UNCALIBRATED (4U)

#define RaUpdateFlag_NEW_OBJECT (0U)
#define RaUpdateFlag_OBJECT_EXISTED (1U)

#define RaValidFlag_OBJECT_INVALID (0U)
#define RaValidFlag_OBJECT_VALID (1U)


// Ryan add
#define YesNo2_No      (0U)
#define YesNo2_Yes     (1U)

#define RaStatusMisAlign_CalNotStrt                               (0U)
#define RaStatusMisAlign_SuccessfulyCalInFactoryOrAfterSales      (1U)
#define RaStatusMisAlign_SuccessfulyAutoCal                       (2U)
#define RaStatusMisAlign_StaticCalFail_DegreeLarger               (3U)
#define RaStatusMisAlign_StaticCalFail_OtherReason                (4U)
#define RaStatusMisAlign_AutoCalFail_DegreeLarger                 (5U)
#define RaStatusMisAlign_DynaCalFailInFactoryOrAfterSales         (6U)
#define RaStatusMisAlign_DynaCalFail_OtherReason                  (7U)

/* ImplementationDataTypes ===================================================*/

typedef struct {
   float32 ALgtStdFromWhlSpd;
   uint8 ALgtStdFromWhlSpdQf;
   uint8 ALgtStdFromWhlSpdSafeChks;
   uint8 ALgtStdFromWhlSpdSafeCntr;
} ALgtStdFromWhlSpdSafe1_ReDefined;

typedef struct {
   float32 YawRateWithCmp;
   uint8 YawRate1Qf2;
   float32 ALatWithCmp;
   uint8 ALat1Qf2;
   float32 GrdtOfALgt;
   uint8 ALgt1Qf2;
   uint8 AsyDataWithCmpSafeChks;
   uint8 AsyDataWithCmpSafeCntr;
} AsyDataWithCmpSafe1_ReDefined;

typedef struct {
   float32 longPosition;
   float32 latPosition;
   float32 headingAngle;
   float32 speed;
   float32 longVelocity;
   float32 latVelocity;
   float32 acceleration;
   float32 longAcceleration;
   float32 latAcceleration;
   float32 curvature;
} typeTrackEstimateVcc;

typedef struct {
   uint8 type;
   float32 width;
   float32 height;
   uint8 nearestSide;
   uint8 turnIndicator;
   uint8 brakeLightIndicator;
   uint8 hazardLightIndicator;
   uint8 motionPatternCurrent;
   uint8 motionPatternHistory;
   float32 distanceToLeftNearLaneMarking;
   float32 distanceToRightNearLaneMarking;
   float32 distanceToLeftFarLaneMarking;
   float32 distanceToRightFarLaneMarking;
} typeTrackInformationVcc;

typedef struct {
   float32 accelerationStdDev;
   uint8 cmbbPrimaryConfidence;
   uint8 cmbbSecondaryConfidence;
   uint8 fcwConfidence;
   uint8 fusionSource;
   float32 headingAngleStdDev;
   uint8 id;
   float32 latPositionStdDev;
   uint8 leftNearLaneMarkingConfidence;
   uint8 leftFarLaneMarkingConfidence;
   float32 longPositionStdDev;
   uint8 motionModel;
   uint8 positionConfidence;
   uint8 rightNearLaneMarkingConfidence;
   uint8 rightFarLaneMarkingConfidence;
   float32 speedStdDev;
   uint8 tjaConfidence;
   uint8 trackStatus;
   uint8 trafficScenario;
   uint8 visionId;
} typeTrackPropertiesVcc;

typedef struct {
   typeTrackEstimateVcc Estimate;
   typeTrackInformationVcc Information;
   typeTrackPropertiesVcc Properties;
} typeFrontFusionObjectVcc;
typedef typeFrontFusionObjectVcc rt_Array_typeFrontFusionObjectVcc_32[32];
typedef struct {
   float32 latDistanceZeroOrderCoeff;
   float32 latDistanceFirstOrderCoeff;
   float32 latDistanceSecondOrderCoeff;
   float32 latDistanceThirdOrderCoeff;
   float32 longDistanceToEnd;
} typeBarrierEstimateVcc;

typedef struct {
   uint8 informationSource;
} typeBarrierObjectVccInformation0;

typedef struct {
   uint8 trackStatus;
   uint8 cmbbConfidence;
   uint8 lkaConfidence;
   uint8 tjaConfidencePrimary;
   float32 tuneConfidence;
} typeBarrierPropertiesVcc;

typedef struct {
   typeBarrierEstimateVcc Estimate;
   typeBarrierObjectVccInformation0 Information;
   typeBarrierPropertiesVcc Properties;
} typeBarrierObjectVcc;

typedef struct {
   typeBarrierObjectVcc Left;
   typeBarrierObjectVcc Right;
} typeBarriersVcc;

typedef struct {
   uint32 timeStamp;
   uint16 lookIndex;
   uint8 visionOnlyBrake;
   uint8 visionOnlyWarning;
   uint8 visionOnlyVruBrake;
   rt_Array_typeFrontFusionObjectVcc_32 Objects;
   typeBarriersVcc Barriers;
} typeRaCamObjectVcc;

typedef struct {
   float32 VehSpdLgt;
   uint8 VehSpdLgtQf;
   uint8 VehSpdLgtCntr;
   uint8 VehSpdLgtChks;
} VehSpdLgtSafe1_ReDefined;








/// <summary>
/// Ryan add start 20210830
/// </summary>

typedef struct {
	uint8    StsRdrNrDetn;       // Number of detections
	uint8    StsRdrNrObj;        // Number of objects
	boolean  StsBlkd0bin;        // Blockage flag for 0bin
	uint8    StsBlkdConf;        // Confidence of radar blockage
	uint8    StsChks;            // Checksum
	uint8    StsCntr;            // Counter
	uint8    StsDstbc;           // Indication of radar interference, 0 means no interference, 100 means the radar fully saturated from interference
	boolean  StsEna;             // Indication whether radar functionality is enabled
	boolean  StsFaulty;          // Indication whether radar is faulty
	uint8    StsIfVersMajor;     // Reserve
	uint8    StsIfVersMinor;     // Reserve
	uint16   StsLatency;         // The time instance starting from the end of the last measurement acquisition per cycle to the CAN-FD frames being outputted on the CAN-FD bus (*0.1 = ms)
	// 0, calibration not start. 
	// 1, successfully calibrated in factory or after-sales.
	// 2, successfully auto-calibrated. 
	// 3, misalignment degree is larger than threshold, static calibration fail.
	// 4, can not be calibrated statically cause other reason.
	// 5, auto-calibrate fail (cause misalignment degree is larger than threshold or other reason).
	// 6, misalignment degree is larger than threshold, dynamic calibration fail in factory or after-sales.
	// 7, can not be calibrated dynamically cause other reason
	uint8     StsMisAlign;
	boolean   StsMissCom;        // Signal used to detect missing communication from radar
	/*
	* 0x0: SftyFlt_Undefined
	* 0x1: SftyFlt_NoSafetyFault
	* 0x2: SftyFlt_SafetyFault
	* 0x3: SftyFlt_Reserved
	*/
	uint8     StsSftyFlt;        // Safety faulty status
	float32   StsTiStamp;        // Timestamp  unit:s
	boolean   TiStampStsGlbTiBas;
	boolean   TiStampStsSyncToGatewy; // Time synchronization status - synchronized to gateway
	boolean   TiStampStsTiLeap;  // Time synchronization status - time leap
	boolean   TiStampStsTiOut;   // Time synchronization status - time out
	float32   StsWhlSpdCmpFac;   // Estimated compensation factor for host speed.

	float32   HostYawRate;  // Unit: deg / s
	float32   HostSpeed;
} RdrSts;

typedef struct {
	float32 Heading;        // Unit:deg
	float32 BoxCenterLat;   // Box center y coordinate (relative closest point) Unit:m
	float32 BoxCenterLgt;   // Box center x coordinate (relative closest point) Unit:m
	uint32  ObservationHist;
	uint32  QualityBits;    // Signal to illustrate radar object detailed status.
	float32 ObjAx;          // Longitudinal acceleration Unit:m/s^2
	float32 ObjAy;          // Lateral acceleration Unit:m/s^2
	float32 BoxLength;      // Box length (box extent that is parallel to objects heading angle) Unit:m
	float32 BoxWidth;       // Box width (box extent that is perpendicular to objects heading angle) Unit:m
	uint8   ObjChks;        // CRC
	uint8   ObjCntr;        // Counter
	uint8   ObjCoastCnt;    // Number of cycles during which the object is not associated to anything
	uint8   ObjConf;        // Confidence
	float32 ObjDx;          // Longitudinal position Unit:m
	float32 ObjDxStdDe;     // Standard deviation longitudinal position Unit:m
	float32 ObjDy;          // Lateral position Unit:m
	float32 ObjDyStdDe;     // Standard deviation lateral position Unit:m
	uint8   ObjElevnConf;   // Elevation confidence Unit:%
	uint8   ObjElevnSts;    // Elevation Status
	uint8   ObjID;          // Object ID
	uint8   ObjIsInFreeSpace;// Indication if the object is inside freespace
	uint8   ObjMirrProblty; // Probability of mirrored object Unit:%
	uint8   ObjMtnPat;      // Object Motion Pattern (crossing, receding and oncoming) is not used here, as reserved)
	uint8   ObjNotRealProblty;// Probability of ghost track Unit:%
	uint8   ObjStatyCnt;    // Stationary Count
	uint8   ObjTiAlv;       // Lifetime
	uint8   ObjTrackSts;    // Track Status 0. it is not a valid track 1. the track has been updated 2. the track is new 3. the track is coasted (means the result is a prediction and that there was no detected measurement in the current look interval
	uint8   ObjTyp;         // Classification object (Only 0 Unkown, 4 Pedestrain, 9 Bicycle and 10 Vehicle of unknown class are used actually in radar, the other types are not used but the datatype is designed so that it can be reused with camera
	uint8   ObjTypConfBike; // Confidence of tracked object type classification bike Unit:%
	uint8   ObjTypConfPed;  // Confidence of tracked object type classification pedestrian Unit:%
	uint8   ObjTypConfVeh;  // Confidence of tracked object type classification vehicle Unit:%
	uint8   ObjUsedTracker; // Assist to identify motion pattern. Better solution for stationary object.
	float32 ObjVx;          // Longitudinal velocity Unit:m/s
	float32 ObjVxStdDe;     // Standard deviation longitudinal velocity Unit:m/s
	float32 ObjVy;          // Lateral velocity Unit:m/s
	float32 ObjVyStdDe;     // Standard deviation lateral velocity Unit:m/s
	float32 RelVx;          // Relatively longitudinal velocity Unit:m/s
	float32 RelVy;          // Relatively lateral velocity Unit:m/s
	boolean UpdateBit;
} RdrObjType;


//start adding to adapter 4DX Raada 20220905 -- author changyu
typedef struct {
	uint8    StsRdrNrDetn;       // Number of detections
	uint8    StsRdrNrObj;        // Number of objects
	boolean  StsBlkd0bin;        // Blockage flag for 0bin
	uint8    StsBlkdConf;        // Confidence of radar blockage
	uint8    StsChks;            // Checksum
	uint8    StsCntr;            // Counter
	uint8    StsDstbc;           // Indication of radar interference, 0 means no interference, 100 means the radar fully saturated from interference
	boolean  StsEna;             // Indication whether radar functionality is enabled
	boolean  StsFaulty;          // Indication whether radar is faulty
	uint8    StsIfVersMajor;     // Reserve
	uint8    StsIfVersMinor;     // Reserve
	uint16   StsLatency;         // The time instance starting from the end of the last measurement acquisition per cycle to the CAN-FD frames being outputted on the CAN-FD bus (*0.1 = ms)
	// 0, calibration not start. 
	// 1, successfully calibrated in factory or after-sales.
	// 2, successfully auto-calibrated. 
	// 3, misalignment degree is larger than threshold, static calibration fail.
	// 4, can not be calibrated statically cause other reason.
	// 5, auto-calibrate fail (cause misalignment degree is larger than threshold or other reason).
	// 6, misalignment degree is larger than threshold, dynamic calibration fail in factory or after-sales.
	// 7, can not be calibrated dynamically cause other reason
	uint8     StsMisAlign;
	boolean   StsMissCom;        // Signal used to detect missing communication from radar
	/*
	* 0x0: SftyFlt_Undefined
	* 0x1: SftyFlt_NoSafetyFault
	* 0x2: SftyFlt_SafetyFault
	* 0x3: SftyFlt_Reserved
	*/
	uint8     StsSftyFlt;        // Safety faulty status
	double    StsTiStampH;       // Timestamp  unit:Milliseconds [0,1844674406941460000] factor 429496729.6ms
	float32   StsTiStampL;        // Timestamp  unit:s [0,429496.7295]
	boolean   TiStampStsGlbTiBas;
	boolean   TiStampStsSyncToGatewy; // Time synchronization status - synchronized to gateway
	boolean   TiStampStsTiLeap;  // Time synchronization status - time leap
	boolean   TiStampStsTiOut;   // Time synchronization status - time out
	float32   StsWhlSpdCmpFac;   // Estimated compensation factor for host speed.

	float32   HostYawRate;  // Unit: deg / s
	float32   HostSpeed;
} RdrSts_4D;

typedef struct {
	uint8     Chks;
	uint8     Classification;
	uint8     Cntr;
	float32   DistX;
	float32   DistXStd;
	float32   DistY;
	float32   DistYStd;
	float32   DistZ;
	float32   DistZStd;
	uint8     DynamicProperty;
	float32   HeadingAngle;
	uint8     ID;
	uint8     LifeCycles;
	float32   ObjBoundingBoxHeight;
	float32   ObjBoundingBoxLength;
	float32   ObjBoundingBoxWidth;
	float32   ObjNearestPtX;
	float32   ObjNearestPtY;
	float32   ObjNearestPtZ;
	float32   ObjSNR;
	float32   ObjXAccRel;
	float32   ObjYAccRel;
	float32   ObstacleProbability;
	uint8     ProbabilityOfExistence;
	float32   RCS;
	float32   TargetClassificationConfidence;
	boolean   UpdateFlag;
	float32   VabsX;
	float32   VabsXStd;
	float32   VabsY;
	float32   VabsYStd;
	boolean   ValidFlag;


	boolean UpdateBit;
} RdrObjType_4D;

typedef struct {
	RdrSts Status;
	RdrObjType Objects[30];
} FrntRdrObjList;

typedef struct {
	RdrSts Status;
	RdrObjType Objects[15];
} CornrRdrObjList;


typedef struct {
	RdrSts Status;
	RdrObjType_4D Objects[30];
} FrntRdrObjList_4D;

// Hei Zhi Ma Camera
typedef struct {
	/*	Blockage:
		0:NotBlocked;
		1:Blocked */
	boolean Blockage;
	/*  Calibration:
		0:NotCalibrated;
		1:CalibrationOngoing;
		2:CalibrationFailed;
		3:CalibrationDone */
	uint8 Calibration;
	/*	Fault:
		0:NoFault;
		1:Fault1;
		2:Fault2;
		3:Fault3;
		4:Fault4;
		5:Fault5;
		6:Fault6;
		7:Fault7;
		8:Fault8;
		9:Fault9;
		10:Fault10;
		11:Fault11;
		12:Fault12;
		13:Fault13;
		14:Fault14;
		15:Fault15 */
	uint8 Fault;
}CamSts;

typedef struct {
	float32 Angle;         // Angle to object from host longitudinal axis. Unit:rad
 /* 	Type:
	 0:Unknown;
	 1:Car;
	 2:Truck;
	 3:Bus;
	 4:Motorcycle;
	 5:e-Scooter;
	 6:Cyclist;
	 7:Pedestrian;
	 8:Animal;
	 9:General Object;
	 10-15:Reserved */
	uint8   Type;   // Object type, Not support tree/pole, and animal will not be output as a type, but as general object
	float32 AngleStdDev;   // Angle standard deviation. Unit:rad
	float32 HeadingAngle; // The heading angle for a vehicle. It is defined as the angle between the heading of the detected vehicle and the heading of the host vehicle. Unit:rad
	float32 HeadingAngleStdDev; // Standard deviation for the heading angle of the object. Unit:rad
	float32 Height;  // The object height. Unit:m
	float32 HeightStdDev;  //The object height standard deviation.
	float32 Width; // The object width. The width is the extent of the nearest facing side. Unit:m
	float32 WidthStdDev;  // Standard deviation width of object Unit:m/s
	float32 Length;			 // The object length.  Unit:m
	uint8   Chks;          // Checksum
	float32 ClassConfidence; // Probability of correct classification
	uint8   CmsConfidence; // FUSA requirement,Confidence of object data for functions
	uint8   Cntr;          // Counter
	uint8   DetectionHistory; // History of detection, indicates if the object has been observed (independent of objectClass) the last 8 frames. (0 when no measurement, 1 otherwise). 
	float32 ExsistConfidence; // Probability that the object is a true object and not false. 
	uint8   Id;  //Id
	uint8   ImgFrameCtr;   // Image frame counter with E2E protection
/* LaneAssignment:
	0:Unknown;
	1:EgoLane;
	2:LeftLane;
	3:RightLane;
	4:SecLeft;
	5:SecRight */
	uint8   LaneAssignment; // Lane assignment of object. 
	float32 LaneOffsetLeft; // Lane offset to left Unit:m
	float32 LaneOffsetLeftStdDev; // Quality of Lane offset to left Unit:m
	float32 LaneOffsetRight; // Lane offset to right Unit:m
	float32 LaneOffsetRightStdDev; // Quality of Lane offset to right Unit:m
	float32 LatAcc; //  The lateral acceleration of the object in the reference coordinate system.
	float32 LatAccStdDev;  // Lateral acceleration standard deviation
	float32 LatPos;  // The lateral distance to the targets reference point. Unit:m
	float32 LatPosStdDev;  // Standard deviation for thelateral position of the object. Unit:m
	float32 LatVel;   // The lateral velocity of the object in the reference coordinate system. Unit:m/s
	float32 LatVelStdDev;// Lateral velocity standard deviation Unit:m/s
	float32 LengthStdDev;  // Length standard deviation Unit:m
	float32 LgtAcc; // The longitudinal acceleration of the object in the reference coordinate system. Unit:m/s^2
	float32 LgtAccStdDev; // Longitudinal acceleration standard deviation Unit:m/s^2
	float32 LgtPos;  // The longitudinal distance to the targets reference point.Unit:m
	float32 LgtPosStdDev;// Standard deviation for the longitudinal position of the object. Unit:m
	float32 LgtVel;    // The longitudinal velocity of the object in the reference coordinate system. Unit:m/s
	float32 LgtVelStdDev;// Standard deviation  longitudinal velocity m/s
/* NearestSide:
	0:UnknownSide;
	1:RearSide;
	2:FrontSide;
	3:RightSide;
	4:LeftSide */
	uint8   NearestSide;  // Which object side that is nearest (facing) the host vehicle. 
/* Pose:
	0:Unknown;
	1:Stationary;
	2:PrecedingAway;
	3:PrecedingStationary;
	4:PrecedingCloser;
	5:Oncoming:
	6:CrossingFromLeft;
	7:CrossingFromRight */
	uint8   Pose; // The current motion pattern.
	float32 TimeStamp;      // TimeStamp
/* TrackSts:
	0:Invalid;
	1:Updated;
	2:New;
	3:Predicted */
	uint8   TrackSts; // The track status.
/* TurnIndicator:
	0:Off;
	1:LeftOn;
	2:RightOn;
	3:BothOn */
	uint8 TurnIndicator;
}CamObjType_ReDefine1;

typedef struct {
	CamSts Status;
	CamObjType_ReDefine1 Objects[25];
} FrntCamObjList;

typedef struct {
	CamSts Status;
	CamObjType_ReDefine1 Objects[10];
} AroundCamObjList;

#ifdef __cplusplus
}
#endif

#endif /* ifndef CONVERTERS_TYPES_H */

/* End of File Converters_types.h=====================================================*/
