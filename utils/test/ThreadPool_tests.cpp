#include <Log.h>

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
  std::this_thread::sleep_for(1s);
}
