; Auto-generated. Do not edit!


(cl:in-package data_parse-msg)


;//! \htmlinclude EgoLane.msg.html

(cl:defclass <EgoLane> (roslisp-msg-protocol:ros-message)
  ((header
    :reader header
    :initarg :header
    :type std_msgs-msg:Header
    :initform (cl:make-instance 'std_msgs-msg:Header))
   (Is_Construction_Area
    :reader Is_Construction_Area
    :initarg :Is_Construction_Area
    :type cl:boolean
    :initform cl:nil)
   (LH_Confidence
    :reader LH_Confidence
    :initarg :LH_Confidence
    :type cl:float
    :initform 0.0)
   (LH_Lanemark_Type
    :reader LH_Lanemark_Type
    :initarg :LH_Lanemark_Type
    :type cl:fixnum
    :initform 0)
   (LH_Side
    :reader LH_Side
    :initarg :LH_Side
    :type cl:fixnum
    :initform 0)
   (LH_VR_Start
    :reader LH_VR_Start
    :initarg :LH_VR_Start
    :type cl:float
    :initform 0.0)
   (LH_VR_End
    :reader LH_VR_End
    :initarg :LH_VR_End
    :type cl:float
    :initform 0.0)
   (LH_C
    :reader LH_C
    :initarg :LH_C
    :type data_parse-msg:LHParam
    :initform (cl:make-instance 'data_parse-msg:LHParam)))
)

(cl:defclass EgoLane (<EgoLane>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <EgoLane>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'EgoLane)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name data_parse-msg:<EgoLane> is deprecated: use data_parse-msg:EgoLane instead.")))

(cl:ensure-generic-function 'header-val :lambda-list '(m))
(cl:defmethod header-val ((m <EgoLane>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader data_parse-msg:header-val is deprecated.  Use data_parse-msg:header instead.")
  (header m))

(cl:ensure-generic-function 'Is_Construction_Area-val :lambda-list '(m))
(cl:defmethod Is_Construction_Area-val ((m <EgoLane>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader data_parse-msg:Is_Construction_Area-val is deprecated.  Use data_parse-msg:Is_Construction_Area instead.")
  (Is_Construction_Area m))

(cl:ensure-generic-function 'LH_Confidence-val :lambda-list '(m))
(cl:defmethod LH_Confidence-val ((m <EgoLane>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader data_parse-msg:LH_Confidence-val is deprecated.  Use data_parse-msg:LH_Confidence instead.")
  (LH_Confidence m))

(cl:ensure-generic-function 'LH_Lanemark_Type-val :lambda-list '(m))
(cl:defmethod LH_Lanemark_Type-val ((m <EgoLane>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader data_parse-msg:LH_Lanemark_Type-val is deprecated.  Use data_parse-msg:LH_Lanemark_Type instead.")
  (LH_Lanemark_Type m))

(cl:ensure-generic-function 'LH_Side-val :lambda-list '(m))
(cl:defmethod LH_Side-val ((m <EgoLane>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader data_parse-msg:LH_Side-val is deprecated.  Use data_parse-msg:LH_Side instead.")
  (LH_Side m))

(cl:ensure-generic-function 'LH_VR_Start-val :lambda-list '(m))
(cl:defmethod LH_VR_Start-val ((m <EgoLane>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader data_parse-msg:LH_VR_Start-val is deprecated.  Use data_parse-msg:LH_VR_Start instead.")
  (LH_VR_Start m))

(cl:ensure-generic-function 'LH_VR_End-val :lambda-list '(m))
(cl:defmethod LH_VR_End-val ((m <EgoLane>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader data_parse-msg:LH_VR_End-val is deprecated.  Use data_parse-msg:LH_VR_End instead.")
  (LH_VR_End m))

(cl:ensure-generic-function 'LH_C-val :lambda-list '(m))
(cl:defmethod LH_C-val ((m <EgoLane>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader data_parse-msg:LH_C-val is deprecated.  Use data_parse-msg:LH_C instead.")
  (LH_C m))
(cl:defmethod roslisp-msg-protocol:symbol-codes ((msg-type (cl:eql '<EgoLane>)))
    "Constants for message type '<EgoLane>"
  '((:UNDECIDED . 0)
    (:SOLID . 1)
    (:DASHED . 2)
    (:DLM . 3)
    (:BOTTS . 4)
    (:DECELERATION . 5)
    (:HOV_LANE . 6)
    (:UNKNOWN . 0)
    (:LEFT . 1)
    (:RIGHT . 2))
)
(cl:defmethod roslisp-msg-protocol:symbol-codes ((msg-type (cl:eql 'EgoLane)))
    "Constants for message type 'EgoLane"
  '((:UNDECIDED . 0)
    (:SOLID . 1)
    (:DASHED . 2)
    (:DLM . 3)
    (:BOTTS . 4)
    (:DECELERATION . 5)
    (:HOV_LANE . 6)
    (:UNKNOWN . 0)
    (:LEFT . 1)
    (:RIGHT . 2))
)
(cl:defmethod roslisp-msg-protocol:serialize ((msg <EgoLane>) ostream)
  "Serializes a message object of type '<EgoLane>"
  (roslisp-msg-protocol:serialize (cl:slot-value msg 'header) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:if (cl:slot-value msg 'Is_Construction_Area) 1 0)) ostream)
  (cl:let ((bits (roslisp-utils:encode-double-float-bits (cl:slot-value msg 'LH_Confidence))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 32) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 40) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 48) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 56) bits) ostream))
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'LH_Lanemark_Type)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'LH_Side)) ostream)
  (cl:let ((bits (roslisp-utils:encode-double-float-bits (cl:slot-value msg 'LH_VR_Start))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 32) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 40) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 48) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 56) bits) ostream))
  (cl:let ((bits (roslisp-utils:encode-double-float-bits (cl:slot-value msg 'LH_VR_End))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 32) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 40) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 48) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 56) bits) ostream))
  (roslisp-msg-protocol:serialize (cl:slot-value msg 'LH_C) ostream)
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <EgoLane>) istream)
  "Deserializes a message object of type '<EgoLane>"
  (roslisp-msg-protocol:deserialize (cl:slot-value msg 'header) istream)
    (cl:setf (cl:slot-value msg 'Is_Construction_Area) (cl:not (cl:zerop (cl:read-byte istream))))
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 32) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 40) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 48) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 56) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'LH_Confidence) (roslisp-utils:decode-double-float-bits bits)))
    (cl:setf (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'LH_Lanemark_Type)) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'LH_Side)) (cl:read-byte istream))
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 32) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 40) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 48) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 56) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'LH_VR_Start) (roslisp-utils:decode-double-float-bits bits)))
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 32) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 40) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 48) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 56) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'LH_VR_End) (roslisp-utils:decode-double-float-bits bits)))
  (roslisp-msg-protocol:deserialize (cl:slot-value msg 'LH_C) istream)
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<EgoLane>)))
  "Returns string type for a message object of type '<EgoLane>"
  "data_parse/EgoLane")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'EgoLane)))
  "Returns string type for a message object of type 'EgoLane"
  "data_parse/EgoLane")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<EgoLane>)))
  "Returns md5sum for a message object of type '<EgoLane>"
  "c853a0afe8c4bc08d024aa3177156a39")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'EgoLane)))
  "Returns md5sum for a message object of type 'EgoLane"
  "c853a0afe8c4bc08d024aa3177156a39")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<EgoLane>)))
  "Returns full string definition for message of type '<EgoLane>"
  (cl:format cl:nil "std_msgs/Header header~%~%bool Is_Construction_Area~%~%float64 LH_Confidence~%~%# enum~%uint8 LH_Lanemark_Type ~%uint8 UNDECIDED = 0~%uint8 SOLID = 1~%uint8 DASHED = 2~%uint8 DLM = 3 ~%uint8 BOTTS = 4~%uint8 DECELERATION = 5~%uint8 HOV_LANE = 6~%~%# enum~%uint8 LH_Side~%uint8 UNKNOWN = 0~%uint8 LEFT = 1~%uint8 RIGHT = 2~%~%float64 LH_VR_Start~%float64 LH_VR_End~%~%LHParam LH_C~%~%~%~%~%================================================================================~%MSG: std_msgs/Header~%# Standard metadata for higher-level stamped data types.~%# This is generally used to communicate timestamped data ~%# in a particular coordinate frame.~%# ~%# sequence ID: consecutively increasing ID ~%uint32 seq~%#Two-integer timestamp that is expressed as:~%# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')~%# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')~%# time-handling sugar is provided by the client library~%time stamp~%#Frame this data is associated with~%string frame_id~%~%================================================================================~%MSG: data_parse/LHParam~%float64 LH_C0~%float64 LH_C1~%float64 LH_C2~%float64 LH_C3~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'EgoLane)))
  "Returns full string definition for message of type 'EgoLane"
  (cl:format cl:nil "std_msgs/Header header~%~%bool Is_Construction_Area~%~%float64 LH_Confidence~%~%# enum~%uint8 LH_Lanemark_Type ~%uint8 UNDECIDED = 0~%uint8 SOLID = 1~%uint8 DASHED = 2~%uint8 DLM = 3 ~%uint8 BOTTS = 4~%uint8 DECELERATION = 5~%uint8 HOV_LANE = 6~%~%# enum~%uint8 LH_Side~%uint8 UNKNOWN = 0~%uint8 LEFT = 1~%uint8 RIGHT = 2~%~%float64 LH_VR_Start~%float64 LH_VR_End~%~%LHParam LH_C~%~%~%~%~%================================================================================~%MSG: std_msgs/Header~%# Standard metadata for higher-level stamped data types.~%# This is generally used to communicate timestamped data ~%# in a particular coordinate frame.~%# ~%# sequence ID: consecutively increasing ID ~%uint32 seq~%#Two-integer timestamp that is expressed as:~%# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')~%# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')~%# time-handling sugar is provided by the client library~%time stamp~%#Frame this data is associated with~%string frame_id~%~%================================================================================~%MSG: data_parse/LHParam~%float64 LH_C0~%float64 LH_C1~%float64 LH_C2~%float64 LH_C3~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <EgoLane>))
  (cl:+ 0
     (roslisp-msg-protocol:serialization-length (cl:slot-value msg 'header))
     1
     8
     1
     1
     8
     8
     (roslisp-msg-protocol:serialization-length (cl:slot-value msg 'LH_C))
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <EgoLane>))
  "Converts a ROS message object to a list"
  (cl:list 'EgoLane
    (cl:cons ':header (header msg))
    (cl:cons ':Is_Construction_Area (Is_Construction_Area msg))
    (cl:cons ':LH_Confidence (LH_Confidence msg))
    (cl:cons ':LH_Lanemark_Type (LH_Lanemark_Type msg))
    (cl:cons ':LH_Side (LH_Side msg))
    (cl:cons ':LH_VR_Start (LH_VR_Start msg))
    (cl:cons ':LH_VR_End (LH_VR_End msg))
    (cl:cons ':LH_C (LH_C msg))
))
