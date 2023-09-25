; Auto-generated. Do not edit!


(cl:in-package data_parse-msg)


;//! \htmlinclude EgoLaneFrame.msg.html

(cl:defclass <EgoLaneFrame> (roslisp-msg-protocol:ros-message)
  ((header
    :reader header
    :initarg :header
    :type std_msgs-msg:Header
    :initform (cl:make-instance 'std_msgs-msg:Header))
   (lanes
    :reader lanes
    :initarg :lanes
    :type (cl:vector data_parse-msg:EgoLane)
   :initform (cl:make-array 0 :element-type 'data_parse-msg:EgoLane :initial-element (cl:make-instance 'data_parse-msg:EgoLane))))
)

(cl:defclass EgoLaneFrame (<EgoLaneFrame>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <EgoLaneFrame>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'EgoLaneFrame)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name data_parse-msg:<EgoLaneFrame> is deprecated: use data_parse-msg:EgoLaneFrame instead.")))

(cl:ensure-generic-function 'header-val :lambda-list '(m))
(cl:defmethod header-val ((m <EgoLaneFrame>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader data_parse-msg:header-val is deprecated.  Use data_parse-msg:header instead.")
  (header m))

(cl:ensure-generic-function 'lanes-val :lambda-list '(m))
(cl:defmethod lanes-val ((m <EgoLaneFrame>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader data_parse-msg:lanes-val is deprecated.  Use data_parse-msg:lanes instead.")
  (lanes m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <EgoLaneFrame>) ostream)
  "Serializes a message object of type '<EgoLaneFrame>"
  (roslisp-msg-protocol:serialize (cl:slot-value msg 'header) ostream)
  (cl:let ((__ros_arr_len (cl:length (cl:slot-value msg 'lanes))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) __ros_arr_len) ostream))
  (cl:map cl:nil #'(cl:lambda (ele) (roslisp-msg-protocol:serialize ele ostream))
   (cl:slot-value msg 'lanes))
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <EgoLaneFrame>) istream)
  "Deserializes a message object of type '<EgoLaneFrame>"
  (roslisp-msg-protocol:deserialize (cl:slot-value msg 'header) istream)
  (cl:let ((__ros_arr_len 0))
    (cl:setf (cl:ldb (cl:byte 8 0) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 8) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 16) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 24) __ros_arr_len) (cl:read-byte istream))
  (cl:setf (cl:slot-value msg 'lanes) (cl:make-array __ros_arr_len))
  (cl:let ((vals (cl:slot-value msg 'lanes)))
    (cl:dotimes (i __ros_arr_len)
    (cl:setf (cl:aref vals i) (cl:make-instance 'data_parse-msg:EgoLane))
  (roslisp-msg-protocol:deserialize (cl:aref vals i) istream))))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<EgoLaneFrame>)))
  "Returns string type for a message object of type '<EgoLaneFrame>"
  "data_parse/EgoLaneFrame")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'EgoLaneFrame)))
  "Returns string type for a message object of type 'EgoLaneFrame"
  "data_parse/EgoLaneFrame")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<EgoLaneFrame>)))
  "Returns md5sum for a message object of type '<EgoLaneFrame>"
  "8128611ad76285e5f5d998a2253fa961")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'EgoLaneFrame)))
  "Returns md5sum for a message object of type 'EgoLaneFrame"
  "8128611ad76285e5f5d998a2253fa961")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<EgoLaneFrame>)))
  "Returns full string definition for message of type '<EgoLaneFrame>"
  (cl:format cl:nil "std_msgs/Header header~%~%EgoLane[] lanes~%================================================================================~%MSG: std_msgs/Header~%# Standard metadata for higher-level stamped data types.~%# This is generally used to communicate timestamped data ~%# in a particular coordinate frame.~%# ~%# sequence ID: consecutively increasing ID ~%uint32 seq~%#Two-integer timestamp that is expressed as:~%# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')~%# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')~%# time-handling sugar is provided by the client library~%time stamp~%#Frame this data is associated with~%string frame_id~%~%================================================================================~%MSG: data_parse/EgoLane~%std_msgs/Header header~%~%bool Is_Construction_Area~%~%float64 LH_Confidence~%~%# enum~%uint8 LH_Lanemark_Type ~%uint8 UNDECIDED = 0~%uint8 SOLID = 1~%uint8 DASHED = 2~%uint8 DLM = 3 ~%uint8 BOTTS = 4~%uint8 DECELERATION = 5~%uint8 HOV_LANE = 6~%~%# enum~%uint8 LH_Side~%uint8 UNKNOWN = 0~%uint8 LEFT = 1~%uint8 RIGHT = 2~%~%float64 LH_VR_Start~%float64 LH_VR_End~%~%LHParam LH_C~%~%~%~%~%================================================================================~%MSG: data_parse/LHParam~%float64 LH_C0~%float64 LH_C1~%float64 LH_C2~%float64 LH_C3~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'EgoLaneFrame)))
  "Returns full string definition for message of type 'EgoLaneFrame"
  (cl:format cl:nil "std_msgs/Header header~%~%EgoLane[] lanes~%================================================================================~%MSG: std_msgs/Header~%# Standard metadata for higher-level stamped data types.~%# This is generally used to communicate timestamped data ~%# in a particular coordinate frame.~%# ~%# sequence ID: consecutively increasing ID ~%uint32 seq~%#Two-integer timestamp that is expressed as:~%# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')~%# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')~%# time-handling sugar is provided by the client library~%time stamp~%#Frame this data is associated with~%string frame_id~%~%================================================================================~%MSG: data_parse/EgoLane~%std_msgs/Header header~%~%bool Is_Construction_Area~%~%float64 LH_Confidence~%~%# enum~%uint8 LH_Lanemark_Type ~%uint8 UNDECIDED = 0~%uint8 SOLID = 1~%uint8 DASHED = 2~%uint8 DLM = 3 ~%uint8 BOTTS = 4~%uint8 DECELERATION = 5~%uint8 HOV_LANE = 6~%~%# enum~%uint8 LH_Side~%uint8 UNKNOWN = 0~%uint8 LEFT = 1~%uint8 RIGHT = 2~%~%float64 LH_VR_Start~%float64 LH_VR_End~%~%LHParam LH_C~%~%~%~%~%================================================================================~%MSG: data_parse/LHParam~%float64 LH_C0~%float64 LH_C1~%float64 LH_C2~%float64 LH_C3~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <EgoLaneFrame>))
  (cl:+ 0
     (roslisp-msg-protocol:serialization-length (cl:slot-value msg 'header))
     4 (cl:reduce #'cl:+ (cl:slot-value msg 'lanes) :key #'(cl:lambda (ele) (cl:declare (cl:ignorable ele)) (cl:+ (roslisp-msg-protocol:serialization-length ele))))
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <EgoLaneFrame>))
  "Converts a ROS message object to a list"
  (cl:list 'EgoLaneFrame
    (cl:cons ':header (header msg))
    (cl:cons ':lanes (lanes msg))
))
