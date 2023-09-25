; Auto-generated. Do not edit!


(cl:in-package data_parse-msg)


;//! \htmlinclude Object.msg.html

(cl:defclass <Object> (roslisp-msg-protocol:ros-message)
  ((id
    :reader id
    :initarg :id
    :type cl:fixnum
    :initform 0)
   (life_cycles
    :reader life_cycles
    :initarg :life_cycles
    :type cl:fixnum
    :initform 0)
   (classification
    :reader classification
    :initarg :classification
    :type cl:fixnum
    :initform 0)
   (obstacle_probability
    :reader obstacle_probability
    :initarg :obstacle_probability
    :type cl:float
    :initform 0.0)
   (probability_existence
    :reader probability_existence
    :initarg :probability_existence
    :type cl:float
    :initform 0.0)
   (center
    :reader center
    :initarg :center
    :type geometry_msgs-msg:Vector3
    :initform (cl:make-instance 'geometry_msgs-msg:Vector3))
   (center_uncertainty
    :reader center_uncertainty
    :initarg :center_uncertainty
    :type geometry_msgs-msg:Vector3
    :initform (cl:make-instance 'geometry_msgs-msg:Vector3))
   (heading_angle
    :reader heading_angle
    :initarg :heading_angle
    :type cl:float
    :initform 0.0)
   (heading_angle_uncertainty
    :reader heading_angle_uncertainty
    :initarg :heading_angle_uncertainty
    :type cl:float
    :initform 0.0)
   (length
    :reader length
    :initarg :length
    :type cl:float
    :initform 0.0)
   (width
    :reader width
    :initarg :width
    :type cl:float
    :initform 0.0)
   (height
    :reader height
    :initarg :height
    :type cl:float
    :initform 0.0)
   (relative_velocity
    :reader relative_velocity
    :initarg :relative_velocity
    :type geometry_msgs-msg:Vector3
    :initform (cl:make-instance 'geometry_msgs-msg:Vector3))
   (relative_velocity_uncertainty
    :reader relative_velocity_uncertainty
    :initarg :relative_velocity_uncertainty
    :type geometry_msgs-msg:Vector3
    :initform (cl:make-instance 'geometry_msgs-msg:Vector3))
   (relative_accelerate
    :reader relative_accelerate
    :initarg :relative_accelerate
    :type geometry_msgs-msg:Vector3
    :initform (cl:make-instance 'geometry_msgs-msg:Vector3))
   (relative_accelerate_uncertainty
    :reader relative_accelerate_uncertainty
    :initarg :relative_accelerate_uncertainty
    :type geometry_msgs-msg:Vector3
    :initform (cl:make-instance 'geometry_msgs-msg:Vector3))
   (absolute_velocity
    :reader absolute_velocity
    :initarg :absolute_velocity
    :type geometry_msgs-msg:Vector3
    :initform (cl:make-instance 'geometry_msgs-msg:Vector3))
   (absolute_velocity_uncertainty
    :reader absolute_velocity_uncertainty
    :initarg :absolute_velocity_uncertainty
    :type geometry_msgs-msg:Vector3
    :initform (cl:make-instance 'geometry_msgs-msg:Vector3))
   (absolute_accelerate
    :reader absolute_accelerate
    :initarg :absolute_accelerate
    :type geometry_msgs-msg:Vector3
    :initform (cl:make-instance 'geometry_msgs-msg:Vector3))
   (absolute_accelerate_uncertainty
    :reader absolute_accelerate_uncertainty
    :initarg :absolute_accelerate_uncertainty
    :type geometry_msgs-msg:Vector3
    :initform (cl:make-instance 'geometry_msgs-msg:Vector3))
   (ObjNearestPtX
    :reader ObjNearestPtX
    :initarg :ObjNearestPtX
    :type cl:float
    :initform 0.0)
   (ObjNearestPtY
    :reader ObjNearestPtY
    :initarg :ObjNearestPtY
    :type cl:float
    :initform 0.0)
   (ObjNearestPtZ
    :reader ObjNearestPtZ
    :initarg :ObjNearestPtZ
    :type cl:float
    :initform 0.0)
   (chks
    :reader chks
    :initarg :chks
    :type cl:fixnum
    :initform 0)
   (cntr
    :reader cntr
    :initarg :cntr
    :type cl:fixnum
    :initform 0)
   (dynamic_property
    :reader dynamic_property
    :initarg :dynamic_property
    :type cl:fixnum
    :initform 0)
   (snr
    :reader snr
    :initarg :snr
    :type cl:fixnum
    :initform 0)
   (rcs
    :reader rcs
    :initarg :rcs
    :type cl:float
    :initform 0.0)
   (classification_confidence
    :reader classification_confidence
    :initarg :classification_confidence
    :type cl:float
    :initform 0.0)
   (update_bit
    :reader update_bit
    :initarg :update_bit
    :type cl:fixnum
    :initform 0)
   (update_flag
    :reader update_flag
    :initarg :update_flag
    :type cl:fixnum
    :initform 0)
   (valid_flag
    :reader valid_flag
    :initarg :valid_flag
    :type cl:fixnum
    :initform 0)
   (speed
    :reader speed
    :initarg :speed
    :type cl:float
    :initform 0.0)
   (accelerate
    :reader accelerate
    :initarg :accelerate
    :type cl:float
    :initform 0.0)
   (vision_id
    :reader vision_id
    :initarg :vision_id
    :type cl:fixnum
    :initform 0)
   (CllsnMtgtnByBrkgPrimQly
    :reader CllsnMtgtnByBrkgPrimQly
    :initarg :CllsnMtgtnByBrkgPrimQly
    :type cl:fixnum
    :initform 0)
   (CllsnMtgtnByBrkgSecQly
    :reader CllsnMtgtnByBrkgSecQly
    :initarg :CllsnMtgtnByBrkgSecQly
    :type cl:fixnum
    :initform 0)
   (EmgyLaneKeepAidPosnQly
    :reader EmgyLaneKeepAidPosnQly
    :initarg :EmgyLaneKeepAidPosnQly
    :type cl:fixnum
    :initform 0)
   (CllsnWarnFwdQly
    :reader CllsnWarnFwdQly
    :initarg :CllsnWarnFwdQly
    :type cl:fixnum
    :initform 0)
   (fusion_source
    :reader fusion_source
    :initarg :fusion_source
    :type cl:fixnum
    :initform 0)
   (time_stamp
    :reader time_stamp
    :initarg :time_stamp
    :type cl:float
    :initform 0.0)
   (lane_offset_right
    :reader lane_offset_right
    :initarg :lane_offset_right
    :type cl:float
    :initform 0.0)
   (lane_offset_right_dev
    :reader lane_offset_right_dev
    :initarg :lane_offset_right_dev
    :type cl:float
    :initform 0.0)
   (indicator_state
    :reader indicator_state
    :initarg :indicator_state
    :type cl:fixnum
    :initform 0))
)

(cl:defclass Object (<Object>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <Object>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'Object)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name data_parse-msg:<Object> is deprecated: use data_parse-msg:Object instead.")))

(cl:ensure-generic-function 'id-val :lambda-list '(m))
(cl:defmethod id-val ((m <Object>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader data_parse-msg:id-val is deprecated.  Use data_parse-msg:id instead.")
  (id m))

(cl:ensure-generic-function 'life_cycles-val :lambda-list '(m))
(cl:defmethod life_cycles-val ((m <Object>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader data_parse-msg:life_cycles-val is deprecated.  Use data_parse-msg:life_cycles instead.")
  (life_cycles m))

(cl:ensure-generic-function 'classification-val :lambda-list '(m))
(cl:defmethod classification-val ((m <Object>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader data_parse-msg:classification-val is deprecated.  Use data_parse-msg:classification instead.")
  (classification m))

(cl:ensure-generic-function 'obstacle_probability-val :lambda-list '(m))
(cl:defmethod obstacle_probability-val ((m <Object>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader data_parse-msg:obstacle_probability-val is deprecated.  Use data_parse-msg:obstacle_probability instead.")
  (obstacle_probability m))

(cl:ensure-generic-function 'probability_existence-val :lambda-list '(m))
(cl:defmethod probability_existence-val ((m <Object>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader data_parse-msg:probability_existence-val is deprecated.  Use data_parse-msg:probability_existence instead.")
  (probability_existence m))

(cl:ensure-generic-function 'center-val :lambda-list '(m))
(cl:defmethod center-val ((m <Object>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader data_parse-msg:center-val is deprecated.  Use data_parse-msg:center instead.")
  (center m))

(cl:ensure-generic-function 'center_uncertainty-val :lambda-list '(m))
(cl:defmethod center_uncertainty-val ((m <Object>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader data_parse-msg:center_uncertainty-val is deprecated.  Use data_parse-msg:center_uncertainty instead.")
  (center_uncertainty m))

(cl:ensure-generic-function 'heading_angle-val :lambda-list '(m))
(cl:defmethod heading_angle-val ((m <Object>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader data_parse-msg:heading_angle-val is deprecated.  Use data_parse-msg:heading_angle instead.")
  (heading_angle m))

(cl:ensure-generic-function 'heading_angle_uncertainty-val :lambda-list '(m))
(cl:defmethod heading_angle_uncertainty-val ((m <Object>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader data_parse-msg:heading_angle_uncertainty-val is deprecated.  Use data_parse-msg:heading_angle_uncertainty instead.")
  (heading_angle_uncertainty m))

(cl:ensure-generic-function 'length-val :lambda-list '(m))
(cl:defmethod length-val ((m <Object>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader data_parse-msg:length-val is deprecated.  Use data_parse-msg:length instead.")
  (length m))

(cl:ensure-generic-function 'width-val :lambda-list '(m))
(cl:defmethod width-val ((m <Object>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader data_parse-msg:width-val is deprecated.  Use data_parse-msg:width instead.")
  (width m))

(cl:ensure-generic-function 'height-val :lambda-list '(m))
(cl:defmethod height-val ((m <Object>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader data_parse-msg:height-val is deprecated.  Use data_parse-msg:height instead.")
  (height m))

(cl:ensure-generic-function 'relative_velocity-val :lambda-list '(m))
(cl:defmethod relative_velocity-val ((m <Object>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader data_parse-msg:relative_velocity-val is deprecated.  Use data_parse-msg:relative_velocity instead.")
  (relative_velocity m))

(cl:ensure-generic-function 'relative_velocity_uncertainty-val :lambda-list '(m))
(cl:defmethod relative_velocity_uncertainty-val ((m <Object>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader data_parse-msg:relative_velocity_uncertainty-val is deprecated.  Use data_parse-msg:relative_velocity_uncertainty instead.")
  (relative_velocity_uncertainty m))

(cl:ensure-generic-function 'relative_accelerate-val :lambda-list '(m))
(cl:defmethod relative_accelerate-val ((m <Object>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader data_parse-msg:relative_accelerate-val is deprecated.  Use data_parse-msg:relative_accelerate instead.")
  (relative_accelerate m))

(cl:ensure-generic-function 'relative_accelerate_uncertainty-val :lambda-list '(m))
(cl:defmethod relative_accelerate_uncertainty-val ((m <Object>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader data_parse-msg:relative_accelerate_uncertainty-val is deprecated.  Use data_parse-msg:relative_accelerate_uncertainty instead.")
  (relative_accelerate_uncertainty m))

(cl:ensure-generic-function 'absolute_velocity-val :lambda-list '(m))
(cl:defmethod absolute_velocity-val ((m <Object>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader data_parse-msg:absolute_velocity-val is deprecated.  Use data_parse-msg:absolute_velocity instead.")
  (absolute_velocity m))

(cl:ensure-generic-function 'absolute_velocity_uncertainty-val :lambda-list '(m))
(cl:defmethod absolute_velocity_uncertainty-val ((m <Object>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader data_parse-msg:absolute_velocity_uncertainty-val is deprecated.  Use data_parse-msg:absolute_velocity_uncertainty instead.")
  (absolute_velocity_uncertainty m))

(cl:ensure-generic-function 'absolute_accelerate-val :lambda-list '(m))
(cl:defmethod absolute_accelerate-val ((m <Object>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader data_parse-msg:absolute_accelerate-val is deprecated.  Use data_parse-msg:absolute_accelerate instead.")
  (absolute_accelerate m))

(cl:ensure-generic-function 'absolute_accelerate_uncertainty-val :lambda-list '(m))
(cl:defmethod absolute_accelerate_uncertainty-val ((m <Object>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader data_parse-msg:absolute_accelerate_uncertainty-val is deprecated.  Use data_parse-msg:absolute_accelerate_uncertainty instead.")
  (absolute_accelerate_uncertainty m))

(cl:ensure-generic-function 'ObjNearestPtX-val :lambda-list '(m))
(cl:defmethod ObjNearestPtX-val ((m <Object>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader data_parse-msg:ObjNearestPtX-val is deprecated.  Use data_parse-msg:ObjNearestPtX instead.")
  (ObjNearestPtX m))

(cl:ensure-generic-function 'ObjNearestPtY-val :lambda-list '(m))
(cl:defmethod ObjNearestPtY-val ((m <Object>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader data_parse-msg:ObjNearestPtY-val is deprecated.  Use data_parse-msg:ObjNearestPtY instead.")
  (ObjNearestPtY m))

(cl:ensure-generic-function 'ObjNearestPtZ-val :lambda-list '(m))
(cl:defmethod ObjNearestPtZ-val ((m <Object>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader data_parse-msg:ObjNearestPtZ-val is deprecated.  Use data_parse-msg:ObjNearestPtZ instead.")
  (ObjNearestPtZ m))

(cl:ensure-generic-function 'chks-val :lambda-list '(m))
(cl:defmethod chks-val ((m <Object>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader data_parse-msg:chks-val is deprecated.  Use data_parse-msg:chks instead.")
  (chks m))

(cl:ensure-generic-function 'cntr-val :lambda-list '(m))
(cl:defmethod cntr-val ((m <Object>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader data_parse-msg:cntr-val is deprecated.  Use data_parse-msg:cntr instead.")
  (cntr m))

(cl:ensure-generic-function 'dynamic_property-val :lambda-list '(m))
(cl:defmethod dynamic_property-val ((m <Object>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader data_parse-msg:dynamic_property-val is deprecated.  Use data_parse-msg:dynamic_property instead.")
  (dynamic_property m))

(cl:ensure-generic-function 'snr-val :lambda-list '(m))
(cl:defmethod snr-val ((m <Object>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader data_parse-msg:snr-val is deprecated.  Use data_parse-msg:snr instead.")
  (snr m))

(cl:ensure-generic-function 'rcs-val :lambda-list '(m))
(cl:defmethod rcs-val ((m <Object>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader data_parse-msg:rcs-val is deprecated.  Use data_parse-msg:rcs instead.")
  (rcs m))

(cl:ensure-generic-function 'classification_confidence-val :lambda-list '(m))
(cl:defmethod classification_confidence-val ((m <Object>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader data_parse-msg:classification_confidence-val is deprecated.  Use data_parse-msg:classification_confidence instead.")
  (classification_confidence m))

(cl:ensure-generic-function 'update_bit-val :lambda-list '(m))
(cl:defmethod update_bit-val ((m <Object>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader data_parse-msg:update_bit-val is deprecated.  Use data_parse-msg:update_bit instead.")
  (update_bit m))

(cl:ensure-generic-function 'update_flag-val :lambda-list '(m))
(cl:defmethod update_flag-val ((m <Object>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader data_parse-msg:update_flag-val is deprecated.  Use data_parse-msg:update_flag instead.")
  (update_flag m))

(cl:ensure-generic-function 'valid_flag-val :lambda-list '(m))
(cl:defmethod valid_flag-val ((m <Object>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader data_parse-msg:valid_flag-val is deprecated.  Use data_parse-msg:valid_flag instead.")
  (valid_flag m))

(cl:ensure-generic-function 'speed-val :lambda-list '(m))
(cl:defmethod speed-val ((m <Object>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader data_parse-msg:speed-val is deprecated.  Use data_parse-msg:speed instead.")
  (speed m))

(cl:ensure-generic-function 'accelerate-val :lambda-list '(m))
(cl:defmethod accelerate-val ((m <Object>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader data_parse-msg:accelerate-val is deprecated.  Use data_parse-msg:accelerate instead.")
  (accelerate m))

(cl:ensure-generic-function 'vision_id-val :lambda-list '(m))
(cl:defmethod vision_id-val ((m <Object>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader data_parse-msg:vision_id-val is deprecated.  Use data_parse-msg:vision_id instead.")
  (vision_id m))

(cl:ensure-generic-function 'CllsnMtgtnByBrkgPrimQly-val :lambda-list '(m))
(cl:defmethod CllsnMtgtnByBrkgPrimQly-val ((m <Object>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader data_parse-msg:CllsnMtgtnByBrkgPrimQly-val is deprecated.  Use data_parse-msg:CllsnMtgtnByBrkgPrimQly instead.")
  (CllsnMtgtnByBrkgPrimQly m))

(cl:ensure-generic-function 'CllsnMtgtnByBrkgSecQly-val :lambda-list '(m))
(cl:defmethod CllsnMtgtnByBrkgSecQly-val ((m <Object>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader data_parse-msg:CllsnMtgtnByBrkgSecQly-val is deprecated.  Use data_parse-msg:CllsnMtgtnByBrkgSecQly instead.")
  (CllsnMtgtnByBrkgSecQly m))

(cl:ensure-generic-function 'EmgyLaneKeepAidPosnQly-val :lambda-list '(m))
(cl:defmethod EmgyLaneKeepAidPosnQly-val ((m <Object>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader data_parse-msg:EmgyLaneKeepAidPosnQly-val is deprecated.  Use data_parse-msg:EmgyLaneKeepAidPosnQly instead.")
  (EmgyLaneKeepAidPosnQly m))

(cl:ensure-generic-function 'CllsnWarnFwdQly-val :lambda-list '(m))
(cl:defmethod CllsnWarnFwdQly-val ((m <Object>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader data_parse-msg:CllsnWarnFwdQly-val is deprecated.  Use data_parse-msg:CllsnWarnFwdQly instead.")
  (CllsnWarnFwdQly m))

(cl:ensure-generic-function 'fusion_source-val :lambda-list '(m))
(cl:defmethod fusion_source-val ((m <Object>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader data_parse-msg:fusion_source-val is deprecated.  Use data_parse-msg:fusion_source instead.")
  (fusion_source m))

(cl:ensure-generic-function 'time_stamp-val :lambda-list '(m))
(cl:defmethod time_stamp-val ((m <Object>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader data_parse-msg:time_stamp-val is deprecated.  Use data_parse-msg:time_stamp instead.")
  (time_stamp m))

(cl:ensure-generic-function 'lane_offset_right-val :lambda-list '(m))
(cl:defmethod lane_offset_right-val ((m <Object>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader data_parse-msg:lane_offset_right-val is deprecated.  Use data_parse-msg:lane_offset_right instead.")
  (lane_offset_right m))

(cl:ensure-generic-function 'lane_offset_right_dev-val :lambda-list '(m))
(cl:defmethod lane_offset_right_dev-val ((m <Object>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader data_parse-msg:lane_offset_right_dev-val is deprecated.  Use data_parse-msg:lane_offset_right_dev instead.")
  (lane_offset_right_dev m))

(cl:ensure-generic-function 'indicator_state-val :lambda-list '(m))
(cl:defmethod indicator_state-val ((m <Object>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader data_parse-msg:indicator_state-val is deprecated.  Use data_parse-msg:indicator_state instead.")
  (indicator_state m))
(cl:defmethod roslisp-msg-protocol:symbol-codes ((msg-type (cl:eql '<Object>)))
    "Constants for message type '<Object>"
  '((:UNCLASSIFIED . 0)
    (:UNKNOWN_SMALL . 1)
    (:UNKNOWN_BIG . 2)
    (:PEDESTRIAN . 3)
    (:BIKE . 4)
    (:CAR . 5)
    (:TRUCK . 6)
    (:CLASS_UNKNOWN . 0)
    (:CLASS_CAR . 1)
    (:CLASS_TRUCK . 2)
    (:CLASS_MOTORCYCLE . 3)
    (:CLASS_CYCLIST . 4)
    (:CLASS_PEDESTRIAN . 5)
    (:CLASS_ROAD_BARRIER . 6)
    (:CLASS_MAX_NUM . 7)
    (:INDICATOR_UNDEFINED . 0)
    (:INDICATOR_OFF . 1)
    (:INDICATOR_RIGHT . 2)
    (:INDICATOR_LEFT . 3)
    (:INDICATOR_BOTH . 4))
)
(cl:defmethod roslisp-msg-protocol:symbol-codes ((msg-type (cl:eql 'Object)))
    "Constants for message type 'Object"
  '((:UNCLASSIFIED . 0)
    (:UNKNOWN_SMALL . 1)
    (:UNKNOWN_BIG . 2)
    (:PEDESTRIAN . 3)
    (:BIKE . 4)
    (:CAR . 5)
    (:TRUCK . 6)
    (:CLASS_UNKNOWN . 0)
    (:CLASS_CAR . 1)
    (:CLASS_TRUCK . 2)
    (:CLASS_MOTORCYCLE . 3)
    (:CLASS_CYCLIST . 4)
    (:CLASS_PEDESTRIAN . 5)
    (:CLASS_ROAD_BARRIER . 6)
    (:CLASS_MAX_NUM . 7)
    (:INDICATOR_UNDEFINED . 0)
    (:INDICATOR_OFF . 1)
    (:INDICATOR_RIGHT . 2)
    (:INDICATOR_LEFT . 3)
    (:INDICATOR_BOTH . 4))
)
(cl:defmethod roslisp-msg-protocol:serialize ((msg <Object>) ostream)
  "Serializes a message object of type '<Object>"
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'id)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 8) (cl:slot-value msg 'id)) ostream)
  (cl:let* ((signed (cl:slot-value msg 'life_cycles)) (unsigned (cl:if (cl:< signed 0) (cl:+ signed 65536) signed)))
    (cl:write-byte (cl:ldb (cl:byte 8 0) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) unsigned) ostream)
    )
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'classification)) ostream)
  (cl:let ((bits (roslisp-utils:encode-double-float-bits (cl:slot-value msg 'obstacle_probability))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 32) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 40) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 48) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 56) bits) ostream))
  (cl:let ((bits (roslisp-utils:encode-double-float-bits (cl:slot-value msg 'probability_existence))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 32) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 40) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 48) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 56) bits) ostream))
  (roslisp-msg-protocol:serialize (cl:slot-value msg 'center) ostream)
  (roslisp-msg-protocol:serialize (cl:slot-value msg 'center_uncertainty) ostream)
  (cl:let ((bits (roslisp-utils:encode-double-float-bits (cl:slot-value msg 'heading_angle))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 32) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 40) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 48) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 56) bits) ostream))
  (cl:let ((bits (roslisp-utils:encode-double-float-bits (cl:slot-value msg 'heading_angle_uncertainty))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 32) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 40) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 48) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 56) bits) ostream))
  (cl:let ((bits (roslisp-utils:encode-single-float-bits (cl:slot-value msg 'length))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream))
  (cl:let ((bits (roslisp-utils:encode-single-float-bits (cl:slot-value msg 'width))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream))
  (cl:let ((bits (roslisp-utils:encode-single-float-bits (cl:slot-value msg 'height))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream))
  (roslisp-msg-protocol:serialize (cl:slot-value msg 'relative_velocity) ostream)
  (roslisp-msg-protocol:serialize (cl:slot-value msg 'relative_velocity_uncertainty) ostream)
  (roslisp-msg-protocol:serialize (cl:slot-value msg 'relative_accelerate) ostream)
  (roslisp-msg-protocol:serialize (cl:slot-value msg 'relative_accelerate_uncertainty) ostream)
  (roslisp-msg-protocol:serialize (cl:slot-value msg 'absolute_velocity) ostream)
  (roslisp-msg-protocol:serialize (cl:slot-value msg 'absolute_velocity_uncertainty) ostream)
  (roslisp-msg-protocol:serialize (cl:slot-value msg 'absolute_accelerate) ostream)
  (roslisp-msg-protocol:serialize (cl:slot-value msg 'absolute_accelerate_uncertainty) ostream)
  (cl:let ((bits (roslisp-utils:encode-double-float-bits (cl:slot-value msg 'ObjNearestPtX))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 32) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 40) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 48) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 56) bits) ostream))
  (cl:let ((bits (roslisp-utils:encode-double-float-bits (cl:slot-value msg 'ObjNearestPtY))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 32) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 40) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 48) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 56) bits) ostream))
  (cl:let ((bits (roslisp-utils:encode-double-float-bits (cl:slot-value msg 'ObjNearestPtZ))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 32) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 40) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 48) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 56) bits) ostream))
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'chks)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'cntr)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'dynamic_property)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'snr)) ostream)
  (cl:let ((bits (roslisp-utils:encode-double-float-bits (cl:slot-value msg 'rcs))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 32) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 40) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 48) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 56) bits) ostream))
  (cl:let ((bits (roslisp-utils:encode-double-float-bits (cl:slot-value msg 'classification_confidence))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 32) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 40) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 48) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 56) bits) ostream))
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'update_bit)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'update_flag)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'valid_flag)) ostream)
  (cl:let ((bits (roslisp-utils:encode-double-float-bits (cl:slot-value msg 'speed))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 32) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 40) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 48) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 56) bits) ostream))
  (cl:let ((bits (roslisp-utils:encode-double-float-bits (cl:slot-value msg 'accelerate))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 32) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 40) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 48) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 56) bits) ostream))
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'vision_id)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'CllsnMtgtnByBrkgPrimQly)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'CllsnMtgtnByBrkgSecQly)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'EmgyLaneKeepAidPosnQly)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'CllsnWarnFwdQly)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'fusion_source)) ostream)
  (cl:let ((bits (roslisp-utils:encode-double-float-bits (cl:slot-value msg 'time_stamp))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 32) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 40) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 48) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 56) bits) ostream))
  (cl:let ((bits (roslisp-utils:encode-double-float-bits (cl:slot-value msg 'lane_offset_right))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 32) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 40) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 48) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 56) bits) ostream))
  (cl:let ((bits (roslisp-utils:encode-double-float-bits (cl:slot-value msg 'lane_offset_right_dev))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 32) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 40) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 48) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 56) bits) ostream))
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'indicator_state)) ostream)
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <Object>) istream)
  "Deserializes a message object of type '<Object>"
    (cl:setf (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'id)) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 8) (cl:slot-value msg 'id)) (cl:read-byte istream))
    (cl:let ((unsigned 0))
      (cl:setf (cl:ldb (cl:byte 8 0) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) unsigned) (cl:read-byte istream))
      (cl:setf (cl:slot-value msg 'life_cycles) (cl:if (cl:< unsigned 32768) unsigned (cl:- unsigned 65536))))
    (cl:setf (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'classification)) (cl:read-byte istream))
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 32) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 40) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 48) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 56) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'obstacle_probability) (roslisp-utils:decode-double-float-bits bits)))
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 32) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 40) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 48) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 56) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'probability_existence) (roslisp-utils:decode-double-float-bits bits)))
  (roslisp-msg-protocol:deserialize (cl:slot-value msg 'center) istream)
  (roslisp-msg-protocol:deserialize (cl:slot-value msg 'center_uncertainty) istream)
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 32) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 40) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 48) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 56) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'heading_angle) (roslisp-utils:decode-double-float-bits bits)))
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 32) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 40) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 48) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 56) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'heading_angle_uncertainty) (roslisp-utils:decode-double-float-bits bits)))
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'length) (roslisp-utils:decode-single-float-bits bits)))
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'width) (roslisp-utils:decode-single-float-bits bits)))
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'height) (roslisp-utils:decode-single-float-bits bits)))
  (roslisp-msg-protocol:deserialize (cl:slot-value msg 'relative_velocity) istream)
  (roslisp-msg-protocol:deserialize (cl:slot-value msg 'relative_velocity_uncertainty) istream)
  (roslisp-msg-protocol:deserialize (cl:slot-value msg 'relative_accelerate) istream)
  (roslisp-msg-protocol:deserialize (cl:slot-value msg 'relative_accelerate_uncertainty) istream)
  (roslisp-msg-protocol:deserialize (cl:slot-value msg 'absolute_velocity) istream)
  (roslisp-msg-protocol:deserialize (cl:slot-value msg 'absolute_velocity_uncertainty) istream)
  (roslisp-msg-protocol:deserialize (cl:slot-value msg 'absolute_accelerate) istream)
  (roslisp-msg-protocol:deserialize (cl:slot-value msg 'absolute_accelerate_uncertainty) istream)
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 32) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 40) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 48) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 56) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'ObjNearestPtX) (roslisp-utils:decode-double-float-bits bits)))
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 32) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 40) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 48) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 56) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'ObjNearestPtY) (roslisp-utils:decode-double-float-bits bits)))
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 32) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 40) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 48) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 56) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'ObjNearestPtZ) (roslisp-utils:decode-double-float-bits bits)))
    (cl:setf (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'chks)) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'cntr)) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'dynamic_property)) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'snr)) (cl:read-byte istream))
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 32) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 40) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 48) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 56) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'rcs) (roslisp-utils:decode-double-float-bits bits)))
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 32) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 40) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 48) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 56) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'classification_confidence) (roslisp-utils:decode-double-float-bits bits)))
    (cl:setf (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'update_bit)) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'update_flag)) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'valid_flag)) (cl:read-byte istream))
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 32) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 40) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 48) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 56) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'speed) (roslisp-utils:decode-double-float-bits bits)))
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 32) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 40) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 48) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 56) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'accelerate) (roslisp-utils:decode-double-float-bits bits)))
    (cl:setf (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'vision_id)) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'CllsnMtgtnByBrkgPrimQly)) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'CllsnMtgtnByBrkgSecQly)) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'EmgyLaneKeepAidPosnQly)) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'CllsnWarnFwdQly)) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'fusion_source)) (cl:read-byte istream))
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 32) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 40) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 48) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 56) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'time_stamp) (roslisp-utils:decode-double-float-bits bits)))
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 32) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 40) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 48) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 56) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'lane_offset_right) (roslisp-utils:decode-double-float-bits bits)))
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 32) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 40) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 48) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 56) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'lane_offset_right_dev) (roslisp-utils:decode-double-float-bits bits)))
    (cl:setf (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'indicator_state)) (cl:read-byte istream))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<Object>)))
  "Returns string type for a message object of type '<Object>"
  "data_parse/Object")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'Object)))
  "Returns string type for a message object of type 'Object"
  "data_parse/Object")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<Object>)))
  "Returns md5sum for a message object of type '<Object>"
  "5ec958fb840aae7c81d40f6c557b44f5")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'Object)))
  "Returns md5sum for a message object of type 'Object"
  "5ec958fb840aae7c81d40f6c557b44f5")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<Object>)))
  "Returns full string definition for message of type '<Object>"
  (cl:format cl:nil "# BO_ 1345 Objects_Header: 3 Vector__XXX~%#  SG_ Sync_Frame_Index : 0|8@1+ (1,0) [0|255] \"counter\" Vector__XXX~%#  SG_ Num_Of_Video_Objs : 8|4@1+ (1,0) [0|12] \"counter\" Vector__XXX~%#  SG_ VD_CIPV_ID : 12|7@1+ (1,0) [0|127] \"counter\" Vector__XXX~%#  SG_ VD_CIPV_Lost : 19|2@1+ (1,0) [0|2] \"ENUM\" Vector__XXX~%#  SG_ OBJ_VD_Allow_Acc : 21|2@1+ (1,0) [0|2] \"ENUM\" Vector__XXX~%#  SG_ Reserved : 23|1@1+ (1,0) [0|0] \"NA\" Vector__XXX~%~%# BO_ 1280 Objects_Signals_A1: 7 Vector__XXX~%#  SG_ Obj_ID_1 : 0|7@1+ (1,0) [0|127] \"counter\" Vector__XXX~%#  SG_ Object_Class_1 : 7|3@1+ (1,0) [0|7] \"ENUM\" Vector__XXX~%#  SG_ OBJ_Width_1 : 10|7@1+ (0.05,0) [0|6.35] \"m\" Vector__XXX~%#  SG_ OBJ_Length_1 : 17|9@1+ (0.05,0) [0|25.5] \"m\" Vector__XXX~%#  SG_ Relative_Long_Velocity_1 : 26|13@1+ (0.05,-120) [-120|130] \"m/s\" Vector__XXX~%#  SG_ OBJ_Lane_Assignment_1 : 39|3@1+ (1,0) [0|5] \"ENUM\" Vector__XXX~%#  SG_ Relative_Lat_Velocity_1 : 42|11@1+ (0.05,-50) [-50|50] \"m/s\" Vector__XXX~%#  SG_ Reserved : 53|3@1+ (1,0) [0|0] \"NA\" Vector__XXX~%~%~%# BO_ 1281 Objects_Signals_B1: 5 Vector__XXX~%#  SG_ Absolute_Long_Acc_1 : 0|9@1+ (0.05,-12.8) [-12.8|12.75] \"m/s2\" Vector__XXX~%#  SG_ Long_Distance_1 : 9|13@1+ (0.05,0) [0|350] \"m\" Vector__XXX~%#  SG_ Lateral_Distance_1 : 22|12@1+ (0.05,-102.4) [-102.4|102.3] \"m\" Vector__XXX~%#  SG_ Reserved : 34|6@1+ (1,0) [0|0] \"NA\" Vector__XXX~%~%~%# BO_ 1282 Objects_Signals_C1: 7 Vector__XXX~%#  SG_ Absolute_Speed_1 : 0|12@1+ (0.05,-100) [-100|100] \"m/s\" Vector__XXX~%#  SG_ OBJ_Motion_Status_1 : 12|3@1+ (1,0) [0|4] \"ENUM \" Vector__XXX~%#  SG_ OBJ_Motion_Category_1 : 15|4@1+ (1,0) [0|12] \"ENUM \" Vector__XXX~%#  SG_ Brake_Light_1 : 19|1@1+ (1,0) [0|1] \"bool\" Vector__XXX~%#  SG_ Turn_Indicator_Right_1 : 20|1@1+ (1,0) [0|1] \"bool\" Vector__XXX~%#  SG_ Turn_Indicator_Left_1 : 21|1@1+ (1,0) [0|1] \"bool\" Vector__XXX~%#  SG_ Light_indicator_validity_1 : 22|1@1+ (1,0) [0|1] \"bool\" Vector__XXX~%#  SG_ OBJ_Angle_Mid_1 : 23|14@1+ (0.0002,-1.571) [-1.571|1.571] \"rad\" Vector__XXX~%#  SG_ OBJ_Angle_Rate_1 : 37|12@1+ (0.002,-2.234) [-2.234|2.2318] \"rad/s\" Vector__XXX~%#  SG_ Reserved : 49|7@1+ (1,0) [0|0] \"NA\" Vector__XXX~%~%uint8 UNCLASSIFIED=0~%uint8 UNKNOWN_SMALL=1~%uint8 UNKNOWN_BIG=2~%uint8 PEDESTRIAN=3~%uint8 BIKE=4~%uint8 CAR=5~%uint8 TRUCK=6~%~%#### ID of this object from tracking. ~%#* Obj_ID_1~%uint16 id~%~%#### Number of scans this object has been tracked for.~%int16 life_cycles~%~%#### Most likely class of this object(see top)~%#* Object_Class_1~%uint8 classification~%~%#### The higher this value is the more reliable is the assigned object class~%float64 obstacle_probability~%~%#### The higher this value is the more reliable is the assigned object class~%float64 probability_existence~%~%#### x,y,z in m~%#* Long_Distance_1  Lateral_Distance_1~%geometry_msgs/Vector3 center~%~%#### position untertainty~%geometry_msgs/Vector3 center_uncertainty~%~%#### yaw angle ~%#* OBJ_Angle_Rate_1  ~%#* OBJ_Angle_Mid_1 ~%float64 heading_angle ~%~%#### yaw angle uncertainty~%float64 heading_angle_uncertainty~%~%#### Size of the object box in the object, X - length in m~%#* OBJ_Length_1~%float32 length~%~%#### Size of the object box in the object, Y - length in m~%#* OBJ_Width_1~%float32 width~%~%#### Size of the object box in the object, Z - length in m~%float32 height~%~%#### relative_velocity in m/s~%#* Relative_Lat_Velocity_1  Relative_Long_Velocity_1~%geometry_msgs/Vector3 relative_velocity~%~%#### relative_velocity untertainty~%geometry_msgs/Vector3 relative_velocity_uncertainty~%~%#### relative_accelerate in m/s~%geometry_msgs/Vector3 relative_accelerate~%~%#### relative_accelerate untertainty~%geometry_msgs/Vector3 relative_accelerate_uncertainty~%~%#### absolute_velocity in m/s~%#* Absolute_Speed_1~%geometry_msgs/Vector3 absolute_velocity~%~%#### absolute_velocity untertainty~%geometry_msgs/Vector3 absolute_velocity_uncertainty~%~%#### absolute_accelerate in m/s~%#* Absolute_Long_Acc_1~%geometry_msgs/Vector3 absolute_accelerate~%~%#### absolute_accelerate untertainty~%geometry_msgs/Vector3 absolute_accelerate_uncertainty~%~%float64 ObjNearestPtX~%float64 ObjNearestPtY~%float64 ObjNearestPtZ~%~%uint8 chks~%uint8 cntr~%uint8 dynamic_property~%uint8 snr~%float64 rcs~%float64 classification_confidence~%uint8 update_bit~%uint8 update_flag~%uint8 valid_flag~%float64 speed~%float64 accelerate~%uint8 vision_id~%uint8 CllsnMtgtnByBrkgPrimQly~%uint8 CllsnMtgtnByBrkgSecQly~%uint8 EmgyLaneKeepAidPosnQly~%uint8 CllsnWarnFwdQly~%~%uint8 fusion_source~%~%float64 time_stamp~%~%#float64 isp_time_stamp~%~%# enum~%#uint8 Cms_confidence~%#uint8 CmsConfidence1_Invalid = 0~%#uint8 CmsConfidence1_Valid = 1~%#uint8 CmsConfidence1_Reserved = 2~%#uint8 CmsConfidence1_Reserved1 = 3~%~%~%float64 lane_offset_right~%float64 lane_offset_right_dev~%~%~%# ENUM for classification~%uint8 CLASS_UNKNOWN              = 0~%uint8 CLASS_CAR                  = 1~%uint8 CLASS_TRUCK                = 2~%uint8 CLASS_MOTORCYCLE           = 3~%uint8 CLASS_CYCLIST              = 4   # bicyle, E-Scooter, tricyclist~%uint8 CLASS_PEDESTRIAN           = 5~%uint8 CLASS_ROAD_BARRIER         = 6   # traffic cone, parking gate, road barrier~%uint8 CLASS_MAX_NUM              = 7~%~%~%# ENUM for flash light status of the object~%uint8 INDICATOR_UNDEFINED        = 0   # Flash light status is not defined for non-vehicle objects~%uint8 INDICATOR_OFF              = 1   # Flash light is currenhtly not active~%uint8 INDICATOR_RIGHT            = 2   # Right flash light is on and/or blinking~%uint8 INDICATOR_LEFT             = 3   # Left flash light is on and/or blinking~%uint8 INDICATOR_BOTH             = 4   # Flash lights from both side are on and/or blinking~%~%# Flash light status of the object, if applicable (see enum for details)~%#* Turn_Indicator_Left_1 Turn_Indicator_Right_1~%uint8 indicator_state                  # [INDICATOR_*]~%~%================================================================================~%MSG: geometry_msgs/Vector3~%# This represents a vector in free space. ~%# It is only meant to represent a direction. Therefore, it does not~%# make sense to apply a translation to it (e.g., when applying a ~%# generic rigid transformation to a Vector3, tf2 will only apply the~%# rotation). If you want your data to be translatable too, use the~%# geometry_msgs/Point message instead.~%~%float64 x~%float64 y~%float64 z~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'Object)))
  "Returns full string definition for message of type 'Object"
  (cl:format cl:nil "# BO_ 1345 Objects_Header: 3 Vector__XXX~%#  SG_ Sync_Frame_Index : 0|8@1+ (1,0) [0|255] \"counter\" Vector__XXX~%#  SG_ Num_Of_Video_Objs : 8|4@1+ (1,0) [0|12] \"counter\" Vector__XXX~%#  SG_ VD_CIPV_ID : 12|7@1+ (1,0) [0|127] \"counter\" Vector__XXX~%#  SG_ VD_CIPV_Lost : 19|2@1+ (1,0) [0|2] \"ENUM\" Vector__XXX~%#  SG_ OBJ_VD_Allow_Acc : 21|2@1+ (1,0) [0|2] \"ENUM\" Vector__XXX~%#  SG_ Reserved : 23|1@1+ (1,0) [0|0] \"NA\" Vector__XXX~%~%# BO_ 1280 Objects_Signals_A1: 7 Vector__XXX~%#  SG_ Obj_ID_1 : 0|7@1+ (1,0) [0|127] \"counter\" Vector__XXX~%#  SG_ Object_Class_1 : 7|3@1+ (1,0) [0|7] \"ENUM\" Vector__XXX~%#  SG_ OBJ_Width_1 : 10|7@1+ (0.05,0) [0|6.35] \"m\" Vector__XXX~%#  SG_ OBJ_Length_1 : 17|9@1+ (0.05,0) [0|25.5] \"m\" Vector__XXX~%#  SG_ Relative_Long_Velocity_1 : 26|13@1+ (0.05,-120) [-120|130] \"m/s\" Vector__XXX~%#  SG_ OBJ_Lane_Assignment_1 : 39|3@1+ (1,0) [0|5] \"ENUM\" Vector__XXX~%#  SG_ Relative_Lat_Velocity_1 : 42|11@1+ (0.05,-50) [-50|50] \"m/s\" Vector__XXX~%#  SG_ Reserved : 53|3@1+ (1,0) [0|0] \"NA\" Vector__XXX~%~%~%# BO_ 1281 Objects_Signals_B1: 5 Vector__XXX~%#  SG_ Absolute_Long_Acc_1 : 0|9@1+ (0.05,-12.8) [-12.8|12.75] \"m/s2\" Vector__XXX~%#  SG_ Long_Distance_1 : 9|13@1+ (0.05,0) [0|350] \"m\" Vector__XXX~%#  SG_ Lateral_Distance_1 : 22|12@1+ (0.05,-102.4) [-102.4|102.3] \"m\" Vector__XXX~%#  SG_ Reserved : 34|6@1+ (1,0) [0|0] \"NA\" Vector__XXX~%~%~%# BO_ 1282 Objects_Signals_C1: 7 Vector__XXX~%#  SG_ Absolute_Speed_1 : 0|12@1+ (0.05,-100) [-100|100] \"m/s\" Vector__XXX~%#  SG_ OBJ_Motion_Status_1 : 12|3@1+ (1,0) [0|4] \"ENUM \" Vector__XXX~%#  SG_ OBJ_Motion_Category_1 : 15|4@1+ (1,0) [0|12] \"ENUM \" Vector__XXX~%#  SG_ Brake_Light_1 : 19|1@1+ (1,0) [0|1] \"bool\" Vector__XXX~%#  SG_ Turn_Indicator_Right_1 : 20|1@1+ (1,0) [0|1] \"bool\" Vector__XXX~%#  SG_ Turn_Indicator_Left_1 : 21|1@1+ (1,0) [0|1] \"bool\" Vector__XXX~%#  SG_ Light_indicator_validity_1 : 22|1@1+ (1,0) [0|1] \"bool\" Vector__XXX~%#  SG_ OBJ_Angle_Mid_1 : 23|14@1+ (0.0002,-1.571) [-1.571|1.571] \"rad\" Vector__XXX~%#  SG_ OBJ_Angle_Rate_1 : 37|12@1+ (0.002,-2.234) [-2.234|2.2318] \"rad/s\" Vector__XXX~%#  SG_ Reserved : 49|7@1+ (1,0) [0|0] \"NA\" Vector__XXX~%~%uint8 UNCLASSIFIED=0~%uint8 UNKNOWN_SMALL=1~%uint8 UNKNOWN_BIG=2~%uint8 PEDESTRIAN=3~%uint8 BIKE=4~%uint8 CAR=5~%uint8 TRUCK=6~%~%#### ID of this object from tracking. ~%#* Obj_ID_1~%uint16 id~%~%#### Number of scans this object has been tracked for.~%int16 life_cycles~%~%#### Most likely class of this object(see top)~%#* Object_Class_1~%uint8 classification~%~%#### The higher this value is the more reliable is the assigned object class~%float64 obstacle_probability~%~%#### The higher this value is the more reliable is the assigned object class~%float64 probability_existence~%~%#### x,y,z in m~%#* Long_Distance_1  Lateral_Distance_1~%geometry_msgs/Vector3 center~%~%#### position untertainty~%geometry_msgs/Vector3 center_uncertainty~%~%#### yaw angle ~%#* OBJ_Angle_Rate_1  ~%#* OBJ_Angle_Mid_1 ~%float64 heading_angle ~%~%#### yaw angle uncertainty~%float64 heading_angle_uncertainty~%~%#### Size of the object box in the object, X - length in m~%#* OBJ_Length_1~%float32 length~%~%#### Size of the object box in the object, Y - length in m~%#* OBJ_Width_1~%float32 width~%~%#### Size of the object box in the object, Z - length in m~%float32 height~%~%#### relative_velocity in m/s~%#* Relative_Lat_Velocity_1  Relative_Long_Velocity_1~%geometry_msgs/Vector3 relative_velocity~%~%#### relative_velocity untertainty~%geometry_msgs/Vector3 relative_velocity_uncertainty~%~%#### relative_accelerate in m/s~%geometry_msgs/Vector3 relative_accelerate~%~%#### relative_accelerate untertainty~%geometry_msgs/Vector3 relative_accelerate_uncertainty~%~%#### absolute_velocity in m/s~%#* Absolute_Speed_1~%geometry_msgs/Vector3 absolute_velocity~%~%#### absolute_velocity untertainty~%geometry_msgs/Vector3 absolute_velocity_uncertainty~%~%#### absolute_accelerate in m/s~%#* Absolute_Long_Acc_1~%geometry_msgs/Vector3 absolute_accelerate~%~%#### absolute_accelerate untertainty~%geometry_msgs/Vector3 absolute_accelerate_uncertainty~%~%float64 ObjNearestPtX~%float64 ObjNearestPtY~%float64 ObjNearestPtZ~%~%uint8 chks~%uint8 cntr~%uint8 dynamic_property~%uint8 snr~%float64 rcs~%float64 classification_confidence~%uint8 update_bit~%uint8 update_flag~%uint8 valid_flag~%float64 speed~%float64 accelerate~%uint8 vision_id~%uint8 CllsnMtgtnByBrkgPrimQly~%uint8 CllsnMtgtnByBrkgSecQly~%uint8 EmgyLaneKeepAidPosnQly~%uint8 CllsnWarnFwdQly~%~%uint8 fusion_source~%~%float64 time_stamp~%~%#float64 isp_time_stamp~%~%# enum~%#uint8 Cms_confidence~%#uint8 CmsConfidence1_Invalid = 0~%#uint8 CmsConfidence1_Valid = 1~%#uint8 CmsConfidence1_Reserved = 2~%#uint8 CmsConfidence1_Reserved1 = 3~%~%~%float64 lane_offset_right~%float64 lane_offset_right_dev~%~%~%# ENUM for classification~%uint8 CLASS_UNKNOWN              = 0~%uint8 CLASS_CAR                  = 1~%uint8 CLASS_TRUCK                = 2~%uint8 CLASS_MOTORCYCLE           = 3~%uint8 CLASS_CYCLIST              = 4   # bicyle, E-Scooter, tricyclist~%uint8 CLASS_PEDESTRIAN           = 5~%uint8 CLASS_ROAD_BARRIER         = 6   # traffic cone, parking gate, road barrier~%uint8 CLASS_MAX_NUM              = 7~%~%~%# ENUM for flash light status of the object~%uint8 INDICATOR_UNDEFINED        = 0   # Flash light status is not defined for non-vehicle objects~%uint8 INDICATOR_OFF              = 1   # Flash light is currenhtly not active~%uint8 INDICATOR_RIGHT            = 2   # Right flash light is on and/or blinking~%uint8 INDICATOR_LEFT             = 3   # Left flash light is on and/or blinking~%uint8 INDICATOR_BOTH             = 4   # Flash lights from both side are on and/or blinking~%~%# Flash light status of the object, if applicable (see enum for details)~%#* Turn_Indicator_Left_1 Turn_Indicator_Right_1~%uint8 indicator_state                  # [INDICATOR_*]~%~%================================================================================~%MSG: geometry_msgs/Vector3~%# This represents a vector in free space. ~%# It is only meant to represent a direction. Therefore, it does not~%# make sense to apply a translation to it (e.g., when applying a ~%# generic rigid transformation to a Vector3, tf2 will only apply the~%# rotation). If you want your data to be translatable too, use the~%# geometry_msgs/Point message instead.~%~%float64 x~%float64 y~%float64 z~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <Object>))
  (cl:+ 0
     2
     2
     1
     8
     8
     (roslisp-msg-protocol:serialization-length (cl:slot-value msg 'center))
     (roslisp-msg-protocol:serialization-length (cl:slot-value msg 'center_uncertainty))
     8
     8
     4
     4
     4
     (roslisp-msg-protocol:serialization-length (cl:slot-value msg 'relative_velocity))
     (roslisp-msg-protocol:serialization-length (cl:slot-value msg 'relative_velocity_uncertainty))
     (roslisp-msg-protocol:serialization-length (cl:slot-value msg 'relative_accelerate))
     (roslisp-msg-protocol:serialization-length (cl:slot-value msg 'relative_accelerate_uncertainty))
     (roslisp-msg-protocol:serialization-length (cl:slot-value msg 'absolute_velocity))
     (roslisp-msg-protocol:serialization-length (cl:slot-value msg 'absolute_velocity_uncertainty))
     (roslisp-msg-protocol:serialization-length (cl:slot-value msg 'absolute_accelerate))
     (roslisp-msg-protocol:serialization-length (cl:slot-value msg 'absolute_accelerate_uncertainty))
     8
     8
     8
     1
     1
     1
     1
     8
     8
     1
     1
     1
     8
     8
     1
     1
     1
     1
     1
     1
     8
     8
     8
     1
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <Object>))
  "Converts a ROS message object to a list"
  (cl:list 'Object
    (cl:cons ':id (id msg))
    (cl:cons ':life_cycles (life_cycles msg))
    (cl:cons ':classification (classification msg))
    (cl:cons ':obstacle_probability (obstacle_probability msg))
    (cl:cons ':probability_existence (probability_existence msg))
    (cl:cons ':center (center msg))
    (cl:cons ':center_uncertainty (center_uncertainty msg))
    (cl:cons ':heading_angle (heading_angle msg))
    (cl:cons ':heading_angle_uncertainty (heading_angle_uncertainty msg))
    (cl:cons ':length (length msg))
    (cl:cons ':width (width msg))
    (cl:cons ':height (height msg))
    (cl:cons ':relative_velocity (relative_velocity msg))
    (cl:cons ':relative_velocity_uncertainty (relative_velocity_uncertainty msg))
    (cl:cons ':relative_accelerate (relative_accelerate msg))
    (cl:cons ':relative_accelerate_uncertainty (relative_accelerate_uncertainty msg))
    (cl:cons ':absolute_velocity (absolute_velocity msg))
    (cl:cons ':absolute_velocity_uncertainty (absolute_velocity_uncertainty msg))
    (cl:cons ':absolute_accelerate (absolute_accelerate msg))
    (cl:cons ':absolute_accelerate_uncertainty (absolute_accelerate_uncertainty msg))
    (cl:cons ':ObjNearestPtX (ObjNearestPtX msg))
    (cl:cons ':ObjNearestPtY (ObjNearestPtY msg))
    (cl:cons ':ObjNearestPtZ (ObjNearestPtZ msg))
    (cl:cons ':chks (chks msg))
    (cl:cons ':cntr (cntr msg))
    (cl:cons ':dynamic_property (dynamic_property msg))
    (cl:cons ':snr (snr msg))
    (cl:cons ':rcs (rcs msg))
    (cl:cons ':classification_confidence (classification_confidence msg))
    (cl:cons ':update_bit (update_bit msg))
    (cl:cons ':update_flag (update_flag msg))
    (cl:cons ':valid_flag (valid_flag msg))
    (cl:cons ':speed (speed msg))
    (cl:cons ':accelerate (accelerate msg))
    (cl:cons ':vision_id (vision_id msg))
    (cl:cons ':CllsnMtgtnByBrkgPrimQly (CllsnMtgtnByBrkgPrimQly msg))
    (cl:cons ':CllsnMtgtnByBrkgSecQly (CllsnMtgtnByBrkgSecQly msg))
    (cl:cons ':EmgyLaneKeepAidPosnQly (EmgyLaneKeepAidPosnQly msg))
    (cl:cons ':CllsnWarnFwdQly (CllsnWarnFwdQly msg))
    (cl:cons ':fusion_source (fusion_source msg))
    (cl:cons ':time_stamp (time_stamp msg))
    (cl:cons ':lane_offset_right (lane_offset_right msg))
    (cl:cons ':lane_offset_right_dev (lane_offset_right_dev msg))
    (cl:cons ':indicator_state (indicator_state msg))
))
