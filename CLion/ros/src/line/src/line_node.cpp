/*
 * @Author: yao.xie yao.xie@jicaai.com
 * @Date: 2023-07-04 16:57:32
 * @LastEditors: yao.xie 1595341200@qq.com
 * @LastEditTime: 2023-07-14 13:38:40
 * @FilePath: /rviz_demo/src/line/src/line_node.cpp
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置
 * 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 *
 */
#include <cmath>
#include <ros/ros.h>
#include <visualization_msgs/Marker.h>
#include <visualization_msgs/MarkerArray.h>
#include <opencv2/opencv.hpp>

using namespace cv;
using namespace std;

int main(int argc, char **argv) {
    ros::init(argc, argv, "line_node");
    ros::NodeHandle nh;
    ros::Publisher pub = nh.advertise<visualization_msgs::MarkerArray>("MarkerArray", 1);
    // marker.lifetime = ros::Duration(1, 0);
    // 打开默认的摄像头
    cv::VideoCapture cap(0);
    std::cout << "VideoCapture" << std::endl;
    // 检查视频流是否打开
    if (!cap.isOpened()) {
        std::cerr << "ERROR: Unable to open the camera" << std::endl;
        return -1;
    }

    // 定义一个计数器
    int count = 0;

    // 循环读取摄像头图像
    while (true) {
        // 获取一帧图像
        std::cout << "start" << std::endl;
        Mat frame;
        cap >> frame;
        imshow("Frame", frame);

        // 按下“s”键保存图像
        char c = (char)waitKey(25);
        if (c == 's') {
            stringstream ss;
            ss << "frame-" << count << ".png";
            imwrite(ss.str(), frame);
            cout << "Saved " << ss.str() << endl;
            count++;
        }

        // 按下ESC键退出
        if (c == 27) {
            break;
        }
    }

    // 释放视频流
    cap.release();

    // 关闭所有窗口
    destroyAllWindows();

    ros::Rate r(10);
    while (ros::ok()) {
        std::cout << "1" << std::endl;
        visualization_msgs::MarkerArray lines;
        for (int i = 0; i < 2; ++i) {
            visualization_msgs::Marker marker;
            marker.header.frame_id = "map";
            marker.header.stamp = ros::Time::now();
            marker.ns = "point_node";
            marker.id = i;
            marker.type = visualization_msgs::Marker::LINE_STRIP;
            marker.action = visualization_msgs::Marker::ADD;
            marker.pose.orientation.x = 0.0;
            marker.pose.orientation.y = 0.0;
            marker.pose.orientation.z = 0.0;
            marker.pose.orientation.w = 1.0;
            marker.scale.x = 0.2;
            marker.scale.y = 0.2;
            marker.color.a = 1.0;
            marker.color.r = 0.0;
            marker.color.g = 1.0;
            marker.color.b = 0.0;
            geometry_msgs::Point p, q;
            if (i == 0) {
                p.z = 0;
                q.z = 0;
            } else {
                p.z = 10;
                q.z = 10;
            }
            p.x = 0;
            p.y = 0;
            q.x = 10;
            q.y = 0;
            marker.points.push_back(p);
            marker.points.push_back(q);
            lines.markers.push_back(marker);
        }
        std::cout << "size " << lines.markers.size() << "\n";
        pub.publish(lines);
        r.sleep();
    }
    ros::spin();
}
