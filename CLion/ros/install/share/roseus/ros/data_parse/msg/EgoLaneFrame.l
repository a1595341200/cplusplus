;; Auto-generated. Do not edit!


(when (boundp 'data_parse::EgoLaneFrame)
  (if (not (find-package "DATA_PARSE"))
    (make-package "DATA_PARSE"))
  (shadow 'EgoLaneFrame (find-package "DATA_PARSE")))
(unless (find-package "DATA_PARSE::EGOLANEFRAME")
  (make-package "DATA_PARSE::EGOLANEFRAME"))

(in-package "ROS")
;;//! \htmlinclude EgoLaneFrame.msg.html
(if (not (find-package "STD_MSGS"))
  (ros::roseus-add-msgs "std_msgs"))


(defclass data_parse::EgoLaneFrame
  :super ros::object
  :slots (_header _lanes ))

(defmethod data_parse::EgoLaneFrame
  (:init
   (&key
    ((:header __header) (instance std_msgs::Header :init))
    ((:lanes __lanes) ())
    )
   (send-super :init)
   (setq _header __header)
   (setq _lanes __lanes)
   self)
  (:header
   (&rest __header)
   (if (keywordp (car __header))
       (send* _header __header)
     (progn
       (if __header (setq _header (car __header)))
       _header)))
  (:lanes
   (&rest __lanes)
   (if (keywordp (car __lanes))
       (send* _lanes __lanes)
     (progn
       (if __lanes (setq _lanes (car __lanes)))
       _lanes)))
  (:serialization-length
   ()
   (+
    ;; std_msgs/Header _header
    (send _header :serialization-length)
    ;; data_parse/EgoLane[] _lanes
    (apply #'+ (send-all _lanes :serialization-length)) 4
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; std_msgs/Header _header
       (send _header :serialize s)
     ;; data_parse/EgoLane[] _lanes
     (write-long (length _lanes) s)
     (dolist (elem _lanes)
       (send elem :serialize s)
       )
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; std_msgs/Header _header
     (send _header :deserialize buf ptr-) (incf ptr- (send _header :serialization-length))
   ;; data_parse/EgoLane[] _lanes
   (let (n)
     (setq n (sys::peek buf ptr- :integer)) (incf ptr- 4)
     (setq _lanes (let (r) (dotimes (i n) (push (instance data_parse::EgoLane :init) r)) r))
     (dolist (elem- _lanes)
     (send elem- :deserialize buf ptr-) (incf ptr- (send elem- :serialization-length))
     ))
   ;;
   self)
  )

(setf (get data_parse::EgoLaneFrame :md5sum-) "8128611ad76285e5f5d998a2253fa961")
(setf (get data_parse::EgoLaneFrame :datatype-) "data_parse/EgoLaneFrame")
(setf (get data_parse::EgoLaneFrame :definition-)
      "std_msgs/Header header

EgoLane[] lanes
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
MSG: data_parse/EgoLane
std_msgs/Header header

bool Is_Construction_Area

float64 LH_Confidence

# enum
uint8 LH_Lanemark_Type 
uint8 UNDECIDED = 0
uint8 SOLID = 1
uint8 DASHED = 2
uint8 DLM = 3 
uint8 BOTTS = 4
uint8 DECELERATION = 5
uint8 HOV_LANE = 6

# enum
uint8 LH_Side
uint8 UNKNOWN = 0
uint8 LEFT = 1
uint8 RIGHT = 2

float64 LH_VR_Start
float64 LH_VR_End

LHParam LH_C




================================================================================
MSG: data_parse/LHParam
float64 LH_C0
float64 LH_C1
float64 LH_C2
float64 LH_C3
")



(provide :data_parse/EgoLaneFrame "8128611ad76285e5f5d998a2253fa961")


