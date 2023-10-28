/*
 * @Author: yao.xie 1595341200@qq.com
 * @Date: 2023-10-28 17:17:26
 * @LastEditors: yao.xie 1595341200@qq.com
 * @LastEditTime: 2023-10-28 17:17:26
 * @FilePath: /cplusplus/src/overload/src/main.cpp
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置:
 * https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
#include <Utils.h>

#include <iomanip>
#include <iostream>
#include <variant>

template <class... Ts>
struct overloaded : Ts... {
  using Ts::operator()...;
};
// 显式推导指引（ C++20 起不需要）
template <class... Ts>
overloaded(Ts...) -> overloaded<Ts...>;

int main() {
  auto p = overloaded{
      [](auto arg) { std::cout << arg << ' '; },
      [](double arg) { std::cout << std::fixed << arg << ' '; },
      [](const std::string &arg) { std::cout << std::quoted(arg) << ' '; },
  };
  Utils::lookType(p);
  p("asdas");
}
