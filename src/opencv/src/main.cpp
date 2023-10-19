/*
 * @Author: yao.xie 1595341200@qq.com
 * @Date: 2023-09-18 16:53:33
 * @LastEditors: yao.xie 1595341200@qq.com
 * @LastEditTime: 2023-10-18 15:21:23
 * @FilePath: /cplusplus/opencv/src/main.cpp
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
	//x,y 左上角坐标
	auto rect = cv::Rect(0,0,10,10);

	SLOG(INFO) << rect;
	SLOG(INFO) << rect.width;
	SLOG(INFO) << (rect.width >> 1);
}

int main(int argc, char *argv[]) {
  testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
