/*
 * @Author: yao.xie 1595341200@qq.com
 * @Date: 2023-10-23 13:23:03
 * @LastEditors: yao.xie 1595341200@qq.com
 * @LastEditTime: 2023-10-23 13:28:11
 * @FilePath: /cplusplus/src/thread/src/notify_all.cpp
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置:
 * https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
// condition_variable example
#include <Log.h>

#include <condition_variable>  // std::condition_variable
#include <iostream>            // std::cout
#include <mutex>               // std::mutex, std::unique_lock
#include <thread>              // std::thread

#include <gtest/gtest.h>
std::mutex mtx;
std::condition_variable cv;
bool ready = false;

void print_id(int id) {
  std::unique_lock<std::mutex> lck(mtx);
  cv.wait(lck, []() { return ready; });
  // ...
  SLOG(INFO) << "thread " << id << '\n';
}

void go() {
  std::unique_lock<std::mutex> lck(mtx);
  ready = true;
  cv.notify_all();  // 这是重点
}

TEST(thread, notify_all) {
  std::thread threads[10];
  // spawn 10 threads:
  for (int i = 0; i < 10; ++i) {
    threads[i] = std::thread(print_id, i);
  }

  SLOG(INFO) << "10 threads ready to race...\n";
  go();  // go!

  for (auto& th : threads) {
    th.join();
  }
}

int main(int argc, char* argv[]) {
  testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
