/*
 * @Author: yao.xie 1595341200@qq.com
 * @Date: 2023-09-18 16:53:33
 * @LastEditors: yao.xie 1595341200@qq.com
 * @LastEditTime: 2023-09-18 17:29:13
 * @FilePath: /cplusplus/opencv/src/main.cpp
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置
 * 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
#include <Log.h>
#include <iostream>
#include <opencv2/opencv.hpp>
int main(int argc, char const *argv[]) {
  auto image =
      cv::imread("/media/psf/Home/Downloads/Snipaste_2023-07-28_17-40-12.png");
  SLOG(INFO) << image.cols;
  SLOG(INFO) << image.rows;
  cv::putText(image, "1", cv::Point(image.cols / 2, image.rows / 2),
              cv::FONT_HERSHEY_SIMPLEX, 2, cv::Scalar(0, 0, 255), 2, 8);
  //   cv::resize(image, image, cv::Size(), 0.5, 0.5, cv::INTER_LINEAR);
  cv::imshow("image", image);
  cv::waitKey(0);
  return 0;
}
