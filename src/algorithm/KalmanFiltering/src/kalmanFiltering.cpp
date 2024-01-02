/*
 * @Author: error: error: git config user.name & please set dead value or install git && error: git
 * config user.email & please set dead value or install git & please set dead value or install git
 * @Date: 2023-11-09 16:19:41
 * @LastEditors: error: error: git config user.name & please set dead value or install git && error:
 * git config user.email & please set dead value or install git & please set dead value or install
 * git
 * @LastEditTime: 2023-11-09 16:19:41
 * @FilePath: /cplusplus/multi-objective-fusion/KalmanFilter/KalmanFilter.cpp
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置:
 * https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
#include <iostream>

#include <Eigen/Dense>

class KalmanFilter {
 public:
  void init() {
    // 动力学模型转移矩阵
    //    A << 1, 0, dt, 0,
    //        0, 1, 0, dt,
    //        0, 0, 1, 0,
    //        0, 0, 0, 1;
    // 动力学模型转移矩阵
    A << 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1;
    x << 0, 0, 0, 0;
    Q << 0.1, 0, 0, 0, 0, 0.1, 0, 0, 0, 0, 0.1, 0, 0, 0, 0, 0.1;
    R << 0.2, 0, 0, 0, 0, 0.2, 0, 0, 0, 0, 0.2, 0, 0, 0, 0, 0.2;
    P << 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1;
    H << 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1;
  }

  void predict(double dt) {
    // 预测步骤
    A(0, 2) = dt;
    A(1, 3) = dt;
    x_hat = A * x;
    P_hat = A * P * A.transpose() + Q;
  }

  void update(Eigen::Vector4d measurement) {
    // 更新步骤
    // 测量残差协方差
    auto S = (H * P_hat * H.transpose() + R).inverse();
    std::cout << "S = " << S << std::endl;
    K = P_hat * H.transpose() * S;
    std::cout << "K = " << K << std::endl;
    // 测量残差
    auto z = measurement - H * x_hat;
    x = x_hat + K * z;
    P = (Eigen::Matrix4d::Identity() - K * H) * P_hat;
    std::cout << "P " << P << std::endl;
  }

  Eigen::Vector4d getState() const {
    return x;
  }

 public:
  Eigen::Vector4d x;      // 状态估计值
  Eigen::Matrix4d P;      // 状态估计误差的协方差
  Eigen::Matrix4d Q;      // 过程噪声的方差
  Eigen::Matrix4d R;      // 测量噪声的方差
  Eigen::Vector4d x_hat;  // 预测的状态估计值
  Eigen::Matrix4d P_hat;  // 预测的状态估计误差的协方差
  Eigen::Matrix4d K;      // 卡尔曼增益
  Eigen::Matrix4d H;      // 观测矩阵

  // 状态转移矩阵
  Eigen::Matrix4d A;
};

int main() {
  // 初始化卡尔曼滤波器
  KalmanFilter kf;
  kf.init();

  // 模拟测量和更新
  for (int i = 0; i < 200; ++i) {
    // 模拟系统产生的测量值（真实值是 1.0）
    //    int i = 1;
    Eigen::Vector4d true_measurement{1.0, 1.0, 0, 0};

    // 预测
    kf.predict(0.025);

    // 更新（使用模拟的测量值）
    kf.update(true_measurement);

    // 获取当前的状态估计值
    auto current_state = kf.getState();

    std::cout << "Step " << i + 1 << ": Estimated State = " << current_state << std::endl;
  }
  return 0;
}
