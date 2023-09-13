/*
 * @Author: yao.xie 1595341200@qq.com
 * @Date: 2023-09-13 12:00:43
 * @LastEditors: yao.xie 1595341200@qq.com
 * @LastEditTime: 2023-09-13 12:59:01
 * @FilePath: /cplusplus/eigenlearning/src/main.cpp
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置
 * 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
#include <Log.h>
#include <eigen3/Eigen/Eigen>
#include <iostream>

int main(int argc, char const *argv[]) {
  Eigen::MatrixXd m;
  m.resize(3, 3);
  m = Eigen::MatrixXd::Identity(3, 3);
  SLOG(INFO) << m;
  return 0;
}
