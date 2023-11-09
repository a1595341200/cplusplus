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
  KalmanFilter(double initial_state, double process_variance, double measurement_variance)
      : x(initial_state), P(1.0), Q(process_variance), R(measurement_variance) {}

  void predict() {
    // 预测步骤
    x_hat = A * x;
    P_hat = A * P * A + Q;
  }

  void update(double measurement) {
    // 更新步骤
    K = P_hat / (P_hat + R);
    x = x_hat + K * (measurement - x_hat);
    P = (1 - K) * P_hat;
  }

  double getState() const {
    return x;
  }

 private:
  double x;      // 状态估计值
  double P;      // 状态估计误差的协方差
  double Q;      // 过程噪声的方差
  double R;      // 测量噪声的方差
  double x_hat;  // 预测的状态估计值
  double P_hat;  // 预测的状态估计误差的协方差
  double K;      // 卡尔曼增益

  // 状态转移矩阵
  const double A = 1.0;
};

int main() {
  // 初始化卡尔曼滤波器
  KalmanFilter kf(0.0, 0.01, 0.1);

  // 模拟测量和更新
  for (int i = 0; i < 100; ++i) {
    // 模拟系统产生的测量值（真实值是 1.0）
    double true_measurement = 1.0;

    // 预测
    kf.predict();

    // 更新（使用模拟的测量值）
    kf.update(true_measurement);

    // 获取当前的状态估计值
    double current_state = kf.getState();

    std::cout << "Step " << i + 1 << ": Estimated State = " << current_state << std::endl;
  }

  return 0;
}
