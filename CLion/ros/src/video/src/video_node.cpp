/*
 * @Author: yao.xie 1595341200@qq.com
 * @Date: 2023-07-14 13:31:24
 * @LastEditors: yao.xie 1595341200@qq.com
 * @LastEditTime: 2023-07-14 15:48:57
 * @FilePath: /ros_learning/src/video/src/video_node.cpp
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
#include <ros/ros.h>
#include <opencv2/opencv.hpp>
#include <image_transport/image_transport.h>
#include <cv_bridge/cv_bridge.h>

int main(int argc, char **argv) {
    ros::init(argc, argv, "image_node");
    bool showImage{false};
    std::cout << std::boolalpha << ros::param::param("showImage", showImage, false) << std::endl;
    ros::NodeHandle nh;
    cv::VideoCapture cap(
        "/media/psf/Home/Desktop/work/ros_learning/屏幕录制2023-07-14 13.27.45.mov");
    if (!cap.isOpened()) {
        std::cerr << "ERROR: Unable to open the camera" << std::endl;
        return -1;
    }
    image_transport::ImageTransport it(nh);
    image_transport::Publisher pub = it.advertise("camera/image", 1);
    int count = 0;
    auto width = cap.get(cv::CAP_PROP_FRAME_WIDTH);
    auto height = cap.get(cv::CAP_PROP_FRAME_HEIGHT);
    std::cout << "FPS : " << cap.get(cv::CAP_PROP_FPS) << std::endl;
    std::cout << "FPS : " << cap.get(cv::CAP_PROP_FRAME_COUNT) << std::endl;
    std::cout << "FPS : " << cap.get(cv::CAP_PROP_FRAME_WIDTH) << std::endl;
    std::cout << "FPS : " << cap.get(cv::CAP_PROP_FRAME_HEIGHT) << std::endl;
    while (true) {
        // std::cout << cap.get(cv::CAP_PROP_POS_FRAMES) << std::endl;
        try {
            cv::Mat frame;
            cap >> frame;
            cv::putText(frame, std::to_string(static_cast<int>(cap.get(cv::CAP_PROP_POS_FRAMES))),
                        cv::Point(width / 2, height / 2), cv::FONT_HERSHEY_SIMPLEX, 10,
                        cv::Scalar(0, 0, 255), 4, 8);
            cv::resize(frame, frame, cv::Size(), 0.5, 0.5, cv::INTER_LINEAR);

            if (showImage) {
                cv::imshow("Frame", frame);
            }

            // 按下“s”键保存图像
            char c = (char)cv::waitKey(25);
            if (c == 's') {
                std::stringstream ss;
                ss << "frame-" << count << ".png";
                imwrite(ss.str(), frame);
                std::cout << "Saved " << ss.str() << std::endl;
                count++;
            }
            if (c == 'q') {
                break;
            }
            sensor_msgs::ImagePtr image =
                cv_bridge::CvImage(std_msgs::Header(), "bgr8", frame).toImageMsg();
            pub.publish(image);
        } catch (const std::exception &e) {
            std::cerr << e.what() << '\n';
            break;
        }
    }

    // 释放视频流
    cap.release();

    // 关闭所有窗口
    cv::destroyAllWindows();
    // ros::Rate r(40);
    // while (ros::ok) {
    //     r.sleep();
    // }

    return 0;
}
