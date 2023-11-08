/*
 * @Author: yao.xie 1595341200@qq.com
 * @Date: 2023-10-28 17:02:14
 * @LastEditors: error: error: git config user.name & please set dead value or install git && error:
 * git config user.email & please set dead value or install git & please set dead value or install
 * git
 * @LastEditTime: 2023-11-08 11:43:35
 * @FilePath: /cplusplus/src/invocable/src/main.cpp
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置:
 * https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
#include <functional>
#include <iostream>
#include <type_traits>
using namespace std;

class A {
 public:
};

template <typename Func, typename... Args>
void Atest(Func &&f, Args... args [[maybe_unused]]) {
  std::cout << std::boolalpha << is_invocable_v<decay_t<Func>, A, decay_t<Args>...> << std::endl;
}

template <typename Func, typename... Args>
void test(Func &&f, Args... args) {
  Atest(std::forward<Func>(f), std::forward<Args>(args)...);
}

void myTest() {}
void myTesta(int a) {}

int main(int argc, char const *argv[]) {
  auto p = [](A a, int c) {

  };
  auto p1 = [](int c) {};
  test(p, 4);
  test(p1, 4);
  auto a = std::invoke([]() { return 1; });
  std::cout << std::is_invocable_v<decltype(myTest)> << std::endl;
  std::cout << std::is_invocable_v<decltype(myTesta), std::string> << std::endl;
  return 0;
}
