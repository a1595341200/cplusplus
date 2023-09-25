;; Auto-generated. Do not edit!


(when (boundp 'data_parse::Object)
  (if (not (find-package "DATA_PARSE"))
    (make-package "DATA_PARSE"))
  (shadow 'Object (find-package "DATA_PARSE")))
(unless (find-package "DATA_PARSE::OBJECT")
  (make-package "DATA_PARSE::OBJECT"))

(in-package "ROS")
;;//! \htmlinclude Object.msg.html
(if (not (find-package "GEOMETRY_MSGS"))
  (ros::roseus-add-msgs "geometry_msgs"))


(intern "*UNCLASSIFIED*" (find-package "DATA_PARSE::OBJECT"))
(shadow '*UNCLASSIFIED* (find-package "DATA_PARSE::OBJECT"))
(defconstant data_parse::Object::*UNCLASSIFIED* 0)
(intern "*UNKNOWN_SMALL*" (find-package "DATA_PARSE::OBJECT"))
(shadow '*UNKNOWN_SMALL* (find-package "DATA_PARSE::OBJECT"))
(defconstant data_parse::Object::*UNKNOWN_SMALL* 1)
(intern "*UNKNOWN_BIG*" (find-package "DATA_PARSE::OBJECT"))
(shadow '*UNKNOWN_BIG* (find-package "DATA_PARSE::OBJECT"))
(defconstant data_parse::Object::*UNKNOWN_BIG* 2)
(intern "*PEDESTRIAN*" (find-package "DATA_PARSE::OBJECT"))
(shadow '*PEDESTRIAN* (find-package "DATA_PARSE::OBJECT"))
(defconstant data_parse::Object::*PEDESTRIAN* 3)
(intern "*BIKE*" (find-package "DATA_PARSE::OBJECT"))
(shadow '*BIKE* (find-package "DATA_PARSE::OBJECT"))
(defconstant data_parse::Object::*BIKE* 4)
(intern "*CAR*" (find-package "DATA_PARSE::OBJECT"))
(shadow '*CAR* (find-package "DATA_PARSE::OBJECT"))
(defconstant data_parse::Object::*CAR* 5)
(intern "*TRUCK*" (find-package "DATA_PARSE::OBJECT"))
(shadow '*TRUCK* (find-package "DATA_PARSE::OBJECT"))
(defconstant data_parse::Object::*TRUCK* 6)
(intern "*CLASS_UNKNOWN*" (find-package "DATA_PARSE::OBJECT"))
(shadow '*CLASS_UNKNOWN* (find-package "DATA_PARSE::OBJECT"))
(defconstant data_parse::Object::*CLASS_UNKNOWN* 0)
(intern "*CLASS_CAR*" (find-package "DATA_PARSE::OBJECT"))
(shadow '*CLASS_CAR* (find-package "DATA_PARSE::OBJECT"))
(defconstant data_parse::Object::*CLASS_CAR* 1)
(intern "*CLASS_TRUCK*" (find-package "DATA_PARSE::OBJECT"))
(shadow '*CLASS_TRUCK* (find-package "DATA_PARSE::OBJECT"))
(defconstant data_parse::Object::*CLASS_TRUCK* 2)
(intern "*CLASS_MOTORCYCLE*" (find-package "DATA_PARSE::OBJECT"))
(shadow '*CLASS_MOTORCYCLE* (find-package "DATA_PARSE::OBJECT"))
(defconstant data_parse::Object::*CLASS_MOTORCYCLE* 3)
(intern "*CLASS_CYCLIST*" (find-package "DATA_PARSE::OBJECT"))
(shadow '*CLASS_CYCLIST* (find-package "DATA_PARSE::OBJECT"))
(defconstant data_parse::Object::*CLASS_CYCLIST* 4)
(intern "*CLASS_PEDESTRIAN*" (find-package "DATA_PARSE::OBJECT"))
(shadow '*CLASS_PEDESTRIAN* (find-package "DATA_PARSE::OBJECT"))
(defconstant data_parse::Object::*CLASS_PEDESTRIAN* 5)
(intern "*CLASS_ROAD_BARRIER*" (find-package "DATA_PARSE::OBJECT"))
(shadow '*CLASS_ROAD_BARRIER* (find-package "DATA_PARSE::OBJECT"))
(defconstant data_parse::Object::*CLASS_ROAD_BARRIER* 6)
(intern "*CLASS_MAX_NUM*" (find-package "DATA_PARSE::OBJECT"))
(shadow '*CLASS_MAX_NUM* (find-package "DATA_PARSE::OBJECT"))
(defconstant data_parse::Object::*CLASS_MAX_NUM* 7)
(intern "*INDICATOR_UNDEFINED*" (find-package "DATA_PARSE::OBJECT"))
(shadow '*INDICATOR_UNDEFINED* (find-package "DATA_PARSE::OBJECT"))
(defconstant data_parse::Object::*INDICATOR_UNDEFINED* 0)
(intern "*INDICATOR_OFF*" (find-package "DATA_PARSE::OBJECT"))
(shadow '*INDICATOR_OFF* (find-package "DATA_PARSE::OBJECT"))
(defconstant data_parse::Object::*INDICATOR_OFF* 1)
(intern "*INDICATOR_RIGHT*" (find-package "DATA_PARSE::OBJECT"))
(shadow '*INDICATOR_RIGHT* (find-package "DATA_PARSE::OBJECT"))
(defconstant data_parse::Object::*INDICATOR_RIGHT* 2)
(intern "*INDICATOR_LEFT*" (find-package "DATA_PARSE::OBJECT"))
(shadow '*INDICATOR_LEFT* (find-package "DATA_PARSE::OBJECT"))
(defconstant data_parse::Object::*INDICATOR_LEFT* 3)
(intern "*INDICATOR_BOTH*" (find-package "DATA_PARSE::OBJECT"))
(shadow '*INDICATOR_BOTH* (find-package "DATA_PARSE::OBJECT"))
(defconstant data_parse::Object::*INDICATOR_BOTH* 4)

(defun data_parse::Object-to-symbol (const)
  (cond
        ((= const 0) 'data_parse::Object::*UNCLASSIFIED*)
        ((= const 1) 'data_parse::Object::*UNKNOWN_SMALL*)
        ((= const 2) 'data_parse::Object::*UNKNOWN_BIG*)
        ((= const 3) 'data_parse::Object::*PEDESTRIAN*)
        ((= const 4) 'data_parse::Object::*BIKE*)
        ((= const 5) 'data_parse::Object::*CAR*)
        ((= const 6) 'data_parse::Object::*TRUCK*)
        ((= const 0) 'data_parse::Object::*CLASS_UNKNOWN*)
        ((= const 1) 'data_parse::Object::*CLASS_CAR*)
        ((= const 2) 'data_parse::Object::*CLASS_TRUCK*)
        ((= const 3) 'data_parse::Object::*CLASS_MOTORCYCLE*)
        ((= const 4) 'data_parse::Object::*CLASS_CYCLIST*)
        ((= const 5) 'data_parse::Object::*CLASS_PEDESTRIAN*)
        ((= const 6) 'data_parse::Object::*CLASS_ROAD_BARRIER*)
        ((= const 7) 'data_parse::Object::*CLASS_MAX_NUM*)
        ((= const 0) 'data_parse::Object::*INDICATOR_UNDEFINED*)
        ((= const 1) 'data_parse::Object::*INDICATOR_OFF*)
        ((= const 2) 'data_parse::Object::*INDICATOR_RIGHT*)
        ((= const 3) 'data_parse::Object::*INDICATOR_LEFT*)
        ((= const 4) 'data_parse::Object::*INDICATOR_BOTH*)
        (t nil)))

(defclass data_parse::Object
  :super ros::object
  :slots (_id _life_cycles _classification _obstacle_probability _probability_existence _center _center_uncertainty _heading_angle _heading_angle_uncertainty _length _width _height _relative_velocity _relative_velocity_uncertainty _relative_accelerate _relative_accelerate_uncertainty _absolute_velocity _absolute_velocity_uncertainty _absolute_accelerate _absolute_accelerate_uncertainty _ObjNearestPtX _ObjNearestPtY _ObjNearestPtZ _chks _cntr _dynamic_property _snr _rcs _classification_confidence _update_bit _update_flag _valid_flag _speed _accelerate _vision_id _CllsnMtgtnByBrkgPrimQly _CllsnMtgtnByBrkgSecQly _EmgyLaneKeepAidPosnQly _CllsnWarnFwdQly _fusion_source _time_stamp _lane_offset_right _lane_offset_right_dev _indicator_state ))

(defmethod data_parse::Object
  (:init
   (&key
    ((:id __id) 0)
    ((:life_cycles __life_cycles) 0)
    ((:classification __classification) 0)
    ((:obstacle_probability __obstacle_probability) 0.0)
    ((:probability_existence __probability_existence) 0.0)
    ((:center __center) (instance geometry_msgs::Vector3 :init))
    ((:center_uncertainty __center_uncertainty) (instance geometry_msgs::Vector3 :init))
    ((:heading_angle __heading_angle) 0.0)
    ((:heading_angle_uncertainty __heading_angle_uncertainty) 0.0)
    ((:length __length) 0.0)
    ((:width __width) 0.0)
    ((:height __height) 0.0)
    ((:relative_velocity __relative_velocity) (instance geometry_msgs::Vector3 :init))
    ((:relative_velocity_uncertainty __relative_velocity_uncertainty) (instance geometry_msgs::Vector3 :init))
    ((:relative_accelerate __relative_accelerate) (instance geometry_msgs::Vector3 :init))
    ((:relative_accelerate_uncertainty __relative_accelerate_uncertainty) (instance geometry_msgs::Vector3 :init))
    ((:absolute_velocity __absolute_velocity) (instance geometry_msgs::Vector3 :init))
    ((:absolute_velocity_uncertainty __absolute_velocity_uncertainty) (instance geometry_msgs::Vector3 :init))
    ((:absolute_accelerate __absolute_accelerate) (instance geometry_msgs::Vector3 :init))
    ((:absolute_accelerate_uncertainty __absolute_accelerate_uncertainty) (instance geometry_msgs::Vector3 :init))
    ((:ObjNearestPtX __ObjNearestPtX) 0.0)
    ((:ObjNearestPtY __ObjNearestPtY) 0.0)
    ((:ObjNearestPtZ __ObjNearestPtZ) 0.0)
    ((:chks __chks) 0)
    ((:cntr __cntr) 0)
    ((:dynamic_property __dynamic_property) 0)
    ((:snr __snr) 0)
    ((:rcs __rcs) 0.0)
    ((:classification_confidence __classification_confidence) 0.0)
    ((:update_bit __update_bit) 0)
    ((:update_flag __update_flag) 0)
    ((:valid_flag __valid_flag) 0)
    ((:speed __speed) 0.0)
    ((:accelerate __accelerate) 0.0)
    ((:vision_id __vision_id) 0)
    ((:CllsnMtgtnByBrkgPrimQly __CllsnMtgtnByBrkgPrimQly) 0)
    ((:CllsnMtgtnByBrkgSecQly __CllsnMtgtnByBrkgSecQly) 0)
    ((:EmgyLaneKeepAidPosnQly __EmgyLaneKeepAidPosnQly) 0)
    ((:CllsnWarnFwdQly __CllsnWarnFwdQly) 0)
    ((:fusion_source __fusion_source) 0)
    ((:time_stamp __time_stamp) 0.0)
    ((:lane_offset_right __lane_offset_right) 0.0)
    ((:lane_offset_right_dev __lane_offset_right_dev) 0.0)
    ((:indicator_state __indicator_state) 0)
    )
   (send-super :init)
   (setq _id (round __id))
   (setq _life_cycles (round __life_cycles))
   (setq _classification (round __classification))
   (setq _obstacle_probability (float __obstacle_probability))
   (setq _probability_existence (float __probability_existence))
   (setq _center __center)
   (setq _center_uncertainty __center_uncertainty)
   (setq _heading_angle (float __heading_angle))
   (setq _heading_angle_uncertainty (float __heading_angle_uncertainty))
   (setq _length (float __length))
   (setq _width (float __width))
   (setq _height (float __height))
   (setq _relative_velocity __relative_velocity)
   (setq _relative_velocity_uncertainty __relative_velocity_uncertainty)
   (setq _relative_accelerate __relative_accelerate)
   (setq _relative_accelerate_uncertainty __relative_accelerate_uncertainty)
   (setq _absolute_velocity __absolute_velocity)
   (setq _absolute_velocity_uncertainty __absolute_velocity_uncertainty)
   (setq _absolute_accelerate __absolute_accelerate)
   (setq _absolute_accelerate_uncertainty __absolute_accelerate_uncertainty)
   (setq _ObjNearestPtX (float __ObjNearestPtX))
   (setq _ObjNearestPtY (float __ObjNearestPtY))
   (setq _ObjNearestPtZ (float __ObjNearestPtZ))
   (setq _chks (round __chks))
   (setq _cntr (round __cntr))
   (setq _dynamic_property (round __dynamic_property))
   (setq _snr (round __snr))
   (setq _rcs (float __rcs))
   (setq _classification_confidence (float __classification_confidence))
   (setq _update_bit (round __update_bit))
   (setq _update_flag (round __update_flag))
   (setq _valid_flag (round __valid_flag))
   (setq _speed (float __speed))
   (setq _accelerate (float __accelerate))
   (setq _vision_id (round __vision_id))
   (setq _CllsnMtgtnByBrkgPrimQly (round __CllsnMtgtnByBrkgPrimQly))
   (setq _CllsnMtgtnByBrkgSecQly (round __CllsnMtgtnByBrkgSecQly))
   (setq _EmgyLaneKeepAidPosnQly (round __EmgyLaneKeepAidPosnQly))
   (setq _CllsnWarnFwdQly (round __CllsnWarnFwdQly))
   (setq _fusion_source (round __fusion_source))
   (setq _time_stamp (float __time_stamp))
   (setq _lane_offset_right (float __lane_offset_right))
   (setq _lane_offset_right_dev (float __lane_offset_right_dev))
   (setq _indicator_state (round __indicator_state))
   self)
  (:id
   (&optional __id)
   (if __id (setq _id __id)) _id)
  (:life_cycles
   (&optional __life_cycles)
   (if __life_cycles (setq _life_cycles __life_cycles)) _life_cycles)
  (:classification
   (&optional __classification)
   (if __classification (setq _classification __classification)) _classification)
  (:obstacle_probability
   (&optional __obstacle_probability)
   (if __obstacle_probability (setq _obstacle_probability __obstacle_probability)) _obstacle_probability)
  (:probability_existence
   (&optional __probability_existence)
   (if __probability_existence (setq _probability_existence __probability_existence)) _probability_existence)
  (:center
   (&rest __center)
   (if (keywordp (car __center))
       (send* _center __center)
     (progn
       (if __center (setq _center (car __center)))
       _center)))
  (:center_uncertainty
   (&rest __center_uncertainty)
   (if (keywordp (car __center_uncertainty))
       (send* _center_uncertainty __center_uncertainty)
     (progn
       (if __center_uncertainty (setq _center_uncertainty (car __center_uncertainty)))
       _center_uncertainty)))
  (:heading_angle
   (&optional __heading_angle)
   (if __heading_angle (setq _heading_angle __heading_angle)) _heading_angle)
  (:heading_angle_uncertainty
   (&optional __heading_angle_uncertainty)
   (if __heading_angle_uncertainty (setq _heading_angle_uncertainty __heading_angle_uncertainty)) _heading_angle_uncertainty)
  (:length
   (&optional __length)
   (if __length (setq _length __length)) _length)
  (:width
   (&optional __width)
   (if __width (setq _width __width)) _width)
  (:height
   (&optional __height)
   (if __height (setq _height __height)) _height)
  (:relative_velocity
   (&rest __relative_velocity)
   (if (keywordp (car __relative_velocity))
       (send* _relative_velocity __relative_velocity)
     (progn
       (if __relative_velocity (setq _relative_velocity (car __relative_velocity)))
       _relative_velocity)))
  (:relative_velocity_uncertainty
   (&rest __relative_velocity_uncertainty)
   (if (keywordp (car __relative_velocity_uncertainty))
       (send* _relative_velocity_uncertainty __relative_velocity_uncertainty)
     (progn
       (if __relative_velocity_uncertainty (setq _relative_velocity_uncertainty (car __relative_velocity_uncertainty)))
       _relative_velocity_uncertainty)))
  (:relative_accelerate
   (&rest __relative_accelerate)
   (if (keywordp (car __relative_accelerate))
       (send* _relative_accelerate __relative_accelerate)
     (progn
       (if __relative_accelerate (setq _relative_accelerate (car __relative_accelerate)))
       _relative_accelerate)))
  (:relative_accelerate_uncertainty
   (&rest __relative_accelerate_uncertainty)
   (if (keywordp (car __relative_accelerate_uncertainty))
       (send* _relative_accelerate_uncertainty __relative_accelerate_uncertainty)
     (progn
       (if __relative_accelerate_uncertainty (setq _relative_accelerate_uncertainty (car __relative_accelerate_uncertainty)))
       _relative_accelerate_uncertainty)))
  (:absolute_velocity
   (&rest __absolute_velocity)
   (if (keywordp (car __absolute_velocity))
       (send* _absolute_velocity __absolute_velocity)
     (progn
       (if __absolute_velocity (setq _absolute_velocity (car __absolute_velocity)))
       _absolute_velocity)))
  (:absolute_velocity_uncertainty
   (&rest __absolute_velocity_uncertainty)
   (if (keywordp (car __absolute_velocity_uncertainty))
       (send* _absolute_velocity_uncertainty __absolute_velocity_uncertainty)
     (progn
       (if __absolute_velocity_uncertainty (setq _absolute_velocity_uncertainty (car __absolute_velocity_uncertainty)))
       _absolute_velocity_uncertainty)))
  (:absolute_accelerate
   (&rest __absolute_accelerate)
   (if (keywordp (car __absolute_accelerate))
       (send* _absolute_accelerate __absolute_accelerate)
     (progn
       (if __absolute_accelerate (setq _absolute_accelerate (car __absolute_accelerate)))
       _absolute_accelerate)))
  (:absolute_accelerate_uncertainty
   (&rest __absolute_accelerate_uncertainty)
   (if (keywordp (car __absolute_accelerate_uncertainty))
       (send* _absolute_accelerate_uncertainty __absolute_accelerate_uncertainty)
     (progn
       (if __absolute_accelerate_uncertainty (setq _absolute_accelerate_uncertainty (car __absolute_accelerate_uncertainty)))
       _absolute_accelerate_uncertainty)))
  (:ObjNearestPtX
   (&optional __ObjNearestPtX)
   (if __ObjNearestPtX (setq _ObjNearestPtX __ObjNearestPtX)) _ObjNearestPtX)
  (:ObjNearestPtY
   (&optional __ObjNearestPtY)
   (if __ObjNearestPtY (setq _ObjNearestPtY __ObjNearestPtY)) _ObjNearestPtY)
  (:ObjNearestPtZ
   (&optional __ObjNearestPtZ)
   (if __ObjNearestPtZ (setq _ObjNearestPtZ __ObjNearestPtZ)) _ObjNearestPtZ)
  (:chks
   (&optional __chks)
   (if __chks (setq _chks __chks)) _chks)
  (:cntr
   (&optional __cntr)
   (if __cntr (setq _cntr __cntr)) _cntr)
  (:dynamic_property
   (&optional __dynamic_property)
   (if __dynamic_property (setq _dynamic_property __dynamic_property)) _dynamic_property)
  (:snr
   (&optional __snr)
   (if __snr (setq _snr __snr)) _snr)
  (:rcs
   (&optional __rcs)
   (if __rcs (setq _rcs __rcs)) _rcs)
  (:classification_confidence
   (&optional __classification_confidence)
   (if __classification_confidence (setq _classification_confidence __classification_confidence)) _classification_confidence)
  (:update_bit
   (&optional __update_bit)
   (if __update_bit (setq _update_bit __update_bit)) _update_bit)
  (:update_flag
   (&optional __update_flag)
   (if __update_flag (setq _update_flag __update_flag)) _update_flag)
  (:valid_flag
   (&optional __valid_flag)
   (if __valid_flag (setq _valid_flag __valid_flag)) _valid_flag)
  (:speed
   (&optional __speed)
   (if __speed (setq _speed __speed)) _speed)
  (:accelerate
   (&optional __accelerate)
   (if __accelerate (setq _accelerate __accelerate)) _accelerate)
  (:vision_id
   (&optional __vision_id)
   (if __vision_id (setq _vision_id __vision_id)) _vision_id)
  (:CllsnMtgtnByBrkgPrimQly
   (&optional __CllsnMtgtnByBrkgPrimQly)
   (if __CllsnMtgtnByBrkgPrimQly (setq _CllsnMtgtnByBrkgPrimQly __CllsnMtgtnByBrkgPrimQly)) _CllsnMtgtnByBrkgPrimQly)
  (:CllsnMtgtnByBrkgSecQly
   (&optional __CllsnMtgtnByBrkgSecQly)
   (if __CllsnMtgtnByBrkgSecQly (setq _CllsnMtgtnByBrkgSecQly __CllsnMtgtnByBrkgSecQly)) _CllsnMtgtnByBrkgSecQly)
  (:EmgyLaneKeepAidPosnQly
   (&optional __EmgyLaneKeepAidPosnQly)
   (if __EmgyLaneKeepAidPosnQly (setq _EmgyLaneKeepAidPosnQly __EmgyLaneKeepAidPosnQly)) _EmgyLaneKeepAidPosnQly)
  (:CllsnWarnFwdQly
   (&optional __CllsnWarnFwdQly)
   (if __CllsnWarnFwdQly (setq _CllsnWarnFwdQly __CllsnWarnFwdQly)) _CllsnWarnFwdQly)
  (:fusion_source
   (&optional __fusion_source)
   (if __fusion_source (setq _fusion_source __fusion_source)) _fusion_source)
  (:time_stamp
   (&optional __time_stamp)
   (if __time_stamp (setq _time_stamp __time_stamp)) _time_stamp)
  (:lane_offset_right
   (&optional __lane_offset_right)
   (if __lane_offset_right (setq _lane_offset_right __lane_offset_right)) _lane_offset_right)
  (:lane_offset_right_dev
   (&optional __lane_offset_right_dev)
   (if __lane_offset_right_dev (setq _lane_offset_right_dev __lane_offset_right_dev)) _lane_offset_right_dev)
  (:indicator_state
   (&optional __indicator_state)
   (if __indicator_state (setq _indicator_state __indicator_state)) _indicator_state)
  (:serialization-length
   ()
   (+
    ;; uint16 _id
    2
    ;; int16 _life_cycles
    2
    ;; uint8 _classification
    1
    ;; float64 _obstacle_probability
    8
    ;; float64 _probability_existence
    8
    ;; geometry_msgs/Vector3 _center
    (send _center :serialization-length)
    ;; geometry_msgs/Vector3 _center_uncertainty
    (send _center_uncertainty :serialization-length)
    ;; float64 _heading_angle
    8
    ;; float64 _heading_angle_uncertainty
    8
    ;; float32 _length
    4
    ;; float32 _width
    4
    ;; float32 _height
    4
    ;; geometry_msgs/Vector3 _relative_velocity
    (send _relative_velocity :serialization-length)
    ;; geometry_msgs/Vector3 _relative_velocity_uncertainty
    (send _relative_velocity_uncertainty :serialization-length)
    ;; geometry_msgs/Vector3 _relative_accelerate
    (send _relative_accelerate :serialization-length)
    ;; geometry_msgs/Vector3 _relative_accelerate_uncertainty
    (send _relative_accelerate_uncertainty :serialization-length)
    ;; geometry_msgs/Vector3 _absolute_velocity
    (send _absolute_velocity :serialization-length)
    ;; geometry_msgs/Vector3 _absolute_velocity_uncertainty
    (send _absolute_velocity_uncertainty :serialization-length)
    ;; geometry_msgs/Vector3 _absolute_accelerate
    (send _absolute_accelerate :serialization-length)
    ;; geometry_msgs/Vector3 _absolute_accelerate_uncertainty
    (send _absolute_accelerate_uncertainty :serialization-length)
    ;; float64 _ObjNearestPtX
    8
    ;; float64 _ObjNearestPtY
    8
    ;; float64 _ObjNearestPtZ
    8
    ;; uint8 _chks
    1
    ;; uint8 _cntr
    1
    ;; uint8 _dynamic_property
    1
    ;; uint8 _snr
    1
    ;; float64 _rcs
    8
    ;; float64 _classification_confidence
    8
    ;; uint8 _update_bit
    1
    ;; uint8 _update_flag
    1
    ;; uint8 _valid_flag
    1
    ;; float64 _speed
    8
    ;; float64 _accelerate
    8
    ;; uint8 _vision_id
    1
    ;; uint8 _CllsnMtgtnByBrkgPrimQly
    1
    ;; uint8 _CllsnMtgtnByBrkgSecQly
    1
    ;; uint8 _EmgyLaneKeepAidPosnQly
    1
    ;; uint8 _CllsnWarnFwdQly
    1
    ;; uint8 _fusion_source
    1
    ;; float64 _time_stamp
    8
    ;; float64 _lane_offset_right
    8
    ;; float64 _lane_offset_right_dev
    8
    ;; uint8 _indicator_state
    1
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; uint16 _id
       (write-word _id s)
     ;; int16 _life_cycles
       (write-word _life_cycles s)
     ;; uint8 _classification
       (write-byte _classification s)
     ;; float64 _obstacle_probability
       (sys::poke _obstacle_probability (send s :buffer) (send s :count) :double) (incf (stream-count s) 8)
     ;; float64 _probability_existence
       (sys::poke _probability_existence (send s :buffer) (send s :count) :double) (incf (stream-count s) 8)
     ;; geometry_msgs/Vector3 _center
       (send _center :serialize s)
     ;; geometry_msgs/Vector3 _center_uncertainty
       (send _center_uncertainty :serialize s)
     ;; float64 _heading_angle
       (sys::poke _heading_angle (send s :buffer) (send s :count) :double) (incf (stream-count s) 8)
     ;; float64 _heading_angle_uncertainty
       (sys::poke _heading_angle_uncertainty (send s :buffer) (send s :count) :double) (incf (stream-count s) 8)
     ;; float32 _length
       (sys::poke _length (send s :buffer) (send s :count) :float) (incf (stream-count s) 4)
     ;; float32 _width
       (sys::poke _width (send s :buffer) (send s :count) :float) (incf (stream-count s) 4)
     ;; float32 _height
       (sys::poke _height (send s :buffer) (send s :count) :float) (incf (stream-count s) 4)
     ;; geometry_msgs/Vector3 _relative_velocity
       (send _relative_velocity :serialize s)
     ;; geometry_msgs/Vector3 _relative_velocity_uncertainty
       (send _relative_velocity_uncertainty :serialize s)
     ;; geometry_msgs/Vector3 _relative_accelerate
       (send _relative_accelerate :serialize s)
     ;; geometry_msgs/Vector3 _relative_accelerate_uncertainty
       (send _relative_accelerate_uncertainty :serialize s)
     ;; geometry_msgs/Vector3 _absolute_velocity
       (send _absolute_velocity :serialize s)
     ;; geometry_msgs/Vector3 _absolute_velocity_uncertainty
       (send _absolute_velocity_uncertainty :serialize s)
     ;; geometry_msgs/Vector3 _absolute_accelerate
       (send _absolute_accelerate :serialize s)
     ;; geometry_msgs/Vector3 _absolute_accelerate_uncertainty
       (send _absolute_accelerate_uncertainty :serialize s)
     ;; float64 _ObjNearestPtX
       (sys::poke _ObjNearestPtX (send s :buffer) (send s :count) :double) (incf (stream-count s) 8)
     ;; float64 _ObjNearestPtY
       (sys::poke _ObjNearestPtY (send s :buffer) (send s :count) :double) (incf (stream-count s) 8)
     ;; float64 _ObjNearestPtZ
       (sys::poke _ObjNearestPtZ (send s :buffer) (send s :count) :double) (incf (stream-count s) 8)
     ;; uint8 _chks
       (write-byte _chks s)
     ;; uint8 _cntr
       (write-byte _cntr s)
     ;; uint8 _dynamic_property
       (write-byte _dynamic_property s)
     ;; uint8 _snr
       (write-byte _snr s)
     ;; float64 _rcs
       (sys::poke _rcs (send s :buffer) (send s :count) :double) (incf (stream-count s) 8)
     ;; float64 _classification_confidence
       (sys::poke _classification_confidence (send s :buffer) (send s :count) :double) (incf (stream-count s) 8)
     ;; uint8 _update_bit
       (write-byte _update_bit s)
     ;; uint8 _update_flag
       (write-byte _update_flag s)
     ;; uint8 _valid_flag
       (write-byte _valid_flag s)
     ;; float64 _speed
       (sys::poke _speed (send s :buffer) (send s :count) :double) (incf (stream-count s) 8)
     ;; float64 _accelerate
       (sys::poke _accelerate (send s :buffer) (send s :count) :double) (incf (stream-count s) 8)
     ;; uint8 _vision_id
       (write-byte _vision_id s)
     ;; uint8 _CllsnMtgtnByBrkgPrimQly
       (write-byte _CllsnMtgtnByBrkgPrimQly s)
     ;; uint8 _CllsnMtgtnByBrkgSecQly
       (write-byte _CllsnMtgtnByBrkgSecQly s)
     ;; uint8 _EmgyLaneKeepAidPosnQly
       (write-byte _EmgyLaneKeepAidPosnQly s)
     ;; uint8 _CllsnWarnFwdQly
       (write-byte _CllsnWarnFwdQly s)
     ;; uint8 _fusion_source
       (write-byte _fusion_source s)
     ;; float64 _time_stamp
       (sys::poke _time_stamp (send s :buffer) (send s :count) :double) (incf (stream-count s) 8)
     ;; float64 _lane_offset_right
       (sys::poke _lane_offset_right (send s :buffer) (send s :count) :double) (incf (stream-count s) 8)
     ;; float64 _lane_offset_right_dev
       (sys::poke _lane_offset_right_dev (send s :buffer) (send s :count) :double) (incf (stream-count s) 8)
     ;; uint8 _indicator_state
       (write-byte _indicator_state s)
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; uint16 _id
     (setq _id (sys::peek buf ptr- :short)) (incf ptr- 2)
   ;; int16 _life_cycles
     (setq _life_cycles (sys::peek buf ptr- :short)) (incf ptr- 2)
   ;; uint8 _classification
     (setq _classification (sys::peek buf ptr- :char)) (incf ptr- 1)
   ;; float64 _obstacle_probability
     (setq _obstacle_probability (sys::peek buf ptr- :double)) (incf ptr- 8)
   ;; float64 _probability_existence
     (setq _probability_existence (sys::peek buf ptr- :double)) (incf ptr- 8)
   ;; geometry_msgs/Vector3 _center
     (send _center :deserialize buf ptr-) (incf ptr- (send _center :serialization-length))
   ;; geometry_msgs/Vector3 _center_uncertainty
     (send _center_uncertainty :deserialize buf ptr-) (incf ptr- (send _center_uncertainty :serialization-length))
   ;; float64 _heading_angle
     (setq _heading_angle (sys::peek buf ptr- :double)) (incf ptr- 8)
   ;; float64 _heading_angle_uncertainty
     (setq _heading_angle_uncertainty (sys::peek buf ptr- :double)) (incf ptr- 8)
   ;; float32 _length
     (setq _length (sys::peek buf ptr- :float)) (incf ptr- 4)
   ;; float32 _width
     (setq _width (sys::peek buf ptr- :float)) (incf ptr- 4)
   ;; float32 _height
     (setq _height (sys::peek buf ptr- :float)) (incf ptr- 4)
   ;; geometry_msgs/Vector3 _relative_velocity
     (send _relative_velocity :deserialize buf ptr-) (incf ptr- (send _relative_velocity :serialization-length))
   ;; geometry_msgs/Vector3 _relative_velocity_uncertainty
     (send _relative_velocity_uncertainty :deserialize buf ptr-) (incf ptr- (send _relative_velocity_uncertainty :serialization-length))
   ;; geometry_msgs/Vector3 _relative_accelerate
     (send _relative_accelerate :deserialize buf ptr-) (incf ptr- (send _relative_accelerate :serialization-length))
   ;; geometry_msgs/Vector3 _relative_accelerate_uncertainty
     (send _relative_accelerate_uncertainty :deserialize buf ptr-) (incf ptr- (send _relative_accelerate_uncertainty :serialization-length))
   ;; geometry_msgs/Vector3 _absolute_velocity
     (send _absolute_velocity :deserialize buf ptr-) (incf ptr- (send _absolute_velocity :serialization-length))
   ;; geometry_msgs/Vector3 _absolute_velocity_uncertainty
     (send _absolute_velocity_uncertainty :deserialize buf ptr-) (incf ptr- (send _absolute_velocity_uncertainty :serialization-length))
   ;; geometry_msgs/Vector3 _absolute_accelerate
     (send _absolute_accelerate :deserialize buf ptr-) (incf ptr- (send _absolute_accelerate :serialization-length))
   ;; geometry_msgs/Vector3 _absolute_accelerate_uncertainty
     (send _absolute_accelerate_uncertainty :deserialize buf ptr-) (incf ptr- (send _absolute_accelerate_uncertainty :serialization-length))
   ;; float64 _ObjNearestPtX
     (setq _ObjNearestPtX (sys::peek buf ptr- :double)) (incf ptr- 8)
   ;; float64 _ObjNearestPtY
     (setq _ObjNearestPtY (sys::peek buf ptr- :double)) (incf ptr- 8)
   ;; float64 _ObjNearestPtZ
     (setq _ObjNearestPtZ (sys::peek buf ptr- :double)) (incf ptr- 8)
   ;; uint8 _chks
     (setq _chks (sys::peek buf ptr- :char)) (incf ptr- 1)
   ;; uint8 _cntr
     (setq _cntr (sys::peek buf ptr- :char)) (incf ptr- 1)
   ;; uint8 _dynamic_property
     (setq _dynamic_property (sys::peek buf ptr- :char)) (incf ptr- 1)
   ;; uint8 _snr
     (setq _snr (sys::peek buf ptr- :char)) (incf ptr- 1)
   ;; float64 _rcs
     (setq _rcs (sys::peek buf ptr- :double)) (incf ptr- 8)
   ;; float64 _classification_confidence
     (setq _classification_confidence (sys::peek buf ptr- :double)) (incf ptr- 8)
   ;; uint8 _update_bit
     (setq _update_bit (sys::peek buf ptr- :char)) (incf ptr- 1)
   ;; uint8 _update_flag
     (setq _update_flag (sys::peek buf ptr- :char)) (incf ptr- 1)
   ;; uint8 _valid_flag
     (setq _valid_flag (sys::peek buf ptr- :char)) (incf ptr- 1)
   ;; float64 _speed
     (setq _speed (sys::peek buf ptr- :double)) (incf ptr- 8)
   ;; float64 _accelerate
     (setq _accelerate (sys::peek buf ptr- :double)) (incf ptr- 8)
   ;; uint8 _vision_id
     (setq _vision_id (sys::peek buf ptr- :char)) (incf ptr- 1)
   ;; uint8 _CllsnMtgtnByBrkgPrimQly
     (setq _CllsnMtgtnByBrkgPrimQly (sys::peek buf ptr- :char)) (incf ptr- 1)
   ;; uint8 _CllsnMtgtnByBrkgSecQly
     (setq _CllsnMtgtnByBrkgSecQly (sys::peek buf ptr- :char)) (incf ptr- 1)
   ;; uint8 _EmgyLaneKeepAidPosnQly
     (setq _EmgyLaneKeepAidPosnQly (sys::peek buf ptr- :char)) (incf ptr- 1)
   ;; uint8 _CllsnWarnFwdQly
     (setq _CllsnWarnFwdQly (sys::peek buf ptr- :char)) (incf ptr- 1)
   ;; uint8 _fusion_source
     (setq _fusion_source (sys::peek buf ptr- :char)) (incf ptr- 1)
   ;; float64 _time_stamp
     (setq _time_stamp (sys::peek buf ptr- :double)) (incf ptr- 8)
   ;; float64 _lane_offset_right
     (setq _lane_offset_right (sys::peek buf ptr- :double)) (incf ptr- 8)
   ;; float64 _lane_offset_right_dev
     (setq _lane_offset_right_dev (sys::peek buf ptr- :double)) (incf ptr- 8)
   ;; uint8 _indicator_state
     (setq _indicator_state (sys::peek buf ptr- :char)) (incf ptr- 1)
   ;;
   self)
  )

(setf (get data_parse::Object :md5sum-) "5ec958fb840aae7c81d40f6c557b44f5")
(setf (get data_parse::Object :datatype-) "data_parse/Object")
(setf (get data_parse::Object :definition-)
      "# BO_ 1345 Objects_Header: 3 Vector__XXX
#  SG_ Sync_Frame_Index : 0|8@1+ (1,0) [0|255] \"counter\" Vector__XXX
#  SG_ Num_Of_Video_Objs : 8|4@1+ (1,0) [0|12] \"counter\" Vector__XXX
#  SG_ VD_CIPV_ID : 12|7@1+ (1,0) [0|127] \"counter\" Vector__XXX
#  SG_ VD_CIPV_Lost : 19|2@1+ (1,0) [0|2] \"ENUM\" Vector__XXX
#  SG_ OBJ_VD_Allow_Acc : 21|2@1+ (1,0) [0|2] \"ENUM\" Vector__XXX
#  SG_ Reserved : 23|1@1+ (1,0) [0|0] \"NA\" Vector__XXX

# BO_ 1280 Objects_Signals_A1: 7 Vector__XXX
#  SG_ Obj_ID_1 : 0|7@1+ (1,0) [0|127] \"counter\" Vector__XXX
#  SG_ Object_Class_1 : 7|3@1+ (1,0) [0|7] \"ENUM\" Vector__XXX
#  SG_ OBJ_Width_1 : 10|7@1+ (0.05,0) [0|6.35] \"m\" Vector__XXX
#  SG_ OBJ_Length_1 : 17|9@1+ (0.05,0) [0|25.5] \"m\" Vector__XXX
#  SG_ Relative_Long_Velocity_1 : 26|13@1+ (0.05,-120) [-120|130] \"m/s\" Vector__XXX
#  SG_ OBJ_Lane_Assignment_1 : 39|3@1+ (1,0) [0|5] \"ENUM\" Vector__XXX
#  SG_ Relative_Lat_Velocity_1 : 42|11@1+ (0.05,-50) [-50|50] \"m/s\" Vector__XXX
#  SG_ Reserved : 53|3@1+ (1,0) [0|0] \"NA\" Vector__XXX


# BO_ 1281 Objects_Signals_B1: 5 Vector__XXX
#  SG_ Absolute_Long_Acc_1 : 0|9@1+ (0.05,-12.8) [-12.8|12.75] \"m/s2\" Vector__XXX
#  SG_ Long_Distance_1 : 9|13@1+ (0.05,0) [0|350] \"m\" Vector__XXX
#  SG_ Lateral_Distance_1 : 22|12@1+ (0.05,-102.4) [-102.4|102.3] \"m\" Vector__XXX
#  SG_ Reserved : 34|6@1+ (1,0) [0|0] \"NA\" Vector__XXX


# BO_ 1282 Objects_Signals_C1: 7 Vector__XXX
#  SG_ Absolute_Speed_1 : 0|12@1+ (0.05,-100) [-100|100] \"m/s\" Vector__XXX
#  SG_ OBJ_Motion_Status_1 : 12|3@1+ (1,0) [0|4] \"ENUM \" Vector__XXX
#  SG_ OBJ_Motion_Category_1 : 15|4@1+ (1,0) [0|12] \"ENUM \" Vector__XXX
#  SG_ Brake_Light_1 : 19|1@1+ (1,0) [0|1] \"bool\" Vector__XXX
#  SG_ Turn_Indicator_Right_1 : 20|1@1+ (1,0) [0|1] \"bool\" Vector__XXX
#  SG_ Turn_Indicator_Left_1 : 21|1@1+ (1,0) [0|1] \"bool\" Vector__XXX
#  SG_ Light_indicator_validity_1 : 22|1@1+ (1,0) [0|1] \"bool\" Vector__XXX
#  SG_ OBJ_Angle_Mid_1 : 23|14@1+ (0.0002,-1.571) [-1.571|1.571] \"rad\" Vector__XXX
#  SG_ OBJ_Angle_Rate_1 : 37|12@1+ (0.002,-2.234) [-2.234|2.2318] \"rad/s\" Vector__XXX
#  SG_ Reserved : 49|7@1+ (1,0) [0|0] \"NA\" Vector__XXX

uint8 UNCLASSIFIED=0
uint8 UNKNOWN_SMALL=1
uint8 UNKNOWN_BIG=2
uint8 PEDESTRIAN=3
uint8 BIKE=4
uint8 CAR=5
uint8 TRUCK=6

#### ID of this object from tracking. 
#* Obj_ID_1
uint16 id

#### Number of scans this object has been tracked for.
int16 life_cycles

#### Most likely class of this object(see top)
#* Object_Class_1
uint8 classification

#### The higher this value is the more reliable is the assigned object class
float64 obstacle_probability

#### The higher this value is the more reliable is the assigned object class
float64 probability_existence

#### x,y,z in m
#* Long_Distance_1  Lateral_Distance_1
geometry_msgs/Vector3 center

#### position untertainty
geometry_msgs/Vector3 center_uncertainty

#### yaw angle 
#* OBJ_Angle_Rate_1  
#* OBJ_Angle_Mid_1 
float64 heading_angle 

#### yaw angle uncertainty
float64 heading_angle_uncertainty

#### Size of the object box in the object, X - length in m
#* OBJ_Length_1
float32 length

#### Size of the object box in the object, Y - length in m
#* OBJ_Width_1
float32 width

#### Size of the object box in the object, Z - length in m
float32 height

#### relative_velocity in m/s
#* Relative_Lat_Velocity_1  Relative_Long_Velocity_1
geometry_msgs/Vector3 relative_velocity

#### relative_velocity untertainty
geometry_msgs/Vector3 relative_velocity_uncertainty

#### relative_accelerate in m/s
geometry_msgs/Vector3 relative_accelerate

#### relative_accelerate untertainty
geometry_msgs/Vector3 relative_accelerate_uncertainty

#### absolute_velocity in m/s
#* Absolute_Speed_1
geometry_msgs/Vector3 absolute_velocity

#### absolute_velocity untertainty
geometry_msgs/Vector3 absolute_velocity_uncertainty

#### absolute_accelerate in m/s
#* Absolute_Long_Acc_1
geometry_msgs/Vector3 absolute_accelerate

#### absolute_accelerate untertainty
geometry_msgs/Vector3 absolute_accelerate_uncertainty

float64 ObjNearestPtX
float64 ObjNearestPtY
float64 ObjNearestPtZ

uint8 chks
uint8 cntr
uint8 dynamic_property
uint8 snr
float64 rcs
float64 classification_confidence
uint8 update_bit
uint8 update_flag
uint8 valid_flag
float64 speed
float64 accelerate
uint8 vision_id
uint8 CllsnMtgtnByBrkgPrimQly
uint8 CllsnMtgtnByBrkgSecQly
uint8 EmgyLaneKeepAidPosnQly
uint8 CllsnWarnFwdQly

uint8 fusion_source

float64 time_stamp

#float64 isp_time_stamp

# enum
#uint8 Cms_confidence
#uint8 CmsConfidence1_Invalid = 0
#uint8 CmsConfidence1_Valid = 1
#uint8 CmsConfidence1_Reserved = 2
#uint8 CmsConfidence1_Reserved1 = 3


float64 lane_offset_right
float64 lane_offset_right_dev


# ENUM for classification
uint8 CLASS_UNKNOWN              = 0
uint8 CLASS_CAR                  = 1
uint8 CLASS_TRUCK                = 2
uint8 CLASS_MOTORCYCLE           = 3
uint8 CLASS_CYCLIST              = 4   # bicyle, E-Scooter, tricyclist
uint8 CLASS_PEDESTRIAN           = 5
uint8 CLASS_ROAD_BARRIER         = 6   # traffic cone, parking gate, road barrier
uint8 CLASS_MAX_NUM              = 7


# ENUM for flash light status of the object
uint8 INDICATOR_UNDEFINED        = 0   # Flash light status is not defined for non-vehicle objects
uint8 INDICATOR_OFF              = 1   # Flash light is currenhtly not active
uint8 INDICATOR_RIGHT            = 2   # Right flash light is on and/or blinking
uint8 INDICATOR_LEFT             = 3   # Left flash light is on and/or blinking
uint8 INDICATOR_BOTH             = 4   # Flash lights from both side are on and/or blinking

# Flash light status of the object, if applicable (see enum for details)
#* Turn_Indicator_Left_1 Turn_Indicator_Right_1
uint8 indicator_state                  # [INDICATOR_*]

================================================================================
MSG: geometry_msgs/Vector3
# This represents a vector in free space. 
# It is only meant to represent a direction. Therefore, it does not
# make sense to apply a translation to it (e.g., when applying a 
# generic rigid transformation to a Vector3, tf2 will only apply the
# rotation). If you want your data to be translatable too, use the
# geometry_msgs/Point message instead.

float64 x
float64 y
float64 z
")



(provide :data_parse/Object "5ec958fb840aae7c81d40f6c557b44f5")


