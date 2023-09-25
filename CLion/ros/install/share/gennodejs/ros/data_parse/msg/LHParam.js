// Auto-generated. Do not edit!

// (in-package data_parse.msg)


"use strict";

const _serializer = _ros_msg_utils.Serialize;
const _arraySerializer = _serializer.Array;
const _deserializer = _ros_msg_utils.Deserialize;
const _arrayDeserializer = _deserializer.Array;
const _finder = _ros_msg_utils.Find;
const _getByteLength = _ros_msg_utils.getByteLength;

//-----------------------------------------------------------

class LHParam {
  constructor(initObj={}) {
    if (initObj === null) {
      // initObj === null is a special case for deserialization where we don't initialize fields
      this.LH_C0 = null;
      this.LH_C1 = null;
      this.LH_C2 = null;
      this.LH_C3 = null;
    }
    else {
      if (initObj.hasOwnProperty('LH_C0')) {
        this.LH_C0 = initObj.LH_C0
      }
      else {
        this.LH_C0 = 0.0;
      }
      if (initObj.hasOwnProperty('LH_C1')) {
        this.LH_C1 = initObj.LH_C1
      }
      else {
        this.LH_C1 = 0.0;
      }
      if (initObj.hasOwnProperty('LH_C2')) {
        this.LH_C2 = initObj.LH_C2
      }
      else {
        this.LH_C2 = 0.0;
      }
      if (initObj.hasOwnProperty('LH_C3')) {
        this.LH_C3 = initObj.LH_C3
      }
      else {
        this.LH_C3 = 0.0;
      }
    }
  }

  static serialize(obj, buffer, bufferOffset) {
    // Serializes a message object of type LHParam
    // Serialize message field [LH_C0]
    bufferOffset = _serializer.float64(obj.LH_C0, buffer, bufferOffset);
    // Serialize message field [LH_C1]
    bufferOffset = _serializer.float64(obj.LH_C1, buffer, bufferOffset);
    // Serialize message field [LH_C2]
    bufferOffset = _serializer.float64(obj.LH_C2, buffer, bufferOffset);
    // Serialize message field [LH_C3]
    bufferOffset = _serializer.float64(obj.LH_C3, buffer, bufferOffset);
    return bufferOffset;
  }

  static deserialize(buffer, bufferOffset=[0]) {
    //deserializes a message object of type LHParam
    let len;
    let data = new LHParam(null);
    // Deserialize message field [LH_C0]
    data.LH_C0 = _deserializer.float64(buffer, bufferOffset);
    // Deserialize message field [LH_C1]
    data.LH_C1 = _deserializer.float64(buffer, bufferOffset);
    // Deserialize message field [LH_C2]
    data.LH_C2 = _deserializer.float64(buffer, bufferOffset);
    // Deserialize message field [LH_C3]
    data.LH_C3 = _deserializer.float64(buffer, bufferOffset);
    return data;
  }

  static getMessageSize(object) {
    return 32;
  }

  static datatype() {
    // Returns string type for a message object
    return 'data_parse/LHParam';
  }

  static md5sum() {
    //Returns md5sum for a message object
    return 'e4226e7fb1ecf4c39595d9d3e9996560';
  }

  static messageDefinition() {
    // Returns full string definition for message
    return `
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
    const resolved = new LHParam(null);
    if (msg.LH_C0 !== undefined) {
      resolved.LH_C0 = msg.LH_C0;
    }
    else {
      resolved.LH_C0 = 0.0
    }

    if (msg.LH_C1 !== undefined) {
      resolved.LH_C1 = msg.LH_C1;
    }
    else {
      resolved.LH_C1 = 0.0
    }

    if (msg.LH_C2 !== undefined) {
      resolved.LH_C2 = msg.LH_C2;
    }
    else {
      resolved.LH_C2 = 0.0
    }

    if (msg.LH_C3 !== undefined) {
      resolved.LH_C3 = msg.LH_C3;
    }
    else {
      resolved.LH_C3 = 0.0
    }

    return resolved;
    }
};

module.exports = LHParam;
