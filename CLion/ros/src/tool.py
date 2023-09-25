#!/usr/bin/env python3.8
from data_parse.msg import ObjectFrame
import rospy
def varianceCallback(msg):
    rospy.loginfo("VarianceCallback", msg.objects[0])

if __name__ == '__main__':
    rospy.init_node("variance")
    sub = rospy.Subscriber("front_radar_objects", ObjectFrame, varianceCallback)
    rospy.spin()
