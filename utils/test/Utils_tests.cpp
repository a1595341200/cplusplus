/*
 * @Author: yao.xie 1595341200@qq.com
 * @Date: 2023-09-12 18:04:57
 * @LastEditors: yao.xie 1595341200@qq.com
 * @LastEditTime: 2023-09-13 11:47:49
 * @FilePath: /utils/src/Utils_tests.cpp
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置
 * 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
#include "Log.h"
#include "Timer.h"
#include "Utils.h"
#include <gtest/gtest.h>
#include <thread>

using namespace Utils;

class Test : public ::testing::Test {
protected:
  Test() { std::cout << "starting\n"; }
  void SetUp() override {
    char c[] = "test";
    char *a[] = {c};
    Log::init(1, a);
    bindProcessToCore(0);
  }
  void TearDown() override { google::ShutdownGoogleLogging(); }
};

TEST_F(Test, test) {
  Timer t;
  t.start();
  using namespace std::chrono_literals;
  // std::this_thread::sleep_for(1s);
  t.stop();
  SLOG(INFO) << t.getElapsedTime();
}

int main(int argc, char *argv[]) {
  testing::InitGoogleTest(&argc, argv); //将命令行参数传递给gtest
  return RUN_ALL_TESTS(); // RUN_ALL_TESTS()运行所有测试案例
}
