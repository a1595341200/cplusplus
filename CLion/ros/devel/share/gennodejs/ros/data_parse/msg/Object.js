// Auto-generated. Do not edit!

// (in-package data_parse.msg)


"use strict";

const _serializer = _ros_msg_utils.Serialize;
const _arraySerializer = _serializer.Array;
const _deserializer = _ros_msg_utils.Deserialize;
const _arrayDeserializer = _deserializer.Array;
const _finder = _ros_msg_utils.Find;
const _getByteLength = _ros_msg_utils.getByteLength;
let geometry_msgs = _finder('geometry_msgs');

//-----------------------------------------------------------

class Object {
  constructor(initObj={}) {
    if (initObj === null) {
      // initObj === null is a special case for deserialization where we don't initialize fields
      this.id = null;
      this.life_cycles = null;
      this.classification = null;
      this.obstacle_probability = null;
      this.probability_existence = null;
      this.center = null;
      this.center_uncertainty = null;
      this.heading_angle = null;
      this.heading_angle_uncertainty = null;
      this.length = null;
      this.width = null;
      this.height = null;
      this.relative_velocity = null;
      this.relative_velocity_uncertainty = null;
      this.relative_accelerate = null;
      this.relative_accelerate_uncertainty = null;
      this.absolute_velocity = null;
      this.absolute_velocity_uncertainty = null;
      this.absolute_accelerate = null;
      this.absolute_accelerate_uncertainty = null;
      this.ObjNearestPtX = null;
      this.ObjNearestPtY = null;
      this.ObjNearestPtZ = null;
      this.chks = null;
      this.cntr = null;
      this.dynamic_property = null;
      this.snr = null;
      this.rcs = null;
      this.classification_confidence = null;
      this.update_bit = null;
      this.update_flag = null;
      this.valid_flag = null;
      this.speed = null;
      this.accelerate = null;
      this.vision_id = null;
      this.CllsnMtgtnByBrkgPrimQly = null;
      this.CllsnMtgtnByBrkgSecQly = null;
      this.EmgyLaneKeepAidPosnQly = null;
      this.CllsnWarnFwdQly = null;
      this.fusion_source = null;
      this.time_stamp = null;
      this.lane_offset_right = null;
      this.lane_offset_right_dev = null;
      this.indicator_state = null;
    }
    else {
      if (initObj.hasOwnProperty('id')) {
        this.id = initObj.id
      }
      else {
        this.id = 0;
      }
      if (initObj.hasOwnProperty('life_cycles')) {
        this.life_cycles = initObj.life_cycles
      }
      else {
        this.life_cycles = 0;
      }
      if (initObj.hasOwnProperty('classification')) {
        this.classification = initObj.classification
      }
      else {
        this.classification = 0;
      }
      if (initObj.hasOwnProperty('obstacle_probability')) {
        this.obstacle_probability = initObj.obstacle_probability
      }
      else {
        this.obstacle_probability = 0.0;
      }
      if (initObj.hasOwnProperty('probability_existence')) {
        this.probability_existence = initObj.probability_existence
      }
      else {
        this.probability_existence = 0.0;
      }
      if (initObj.hasOwnProperty('center')) {
        this.center = initObj.center
      }
      else {
        this.center = new geometry_msgs.msg.Vector3();
      }
      if (initObj.hasOwnProperty('center_uncertainty')) {
        this.center_uncertainty = initObj.center_uncertainty
      }
      else {
        this.center_uncertainty = new geometry_msgs.msg.Vector3();
      }
      if (initObj.hasOwnProperty('heading_angle')) {
        this.heading_angle = initObj.heading_angle
      }
      else {
        this.heading_angle = 0.0;
      }
      if (initObj.hasOwnProperty('heading_angle_uncertainty')) {
        this.heading_angle_uncertainty = initObj.heading_angle_uncertainty
      }
      else {
        this.heading_angle_uncertainty = 0.0;
      }
      if (initObj.hasOwnProperty('length')) {
        this.length = initObj.length
      }
      else {
        this.length = 0.0;
      }
      if (initObj.hasOwnProperty('width')) {
        this.width = initObj.width
      }
      else {
        this.width = 0.0;
      }
      if (initObj.hasOwnProperty('height')) {
        this.height = initObj.height
      }
      else {
        this.height = 0.0;
      }
      if (initObj.hasOwnProperty('relative_velocity')) {
        this.relative_velocity = initObj.relative_velocity
      }
      else {
        this.relative_velocity = new geometry_msgs.msg.Vector3();
      }
      if (initObj.hasOwnProperty('relative_velocity_uncertainty')) {
        this.relative_velocity_uncertainty = initObj.relative_velocity_uncertainty
      }
      else {
        this.relative_velocity_uncertainty = new geometry_msgs.msg.Vector3();
      }
      if (initObj.hasOwnProperty('relative_accelerate')) {
        this.relative_accelerate = initObj.relative_accelerate
      }
      else {
        this.relative_accelerate = new geometry_msgs.msg.Vector3();
      }
      if (initObj.hasOwnProperty('relative_accelerate_uncertainty')) {
        this.relative_accelerate_uncertainty = initObj.relative_accelerate_uncertainty
      }
      else {
        this.relative_accelerate_uncertainty = new geometry_msgs.msg.Vector3();
      }
      if (initObj.hasOwnProperty('absolute_velocity')) {
        this.absolute_velocity = initObj.absolute_velocity
      }
      else {
        this.absolute_velocity = new geometry_msgs.msg.Vector3();
      }
      if (initObj.hasOwnProperty('absolute_velocity_uncertainty')) {
        this.absolute_velocity_uncertainty = initObj.absolute_velocity_uncertainty
      }
      else {
        this.absolute_velocity_uncertainty = new geometry_msgs.msg.Vector3();
      }
      if (initObj.hasOwnProperty('absolute_accelerate')) {
        this.absolute_accelerate = initObj.absolute_accelerate
      }
      else {
        this.absolute_accelerate = new geometry_msgs.msg.Vector3();
      }
      if (initObj.hasOwnProperty('absolute_accelerate_uncertainty')) {
        this.absolute_accelerate_uncertainty = initObj.absolute_accelerate_uncertainty
      }
      else {
        this.absolute_accelerate_uncertainty = new geometry_msgs.msg.Vector3();
      }
      if (initObj.hasOwnProperty('ObjNearestPtX')) {
        this.ObjNearestPtX = initObj.ObjNearestPtX
      }
      else {
        this.ObjNearestPtX = 0.0;
      }
      if (initObj.hasOwnProperty('ObjNearestPtY')) {
        this.ObjNearestPtY = initObj.ObjNearestPtY
      }
      else {
        this.ObjNearestPtY = 0.0;
      }
      if (initObj.hasOwnProperty('ObjNearestPtZ')) {
        this.ObjNearestPtZ = initObj.ObjNearestPtZ
      }
      else {
        this.ObjNearestPtZ = 0.0;
      }
      if (initObj.hasOwnProperty('chks')) {
        this.chks = initObj.chks
      }
      else {
        this.chks = 0;
      }
      if (initObj.hasOwnProperty('cntr')) {
        this.cntr = initObj.cntr
      }
      else {
        this.cntr = 0;
      }
      if (initObj.hasOwnProperty('dynamic_property')) {
        this.dynamic_property = initObj.dynamic_property
      }
      else {
        this.dynamic_property = 0;
      }
      if (initObj.hasOwnProperty('snr')) {
        this.snr = initObj.snr
      }
      else {
        this.snr = 0;
      }
      if (initObj.hasOwnProperty('rcs')) {
        this.rcs = initObj.rcs
      }
      else {
        this.rcs = 0.0;
      }
      if (initObj.hasOwnProperty('classification_confidence')) {
        this.classification_confidence = initObj.classification_confidence
      }
      else {
        this.classification_confidence = 0.0;
      }
      if (initObj.hasOwnProperty('update_bit')) {
        this.update_bit = initObj.update_bit
      }
      else {
        this.update_bit = 0;
      }
      if (initObj.hasOwnProperty('update_flag')) {
        this.update_flag = initObj.update_flag
      }
      else {
        this.update_flag = 0;
      }
      if (initObj.hasOwnProperty('valid_flag')) {
        this.valid_flag = initObj.valid_flag
      }
      else {
        this.valid_flag = 0;
      }
      if (initObj.hasOwnProperty('speed')) {
        this.speed = initObj.speed
      }
      else {
        this.speed = 0.0;
      }
      if (initObj.hasOwnProperty('accelerate')) {
        this.accelerate = initObj.accelerate
      }
      else {
        this.accelerate = 0.0;
      }
      if (initObj.hasOwnProperty('vision_id')) {
        this.vision_id = initObj.vision_id
      }
      else {
        this.vision_id = 0;
      }
      if (initObj.hasOwnProperty('CllsnMtgtnByBrkgPrimQly')) {
        this.CllsnMtgtnByBrkgPrimQly = initObj.CllsnMtgtnByBrkgPrimQly
      }
      else {
        this.CllsnMtgtnByBrkgPrimQly = 0;
      }
      if (initObj.hasOwnProperty('CllsnMtgtnByBrkgSecQly')) {
        this.CllsnMtgtnByBrkgSecQly = initObj.CllsnMtgtnByBrkgSecQly
      }
      else {
        this.CllsnMtgtnByBrkgSecQly = 0;
      }
      if (initObj.hasOwnProperty('EmgyLaneKeepAidPosnQly')) {
        this.EmgyLaneKeepAidPosnQly = initObj.EmgyLaneKeepAidPosnQly
      }
      else {
        this.EmgyLaneKeepAidPosnQly = 0;
      }
      if (initObj.hasOwnProperty('CllsnWarnFwdQly')) {
        this.CllsnWarnFwdQly = initObj.CllsnWarnFwdQly
      }
      else {
        this.CllsnWarnFwdQly = 0;
      }
      if (initObj.hasOwnProperty('fusion_source')) {
        this.fusion_source = initObj.fusion_source
      }
      else {
        this.fusion_source = 0;
      }
      if (initObj.hasOwnProperty('time_stamp')) {
        this.time_stamp = initObj.time_stamp
      }
      else {
        this.time_stamp = 0.0;
      }
      if (initObj.hasOwnProperty('lane_offset_right')) {
        this.lane_offset_right = initObj.lane_offset_right
      }
      else {
        this.lane_offset_right = 0.0;
      }
      if (initObj.hasOwnProperty('lane_offset_right_dev')) {
        this.lane_offset_right_dev = initObj.lane_offset_right_dev
      }
      else {
        this.lane_offset_right_dev = 0.0;
      }
      if (initObj.hasOwnProperty('indicator_state')) {
        this.indicator_state = initObj.indicator_state
      }
      else {
        this.indicator_state = 0;
      }
    }
  }

  static serialize(obj, buffer, bufferOffset) {
    // Serializes a message object of type Object
    // Serialize message field [id]
    bufferOffset = _serializer.uint16(obj.id, buffer, bufferOffset);
    // Serialize message field [life_cycles]
    bufferOffset = _serializer.int16(obj.life_cycles, buffer, bufferOffset);
    // Serialize message field [classification]
    bufferOffset = _serializer.uint8(obj.classification, buffer, bufferOffset);
    // Serialize message field [obstacle_probability]
    bufferOffset = _serializer.float64(obj.obstacle_probability, buffer, bufferOffset);
    // Serialize message field [probability_existence]
    bufferOffset = _serializer.float64(obj.probability_existence, buffer, bufferOffset);
    // Serialize message field [center]
    bufferOffset = geometry_msgs.msg.Vector3.serialize(obj.center, buffer, bufferOffset);
    // Serialize message field [center_uncertainty]
    bufferOffset = geometry_msgs.msg.Vector3.serialize(obj.center_uncertainty, buffer, bufferOffset);
    // Serialize message field [heading_angle]
    bufferOffset = _serializer.float64(obj.heading_angle, buffer, bufferOffset);
    // Serialize message field [heading_angle_uncertainty]
    bufferOffset = _serializer.float64(obj.heading_angle_uncertainty, buffer, bufferOffset);
    // Serialize message field [length]
    bufferOffset = _serializer.float32(obj.length, buffer, bufferOffset);
    // Serialize message field [width]
    bufferOffset = _serializer.float32(obj.width, buffer, bufferOffset);
    // Serialize message field [height]
    bufferOffset = _serializer.float32(obj.height, buffer, bufferOffset);
    // Serialize message field [relative_velocity]
    bufferOffset = geometry_msgs.msg.Vector3.serialize(obj.relative_velocity, buffer, bufferOffset);
    // Serialize message field [relative_velocity_uncertainty]
    bufferOffset = geometry_msgs.msg.Vector3.serialize(obj.relative_velocity_uncertainty, buffer, bufferOffset);
    // Serialize message field [relative_accelerate]
    bufferOffset = geometry_msgs.msg.Vector3.serialize(obj.relative_accelerate, buffer, bufferOffset);
    // Serialize message field [relative_accelerate_uncertainty]
    bufferOffset = geometry_msgs.msg.Vector3.serialize(obj.relative_accelerate_uncertainty, buffer, bufferOffset);
    // Serialize message field [absolute_velocity]
    bufferOffset = geometry_msgs.msg.Vector3.serialize(obj.absolute_velocity, buffer, bufferOffset);
    // Serialize message field [absolute_velocity_uncertainty]
    bufferOffset = geometry_msgs.msg.Vector3.serialize(obj.absolute_velocity_uncertainty, buffer, bufferOffset);
    // Serialize message field [absolute_accelerate]
    bufferOffset = geometry_msgs.msg.Vector3.serialize(obj.absolute_accelerate, buffer, bufferOffset);
    // Serialize message field [absolute_accelerate_uncertainty]
    bufferOffset = geometry_msgs.msg.Vector3.serialize(obj.absolute_accelerate_uncertainty, buffer, bufferOffset);
    // Serialize message field [ObjNearestPtX]
    bufferOffset = _serializer.float64(obj.ObjNearestPtX, buffer, bufferOffset);
    // Serialize message field [ObjNearestPtY]
    bufferOffset = _serializer.float64(obj.ObjNearestPtY, buffer, bufferOffset);
    // Serialize message field [ObjNearestPtZ]
    bufferOffset = _serializer.float64(obj.ObjNearestPtZ, buffer, bufferOffset);
    // Serialize message field [chks]
    bufferOffset = _serializer.uint8(obj.chks, buffer, bufferOffset);
    // Serialize message field [cntr]
    bufferOffset = _serializer.uint8(obj.cntr, buffer, bufferOffset);
    // Serialize message field [dynamic_property]
    bufferOffset = _serializer.uint8(obj.dynamic_property, buffer, bufferOffset);
    // Serialize message field [snr]
    bufferOffset = _serializer.uint8(obj.snr, buffer, bufferOffset);
    // Serialize message field [rcs]
    bufferOffset = _serializer.float64(obj.rcs, buffer, bufferOffset);
    // Serialize message field [classification_confidence]
    bufferOffset = _serializer.float64(obj.classification_confidence, buffer, bufferOffset);
    // Serialize message field [update_bit]
    bufferOffset = _serializer.uint8(obj.update_bit, buffer, bufferOffset);
    // Serialize message field [update_flag]
    bufferOffset = _serializer.uint8(obj.update_flag, buffer, bufferOffset);
    // Serialize message field [valid_flag]
    bufferOffset = _serializer.uint8(obj.valid_flag, buffer, bufferOffset);
    // Serialize message field [speed]
    bufferOffset = _serializer.float64(obj.speed, buffer, bufferOffset);
    // Serialize message field [accelerate]
    bufferOffset = _serializer.float64(obj.accelerate, buffer, bufferOffset);
    // Serialize message field [vision_id]
    bufferOffset = _serializer.uint8(obj.vision_id, buffer, bufferOffset);
    // Serialize message field [CllsnMtgtnByBrkgPrimQly]
    bufferOffset = _serializer.uint8(obj.CllsnMtgtnByBrkgPrimQly, buffer, bufferOffset);
    // Serialize message field [CllsnMtgtnByBrkgSecQly]
    bufferOffset = _serializer.uint8(obj.CllsnMtgtnByBrkgSecQly, buffer, bufferOffset);
    // Serialize message field [EmgyLaneKeepAidPosnQly]
    bufferOffset = _serializer.uint8(obj.EmgyLaneKeepAidPosnQly, buffer, bufferOffset);
    // Serialize message field [CllsnWarnFwdQly]
    bufferOffset = _serializer.uint8(obj.CllsnWarnFwdQly, buffer, bufferOffset);
    // Serialize message field [fusion_source]
    bufferOffset = _serializer.uint8(obj.fusion_source, buffer, bufferOffset);
    // Serialize message field [time_stamp]
    bufferOffset = _serializer.float64(obj.time_stamp, buffer, bufferOffset);
    // Serialize message field [lane_offset_right]
    bufferOffset = _serializer.float64(obj.lane_offset_right, buffer, bufferOffset);
    // Serialize message field [lane_offset_right_dev]
    bufferOffset = _serializer.float64(obj.lane_offset_right_dev, buffer, bufferOffset);
    // Serialize message field [indicator_state]
    bufferOffset = _serializer.uint8(obj.indicator_state, buffer, bufferOffset);
    return bufferOffset;
  }

  static deserialize(buffer, bufferOffset=[0]) {
    //deserializes a message object of type Object
    let len;
    let data = new Object(null);
    // Deserialize message field [id]
    data.id = _deserializer.uint16(buffer, bufferOffset);
    // Deserialize message field [life_cycles]
    data.life_cycles = _deserializer.int16(buffer, bufferOffset);
    // Deserialize message field [classification]
    data.classification = _deserializer.uint8(buffer, bufferOffset);
    // Deserialize message field [obstacle_probability]
    data.obstacle_probability = _deserializer.float64(buffer, bufferOffset);
    // Deserialize message field [probability_existence]
    data.probability_existence = _deserializer.float64(buffer, bufferOffset);
    // Deserialize message field [center]
    data.center = geometry_msgs.msg.Vector3.deserialize(buffer, bufferOffset);
    // Deserialize message field [center_uncertainty]
    data.center_uncertainty = geometry_msgs.msg.Vector3.deserialize(buffer, bufferOffset);
    // Deserialize message field [heading_angle]
    data.heading_angle = _deserializer.float64(buffer, bufferOffset);
    // Deserialize message field [heading_angle_uncertainty]
    data.heading_angle_uncertainty = _deserializer.float64(buffer, bufferOffset);
    // Deserialize message field [length]
    data.length = _deserializer.float32(buffer, bufferOffset);
    // Deserialize message field [width]
    data.width = _deserializer.float32(buffer, bufferOffset);
    // Deserialize message field [height]
    data.height = _deserializer.float32(buffer, bufferOffset);
    // Deserialize message field [relative_velocity]
    data.relative_velocity = geometry_msgs.msg.Vector3.deserialize(buffer, bufferOffset);
    // Deserialize message field [relative_velocity_uncertainty]
    data.relative_velocity_uncertainty = geometry_msgs.msg.Vector3.deserialize(buffer, bufferOffset);
    // Deserialize message field [relative_accelerate]
    data.relative_accelerate = geometry_msgs.msg.Vector3.deserialize(buffer, bufferOffset);
    // Deserialize message field [relative_accelerate_uncertainty]
    data.relative_accelerate_uncertainty = geometry_msgs.msg.Vector3.deserialize(buffer, bufferOffset);
    // Deserialize message field [absolute_velocity]
    data.absolute_velocity = geometry_msgs.msg.Vector3.deserialize(buffer, bufferOffset);
    // Deserialize message field [absolute_velocity_uncertainty]
    data.absolute_velocity_uncertainty = geometry_msgs.msg.Vector3.deserialize(buffer, bufferOffset);
    // Deserialize message field [absolute_accelerate]
    data.absolute_accelerate = geometry_msgs.msg.Vector3.deserialize(buffer, bufferOffset);
    // Deserialize message field [absolute_accelerate_uncertainty]
    data.absolute_accelerate_uncertainty = geometry_msgs.msg.Vector3.deserialize(buffer, bufferOffset);
    // Deserialize message field [ObjNearestPtX]
    data.ObjNearestPtX = _deserializer.float64(buffer, bufferOffset);
    // Deserialize message field [ObjNearestPtY]
    data.ObjNearestPtY = _deserializer.float64(buffer, bufferOffset);
    // Deserialize message field [ObjNearestPtZ]
    data.ObjNearestPtZ = _deserializer.float64(buffer, bufferOffset);
    // Deserialize message field [chks]
    data.chks = _deserializer.uint8(buffer, bufferOffset);
    // Deserialize message field [cntr]
    data.cntr = _deserializer.uint8(buffer, bufferOffset);
    // Deserialize message field [dynamic_property]
    data.dynamic_property = _deserializer.uint8(buffer, bufferOffset);
    // Deserialize message field [snr]
    data.snr = _deserializer.uint8(buffer, bufferOffset);
    // Deserialize message field [rcs]
    data.rcs = _deserializer.float64(buffer, bufferOffset);
    // Deserialize message field [classification_confidence]
    data.classification_confidence = _deserializer.float64(buffer, bufferOffset);
    // Deserialize message field [update_bit]
    data.update_bit = _deserializer.uint8(buffer, bufferOffset);
    // Deserialize message field [update_flag]
    data.update_flag = _deserializer.uint8(buffer, bufferOffset);
    // Deserialize message field [valid_flag]
    data.valid_flag = _deserializer.uint8(buffer, bufferOffset);
    // Deserialize message field [speed]
    data.speed = _deserializer.float64(buffer, bufferOffset);
    // Deserialize message field [accelerate]
    data.accelerate = _deserializer.float64(buffer, bufferOffset);
    // Deserialize message field [vision_id]
    data.vision_id = _deserializer.uint8(buffer, bufferOffset);
    // Deserialize message field [CllsnMtgtnByBrkgPrimQly]
    data.CllsnMtgtnByBrkgPrimQly = _deserializer.uint8(buffer, bufferOffset);
    // Deserialize message field [CllsnMtgtnByBrkgSecQly]
    data.CllsnMtgtnByBrkgSecQly = _deserializer.uint8(buffer, bufferOffset);
    // Deserialize message field [EmgyLaneKeepAidPosnQly]
    data.EmgyLaneKeepAidPosnQly = _deserializer.uint8(buffer, bufferOffset);
    // Deserialize message field [CllsnWarnFwdQly]
    data.CllsnWarnFwdQly = _deserializer.uint8(buffer, bufferOffset);
    // Deserialize message field [fusion_source]
    data.fusion_source = _deserializer.uint8(buffer, bufferOffset);
    // Deserialize message field [time_stamp]
    data.time_stamp = _deserializer.float64(buffer, bufferOffset);
    // Deserialize message field [lane_offset_right]
    data.lane_offset_right = _deserializer.float64(buffer, bufferOffset);
    // Deserialize message field [lane_offset_right_dev]
    data.lane_offset_right_dev = _deserializer.float64(buffer, bufferOffset);
    // Deserialize message field [indicator_state]
    data.indicator_state = _deserializer.uint8(buffer, bufferOffset);
    return data;
  }

  static getMessageSize(object) {
    return 383;
  }

  static datatype() {
    // Returns string type for a message object
    return 'data_parse/Object';
  }

  static md5sum() {
    //Returns md5sum for a message object
    return '5ec958fb840aae7c81d40f6c557b44f5';
  }

  static messageDefinition() {
    // Returns full string definition for message
    return `
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
    const resolved = new Object(null);
    if (msg.id !== undefined) {
      resolved.id = msg.id;
    }
    else {
      resolved.id = 0
    }

    if (msg.life_cycles !== undefined) {
      resolved.life_cycles = msg.life_cycles;
    }
    else {
      resolved.life_cycles = 0
    }

    if (msg.classification !== undefined) {
      resolved.classification = msg.classification;
    }
    else {
      resolved.classification = 0
    }

    if (msg.obstacle_probability !== undefined) {
      resolved.obstacle_probability = msg.obstacle_probability;
    }
    else {
      resolved.obstacle_probability = 0.0
    }

    if (msg.probability_existence !== undefined) {
      resolved.probability_existence = msg.probability_existence;
    }
    else {
      resolved.probability_existence = 0.0
    }

    if (msg.center !== undefined) {
      resolved.center = geometry_msgs.msg.Vector3.Resolve(msg.center)
    }
    else {
      resolved.center = new geometry_msgs.msg.Vector3()
    }

    if (msg.center_uncertainty !== undefined) {
      resolved.center_uncertainty = geometry_msgs.msg.Vector3.Resolve(msg.center_uncertainty)
    }
    else {
      resolved.center_uncertainty = new geometry_msgs.msg.Vector3()
    }

    if (msg.heading_angle !== undefined) {
      resolved.heading_angle = msg.heading_angle;
    }
    else {
      resolved.heading_angle = 0.0
    }

    if (msg.heading_angle_uncertainty !== undefined) {
      resolved.heading_angle_uncertainty = msg.heading_angle_uncertainty;
    }
    else {
      resolved.heading_angle_uncertainty = 0.0
    }

    if (msg.length !== undefined) {
      resolved.length = msg.length;
    }
    else {
      resolved.length = 0.0
    }

    if (msg.width !== undefined) {
      resolved.width = msg.width;
    }
    else {
      resolved.width = 0.0
    }

    if (msg.height !== undefined) {
      resolved.height = msg.height;
    }
    else {
      resolved.height = 0.0
    }

    if (msg.relative_velocity !== undefined) {
      resolved.relative_velocity = geometry_msgs.msg.Vector3.Resolve(msg.relative_velocity)
    }
    else {
      resolved.relative_velocity = new geometry_msgs.msg.Vector3()
    }

    if (msg.relative_velocity_uncertainty !== undefined) {
      resolved.relative_velocity_uncertainty = geometry_msgs.msg.Vector3.Resolve(msg.relative_velocity_uncertainty)
    }
    else {
      resolved.relative_velocity_uncertainty = new geometry_msgs.msg.Vector3()
    }

    if (msg.relative_accelerate !== undefined) {
      resolved.relative_accelerate = geometry_msgs.msg.Vector3.Resolve(msg.relative_accelerate)
    }
    else {
      resolved.relative_accelerate = new geometry_msgs.msg.Vector3()
    }

    if (msg.relative_accelerate_uncertainty !== undefined) {
      resolved.relative_accelerate_uncertainty = geometry_msgs.msg.Vector3.Resolve(msg.relative_accelerate_uncertainty)
    }
    else {
      resolved.relative_accelerate_uncertainty = new geometry_msgs.msg.Vector3()
    }

    if (msg.absolute_velocity !== undefined) {
      resolved.absolute_velocity = geometry_msgs.msg.Vector3.Resolve(msg.absolute_velocity)
    }
    else {
      resolved.absolute_velocity = new geometry_msgs.msg.Vector3()
    }

    if (msg.absolute_velocity_uncertainty !== undefined) {
      resolved.absolute_velocity_uncertainty = geometry_msgs.msg.Vector3.Resolve(msg.absolute_velocity_uncertainty)
    }
    else {
      resolved.absolute_velocity_uncertainty = new geometry_msgs.msg.Vector3()
    }

    if (msg.absolute_accelerate !== undefined) {
      resolved.absolute_accelerate = geometry_msgs.msg.Vector3.Resolve(msg.absolute_accelerate)
    }
    else {
      resolved.absolute_accelerate = new geometry_msgs.msg.Vector3()
    }

    if (msg.absolute_accelerate_uncertainty !== undefined) {
      resolved.absolute_accelerate_uncertainty = geometry_msgs.msg.Vector3.Resolve(msg.absolute_accelerate_uncertainty)
    }
    else {
      resolved.absolute_accelerate_uncertainty = new geometry_msgs.msg.Vector3()
    }

    if (msg.ObjNearestPtX !== undefined) {
      resolved.ObjNearestPtX = msg.ObjNearestPtX;
    }
    else {
      resolved.ObjNearestPtX = 0.0
    }

    if (msg.ObjNearestPtY !== undefined) {
      resolved.ObjNearestPtY = msg.ObjNearestPtY;
    }
    else {
      resolved.ObjNearestPtY = 0.0
    }

    if (msg.ObjNearestPtZ !== undefined) {
      resolved.ObjNearestPtZ = msg.ObjNearestPtZ;
    }
    else {
      resolved.ObjNearestPtZ = 0.0
    }

    if (msg.chks !== undefined) {
      resolved.chks = msg.chks;
    }
    else {
      resolved.chks = 0
    }

    if (msg.cntr !== undefined) {
      resolved.cntr = msg.cntr;
    }
    else {
      resolved.cntr = 0
    }

    if (msg.dynamic_property !== undefined) {
      resolved.dynamic_property = msg.dynamic_property;
    }
    else {
      resolved.dynamic_property = 0
    }

    if (msg.snr !== undefined) {
      resolved.snr = msg.snr;
    }
    else {
      resolved.snr = 0
    }

    if (msg.rcs !== undefined) {
      resolved.rcs = msg.rcs;
    }
    else {
      resolved.rcs = 0.0
    }

    if (msg.classification_confidence !== undefined) {
      resolved.classification_confidence = msg.classification_confidence;
    }
    else {
      resolved.classification_confidence = 0.0
    }

    if (msg.update_bit !== undefined) {
      resolved.update_bit = msg.update_bit;
    }
    else {
      resolved.update_bit = 0
    }

    if (msg.update_flag !== undefined) {
      resolved.update_flag = msg.update_flag;
    }
    else {
      resolved.update_flag = 0
    }

    if (msg.valid_flag !== undefined) {
      resolved.valid_flag = msg.valid_flag;
    }
    else {
      resolved.valid_flag = 0
    }

    if (msg.speed !== undefined) {
      resolved.speed = msg.speed;
    }
    else {
      resolved.speed = 0.0
    }

    if (msg.accelerate !== undefined) {
      resolved.accelerate = msg.accelerate;
    }
    else {
      resolved.accelerate = 0.0
    }

    if (msg.vision_id !== undefined) {
      resolved.vision_id = msg.vision_id;
    }
    else {
      resolved.vision_id = 0
    }

    if (msg.CllsnMtgtnByBrkgPrimQly !== undefined) {
      resolved.CllsnMtgtnByBrkgPrimQly = msg.CllsnMtgtnByBrkgPrimQly;
    }
    else {
      resolved.CllsnMtgtnByBrkgPrimQly = 0
    }

    if (msg.CllsnMtgtnByBrkgSecQly !== undefined) {
      resolved.CllsnMtgtnByBrkgSecQly = msg.CllsnMtgtnByBrkgSecQly;
    }
    else {
      resolved.CllsnMtgtnByBrkgSecQly = 0
    }

    if (msg.EmgyLaneKeepAidPosnQly !== undefined) {
      resolved.EmgyLaneKeepAidPosnQly = msg.EmgyLaneKeepAidPosnQly;
    }
    else {
      resolved.EmgyLaneKeepAidPosnQly = 0
    }

    if (msg.CllsnWarnFwdQly !== undefined) {
      resolved.CllsnWarnFwdQly = msg.CllsnWarnFwdQly;
    }
    else {
      resolved.CllsnWarnFwdQly = 0
    }

    if (msg.fusion_source !== undefined) {
      resolved.fusion_source = msg.fusion_source;
    }
    else {
      resolved.fusion_source = 0
    }

    if (msg.time_stamp !== undefined) {
      resolved.time_stamp = msg.time_stamp;
    }
    else {
      resolved.time_stamp = 0.0
    }

    if (msg.lane_offset_right !== undefined) {
      resolved.lane_offset_right = msg.lane_offset_right;
    }
    else {
      resolved.lane_offset_right = 0.0
    }

    if (msg.lane_offset_right_dev !== undefined) {
      resolved.lane_offset_right_dev = msg.lane_offset_right_dev;
    }
    else {
      resolved.lane_offset_right_dev = 0.0
    }

    if (msg.indicator_state !== undefined) {
      resolved.indicator_state = msg.indicator_state;
    }
    else {
      resolved.indicator_state = 0
    }

    return resolved;
    }
};

// Constants for message
Object.Constants = {
  UNCLASSIFIED: 0,
  UNKNOWN_SMALL: 1,
  UNKNOWN_BIG: 2,
  PEDESTRIAN: 3,
  BIKE: 4,
  CAR: 5,
  TRUCK: 6,
  CLASS_UNKNOWN: 0,
  CLASS_CAR: 1,
  CLASS_TRUCK: 2,
  CLASS_MOTORCYCLE: 3,
  CLASS_CYCLIST: 4,
  CLASS_PEDESTRIAN: 5,
  CLASS_ROAD_BARRIER: 6,
  CLASS_MAX_NUM: 7,
  INDICATOR_UNDEFINED: 0,
  INDICATOR_OFF: 1,
  INDICATOR_RIGHT: 2,
  INDICATOR_LEFT: 3,
  INDICATOR_BOTH: 4,
}

module.exports = Object;
