;; Auto-generated. Do not edit!


(when (boundp 'data_parse::EgoLane)
  (if (not (find-package "DATA_PARSE"))
    (make-package "DATA_PARSE"))
  (shadow 'EgoLane (find-package "DATA_PARSE")))
(unless (find-package "DATA_PARSE::EGOLANE")
  (make-package "DATA_PARSE::EGOLANE"))

(in-package "ROS")
;;//! \htmlinclude EgoLane.msg.html
(if (not (find-package "STD_MSGS"))
  (ros::roseus-add-msgs "std_msgs"))


(intern "*UNDECIDED*" (find-package "DATA_PARSE::EGOLANE"))
(shadow '*UNDECIDED* (find-package "DATA_PARSE::EGOLANE"))
(defconstant data_parse::EgoLane::*UNDECIDED* 0)
(intern "*SOLID*" (find-package "DATA_PARSE::EGOLANE"))
(shadow '*SOLID* (find-package "DATA_PARSE::EGOLANE"))
(defconstant data_parse::EgoLane::*SOLID* 1)
(intern "*DASHED*" (find-package "DATA_PARSE::EGOLANE"))
(shadow '*DASHED* (find-package "DATA_PARSE::EGOLANE"))
(defconstant data_parse::EgoLane::*DASHED* 2)
(intern "*DLM*" (find-package "DATA_PARSE::EGOLANE"))
(shadow '*DLM* (find-package "DATA_PARSE::EGOLANE"))
(defconstant data_parse::EgoLane::*DLM* 3)
(intern "*BOTTS*" (find-package "DATA_PARSE::EGOLANE"))
(shadow '*BOTTS* (find-package "DATA_PARSE::EGOLANE"))
(defconstant data_parse::EgoLane::*BOTTS* 4)
(intern "*DECELERATION*" (find-package "DATA_PARSE::EGOLANE"))
(shadow '*DECELERATION* (find-package "DATA_PARSE::EGOLANE"))
(defconstant data_parse::EgoLane::*DECELERATION* 5)
(intern "*HOV_LANE*" (find-package "DATA_PARSE::EGOLANE"))
(shadow '*HOV_LANE* (find-package "DATA_PARSE::EGOLANE"))
(defconstant data_parse::EgoLane::*HOV_LANE* 6)
(intern "*UNKNOWN*" (find-package "DATA_PARSE::EGOLANE"))
(shadow '*UNKNOWN* (find-package "DATA_PARSE::EGOLANE"))
(defconstant data_parse::EgoLane::*UNKNOWN* 0)
(intern "*LEFT*" (find-package "DATA_PARSE::EGOLANE"))
(shadow '*LEFT* (find-package "DATA_PARSE::EGOLANE"))
(defconstant data_parse::EgoLane::*LEFT* 1)
(intern "*RIGHT*" (find-package "DATA_PARSE::EGOLANE"))
(shadow '*RIGHT* (find-package "DATA_PARSE::EGOLANE"))
(defconstant data_parse::EgoLane::*RIGHT* 2)

(defun data_parse::EgoLane-to-symbol (const)
  (cond
        ((= const 0) 'data_parse::EgoLane::*UNDECIDED*)
        ((= const 1) 'data_parse::EgoLane::*SOLID*)
        ((= const 2) 'data_parse::EgoLane::*DASHED*)
        ((= const 3) 'data_parse::EgoLane::*DLM*)
        ((= const 4) 'data_parse::EgoLane::*BOTTS*)
        ((= const 5) 'data_parse::EgoLane::*DECELERATION*)
        ((= const 6) 'data_parse::EgoLane::*HOV_LANE*)
        ((= const 0) 'data_parse::EgoLane::*UNKNOWN*)
        ((= const 1) 'data_parse::EgoLane::*LEFT*)
        ((= const 2) 'data_parse::EgoLane::*RIGHT*)
        (t nil)))

(defclass data_parse::EgoLane
  :super ros::object
  :slots (_header _Is_Construction_Area _LH_Confidence _LH_Lanemark_Type _LH_Side _LH_VR_Start _LH_VR_End _LH_C ))

(defmethod data_parse::EgoLane
  (:init
   (&key
    ((:header __header) (instance std_msgs::Header :init))
    ((:Is_Construction_Area __Is_Construction_Area) nil)
    ((:LH_Confidence __LH_Confidence) 0.0)
    ((:LH_Lanemark_Type __LH_Lanemark_Type) 0)
    ((:LH_Side __LH_Side) 0)
    ((:LH_VR_Start __LH_VR_Start) 0.0)
    ((:LH_VR_End __LH_VR_End) 0.0)
    ((:LH_C __LH_C) (instance data_parse::LHParam :init))
    )
   (send-super :init)
   (setq _header __header)
   (setq _Is_Construction_Area __Is_Construction_Area)
   (setq _LH_Confidence (float __LH_Confidence))
   (setq _LH_Lanemark_Type (round __LH_Lanemark_Type))
   (setq _LH_Side (round __LH_Side))
   (setq _LH_VR_Start (float __LH_VR_Start))
   (setq _LH_VR_End (float __LH_VR_End))
   (setq _LH_C __LH_C)
   self)
  (:header
   (&rest __header)
   (if (keywordp (car __header))
       (send* _header __header)
     (progn
       (if __header (setq _header (car __header)))
       _header)))
  (:Is_Construction_Area
   (&optional (__Is_Construction_Area :null))
   (if (not (eq __Is_Construction_Area :null)) (setq _Is_Construction_Area __Is_Construction_Area)) _Is_Construction_Area)
  (:LH_Confidence
   (&optional __LH_Confidence)
   (if __LH_Confidence (setq _LH_Confidence __LH_Confidence)) _LH_Confidence)
  (:LH_Lanemark_Type
   (&optional __LH_Lanemark_Type)
   (if __LH_Lanemark_Type (setq _LH_Lanemark_Type __LH_Lanemark_Type)) _LH_Lanemark_Type)
  (:LH_Side
   (&optional __LH_Side)
   (if __LH_Side (setq _LH_Side __LH_Side)) _LH_Side)
  (:LH_VR_Start
   (&optional __LH_VR_Start)
   (if __LH_VR_Start (setq _LH_VR_Start __LH_VR_Start)) _LH_VR_Start)
  (:LH_VR_End
   (&optional __LH_VR_End)
   (if __LH_VR_End (setq _LH_VR_End __LH_VR_End)) _LH_VR_End)
  (:LH_C
   (&rest __LH_C)
   (if (keywordp (car __LH_C))
       (send* _LH_C __LH_C)
     (progn
       (if __LH_C (setq _LH_C (car __LH_C)))
       _LH_C)))
  (:serialization-length
   ()
   (+
    ;; std_msgs/Header _header
    (send _header :serialization-length)
    ;; bool _Is_Construction_Area
    1
    ;; float64 _LH_Confidence
    8
    ;; uint8 _LH_Lanemark_Type
    1
    ;; uint8 _LH_Side
    1
    ;; float64 _LH_VR_Start
    8
    ;; float64 _LH_VR_End
    8
    ;; data_parse/LHParam _LH_C
    (send _LH_C :serialization-length)
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; std_msgs/Header _header
       (send _header :serialize s)
     ;; bool _Is_Construction_Area
       (if _Is_Construction_Area (write-byte -1 s) (write-byte 0 s))
     ;; float64 _LH_Confidence
       (sys::poke _LH_Confidence (send s :buffer) (send s :count) :double) (incf (stream-count s) 8)
     ;; uint8 _LH_Lanemark_Type
       (write-byte _LH_Lanemark_Type s)
     ;; uint8 _LH_Side
       (write-byte _LH_Side s)
     ;; float64 _LH_VR_Start
       (sys::poke _LH_VR_Start (send s :buffer) (send s :count) :double) (incf (stream-count s) 8)
     ;; float64 _LH_VR_End
       (sys::poke _LH_VR_End (send s :buffer) (send s :count) :double) (incf (stream-count s) 8)
     ;; data_parse/LHParam _LH_C
       (send _LH_C :serialize s)
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; std_msgs/Header _header
     (send _header :deserialize buf ptr-) (incf ptr- (send _header :serialization-length))
   ;; bool _Is_Construction_Area
     (setq _Is_Construction_Area (not (= 0 (sys::peek buf ptr- :char)))) (incf ptr- 1)
   ;; float64 _LH_Confidence
     (setq _LH_Confidence (sys::peek buf ptr- :double)) (incf ptr- 8)
   ;; uint8 _LH_Lanemark_Type
     (setq _LH_Lanemark_Type (sys::peek buf ptr- :char)) (incf ptr- 1)
   ;; uint8 _LH_Side
     (setq _LH_Side (sys::peek buf ptr- :char)) (incf ptr- 1)
   ;; float64 _LH_VR_Start
     (setq _LH_VR_Start (sys::peek buf ptr- :double)) (incf ptr- 8)
   ;; float64 _LH_VR_End
     (setq _LH_VR_End (sys::peek buf ptr- :double)) (incf ptr- 8)
   ;; data_parse/LHParam _LH_C
     (send _LH_C :deserialize buf ptr-) (incf ptr- (send _LH_C :serialization-length))
   ;;
   self)
  )

(setf (get data_parse::EgoLane :md5sum-) "c853a0afe8c4bc08d024aa3177156a39")
(setf (get data_parse::EgoLane :datatype-) "data_parse/EgoLane")
(setf (get data_parse::EgoLane :definition-)
      "std_msgs/Header header

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



(provide :data_parse/EgoLane "c853a0afe8c4bc08d024aa3177156a39")


