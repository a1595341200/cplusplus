// Auto-generated. Do not edit!

// (in-package data_parse.msg)


"use strict";

const _serializer = _ros_msg_utils.Serialize;
const _arraySerializer = _serializer.Array;
const _deserializer = _ros_msg_utils.Deserialize;
const _arrayDeserializer = _deserializer.Array;
const _finder = _ros_msg_utils.Find;
const _getByteLength = _ros_msg_utils.getByteLength;
let LHParam = require('./LHParam.js');
let std_msgs = _finder('std_msgs');

//-----------------------------------------------------------

class EgoLane {
  constructor(initObj={}) {
    if (initObj === null) {
      // initObj === null is a special case for deserialization where we don't initialize fields
      this.header = null;
      this.Is_Construction_Area = null;
      this.LH_Confidence = null;
      this.LH_Lanemark_Type = null;
      this.LH_Side = null;
      this.LH_VR_Start = null;
      this.LH_VR_End = null;
      this.LH_C = null;
    }
    else {
      if (initObj.hasOwnProperty('header')) {
        this.header = initObj.header
      }
      else {
        this.header = new std_msgs.msg.Header();
      }
      if (initObj.hasOwnProperty('Is_Construction_Area')) {
        this.Is_Construction_Area = initObj.Is_Construction_Area
      }
      else {
        this.Is_Construction_Area = false;
      }
      if (initObj.hasOwnProperty('LH_Confidence')) {
        this.LH_Confidence = initObj.LH_Confidence
      }
      else {
        this.LH_Confidence = 0.0;
      }
      if (initObj.hasOwnProperty('LH_Lanemark_Type')) {
        this.LH_Lanemark_Type = initObj.LH_Lanemark_Type
      }
      else {
        this.LH_Lanemark_Type = 0;
      }
      if (initObj.hasOwnProperty('LH_Side')) {
        this.LH_Side = initObj.LH_Side
      }
      else {
        this.LH_Side = 0;
      }
      if (initObj.hasOwnProperty('LH_VR_Start')) {
        this.LH_VR_Start = initObj.LH_VR_Start
      }
      else {
        this.LH_VR_Start = 0.0;
      }
      if (initObj.hasOwnProperty('LH_VR_End')) {
        this.LH_VR_End = initObj.LH_VR_End
      }
      else {
        this.LH_VR_End = 0.0;
      }
      if (initObj.hasOwnProperty('LH_C')) {
        this.LH_C = initObj.LH_C
      }
      else {
        this.LH_C = new LHParam();
      }
    }
  }

  static serialize(obj, buffer, bufferOffset) {
    // Serializes a message object of type EgoLane
    // Serialize message field [header]
    bufferOffset = std_msgs.msg.Header.serialize(obj.header, buffer, bufferOffset);
    // Serialize message field [Is_Construction_Area]
    bufferOffset = _serializer.bool(obj.Is_Construction_Area, buffer, bufferOffset);
    // Serialize message field [LH_Confidence]
    bufferOffset = _serializer.float64(obj.LH_Confidence, buffer, bufferOffset);
    // Serialize message field [LH_Lanemark_Type]
    bufferOffset = _serializer.uint8(obj.LH_Lanemark_Type, buffer, bufferOffset);
    // Serialize message field [LH_Side]
    bufferOffset = _serializer.uint8(obj.LH_Side, buffer, bufferOffset);
    // Serialize message field [LH_VR_Start]
    bufferOffset = _serializer.float64(obj.LH_VR_Start, buffer, bufferOffset);
    // Serialize message field [LH_VR_End]
    bufferOffset = _serializer.float64(obj.LH_VR_End, buffer, bufferOffset);
    // Serialize message field [LH_C]
    bufferOffset = LHParam.serialize(obj.LH_C, buffer, bufferOffset);
    return bufferOffset;
  }

  static deserialize(buffer, bufferOffset=[0]) {
    //deserializes a message object of type EgoLane
    let len;
    let data = new EgoLane(null);
    // Deserialize message field [header]
    data.header = std_msgs.msg.Header.deserialize(buffer, bufferOffset);
    // Deserialize message field [Is_Construction_Area]
    data.Is_Construction_Area = _deserializer.bool(buffer, bufferOffset);
    // Deserialize message field [LH_Confidence]
    data.LH_Confidence = _deserializer.float64(buffer, bufferOffset);
    // Deserialize message field [LH_Lanemark_Type]
    data.LH_Lanemark_Type = _deserializer.uint8(buffer, bufferOffset);
    // Deserialize message field [LH_Side]
    data.LH_Side = _deserializer.uint8(buffer, bufferOffset);
    // Deserialize message field [LH_VR_Start]
    data.LH_VR_Start = _deserializer.float64(buffer, bufferOffset);
    // Deserialize message field [LH_VR_End]
    data.LH_VR_End = _deserializer.float64(buffer, bufferOffset);
    // Deserialize message field [LH_C]
    data.LH_C = LHParam.deserialize(buffer, bufferOffset);
    return data;
  }

  static getMessageSize(object) {
    let length = 0;
    length += std_msgs.msg.Header.getMessageSize(object.header);
    return length + 59;
  }

  static datatype() {
    // Returns string type for a message object
    return 'data_parse/EgoLane';
  }

  static md5sum() {
    //Returns md5sum for a message object
    return 'c853a0afe8c4bc08d024aa3177156a39';
  }

  static messageDefinition() {
    // Returns full string definition for message
    return `
    std_msgs/Header header
    
    bool Is_Construction_Area
    
    float64 LH_Confidence
    
    # enum
    uint8 LH_Lanemark_Type 
    uint8 UNDECIDED = 0
    uint8 SOLID = 1
    uint8 DASHED = 2
    uint8 DLM = 3 
    uint8 BOTTS = 4
    uint8 DECELERATION = 5
    uint8 HOV_LANE = 6
    
    # enum
    uint8 LH_Side
    uint8 UNKNOWN = 0
    uint8 LEFT = 1
    uint8 RIGHT = 2
    
    float64 LH_VR_Start
    float64 LH_VR_End
    
    LHParam LH_C
    
    
    
    
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
    MSG: data_parse/LHParam
    float64 LH_C0
    float64 LH_C1
    float64 LH_C2
    float64 LH_C3
    `;
  }

  static Resolve(msg) {
    // deep-construct a valid message object instance of whatever was passed in
    if (typeof msg !== 'object' || msg === null) {
      msg = {};
    }
    const resolved = new EgoLane(null);
    if (msg.header !== undefined) {
      resolved.header = std_msgs.msg.Header.Resolve(msg.header)
    }
    else {
      resolved.header = new std_msgs.msg.Header()
    }

    if (msg.Is_Construction_Area !== undefined) {
      resolved.Is_Construction_Area = msg.Is_Construction_Area;
    }
    else {
      resolved.Is_Construction_Area = false
    }

    if (msg.LH_Confidence !== undefined) {
      resolved.LH_Confidence = msg.LH_Confidence;
    }
    else {
      resolved.LH_Confidence = 0.0
    }

    if (msg.LH_Lanemark_Type !== undefined) {
      resolved.LH_Lanemark_Type = msg.LH_Lanemark_Type;
    }
    else {
      resolved.LH_Lanemark_Type = 0
    }

    if (msg.LH_Side !== undefined) {
      resolved.LH_Side = msg.LH_Side;
    }
    else {
      resolved.LH_Side = 0
    }

    if (msg.LH_VR_Start !== undefined) {
      resolved.LH_VR_Start = msg.LH_VR_Start;
    }
    else {
      resolved.LH_VR_Start = 0.0
    }

    if (msg.LH_VR_End !== undefined) {
      resolved.LH_VR_End = msg.LH_VR_End;
    }
    else {
      resolved.LH_VR_End = 0.0
    }

    if (msg.LH_C !== undefined) {
      resolved.LH_C = LHParam.Resolve(msg.LH_C)
    }
    else {
      resolved.LH_C = new LHParam()
    }

    return resolved;
    }
};

// Constants for message
EgoLane.Constants = {
  UNDECIDED: 0,
  SOLID: 1,
  DASHED: 2,
  DLM: 3,
  BOTTS: 4,
  DECELERATION: 5,
  HOV_LANE: 6,
  UNKNOWN: 0,
  LEFT: 1,
  RIGHT: 2,
}

module.exports = EgoLane;
