/*
 * @Author: yao.xie 1595341200@qq.com
 * @Date: 2023-10-28 15:45:59
 * @LastEditors: yao.xie 1595341200@qq.com
 * @LastEditTime: 2023-10-28 15:46:00
 * @FilePath: /cplusplus/src/conditional/src/main.cpp
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置:
 * https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
#include <Utils.h>

#include <iostream>
namespace nostd {
template <bool b, typename T, typename F>
struct conditonal {
  using type = T;
};
// 特化
template <typename T, typename F>
struct conditonal<false, T, F> {
  using type = F;
};
template <bool b, typename T, typename F>
using conditonal_t = typename conditonal<b, T, F>::type;
}  // namespace nostd
using namespace std;

int main(int argc, char const *argv[]) {
  nostd::conditonal_t<true, int, double> a{0};
  nostd::conditonal_t<false, int, double> b{0.0};

  Utils::lookType(a);
  Utils::lookType(b);
  return 0;
}
