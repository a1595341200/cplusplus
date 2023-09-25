; Auto-generated. Do not edit!


(cl:in-package data_parse-msg)


;//! \htmlinclude LHParam.msg.html

(cl:defclass <LHParam> (roslisp-msg-protocol:ros-message)
  ((LH_C0
    :reader LH_C0
    :initarg :LH_C0
    :type cl:float
    :initform 0.0)
   (LH_C1
    :reader LH_C1
    :initarg :LH_C1
    :type cl:float
    :initform 0.0)
   (LH_C2
    :reader LH_C2
    :initarg :LH_C2
    :type cl:float
    :initform 0.0)
   (LH_C3
    :reader LH_C3
    :initarg :LH_C3
    :type cl:float
    :initform 0.0))
)

(cl:defclass LHParam (<LHParam>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <LHParam>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'LHParam)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name data_parse-msg:<LHParam> is deprecated: use data_parse-msg:LHParam instead.")))

(cl:ensure-generic-function 'LH_C0-val :lambda-list '(m))
(cl:defmethod LH_C0-val ((m <LHParam>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader data_parse-msg:LH_C0-val is deprecated.  Use data_parse-msg:LH_C0 instead.")
  (LH_C0 m))

(cl:ensure-generic-function 'LH_C1-val :lambda-list '(m))
(cl:defmethod LH_C1-val ((m <LHParam>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader data_parse-msg:LH_C1-val is deprecated.  Use data_parse-msg:LH_C1 instead.")
  (LH_C1 m))

(cl:ensure-generic-function 'LH_C2-val :lambda-list '(m))
(cl:defmethod LH_C2-val ((m <LHParam>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader data_parse-msg:LH_C2-val is deprecated.  Use data_parse-msg:LH_C2 instead.")
  (LH_C2 m))

(cl:ensure-generic-function 'LH_C3-val :lambda-list '(m))
(cl:defmethod LH_C3-val ((m <LHParam>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader data_parse-msg:LH_C3-val is deprecated.  Use data_parse-msg:LH_C3 instead.")
  (LH_C3 m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <LHParam>) ostream)
  "Serializes a message object of type '<LHParam>"
  (cl:let ((bits (roslisp-utils:encode-double-float-bits (cl:slot-value msg 'LH_C0))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 32) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 40) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 48) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 56) bits) ostream))
  (cl:let ((bits (roslisp-utils:encode-double-float-bits (cl:slot-value msg 'LH_C1))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 32) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 40) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 48) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 56) bits) ostream))
  (cl:let ((bits (roslisp-utils:encode-double-float-bits (cl:slot-value msg 'LH_C2))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 32) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 40) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 48) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 56) bits) ostream))
  (cl:let ((bits (roslisp-utils:encode-double-float-bits (cl:slot-value msg 'LH_C3))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 32) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 40) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 48) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 56) bits) ostream))
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <LHParam>) istream)
  "Deserializes a message object of type '<LHParam>"
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 32) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 40) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 48) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 56) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'LH_C0) (roslisp-utils:decode-double-float-bits bits)))
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 32) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 40) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 48) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 56) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'LH_C1) (roslisp-utils:decode-double-float-bits bits)))
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 32) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 40) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 48) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 56) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'LH_C2) (roslisp-utils:decode-double-float-bits bits)))
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 32) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 40) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 48) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 56) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'LH_C3) (roslisp-utils:decode-double-float-bits bits)))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<LHParam>)))
  "Returns string type for a message object of type '<LHParam>"
  "data_parse/LHParam")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'LHParam)))
  "Returns string type for a message object of type 'LHParam"
  "data_parse/LHParam")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<LHParam>)))
  "Returns md5sum for a message object of type '<LHParam>"
  "e4226e7fb1ecf4c39595d9d3e9996560")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'LHParam)))
  "Returns md5sum for a message object of type 'LHParam"
  "e4226e7fb1ecf4c39595d9d3e9996560")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<LHParam>)))
  "Returns full string definition for message of type '<LHParam>"
  (cl:format cl:nil "float64 LH_C0~%float64 LH_C1~%float64 LH_C2~%float64 LH_C3~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'LHParam)))
  "Returns full string definition for message of type 'LHParam"
  (cl:format cl:nil "float64 LH_C0~%float64 LH_C1~%float64 LH_C2~%float64 LH_C3~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <LHParam>))
  (cl:+ 0
     8
     8
     8
     8
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <LHParam>))
  "Converts a ROS message object to a list"
  (cl:list 'LHParam
    (cl:cons ':LH_C0 (LH_C0 msg))
    (cl:cons ':LH_C1 (LH_C1 msg))
    (cl:cons ':LH_C2 (LH_C2 msg))
    (cl:cons ':LH_C3 (LH_C3 msg))
))
