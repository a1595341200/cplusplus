/*
 * @Author: yao.xie 1595341200@qq.com
 * @Date: 2023-10-28 17:27:46
 * @LastEditors: yao.xie 1595341200@qq.com
 * @LastEditTime: 2023-10-28 17:27:47
 * @FilePath: /cplusplus/src/thread/src/promise.cpp
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置:
 * https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
#include <future>
#include <iostream>
#include <thread>

void compute(std::promise<int> prom) {
  try {
    // 模拟计算
    int result = 42;
    prom.set_value(result);  // 设置值
  } catch (...) {
    prom.set_exception(std::current_exception());  // 设置异常
  }
}

int main() {
  std::promise<int> prom;
  std::future<int> fut = prom.get_future();  // 获取与promise相关联的future
  std::thread t(compute, std::move(prom));   // 创建一个线程，将promise传递给线程函数

  // 在主线程中获取结果
  try {
    int result = fut.get();                          // 阻塞等待结果
    std::cout << "Result: " << result << std::endl;  // 输出结果
  } catch (const std::exception& e) {
    std::cout << "Exception: " << e.what() << std::endl;  // 输出异常信息
  }

  t.join();  // 等待线程结束
  return 0;
}
