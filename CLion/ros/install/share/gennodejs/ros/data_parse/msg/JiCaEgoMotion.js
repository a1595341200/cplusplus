// Auto-generated. Do not edit!

// (in-package data_parse.msg)


"use strict";

const _serializer = _ros_msg_utils.Serialize;
const _arraySerializer = _serializer.Array;
const _deserializer = _ros_msg_utils.Deserialize;
const _arrayDeserializer = _deserializer.Array;
const _finder = _ros_msg_utils.Find;
const _getByteLength = _ros_msg_utils.getByteLength;
let std_msgs = _finder('std_msgs');

//-----------------------------------------------------------

class JiCaEgoMotion {
  constructor(initObj={}) {
    if (initObj === null) {
      // initObj === null is a special case for deserialization where we don't initialize fields
      this.header = null;
      this.speed = null;
      this.lat_velocity = null;
      this.lgt_velocity = null;
      this.lat_accel = null;
      this.lgt_accel = null;
      this.yaw_rate = null;
      this.PosnLgtDelta = null;
      this.PosnLatDelta = null;
      this.AgDirDelta = null;
      this.avert = null;
      this.roll_rate = null;
      this.time_stamp = null;
    }
    else {
      if (initObj.hasOwnProperty('header')) {
        this.header = initObj.header
      }
      else {
        this.header = new std_msgs.msg.Header();
      }
      if (initObj.hasOwnProperty('speed')) {
        this.speed = initObj.speed
      }
      else {
        this.speed = 0.0;
      }
      if (initObj.hasOwnProperty('lat_velocity')) {
        this.lat_velocity = initObj.lat_velocity
      }
      else {
        this.lat_velocity = 0.0;
      }
      if (initObj.hasOwnProperty('lgt_velocity')) {
        this.lgt_velocity = initObj.lgt_velocity
      }
      else {
        this.lgt_velocity = 0.0;
      }
      if (initObj.hasOwnProperty('lat_accel')) {
        this.lat_accel = initObj.lat_accel
      }
      else {
        this.lat_accel = 0.0;
      }
      if (initObj.hasOwnProperty('lgt_accel')) {
        this.lgt_accel = initObj.lgt_accel
      }
      else {
        this.lgt_accel = 0.0;
      }
      if (initObj.hasOwnProperty('yaw_rate')) {
        this.yaw_rate = initObj.yaw_rate
      }
      else {
        this.yaw_rate = 0.0;
      }
      if (initObj.hasOwnProperty('PosnLgtDelta')) {
        this.PosnLgtDelta = initObj.PosnLgtDelta
      }
      else {
        this.PosnLgtDelta = 0.0;
      }
      if (initObj.hasOwnProperty('PosnLatDelta')) {
        this.PosnLatDelta = initObj.PosnLatDelta
      }
      else {
        this.PosnLatDelta = 0.0;
      }
      if (initObj.hasOwnProperty('AgDirDelta')) {
        this.AgDirDelta = initObj.AgDirDelta
      }
      else {
        this.AgDirDelta = 0.0;
      }
      if (initObj.hasOwnProperty('avert')) {
        this.avert = initObj.avert
      }
      else {
        this.avert = 0.0;
      }
      if (initObj.hasOwnProperty('roll_rate')) {
        this.roll_rate = initObj.roll_rate
      }
      else {
        this.roll_rate = 0.0;
      }
      if (initObj.hasOwnProperty('time_stamp')) {
        this.time_stamp = initObj.time_stamp
      }
      else {
        this.time_stamp = 0.0;
      }
    }
  }

  static serialize(obj, buffer, bufferOffset) {
    // Serializes a message object of type JiCaEgoMotion
    // Serialize message field [header]
    bufferOffset = std_msgs.msg.Header.serialize(obj.header, buffer, bufferOffset);
    // Serialize message field [speed]
    bufferOffset = _serializer.float64(obj.speed, buffer, bufferOffset);
    // Serialize message field [lat_velocity]
    bufferOffset = _serializer.float64(obj.lat_velocity, buffer, bufferOffset);
    // Serialize message field [lgt_velocity]
    bufferOffset = _serializer.float64(obj.lgt_velocity, buffer, bufferOffset);
    // Serialize message field [lat_accel]
    bufferOffset = _serializer.float64(obj.lat_accel, buffer, bufferOffset);
    // Serialize message field [lgt_accel]
    bufferOffset = _serializer.float64(obj.lgt_accel, buffer, bufferOffset);
    // Serialize message field [yaw_rate]
    bufferOffset = _serializer.float64(obj.yaw_rate, buffer, bufferOffset);
    // Serialize message field [PosnLgtDelta]
    bufferOffset = _serializer.float64(obj.PosnLgtDelta, buffer, bufferOffset);
    // Serialize message field [PosnLatDelta]
    bufferOffset = _serializer.float64(obj.PosnLatDelta, buffer, bufferOffset);
    // Serialize message field [AgDirDelta]
    bufferOffset = _serializer.float64(obj.AgDirDelta, buffer, bufferOffset);
    // Serialize message field [avert]
    bufferOffset = _serializer.float64(obj.avert, buffer, bufferOffset);
    // Serialize message field [roll_rate]
    bufferOffset = _serializer.float64(obj.roll_rate, buffer, bufferOffset);
    // Serialize message field [time_stamp]
    bufferOffset = _serializer.float64(obj.time_stamp, buffer, bufferOffset);
    return bufferOffset;
  }

  static deserialize(buffer, bufferOffset=[0]) {
    //deserializes a message object of type JiCaEgoMotion
    let len;
    let data = new JiCaEgoMotion(null);
    // Deserialize message field [header]
    data.header = std_msgs.msg.Header.deserialize(buffer, bufferOffset);
    // Deserialize message field [speed]
    data.speed = _deserializer.float64(buffer, bufferOffset);
    // Deserialize message field [lat_velocity]
    data.lat_velocity = _deserializer.float64(buffer, bufferOffset);
    // Deserialize message field [lgt_velocity]
    data.lgt_velocity = _deserializer.float64(buffer, bufferOffset);
    // Deserialize message field [lat_accel]
    data.lat_accel = _deserializer.float64(buffer, bufferOffset);
    // Deserialize message field [lgt_accel]
    data.lgt_accel = _deserializer.float64(buffer, bufferOffset);
    // Deserialize message field [yaw_rate]
    data.yaw_rate = _deserializer.float64(buffer, bufferOffset);
    // Deserialize message field [PosnLgtDelta]
    data.PosnLgtDelta = _deserializer.float64(buffer, bufferOffset);
    // Deserialize message field [PosnLatDelta]
    data.PosnLatDelta = _deserializer.float64(buffer, bufferOffset);
    // Deserialize message field [AgDirDelta]
    data.AgDirDelta = _deserializer.float64(buffer, bufferOffset);
    // Deserialize message field [avert]
    data.avert = _deserializer.float64(buffer, bufferOffset);
    // Deserialize message field [roll_rate]
    data.roll_rate = _deserializer.float64(buffer, bufferOffset);
    // Deserialize message field [time_stamp]
    data.time_stamp = _deserializer.float64(buffer, bufferOffset);
    return data;
  }

  static getMessageSize(object) {
    let length = 0;
    length += std_msgs.msg.Header.getMessageSize(object.header);
    return length + 96;
  }

  static datatype() {
    // Returns string type for a message object
    return 'data_parse/JiCaEgoMotion';
  }

  static md5sum() {
    //Returns md5sum for a message object
    return '54d9e18c5aea7a54f5520145e95dc662';
  }

  static messageDefinition() {
    // Returns full string definition for message
    return `
    std_msgs/Header header
    
    float64 speed
    float64 lat_velocity
    float64 lgt_velocity
    float64 lat_accel
    float64 lgt_accel
    float64 yaw_rate
    float64 PosnLgtDelta
    float64 PosnLatDelta
    float64 AgDirDelta
    float64 avert
    float64 roll_rate
    float64 time_stamp
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
    
    `;
  }

  static Resolve(msg) {
    // deep-construct a valid message object instance of whatever was passed in
    if (typeof msg !== 'object' || msg === null) {
      msg = {};
    }
    const resolved = new JiCaEgoMotion(null);
    if (msg.header !== undefined) {
      resolved.header = std_msgs.msg.Header.Resolve(msg.header)
    }
    else {
      resolved.header = new std_msgs.msg.Header()
    }

    if (msg.speed !== undefined) {
      resolved.speed = msg.speed;
    }
    else {
      resolved.speed = 0.0
    }

    if (msg.lat_velocity !== undefined) {
      resolved.lat_velocity = msg.lat_velocity;
    }
    else {
      resolved.lat_velocity = 0.0
    }

    if (msg.lgt_velocity !== undefined) {
      resolved.lgt_velocity = msg.lgt_velocity;
    }
    else {
      resolved.lgt_velocity = 0.0
    }

    if (msg.lat_accel !== undefined) {
      resolved.lat_accel = msg.lat_accel;
    }
    else {
      resolved.lat_accel = 0.0
    }

    if (msg.lgt_accel !== undefined) {
      resolved.lgt_accel = msg.lgt_accel;
    }
    else {
      resolved.lgt_accel = 0.0
    }

    if (msg.yaw_rate !== undefined) {
      resolved.yaw_rate = msg.yaw_rate;
    }
    else {
      resolved.yaw_rate = 0.0
    }

    if (msg.PosnLgtDelta !== undefined) {
      resolved.PosnLgtDelta = msg.PosnLgtDelta;
    }
    else {
      resolved.PosnLgtDelta = 0.0
    }

    if (msg.PosnLatDelta !== undefined) {
      resolved.PosnLatDelta = msg.PosnLatDelta;
    }
    else {
      resolved.PosnLatDelta = 0.0
    }

    if (msg.AgDirDelta !== undefined) {
      resolved.AgDirDelta = msg.AgDirDelta;
    }
    else {
      resolved.AgDirDelta = 0.0
    }

    if (msg.avert !== undefined) {
      resolved.avert = msg.avert;
    }
    else {
      resolved.avert = 0.0
    }

    if (msg.roll_rate !== undefined) {
      resolved.roll_rate = msg.roll_rate;
    }
    else {
      resolved.roll_rate = 0.0
    }

    if (msg.time_stamp !== undefined) {
      resolved.time_stamp = msg.time_stamp;
    }
    else {
      resolved.time_stamp = 0.0
    }

    return resolved;
    }
};

module.exports = JiCaEgoMotion;
