/*
 * @Description:
 * @Author: yao.xie
 * @Date: 2023-03-24 16:20:43
 * @LastEditors: yao.xie
 * @LastEditTime: 2023-03-31 17:38:55
 */

#ifndef MESSAGE_TYPE_H
#define MESSAGE_TYPE_H

typedef unsigned char boolean;

typedef unsigned char uint8;
typedef unsigned short uint16;
typedef unsigned int uint32;

typedef signed char sint8;
typedef signed short sint16;
typedef signed int sint32;

typedef unsigned int uint8_least;
typedef unsigned int uint16_least;
typedef unsigned int uint32_least;

typedef signed int sint8_least;
typedef signed int sint16_least;
typedef signed int sint32_least;

typedef float float32;
typedef double float64;
typedef struct {
  uint8 StsRdrNrDetn;  // Number of detections
  uint8 StsRdrNrObj;   // Number of objects
  boolean StsBlkd0bin; // Blockage flag for 0bin
  uint8 StsBlkdConf;   // Confidence of radar blockage
  uint8 StsChks;       // Checksum
  uint8 StsCntr;       // Counter
  uint8 StsDstbc; // Indication of radar interference, 0 means no interference,
                  // 100 means the radar fully saturated from interference
  boolean StsEna; // Indication whether radar functionality is enabled
  boolean StsFaulty;    // Indication whether radar is faulty
  uint8 StsIfVersMajor; // Reserve
  uint8 StsIfVersMinor; // Reserve
  uint16 StsLatency;    // The time instance starting from the end of the last
                     // measurement acquisition per cycle to the CAN-FD frames
                     // being outputted on the CAN-FD bus (*0.1 = ms)
  // 0, calibration not start.
  // 1, successfully calibrated in factory or after-sales.
  // 2, successfully auto-calibrated.
  // 3, misalignment degree is larger than threshold, static calibration fail.
  // 4, can not be calibrated statically cause other reason.
  // 5, auto-calibrate fail (cause misalignment degree is larger than threshold
  // or other reason). 6, misalignment degree is larger than threshold, dynamic
  // calibration fail in factory or after-sales. 7, can not be calibrated
  // dynamically cause other reason
  uint8 StsMisAlign;
  boolean StsMissCom; // Signal used to detect missing communication from radar
  /*
   * 0x0: SftyFlt_Undefined
   * 0x1: SftyFlt_NoSafetyFault
   * 0x2: SftyFlt_SafetyFault
   * 0x3: SftyFlt_Reserved
   */
  uint8 StsSftyFlt;    // Safety faulty status
  double StsTiStampH;  // Timestamp  unit:Milliseconds [0,1844674406941460000]
                       // factor 429496729.6ms
  float32 StsTiStampL; // Timestamp  unit:s [0,429496.7295]
  boolean TiStampStsGlbTiBas;
  boolean TiStampStsSyncToGatewy; // Time synchronization status - synchronized
                                  // to gateway
  boolean TiStampStsTiLeap;       // Time synchronization status - time leap
  boolean TiStampStsTiOut;        // Time synchronization status - time out
  float32 StsWhlSpdCmpFac; // Estimated compensation factor for host speed.

  float32 HostYawRate; // Unit: deg / s
  float32 HostSpeed;
} RdrSts_4D;

typedef struct {
  uint8 Chks;
  uint8 Classification;
  uint8 Cntr;
  float32 DistX;
  float32 DistXStd;
  float32 DistY;
  float32 DistYStd;
  float32 DistZ;
  float32 DistZStd;
  uint8 DynamicProperty;
  float32 HeadingAngle;
  uint8 ID;
  uint8 LifeCycles;
  float32 ObjBoundingBoxHeight;
  float32 ObjBoundingBoxLength;
  float32 ObjBoundingBoxWidth;
  float32 ObjNearestPtX;
  float32 ObjNearestPtY;
  float32 ObjNearestPtZ;
  float32 ObjSNR;
  float32 ObjXAccRel;
  float32 ObjYAccRel;
  float32 ObstacleProbability;
  uint8 ProbabilityOfExistence;
  float32 RCS;
  float32 TargetClassificationConfidence;
  boolean UpdateFlag;
  float32 VabsX;
  float32 VabsXStd;
  float32 VabsY;
  float32 VabsYStd;
  boolean ValidFlag;

  boolean UpdateBit;
} RdrObjType_4D;

typedef struct {
  uint8 StsRdrNrDetn;  // Number of detections
  uint8 StsRdrNrObj;   // Number of objects
  boolean StsBlkd0bin; // Blockage flag for 0bin
  uint8 StsBlkdConf;   // Confidence of radar blockage
  uint8 StsChks;       // Checksum
  uint8 StsCntr;       // Counter
  uint8 StsDstbc; // Indication of radar interference, 0 means no interference,
                  // 100 means the radar fully saturated from interference
  boolean StsEna; // Indication whether radar functionality is enabled
  boolean StsFaulty;    // Indication whether radar is faulty
  uint8 StsIfVersMajor; // Reserve
  uint8 StsIfVersMinor; // Reserve
  uint16 StsLatency;    // The time instance starting from the end of the last
                     // measurement acquisition per cycle to the CAN-FD frames
                     // being outputted on the CAN-FD bus (*0.1 = ms)
  // 0, calibration not start.
  // 1, successfully calibrated in factory or after-sales.
  // 2, successfully auto-calibrated.
  // 3, misalignment degree is larger than threshold, static calibration fail.
  // 4, can not be calibrated statically cause other reason.
  // 5, auto-calibrate fail (cause misalignment degree is larger than threshold
  // or other reason). 6, misalignment degree is larger than threshold, dynamic
  // calibration fail in factory or after-sales. 7, can not be calibrated
  // dynamically cause other reason
  uint8 StsMisAlign;
  boolean StsMissCom; // Signal used to detect missing communication from radar
  /*
   * 0x0: SftyFlt_Undefined
   * 0x1: SftyFlt_NoSafetyFault
   * 0x2: SftyFlt_SafetyFault
   * 0x3: SftyFlt_Reserved
   */
  uint8 StsSftyFlt;   // Safety faulty status
  float32 StsTiStamp; // Timestamp  unit:s
  boolean TiStampStsGlbTiBas;
  boolean TiStampStsSyncToGatewy; // Time synchronization status - synchronized
                                  // to gateway
  boolean TiStampStsTiLeap;       // Time synchronization status - time leap
  boolean TiStampStsTiOut;        // Time synchronization status - time out
  float32 StsWhlSpdCmpFac; // Estimated compensation factor for host speed.

  float32 HostYawRate; // Unit: deg / s
  float32 HostSpeed;
} RdrSts;

typedef struct {
  RdrSts Status;
  RdrObjType_4D Objects[30];
} FrntRdrObjList_4D;

typedef struct JkObjFusn_EgoMotionTypeTag {
  boolean
      bIsValid; /**< valid flag to check whether valid data is read on RTE */
  uint8 u8Reserved;   /**< reserved value to ensure 4 byte alignment */
  uint16 u16Reserved; /**< reserved value to ensure 4 byte alignment */
  float32 f32Speed;   /**< Speed of ego vehicle [m/s] */
  float32 f32Acc;     /**< Acceleration of ego vehicle [m/s^2] */
  float32 f32YawRate; /**< Yaw rate of ego vehicle [rad/s] */
  float32 f32Age;     /**< age of ego motion, including latency [s]*/
} JkObjFusn_EgoMotionType;

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
} CamSts;

typedef struct {
  float32 Angle; // Angle to object from host longitudinal axis. Unit:rad
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
  uint8 Type; // Object type, Not support tree/pole, and animal will not be
              // output as a type, but as general object
  float32 AngleStdDev;  // Angle standard deviation. Unit:rad
  float32 HeadingAngle; // The heading angle for a vehicle. It is defined as the
                        // angle between the heading of the detected vehicle and
                        // the heading of the host vehicle. Unit:rad
  float32 HeadingAngleStdDev; // Standard deviation for the heading angle of the
                              // object. Unit:rad
  float32 Height;             // The object height. Unit:m
  float32 HeightStdDev;       // The object height standard deviation.
  float32 Width; // The object width. The width is the extent of the nearest
                 // facing side. Unit:m
  float32 WidthStdDev;     // Standard deviation width of object Unit:m/s
  float32 Length;          // The object length.  Unit:m
  uint8 Chks;              // Checksum
  float32 ClassConfidence; // Probability of correct classification
  uint8
      CmsConfidence; // FUSA requirement,Confidence of object data for functions
  uint8 Cntr;        // Counter
  uint8 DetectionHistory; // History of detection, indicates if the object has
                          // been observed (independent of objectClass) the last
                          // 8 frames. (0 when no measurement, 1 otherwise).
  float32 ExsistConfidence; // Probability that the object is a true object and
                            // not false.
  uint8 Id;                 // Id
  uint8 ImgFrameCtr;        // Image frame counter with E2E protection
                            /* LaneAssignment:
                                    0:Unknown;
                                    1:EgoLane;
                                    2:LeftLane;
                                    3:RightLane;
                                    4:SecLeft;
                                    5:SecRight */
  uint8 LaneAssignment;     // Lane assignment of object.
  float32 LaneOffsetLeft;   // Lane offset to left Unit:m
  float32 LaneOffsetLeftStdDev;  // Quality of Lane offset to left Unit:m
  float32 LaneOffsetRight;       // Lane offset to right Unit:m
  float32 LaneOffsetRightStdDev; // Quality of Lane offset to right Unit:m
  float32 LatAcc; //  The lateral acceleration of the object in the reference
                  //  coordinate system.
  float32 LatAccStdDev; // Lateral acceleration standard deviation
  float32 LatPos; // The lateral distance to the targets reference point. Unit:m
  float32 LatPosStdDev; // Standard deviation for thelateral position of the
                        // object. Unit:m
  float32 LatVel;       // The lateral velocity of the object in the reference
                        // coordinate system. Unit:m/s
  float32 LatVelStdDev; // Lateral velocity standard deviation Unit:m/s
  float32 LengthStdDev; // Length standard deviation Unit:m
  float32 LgtAcc;       // The longitudinal acceleration of the object in the
                        // reference coordinate system. Unit:m/s^2
  float32
      LgtAccStdDev; // Longitudinal acceleration standard deviation Unit:m/s^2
  float32
      LgtPos; // The longitudinal distance to the targets reference point.Unit:m
  float32 LgtPosStdDev; // Standard deviation for the longitudinal position of
                        // the object. Unit:m
  float32 LgtVel; // The longitudinal velocity of the object in the reference
                  // coordinate system. Unit:m/s
  float32 LgtVelStdDev; // Standard deviation  longitudinal velocity m/s
                        /* NearestSide:
                                0:UnknownSide;
                                1:RearSide;
                                2:FrontSide;
                                3:RightSide;
                                4:LeftSide */
  uint8 NearestSide;    // Which object side that is nearest (facing) the host
                        // vehicle.
                        /* Pose:
                                0:Unknown;
                                1:Stationary;
                                2:PrecedingAway;
                                3:PrecedingStationary;
                                4:PrecedingCloser;
                                5:Oncoming:
                                6:CrossingFromLeft;
                                7:CrossingFromRight */
  uint8 Pose;           // The current motion pattern.
  float32 TimeStamp;    // TimeStamp
                        /* TrackSts:
                                0:Invalid;
                                1:Updated;
                                2:New;
                                3:Predicted */
  uint8 TrackSts;       // The track status.
                        /* TurnIndicator:
                                0:Off;
                                1:LeftOn;
                                2:RightOn;
                                3:BothOn */
  uint8 TurnIndicator;
} CamObjType_ReDefine1;

typedef struct {
  CamSts Status;
  CamObjType_ReDefine1 Objects[25];
} FrntCamObjList;

typedef struct {
  CamSts Status;
  CamObjType_ReDefine1 Objects[10];
} AroundCamObjList;

#endif /* MESSAGE_TYPE_H */
