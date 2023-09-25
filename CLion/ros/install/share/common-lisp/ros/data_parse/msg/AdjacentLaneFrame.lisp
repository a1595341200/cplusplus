; Auto-generated. Do not edit!


(cl:in-package data_parse-msg)


;//! \htmlinclude AdjacentLaneFrame.msg.html

(cl:defclass <AdjacentLaneFrame> (roslisp-msg-protocol:ros-message)
  ((header
    :reader header
    :initarg :header
    :type std_msgs-msg:Header
    :initform (cl:make-instance 'std_msgs-msg:Header))
   (adject_lanes
    :reader adject_lanes
    :initarg :adject_lanes
    :type (cl:vector data_parse-msg:AdjacentLane)
   :initform (cl:make-array 0 :element-type 'data_parse-msg:AdjacentLane :initial-element (cl:make-instance 'data_parse-msg:AdjacentLane))))
)

(cl:defclass AdjacentLaneFrame (<AdjacentLaneFrame>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <AdjacentLaneFrame>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'AdjacentLaneFrame)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name data_parse-msg:<AdjacentLaneFrame> is deprecated: use data_parse-msg:AdjacentLaneFrame instead.")))

(cl:ensure-generic-function 'header-val :lambda-list '(m))
(cl:defmethod header-val ((m <AdjacentLaneFrame>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader data_parse-msg:header-val is deprecated.  Use data_parse-msg:header instead.")
  (header m))

(cl:ensure-generic-function 'adject_lanes-val :lambda-list '(m))
(cl:defmethod adject_lanes-val ((m <AdjacentLaneFrame>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader data_parse-msg:adject_lanes-val is deprecated.  Use data_parse-msg:adject_lanes instead.")
  (adject_lanes m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <AdjacentLaneFrame>) ostream)
  "Serializes a message object of type '<AdjacentLaneFrame>"
  (roslisp-msg-protocol:serialize (cl:slot-value msg 'header) ostream)
  (cl:let ((__ros_arr_len (cl:length (cl:slot-value msg 'adject_lanes))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) __ros_arr_len) ostream))
  (cl:map cl:nil #'(cl:lambda (ele) (roslisp-msg-protocol:serialize ele ostream))
   (cl:slot-value msg 'adject_lanes))
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <AdjacentLaneFrame>) istream)
  "Deserializes a message object of type '<AdjacentLaneFrame>"
  (roslisp-msg-protocol:deserialize (cl:slot-value msg 'header) istream)
  (cl:let ((__ros_arr_len 0))
    (cl:setf (cl:ldb (cl:byte 8 0) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 8) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 16) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 24) __ros_arr_len) (cl:read-byte istream))
  (cl:setf (cl:slot-value msg 'adject_lanes) (cl:make-array __ros_arr_len))
  (cl:let ((vals (cl:slot-value msg 'adject_lanes)))
    (cl:dotimes (i __ros_arr_len)
    (cl:setf (cl:aref vals i) (cl:make-instance 'data_parse-msg:AdjacentLane))
  (roslisp-msg-protocol:deserialize (cl:aref vals i) istream))))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<AdjacentLaneFrame>)))
  "Returns string type for a message object of type '<AdjacentLaneFrame>"
  "data_parse/AdjacentLaneFrame")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'AdjacentLaneFrame)))
  "Returns string type for a message object of type 'AdjacentLaneFrame"
  "data_parse/AdjacentLaneFrame")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<AdjacentLaneFrame>)))
  "Returns md5sum for a message object of type '<AdjacentLaneFrame>"
  "bdfb3c3ee954044143731d5348c7d930")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'AdjacentLaneFrame)))
  "Returns md5sum for a message object of type 'AdjacentLaneFrame"
  "bdfb3c3ee954044143731d5348c7d930")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<AdjacentLaneFrame>)))
  "Returns full string definition for message of type '<AdjacentLaneFrame>"
  (cl:format cl:nil "std_msgs/Header header~%~%AdjacentLane[] adject_lanes~%================================================================================~%MSG: std_msgs/Header~%# Standard metadata for higher-level stamped data types.~%# This is generally used to communicate timestamped data ~%# in a particular coordinate frame.~%# ~%# sequence ID: consecutively increasing ID ~%uint32 seq~%#Two-integer timestamp that is expressed as:~%# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')~%# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')~%# time-handling sugar is provided by the client library~%time stamp~%#Frame this data is associated with~%string frame_id~%~%================================================================================~%MSG: data_parse/AdjacentLane~%std_msgs/Header header~%~%uint8 Lanes_Adjacent_Count~%# enum~%uint8 Adjacent_Type~%uint8 UNDECIDED = 0~%uint8 SOLID = 1~%uint8 DASHED = 2~%uint8 DLM = 3 ~%uint8 BOTTS = 4~%uint8 DECELERATION = 5~%uint8 HOV_LANE = 6~%~%float64 Adjacent_Confidence~%float64 Adjacent_View_Range_Start~%float64 Adjacent_View_Range_End~%~%# enum~%uint8 Adjacent_Line_Role~%uint8 NONE = 0~%uint8 LEFT__LEFT_LANEMARK = 1~%uint8 LEFT__RIGHT_LANEMARK = 2~%uint8 RIGHT__LEFT_LANEMARK = 3~%uint8 RIGHT__RIGHT_LANEMARK = 4~%~%LHParam Adjacent_Line_C~%================================================================================~%MSG: data_parse/LHParam~%float64 LH_C0~%float64 LH_C1~%float64 LH_C2~%float64 LH_C3~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'AdjacentLaneFrame)))
  "Returns full string definition for message of type 'AdjacentLaneFrame"
  (cl:format cl:nil "std_msgs/Header header~%~%AdjacentLane[] adject_lanes~%================================================================================~%MSG: std_msgs/Header~%# Standard metadata for higher-level stamped data types.~%# This is generally used to communicate timestamped data ~%# in a particular coordinate frame.~%# ~%# sequence ID: consecutively increasing ID ~%uint32 seq~%#Two-integer timestamp that is expressed as:~%# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')~%# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')~%# time-handling sugar is provided by the client library~%time stamp~%#Frame this data is associated with~%string frame_id~%~%================================================================================~%MSG: data_parse/AdjacentLane~%std_msgs/Header header~%~%uint8 Lanes_Adjacent_Count~%# enum~%uint8 Adjacent_Type~%uint8 UNDECIDED = 0~%uint8 SOLID = 1~%uint8 DASHED = 2~%uint8 DLM = 3 ~%uint8 BOTTS = 4~%uint8 DECELERATION = 5~%uint8 HOV_LANE = 6~%~%float64 Adjacent_Confidence~%float64 Adjacent_View_Range_Start~%float64 Adjacent_View_Range_End~%~%# enum~%uint8 Adjacent_Line_Role~%uint8 NONE = 0~%uint8 LEFT__LEFT_LANEMARK = 1~%uint8 LEFT__RIGHT_LANEMARK = 2~%uint8 RIGHT__LEFT_LANEMARK = 3~%uint8 RIGHT__RIGHT_LANEMARK = 4~%~%LHParam Adjacent_Line_C~%================================================================================~%MSG: data_parse/LHParam~%float64 LH_C0~%float64 LH_C1~%float64 LH_C2~%float64 LH_C3~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <AdjacentLaneFrame>))
  (cl:+ 0
     (roslisp-msg-protocol:serialization-length (cl:slot-value msg 'header))
     4 (cl:reduce #'cl:+ (cl:slot-value msg 'adject_lanes) :key #'(cl:lambda (ele) (cl:declare (cl:ignorable ele)) (cl:+ (roslisp-msg-protocol:serialization-length ele))))
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <AdjacentLaneFrame>))
  "Converts a ROS message object to a list"
  (cl:list 'AdjacentLaneFrame
    (cl:cons ':header (header msg))
    (cl:cons ':adject_lanes (adject_lanes msg))
))
