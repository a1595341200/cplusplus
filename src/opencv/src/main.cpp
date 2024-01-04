/*
 * @Author: yao.xie 1595341200@qq.com
 * @Date: 2023-09-18 16:53:33
 * @LastEditors: yao.xie 1595341200@qq.com
 * @LastEditTime: 2024-01-04 13:35:58
 * @FilePath: /cplusplus/src/opencv/src/main.cpp
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置
 * 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
#include <Log.h>

#include <iostream>

#include <gtest/gtest.h>
#include <opencv2/opencv.hpp>

// TEST(opencv, imread) {
//   auto image = cv::imread("/media/psf/Home/Downloads/Snipaste_2023-07-28_17-40-12.png");
//   SLOG(INFO) << image.cols;
//   SLOG(INFO) << image.rows;
//   cv::putText(image, "1", cv::Point(image.cols / 2, image.rows / 2), cv::FONT_HERSHEY_SIMPLEX, 2,
//               cv::Scalar(0, 0, 255), 2, 8);
//   //   cv::resize(image, image, cv::Size(), 0.5, 0.5, cv::INTER_LINEAR);
//   cv::imshow("image", image);
//   cv::waitKey(0);
// }

TEST(opencv, mat) {
  cv::Mat zero = cv::Mat::zeros(10, 10, CV_32F);
  cv::Mat ones = cv::Mat::ones(10, 10, CV_32F);

  SLOG(INFO) << zero.rows << " " << zero.cols;
  SLOG(INFO) << zero;
}

TEST(opencv, matsub) {
  cv::Mat mat1(2, 2, CV_32F);
  mat1.at<float>(0, 0) = 1;
  SLOG(INFO) << mat1;

  cv::Mat mat2 = cv::Mat::ones(2, 2, CV_32F);

  SLOG(INFO) << mat1 - mat2;
}

TEST(opencv, cvRound) {
  int a = cvRound(3.6);

  SLOG(INFO) << a;
}

TEST(opencv, rect) {
  // x,y 左上角坐标
  auto rect = cv::Rect(0, 0, 10, 10);

  SLOG(INFO) << rect;
  SLOG(INFO) << rect.width;
  SLOG(INFO) << (rect.width >> 1);
}

TEST(opencv, video) {
  // 创建一个VideoCapture对象

  cv::VideoCapture cap(0);  // 0代表默认摄像头

  if (!cap.isOpened()) {
     SLOG(INFO) << "无法打开摄像头" << std::endl;
     return;
  }
  EXPECT_TRUE(cap.isOpened());
  cv::Mat frame;

  while (true) {
    // 从摄像头中捕获一帧

    cap >> frame;

    if (frame.empty()) {
       SLOG(INFO) << "无法从摄像头获取帧" << std::endl;
      break;
    }
    EXPECT_FALSE(frame.empty());
    // 显示帧（可选）
    cv::imshow("Camera Feed", frame);
    // 如果按下q键，退出循环
    if (cv::waitKey(50) == 'q') {
      break;
    }
  }

  // 释放VideoCapture对象

  cap.release();
}

int main(int argc, char *argv[]) {
  testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
