#include <ros/ros.h>
#include <tf2/LinearMath/Quaternion.h>
#include <visualization_msgs/Marker.h>

int main(int argc, char** argv) {
  ros::init(argc, argv, "basic_shapes");
  ros::NodeHandle n;
  ros::Rate r(1);
  ros::Publisher marker_pub =
      n.advertise<visualization_msgs::Marker>("visualization_marker", 1);
  ros::Publisher marker_pub2 =
      n.advertise<visualization_msgs::Marker>("visualization_marker2", 1);
  uint32_t shape = visualization_msgs::Marker::TEXT_VIEW_FACING;

  while (ros::ok()) {
    visualization_msgs::Marker marker;

    marker.header.frame_id = "map";
    marker.header.stamp = ros::Time::now();

    marker.ns = "/basic_shapes";
    marker.id = 0;

    marker.type = shape;

    marker.action = visualization_msgs::Marker::ADD;

    marker.pose.position.x = 0;
    marker.pose.position.y = 0;
    marker.pose.position.z = 0;
    marker.pose.orientation.x = 0.0;
    marker.pose.orientation.y = 0.0;
    marker.pose.orientation.z = 0.0;
    marker.pose.orientation.w = 1.0;

    marker.scale.x = 1.0;
    marker.scale.y = 1.0;
    marker.scale.z = 1.0;

    marker.color.r = 0.0f;
    marker.color.g = 1.0f;
    marker.color.b = 0.0f;
    marker.color.a = 1.0;
    marker.text = "basic_shapes";
    marker.lifetime = ros::Duration();
    auto marker2 = marker;
    marker2.ns = "/basic_shapes2";
    tf2::Quaternion q;
    double rx = 0;
    while (true) {
      if (!ros::ok()) {
        return 0;
      }
      q.setRPY(rx, 0, 0);
      rx += 45 * 3.1415926 / 180;
      marker.pose.orientation.x = q.x();
      marker.pose.orientation.y = q.y();
      marker.pose.orientation.z = q.z();
      marker.pose.orientation.w = q.w();
      marker_pub.publish(marker);
      marker_pub2.publish(marker2);
      marker2.pose.position.x += 1;
      sleep(1);
    }

    r.sleep();
  }
}
