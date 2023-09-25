;; Auto-generated. Do not edit!


(when (boundp 'data_parse::AdjacentLane)
  (if (not (find-package "DATA_PARSE"))
    (make-package "DATA_PARSE"))
  (shadow 'AdjacentLane (find-package "DATA_PARSE")))
(unless (find-package "DATA_PARSE::ADJACENTLANE")
  (make-package "DATA_PARSE::ADJACENTLANE"))

(in-package "ROS")
;;//! \htmlinclude AdjacentLane.msg.html
(if (not (find-package "STD_MSGS"))
  (ros::roseus-add-msgs "std_msgs"))


(intern "*UNDECIDED*" (find-package "DATA_PARSE::ADJACENTLANE"))
(shadow '*UNDECIDED* (find-package "DATA_PARSE::ADJACENTLANE"))
(defconstant data_parse::AdjacentLane::*UNDECIDED* 0)
(intern "*SOLID*" (find-package "DATA_PARSE::ADJACENTLANE"))
(shadow '*SOLID* (find-package "DATA_PARSE::ADJACENTLANE"))
(defconstant data_parse::AdjacentLane::*SOLID* 1)
(intern "*DASHED*" (find-package "DATA_PARSE::ADJACENTLANE"))
(shadow '*DASHED* (find-package "DATA_PARSE::ADJACENTLANE"))
(defconstant data_parse::AdjacentLane::*DASHED* 2)
(intern "*DLM*" (find-package "DATA_PARSE::ADJACENTLANE"))
(shadow '*DLM* (find-package "DATA_PARSE::ADJACENTLANE"))
(defconstant data_parse::AdjacentLane::*DLM* 3)
(intern "*BOTTS*" (find-package "DATA_PARSE::ADJACENTLANE"))
(shadow '*BOTTS* (find-package "DATA_PARSE::ADJACENTLANE"))
(defconstant data_parse::AdjacentLane::*BOTTS* 4)
(intern "*DECELERATION*" (find-package "DATA_PARSE::ADJACENTLANE"))
(shadow '*DECELERATION* (find-package "DATA_PARSE::ADJACENTLANE"))
(defconstant data_parse::AdjacentLane::*DECELERATION* 5)
(intern "*HOV_LANE*" (find-package "DATA_PARSE::ADJACENTLANE"))
(shadow '*HOV_LANE* (find-package "DATA_PARSE::ADJACENTLANE"))
(defconstant data_parse::AdjacentLane::*HOV_LANE* 6)
(intern "*NONE*" (find-package "DATA_PARSE::ADJACENTLANE"))
(shadow '*NONE* (find-package "DATA_PARSE::ADJACENTLANE"))
(defconstant data_parse::AdjacentLane::*NONE* 0)
(intern "*LEFT__LEFT_LANEMARK*" (find-package "DATA_PARSE::ADJACENTLANE"))
(shadow '*LEFT__LEFT_LANEMARK* (find-package "DATA_PARSE::ADJACENTLANE"))
(defconstant data_parse::AdjacentLane::*LEFT__LEFT_LANEMARK* 1)
(intern "*LEFT__RIGHT_LANEMARK*" (find-package "DATA_PARSE::ADJACENTLANE"))
(shadow '*LEFT__RIGHT_LANEMARK* (find-package "DATA_PARSE::ADJACENTLANE"))
(defconstant data_parse::AdjacentLane::*LEFT__RIGHT_LANEMARK* 2)
(intern "*RIGHT__LEFT_LANEMARK*" (find-package "DATA_PARSE::ADJACENTLANE"))
(shadow '*RIGHT__LEFT_LANEMARK* (find-package "DATA_PARSE::ADJACENTLANE"))
(defconstant data_parse::AdjacentLane::*RIGHT__LEFT_LANEMARK* 3)
(intern "*RIGHT__RIGHT_LANEMARK*" (find-package "DATA_PARSE::ADJACENTLANE"))
(shadow '*RIGHT__RIGHT_LANEMARK* (find-package "DATA_PARSE::ADJACENTLANE"))
(defconstant data_parse::AdjacentLane::*RIGHT__RIGHT_LANEMARK* 4)

(defun data_parse::AdjacentLane-to-symbol (const)
  (cond
        ((= const 0) 'data_parse::AdjacentLane::*UNDECIDED*)
        ((= const 1) 'data_parse::AdjacentLane::*SOLID*)
        ((= const 2) 'data_parse::AdjacentLane::*DASHED*)
        ((= const 3) 'data_parse::AdjacentLane::*DLM*)
        ((= const 4) 'data_parse::AdjacentLane::*BOTTS*)
        ((= const 5) 'data_parse::AdjacentLane::*DECELERATION*)
        ((= const 6) 'data_parse::AdjacentLane::*HOV_LANE*)
        ((= const 0) 'data_parse::AdjacentLane::*NONE*)
        ((= const 1) 'data_parse::AdjacentLane::*LEFT__LEFT_LANEMARK*)
        ((= const 2) 'data_parse::AdjacentLane::*LEFT__RIGHT_LANEMARK*)
        ((= const 3) 'data_parse::AdjacentLane::*RIGHT__LEFT_LANEMARK*)
        ((= const 4) 'data_parse::AdjacentLane::*RIGHT__RIGHT_LANEMARK*)
        (t nil)))

(defclass data_parse::AdjacentLane
  :super ros::object
  :slots (_header _Lanes_Adjacent_Count _Adjacent_Type _Adjacent_Confidence _Adjacent_View_Range_Start _Adjacent_View_Range_End _Adjacent_Line_Role _Adjacent_Line_C ))

(defmethod data_parse::AdjacentLane
  (:init
   (&key
    ((:header __header) (instance std_msgs::Header :init))
    ((:Lanes_Adjacent_Count __Lanes_Adjacent_Count) 0)
    ((:Adjacent_Type __Adjacent_Type) 0)
    ((:Adjacent_Confidence __Adjacent_Confidence) 0.0)
    ((:Adjacent_View_Range_Start __Adjacent_View_Range_Start) 0.0)
    ((:Adjacent_View_Range_End __Adjacent_View_Range_End) 0.0)
    ((:Adjacent_Line_Role __Adjacent_Line_Role) 0)
    ((:Adjacent_Line_C __Adjacent_Line_C) (instance data_parse::LHParam :init))
    )
   (send-super :init)
   (setq _header __header)
   (setq _Lanes_Adjacent_Count (round __Lanes_Adjacent_Count))
   (setq _Adjacent_Type (round __Adjacent_Type))
   (setq _Adjacent_Confidence (float __Adjacent_Confidence))
   (setq _Adjacent_View_Range_Start (float __Adjacent_View_Range_Start))
   (setq _Adjacent_View_Range_End (float __Adjacent_View_Range_End))
   (setq _Adjacent_Line_Role (round __Adjacent_Line_Role))
   (setq _Adjacent_Line_C __Adjacent_Line_C)
   self)
  (:header
   (&rest __header)
   (if (keywordp (car __header))
       (send* _header __header)
     (progn
       (if __header (setq _header (car __header)))
       _header)))
  (:Lanes_Adjacent_Count
   (&optional __Lanes_Adjacent_Count)
   (if __Lanes_Adjacent_Count (setq _Lanes_Adjacent_Count __Lanes_Adjacent_Count)) _Lanes_Adjacent_Count)
  (:Adjacent_Type
   (&optional __Adjacent_Type)
   (if __Adjacent_Type (setq _Adjacent_Type __Adjacent_Type)) _Adjacent_Type)
  (:Adjacent_Confidence
   (&optional __Adjacent_Confidence)
   (if __Adjacent_Confidence (setq _Adjacent_Confidence __Adjacent_Confidence)) _Adjacent_Confidence)
  (:Adjacent_View_Range_Start
   (&optional __Adjacent_View_Range_Start)
   (if __Adjacent_View_Range_Start (setq _Adjacent_View_Range_Start __Adjacent_View_Range_Start)) _Adjacent_View_Range_Start)
  (:Adjacent_View_Range_End
   (&optional __Adjacent_View_Range_End)
   (if __Adjacent_View_Range_End (setq _Adjacent_View_Range_End __Adjacent_View_Range_End)) _Adjacent_View_Range_End)
  (:Adjacent_Line_Role
   (&optional __Adjacent_Line_Role)
   (if __Adjacent_Line_Role (setq _Adjacent_Line_Role __Adjacent_Line_Role)) _Adjacent_Line_Role)
  (:Adjacent_Line_C
   (&rest __Adjacent_Line_C)
   (if (keywordp (car __Adjacent_Line_C))
       (send* _Adjacent_Line_C __Adjacent_Line_C)
     (progn
       (if __Adjacent_Line_C (setq _Adjacent_Line_C (car __Adjacent_Line_C)))
       _Adjacent_Line_C)))
  (:serialization-length
   ()
   (+
    ;; std_msgs/Header _header
    (send _header :serialization-length)
    ;; uint8 _Lanes_Adjacent_Count
    1
    ;; uint8 _Adjacent_Type
    1
    ;; float64 _Adjacent_Confidence
    8
    ;; float64 _Adjacent_View_Range_Start
    8
    ;; float64 _Adjacent_View_Range_End
    8
    ;; uint8 _Adjacent_Line_Role
    1
    ;; data_parse/LHParam _Adjacent_Line_C
    (send _Adjacent_Line_C :serialization-length)
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; std_msgs/Header _header
       (send _header :serialize s)
     ;; uint8 _Lanes_Adjacent_Count
       (write-byte _Lanes_Adjacent_Count s)
     ;; uint8 _Adjacent_Type
       (write-byte _Adjacent_Type s)
     ;; float64 _Adjacent_Confidence
       (sys::poke _Adjacent_Confidence (send s :buffer) (send s :count) :double) (incf (stream-count s) 8)
     ;; float64 _Adjacent_View_Range_Start
       (sys::poke _Adjacent_View_Range_Start (send s :buffer) (send s :count) :double) (incf (stream-count s) 8)
     ;; float64 _Adjacent_View_Range_End
       (sys::poke _Adjacent_View_Range_End (send s :buffer) (send s :count) :double) (incf (stream-count s) 8)
     ;; uint8 _Adjacent_Line_Role
       (write-byte _Adjacent_Line_Role s)
     ;; data_parse/LHParam _Adjacent_Line_C
       (send _Adjacent_Line_C :serialize s)
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; std_msgs/Header _header
     (send _header :deserialize buf ptr-) (incf ptr- (send _header :serialization-length))
   ;; uint8 _Lanes_Adjacent_Count
     (setq _Lanes_Adjacent_Count (sys::peek buf ptr- :char)) (incf ptr- 1)
   ;; uint8 _Adjacent_Type
     (setq _Adjacent_Type (sys::peek buf ptr- :char)) (incf ptr- 1)
   ;; float64 _Adjacent_Confidence
     (setq _Adjacent_Confidence (sys::peek buf ptr- :double)) (incf ptr- 8)
   ;; float64 _Adjacent_View_Range_Start
     (setq _Adjacent_View_Range_Start (sys::peek buf ptr- :double)) (incf ptr- 8)
   ;; float64 _Adjacent_View_Range_End
     (setq _Adjacent_View_Range_End (sys::peek buf ptr- :double)) (incf ptr- 8)
   ;; uint8 _Adjacent_Line_Role
     (setq _Adjacent_Line_Role (sys::peek buf ptr- :char)) (incf ptr- 1)
   ;; data_parse/LHParam _Adjacent_Line_C
     (send _Adjacent_Line_C :deserialize buf ptr-) (incf ptr- (send _Adjacent_Line_C :serialization-length))
   ;;
   self)
  )

(setf (get data_parse::AdjacentLane :md5sum-) "58e1312381e41b759ad9062603e465e3")
(setf (get data_parse::AdjacentLane :datatype-) "data_parse/AdjacentLane")
(setf (get data_parse::AdjacentLane :definition-)
      "std_msgs/Header header

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
MSG: data_parse/LHParam
float64 LH_C0
float64 LH_C1
float64 LH_C2
float64 LH_C3
")



(provide :data_parse/AdjacentLane "58e1312381e41b759ad9062603e465e3")


