// Auto-generated. Do not edit!

// (in-package data_parse.msg)


"use strict";

const _serializer = _ros_msg_utils.Serialize;
const _arraySerializer = _serializer.Array;
const _deserializer = _ros_msg_utils.Deserialize;
const _arrayDeserializer = _deserializer.Array;
const _finder = _ros_msg_utils.Find;
const _getByteLength = _ros_msg_utils.getByteLength;
let AdjacentLane = require('./AdjacentLane.js');
let std_msgs = _finder('std_msgs');

//-----------------------------------------------------------

class AdjacentLaneFrame {
  constructor(initObj={}) {
    if (initObj === null) {
      // initObj === null is a special case for deserialization where we don't initialize fields
      this.header = null;
      this.adject_lanes = null;
    }
    else {
      if (initObj.hasOwnProperty('header')) {
        this.header = initObj.header
      }
      else {
        this.header = new std_msgs.msg.Header();
      }
      if (initObj.hasOwnProperty('adject_lanes')) {
        this.adject_lanes = initObj.adject_lanes
      }
      else {
        this.adject_lanes = [];
      }
    }
  }

  static serialize(obj, buffer, bufferOffset) {
    // Serializes a message object of type AdjacentLaneFrame
    // Serialize message field [header]
    bufferOffset = std_msgs.msg.Header.serialize(obj.header, buffer, bufferOffset);
    // Serialize message field [adject_lanes]
    // Serialize the length for message field [adject_lanes]
    bufferOffset = _serializer.uint32(obj.adject_lanes.length, buffer, bufferOffset);
    obj.adject_lanes.forEach((val) => {
      bufferOffset = AdjacentLane.serialize(val, buffer, bufferOffset);
    });
    return bufferOffset;
  }

  static deserialize(buffer, bufferOffset=[0]) {
    //deserializes a message object of type AdjacentLaneFrame
    let len;
    let data = new AdjacentLaneFrame(null);
    // Deserialize message field [header]
    data.header = std_msgs.msg.Header.deserialize(buffer, bufferOffset);
    // Deserialize message field [adject_lanes]
    // Deserialize array length for message field [adject_lanes]
    len = _deserializer.uint32(buffer, bufferOffset);
    data.adject_lanes = new Array(len);
    for (let i = 0; i < len; ++i) {
      data.adject_lanes[i] = AdjacentLane.deserialize(buffer, bufferOffset)
    }
    return data;
  }

  static getMessageSize(object) {
    let length = 0;
    length += std_msgs.msg.Header.getMessageSize(object.header);
    object.adject_lanes.forEach((val) => {
      length += AdjacentLane.getMessageSize(val);
    });
    return length + 4;
  }

  static datatype() {
    // Returns string type for a message object
    return 'data_parse/AdjacentLaneFrame';
  }

  static md5sum() {
    //Returns md5sum for a message object
    return 'bdfb3c3ee954044143731d5348c7d930';
  }

  static messageDefinition() {
    // Returns full string definition for message
    return `
    std_msgs/Header header
    
    AdjacentLane[] adject_lanes
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
    MSG: data_parse/AdjacentLane
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
    const resolved = new AdjacentLaneFrame(null);
    if (msg.header !== undefined) {
      resolved.header = std_msgs.msg.Header.Resolve(msg.header)
    }
    else {
      resolved.header = new std_msgs.msg.Header()
    }

    if (msg.adject_lanes !== undefined) {
      resolved.adject_lanes = new Array(msg.adject_lanes.length);
      for (let i = 0; i < resolved.adject_lanes.length; ++i) {
        resolved.adject_lanes[i] = AdjacentLane.Resolve(msg.adject_lanes[i]);
      }
    }
    else {
      resolved.adject_lanes = []
    }

    return resolved;
    }
};

module.exports = AdjacentLaneFrame;
