;; Auto-generated. Do not edit!


(when (boundp 'data_parse::JiCaEgoMotion)
  (if (not (find-package "DATA_PARSE"))
    (make-package "DATA_PARSE"))
  (shadow 'JiCaEgoMotion (find-package "DATA_PARSE")))
(unless (find-package "DATA_PARSE::JICAEGOMOTION")
  (make-package "DATA_PARSE::JICAEGOMOTION"))

(in-package "ROS")
;;//! \htmlinclude JiCaEgoMotion.msg.html
(if (not (find-package "STD_MSGS"))
  (ros::roseus-add-msgs "std_msgs"))


(defclass data_parse::JiCaEgoMotion
  :super ros::object
  :slots (_header _speed _lat_velocity _lgt_velocity _lat_accel _lgt_accel _yaw_rate _PosnLgtDelta _PosnLatDelta _AgDirDelta _avert _roll_rate _time_stamp ))

(defmethod data_parse::JiCaEgoMotion
  (:init
   (&key
    ((:header __header) (instance std_msgs::Header :init))
    ((:speed __speed) 0.0)
    ((:lat_velocity __lat_velocity) 0.0)
    ((:lgt_velocity __lgt_velocity) 0.0)
    ((:lat_accel __lat_accel) 0.0)
    ((:lgt_accel __lgt_accel) 0.0)
    ((:yaw_rate __yaw_rate) 0.0)
    ((:PosnLgtDelta __PosnLgtDelta) 0.0)
    ((:PosnLatDelta __PosnLatDelta) 0.0)
    ((:AgDirDelta __AgDirDelta) 0.0)
    ((:avert __avert) 0.0)
    ((:roll_rate __roll_rate) 0.0)
    ((:time_stamp __time_stamp) 0.0)
    )
   (send-super :init)
   (setq _header __header)
   (setq _speed (float __speed))
   (setq _lat_velocity (float __lat_velocity))
   (setq _lgt_velocity (float __lgt_velocity))
   (setq _lat_accel (float __lat_accel))
   (setq _lgt_accel (float __lgt_accel))
   (setq _yaw_rate (float __yaw_rate))
   (setq _PosnLgtDelta (float __PosnLgtDelta))
   (setq _PosnLatDelta (float __PosnLatDelta))
   (setq _AgDirDelta (float __AgDirDelta))
   (setq _avert (float __avert))
   (setq _roll_rate (float __roll_rate))
   (setq _time_stamp (float __time_stamp))
   self)
  (:header
   (&rest __header)
   (if (keywordp (car __header))
       (send* _header __header)
     (progn
       (if __header (setq _header (car __header)))
       _header)))
  (:speed
   (&optional __speed)
   (if __speed (setq _speed __speed)) _speed)
  (:lat_velocity
   (&optional __lat_velocity)
   (if __lat_velocity (setq _lat_velocity __lat_velocity)) _lat_velocity)
  (:lgt_velocity
   (&optional __lgt_velocity)
   (if __lgt_velocity (setq _lgt_velocity __lgt_velocity)) _lgt_velocity)
  (:lat_accel
   (&optional __lat_accel)
   (if __lat_accel (setq _lat_accel __lat_accel)) _lat_accel)
  (:lgt_accel
   (&optional __lgt_accel)
   (if __lgt_accel (setq _lgt_accel __lgt_accel)) _lgt_accel)
  (:yaw_rate
   (&optional __yaw_rate)
   (if __yaw_rate (setq _yaw_rate __yaw_rate)) _yaw_rate)
  (:PosnLgtDelta
   (&optional __PosnLgtDelta)
   (if __PosnLgtDelta (setq _PosnLgtDelta __PosnLgtDelta)) _PosnLgtDelta)
  (:PosnLatDelta
   (&optional __PosnLatDelta)
   (if __PosnLatDelta (setq _PosnLatDelta __PosnLatDelta)) _PosnLatDelta)
  (:AgDirDelta
   (&optional __AgDirDelta)
   (if __AgDirDelta (setq _AgDirDelta __AgDirDelta)) _AgDirDelta)
  (:avert
   (&optional __avert)
   (if __avert (setq _avert __avert)) _avert)
  (:roll_rate
   (&optional __roll_rate)
   (if __roll_rate (setq _roll_rate __roll_rate)) _roll_rate)
  (:time_stamp
   (&optional __time_stamp)
   (if __time_stamp (setq _time_stamp __time_stamp)) _time_stamp)
  (:serialization-length
   ()
   (+
    ;; std_msgs/Header _header
    (send _header :serialization-length)
    ;; float64 _speed
    8
    ;; float64 _lat_velocity
    8
    ;; float64 _lgt_velocity
    8
    ;; float64 _lat_accel
    8
    ;; float64 _lgt_accel
    8
    ;; float64 _yaw_rate
    8
    ;; float64 _PosnLgtDelta
    8
    ;; float64 _PosnLatDelta
    8
    ;; float64 _AgDirDelta
    8
    ;; float64 _avert
    8
    ;; float64 _roll_rate
    8
    ;; float64 _time_stamp
    8
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; std_msgs/Header _header
       (send _header :serialize s)
     ;; float64 _speed
       (sys::poke _speed (send s :buffer) (send s :count) :double) (incf (stream-count s) 8)
     ;; float64 _lat_velocity
       (sys::poke _lat_velocity (send s :buffer) (send s :count) :double) (incf (stream-count s) 8)
     ;; float64 _lgt_velocity
       (sys::poke _lgt_velocity (send s :buffer) (send s :count) :double) (incf (stream-count s) 8)
     ;; float64 _lat_accel
       (sys::poke _lat_accel (send s :buffer) (send s :count) :double) (incf (stream-count s) 8)
     ;; float64 _lgt_accel
       (sys::poke _lgt_accel (send s :buffer) (send s :count) :double) (incf (stream-count s) 8)
     ;; float64 _yaw_rate
       (sys::poke _yaw_rate (send s :buffer) (send s :count) :double) (incf (stream-count s) 8)
     ;; float64 _PosnLgtDelta
       (sys::poke _PosnLgtDelta (send s :buffer) (send s :count) :double) (incf (stream-count s) 8)
     ;; float64 _PosnLatDelta
       (sys::poke _PosnLatDelta (send s :buffer) (send s :count) :double) (incf (stream-count s) 8)
     ;; float64 _AgDirDelta
       (sys::poke _AgDirDelta (send s :buffer) (send s :count) :double) (incf (stream-count s) 8)
     ;; float64 _avert
       (sys::poke _avert (send s :buffer) (send s :count) :double) (incf (stream-count s) 8)
     ;; float64 _roll_rate
       (sys::poke _roll_rate (send s :buffer) (send s :count) :double) (incf (stream-count s) 8)
     ;; float64 _time_stamp
       (sys::poke _time_stamp (send s :buffer) (send s :count) :double) (incf (stream-count s) 8)
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; std_msgs/Header _header
     (send _header :deserialize buf ptr-) (incf ptr- (send _header :serialization-length))
   ;; float64 _speed
     (setq _speed (sys::peek buf ptr- :double)) (incf ptr- 8)
   ;; float64 _lat_velocity
     (setq _lat_velocity (sys::peek buf ptr- :double)) (incf ptr- 8)
   ;; float64 _lgt_velocity
     (setq _lgt_velocity (sys::peek buf ptr- :double)) (incf ptr- 8)
   ;; float64 _lat_accel
     (setq _lat_accel (sys::peek buf ptr- :double)) (incf ptr- 8)
   ;; float64 _lgt_accel
     (setq _lgt_accel (sys::peek buf ptr- :double)) (incf ptr- 8)
   ;; float64 _yaw_rate
     (setq _yaw_rate (sys::peek buf ptr- :double)) (incf ptr- 8)
   ;; float64 _PosnLgtDelta
     (setq _PosnLgtDelta (sys::peek buf ptr- :double)) (incf ptr- 8)
   ;; float64 _PosnLatDelta
     (setq _PosnLatDelta (sys::peek buf ptr- :double)) (incf ptr- 8)
   ;; float64 _AgDirDelta
     (setq _AgDirDelta (sys::peek buf ptr- :double)) (incf ptr- 8)
   ;; float64 _avert
     (setq _avert (sys::peek buf ptr- :double)) (incf ptr- 8)
   ;; float64 _roll_rate
     (setq _roll_rate (sys::peek buf ptr- :double)) (incf ptr- 8)
   ;; float64 _time_stamp
     (setq _time_stamp (sys::peek buf ptr- :double)) (incf ptr- 8)
   ;;
   self)
  )

(setf (get data_parse::JiCaEgoMotion :md5sum-) "54d9e18c5aea7a54f5520145e95dc662")
(setf (get data_parse::JiCaEgoMotion :datatype-) "data_parse/JiCaEgoMotion")
(setf (get data_parse::JiCaEgoMotion :definition-)
      "std_msgs/Header header

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

")



(provide :data_parse/JiCaEgoMotion "54d9e18c5aea7a54f5520145e95dc662")


