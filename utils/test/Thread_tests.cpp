/*
 * @Author: yao.xie 1595341200@qq.com
 * @Date: 2023-10-27 17:52:20
 * @LastEditors: yao.xie 1595341200@qq.com
 * @LastEditTime: 2023-10-27 17:55:28
 * @FilePath: /cplusplus/utils/test/Thread_tests.cpp
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置:
 * https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
#include <Log.h>
#include <Thread.h>

#include <iostream>

#include <gtest/gtest.h>
class ThreadTest : public Thread {
 public:
  using Thread::Thread;

  bool threadLoop() override {
    SLOG(INFO) << "threadLoop" << std::endl;
    return true;
  }

 private:
};

using namespace std;
TEST(ThreadTest, test) {
  ThreadTest t(1000ms);
  SLOG(INFO) << std::boolalpha << t.run() << std::endl;
  std::this_thread::sleep_for(1s);
  t.requestExitAndWait();
}
