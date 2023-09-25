// Auto-generated. Do not edit!

// (in-package data_parse.msg)


"use strict";

const _serializer = _ros_msg_utils.Serialize;
const _arraySerializer = _serializer.Array;
const _deserializer = _ros_msg_utils.Deserialize;
const _arrayDeserializer = _deserializer.Array;
const _finder = _ros_msg_utils.Find;
const _getByteLength = _ros_msg_utils.getByteLength;
let Object = require('./Object.js');
let std_msgs = _finder('std_msgs');

//-----------------------------------------------------------

class ObjectFrame {
  constructor(initObj={}) {
    if (initObj === null) {
      // initObj === null is a special case for deserialization where we don't initialize fields
      this.header = null;
      this.HostSpeed = null;
      this.HostYawRate = null;
      this.StsBlkd0bin = null;
      this.StsBlkdConf = null;
      this.StsChks = null;
      this.StsCntr = null;
      this.StsDstbc = null;
      this.StsEna = null;
      this.StsFaulty = null;
      this.StsIfVersMajor = null;
      this.StsIfVersMinor = null;
      this.StsLatency = null;
      this.StsMisAlign = null;
      this.StsMissCom = null;
      this.StsRdrNrDetn = null;
      this.StsRdrNrObj = null;
      this.StsSftyFlt = null;
      this.StsTiStamp = null;
      this.StsWhlSpdCmpFac = null;
      this.TiStampStsGlbTiBas = null;
      this.TiStampStsSyncToGatewy = null;
      this.TiStampStsTiLeap = null;
      this.TiStampStsTiOut = null;
      this.sensor_type = null;
      this.Blockage = null;
      this.Calibration = null;
      this.Fault = null;
      this.objects = null;
    }
    else {
      if (initObj.hasOwnProperty('header')) {
        this.header = initObj.header
      }
      else {
        this.header = new std_msgs.msg.Header();
      }
      if (initObj.hasOwnProperty('HostSpeed')) {
        this.HostSpeed = initObj.HostSpeed
      }
      else {
        this.HostSpeed = 0.0;
      }
      if (initObj.hasOwnProperty('HostYawRate')) {
        this.HostYawRate = initObj.HostYawRate
      }
      else {
        this.HostYawRate = 0.0;
      }
      if (initObj.hasOwnProperty('StsBlkd0bin')) {
        this.StsBlkd0bin = initObj.StsBlkd0bin
      }
      else {
        this.StsBlkd0bin = 0.0;
      }
      if (initObj.hasOwnProperty('StsBlkdConf')) {
        this.StsBlkdConf = initObj.StsBlkdConf
      }
      else {
        this.StsBlkdConf = 0;
      }
      if (initObj.hasOwnProperty('StsChks')) {
        this.StsChks = initObj.StsChks
      }
      else {
        this.StsChks = 0;
      }
      if (initObj.hasOwnProperty('StsCntr')) {
        this.StsCntr = initObj.StsCntr
      }
      else {
        this.StsCntr = 0;
      }
      if (initObj.hasOwnProperty('StsDstbc')) {
        this.StsDstbc = initObj.StsDstbc
      }
      else {
        this.StsDstbc = 0;
      }
      if (initObj.hasOwnProperty('StsEna')) {
        this.StsEna = initObj.StsEna
      }
      else {
        this.StsEna = 0;
      }
      if (initObj.hasOwnProperty('StsFaulty')) {
        this.StsFaulty = initObj.StsFaulty
      }
      else {
        this.StsFaulty = 0;
      }
      if (initObj.hasOwnProperty('StsIfVersMajor')) {
        this.StsIfVersMajor = initObj.StsIfVersMajor
      }
      else {
        this.StsIfVersMajor = 0;
      }
      if (initObj.hasOwnProperty('StsIfVersMinor')) {
        this.StsIfVersMinor = initObj.StsIfVersMinor
      }
      else {
        this.StsIfVersMinor = 0;
      }
      if (initObj.hasOwnProperty('StsLatency')) {
        this.StsLatency = initObj.StsLatency
      }
      else {
        this.StsLatency = 0.0;
      }
      if (initObj.hasOwnProperty('StsMisAlign')) {
        this.StsMisAlign = initObj.StsMisAlign
      }
      else {
        this.StsMisAlign = 0;
      }
      if (initObj.hasOwnProperty('StsMissCom')) {
        this.StsMissCom = initObj.StsMissCom
      }
      else {
        this.StsMissCom = 0;
      }
      if (initObj.hasOwnProperty('StsRdrNrDetn')) {
        this.StsRdrNrDetn = initObj.StsRdrNrDetn
      }
      else {
        this.StsRdrNrDetn = 0;
      }
      if (initObj.hasOwnProperty('StsRdrNrObj')) {
        this.StsRdrNrObj = initObj.StsRdrNrObj
      }
      else {
        this.StsRdrNrObj = 0;
      }
      if (initObj.hasOwnProperty('StsSftyFlt')) {
        this.StsSftyFlt = initObj.StsSftyFlt
      }
      else {
        this.StsSftyFlt = 0;
      }
      if (initObj.hasOwnProperty('StsTiStamp')) {
        this.StsTiStamp = initObj.StsTiStamp
      }
      else {
        this.StsTiStamp = 0.0;
      }
      if (initObj.hasOwnProperty('StsWhlSpdCmpFac')) {
        this.StsWhlSpdCmpFac = initObj.StsWhlSpdCmpFac
      }
      else {
        this.StsWhlSpdCmpFac = 0;
      }
      if (initObj.hasOwnProperty('TiStampStsGlbTiBas')) {
        this.TiStampStsGlbTiBas = initObj.TiStampStsGlbTiBas
      }
      else {
        this.TiStampStsGlbTiBas = 0;
      }
      if (initObj.hasOwnProperty('TiStampStsSyncToGatewy')) {
        this.TiStampStsSyncToGatewy = initObj.TiStampStsSyncToGatewy
      }
      else {
        this.TiStampStsSyncToGatewy = 0;
      }
      if (initObj.hasOwnProperty('TiStampStsTiLeap')) {
        this.TiStampStsTiLeap = initObj.TiStampStsTiLeap
      }
      else {
        this.TiStampStsTiLeap = 0;
      }
      if (initObj.hasOwnProperty('TiStampStsTiOut')) {
        this.TiStampStsTiOut = initObj.TiStampStsTiOut
      }
      else {
        this.TiStampStsTiOut = 0;
      }
      if (initObj.hasOwnProperty('sensor_type')) {
        this.sensor_type = initObj.sensor_type
      }
      else {
        this.sensor_type = 0;
      }
      if (initObj.hasOwnProperty('Blockage')) {
        this.Blockage = initObj.Blockage
      }
      else {
        this.Blockage = 0;
      }
      if (initObj.hasOwnProperty('Calibration')) {
        this.Calibration = initObj.Calibration
      }
      else {
        this.Calibration = 0;
      }
      if (initObj.hasOwnProperty('Fault')) {
        this.Fault = initObj.Fault
      }
      else {
        this.Fault = 0;
      }
      if (initObj.hasOwnProperty('objects')) {
        this.objects = initObj.objects
      }
      else {
        this.objects = [];
      }
    }
  }

  static serialize(obj, buffer, bufferOffset) {
    // Serializes a message object of type ObjectFrame
    // Serialize message field [header]
    bufferOffset = std_msgs.msg.Header.serialize(obj.header, buffer, bufferOffset);
    // Serialize message field [HostSpeed]
    bufferOffset = _serializer.float64(obj.HostSpeed, buffer, bufferOffset);
    // Serialize message field [HostYawRate]
    bufferOffset = _serializer.float64(obj.HostYawRate, buffer, bufferOffset);
    // Serialize message field [StsBlkd0bin]
    bufferOffset = _serializer.float64(obj.StsBlkd0bin, buffer, bufferOffset);
    // Serialize message field [StsBlkdConf]
    bufferOffset = _serializer.uint8(obj.StsBlkdConf, buffer, bufferOffset);
    // Serialize message field [StsChks]
    bufferOffset = _serializer.uint8(obj.StsChks, buffer, bufferOffset);
    // Serialize message field [StsCntr]
    bufferOffset = _serializer.uint8(obj.StsCntr, buffer, bufferOffset);
    // Serialize message field [StsDstbc]
    bufferOffset = _serializer.uint8(obj.StsDstbc, buffer, bufferOffset);
    // Serialize message field [StsEna]
    bufferOffset = _serializer.uint8(obj.StsEna, buffer, bufferOffset);
    // Serialize message field [StsFaulty]
    bufferOffset = _serializer.uint8(obj.StsFaulty, buffer, bufferOffset);
    // Serialize message field [StsIfVersMajor]
    bufferOffset = _serializer.uint8(obj.StsIfVersMajor, buffer, bufferOffset);
    // Serialize message field [StsIfVersMinor]
    bufferOffset = _serializer.uint8(obj.StsIfVersMinor, buffer, bufferOffset);
    // Serialize message field [StsLatency]
    bufferOffset = _serializer.float64(obj.StsLatency, buffer, bufferOffset);
    // Serialize message field [StsMisAlign]
    bufferOffset = _serializer.uint8(obj.StsMisAlign, buffer, bufferOffset);
    // Serialize message field [StsMissCom]
    bufferOffset = _serializer.uint8(obj.StsMissCom, buffer, bufferOffset);
    // Serialize message field [StsRdrNrDetn]
    bufferOffset = _serializer.uint8(obj.StsRdrNrDetn, buffer, bufferOffset);
    // Serialize message field [StsRdrNrObj]
    bufferOffset = _serializer.uint8(obj.StsRdrNrObj, buffer, bufferOffset);
    // Serialize message field [StsSftyFlt]
    bufferOffset = _serializer.uint8(obj.StsSftyFlt, buffer, bufferOffset);
    // Serialize message field [StsTiStamp]
    bufferOffset = _serializer.float64(obj.StsTiStamp, buffer, bufferOffset);
    // Serialize message field [StsWhlSpdCmpFac]
    bufferOffset = _serializer.uint8(obj.StsWhlSpdCmpFac, buffer, bufferOffset);
    // Serialize message field [TiStampStsGlbTiBas]
    bufferOffset = _serializer.uint8(obj.TiStampStsGlbTiBas, buffer, bufferOffset);
    // Serialize message field [TiStampStsSyncToGatewy]
    bufferOffset = _serializer.uint8(obj.TiStampStsSyncToGatewy, buffer, bufferOffset);
    // Serialize message field [TiStampStsTiLeap]
    bufferOffset = _serializer.uint8(obj.TiStampStsTiLeap, buffer, bufferOffset);
    // Serialize message field [TiStampStsTiOut]
    bufferOffset = _serializer.uint8(obj.TiStampStsTiOut, buffer, bufferOffset);
    // Serialize message field [sensor_type]
    bufferOffset = _serializer.uint8(obj.sensor_type, buffer, bufferOffset);
    // Serialize message field [Blockage]
    bufferOffset = _serializer.uint8(obj.Blockage, buffer, bufferOffset);
    // Serialize message field [Calibration]
    bufferOffset = _serializer.uint8(obj.Calibration, buffer, bufferOffset);
    // Serialize message field [Fault]
    bufferOffset = _serializer.uint8(obj.Fault, buffer, bufferOffset);
    // Serialize message field [objects]
    // Serialize the length for message field [objects]
    bufferOffset = _serializer.uint32(obj.objects.length, buffer, bufferOffset);
    obj.objects.forEach((val) => {
      bufferOffset = Object.serialize(val, buffer, bufferOffset);
    });
    return bufferOffset;
  }

  static deserialize(buffer, bufferOffset=[0]) {
    //deserializes a message object of type ObjectFrame
    let len;
    let data = new ObjectFrame(null);
    // Deserialize message field [header]
    data.header = std_msgs.msg.Header.deserialize(buffer, bufferOffset);
    // Deserialize message field [HostSpeed]
    data.HostSpeed = _deserializer.float64(buffer, bufferOffset);
    // Deserialize message field [HostYawRate]
    data.HostYawRate = _deserializer.float64(buffer, bufferOffset);
    // Deserialize message field [StsBlkd0bin]
    data.StsBlkd0bin = _deserializer.float64(buffer, bufferOffset);
    // Deserialize message field [StsBlkdConf]
    data.StsBlkdConf = _deserializer.uint8(buffer, bufferOffset);
    // Deserialize message field [StsChks]
    data.StsChks = _deserializer.uint8(buffer, bufferOffset);
    // Deserialize message field [StsCntr]
    data.StsCntr = _deserializer.uint8(buffer, bufferOffset);
    // Deserialize message field [StsDstbc]
    data.StsDstbc = _deserializer.uint8(buffer, bufferOffset);
    // Deserialize message field [StsEna]
    data.StsEna = _deserializer.uint8(buffer, bufferOffset);
    // Deserialize message field [StsFaulty]
    data.StsFaulty = _deserializer.uint8(buffer, bufferOffset);
    // Deserialize message field [StsIfVersMajor]
    data.StsIfVersMajor = _deserializer.uint8(buffer, bufferOffset);
    // Deserialize message field [StsIfVersMinor]
    data.StsIfVersMinor = _deserializer.uint8(buffer, bufferOffset);
    // Deserialize message field [StsLatency]
    data.StsLatency = _deserializer.float64(buffer, bufferOffset);
    // Deserialize message field [StsMisAlign]
    data.StsMisAlign = _deserializer.uint8(buffer, bufferOffset);
    // Deserialize message field [StsMissCom]
    data.StsMissCom = _deserializer.uint8(buffer, bufferOffset);
    // Deserialize message field [StsRdrNrDetn]
    data.StsRdrNrDetn = _deserializer.uint8(buffer, bufferOffset);
    // Deserialize message field [StsRdrNrObj]
    data.StsRdrNrObj = _deserializer.uint8(buffer, bufferOffset);
    // Deserialize message field [StsSftyFlt]
    data.StsSftyFlt = _deserializer.uint8(buffer, bufferOffset);
    // Deserialize message field [StsTiStamp]
    data.StsTiStamp = _deserializer.float64(buffer, bufferOffset);
    // Deserialize message field [StsWhlSpdCmpFac]
    data.StsWhlSpdCmpFac = _deserializer.uint8(buffer, bufferOffset);
    // Deserialize message field [TiStampStsGlbTiBas]
    data.TiStampStsGlbTiBas = _deserializer.uint8(buffer, bufferOffset);
    // Deserialize message field [TiStampStsSyncToGatewy]
    data.TiStampStsSyncToGatewy = _deserializer.uint8(buffer, bufferOffset);
    // Deserialize message field [TiStampStsTiLeap]
    data.TiStampStsTiLeap = _deserializer.uint8(buffer, bufferOffset);
    // Deserialize message field [TiStampStsTiOut]
    data.TiStampStsTiOut = _deserializer.uint8(buffer, bufferOffset);
    // Deserialize message field [sensor_type]
    data.sensor_type = _deserializer.uint8(buffer, bufferOffset);
    // Deserialize message field [Blockage]
    data.Blockage = _deserializer.uint8(buffer, bufferOffset);
    // Deserialize message field [Calibration]
    data.Calibration = _deserializer.uint8(buffer, bufferOffset);
    // Deserialize message field [Fault]
    data.Fault = _deserializer.uint8(buffer, bufferOffset);
    // Deserialize message field [objects]
    // Deserialize array length for message field [objects]
    len = _deserializer.uint32(buffer, bufferOffset);
    data.objects = new Array(len);
    for (let i = 0; i < len; ++i) {
      data.objects[i] = Object.deserialize(buffer, bufferOffset)
    }
    return data;
  }

  static getMessageSize(object) {
    let length = 0;
    length += std_msgs.msg.Header.getMessageSize(object.header);
    length += 383 * object.objects.length;
    return length + 66;
  }

  static datatype() {
    // Returns string type for a message object
    return 'data_parse/ObjectFrame';
  }

  static md5sum() {
    //Returns md5sum for a message object
    return 'c4b338d30c7b19bee12d9930eae95422';
  }

  static messageDefinition() {
    // Returns full string definition for message
    return `
    std_msgs/Header header
    
    float64 HostSpeed
    float64 HostYawRate
    float64 StsBlkd0bin
    uint8 StsBlkdConf
    uint8 StsChks
    uint8 StsCntr
    uint8 StsDstbc
    uint8 StsEna
    uint8 StsFaulty
    uint8 StsIfVersMajor
    uint8 StsIfVersMinor
    float64 StsLatency
    uint8 StsMisAlign
    uint8 StsMissCom
    uint8 StsRdrNrDetn
    uint8 StsRdrNrObj
    uint8 StsSftyFlt
    float64 StsTiStamp
    uint8 StsWhlSpdCmpFac
    uint8 TiStampStsGlbTiBas
    uint8 TiStampStsSyncToGatewy
    uint8 TiStampStsTiLeap
    uint8 TiStampStsTiOut
    
    uint8 sensor_type
    
    uint8 Blockage
    uint8 Calibration
    uint8 Fault
    
    Object[] objects
    ================================================================================
    MSG: std_msgs/Header
    # Standard metadata for higher-level stamped data types.
    # This is generally used to communicate timestamped data 
    # in a particular coordinate frame.
    # 
    # sequence ID: consecutively increasing ID 
    uint32 seq
    #Two-integer timestamp that is expressed as:
    # * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')
    # * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')
    # time-handling sugar is provided by the client library
    time stamp
    #Frame this data is associated with
    string frame_id
    
    ================================================================================
    MSG: data_parse/Object
    # BO_ 1345 Objects_Header: 3 Vector__XXX
    #  SG_ Sync_Frame_Index : 0|8@1+ (1,0) [0|255] "counter" Vector__XXX
    #  SG_ Num_Of_Video_Objs : 8|4@1+ (1,0) [0|12] "counter" Vector__XXX
    #  SG_ VD_CIPV_ID : 12|7@1+ (1,0) [0|127] "counter" Vector__XXX
    #  SG_ VD_CIPV_Lost : 19|2@1+ (1,0) [0|2] "ENUM" Vector__XXX
    #  SG_ OBJ_VD_Allow_Acc : 21|2@1+ (1,0) [0|2] "ENUM" Vector__XXX
    #  SG_ Reserved : 23|1@1+ (1,0) [0|0] "NA" Vector__XXX
    
    # BO_ 1280 Objects_Signals_A1: 7 Vector__XXX
    #  SG_ Obj_ID_1 : 0|7@1+ (1,0) [0|127] "counter" Vector__XXX
    #  SG_ Object_Class_1 : 7|3@1+ (1,0) [0|7] "ENUM" Vector__XXX
    #  SG_ OBJ_Width_1 : 10|7@1+ (0.05,0) [0|6.35] "m" Vector__XXX
    #  SG_ OBJ_Length_1 : 17|9@1+ (0.05,0) [0|25.5] "m" Vector__XXX
    #  SG_ Relative_Long_Velocity_1 : 26|13@1+ (0.05,-120) [-120|130] "m/s" Vector__XXX
    #  SG_ OBJ_Lane_Assignment_1 : 39|3@1+ (1,0) [0|5] "ENUM" Vector__XXX
    #  SG_ Relative_Lat_Velocity_1 : 42|11@1+ (0.05,-50) [-50|50] "m/s" Vector__XXX
    #  SG_ Reserved : 53|3@1+ (1,0) [0|0] "NA" Vector__XXX
    
    
    # BO_ 1281 Objects_Signals_B1: 5 Vector__XXX
    #  SG_ Absolute_Long_Acc_1 : 0|9@1+ (0.05,-12.8) [-12.8|12.75] "m/s2" Vector__XXX
    #  SG_ Long_Distance_1 : 9|13@1+ (0.05,0) [0|350] "m" Vector__XXX
    #  SG_ Lateral_Distance_1 : 22|12@1+ (0.05,-102.4) [-102.4|102.3] "m" Vector__XXX
    #  SG_ Reserved : 34|6@1+ (1,0) [0|0] "NA" Vector__XXX
    
    
    # BO_ 1282 Objects_Signals_C1: 7 Vector__XXX
    #  SG_ Absolute_Speed_1 : 0|12@1+ (0.05,-100) [-100|100] "m/s" Vector__XXX
    #  SG_ OBJ_Motion_Status_1 : 12|3@1+ (1,0) [0|4] "ENUM " Vector__XXX
    #  SG_ OBJ_Motion_Category_1 : 15|4@1+ (1,0) [0|12] "ENUM " Vector__XXX
    #  SG_ Brake_Light_1 : 19|1@1+ (1,0) [0|1] "bool" Vector__XXX
    #  SG_ Turn_Indicator_Right_1 : 20|1@1+ (1,0) [0|1] "bool" Vector__XXX
    #  SG_ Turn_Indicator_Left_1 : 21|1@1+ (1,0) [0|1] "bool" Vector__XXX
    #  SG_ Light_indicator_validity_1 : 22|1@1+ (1,0) [0|1] "bool" Vector__XXX
    #  SG_ OBJ_Angle_Mid_1 : 23|14@1+ (0.0002,-1.571) [-1.571|1.571] "rad" Vector__XXX
    #  SG_ OBJ_Angle_Rate_1 : 37|12@1+ (0.002,-2.234) [-2.234|2.2318] "rad/s" Vector__XXX
    #  SG_ Reserved : 49|7@1+ (1,0) [0|0] "NA" Vector__XXX
    
    uint8 UNCLASSIFIED=0
    uint8 UNKNOWN_SMALL=1
    uint8 UNKNOWN_BIG=2
    uint8 PEDESTRIAN=3
    uint8 BIKE=4
    uint8 CAR=5
    uint8 TRUCK=6
    
    #### ID of this object from tracking. 
    #* Obj_ID_1
    uint16 id
    
    #### Number of scans this object has been tracked for.
    int16 life_cycles
    
    #### Most likely class of this object(see top)
    #* Object_Class_1
    uint8 classification
    
    #### The higher this value is the more reliable is the assigned object class
    float64 obstacle_probability
    
    #### The higher this value is the more reliable is the assigned object class
    float64 probability_existence
    
    #### x,y,z in m
    #* Long_Distance_1  Lateral_Distance_1
    geometry_msgs/Vector3 center
    
    #### position untertainty
    geometry_msgs/Vector3 center_uncertainty
    
    #### yaw angle 
    #* OBJ_Angle_Rate_1  
    #* OBJ_Angle_Mid_1 
    float64 heading_angle 
    
    #### yaw angle uncertainty
    float64 heading_angle_uncertainty
    
    #### Size of the object box in the object, X - length in m
    #* OBJ_Length_1
    float32 length
    
    #### Size of the object box in the object, Y - length in m
    #* OBJ_Width_1
    float32 width
    
    #### Size of the object box in the object, Z - length in m
    float32 height
    
    #### relative_velocity in m/s
    #* Relative_Lat_Velocity_1  Relative_Long_Velocity_1
    geometry_msgs/Vector3 relative_velocity
    
    #### relative_velocity untertainty
    geometry_msgs/Vector3 relative_velocity_uncertainty
    
    #### relative_accelerate in m/s
    geometry_msgs/Vector3 relative_accelerate
    
    #### relative_accelerate untertainty
    geometry_msgs/Vector3 relative_accelerate_uncertainty
    
    #### absolute_velocity in m/s
    #* Absolute_Speed_1
    geometry_msgs/Vector3 absolute_velocity
    
    #### absolute_velocity untertainty
    geometry_msgs/Vector3 absolute_velocity_uncertainty
    
    #### absolute_accelerate in m/s
    #* Absolute_Long_Acc_1
    geometry_msgs/Vector3 absolute_accelerate
    
    #### absolute_accelerate untertainty
    geometry_msgs/Vector3 absolute_accelerate_uncertainty
    
    float64 ObjNearestPtX
    float64 ObjNearestPtY
    float64 ObjNearestPtZ
    
    uint8 chks
    uint8 cntr
    uint8 dynamic_property
    uint8 snr
    float64 rcs
    float64 classification_confidence
    uint8 update_bit
    uint8 update_flag
    uint8 valid_flag
    float64 speed
    float64 accelerate
    uint8 vision_id
    uint8 CllsnMtgtnByBrkgPrimQly
    uint8 CllsnMtgtnByBrkgSecQly
    uint8 EmgyLaneKeepAidPosnQly
    uint8 CllsnWarnFwdQly
    
    uint8 fusion_source
    
    float64 time_stamp
    
    #float64 isp_time_stamp
    
    # enum
    #uint8 Cms_confidence
    #uint8 CmsConfidence1_Invalid = 0
    #uint8 CmsConfidence1_Valid = 1
    #uint8 CmsConfidence1_Reserved = 2
    #uint8 CmsConfidence1_Reserved1 = 3
    
    
    float64 lane_offset_right
    float64 lane_offset_right_dev
    
    
    # ENUM for classification
    uint8 CLASS_UNKNOWN              = 0
    uint8 CLASS_CAR                  = 1
    uint8 CLASS_TRUCK                = 2
    uint8 CLASS_MOTORCYCLE           = 3
    uint8 CLASS_CYCLIST              = 4   # bicyle, E-Scooter, tricyclist
    uint8 CLASS_PEDESTRIAN           = 5
    uint8 CLASS_ROAD_BARRIER         = 6   # traffic cone, parking gate, road barrier
    uint8 CLASS_MAX_NUM              = 7
    
    
    # ENUM for flash light status of the object
    uint8 INDICATOR_UNDEFINED        = 0   # Flash light status is not defined for non-vehicle objects
    uint8 INDICATOR_OFF              = 1   # Flash light is currenhtly not active
    uint8 INDICATOR_RIGHT            = 2   # Right flash light is on and/or blinking
    uint8 INDICATOR_LEFT             = 3   # Left flash light is on and/or blinking
    uint8 INDICATOR_BOTH             = 4   # Flash lights from both side are on and/or blinking
    
    # Flash light status of the object, if applicable (see enum for details)
    #* Turn_Indicator_Left_1 Turn_Indicator_Right_1
    uint8 indicator_state                  # [INDICATOR_*]
    
    ================================================================================
    MSG: geometry_msgs/Vector3
    # This represents a vector in free space. 
    # It is only meant to represent a direction. Therefore, it does not
    # make sense to apply a translation to it (e.g., when applying a 
    # generic rigid transformation to a Vector3, tf2 will only apply the
    # rotation). If you want your data to be translatable too, use the
    # geometry_msgs/Point message instead.
    
    float64 x
    float64 y
    float64 z
    `;
  }

  static Resolve(msg) {
    // deep-construct a valid message object instance of whatever was passed in
    if (typeof msg !== 'object' || msg === null) {
      msg = {};
    }
    const resolved = new ObjectFrame(null);
    if (msg.header !== undefined) {
      resolved.header = std_msgs.msg.Header.Resolve(msg.header)
    }
    else {
      resolved.header = new std_msgs.msg.Header()
    }

    if (msg.HostSpeed !== undefined) {
      resolved.HostSpeed = msg.HostSpeed;
    }
    else {
      resolved.HostSpeed = 0.0
    }

    if (msg.HostYawRate !== undefined) {
      resolved.HostYawRate = msg.HostYawRate;
    }
    else {
      resolved.HostYawRate = 0.0
    }

    if (msg.StsBlkd0bin !== undefined) {
      resolved.StsBlkd0bin = msg.StsBlkd0bin;
    }
    else {
      resolved.StsBlkd0bin = 0.0
    }

    if (msg.StsBlkdConf !== undefined) {
      resolved.StsBlkdConf = msg.StsBlkdConf;
    }
    else {
      resolved.StsBlkdConf = 0
    }

    if (msg.StsChks !== undefined) {
      resolved.StsChks = msg.StsChks;
    }
    else {
      resolved.StsChks = 0
    }

    if (msg.StsCntr !== undefined) {
      resolved.StsCntr = msg.StsCntr;
    }
    else {
      resolved.StsCntr = 0
    }

    if (msg.StsDstbc !== undefined) {
      resolved.StsDstbc = msg.StsDstbc;
    }
    else {
      resolved.StsDstbc = 0
    }

    if (msg.StsEna !== undefined) {
      resolved.StsEna = msg.StsEna;
    }
    else {
      resolved.StsEna = 0
    }

    if (msg.StsFaulty !== undefined) {
      resolved.StsFaulty = msg.StsFaulty;
    }
    else {
      resolved.StsFaulty = 0
    }

    if (msg.StsIfVersMajor !== undefined) {
      resolved.StsIfVersMajor = msg.StsIfVersMajor;
    }
    else {
      resolved.StsIfVersMajor = 0
    }

    if (msg.StsIfVersMinor !== undefined) {
      resolved.StsIfVersMinor = msg.StsIfVersMinor;
    }
    else {
      resolved.StsIfVersMinor = 0
    }

    if (msg.StsLatency !== undefined) {
      resolved.StsLatency = msg.StsLatency;
    }
    else {
      resolved.StsLatency = 0.0
    }

    if (msg.StsMisAlign !== undefined) {
      resolved.StsMisAlign = msg.StsMisAlign;
    }
    else {
      resolved.StsMisAlign = 0
    }

    if (msg.StsMissCom !== undefined) {
      resolved.StsMissCom = msg.StsMissCom;
    }
    else {
      resolved.StsMissCom = 0
    }

    if (msg.StsRdrNrDetn !== undefined) {
      resolved.StsRdrNrDetn = msg.StsRdrNrDetn;
    }
    else {
      resolved.StsRdrNrDetn = 0
    }

    if (msg.StsRdrNrObj !== undefined) {
      resolved.StsRdrNrObj = msg.StsRdrNrObj;
    }
    else {
      resolved.StsRdrNrObj = 0
    }

    if (msg.StsSftyFlt !== undefined) {
      resolved.StsSftyFlt = msg.StsSftyFlt;
    }
    else {
      resolved.StsSftyFlt = 0
    }

    if (msg.StsTiStamp !== undefined) {
      resolved.StsTiStamp = msg.StsTiStamp;
    }
    else {
      resolved.StsTiStamp = 0.0
    }

    if (msg.StsWhlSpdCmpFac !== undefined) {
      resolved.StsWhlSpdCmpFac = msg.StsWhlSpdCmpFac;
    }
    else {
      resolved.StsWhlSpdCmpFac = 0
    }

    if (msg.TiStampStsGlbTiBas !== undefined) {
      resolved.TiStampStsGlbTiBas = msg.TiStampStsGlbTiBas;
    }
    else {
      resolved.TiStampStsGlbTiBas = 0
    }

    if (msg.TiStampStsSyncToGatewy !== undefined) {
      resolved.TiStampStsSyncToGatewy = msg.TiStampStsSyncToGatewy;
    }
    else {
      resolved.TiStampStsSyncToGatewy = 0
    }

    if (msg.TiStampStsTiLeap !== undefined) {
      resolved.TiStampStsTiLeap = msg.TiStampStsTiLeap;
    }
    else {
      resolved.TiStampStsTiLeap = 0
    }

    if (msg.TiStampStsTiOut !== undefined) {
      resolved.TiStampStsTiOut = msg.TiStampStsTiOut;
    }
    else {
      resolved.TiStampStsTiOut = 0
    }

    if (msg.sensor_type !== undefined) {
      resolved.sensor_type = msg.sensor_type;
    }
    else {
      resolved.sensor_type = 0
    }

    if (msg.Blockage !== undefined) {
      resolved.Blockage = msg.Blockage;
    }
    else {
      resolved.Blockage = 0
    }

    if (msg.Calibration !== undefined) {
      resolved.Calibration = msg.Calibration;
    }
    else {
      resolved.Calibration = 0
    }

    if (msg.Fault !== undefined) {
      resolved.Fault = msg.Fault;
    }
    else {
      resolved.Fault = 0
    }

    if (msg.objects !== undefined) {
      resolved.objects = new Array(msg.objects.length);
      for (let i = 0; i < resolved.objects.length; ++i) {
        resolved.objects[i] = Object.Resolve(msg.objects[i]);
      }
    }
    else {
      resolved.objects = []
    }

    return resolved;
    }
};

module.exports = ObjectFrame;
