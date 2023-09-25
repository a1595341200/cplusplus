;; Auto-generated. Do not edit!


(when (boundp 'data_parse::AdjacentLaneFrame)
  (if (not (find-package "DATA_PARSE"))
    (make-package "DATA_PARSE"))
  (shadow 'AdjacentLaneFrame (find-package "DATA_PARSE")))
(unless (find-package "DATA_PARSE::ADJACENTLANEFRAME")
  (make-package "DATA_PARSE::ADJACENTLANEFRAME"))

(in-package "ROS")
;;//! \htmlinclude AdjacentLaneFrame.msg.html
(if (not (find-package "STD_MSGS"))
  (ros::roseus-add-msgs "std_msgs"))


(defclass data_parse::AdjacentLaneFrame
  :super ros::object
  :slots (_header _adject_lanes ))

(defmethod data_parse::AdjacentLaneFrame
  (:init
   (&key
    ((:header __header) (instance std_msgs::Header :init))
    ((:adject_lanes __adject_lanes) ())
    )
   (send-super :init)
   (setq _header __header)
   (setq _adject_lanes __adject_lanes)
   self)
  (:header
   (&rest __header)
   (if (keywordp (car __header))
       (send* _header __header)
     (progn
       (if __header (setq _header (car __header)))
       _header)))
  (:adject_lanes
   (&rest __adject_lanes)
   (if (keywordp (car __adject_lanes))
       (send* _adject_lanes __adject_lanes)
     (progn
       (if __adject_lanes (setq _adject_lanes (car __adject_lanes)))
       _adject_lanes)))
  (:serialization-length
   ()
   (+
    ;; std_msgs/Header _header
    (send _header :serialization-length)
    ;; data_parse/AdjacentLane[] _adject_lanes
    (apply #'+ (send-all _adject_lanes :serialization-length)) 4
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; std_msgs/Header _header
       (send _header :serialize s)
     ;; data_parse/AdjacentLane[] _adject_lanes
     (write-long (length _adject_lanes) s)
     (dolist (elem _adject_lanes)
       (send elem :serialize s)
       )
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; std_msgs/Header _header
     (send _header :deserialize buf ptr-) (incf ptr- (send _header :serialization-length))
   ;; data_parse/AdjacentLane[] _adject_lanes
   (let (n)
     (setq n (sys::peek buf ptr- :integer)) (incf ptr- 4)
     (setq _adject_lanes (let (r) (dotimes (i n) (push (instance data_parse::AdjacentLane :init) r)) r))
     (dolist (elem- _adject_lanes)
     (send elem- :deserialize buf ptr-) (incf ptr- (send elem- :serialization-length))
     ))
   ;;
   self)
  )

(setf (get data_parse::AdjacentLaneFrame :md5sum-) "bdfb3c3ee954044143731d5348c7d930")
(setf (get data_parse::AdjacentLaneFrame :datatype-) "data_parse/AdjacentLaneFrame")
(setf (get data_parse::AdjacentLaneFrame :definition-)
      "std_msgs/Header header

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
")



(provide :data_parse/AdjacentLaneFrame "bdfb3c3ee954044143731d5348c7d930")


