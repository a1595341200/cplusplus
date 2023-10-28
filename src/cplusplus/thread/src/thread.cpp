/*
 * @Author: yao.xie 1595341200@qq.com
 * @Date: 2023-10-23 11:19:06
 * @LastEditors: yao.xie 1595341200@qq.com
 * @LastEditTime: 2023-10-23 11:42:33
 * @FilePath: /cplusplus/src/thread/src/thread.cpp
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置:
 * https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
#include <Log.h>

#include <functional>
#include <future>
#include <iostream>
#include <thread>

#include <gtest/gtest.h>
int fib(int n) {
  if (n < 3)
    return 1;
  else
    return fib(n - 1) + fib(n - 2);
}

TEST(thread, packaged_task) {
  std::packaged_task<int(int)> fib_task(&fib);

  SLOG(INFO) << "starting task\n";
  auto result = fib_task.get_future();
  std::thread t(std::move(fib_task), 42);

  SLOG(INFO) << "waiting for task to finish..." << std::endl;
  SLOG(INFO) << result.get() << '\n';

  SLOG(INFO) << "task complete\n";
  t.join();
}

void worker(std::future<void>& output) {
  std::packaged_task<void(bool&)> my_task{[](bool& done) { done = true; }};

  auto result = my_task.get_future();

  bool done = false;

  my_task.make_ready_at_thread_exit(done);  // 立即执行任务

  SLOG(INFO) << "worker: done = " << std::boolalpha << done << std::endl;
  //仅当当前线程退出才ready
  auto status = result.wait_for(std::chrono::seconds(0));
  if (status == std::future_status::timeout)
    SLOG(INFO) << "worker: result is not ready yet" << std::endl;

  output = std::move(result);
}

//仅当当前线程退出才ready
TEST(thread, make_ready_at_thread_exit) {
  std::future<void> result;

  std::thread{worker, std::ref(result)}.join();

  auto status = result.wait_for(std::chrono::seconds(0));
  if (status == std::future_status::ready)
    SLOG(INFO) << "main: result is ready" << std::endl;
}

int main(int argc, char* argv[]) {
  testing::InitGoogleTest(&argc, argv);  //将命令行参数传递给gtest
  return RUN_ALL_TESTS();                // RUN_ALL_TESTS()运行所有测试案例
}
