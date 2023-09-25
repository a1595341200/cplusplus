; Auto-generated. Do not edit!


(cl:in-package data_parse-msg)


;//! \htmlinclude AdjacentLane.msg.html

(cl:defclass <AdjacentLane> (roslisp-msg-protocol:ros-message)
  ((header
    :reader header
    :initarg :header
    :type std_msgs-msg:Header
    :initform (cl:make-instance 'std_msgs-msg:Header))
   (Lanes_Adjacent_Count
    :reader Lanes_Adjacent_Count
    :initarg :Lanes_Adjacent_Count
    :type cl:fixnum
    :initform 0)
   (Adjacent_Type
    :reader Adjacent_Type
    :initarg :Adjacent_Type
    :type cl:fixnum
    :initform 0)
   (Adjacent_Confidence
    :reader Adjacent_Confidence
    :initarg :Adjacent_Confidence
    :type cl:float
    :initform 0.0)
   (Adjacent_View_Range_Start
    :reader Adjacent_View_Range_Start
    :initarg :Adjacent_View_Range_Start
    :type cl:float
    :initform 0.0)
   (Adjacent_View_Range_End
    :reader Adjacent_View_Range_End
    :initarg :Adjacent_View_Range_End
    :type cl:float
    :initform 0.0)
   (Adjacent_Line_Role
    :reader Adjacent_Line_Role
    :initarg :Adjacent_Line_Role
    :type cl:fixnum
    :initform 0)
   (Adjacent_Line_C
    :reader Adjacent_Line_C
    :initarg :Adjacent_Line_C
    :type data_parse-msg:LHParam
    :initform (cl:make-instance 'data_parse-msg:LHParam)))
)

(cl:defclass AdjacentLane (<AdjacentLane>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <AdjacentLane>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'AdjacentLane)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name data_parse-msg:<AdjacentLane> is deprecated: use data_parse-msg:AdjacentLane instead.")))

(cl:ensure-generic-function 'header-val :lambda-list '(m))
(cl:defmethod header-val ((m <AdjacentLane>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader data_parse-msg:header-val is deprecated.  Use data_parse-msg:header instead.")
  (header m))

(cl:ensure-generic-function 'Lanes_Adjacent_Count-val :lambda-list '(m))
(cl:defmethod Lanes_Adjacent_Count-val ((m <AdjacentLane>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader data_parse-msg:Lanes_Adjacent_Count-val is deprecated.  Use data_parse-msg:Lanes_Adjacent_Count instead.")
  (Lanes_Adjacent_Count m))

(cl:ensure-generic-function 'Adjacent_Type-val :lambda-list '(m))
(cl:defmethod Adjacent_Type-val ((m <AdjacentLane>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader data_parse-msg:Adjacent_Type-val is deprecated.  Use data_parse-msg:Adjacent_Type instead.")
  (Adjacent_Type m))

(cl:ensure-generic-function 'Adjacent_Confidence-val :lambda-list '(m))
(cl:defmethod Adjacent_Confidence-val ((m <AdjacentLane>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader data_parse-msg:Adjacent_Confidence-val is deprecated.  Use data_parse-msg:Adjacent_Confidence instead.")
  (Adjacent_Confidence m))

(cl:ensure-generic-function 'Adjacent_View_Range_Start-val :lambda-list '(m))
(cl:defmethod Adjacent_View_Range_Start-val ((m <AdjacentLane>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader data_parse-msg:Adjacent_View_Range_Start-val is deprecated.  Use data_parse-msg:Adjacent_View_Range_Start instead.")
  (Adjacent_View_Range_Start m))

(cl:ensure-generic-function 'Adjacent_View_Range_End-val :lambda-list '(m))
(cl:defmethod Adjacent_View_Range_End-val ((m <AdjacentLane>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader data_parse-msg:Adjacent_View_Range_End-val is deprecated.  Use data_parse-msg:Adjacent_View_Range_End instead.")
  (Adjacent_View_Range_End m))

(cl:ensure-generic-function 'Adjacent_Line_Role-val :lambda-list '(m))
(cl:defmethod Adjacent_Line_Role-val ((m <AdjacentLane>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader data_parse-msg:Adjacent_Line_Role-val is deprecated.  Use data_parse-msg:Adjacent_Line_Role instead.")
  (Adjacent_Line_Role m))

(cl:ensure-generic-function 'Adjacent_Line_C-val :lambda-list '(m))
(cl:defmethod Adjacent_Line_C-val ((m <AdjacentLane>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader data_parse-msg:Adjacent_Line_C-val is deprecated.  Use data_parse-msg:Adjacent_Line_C instead.")
  (Adjacent_Line_C m))
(cl:defmethod roslisp-msg-protocol:symbol-codes ((msg-type (cl:eql '<AdjacentLane>)))
    "Constants for message type '<AdjacentLane>"
  '((:UNDECIDED . 0)
    (:SOLID . 1)
    (:DASHED . 2)
    (:DLM . 3)
    (:BOTTS . 4)
    (:DECELERATION . 5)
    (:HOV_LANE . 6)
    (:NONE . 0)
    (:LEFT__LEFT_LANEMARK . 1)
    (:LEFT__RIGHT_LANEMARK . 2)
    (:RIGHT__LEFT_LANEMARK . 3)
    (:RIGHT__RIGHT_LANEMARK . 4))
)
(cl:defmethod roslisp-msg-protocol:symbol-codes ((msg-type (cl:eql 'AdjacentLane)))
    "Constants for message type 'AdjacentLane"
  '((:UNDECIDED . 0)
    (:SOLID . 1)
    (:DASHED . 2)
    (:DLM . 3)
    (:BOTTS . 4)
    (:DECELERATION . 5)
    (:HOV_LANE . 6)
    (:NONE . 0)
    (:LEFT__LEFT_LANEMARK . 1)
    (:LEFT__RIGHT_LANEMARK . 2)
    (:RIGHT__LEFT_LANEMARK . 3)
    (:RIGHT__RIGHT_LANEMARK . 4))
)
(cl:defmethod roslisp-msg-protocol:serialize ((msg <AdjacentLane>) ostream)
  "Serializes a message object of type '<AdjacentLane>"
  (roslisp-msg-protocol:serialize (cl:slot-value msg 'header) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'Lanes_Adjacent_Count)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'Adjacent_Type)) ostream)
  (cl:let ((bits (roslisp-utils:encode-double-float-bits (cl:slot-value msg 'Adjacent_Confidence))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 32) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 40) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 48) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 56) bits) ostream))
  (cl:let ((bits (roslisp-utils:encode-double-float-bits (cl:slot-value msg 'Adjacent_View_Range_Start))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 32) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 40) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 48) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 56) bits) ostream))
  (cl:let ((bits (roslisp-utils:encode-double-float-bits (cl:slot-value msg 'Adjacent_View_Range_End))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 32) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 40) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 48) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 56) bits) ostream))
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'Adjacent_Line_Role)) ostream)
  (roslisp-msg-protocol:serialize (cl:slot-value msg 'Adjacent_Line_C) ostream)
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <AdjacentLane>) istream)
  "Deserializes a message object of type '<AdjacentLane>"
  (roslisp-msg-protocol:deserialize (cl:slot-value msg 'header) istream)
    (cl:setf (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'Lanes_Adjacent_Count)) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'Adjacent_Type)) (cl:read-byte istream))
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 32) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 40) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 48) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 56) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'Adjacent_Confidence) (roslisp-utils:decode-double-float-bits bits)))
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 32) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 40) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 48) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 56) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'Adjacent_View_Range_Start) (roslisp-utils:decode-double-float-bits bits)))
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 32) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 40) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 48) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 56) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'Adjacent_View_Range_End) (roslisp-utils:decode-double-float-bits bits)))
    (cl:setf (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'Adjacent_Line_Role)) (cl:read-byte istream))
  (roslisp-msg-protocol:deserialize (cl:slot-value msg 'Adjacent_Line_C) istream)
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<AdjacentLane>)))
  "Returns string type for a message object of type '<AdjacentLane>"
  "data_parse/AdjacentLane")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'AdjacentLane)))
  "Returns string type for a message object of type 'AdjacentLane"
  "data_parse/AdjacentLane")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<AdjacentLane>)))
  "Returns md5sum for a message object of type '<AdjacentLane>"
  "58e1312381e41b759ad9062603e465e3")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'AdjacentLane)))
  "Returns md5sum for a message object of type 'AdjacentLane"
  "58e1312381e41b759ad9062603e465e3")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<AdjacentLane>)))
  "Returns full string definition for message of type '<AdjacentLane>"
  (cl:format cl:nil "std_msgs/Header header~%~%uint8 Lanes_Adjacent_Count~%# enum~%uint8 Adjacent_Type~%uint8 UNDECIDED = 0~%uint8 SOLID = 1~%uint8 DASHED = 2~%uint8 DLM = 3 ~%uint8 BOTTS = 4~%uint8 DECELERATION = 5~%uint8 HOV_LANE = 6~%~%float64 Adjacent_Confidence~%float64 Adjacent_View_Range_Start~%float64 Adjacent_View_Range_End~%~%# enum~%uint8 Adjacent_Line_Role~%uint8 NONE = 0~%uint8 LEFT__LEFT_LANEMARK = 1~%uint8 LEFT__RIGHT_LANEMARK = 2~%uint8 RIGHT__LEFT_LANEMARK = 3~%uint8 RIGHT__RIGHT_LANEMARK = 4~%~%LHParam Adjacent_Line_C~%================================================================================~%MSG: std_msgs/Header~%# Standard metadata for higher-level stamped data types.~%# This is generally used to communicate timestamped data ~%# in a particular coordinate frame.~%# ~%# sequence ID: consecutively increasing ID ~%uint32 seq~%#Two-integer timestamp that is expressed as:~%# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')~%# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')~%# time-handling sugar is provided by the client library~%time stamp~%#Frame this data is associated with~%string frame_id~%~%================================================================================~%MSG: data_parse/LHParam~%float64 LH_C0~%float64 LH_C1~%float64 LH_C2~%float64 LH_C3~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'AdjacentLane)))
  "Returns full string definition for message of type 'AdjacentLane"
  (cl:format cl:nil "std_msgs/Header header~%~%uint8 Lanes_Adjacent_Count~%# enum~%uint8 Adjacent_Type~%uint8 UNDECIDED = 0~%uint8 SOLID = 1~%uint8 DASHED = 2~%uint8 DLM = 3 ~%uint8 BOTTS = 4~%uint8 DECELERATION = 5~%uint8 HOV_LANE = 6~%~%float64 Adjacent_Confidence~%float64 Adjacent_View_Range_Start~%float64 Adjacent_View_Range_End~%~%# enum~%uint8 Adjacent_Line_Role~%uint8 NONE = 0~%uint8 LEFT__LEFT_LANEMARK = 1~%uint8 LEFT__RIGHT_LANEMARK = 2~%uint8 RIGHT__LEFT_LANEMARK = 3~%uint8 RIGHT__RIGHT_LANEMARK = 4~%~%LHParam Adjacent_Line_C~%================================================================================~%MSG: std_msgs/Header~%# Standard metadata for higher-level stamped data types.~%# This is generally used to communicate timestamped data ~%# in a particular coordinate frame.~%# ~%# sequence ID: consecutively increasing ID ~%uint32 seq~%#Two-integer timestamp that is expressed as:~%# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')~%# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')~%# time-handling sugar is provided by the client library~%time stamp~%#Frame this data is associated with~%string frame_id~%~%================================================================================~%MSG: data_parse/LHParam~%float64 LH_C0~%float64 LH_C1~%float64 LH_C2~%float64 LH_C3~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <AdjacentLane>))
  (cl:+ 0
     (roslisp-msg-protocol:serialization-length (cl:slot-value msg 'header))
     1
     1
     8
     8
     8
     1
     (roslisp-msg-protocol:serialization-length (cl:slot-value msg 'Adjacent_Line_C))
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <AdjacentLane>))
  "Converts a ROS message object to a list"
  (cl:list 'AdjacentLane
    (cl:cons ':header (header msg))
    (cl:cons ':Lanes_Adjacent_Count (Lanes_Adjacent_Count msg))
    (cl:cons ':Adjacent_Type (Adjacent_Type msg))
    (cl:cons ':Adjacent_Confidence (Adjacent_Confidence msg))
    (cl:cons ':Adjacent_View_Range_Start (Adjacent_View_Range_Start msg))
    (cl:cons ':Adjacent_View_Range_End (Adjacent_View_Range_End msg))
    (cl:cons ':Adjacent_Line_Role (Adjacent_Line_Role msg))
    (cl:cons ':Adjacent_Line_C (Adjacent_Line_C msg))
))
