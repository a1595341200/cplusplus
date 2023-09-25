;; Auto-generated. Do not edit!


(when (boundp 'data_parse::SensorFovList)
  (if (not (find-package "DATA_PARSE"))
    (make-package "DATA_PARSE"))
  (shadow 'SensorFovList (find-package "DATA_PARSE")))
(unless (find-package "DATA_PARSE::SENSORFOVLIST")
  (make-package "DATA_PARSE::SENSORFOVLIST"))

(in-package "ROS")
;;//! \htmlinclude SensorFovList.msg.html
(if (not (find-package "STD_MSGS"))
  (ros::roseus-add-msgs "std_msgs"))


(defclass data_parse::SensorFovList
  :super ros::object
  :slots (_header _sensor_fov_list ))

(defmethod data_parse::SensorFovList
  (:init
   (&key
    ((:header __header) (instance std_msgs::Header :init))
    ((:sensor_fov_list __sensor_fov_list) ())
    )
   (send-super :init)
   (setq _header __header)
   (setq _sensor_fov_list __sensor_fov_list)
   self)
  (:header
   (&rest __header)
   (if (keywordp (car __header))
       (send* _header __header)
     (progn
       (if __header (setq _header (car __header)))
       _header)))
  (:sensor_fov_list
   (&rest __sensor_fov_list)
   (if (keywordp (car __sensor_fov_list))
       (send* _sensor_fov_list __sensor_fov_list)
     (progn
       (if __sensor_fov_list (setq _sensor_fov_list (car __sensor_fov_list)))
       _sensor_fov_list)))
  (:serialization-length
   ()
   (+
    ;; std_msgs/Header _header
    (send _header :serialization-length)
    ;; data_parse/SensorFovData[] _sensor_fov_list
    (apply #'+ (send-all _sensor_fov_list :serialization-length)) 4
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; std_msgs/Header _header
       (send _header :serialize s)
     ;; data_parse/SensorFovData[] _sensor_fov_list
     (write-long (length _sensor_fov_list) s)
     (dolist (elem _sensor_fov_list)
       (send elem :serialize s)
       )
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; std_msgs/Header _header
     (send _header :deserialize buf ptr-) (incf ptr- (send _header :serialization-length))
   ;; data_parse/SensorFovData[] _sensor_fov_list
   (let (n)
     (setq n (sys::peek buf ptr- :integer)) (incf ptr- 4)
     (setq _sensor_fov_list (let (r) (dotimes (i n) (push (instance data_parse::SensorFovData :init) r)) r))
     (dolist (elem- _sensor_fov_list)
     (send elem- :deserialize buf ptr-) (incf ptr- (send elem- :serialization-length))
     ))
   ;;
   self)
  )

(setf (get data_parse::SensorFovList :md5sum-) "b098137c9a7ca98e3e4f0e068c13d0bd")
(setf (get data_parse::SensorFovList :datatype-) "data_parse/SensorFovList")
(setf (get data_parse::SensorFovList :definition-)
      "################################################################################
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
")



(provide :data_parse/SensorFovList "b098137c9a7ca98e3e4f0e068c13d0bd")


