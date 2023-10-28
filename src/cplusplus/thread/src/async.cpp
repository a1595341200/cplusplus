/*
 * @Author: yao.xie 1595341200@qq.com
 * @Date: 2023-10-28 15:27:19
 * @LastEditors: yao.xie 1595341200@qq.com
 * @LastEditTime: 2023-10-28 15:37:34
 * @FilePath: /cplusplus/src/thread/src/async.cpp
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置:
 * https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
#include <Log.h>

#include <future>
#include <thread>

#include <gtest/gtest.h>
using namespace std;
// 可选的开启或者不开启新线程去执行可调用函数
// 返回一个future 以供获取线程返回结果
TEST(async, 1) {
  auto func = std::async([] { SLOG(INFO) << "2" << std::endl; });
  std::this_thread::sleep_for(std::chrono::seconds(1));
  SLOG(INFO) << "start" << std::endl;
  func.get();
}

// std::launch::async 开线程异步执行 先输出1，再输出start
TEST(async, 2) {
  auto future = std::async(std::launch::async, []() {
    SLOG(INFO) << "1";
    std::this_thread::sleep_for(2s);
  });
  std::this_thread::sleep_for(1s);
  SLOG(INFO) << "start" << std::endl;
  future.get();
}

// std::launch::deferred 在调用get的线程执行
// 先输出start，再输出1
TEST(async, 3) {
  auto future = std::async(std::launch::deferred, []() {
    SLOG(INFO) << "1";
    std::this_thread::sleep_for(2s);
  });
  std::this_thread::sleep_for(1s);
  SLOG(INFO) << "start" << std::endl;
  future.get();
}

int main(int argc, char *argv[]) {
  testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
