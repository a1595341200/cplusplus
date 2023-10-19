/*
 * @Author: yao.xie 1595341200@qq.com
 * @Date: 2023-09-13 12:00:43
 * @LastEditors: yao.xie 1595341200@qq.com
 * @LastEditTime: 2023-10-19 15:37:19
 * @FilePath: /cplusplus/eigenlearning/src/main.cpp
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置
 * 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
#include <Log.h>

#include <iostream>

#include <eigen3/Eigen/Dense>
#include <gtest/gtest.h>
#define TAG "eigen"

TEST(eigen, identity) {
  Eigen::MatrixXd m;
  m.resize(3, 3);
  m = Eigen::MatrixXd::Identity(3, 3);
  SLOG(INFO) << "\n" << m;
}

TEST(eigen, setOnes) {
  Eigen::MatrixXf A_Matrix = Eigen::MatrixXf::Zero(2, 2);
  SLOG(INFO) << "befor \n" << A_Matrix;
  A_Matrix.col(0).setOnes();
  SLOG(INFO) << "after \n" << A_Matrix;
}

TEST(eigen, determinant) {
  Eigen::MatrixXf mat(2, 2);
  // clang-format off
  mat << 1, 2, 
         3, 4;
  // clang-format on
  SLOG(INFO) << "determinant \n" << mat;
  SLOG(INFO) << "determinant : " << mat.determinant();
}

int main(int argc, char *argv[]) {
  testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
