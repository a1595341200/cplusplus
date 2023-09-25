// Auto-generated. Do not edit!

// (in-package data_parse.msg)


"use strict";

const _serializer = _ros_msg_utils.Serialize;
const _arraySerializer = _serializer.Array;
const _deserializer = _ros_msg_utils.Deserialize;
const _arrayDeserializer = _deserializer.Array;
const _finder = _ros_msg_utils.Find;
const _getByteLength = _ros_msg_utils.getByteLength;
let SensorFovData = require('./SensorFovData.js');
let std_msgs = _finder('std_msgs');

//-----------------------------------------------------------

class SensorFovList {
  constructor(initObj={}) {
    if (initObj === null) {
      // initObj === null is a special case for deserialization where we don't initialize fields
      this.header = null;
      this.sensor_fov_list = null;
    }
    else {
      if (initObj.hasOwnProperty('header')) {
        this.header = initObj.header
      }
      else {
        this.header = new std_msgs.msg.Header();
      }
      if (initObj.hasOwnProperty('sensor_fov_list')) {
        this.sensor_fov_list = initObj.sensor_fov_list
      }
      else {
        this.sensor_fov_list = [];
      }
    }
  }

  static serialize(obj, buffer, bufferOffset) {
    // Serializes a message object of type SensorFovList
    // Serialize message field [header]
    bufferOffset = std_msgs.msg.Header.serialize(obj.header, buffer, bufferOffset);
    // Serialize message field [sensor_fov_list]
    // Serialize the length for message field [sensor_fov_list]
    bufferOffset = _serializer.uint32(obj.sensor_fov_list.length, buffer, bufferOffset);
    obj.sensor_fov_list.forEach((val) => {
      bufferOffset = SensorFovData.serialize(val, buffer, bufferOffset);
    });
    return bufferOffset;
  }

  static deserialize(buffer, bufferOffset=[0]) {
    //deserializes a message object of type SensorFovList
    let len;
    let data = new SensorFovList(null);
    // Deserialize message field [header]
    data.header = std_msgs.msg.Header.deserialize(buffer, bufferOffset);
    // Deserialize message field [sensor_fov_list]
    // Deserialize array length for message field [sensor_fov_list]
    len = _deserializer.uint32(buffer, bufferOffset);
    data.sensor_fov_list = new Array(len);
    for (let i = 0; i < len; ++i) {
      data.sensor_fov_list[i] = SensorFovData.deserialize(buffer, bufferOffset)
    }
    return data;
  }

  static getMessageSize(object) {
    let length = 0;
    length += std_msgs.msg.Header.getMessageSize(object.header);
    length += 41 * object.sensor_fov_list.length;
    return length + 4;
  }

  static datatype() {
    // Returns string type for a message object
    return 'data_parse/SensorFovList';
  }

  static md5sum() {
    //Returns md5sum for a message object
    return 'b098137c9a7ca98e3e4f0e068c13d0bd';
  }

  static messageDefinition() {
    // Returns full string definition for message
    return `
    ################################################################################
    #
    # Sensor Fov List
    #
    # Description:
    #   Interface for a list of sensor fov data
    #
    ################################################################################
    
    # ROS Header
    Header header
    
    # List of sensor fov data
    SensorFovData[] sensor_fov_list
    
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
    MSG: data_parse/SensorFovData
    ################################################################################
    #
    # Sensor Fov Data
    #
    # Description:
    #   Interface for describing the fov of a sensor, normally we use circle sector
    #   to decribe the field of view of sensor data
    #
    #
    #
    ################################################################################
    
    # device id
    uint8 device_id
    
    # [m] the position based on the ego_rear_axis
    geometry_msgs/Vector3 position
    
    # [rad] the opening angle of the sensor view
    float32 opening_angle
    
    # [rad] the yaw angle of the sensor based on the x axis of ego_rear_axis
    float32 yaw_angle
    
    # [m] minimum range of sensor detection in meter
    # normally the close blind spot distance of this sensor
    float32 min_range
    
    # [m] max range of sensor detection in meter
    float32 max_range
    
    
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
    const resolved = new SensorFovList(null);
    if (msg.header !== undefined) {
      resolved.header = std_msgs.msg.Header.Resolve(msg.header)
    }
    else {
      resolved.header = new std_msgs.msg.Header()
    }

    if (msg.sensor_fov_list !== undefined) {
      resolved.sensor_fov_list = new Array(msg.sensor_fov_list.length);
      for (let i = 0; i < resolved.sensor_fov_list.length; ++i) {
        resolved.sensor_fov_list[i] = SensorFovData.Resolve(msg.sensor_fov_list[i]);
      }
    }
    else {
      resolved.sensor_fov_list = []
    }

    return resolved;
    }
};

module.exports = SensorFovList;
