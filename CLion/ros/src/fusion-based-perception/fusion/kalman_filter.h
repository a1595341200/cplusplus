/*
 * @Author: yao.xie 1595341200@qq.com
 * @Date: 2023-07-15 12:43:21
 * @LastEditors: yao.xie 1595341200@qq.com
 * @LastEditTime: 2023-07-15 14:31:57
 * @FilePath: /ros_learning/src/fusion-based-perception/fusion/kalman_filter.h
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
// Copyright 2021 Sui Fang

#pragma once

#include <Eigen/Dense>

namespace kit {
namespace perception {
    namespace fusion {

        class KalmanFilter {
        public:
            /**
     * Constructor
     */
            KalmanFilter();

            /**
     * Destructor
     */
            virtual ~KalmanFilter();

            /**
     * Init Initializes Kalman filter
     * @param x_in Initial state
     * @param P_in Initial state covariance
     * @param F_in Transition matrix
     * @param H_in Measurement matrix
     * @param R_in Measurement covariance matrix
     * @param Q_in Process covariance matrix
     */
            void Init(Eigen::VectorXd &x_in, Eigen::MatrixXd &P_in, Eigen::MatrixXd &F_in,
                      Eigen::MatrixXd &H_in, Eigen::MatrixXd &R_in, Eigen::MatrixXd &Q_in);

            /**
     * Prediction Predicts the state and the state covariance
     * using the process model
     * @param delta_T Time between k and k+1 in s
     */
            void Predict();

            /**
     * Updates the state by using standard Kalman Filter equations
     * @param z The measurement at k+1
     */
            void Update(const Eigen::VectorXd &z);

            /**
     * Updates the state by using Extended Kalman Filter equations
     * @param z The measurement at k+1
     */
            void UpdateEKF(const Eigen::VectorXd &z);

            // state vector
            Eigen::VectorXd x_;

            // state covariance matrix
            Eigen::MatrixXd P_;

            // state transistion matrix
            Eigen::MatrixXd F_;

            // process covariance matrix
            Eigen::MatrixXd Q_;

            // measurement matrix
            Eigen::MatrixXd H_;

            // measurement covariance matrix
            Eigen::MatrixXd R_;
        };

    } // namespace fusion
} // namespace perception
} // namespace kit