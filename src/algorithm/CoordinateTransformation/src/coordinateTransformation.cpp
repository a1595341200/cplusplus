//
// Created by 谢瑶 on 2023/12/6.
//
#include <iostream>
#include <numeric>

#include <Eigen/Dense>
#include <gtest/gtest.h>

struct EgoMotion {
  EgoMotion(double _yawRate, double _speed, double _acc, double _timestamp)
      : yawRate(_yawRate), speed(_speed), acc(_acc), timestamp(_timestamp) {}
  double yawRate{};
  double speed{};
  double acc{};
  double timestamp{};
};

struct DeltaPathResult {
  double dx;
  double dy;
  double phi;
  double sin;
  double cos;
};

std::vector<EgoMotion> getEgoMotion(double num, double dt) {}

bool coordinateTransformation(double& dist, double& dx, double& dy, double& dt, double& phi,
                              double sinSum, double cosSum, const EgoMotion& egoMotion) {
  double radius{};
  double sinTmp{};
  double cosTmp{};
  double dphi{};
  std::cout << "dt " << dt << std::endl;
  if (egoMotion.yawRate < 0.001f) {
    /* f32Dist = Dt * v + 0.5 * Dt^2 * a */
    dist = dt * egoMotion.speed + 0.5 * std::pow(dt, 2) * egoMotion.acc;
    dx += (dist * cosSum);
    dy += (dist * sinSum);
  } else {
    /* else circular path */
    /* TODO: consider acceleration, once f32YawAcc is available/nonzero */
    dphi = egoMotion.yawRate * dt;
    radius = egoMotion.speed / egoMotion.yawRate;
    std::cout << "radius " << radius << std::endl;

    sinTmp = sinSum;
    cosTmp = cosSum;
    sinSum = std::sin(phi + dphi);
    cosSum = std::cos(phi + dphi);

    dx += (radius * (sinSum - sinTmp));
    dy += (radius * (cosTmp - cosSum));
    phi = phi + dphi;
    std::cout << phi << std::endl;
  }
  std::cout << dx << " " << dy << std::endl;
}

bool egoMotionGetDeltaPath(DeltaPathResult& result, double start, double end,
                            const std::vector<EgoMotion>& egos) {
  bool success{false};
  double dt{};
  double dist{};
  double dx{};
  double dy{};
  double phi{};
  double sinSum{};
  double cosSum = 1.0f;

  /* calculate number of steps according to indices */
  if (egos.empty()) {
    success = false;
  } else {
    dt = egos[0].timestamp - start;
    coordinateTransformation(dist, dx, dy, dt, phi, sinSum, cosSum,
                             EgoMotion(0, egos[0].speed - dt * egos[0].acc, 0, 0));
    start = egos[0].timestamp;
    for (auto it = egos.begin(); it != egos.end() - 1; ++it) {
      // 取当前ego
      auto temp = (it + 1)->timestamp;
      if (temp > end) {
        temp = end;
      }
      dt = temp - start;
      coordinateTransformation(dist, dx, dy, dt, phi, sinSum, cosSum, *it);
      start = temp;
    }
    dt = end - egos.back().timestamp;
    if (dt > 0) {
      coordinateTransformation(dist, dx, dy, dt, phi, sinSum, cosSum, egos.back());
    }
    success = true;
  }
  result = {dx, dy, phi, sinSum, cosSum};
  return success;
}

TEST(EgoMotion_getDeltaPath, 1) {
  std::vector<EgoMotion> egos;
  egos.emplace_back(0.0f, 5.0f, 0.0f, 0.025);
//  egos.emplace_back(0.1f, 5.0f, 0.0f, 0.05);
  DeltaPathResult result{};
  egoMotionGetDeltaPath(result, 0, 0.07, egos);
}

int main(int args, char* argv[]) {
  testing::InitGoogleTest(&args, argv);
  return RUN_ALL_TESTS();
}