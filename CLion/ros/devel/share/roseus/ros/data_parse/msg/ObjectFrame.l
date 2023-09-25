;; Auto-generated. Do not edit!


(when (boundp 'data_parse::ObjectFrame)
  (if (not (find-package "DATA_PARSE"))
    (make-package "DATA_PARSE"))
  (shadow 'ObjectFrame (find-package "DATA_PARSE")))
(unless (find-package "DATA_PARSE::OBJECTFRAME")
  (make-package "DATA_PARSE::OBJECTFRAME"))

(in-package "ROS")
;;//! \htmlinclude ObjectFrame.msg.html
(if (not (find-package "STD_MSGS"))
  (ros::roseus-add-msgs "std_msgs"))


(defclass data_parse::ObjectFrame
  :super ros::object
  :slots (_header _HostSpeed _HostYawRate _StsBlkd0bin _StsBlkdConf _StsChks _StsCntr _StsDstbc _StsEna _StsFaulty _StsIfVersMajor _StsIfVersMinor _StsLatency _StsMisAlign _StsMissCom _StsRdrNrDetn _StsRdrNrObj _StsSftyFlt _StsTiStamp _StsWhlSpdCmpFac _TiStampStsGlbTiBas _TiStampStsSyncToGatewy _TiStampStsTiLeap _TiStampStsTiOut _sensor_type _Blockage _Calibration _Fault _objects ))

(defmethod data_parse::ObjectFrame
  (:init
   (&key
    ((:header __header) (instance std_msgs::Header :init))
    ((:HostSpeed __HostSpeed) 0.0)
    ((:HostYawRate __HostYawRate) 0.0)
    ((:StsBlkd0bin __StsBlkd0bin) 0.0)
    ((:StsBlkdConf __StsBlkdConf) 0)
    ((:StsChks __StsChks) 0)
    ((:StsCntr __StsCntr) 0)
    ((:StsDstbc __StsDstbc) 0)
    ((:StsEna __StsEna) 0)
    ((:StsFaulty __StsFaulty) 0)
    ((:StsIfVersMajor __StsIfVersMajor) 0)
    ((:StsIfVersMinor __StsIfVersMinor) 0)
    ((:StsLatency __StsLatency) 0.0)
    ((:StsMisAlign __StsMisAlign) 0)
    ((:StsMissCom __StsMissCom) 0)
    ((:StsRdrNrDetn __StsRdrNrDetn) 0)
    ((:StsRdrNrObj __StsRdrNrObj) 0)
    ((:StsSftyFlt __StsSftyFlt) 0)
    ((:StsTiStamp __StsTiStamp) 0.0)
    ((:StsWhlSpdCmpFac __StsWhlSpdCmpFac) 0)
    ((:TiStampStsGlbTiBas __TiStampStsGlbTiBas) 0)
    ((:TiStampStsSyncToGatewy __TiStampStsSyncToGatewy) 0)
    ((:TiStampStsTiLeap __TiStampStsTiLeap) 0)
    ((:TiStampStsTiOut __TiStampStsTiOut) 0)
    ((:sensor_type __sensor_type) 0)
    ((:Blockage __Blockage) 0)
    ((:Calibration __Calibration) 0)
    ((:Fault __Fault) 0)
    ((:objects __objects) ())
    )
   (send-super :init)
   (setq _header __header)
   (setq _HostSpeed (float __HostSpeed))
   (setq _HostYawRate (float __HostYawRate))
   (setq _StsBlkd0bin (float __StsBlkd0bin))
   (setq _StsBlkdConf (round __StsBlkdConf))
   (setq _StsChks (round __StsChks))
   (setq _StsCntr (round __StsCntr))
   (setq _StsDstbc (round __StsDstbc))
   (setq _StsEna (round __StsEna))
   (setq _StsFaulty (round __StsFaulty))
   (setq _StsIfVersMajor (round __StsIfVersMajor))
   (setq _StsIfVersMinor (round __StsIfVersMinor))
   (setq _StsLatency (float __StsLatency))
   (setq _StsMisAlign (round __StsMisAlign))
   (setq _StsMissCom (round __StsMissCom))
   (setq _StsRdrNrDetn (round __StsRdrNrDetn))
   (setq _StsRdrNrObj (round __StsRdrNrObj))
   (setq _StsSftyFlt (round __StsSftyFlt))
   (setq _StsTiStamp (float __StsTiStamp))
   (setq _StsWhlSpdCmpFac (round __StsWhlSpdCmpFac))
   (setq _TiStampStsGlbTiBas (round __TiStampStsGlbTiBas))
   (setq _TiStampStsSyncToGatewy (round __TiStampStsSyncToGatewy))
   (setq _TiStampStsTiLeap (round __TiStampStsTiLeap))
   (setq _TiStampStsTiOut (round __TiStampStsTiOut))
   (setq _sensor_type (round __sensor_type))
   (setq _Blockage (round __Blockage))
   (setq _Calibration (round __Calibration))
   (setq _Fault (round __Fault))
   (setq _objects __objects)
   self)
  (:header
   (&rest __header)
   (if (keywordp (car __header))
       (send* _header __header)
     (progn
       (if __header (setq _header (car __header)))
       _header)))
  (:HostSpeed
   (&optional __HostSpeed)
   (if __HostSpeed (setq _HostSpeed __HostSpeed)) _HostSpeed)
  (:HostYawRate
   (&optional __HostYawRate)
   (if __HostYawRate (setq _HostYawRate __HostYawRate)) _HostYawRate)
  (:StsBlkd0bin
   (&optional __StsBlkd0bin)
   (if __StsBlkd0bin (setq _StsBlkd0bin __StsBlkd0bin)) _StsBlkd0bin)
  (:StsBlkdConf
   (&optional __StsBlkdConf)
   (if __StsBlkdConf (setq _StsBlkdConf __StsBlkdConf)) _StsBlkdConf)
  (:StsChks
   (&optional __StsChks)
   (if __StsChks (setq _StsChks __StsChks)) _StsChks)
  (:StsCntr
   (&optional __StsCntr)
   (if __StsCntr (setq _StsCntr __StsCntr)) _StsCntr)
  (:StsDstbc
   (&optional __StsDstbc)
   (if __StsDstbc (setq _StsDstbc __StsDstbc)) _StsDstbc)
  (:StsEna
   (&optional __StsEna)
   (if __StsEna (setq _StsEna __StsEna)) _StsEna)
  (:StsFaulty
   (&optional __StsFaulty)
   (if __StsFaulty (setq _StsFaulty __StsFaulty)) _StsFaulty)
  (:StsIfVersMajor
   (&optional __StsIfVersMajor)
   (if __StsIfVersMajor (setq _StsIfVersMajor __StsIfVersMajor)) _StsIfVersMajor)
  (:StsIfVersMinor
   (&optional __StsIfVersMinor)
   (if __StsIfVersMinor (setq _StsIfVersMinor __StsIfVersMinor)) _StsIfVersMinor)
  (:StsLatency
   (&optional __StsLatency)
   (if __StsLatency (setq _StsLatency __StsLatency)) _StsLatency)
  (:StsMisAlign
   (&optional __StsMisAlign)
   (if __StsMisAlign (setq _StsMisAlign __StsMisAlign)) _StsMisAlign)
  (:StsMissCom
   (&optional __StsMissCom)
   (if __StsMissCom (setq _StsMissCom __StsMissCom)) _StsMissCom)
  (:StsRdrNrDetn
   (&optional __StsRdrNrDetn)
   (if __StsRdrNrDetn (setq _StsRdrNrDetn __StsRdrNrDetn)) _StsRdrNrDetn)
  (:StsRdrNrObj
   (&optional __StsRdrNrObj)
   (if __StsRdrNrObj (setq _StsRdrNrObj __StsRdrNrObj)) _StsRdrNrObj)
  (:StsSftyFlt
   (&optional __StsSftyFlt)
   (if __StsSftyFlt (setq _StsSftyFlt __StsSftyFlt)) _StsSftyFlt)
  (:StsTiStamp
   (&optional __StsTiStamp)
   (if __StsTiStamp (setq _StsTiStamp __StsTiStamp)) _StsTiStamp)
  (:StsWhlSpdCmpFac
   (&optional __StsWhlSpdCmpFac)
   (if __StsWhlSpdCmpFac (setq _StsWhlSpdCmpFac __StsWhlSpdCmpFac)) _StsWhlSpdCmpFac)
  (:TiStampStsGlbTiBas
   (&optional __TiStampStsGlbTiBas)
   (if __TiStampStsGlbTiBas (setq _TiStampStsGlbTiBas __TiStampStsGlbTiBas)) _TiStampStsGlbTiBas)
  (:TiStampStsSyncToGatewy
   (&optional __TiStampStsSyncToGatewy)
   (if __TiStampStsSyncToGatewy (setq _TiStampStsSyncToGatewy __TiStampStsSyncToGatewy)) _TiStampStsSyncToGatewy)
  (:TiStampStsTiLeap
   (&optional __TiStampStsTiLeap)
   (if __TiStampStsTiLeap (setq _TiStampStsTiLeap __TiStampStsTiLeap)) _TiStampStsTiLeap)
  (:TiStampStsTiOut
   (&optional __TiStampStsTiOut)
   (if __TiStampStsTiOut (setq _TiStampStsTiOut __TiStampStsTiOut)) _TiStampStsTiOut)
  (:sensor_type
   (&optional __sensor_type)
   (if __sensor_type (setq _sensor_type __sensor_type)) _sensor_type)
  (:Blockage
   (&optional __Blockage)
   (if __Blockage (setq _Blockage __Blockage)) _Blockage)
  (:Calibration
   (&optional __Calibration)
   (if __Calibration (setq _Calibration __Calibration)) _Calibration)
  (:Fault
   (&optional __Fault)
   (if __Fault (setq _Fault __Fault)) _Fault)
  (:objects
   (&rest __objects)
   (if (keywordp (car __objects))
       (send* _objects __objects)
     (progn
       (if __objects (setq _objects (car __objects)))
       _objects)))
  (:serialization-length
   ()
   (+
    ;; std_msgs/Header _header
    (send _header :serialization-length)
    ;; float64 _HostSpeed
    8
    ;; float64 _HostYawRate
    8
    ;; float64 _StsBlkd0bin
    8
    ;; uint8 _StsBlkdConf
    1
    ;; uint8 _StsChks
    1
    ;; uint8 _StsCntr
    1
    ;; uint8 _StsDstbc
    1
    ;; uint8 _StsEna
    1
    ;; uint8 _StsFaulty
    1
    ;; uint8 _StsIfVersMajor
    1
    ;; uint8 _StsIfVersMinor
    1
    ;; float64 _StsLatency
    8
    ;; uint8 _StsMisAlign
    1
    ;; uint8 _StsMissCom
    1
    ;; uint8 _StsRdrNrDetn
    1
    ;; uint8 _StsRdrNrObj
    1
    ;; uint8 _StsSftyFlt
    1
    ;; float64 _StsTiStamp
    8
    ;; uint8 _StsWhlSpdCmpFac
    1
    ;; uint8 _TiStampStsGlbTiBas
    1
    ;; uint8 _TiStampStsSyncToGatewy
    1
    ;; uint8 _TiStampStsTiLeap
    1
    ;; uint8 _TiStampStsTiOut
    1
    ;; uint8 _sensor_type
    1
    ;; uint8 _Blockage
    1
    ;; uint8 _Calibration
    1
    ;; uint8 _Fault
    1
    ;; data_parse/Object[] _objects
    (apply #'+ (send-all _objects :serialization-length)) 4
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; std_msgs/Header _header
       (send _header :serialize s)
     ;; float64 _HostSpeed
       (sys::poke _HostSpeed (send s :buffer) (send s :count) :double) (incf (stream-count s) 8)
     ;; float64 _HostYawRate
       (sys::poke _HostYawRate (send s :buffer) (send s :count) :double) (incf (stream-count s) 8)
     ;; float64 _StsBlkd0bin
       (sys::poke _StsBlkd0bin (send s :buffer) (send s :count) :double) (incf (stream-count s) 8)
     ;; uint8 _StsBlkdConf
       (write-byte _StsBlkdConf s)
     ;; uint8 _StsChks
       (write-byte _StsChks s)
     ;; uint8 _StsCntr
       (write-byte _StsCntr s)
     ;; uint8 _StsDstbc
       (write-byte _StsDstbc s)
     ;; uint8 _StsEna
       (write-byte _StsEna s)
     ;; uint8 _StsFaulty
       (write-byte _StsFaulty s)
     ;; uint8 _StsIfVersMajor
       (write-byte _StsIfVersMajor s)
     ;; uint8 _StsIfVersMinor
       (write-byte _StsIfVersMinor s)
     ;; float64 _StsLatency
       (sys::poke _StsLatency (send s :buffer) (send s :count) :double) (incf (stream-count s) 8)
     ;; uint8 _StsMisAlign
       (write-byte _StsMisAlign s)
     ;; uint8 _StsMissCom
       (write-byte _StsMissCom s)
     ;; uint8 _StsRdrNrDetn
       (write-byte _StsRdrNrDetn s)
     ;; uint8 _StsRdrNrObj
       (write-byte _StsRdrNrObj s)
     ;; uint8 _StsSftyFlt
       (write-byte _StsSftyFlt s)
     ;; float64 _StsTiStamp
       (sys::poke _StsTiStamp (send s :buffer) (send s :count) :double) (incf (stream-count s) 8)
     ;; uint8 _StsWhlSpdCmpFac
       (write-byte _StsWhlSpdCmpFac s)
     ;; uint8 _TiStampStsGlbTiBas
       (write-byte _TiStampStsGlbTiBas s)
     ;; uint8 _TiStampStsSyncToGatewy
       (write-byte _TiStampStsSyncToGatewy s)
     ;; uint8 _TiStampStsTiLeap
       (write-byte _TiStampStsTiLeap s)
     ;; uint8 _TiStampStsTiOut
       (write-byte _TiStampStsTiOut s)
     ;; uint8 _sensor_type
       (write-byte _sensor_type s)
     ;; uint8 _Blockage
       (write-byte _Blockage s)
     ;; uint8 _Calibration
       (write-byte _Calibration s)
     ;; uint8 _Fault
       (write-byte _Fault s)
     ;; data_parse/Object[] _objects
     (write-long (length _objects) s)
     (dolist (elem _objects)
       (send elem :serialize s)
       )
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; std_msgs/Header _header
     (send _header :deserialize buf ptr-) (incf ptr- (send _header :serialization-length))
   ;; float64 _HostSpeed
     (setq _HostSpeed (sys::peek buf ptr- :double)) (incf ptr- 8)
   ;; float64 _HostYawRate
     (setq _HostYawRate (sys::peek buf ptr- :double)) (incf ptr- 8)
   ;; float64 _StsBlkd0bin
     (setq _StsBlkd0bin (sys::peek buf ptr- :double)) (incf ptr- 8)
   ;; uint8 _StsBlkdConf
     (setq _StsBlkdConf (sys::peek buf ptr- :char)) (incf ptr- 1)
   ;; uint8 _StsChks
     (setq _StsChks (sys::peek buf ptr- :char)) (incf ptr- 1)
   ;; uint8 _StsCntr
     (setq _StsCntr (sys::peek buf ptr- :char)) (incf ptr- 1)
   ;; uint8 _StsDstbc
     (setq _StsDstbc (sys::peek buf ptr- :char)) (incf ptr- 1)
   ;; uint8 _StsEna
     (setq _StsEna (sys::peek buf ptr- :char)) (incf ptr- 1)
   ;; uint8 _StsFaulty
     (setq _StsFaulty (sys::peek buf ptr- :char)) (incf ptr- 1)
   ;; uint8 _StsIfVersMajor
     (setq _StsIfVersMajor (sys::peek buf ptr- :char)) (incf ptr- 1)
   ;; uint8 _StsIfVersMinor
     (setq _StsIfVersMinor (sys::peek buf ptr- :char)) (incf ptr- 1)
   ;; float64 _StsLatency
     (setq _StsLatency (sys::peek buf ptr- :double)) (incf ptr- 8)
   ;; uint8 _StsMisAlign
     (setq _StsMisAlign (sys::peek buf ptr- :char)) (incf ptr- 1)
   ;; uint8 _StsMissCom
     (setq _StsMissCom (sys::peek buf ptr- :char)) (incf ptr- 1)
   ;; uint8 _StsRdrNrDetn
     (setq _StsRdrNrDetn (sys::peek buf ptr- :char)) (incf ptr- 1)
   ;; uint8 _StsRdrNrObj
     (setq _StsRdrNrObj (sys::peek buf ptr- :char)) (incf ptr- 1)
   ;; uint8 _StsSftyFlt
     (setq _StsSftyFlt (sys::peek buf ptr- :char)) (incf ptr- 1)
   ;; float64 _StsTiStamp
     (setq _StsTiStamp (sys::peek buf ptr- :double)) (incf ptr- 8)
   ;; uint8 _StsWhlSpdCmpFac
     (setq _StsWhlSpdCmpFac (sys::peek buf ptr- :char)) (incf ptr- 1)
   ;; uint8 _TiStampStsGlbTiBas
     (setq _TiStampStsGlbTiBas (sys::peek buf ptr- :char)) (incf ptr- 1)
   ;; uint8 _TiStampStsSyncToGatewy
     (setq _TiStampStsSyncToGatewy (sys::peek buf ptr- :char)) (incf ptr- 1)
   ;; uint8 _TiStampStsTiLeap
     (setq _TiStampStsTiLeap (sys::peek buf ptr- :char)) (incf ptr- 1)
   ;; uint8 _TiStampStsTiOut
     (setq _TiStampStsTiOut (sys::peek buf ptr- :char)) (incf ptr- 1)
   ;; uint8 _sensor_type
     (setq _sensor_type (sys::peek buf ptr- :char)) (incf ptr- 1)
   ;; uint8 _Blockage
     (setq _Blockage (sys::peek buf ptr- :char)) (incf ptr- 1)
   ;; uint8 _Calibration
     (setq _Calibration (sys::peek buf ptr- :char)) (incf ptr- 1)
   ;; uint8 _Fault
     (setq _Fault (sys::peek buf ptr- :char)) (incf ptr- 1)
   ;; data_parse/Object[] _objects
   (let (n)
     (setq n (sys::peek buf ptr- :integer)) (incf ptr- 4)
     (setq _objects (let (r) (dotimes (i n) (push (instance data_parse::Object :init) r)) r))
     (dolist (elem- _objects)
     (send elem- :deserialize buf ptr-) (incf ptr- (send elem- :serialization-length))
     ))
   ;;
   self)
  )

(setf (get data_parse::ObjectFrame :md5sum-) "c4b338d30c7b19bee12d9930eae95422")
(setf (get data_parse::ObjectFrame :datatype-) "data_parse/ObjectFrame")
(setf (get data_parse::ObjectFrame :definition-)
      "std_msgs/Header header

float64 HostSpeed
float64 HostYawRate
float64 StsBlkd0bin
uint8 StsBlkdConf
uint8 StsChks
uint8 StsCntr
uint8 StsDstbc
uint8 StsEna
uint8 StsFaulty
uint8 StsIfVersMajor
uint8 StsIfVersMinor
float64 StsLatency
uint8 StsMisAlign
uint8 StsMissCom
uint8 StsRdrNrDetn
uint8 StsRdrNrObj
uint8 StsSftyFlt
float64 StsTiStamp
uint8 StsWhlSpdCmpFac
uint8 TiStampStsGlbTiBas
uint8 TiStampStsSyncToGatewy
uint8 TiStampStsTiLeap
uint8 TiStampStsTiOut

uint8 sensor_type

uint8 Blockage
uint8 Calibration
uint8 Fault

Object[] objects
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
MSG: data_parse/Object
# BO_ 1345 Objects_Header: 3 Vector__XXX
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



(provide :data_parse/ObjectFrame "c4b338d30c7b19bee12d9930eae95422")


