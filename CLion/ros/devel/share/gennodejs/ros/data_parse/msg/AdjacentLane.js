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

class AdjacentLane {
  constructor(initObj={}) {
    if (initObj === null) {
      // initObj === null is a special case for deserialization where we don't initialize fields
      this.header = null;
      this.Lanes_Adjacent_Count = null;
      this.Adjacent_Type = null;
      this.Adjacent_Confidence = null;
      this.Adjacent_View_Range_Start = null;
      this.Adjacent_View_Range_End = null;
      this.Adjacent_Line_Role = null;
      this.Adjacent_Line_C = null;
    }
    else {
      if (initObj.hasOwnProperty('header')) {
        this.header = initObj.header
      }
      else {
        this.header = new std_msgs.msg.Header();
      }
      if (initObj.hasOwnProperty('Lanes_Adjacent_Count')) {
        this.Lanes_Adjacent_Count = initObj.Lanes_Adjacent_Count
      }
      else {
        this.Lanes_Adjacent_Count = 0;
      }
      if (initObj.hasOwnProperty('Adjacent_Type')) {
        this.Adjacent_Type = initObj.Adjacent_Type
      }
      else {
        this.Adjacent_Type = 0;
      }
      if (initObj.hasOwnProperty('Adjacent_Confidence')) {
        this.Adjacent_Confidence = initObj.Adjacent_Confidence
      }
      else {
        this.Adjacent_Confidence = 0.0;
      }
      if (initObj.hasOwnProperty('Adjacent_View_Range_Start')) {
        this.Adjacent_View_Range_Start = initObj.Adjacent_View_Range_Start
      }
      else {
        this.Adjacent_View_Range_Start = 0.0;
      }
      if (initObj.hasOwnProperty('Adjacent_View_Range_End')) {
        this.Adjacent_View_Range_End = initObj.Adjacent_View_Range_End
      }
      else {
        this.Adjacent_View_Range_End = 0.0;
      }
      if (initObj.hasOwnProperty('Adjacent_Line_Role')) {
        this.Adjacent_Line_Role = initObj.Adjacent_Line_Role
      }
      else {
        this.Adjacent_Line_Role = 0;
      }
      if (initObj.hasOwnProperty('Adjacent_Line_C')) {
        this.Adjacent_Line_C = initObj.Adjacent_Line_C
      }
      else {
        this.Adjacent_Line_C = new LHParam();
      }
    }
  }

  static serialize(obj, buffer, bufferOffset) {
    // Serializes a message object of type AdjacentLane
    // Serialize message field [header]
    bufferOffset = std_msgs.msg.Header.serialize(obj.header, buffer, bufferOffset);
    // Serialize message field [Lanes_Adjacent_Count]
    bufferOffset = _serializer.uint8(obj.Lanes_Adjacent_Count, buffer, bufferOffset);
    // Serialize message field [Adjacent_Type]
    bufferOffset = _serializer.uint8(obj.Adjacent_Type, buffer, bufferOffset);
    // Serialize message field [Adjacent_Confidence]
    bufferOffset = _serializer.float64(obj.Adjacent_Confidence, buffer, bufferOffset);
    // Serialize message field [Adjacent_View_Range_Start]
    bufferOffset = _serializer.float64(obj.Adjacent_View_Range_Start, buffer, bufferOffset);
    // Serialize message field [Adjacent_View_Range_End]
    bufferOffset = _serializer.float64(obj.Adjacent_View_Range_End, buffer, bufferOffset);
    // Serialize message field [Adjacent_Line_Role]
    bufferOffset = _serializer.uint8(obj.Adjacent_Line_Role, buffer, bufferOffset);
    // Serialize message field [Adjacent_Line_C]
    bufferOffset = LHParam.serialize(obj.Adjacent_Line_C, buffer, bufferOffset);
    return bufferOffset;
  }

  static deserialize(buffer, bufferOffset=[0]) {
    //deserializes a message object of type AdjacentLane
    let len;
    let data = new AdjacentLane(null);
    // Deserialize message field [header]
    data.header = std_msgs.msg.Header.deserialize(buffer, bufferOffset);
    // Deserialize message field [Lanes_Adjacent_Count]
    data.Lanes_Adjacent_Count = _deserializer.uint8(buffer, bufferOffset);
    // Deserialize message field [Adjacent_Type]
    data.Adjacent_Type = _deserializer.uint8(buffer, bufferOffset);
    // Deserialize message field [Adjacent_Confidence]
    data.Adjacent_Confidence = _deserializer.float64(buffer, bufferOffset);
    // Deserialize message field [Adjacent_View_Range_Start]
    data.Adjacent_View_Range_Start = _deserializer.float64(buffer, bufferOffset);
    // Deserialize message field [Adjacent_View_Range_End]
    data.Adjacent_View_Range_End = _deserializer.float64(buffer, bufferOffset);
    // Deserialize message field [Adjacent_Line_Role]
    data.Adjacent_Line_Role = _deserializer.uint8(buffer, bufferOffset);
    // Deserialize message field [Adjacent_Line_C]
    data.Adjacent_Line_C = LHParam.deserialize(buffer, bufferOffset);
    return data;
  }

  static getMessageSize(object) {
    let length = 0;
    length += std_msgs.msg.Header.getMessageSize(object.header);
    return length + 59;
  }

  static datatype() {
    // Returns string type for a message object
    return 'data_parse/AdjacentLane';
  }

  static md5sum() {
    //Returns md5sum for a message object
    return '58e1312381e41b759ad9062603e465e3';
  }

  static messageDefinition() {
    // Returns full string definition for message
    return `
    std_msgs/Header header
    
    uint8 Lanes_Adjacent_Count
    # enum
    uint8 Adjacent_Type
    uint8 UNDECIDED = 0
    uint8 SOLID = 1
    uint8 DASHED = 2
    uint8 DLM = 3 
    uint8 BOTTS = 4
    uint8 DECELERATION = 5
    uint8 HOV_LANE = 6
    
    float64 Adjacent_Confidence
    float64 Adjacent_View_Range_Start
    float64 Adjacent_View_Range_End
    
    # enum
    uint8 Adjacent_Line_Role
    uint8 NONE = 0
    uint8 LEFT__LEFT_LANEMARK = 1
    uint8 LEFT__RIGHT_LANEMARK = 2
    uint8 RIGHT__LEFT_LANEMARK = 3
    uint8 RIGHT__RIGHT_LANEMARK = 4
    
    LHParam Adjacent_Line_C
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
    const resolved = new AdjacentLane(null);
    if (msg.header !== undefined) {
      resolved.header = std_msgs.msg.Header.Resolve(msg.header)
    }
    else {
      resolved.header = new std_msgs.msg.Header()
    }

    if (msg.Lanes_Adjacent_Count !== undefined) {
      resolved.Lanes_Adjacent_Count = msg.Lanes_Adjacent_Count;
    }
    else {
      resolved.Lanes_Adjacent_Count = 0
    }

    if (msg.Adjacent_Type !== undefined) {
      resolved.Adjacent_Type = msg.Adjacent_Type;
    }
    else {
      resolved.Adjacent_Type = 0
    }

    if (msg.Adjacent_Confidence !== undefined) {
      resolved.Adjacent_Confidence = msg.Adjacent_Confidence;
    }
    else {
      resolved.Adjacent_Confidence = 0.0
    }

    if (msg.Adjacent_View_Range_Start !== undefined) {
      resolved.Adjacent_View_Range_Start = msg.Adjacent_View_Range_Start;
    }
    else {
      resolved.Adjacent_View_Range_Start = 0.0
    }

    if (msg.Adjacent_View_Range_End !== undefined) {
      resolved.Adjacent_View_Range_End = msg.Adjacent_View_Range_End;
    }
    else {
      resolved.Adjacent_View_Range_End = 0.0
    }

    if (msg.Adjacent_Line_Role !== undefined) {
      resolved.Adjacent_Line_Role = msg.Adjacent_Line_Role;
    }
    else {
      resolved.Adjacent_Line_Role = 0
    }

    if (msg.Adjacent_Line_C !== undefined) {
      resolved.Adjacent_Line_C = LHParam.Resolve(msg.Adjacent_Line_C)
    }
    else {
      resolved.Adjacent_Line_C = new LHParam()
    }

    return resolved;
    }
};

// Constants for message
AdjacentLane.Constants = {
  UNDECIDED: 0,
  SOLID: 1,
  DASHED: 2,
  DLM: 3,
  BOTTS: 4,
  DECELERATION: 5,
  HOV_LANE: 6,
  NONE: 0,
  LEFT__LEFT_LANEMARK: 1,
  LEFT__RIGHT_LANEMARK: 2,
  RIGHT__LEFT_LANEMARK: 3,
  RIGHT__RIGHT_LANEMARK: 4,
}

module.exports = AdjacentLane;
