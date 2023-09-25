; Auto-generated. Do not edit!


(cl:in-package data_parse-msg)


;//! \htmlinclude SensorFovList.msg.html

(cl:defclass <SensorFovList> (roslisp-msg-protocol:ros-message)
  ((header
    :reader header
    :initarg :header
    :type std_msgs-msg:Header
    :initform (cl:make-instance 'std_msgs-msg:Header))
   (sensor_fov_list
    :reader sensor_fov_list
    :initarg :sensor_fov_list
    :type (cl:vector data_parse-msg:SensorFovData)
   :initform (cl:make-array 0 :element-type 'data_parse-msg:SensorFovData :initial-element (cl:make-instance 'data_parse-msg:SensorFovData))))
)

(cl:defclass SensorFovList (<SensorFovList>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <SensorFovList>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'SensorFovList)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name data_parse-msg:<SensorFovList> is deprecated: use data_parse-msg:SensorFovList instead.")))

(cl:ensure-generic-function 'header-val :lambda-list '(m))
(cl:defmethod header-val ((m <SensorFovList>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader data_parse-msg:header-val is deprecated.  Use data_parse-msg:header instead.")
  (header m))

(cl:ensure-generic-function 'sensor_fov_list-val :lambda-list '(m))
(cl:defmethod sensor_fov_list-val ((m <SensorFovList>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader data_parse-msg:sensor_fov_list-val is deprecated.  Use data_parse-msg:sensor_fov_list instead.")
  (sensor_fov_list m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <SensorFovList>) ostream)
  "Serializes a message object of type '<SensorFovList>"
  (roslisp-msg-protocol:serialize (cl:slot-value msg 'header) ostream)
  (cl:let ((__ros_arr_len (cl:length (cl:slot-value msg 'sensor_fov_list))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) __ros_arr_len) ostream))
  (cl:map cl:nil #'(cl:lambda (ele) (roslisp-msg-protocol:serialize ele ostream))
   (cl:slot-value msg 'sensor_fov_list))
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <SensorFovList>) istream)
  "Deserializes a message object of type '<SensorFovList>"
  (roslisp-msg-protocol:deserialize (cl:slot-value msg 'header) istream)
  (cl:let ((__ros_arr_len 0))
    (cl:setf (cl:ldb (cl:byte 8 0) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 8) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 16) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 24) __ros_arr_len) (cl:read-byte istream))
  (cl:setf (cl:slot-value msg 'sensor_fov_list) (cl:make-array __ros_arr_len))
  (cl:let ((vals (cl:slot-value msg 'sensor_fov_list)))
    (cl:dotimes (i __ros_arr_len)
    (cl:setf (cl:aref vals i) (cl:make-instance 'data_parse-msg:SensorFovData))
  (roslisp-msg-protocol:deserialize (cl:aref vals i) istream))))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<SensorFovList>)))
  "Returns string type for a message object of type '<SensorFovList>"
  "data_parse/SensorFovList")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'SensorFovList)))
  "Returns string type for a message object of type 'SensorFovList"
  "data_parse/SensorFovList")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<SensorFovList>)))
  "Returns md5sum for a message object of type '<SensorFovList>"
  "b098137c9a7ca98e3e4f0e068c13d0bd")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'SensorFovList)))
  "Returns md5sum for a message object of type 'SensorFovList"
  "b098137c9a7ca98e3e4f0e068c13d0bd")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<SensorFovList>)))
  "Returns full string definition for message of type '<SensorFovList>"
  (cl:format cl:nil "################################################################################~%#~%# Sensor Fov List~%#~%# Description:~%#   Interface for a list of sensor fov data~%#~%################################################################################~%~%# ROS Header~%Header header~%~%# List of sensor fov data~%SensorFovData[] sensor_fov_list~%~%================================================================================~%MSG: std_msgs/Header~%# Standard metadata for higher-level stamped data types.~%# This is generally used to communicate timestamped data ~%# in a particular coordinate frame.~%# ~%# sequence ID: consecutively increasing ID ~%uint32 seq~%#Two-integer timestamp that is expressed as:~%# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')~%# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')~%# time-handling sugar is provided by the client library~%time stamp~%#Frame this data is associated with~%string frame_id~%~%================================================================================~%MSG: data_parse/SensorFovData~%################################################################################~%#~%# Sensor Fov Data~%#~%# Description:~%#   Interface for describing the fov of a sensor, normally we use circle sector~%#   to decribe the field of view of sensor data~%#~%#~%#~%################################################################################~%~%# device id~%uint8 device_id~%~%# [m] the position based on the ego_rear_axis~%geometry_msgs/Vector3 position~%~%# [rad] the opening angle of the sensor view~%float32 opening_angle~%~%# [rad] the yaw angle of the sensor based on the x axis of ego_rear_axis~%float32 yaw_angle~%~%# [m] minimum range of sensor detection in meter~%# normally the close blind spot distance of this sensor~%float32 min_range~%~%# [m] max range of sensor detection in meter~%float32 max_range~%~%~%================================================================================~%MSG: geometry_msgs/Vector3~%# This represents a vector in free space. ~%# It is only meant to represent a direction. Therefore, it does not~%# make sense to apply a translation to it (e.g., when applying a ~%# generic rigid transformation to a Vector3, tf2 will only apply the~%# rotation). If you want your data to be translatable too, use the~%# geometry_msgs/Point message instead.~%~%float64 x~%float64 y~%float64 z~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'SensorFovList)))
  "Returns full string definition for message of type 'SensorFovList"
  (cl:format cl:nil "################################################################################~%#~%# Sensor Fov List~%#~%# Description:~%#   Interface for a list of sensor fov data~%#~%################################################################################~%~%# ROS Header~%Header header~%~%# List of sensor fov data~%SensorFovData[] sensor_fov_list~%~%================================================================================~%MSG: std_msgs/Header~%# Standard metadata for higher-level stamped data types.~%# This is generally used to communicate timestamped data ~%# in a particular coordinate frame.~%# ~%# sequence ID: consecutively increasing ID ~%uint32 seq~%#Two-integer timestamp that is expressed as:~%# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')~%# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')~%# time-handling sugar is provided by the client library~%time stamp~%#Frame this data is associated with~%string frame_id~%~%================================================================================~%MSG: data_parse/SensorFovData~%################################################################################~%#~%# Sensor Fov Data~%#~%# Description:~%#   Interface for describing the fov of a sensor, normally we use circle sector~%#   to decribe the field of view of sensor data~%#~%#~%#~%################################################################################~%~%# device id~%uint8 device_id~%~%# [m] the position based on the ego_rear_axis~%geometry_msgs/Vector3 position~%~%# [rad] the opening angle of the sensor view~%float32 opening_angle~%~%# [rad] the yaw angle of the sensor based on the x axis of ego_rear_axis~%float32 yaw_angle~%~%# [m] minimum range of sensor detection in meter~%# normally the close blind spot distance of this sensor~%float32 min_range~%~%# [m] max range of sensor detection in meter~%float32 max_range~%~%~%================================================================================~%MSG: geometry_msgs/Vector3~%# This represents a vector in free space. ~%# It is only meant to represent a direction. Therefore, it does not~%# make sense to apply a translation to it (e.g., when applying a ~%# generic rigid transformation to a Vector3, tf2 will only apply the~%# rotation). If you want your data to be translatable too, use the~%# geometry_msgs/Point message instead.~%~%float64 x~%float64 y~%float64 z~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <SensorFovList>))
  (cl:+ 0
     (roslisp-msg-protocol:serialization-length (cl:slot-value msg 'header))
     4 (cl:reduce #'cl:+ (cl:slot-value msg 'sensor_fov_list) :key #'(cl:lambda (ele) (cl:declare (cl:ignorable ele)) (cl:+ (roslisp-msg-protocol:serialization-length ele))))
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <SensorFovList>))
  "Converts a ROS message object to a list"
  (cl:list 'SensorFovList
    (cl:cons ':header (header msg))
    (cl:cons ':sensor_fov_list (sensor_fov_list msg))
))
