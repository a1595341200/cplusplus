/*
 * @Author: yao.xie 1595341200@qq.com
 * @Date: 2023-10-27 17:50:01
 * @LastEditors: error: error: git config user.name & please set dead value or install git && error: git config user.email & please set dead value or install git & please set dead value or install git
 * @LastEditTime: 2023-11-11 17:54:49
 * @FilePath: /cplusplus/utils/test/ThreadPool_tests.cpp
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置:
 * https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
#include <Log.h>
#include <Timer.h>

#include <iostream>

#include <gtest/gtest.h>

#include "ThreadPool.h"
using namespace std::chrono_literals;

TEST(ThreadPoolTest, test) {
  ThreadPool threadpool(4);
  threadpool.init();
  SLOG(INFO) << "start\n";
  for (int i = 0; i < 100; i++) {
    threadpool.addTask([i] { SLOG(INFO) << i << "\n"; });
  }
  std::this_thread::sleep_for(100ms);
}

TEST(ThreadPool, test1) {
  Utils::Timer t;
  ThreadPool p(4);
  std::thread t1([&p]() {
    for (int i = 0; i < 10; i++) {
      p.addTask([i]() { SLOG(INFO) << "/* message */ " << i << std::endl; });
    }
  });
  std::thread t2([&p]() {
    for (int i = 0; i < 100; i++) {
      p.addTask([i]() { SLOG(INFO) << "/* message */ " << i << std::endl; });
    }
  });
  t1.join();
  t2.join();
  using namespace std::chrono_literals;
  std::this_thread::sleep_for(1s);
  Task task([]() { SLOG(INFO) << "/* task */ "; });
  task();
}
