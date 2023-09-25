; Auto-generated. Do not edit!


(cl:in-package data_parse-msg)


;//! \htmlinclude ObjectFrame.msg.html

(cl:defclass <ObjectFrame> (roslisp-msg-protocol:ros-message)
  ((header
    :reader header
    :initarg :header
    :type std_msgs-msg:Header
    :initform (cl:make-instance 'std_msgs-msg:Header))
   (HostSpeed
    :reader HostSpeed
    :initarg :HostSpeed
    :type cl:float
    :initform 0.0)
   (HostYawRate
    :reader HostYawRate
    :initarg :HostYawRate
    :type cl:float
    :initform 0.0)
   (StsBlkd0bin
    :reader StsBlkd0bin
    :initarg :StsBlkd0bin
    :type cl:float
    :initform 0.0)
   (StsBlkdConf
    :reader StsBlkdConf
    :initarg :StsBlkdConf
    :type cl:fixnum
    :initform 0)
   (StsChks
    :reader StsChks
    :initarg :StsChks
    :type cl:fixnum
    :initform 0)
   (StsCntr
    :reader StsCntr
    :initarg :StsCntr
    :type cl:fixnum
    :initform 0)
   (StsDstbc
    :reader StsDstbc
    :initarg :StsDstbc
    :type cl:fixnum
    :initform 0)
   (StsEna
    :reader StsEna
    :initarg :StsEna
    :type cl:fixnum
    :initform 0)
   (StsFaulty
    :reader StsFaulty
    :initarg :StsFaulty
    :type cl:fixnum
    :initform 0)
   (StsIfVersMajor
    :reader StsIfVersMajor
    :initarg :StsIfVersMajor
    :type cl:fixnum
    :initform 0)
   (StsIfVersMinor
    :reader StsIfVersMinor
    :initarg :StsIfVersMinor
    :type cl:fixnum
    :initform 0)
   (StsLatency
    :reader StsLatency
    :initarg :StsLatency
    :type cl:float
    :initform 0.0)
   (StsMisAlign
    :reader StsMisAlign
    :initarg :StsMisAlign
    :type cl:fixnum
    :initform 0)
   (StsMissCom
    :reader StsMissCom
    :initarg :StsMissCom
    :type cl:fixnum
    :initform 0)
   (StsRdrNrDetn
    :reader StsRdrNrDetn
    :initarg :StsRdrNrDetn
    :type cl:fixnum
    :initform 0)
   (StsRdrNrObj
    :reader StsRdrNrObj
    :initarg :StsRdrNrObj
    :type cl:fixnum
    :initform 0)
   (StsSftyFlt
    :reader StsSftyFlt
    :initarg :StsSftyFlt
    :type cl:fixnum
    :initform 0)
   (StsTiStamp
    :reader StsTiStamp
    :initarg :StsTiStamp
    :type cl:float
    :initform 0.0)
   (StsWhlSpdCmpFac
    :reader StsWhlSpdCmpFac
    :initarg :StsWhlSpdCmpFac
    :type cl:fixnum
    :initform 0)
   (TiStampStsGlbTiBas
    :reader TiStampStsGlbTiBas
    :initarg :TiStampStsGlbTiBas
    :type cl:fixnum
    :initform 0)
   (TiStampStsSyncToGatewy
    :reader TiStampStsSyncToGatewy
    :initarg :TiStampStsSyncToGatewy
    :type cl:fixnum
    :initform 0)
   (TiStampStsTiLeap
    :reader TiStampStsTiLeap
    :initarg :TiStampStsTiLeap
    :type cl:fixnum
    :initform 0)
   (TiStampStsTiOut
    :reader TiStampStsTiOut
    :initarg :TiStampStsTiOut
    :type cl:fixnum
    :initform 0)
   (sensor_type
    :reader sensor_type
    :initarg :sensor_type
    :type cl:fixnum
    :initform 0)
   (Blockage
    :reader Blockage
    :initarg :Blockage
    :type cl:fixnum
    :initform 0)
   (Calibration
    :reader Calibration
    :initarg :Calibration
    :type cl:fixnum
    :initform 0)
   (Fault
    :reader Fault
    :initarg :Fault
    :type cl:fixnum
    :initform 0)
   (objects
    :reader objects
    :initarg :objects
    :type (cl:vector data_parse-msg:Object)
   :initform (cl:make-array 0 :element-type 'data_parse-msg:Object :initial-element (cl:make-instance 'data_parse-msg:Object))))
)

(cl:defclass ObjectFrame (<ObjectFrame>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <ObjectFrame>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'ObjectFrame)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name data_parse-msg:<ObjectFrame> is deprecated: use data_parse-msg:ObjectFrame instead.")))

(cl:ensure-generic-function 'header-val :lambda-list '(m))
(cl:defmethod header-val ((m <ObjectFrame>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader data_parse-msg:header-val is deprecated.  Use data_parse-msg:header instead.")
  (header m))

(cl:ensure-generic-function 'HostSpeed-val :lambda-list '(m))
(cl:defmethod HostSpeed-val ((m <ObjectFrame>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader data_parse-msg:HostSpeed-val is deprecated.  Use data_parse-msg:HostSpeed instead.")
  (HostSpeed m))

(cl:ensure-generic-function 'HostYawRate-val :lambda-list '(m))
(cl:defmethod HostYawRate-val ((m <ObjectFrame>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader data_parse-msg:HostYawRate-val is deprecated.  Use data_parse-msg:HostYawRate instead.")
  (HostYawRate m))

(cl:ensure-generic-function 'StsBlkd0bin-val :lambda-list '(m))
(cl:defmethod StsBlkd0bin-val ((m <ObjectFrame>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader data_parse-msg:StsBlkd0bin-val is deprecated.  Use data_parse-msg:StsBlkd0bin instead.")
  (StsBlkd0bin m))

(cl:ensure-generic-function 'StsBlkdConf-val :lambda-list '(m))
(cl:defmethod StsBlkdConf-val ((m <ObjectFrame>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader data_parse-msg:StsBlkdConf-val is deprecated.  Use data_parse-msg:StsBlkdConf instead.")
  (StsBlkdConf m))

(cl:ensure-generic-function 'StsChks-val :lambda-list '(m))
(cl:defmethod StsChks-val ((m <ObjectFrame>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader data_parse-msg:StsChks-val is deprecated.  Use data_parse-msg:StsChks instead.")
  (StsChks m))

(cl:ensure-generic-function 'StsCntr-val :lambda-list '(m))
(cl:defmethod StsCntr-val ((m <ObjectFrame>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader data_parse-msg:StsCntr-val is deprecated.  Use data_parse-msg:StsCntr instead.")
  (StsCntr m))

(cl:ensure-generic-function 'StsDstbc-val :lambda-list '(m))
(cl:defmethod StsDstbc-val ((m <ObjectFrame>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader data_parse-msg:StsDstbc-val is deprecated.  Use data_parse-msg:StsDstbc instead.")
  (StsDstbc m))

(cl:ensure-generic-function 'StsEna-val :lambda-list '(m))
(cl:defmethod StsEna-val ((m <ObjectFrame>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader data_parse-msg:StsEna-val is deprecated.  Use data_parse-msg:StsEna instead.")
  (StsEna m))

(cl:ensure-generic-function 'StsFaulty-val :lambda-list '(m))
(cl:defmethod StsFaulty-val ((m <ObjectFrame>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader data_parse-msg:StsFaulty-val is deprecated.  Use data_parse-msg:StsFaulty instead.")
  (StsFaulty m))

(cl:ensure-generic-function 'StsIfVersMajor-val :lambda-list '(m))
(cl:defmethod StsIfVersMajor-val ((m <ObjectFrame>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader data_parse-msg:StsIfVersMajor-val is deprecated.  Use data_parse-msg:StsIfVersMajor instead.")
  (StsIfVersMajor m))

(cl:ensure-generic-function 'StsIfVersMinor-val :lambda-list '(m))
(cl:defmethod StsIfVersMinor-val ((m <ObjectFrame>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader data_parse-msg:StsIfVersMinor-val is deprecated.  Use data_parse-msg:StsIfVersMinor instead.")
  (StsIfVersMinor m))

(cl:ensure-generic-function 'StsLatency-val :lambda-list '(m))
(cl:defmethod StsLatency-val ((m <ObjectFrame>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader data_parse-msg:StsLatency-val is deprecated.  Use data_parse-msg:StsLatency instead.")
  (StsLatency m))

(cl:ensure-generic-function 'StsMisAlign-val :lambda-list '(m))
(cl:defmethod StsMisAlign-val ((m <ObjectFrame>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader data_parse-msg:StsMisAlign-val is deprecated.  Use data_parse-msg:StsMisAlign instead.")
  (StsMisAlign m))

(cl:ensure-generic-function 'StsMissCom-val :lambda-list '(m))
(cl:defmethod StsMissCom-val ((m <ObjectFrame>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader data_parse-msg:StsMissCom-val is deprecated.  Use data_parse-msg:StsMissCom instead.")
  (StsMissCom m))

(cl:ensure-generic-function 'StsRdrNrDetn-val :lambda-list '(m))
(cl:defmethod StsRdrNrDetn-val ((m <ObjectFrame>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader data_parse-msg:StsRdrNrDetn-val is deprecated.  Use data_parse-msg:StsRdrNrDetn instead.")
  (StsRdrNrDetn m))

(cl:ensure-generic-function 'StsRdrNrObj-val :lambda-list '(m))
(cl:defmethod StsRdrNrObj-val ((m <ObjectFrame>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader data_parse-msg:StsRdrNrObj-val is deprecated.  Use data_parse-msg:StsRdrNrObj instead.")
  (StsRdrNrObj m))

(cl:ensure-generic-function 'StsSftyFlt-val :lambda-list '(m))
(cl:defmethod StsSftyFlt-val ((m <ObjectFrame>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader data_parse-msg:StsSftyFlt-val is deprecated.  Use data_parse-msg:StsSftyFlt instead.")
  (StsSftyFlt m))

(cl:ensure-generic-function 'StsTiStamp-val :lambda-list '(m))
(cl:defmethod StsTiStamp-val ((m <ObjectFrame>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader data_parse-msg:StsTiStamp-val is deprecated.  Use data_parse-msg:StsTiStamp instead.")
  (StsTiStamp m))

(cl:ensure-generic-function 'StsWhlSpdCmpFac-val :lambda-list '(m))
(cl:defmethod StsWhlSpdCmpFac-val ((m <ObjectFrame>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader data_parse-msg:StsWhlSpdCmpFac-val is deprecated.  Use data_parse-msg:StsWhlSpdCmpFac instead.")
  (StsWhlSpdCmpFac m))

(cl:ensure-generic-function 'TiStampStsGlbTiBas-val :lambda-list '(m))
(cl:defmethod TiStampStsGlbTiBas-val ((m <ObjectFrame>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader data_parse-msg:TiStampStsGlbTiBas-val is deprecated.  Use data_parse-msg:TiStampStsGlbTiBas instead.")
  (TiStampStsGlbTiBas m))

(cl:ensure-generic-function 'TiStampStsSyncToGatewy-val :lambda-list '(m))
(cl:defmethod TiStampStsSyncToGatewy-val ((m <ObjectFrame>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader data_parse-msg:TiStampStsSyncToGatewy-val is deprecated.  Use data_parse-msg:TiStampStsSyncToGatewy instead.")
  (TiStampStsSyncToGatewy m))

(cl:ensure-generic-function 'TiStampStsTiLeap-val :lambda-list '(m))
(cl:defmethod TiStampStsTiLeap-val ((m <ObjectFrame>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader data_parse-msg:TiStampStsTiLeap-val is deprecated.  Use data_parse-msg:TiStampStsTiLeap instead.")
  (TiStampStsTiLeap m))

(cl:ensure-generic-function 'TiStampStsTiOut-val :lambda-list '(m))
(cl:defmethod TiStampStsTiOut-val ((m <ObjectFrame>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader data_parse-msg:TiStampStsTiOut-val is deprecated.  Use data_parse-msg:TiStampStsTiOut instead.")
  (TiStampStsTiOut m))

(cl:ensure-generic-function 'sensor_type-val :lambda-list '(m))
(cl:defmethod sensor_type-val ((m <ObjectFrame>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader data_parse-msg:sensor_type-val is deprecated.  Use data_parse-msg:sensor_type instead.")
  (sensor_type m))

(cl:ensure-generic-function 'Blockage-val :lambda-list '(m))
(cl:defmethod Blockage-val ((m <ObjectFrame>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader data_parse-msg:Blockage-val is deprecated.  Use data_parse-msg:Blockage instead.")
  (Blockage m))

(cl:ensure-generic-function 'Calibration-val :lambda-list '(m))
(cl:defmethod Calibration-val ((m <ObjectFrame>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader data_parse-msg:Calibration-val is deprecated.  Use data_parse-msg:Calibration instead.")
  (Calibration m))

(cl:ensure-generic-function 'Fault-val :lambda-list '(m))
(cl:defmethod Fault-val ((m <ObjectFrame>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader data_parse-msg:Fault-val is deprecated.  Use data_parse-msg:Fault instead.")
  (Fault m))

(cl:ensure-generic-function 'objects-val :lambda-list '(m))
(cl:defmethod objects-val ((m <ObjectFrame>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader data_parse-msg:objects-val is deprecated.  Use data_parse-msg:objects instead.")
  (objects m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <ObjectFrame>) ostream)
  "Serializes a message object of type '<ObjectFrame>"
  (roslisp-msg-protocol:serialize (cl:slot-value msg 'header) ostream)
  (cl:let ((bits (roslisp-utils:encode-double-float-bits (cl:slot-value msg 'HostSpeed))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 32) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 40) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 48) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 56) bits) ostream))
  (cl:let ((bits (roslisp-utils:encode-double-float-bits (cl:slot-value msg 'HostYawRate))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 32) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 40) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 48) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 56) bits) ostream))
  (cl:let ((bits (roslisp-utils:encode-double-float-bits (cl:slot-value msg 'StsBlkd0bin))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 32) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 40) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 48) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 56) bits) ostream))
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'StsBlkdConf)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'StsChks)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'StsCntr)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'StsDstbc)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'StsEna)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'StsFaulty)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'StsIfVersMajor)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'StsIfVersMinor)) ostream)
  (cl:let ((bits (roslisp-utils:encode-double-float-bits (cl:slot-value msg 'StsLatency))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 32) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 40) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 48) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 56) bits) ostream))
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'StsMisAlign)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'StsMissCom)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'StsRdrNrDetn)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'StsRdrNrObj)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'StsSftyFlt)) ostream)
  (cl:let ((bits (roslisp-utils:encode-double-float-bits (cl:slot-value msg 'StsTiStamp))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 32) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 40) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 48) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 56) bits) ostream))
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'StsWhlSpdCmpFac)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'TiStampStsGlbTiBas)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'TiStampStsSyncToGatewy)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'TiStampStsTiLeap)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'TiStampStsTiOut)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'sensor_type)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'Blockage)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'Calibration)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'Fault)) ostream)
  (cl:let ((__ros_arr_len (cl:length (cl:slot-value msg 'objects))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) __ros_arr_len) ostream))
  (cl:map cl:nil #'(cl:lambda (ele) (roslisp-msg-protocol:serialize ele ostream))
   (cl:slot-value msg 'objects))
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <ObjectFrame>) istream)
  "Deserializes a message object of type '<ObjectFrame>"
  (roslisp-msg-protocol:deserialize (cl:slot-value msg 'header) istream)
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 32) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 40) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 48) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 56) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'HostSpeed) (roslisp-utils:decode-double-float-bits bits)))
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 32) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 40) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 48) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 56) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'HostYawRate) (roslisp-utils:decode-double-float-bits bits)))
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 32) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 40) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 48) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 56) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'StsBlkd0bin) (roslisp-utils:decode-double-float-bits bits)))
    (cl:setf (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'StsBlkdConf)) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'StsChks)) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'StsCntr)) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'StsDstbc)) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'StsEna)) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'StsFaulty)) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'StsIfVersMajor)) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'StsIfVersMinor)) (cl:read-byte istream))
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 32) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 40) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 48) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 56) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'StsLatency) (roslisp-utils:decode-double-float-bits bits)))
    (cl:setf (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'StsMisAlign)) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'StsMissCom)) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'StsRdrNrDetn)) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'StsRdrNrObj)) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'StsSftyFlt)) (cl:read-byte istream))
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 32) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 40) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 48) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 56) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'StsTiStamp) (roslisp-utils:decode-double-float-bits bits)))
    (cl:setf (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'StsWhlSpdCmpFac)) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'TiStampStsGlbTiBas)) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'TiStampStsSyncToGatewy)) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'TiStampStsTiLeap)) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'TiStampStsTiOut)) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'sensor_type)) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'Blockage)) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'Calibration)) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'Fault)) (cl:read-byte istream))
  (cl:let ((__ros_arr_len 0))
    (cl:setf (cl:ldb (cl:byte 8 0) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 8) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 16) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 24) __ros_arr_len) (cl:read-byte istream))
  (cl:setf (cl:slot-value msg 'objects) (cl:make-array __ros_arr_len))
  (cl:let ((vals (cl:slot-value msg 'objects)))
    (cl:dotimes (i __ros_arr_len)
    (cl:setf (cl:aref vals i) (cl:make-instance 'data_parse-msg:Object))
  (roslisp-msg-protocol:deserialize (cl:aref vals i) istream))))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<ObjectFrame>)))
  "Returns string type for a message object of type '<ObjectFrame>"
  "data_parse/ObjectFrame")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'ObjectFrame)))
  "Returns string type for a message object of type 'ObjectFrame"
  "data_parse/ObjectFrame")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<ObjectFrame>)))
  "Returns md5sum for a message object of type '<ObjectFrame>"
  "c4b338d30c7b19bee12d9930eae95422")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'ObjectFrame)))
  "Returns md5sum for a message object of type 'ObjectFrame"
  "c4b338d30c7b19bee12d9930eae95422")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<ObjectFrame>)))
  "Returns full string definition for message of type '<ObjectFrame>"
  (cl:format cl:nil "std_msgs/Header header~%~%float64 HostSpeed~%float64 HostYawRate~%float64 StsBlkd0bin~%uint8 StsBlkdConf~%uint8 StsChks~%uint8 StsCntr~%uint8 StsDstbc~%uint8 StsEna~%uint8 StsFaulty~%uint8 StsIfVersMajor~%uint8 StsIfVersMinor~%float64 StsLatency~%uint8 StsMisAlign~%uint8 StsMissCom~%uint8 StsRdrNrDetn~%uint8 StsRdrNrObj~%uint8 StsSftyFlt~%float64 StsTiStamp~%uint8 StsWhlSpdCmpFac~%uint8 TiStampStsGlbTiBas~%uint8 TiStampStsSyncToGatewy~%uint8 TiStampStsTiLeap~%uint8 TiStampStsTiOut~%~%uint8 sensor_type~%~%uint8 Blockage~%uint8 Calibration~%uint8 Fault~%~%Object[] objects~%================================================================================~%MSG: std_msgs/Header~%# Standard metadata for higher-level stamped data types.~%# This is generally used to communicate timestamped data ~%# in a particular coordinate frame.~%# ~%# sequence ID: consecutively increasing ID ~%uint32 seq~%#Two-integer timestamp that is expressed as:~%# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')~%# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')~%# time-handling sugar is provided by the client library~%time stamp~%#Frame this data is associated with~%string frame_id~%~%================================================================================~%MSG: data_parse/Object~%# BO_ 1345 Objects_Header: 3 Vector__XXX~%#  SG_ Sync_Frame_Index : 0|8@1+ (1,0) [0|255] \"counter\" Vector__XXX~%#  SG_ Num_Of_Video_Objs : 8|4@1+ (1,0) [0|12] \"counter\" Vector__XXX~%#  SG_ VD_CIPV_ID : 12|7@1+ (1,0) [0|127] \"counter\" Vector__XXX~%#  SG_ VD_CIPV_Lost : 19|2@1+ (1,0) [0|2] \"ENUM\" Vector__XXX~%#  SG_ OBJ_VD_Allow_Acc : 21|2@1+ (1,0) [0|2] \"ENUM\" Vector__XXX~%#  SG_ Reserved : 23|1@1+ (1,0) [0|0] \"NA\" Vector__XXX~%~%# BO_ 1280 Objects_Signals_A1: 7 Vector__XXX~%#  SG_ Obj_ID_1 : 0|7@1+ (1,0) [0|127] \"counter\" Vector__XXX~%#  SG_ Object_Class_1 : 7|3@1+ (1,0) [0|7] \"ENUM\" Vector__XXX~%#  SG_ OBJ_Width_1 : 10|7@1+ (0.05,0) [0|6.35] \"m\" Vector__XXX~%#  SG_ OBJ_Length_1 : 17|9@1+ (0.05,0) [0|25.5] \"m\" Vector__XXX~%#  SG_ Relative_Long_Velocity_1 : 26|13@1+ (0.05,-120) [-120|130] \"m/s\" Vector__XXX~%#  SG_ OBJ_Lane_Assignment_1 : 39|3@1+ (1,0) [0|5] \"ENUM\" Vector__XXX~%#  SG_ Relative_Lat_Velocity_1 : 42|11@1+ (0.05,-50) [-50|50] \"m/s\" Vector__XXX~%#  SG_ Reserved : 53|3@1+ (1,0) [0|0] \"NA\" Vector__XXX~%~%~%# BO_ 1281 Objects_Signals_B1: 5 Vector__XXX~%#  SG_ Absolute_Long_Acc_1 : 0|9@1+ (0.05,-12.8) [-12.8|12.75] \"m/s2\" Vector__XXX~%#  SG_ Long_Distance_1 : 9|13@1+ (0.05,0) [0|350] \"m\" Vector__XXX~%#  SG_ Lateral_Distance_1 : 22|12@1+ (0.05,-102.4) [-102.4|102.3] \"m\" Vector__XXX~%#  SG_ Reserved : 34|6@1+ (1,0) [0|0] \"NA\" Vector__XXX~%~%~%# BO_ 1282 Objects_Signals_C1: 7 Vector__XXX~%#  SG_ Absolute_Speed_1 : 0|12@1+ (0.05,-100) [-100|100] \"m/s\" Vector__XXX~%#  SG_ OBJ_Motion_Status_1 : 12|3@1+ (1,0) [0|4] \"ENUM \" Vector__XXX~%#  SG_ OBJ_Motion_Category_1 : 15|4@1+ (1,0) [0|12] \"ENUM \" Vector__XXX~%#  SG_ Brake_Light_1 : 19|1@1+ (1,0) [0|1] \"bool\" Vector__XXX~%#  SG_ Turn_Indicator_Right_1 : 20|1@1+ (1,0) [0|1] \"bool\" Vector__XXX~%#  SG_ Turn_Indicator_Left_1 : 21|1@1+ (1,0) [0|1] \"bool\" Vector__XXX~%#  SG_ Light_indicator_validity_1 : 22|1@1+ (1,0) [0|1] \"bool\" Vector__XXX~%#  SG_ OBJ_Angle_Mid_1 : 23|14@1+ (0.0002,-1.571) [-1.571|1.571] \"rad\" Vector__XXX~%#  SG_ OBJ_Angle_Rate_1 : 37|12@1+ (0.002,-2.234) [-2.234|2.2318] \"rad/s\" Vector__XXX~%#  SG_ Reserved : 49|7@1+ (1,0) [0|0] \"NA\" Vector__XXX~%~%uint8 UNCLASSIFIED=0~%uint8 UNKNOWN_SMALL=1~%uint8 UNKNOWN_BIG=2~%uint8 PEDESTRIAN=3~%uint8 BIKE=4~%uint8 CAR=5~%uint8 TRUCK=6~%~%#### ID of this object from tracking. ~%#* Obj_ID_1~%uint16 id~%~%#### Number of scans this object has been tracked for.~%int16 life_cycles~%~%#### Most likely class of this object(see top)~%#* Object_Class_1~%uint8 classification~%~%#### The higher this value is the more reliable is the assigned object class~%float64 obstacle_probability~%~%#### The higher this value is the more reliable is the assigned object class~%float64 probability_existence~%~%#### x,y,z in m~%#* Long_Distance_1  Lateral_Distance_1~%geometry_msgs/Vector3 center~%~%#### position untertainty~%geometry_msgs/Vector3 center_uncertainty~%~%#### yaw angle ~%#* OBJ_Angle_Rate_1  ~%#* OBJ_Angle_Mid_1 ~%float64 heading_angle ~%~%#### yaw angle uncertainty~%float64 heading_angle_uncertainty~%~%#### Size of the object box in the object, X - length in m~%#* OBJ_Length_1~%float32 length~%~%#### Size of the object box in the object, Y - length in m~%#* OBJ_Width_1~%float32 width~%~%#### Size of the object box in the object, Z - length in m~%float32 height~%~%#### relative_velocity in m/s~%#* Relative_Lat_Velocity_1  Relative_Long_Velocity_1~%geometry_msgs/Vector3 relative_velocity~%~%#### relative_velocity untertainty~%geometry_msgs/Vector3 relative_velocity_uncertainty~%~%#### relative_accelerate in m/s~%geometry_msgs/Vector3 relative_accelerate~%~%#### relative_accelerate untertainty~%geometry_msgs/Vector3 relative_accelerate_uncertainty~%~%#### absolute_velocity in m/s~%#* Absolute_Speed_1~%geometry_msgs/Vector3 absolute_velocity~%~%#### absolute_velocity untertainty~%geometry_msgs/Vector3 absolute_velocity_uncertainty~%~%#### absolute_accelerate in m/s~%#* Absolute_Long_Acc_1~%geometry_msgs/Vector3 absolute_accelerate~%~%#### absolute_accelerate untertainty~%geometry_msgs/Vector3 absolute_accelerate_uncertainty~%~%float64 ObjNearestPtX~%float64 ObjNearestPtY~%float64 ObjNearestPtZ~%~%uint8 chks~%uint8 cntr~%uint8 dynamic_property~%uint8 snr~%float64 rcs~%float64 classification_confidence~%uint8 update_bit~%uint8 update_flag~%uint8 valid_flag~%float64 speed~%float64 accelerate~%uint8 vision_id~%uint8 CllsnMtgtnByBrkgPrimQly~%uint8 CllsnMtgtnByBrkgSecQly~%uint8 EmgyLaneKeepAidPosnQly~%uint8 CllsnWarnFwdQly~%~%uint8 fusion_source~%~%float64 time_stamp~%~%#float64 isp_time_stamp~%~%# enum~%#uint8 Cms_confidence~%#uint8 CmsConfidence1_Invalid = 0~%#uint8 CmsConfidence1_Valid = 1~%#uint8 CmsConfidence1_Reserved = 2~%#uint8 CmsConfidence1_Reserved1 = 3~%~%~%float64 lane_offset_right~%float64 lane_offset_right_dev~%~%~%# ENUM for classification~%uint8 CLASS_UNKNOWN              = 0~%uint8 CLASS_CAR                  = 1~%uint8 CLASS_TRUCK                = 2~%uint8 CLASS_MOTORCYCLE           = 3~%uint8 CLASS_CYCLIST              = 4   # bicyle, E-Scooter, tricyclist~%uint8 CLASS_PEDESTRIAN           = 5~%uint8 CLASS_ROAD_BARRIER         = 6   # traffic cone, parking gate, road barrier~%uint8 CLASS_MAX_NUM              = 7~%~%~%# ENUM for flash light status of the object~%uint8 INDICATOR_UNDEFINED        = 0   # Flash light status is not defined for non-vehicle objects~%uint8 INDICATOR_OFF              = 1   # Flash light is currenhtly not active~%uint8 INDICATOR_RIGHT            = 2   # Right flash light is on and/or blinking~%uint8 INDICATOR_LEFT             = 3   # Left flash light is on and/or blinking~%uint8 INDICATOR_BOTH             = 4   # Flash lights from both side are on and/or blinking~%~%# Flash light status of the object, if applicable (see enum for details)~%#* Turn_Indicator_Left_1 Turn_Indicator_Right_1~%uint8 indicator_state                  # [INDICATOR_*]~%~%================================================================================~%MSG: geometry_msgs/Vector3~%# This represents a vector in free space. ~%# It is only meant to represent a direction. Therefore, it does not~%# make sense to apply a translation to it (e.g., when applying a ~%# generic rigid transformation to a Vector3, tf2 will only apply the~%# rotation). If you want your data to be translatable too, use the~%# geometry_msgs/Point message instead.~%~%float64 x~%float64 y~%float64 z~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'ObjectFrame)))
  "Returns full string definition for message of type 'ObjectFrame"
  (cl:format cl:nil "std_msgs/Header header~%~%float64 HostSpeed~%float64 HostYawRate~%float64 StsBlkd0bin~%uint8 StsBlkdConf~%uint8 StsChks~%uint8 StsCntr~%uint8 StsDstbc~%uint8 StsEna~%uint8 StsFaulty~%uint8 StsIfVersMajor~%uint8 StsIfVersMinor~%float64 StsLatency~%uint8 StsMisAlign~%uint8 StsMissCom~%uint8 StsRdrNrDetn~%uint8 StsRdrNrObj~%uint8 StsSftyFlt~%float64 StsTiStamp~%uint8 StsWhlSpdCmpFac~%uint8 TiStampStsGlbTiBas~%uint8 TiStampStsSyncToGatewy~%uint8 TiStampStsTiLeap~%uint8 TiStampStsTiOut~%~%uint8 sensor_type~%~%uint8 Blockage~%uint8 Calibration~%uint8 Fault~%~%Object[] objects~%================================================================================~%MSG: std_msgs/Header~%# Standard metadata for higher-level stamped data types.~%# This is generally used to communicate timestamped data ~%# in a particular coordinate frame.~%# ~%# sequence ID: consecutively increasing ID ~%uint32 seq~%#Two-integer timestamp that is expressed as:~%# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')~%# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')~%# time-handling sugar is provided by the client library~%time stamp~%#Frame this data is associated with~%string frame_id~%~%================================================================================~%MSG: data_parse/Object~%# BO_ 1345 Objects_Header: 3 Vector__XXX~%#  SG_ Sync_Frame_Index : 0|8@1+ (1,0) [0|255] \"counter\" Vector__XXX~%#  SG_ Num_Of_Video_Objs : 8|4@1+ (1,0) [0|12] \"counter\" Vector__XXX~%#  SG_ VD_CIPV_ID : 12|7@1+ (1,0) [0|127] \"counter\" Vector__XXX~%#  SG_ VD_CIPV_Lost : 19|2@1+ (1,0) [0|2] \"ENUM\" Vector__XXX~%#  SG_ OBJ_VD_Allow_Acc : 21|2@1+ (1,0) [0|2] \"ENUM\" Vector__XXX~%#  SG_ Reserved : 23|1@1+ (1,0) [0|0] \"NA\" Vector__XXX~%~%# BO_ 1280 Objects_Signals_A1: 7 Vector__XXX~%#  SG_ Obj_ID_1 : 0|7@1+ (1,0) [0|127] \"counter\" Vector__XXX~%#  SG_ Object_Class_1 : 7|3@1+ (1,0) [0|7] \"ENUM\" Vector__XXX~%#  SG_ OBJ_Width_1 : 10|7@1+ (0.05,0) [0|6.35] \"m\" Vector__XXX~%#  SG_ OBJ_Length_1 : 17|9@1+ (0.05,0) [0|25.5] \"m\" Vector__XXX~%#  SG_ Relative_Long_Velocity_1 : 26|13@1+ (0.05,-120) [-120|130] \"m/s\" Vector__XXX~%#  SG_ OBJ_Lane_Assignment_1 : 39|3@1+ (1,0) [0|5] \"ENUM\" Vector__XXX~%#  SG_ Relative_Lat_Velocity_1 : 42|11@1+ (0.05,-50) [-50|50] \"m/s\" Vector__XXX~%#  SG_ Reserved : 53|3@1+ (1,0) [0|0] \"NA\" Vector__XXX~%~%~%# BO_ 1281 Objects_Signals_B1: 5 Vector__XXX~%#  SG_ Absolute_Long_Acc_1 : 0|9@1+ (0.05,-12.8) [-12.8|12.75] \"m/s2\" Vector__XXX~%#  SG_ Long_Distance_1 : 9|13@1+ (0.05,0) [0|350] \"m\" Vector__XXX~%#  SG_ Lateral_Distance_1 : 22|12@1+ (0.05,-102.4) [-102.4|102.3] \"m\" Vector__XXX~%#  SG_ Reserved : 34|6@1+ (1,0) [0|0] \"NA\" Vector__XXX~%~%~%# BO_ 1282 Objects_Signals_C1: 7 Vector__XXX~%#  SG_ Absolute_Speed_1 : 0|12@1+ (0.05,-100) [-100|100] \"m/s\" Vector__XXX~%#  SG_ OBJ_Motion_Status_1 : 12|3@1+ (1,0) [0|4] \"ENUM \" Vector__XXX~%#  SG_ OBJ_Motion_Category_1 : 15|4@1+ (1,0) [0|12] \"ENUM \" Vector__XXX~%#  SG_ Brake_Light_1 : 19|1@1+ (1,0) [0|1] \"bool\" Vector__XXX~%#  SG_ Turn_Indicator_Right_1 : 20|1@1+ (1,0) [0|1] \"bool\" Vector__XXX~%#  SG_ Turn_Indicator_Left_1 : 21|1@1+ (1,0) [0|1] \"bool\" Vector__XXX~%#  SG_ Light_indicator_validity_1 : 22|1@1+ (1,0) [0|1] \"bool\" Vector__XXX~%#  SG_ OBJ_Angle_Mid_1 : 23|14@1+ (0.0002,-1.571) [-1.571|1.571] \"rad\" Vector__XXX~%#  SG_ OBJ_Angle_Rate_1 : 37|12@1+ (0.002,-2.234) [-2.234|2.2318] \"rad/s\" Vector__XXX~%#  SG_ Reserved : 49|7@1+ (1,0) [0|0] \"NA\" Vector__XXX~%~%uint8 UNCLASSIFIED=0~%uint8 UNKNOWN_SMALL=1~%uint8 UNKNOWN_BIG=2~%uint8 PEDESTRIAN=3~%uint8 BIKE=4~%uint8 CAR=5~%uint8 TRUCK=6~%~%#### ID of this object from tracking. ~%#* Obj_ID_1~%uint16 id~%~%#### Number of scans this object has been tracked for.~%int16 life_cycles~%~%#### Most likely class of this object(see top)~%#* Object_Class_1~%uint8 classification~%~%#### The higher this value is the more reliable is the assigned object class~%float64 obstacle_probability~%~%#### The higher this value is the more reliable is the assigned object class~%float64 probability_existence~%~%#### x,y,z in m~%#* Long_Distance_1  Lateral_Distance_1~%geometry_msgs/Vector3 center~%~%#### position untertainty~%geometry_msgs/Vector3 center_uncertainty~%~%#### yaw angle ~%#* OBJ_Angle_Rate_1  ~%#* OBJ_Angle_Mid_1 ~%float64 heading_angle ~%~%#### yaw angle uncertainty~%float64 heading_angle_uncertainty~%~%#### Size of the object box in the object, X - length in m~%#* OBJ_Length_1~%float32 length~%~%#### Size of the object box in the object, Y - length in m~%#* OBJ_Width_1~%float32 width~%~%#### Size of the object box in the object, Z - length in m~%float32 height~%~%#### relative_velocity in m/s~%#* Relative_Lat_Velocity_1  Relative_Long_Velocity_1~%geometry_msgs/Vector3 relative_velocity~%~%#### relative_velocity untertainty~%geometry_msgs/Vector3 relative_velocity_uncertainty~%~%#### relative_accelerate in m/s~%geometry_msgs/Vector3 relative_accelerate~%~%#### relative_accelerate untertainty~%geometry_msgs/Vector3 relative_accelerate_uncertainty~%~%#### absolute_velocity in m/s~%#* Absolute_Speed_1~%geometry_msgs/Vector3 absolute_velocity~%~%#### absolute_velocity untertainty~%geometry_msgs/Vector3 absolute_velocity_uncertainty~%~%#### absolute_accelerate in m/s~%#* Absolute_Long_Acc_1~%geometry_msgs/Vector3 absolute_accelerate~%~%#### absolute_accelerate untertainty~%geometry_msgs/Vector3 absolute_accelerate_uncertainty~%~%float64 ObjNearestPtX~%float64 ObjNearestPtY~%float64 ObjNearestPtZ~%~%uint8 chks~%uint8 cntr~%uint8 dynamic_property~%uint8 snr~%float64 rcs~%float64 classification_confidence~%uint8 update_bit~%uint8 update_flag~%uint8 valid_flag~%float64 speed~%float64 accelerate~%uint8 vision_id~%uint8 CllsnMtgtnByBrkgPrimQly~%uint8 CllsnMtgtnByBrkgSecQly~%uint8 EmgyLaneKeepAidPosnQly~%uint8 CllsnWarnFwdQly~%~%uint8 fusion_source~%~%float64 time_stamp~%~%#float64 isp_time_stamp~%~%# enum~%#uint8 Cms_confidence~%#uint8 CmsConfidence1_Invalid = 0~%#uint8 CmsConfidence1_Valid = 1~%#uint8 CmsConfidence1_Reserved = 2~%#uint8 CmsConfidence1_Reserved1 = 3~%~%~%float64 lane_offset_right~%float64 lane_offset_right_dev~%~%~%# ENUM for classification~%uint8 CLASS_UNKNOWN              = 0~%uint8 CLASS_CAR                  = 1~%uint8 CLASS_TRUCK                = 2~%uint8 CLASS_MOTORCYCLE           = 3~%uint8 CLASS_CYCLIST              = 4   # bicyle, E-Scooter, tricyclist~%uint8 CLASS_PEDESTRIAN           = 5~%uint8 CLASS_ROAD_BARRIER         = 6   # traffic cone, parking gate, road barrier~%uint8 CLASS_MAX_NUM              = 7~%~%~%# ENUM for flash light status of the object~%uint8 INDICATOR_UNDEFINED        = 0   # Flash light status is not defined for non-vehicle objects~%uint8 INDICATOR_OFF              = 1   # Flash light is currenhtly not active~%uint8 INDICATOR_RIGHT            = 2   # Right flash light is on and/or blinking~%uint8 INDICATOR_LEFT             = 3   # Left flash light is on and/or blinking~%uint8 INDICATOR_BOTH             = 4   # Flash lights from both side are on and/or blinking~%~%# Flash light status of the object, if applicable (see enum for details)~%#* Turn_Indicator_Left_1 Turn_Indicator_Right_1~%uint8 indicator_state                  # [INDICATOR_*]~%~%================================================================================~%MSG: geometry_msgs/Vector3~%# This represents a vector in free space. ~%# It is only meant to represent a direction. Therefore, it does not~%# make sense to apply a translation to it (e.g., when applying a ~%# generic rigid transformation to a Vector3, tf2 will only apply the~%# rotation). If you want your data to be translatable too, use the~%# geometry_msgs/Point message instead.~%~%float64 x~%float64 y~%float64 z~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <ObjectFrame>))
  (cl:+ 0
     (roslisp-msg-protocol:serialization-length (cl:slot-value msg 'header))
     8
     8
     8
     1
     1
     1
     1
     1
     1
     1
     1
     8
     1
     1
     1
     1
     1
     8
     1
     1
     1
     1
     1
     1
     1
     1
     1
     4 (cl:reduce #'cl:+ (cl:slot-value msg 'objects) :key #'(cl:lambda (ele) (cl:declare (cl:ignorable ele)) (cl:+ (roslisp-msg-protocol:serialization-length ele))))
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <ObjectFrame>))
  "Converts a ROS message object to a list"
  (cl:list 'ObjectFrame
    (cl:cons ':header (header msg))
    (cl:cons ':HostSpeed (HostSpeed msg))
    (cl:cons ':HostYawRate (HostYawRate msg))
    (cl:cons ':StsBlkd0bin (StsBlkd0bin msg))
    (cl:cons ':StsBlkdConf (StsBlkdConf msg))
    (cl:cons ':StsChks (StsChks msg))
    (cl:cons ':StsCntr (StsCntr msg))
    (cl:cons ':StsDstbc (StsDstbc msg))
    (cl:cons ':StsEna (StsEna msg))
    (cl:cons ':StsFaulty (StsFaulty msg))
    (cl:cons ':StsIfVersMajor (StsIfVersMajor msg))
    (cl:cons ':StsIfVersMinor (StsIfVersMinor msg))
    (cl:cons ':StsLatency (StsLatency msg))
    (cl:cons ':StsMisAlign (StsMisAlign msg))
    (cl:cons ':StsMissCom (StsMissCom msg))
    (cl:cons ':StsRdrNrDetn (StsRdrNrDetn msg))
    (cl:cons ':StsRdrNrObj (StsRdrNrObj msg))
    (cl:cons ':StsSftyFlt (StsSftyFlt msg))
    (cl:cons ':StsTiStamp (StsTiStamp msg))
    (cl:cons ':StsWhlSpdCmpFac (StsWhlSpdCmpFac msg))
    (cl:cons ':TiStampStsGlbTiBas (TiStampStsGlbTiBas msg))
    (cl:cons ':TiStampStsSyncToGatewy (TiStampStsSyncToGatewy msg))
    (cl:cons ':TiStampStsTiLeap (TiStampStsTiLeap msg))
    (cl:cons ':TiStampStsTiOut (TiStampStsTiOut msg))
    (cl:cons ':sensor_type (sensor_type msg))
    (cl:cons ':Blockage (Blockage msg))
    (cl:cons ':Calibration (Calibration msg))
    (cl:cons ':Fault (Fault msg))
    (cl:cons ':objects (objects msg))
))
