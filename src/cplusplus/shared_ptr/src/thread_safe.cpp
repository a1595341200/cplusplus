/*
 * @Author: error: error: git config user.name & please set dead value or install git && error: git
 * config user.email & please set dead value or install git & please set dead value or install git
 * @Date: 2023-11-09 13:50:02
 * @LastEditors: error: error: git config user.name & please set dead value or install git && error:
 * git config user.email & please set dead value or install git & please set dead value or install
 * git git config user.email & please set dead value or install git & please set dead value or
 * install git git config user.email & please set dead value or install git & please set dead value
 * or install git git config user.email & please set dead value or install git & please set dead
 * value or install git
 * @LastEditTime: 2023-11-09 13:53:59
 * @FilePath: /cplusplus/src/cplusplus/shared_ptr/src/thread_safe.cpp
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置:
 * https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
#include <iostream>
#include <memory>
#include <thread>

auto obj = std::make_shared<int>(2011);
//传递拷贝最安全不怕被修改
int main(int argc, char const *argv[]) {
  // it's ok. fine
  std::cout << obj.get() << std::endl;
  for (auto i = 0; i < 10; i++) {
    std::thread([obj] {
      std::shared_ptr<int> local(obj);      // copy is fine
      local = std::make_shared<int>(2014);  // assignment is fine
    }).detach();
  }
  std::this_thread::sleep_for(std::chrono::seconds(1));
  std::cout << obj.get() << std::endl;

  // 传递引用有风险
  // bad case
  for (auto i = 0; i < 10; i++) {
    std::thread([&obj] {
      obj = std::make_shared<int>(2014);  // data race
    }).detach();
  }
  std::this_thread::sleep_for(std::chrono::seconds(1));
  std::cout << obj.get() << std::endl;

  return 0;
}
