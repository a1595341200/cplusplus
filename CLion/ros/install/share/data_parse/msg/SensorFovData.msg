################################################################################
#
# Sensor Fov Data
#
# Description:
#   Interface for describing the fov of a sensor, normally we use circle sector
#   to decribe the field of view of sensor data
#
#
#
################################################################################

# device id
uint8 device_id

# [m] the position based on the ego_rear_axis
geometry_msgs/Vector3 position

# [rad] the opening angle of the sensor view
float32 opening_angle

# [rad] the yaw angle of the sensor based on the x axis of ego_rear_axis
float32 yaw_angle

# [m] minimum range of sensor detection in meter
# normally the close blind spot distance of this sensor
float32 min_range

# [m] max range of sensor detection in meter
float32 max_range

