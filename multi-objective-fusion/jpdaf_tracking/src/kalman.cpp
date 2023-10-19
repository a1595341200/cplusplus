#include "kalman.h"

using namespace JPDAFTracker;
// clang-format off
Kalman::Kalman(const float& dt, const cv::Point2f& target_delta, const float& x, const float& y, const float& vx, const float& vy, const Eigen::Matrix2f& _R)
{
  //动力学模型转移矩阵
  A << 1, dt, 0, 0,
       0, 1, 0, 0,
       0, 0, 1, dt,
       0, 0, 0, 1;
  
  //过程噪声协方差
  Q = _R,

  //动力学模型误差协方差加速度误差
  G = Eigen::MatrixXf(4, 2);
  
  G << std::pow(dt, 2) / 2, 0,
	dt, 0,
	0, std::pow(dt, 2) / 2,
	0, dt;
	  
  //观测矩阵
  C = Eigen::MatrixXf(2, 4);
  C << 1, 0, 0, 0,
       0, 0, 1, 0;
  
  //初始化协方差矩阵
  P << std::pow(target_delta.x, 2), 0, 0, 0,
       0, .1, 0, 0,
       0, 0, std::pow(target_delta.y, 2), 0,
       0, 0, 0, .1;
  //初始化增益   
  K = Eigen::MatrixXf(4, 2);
  
  //测量噪声协方差矩阵
  R = _R;
       
  last_prediction = cv::Point2f(x, y);
  last_speed = cv::Point2f(vx, vy);
  first = true;
}


cv::Point2f Kalman::predict()
{
  
  if(first)
  {
    x_predict << last_prediction.x, last_speed.x, last_prediction.y, last_speed.y;
    first = false;
  }
  else
  {
    x_predict = A*x_filter;
  }
  
  //先验协方差矩阵
  P_predict = A * P * A.transpose() + G * Q * G.transpose();
  
  
  //预测
  z_predict = C * x_predict;
  
  //误差协方差矩阵
  S = C * P_predict * C.transpose() + R;
  
  //计算熵
  entropy = k + .5 * log10(P.determinant()); 
  
  last_prediction_eigen = z_predict;
  last_prediction = cv::Point2f(z_predict(0), z_predict(1)); 
  return last_prediction;
}

void Kalman::gainUpdate(const float& beta)
{
  K = P_predict * C.transpose() * S.inverse();
  P = P_predict - (1 - beta) * K * S * K.transpose();
}

Eigen::Vector4f Kalman::update(const std::vector< Eigen::Vector2f >& selected_detections, const Eigen::VectorXf& beta, const float& last_beta)
{
  Eigen::Vector4f a;
  a.setZero();

  x_filter.setZero();
  uint i = 0;
  
  for(const auto& det : selected_detections)
  {
    a = x_predict + K * (det - z_predict);
    x_filter = x_filter + beta(i) * a;
    ++i;
  }
  
  x_filter = last_beta * x_predict + x_filter;
  
  a.setZero();
  Eigen::Matrix4f Pk = Eigen::Matrix4f::Zero();
  Eigen::Vector2f det;
  
  for(i = 0; i < selected_detections.size() + 1; ++i)
  {
    if(i == selected_detections.size())
    {
      a = x_predict;
    }
    else
    {
      a = x_predict + K * (selected_detections.at(i) - z_predict);
    }
    
    Pk = Pk + beta(i) * (a * a.transpose() - x_filter * x_filter.transpose());
    
  }
  
  P += Pk;

  return x_filter;
}
// clang-format on
