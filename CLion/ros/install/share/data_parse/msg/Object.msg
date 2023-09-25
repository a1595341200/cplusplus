# BO_ 1345 Objects_Header: 3 Vector__XXX
#  SG_ Sync_Frame_Index : 0|8@1+ (1,0) [0|255] "counter" Vector__XXX
#  SG_ Num_Of_Video_Objs : 8|4@1+ (1,0) [0|12] "counter" Vector__XXX
#  SG_ VD_CIPV_ID : 12|7@1+ (1,0) [0|127] "counter" Vector__XXX
#  SG_ VD_CIPV_Lost : 19|2@1+ (1,0) [0|2] "ENUM" Vector__XXX
#  SG_ OBJ_VD_Allow_Acc : 21|2@1+ (1,0) [0|2] "ENUM" Vector__XXX
#  SG_ Reserved : 23|1@1+ (1,0) [0|0] "NA" Vector__XXX

# BO_ 1280 Objects_Signals_A1: 7 Vector__XXX
#  SG_ Obj_ID_1 : 0|7@1+ (1,0) [0|127] "counter" Vector__XXX
#  SG_ Object_Class_1 : 7|3@1+ (1,0) [0|7] "ENUM" Vector__XXX
#  SG_ OBJ_Width_1 : 10|7@1+ (0.05,0) [0|6.35] "m" Vector__XXX
#  SG_ OBJ_Length_1 : 17|9@1+ (0.05,0) [0|25.5] "m" Vector__XXX
#  SG_ Relative_Long_Velocity_1 : 26|13@1+ (0.05,-120) [-120|130] "m/s" Vector__XXX
#  SG_ OBJ_Lane_Assignment_1 : 39|3@1+ (1,0) [0|5] "ENUM" Vector__XXX
#  SG_ Relative_Lat_Velocity_1 : 42|11@1+ (0.05,-50) [-50|50] "m/s" Vector__XXX
#  SG_ Reserved : 53|3@1+ (1,0) [0|0] "NA" Vector__XXX


# BO_ 1281 Objects_Signals_B1: 5 Vector__XXX
#  SG_ Absolute_Long_Acc_1 : 0|9@1+ (0.05,-12.8) [-12.8|12.75] "m/s2" Vector__XXX
#  SG_ Long_Distance_1 : 9|13@1+ (0.05,0) [0|350] "m" Vector__XXX
#  SG_ Lateral_Distance_1 : 22|12@1+ (0.05,-102.4) [-102.4|102.3] "m" Vector__XXX
#  SG_ Reserved : 34|6@1+ (1,0) [0|0] "NA" Vector__XXX


# BO_ 1282 Objects_Signals_C1: 7 Vector__XXX
#  SG_ Absolute_Speed_1 : 0|12@1+ (0.05,-100) [-100|100] "m/s" Vector__XXX
#  SG_ OBJ_Motion_Status_1 : 12|3@1+ (1,0) [0|4] "ENUM " Vector__XXX
#  SG_ OBJ_Motion_Category_1 : 15|4@1+ (1,0) [0|12] "ENUM " Vector__XXX
#  SG_ Brake_Light_1 : 19|1@1+ (1,0) [0|1] "bool" Vector__XXX
#  SG_ Turn_Indicator_Right_1 : 20|1@1+ (1,0) [0|1] "bool" Vector__XXX
#  SG_ Turn_Indicator_Left_1 : 21|1@1+ (1,0) [0|1] "bool" Vector__XXX
#  SG_ Light_indicator_validity_1 : 22|1@1+ (1,0) [0|1] "bool" Vector__XXX
#  SG_ OBJ_Angle_Mid_1 : 23|14@1+ (0.0002,-1.571) [-1.571|1.571] "rad" Vector__XXX
#  SG_ OBJ_Angle_Rate_1 : 37|12@1+ (0.002,-2.234) [-2.234|2.2318] "rad/s" Vector__XXX
#  SG_ Reserved : 49|7@1+ (1,0) [0|0] "NA" Vector__XXX

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
