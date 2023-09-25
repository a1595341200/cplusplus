; Auto-generated. Do not edit!


(cl:in-package data_parse-msg)


;//! \htmlinclude SensorFovData.msg.html

(cl:defclass <SensorFovData> (roslisp-msg-protocol:ros-message)
  ((device_id
    :reader device_id
    :initarg :device_id
    :type cl:fixnum
    :initform 0)
   (position
    :reader position
    :initarg :position
    :type geometry_msgs-msg:Vector3
    :initform (cl:make-instance 'geometry_msgs-msg:Vector3))
   (opening_angle
    :reader opening_angle
    :initarg :opening_angle
    :type cl:float
    :initform 0.0)
   (yaw_angle
    :reader yaw_angle
    :initarg :yaw_angle
    :type cl:float
    :initform 0.0)
   (min_range
    :reader min_range
    :initarg :min_range
    :type cl:float
    :initform 0.0)
   (max_range
    :reader max_range
    :initarg :max_range
    :type cl:float
    :initform 0.0))
)

(cl:defclass SensorFovData (<SensorFovData>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <SensorFovData>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'SensorFovData)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name data_parse-msg:<SensorFovData> is deprecated: use data_parse-msg:SensorFovData instead.")))

(cl:ensure-generic-function 'device_id-val :lambda-list '(m))
(cl:defmethod device_id-val ((m <SensorFovData>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader data_parse-msg:device_id-val is deprecated.  Use data_parse-msg:device_id instead.")
  (device_id m))

(cl:ensure-generic-function 'position-val :lambda-list '(m))
(cl:defmethod position-val ((m <SensorFovData>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader data_parse-msg:position-val is deprecated.  Use data_parse-msg:position instead.")
  (position m))

(cl:ensure-generic-function 'opening_angle-val :lambda-list '(m))
(cl:defmethod opening_angle-val ((m <SensorFovData>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader data_parse-msg:opening_angle-val is deprecated.  Use data_parse-msg:opening_angle instead.")
  (opening_angle m))

(cl:ensure-generic-function 'yaw_angle-val :lambda-list '(m))
(cl:defmethod yaw_angle-val ((m <SensorFovData>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader data_parse-msg:yaw_angle-val is deprecated.  Use data_parse-msg:yaw_angle instead.")
  (yaw_angle m))

(cl:ensure-generic-function 'min_range-val :lambda-list '(m))
(cl:defmethod min_range-val ((m <SensorFovData>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader data_parse-msg:min_range-val is deprecated.  Use data_parse-msg:min_range instead.")
  (min_range m))

(cl:ensure-generic-function 'max_range-val :lambda-list '(m))
(cl:defmethod max_range-val ((m <SensorFovData>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader data_parse-msg:max_range-val is deprecated.  Use data_parse-msg:max_range instead.")
  (max_range m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <SensorFovData>) ostream)
  "Serializes a message object of type '<SensorFovData>"
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'device_id)) ostream)
  (roslisp-msg-protocol:serialize (cl:slot-value msg 'position) ostream)
  (cl:let ((bits (roslisp-utils:encode-single-float-bits (cl:slot-value msg 'opening_angle))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream))
  (cl:let ((bits (roslisp-utils:encode-single-float-bits (cl:slot-value msg 'yaw_angle))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream))
  (cl:let ((bits (roslisp-utils:encode-single-float-bits (cl:slot-value msg 'min_range))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream))
  (cl:let ((bits (roslisp-utils:encode-single-float-bits (cl:slot-value msg 'max_range))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream))
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <SensorFovData>) istream)
  "Deserializes a message object of type '<SensorFovData>"
    (cl:setf (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'device_id)) (cl:read-byte istream))
  (roslisp-msg-protocol:deserialize (cl:slot-value msg 'position) istream)
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'opening_angle) (roslisp-utils:decode-single-float-bits bits)))
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'yaw_angle) (roslisp-utils:decode-single-float-bits bits)))
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'min_range) (roslisp-utils:decode-single-float-bits bits)))
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'max_range) (roslisp-utils:decode-single-float-bits bits)))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<SensorFovData>)))
  "Returns string type for a message object of type '<SensorFovData>"
  "data_parse/SensorFovData")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'SensorFovData)))
  "Returns string type for a message object of type 'SensorFovData"
  "data_parse/SensorFovData")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<SensorFovData>)))
  "Returns md5sum for a message object of type '<SensorFovData>"
  "88971566923de10830fbfe5ef523b0e0")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'SensorFovData)))
  "Returns md5sum for a message object of type 'SensorFovData"
  "88971566923de10830fbfe5ef523b0e0")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<SensorFovData>)))
  "Returns full string definition for message of type '<SensorFovData>"
  (cl:format cl:nil "################################################################################~%#~%# Sensor Fov Data~%#~%# Description:~%#   Interface for describing the fov of a sensor, normally we use circle sector~%#   to decribe the field of view of sensor data~%#~%#~%#~%################################################################################~%~%# device id~%uint8 device_id~%~%# [m] the position based on the ego_rear_axis~%geometry_msgs/Vector3 position~%~%# [rad] the opening angle of the sensor view~%float32 opening_angle~%~%# [rad] the yaw angle of the sensor based on the x axis of ego_rear_axis~%float32 yaw_angle~%~%# [m] minimum range of sensor detection in meter~%# normally the close blind spot distance of this sensor~%float32 min_range~%~%# [m] max range of sensor detection in meter~%float32 max_range~%~%~%================================================================================~%MSG: geometry_msgs/Vector3~%# This represents a vector in free space. ~%# It is only meant to represent a direction. Therefore, it does not~%# make sense to apply a translation to it (e.g., when applying a ~%# generic rigid transformation to a Vector3, tf2 will only apply the~%# rotation). If you want your data to be translatable too, use the~%# geometry_msgs/Point message instead.~%~%float64 x~%float64 y~%float64 z~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'SensorFovData)))
  "Returns full string definition for message of type 'SensorFovData"
  (cl:format cl:nil "################################################################################~%#~%# Sensor Fov Data~%#~%# Description:~%#   Interface for describing the fov of a sensor, normally we use circle sector~%#   to decribe the field of view of sensor data~%#~%#~%#~%################################################################################~%~%# device id~%uint8 device_id~%~%# [m] the position based on the ego_rear_axis~%geometry_msgs/Vector3 position~%~%# [rad] the opening angle of the sensor view~%float32 opening_angle~%~%# [rad] the yaw angle of the sensor based on the x axis of ego_rear_axis~%float32 yaw_angle~%~%# [m] minimum range of sensor detection in meter~%# normally the close blind spot distance of this sensor~%float32 min_range~%~%# [m] max range of sensor detection in meter~%float32 max_range~%~%~%================================================================================~%MSG: geometry_msgs/Vector3~%# This represents a vector in free space. ~%# It is only meant to represent a direction. Therefore, it does not~%# make sense to apply a translation to it (e.g., when applying a ~%# generic rigid transformation to a Vector3, tf2 will only apply the~%# rotation). If you want your data to be translatable too, use the~%# geometry_msgs/Point message instead.~%~%float64 x~%float64 y~%float64 z~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <SensorFovData>))
  (cl:+ 0
     1
     (roslisp-msg-protocol:serialization-length (cl:slot-value msg 'position))
     4
     4
     4
     4
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <SensorFovData>))
  "Converts a ROS message object to a list"
  (cl:list 'SensorFovData
    (cl:cons ':device_id (device_id msg))
    (cl:cons ':position (position msg))
    (cl:cons ':opening_angle (opening_angle msg))
    (cl:cons ':yaw_angle (yaw_angle msg))
    (cl:cons ':min_range (min_range msg))
    (cl:cons ':max_range (max_range msg))
))
