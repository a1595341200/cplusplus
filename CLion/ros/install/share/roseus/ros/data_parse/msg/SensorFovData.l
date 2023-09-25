;; Auto-generated. Do not edit!


(when (boundp 'data_parse::SensorFovData)
  (if (not (find-package "DATA_PARSE"))
    (make-package "DATA_PARSE"))
  (shadow 'SensorFovData (find-package "DATA_PARSE")))
(unless (find-package "DATA_PARSE::SENSORFOVDATA")
  (make-package "DATA_PARSE::SENSORFOVDATA"))

(in-package "ROS")
;;//! \htmlinclude SensorFovData.msg.html
(if (not (find-package "GEOMETRY_MSGS"))
  (ros::roseus-add-msgs "geometry_msgs"))


(defclass data_parse::SensorFovData
  :super ros::object
  :slots (_device_id _position _opening_angle _yaw_angle _min_range _max_range ))

(defmethod data_parse::SensorFovData
  (:init
   (&key
    ((:device_id __device_id) 0)
    ((:position __position) (instance geometry_msgs::Vector3 :init))
    ((:opening_angle __opening_angle) 0.0)
    ((:yaw_angle __yaw_angle) 0.0)
    ((:min_range __min_range) 0.0)
    ((:max_range __max_range) 0.0)
    )
   (send-super :init)
   (setq _device_id (round __device_id))
   (setq _position __position)
   (setq _opening_angle (float __opening_angle))
   (setq _yaw_angle (float __yaw_angle))
   (setq _min_range (float __min_range))
   (setq _max_range (float __max_range))
   self)
  (:device_id
   (&optional __device_id)
   (if __device_id (setq _device_id __device_id)) _device_id)
  (:position
   (&rest __position)
   (if (keywordp (car __position))
       (send* _position __position)
     (progn
       (if __position (setq _position (car __position)))
       _position)))
  (:opening_angle
   (&optional __opening_angle)
   (if __opening_angle (setq _opening_angle __opening_angle)) _opening_angle)
  (:yaw_angle
   (&optional __yaw_angle)
   (if __yaw_angle (setq _yaw_angle __yaw_angle)) _yaw_angle)
  (:min_range
   (&optional __min_range)
   (if __min_range (setq _min_range __min_range)) _min_range)
  (:max_range
   (&optional __max_range)
   (if __max_range (setq _max_range __max_range)) _max_range)
  (:serialization-length
   ()
   (+
    ;; uint8 _device_id
    1
    ;; geometry_msgs/Vector3 _position
    (send _position :serialization-length)
    ;; float32 _opening_angle
    4
    ;; float32 _yaw_angle
    4
    ;; float32 _min_range
    4
    ;; float32 _max_range
    4
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; uint8 _device_id
       (write-byte _device_id s)
     ;; geometry_msgs/Vector3 _position
       (send _position :serialize s)
     ;; float32 _opening_angle
       (sys::poke _opening_angle (send s :buffer) (send s :count) :float) (incf (stream-count s) 4)
     ;; float32 _yaw_angle
       (sys::poke _yaw_angle (send s :buffer) (send s :count) :float) (incf (stream-count s) 4)
     ;; float32 _min_range
       (sys::poke _min_range (send s :buffer) (send s :count) :float) (incf (stream-count s) 4)
     ;; float32 _max_range
       (sys::poke _max_range (send s :buffer) (send s :count) :float) (incf (stream-count s) 4)
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; uint8 _device_id
     (setq _device_id (sys::peek buf ptr- :char)) (incf ptr- 1)
   ;; geometry_msgs/Vector3 _position
     (send _position :deserialize buf ptr-) (incf ptr- (send _position :serialization-length))
   ;; float32 _opening_angle
     (setq _opening_angle (sys::peek buf ptr- :float)) (incf ptr- 4)
   ;; float32 _yaw_angle
     (setq _yaw_angle (sys::peek buf ptr- :float)) (incf ptr- 4)
   ;; float32 _min_range
     (setq _min_range (sys::peek buf ptr- :float)) (incf ptr- 4)
   ;; float32 _max_range
     (setq _max_range (sys::peek buf ptr- :float)) (incf ptr- 4)
   ;;
   self)
  )

(setf (get data_parse::SensorFovData :md5sum-) "88971566923de10830fbfe5ef523b0e0")
(setf (get data_parse::SensorFovData :datatype-) "data_parse/SensorFovData")
(setf (get data_parse::SensorFovData :definition-)
      "################################################################################
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



(provide :data_parse/SensorFovData "88971566923de10830fbfe5ef523b0e0")


