//
// Created by 谢瑶 on 2023/12/4.
//
#include <iostream>

#include <Eigen/Dense>

using namespace Eigen;
using namespace std;
// 计算马氏距离
double mahalanobisDistance(const VectorXd& x, const VectorXd& y, const MatrixXd& covariance) {
  auto delta = x - y;
  auto covarianceInverse = covariance.inverse();
  double distance = std::sqrt(delta.transpose() * covarianceInverse * delta);
  return distance;
}

int main() {
  // 示例数据
  VectorXd x(3);
  x << 1, 2, 3;

  VectorXd y(3);
  y << 4, 5, 6;

  // 示例协方差矩阵
  MatrixXd covariance(3, 3);
  covariance << 7, 2, 1, 2, 8, 3, 1, 3, 9;

  // 计算马氏距离
  double distance = mahalanobisDistance(x, y, covariance);
  std::cout << "Mahalanobis Distance: " << distance << std::endl;

  return 0;
}
