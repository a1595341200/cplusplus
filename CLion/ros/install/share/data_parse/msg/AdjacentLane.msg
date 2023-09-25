std_msgs/Header header

uint8 Lanes_Adjacent_Count
# enum
uint8 Adjacent_Type
uint8 UNDECIDED = 0
uint8 SOLID = 1
uint8 DASHED = 2
uint8 DLM = 3 
uint8 BOTTS = 4
uint8 DECELERATION = 5
uint8 HOV_LANE = 6

float64 Adjacent_Confidence
float64 Adjacent_View_Range_Start
float64 Adjacent_View_Range_End

# enum
uint8 Adjacent_Line_Role
uint8 NONE = 0
uint8 LEFT__LEFT_LANEMARK = 1
uint8 LEFT__RIGHT_LANEMARK = 2
uint8 RIGHT__LEFT_LANEMARK = 3
uint8 RIGHT__RIGHT_LANEMARK = 4

LHParam Adjacent_Line_C