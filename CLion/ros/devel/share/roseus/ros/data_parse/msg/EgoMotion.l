;; Auto-generated. Do not edit!


(when (boundp 'data_parse::EgoMotion)
  (if (not (find-package "DATA_PARSE"))
    (make-package "DATA_PARSE"))
  (shadow 'EgoMotion (find-package "DATA_PARSE")))
(unless (find-package "DATA_PARSE::EGOMOTION")
  (make-package "DATA_PARSE::EGOMOTION"))

(in-package "ROS")
;;//! \htmlinclude EgoMotion.msg.html
(if (not (find-package "STD_MSGS"))
  (ros::roseus-add-msgs "std_msgs"))


(defclass data_parse::EgoMotion
  :super ros::object
  :slots (_header _is_valid _speed _yaw_rate _accelerate _age _time_stamp ))

(defmethod data_parse::EgoMotion
  (:init
   (&key
    ((:header __header) (instance std_msgs::Header :init))
    ((:is_valid __is_valid) 0)
    ((:speed __speed) 0.0)
    ((:yaw_rate __yaw_rate) 0.0)
    ((:accelerate __accelerate) 0.0)
    ((:age __age) 0.0)
    ((:time_stamp __time_stamp) 0.0)
    )
   (send-super :init)
   (setq _header __header)
   (setq _is_valid (round __is_valid))
   (setq _speed (float __speed))
   (setq _yaw_rate (float __yaw_rate))
   (setq _accelerate (float __accelerate))
   (setq _age (float __age))
   (setq _time_stamp (float __time_stamp))
   self)
  (:header
   (&rest __header)
   (if (keywordp (car __header))
       (send* _header __header)
     (progn
       (if __header (setq _header (car __header)))
       _header)))
  (:is_valid
   (&optional __is_valid)
   (if __is_valid (setq _is_valid __is_valid)) _is_valid)
  (:speed
   (&optional __speed)
   (if __speed (setq _speed __speed)) _speed)
  (:yaw_rate
   (&optional __yaw_rate)
   (if __yaw_rate (setq _yaw_rate __yaw_rate)) _yaw_rate)
  (:accelerate
   (&optional __accelerate)
   (if __accelerate (setq _accelerate __accelerate)) _accelerate)
  (:age
   (&optional __age)
   (if __age (setq _age __age)) _age)
  (:time_stamp
   (&optional __time_stamp)
   (if __time_stamp (setq _time_stamp __time_stamp)) _time_stamp)
  (:serialization-length
   ()
   (+
    ;; std_msgs/Header _header
    (send _header :serialization-length)
    ;; uint8 _is_valid
    1
    ;; float64 _speed
    8
    ;; float64 _yaw_rate
    8
    ;; float64 _accelerate
    8
    ;; float64 _age
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
     ;; uint8 _is_valid
       (write-byte _is_valid s)
     ;; float64 _speed
       (sys::poke _speed (send s :buffer) (send s :count) :double) (incf (stream-count s) 8)
     ;; float64 _yaw_rate
       (sys::poke _yaw_rate (send s :buffer) (send s :count) :double) (incf (stream-count s) 8)
     ;; float64 _accelerate
       (sys::poke _accelerate (send s :buffer) (send s :count) :double) (incf (stream-count s) 8)
     ;; float64 _age
       (sys::poke _age (send s :buffer) (send s :count) :double) (incf (stream-count s) 8)
     ;; float64 _time_stamp
       (sys::poke _time_stamp (send s :buffer) (send s :count) :double) (incf (stream-count s) 8)
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; std_msgs/Header _header
     (send _header :deserialize buf ptr-) (incf ptr- (send _header :serialization-length))
   ;; uint8 _is_valid
     (setq _is_valid (sys::peek buf ptr- :char)) (incf ptr- 1)
   ;; float64 _speed
     (setq _speed (sys::peek buf ptr- :double)) (incf ptr- 8)
   ;; float64 _yaw_rate
     (setq _yaw_rate (sys::peek buf ptr- :double)) (incf ptr- 8)
   ;; float64 _accelerate
     (setq _accelerate (sys::peek buf ptr- :double)) (incf ptr- 8)
   ;; float64 _age
     (setq _age (sys::peek buf ptr- :double)) (incf ptr- 8)
   ;; float64 _time_stamp
     (setq _time_stamp (sys::peek buf ptr- :double)) (incf ptr- 8)
   ;;
   self)
  )

(setf (get data_parse::EgoMotion :md5sum-) "3f42e9449b8ca7409bc79344fde2ba90")
(setf (get data_parse::EgoMotion :datatype-) "data_parse/EgoMotion")
(setf (get data_parse::EgoMotion :definition-)
      "std_msgs/Header header

uint8 is_valid
float64 speed
float64 yaw_rate
float64 accelerate
float64 age
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



(provide :data_parse/EgoMotion "3f42e9449b8ca7409bc79344fde2ba90")


