/*
 * @Author: yao.xie 1595341200@qq.com
 * @Date: 2023-09-12 18:04:57
 * @LastEditors: yao.xie 1595341200@qq.com
 * @LastEditTime: 2023-09-13 10:26:57
 * @FilePath: /utils/src/Utils_tests.cpp
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置
 * 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
#include "Timer.h"
#include "Utils.h"
#include <gtest/gtest.h>
#include <iostream>
#include <thread>

using namespace Utils;

class Test : public ::testing::Test {
protected:
  Test() { std::cout << "starting\n"; }
  void SetUp() override { bindProcessToCore(0); }
  void TearDown() override {}
};

TEST_F(Test, test) {
  Timer t;
  t.start();
  using namespace std::chrono_literals;
  // std::this_thread::sleep_for(1s);
  t.stop();
  std::cout << t.getElapsedTime() << "\n";
}

TEST(Timer, test) {
  Timer t;
  t.start();
  using namespace std::chrono_literals;
  // std::this_thread::sleep_for(1s);
  t.stop();
  std::cout << t.getElapsedTime() << "\n";
}

int main(int argc, char *argv[]) {
  testing::InitGoogleTest(&argc, argv); //将命令行参数传递给gtest
  return RUN_ALL_TESTS(); // RUN_ALL_TESTS()运行所有测试案例
}
