/*
 * @Author: yao.xie 1595341200@qq.com
 * @Date: 2023-10-28 16:18:45
 * @LastEditors: yao.xie 1595341200@qq.com
 * @LastEditTime: 2023-10-28 16:26:34
 * @FilePath: /cplusplus/src/EnumClass/src/main.cpp
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置:
 * https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
#include <Utils.h>

#include <iostream>
#include <string>
using namespace Utils;
enum class E : int {
  A = 0,
  B,
  C,
  any = A | B | C,
};

inline constexpr E operator|(E __x, E __y) {
  return static_cast<E>(static_cast<std::underlying_type_t<E>>(__x) |
                        static_cast<std::underlying_type_t<E>>(__y));
}

inline constexpr E operator&(E __x, E __y) {
  return static_cast<E>(static_cast<std::underlying_type_t<E>>(__x) &
                        static_cast<std::underlying_type_t<E>>(__y));
}

void test01() {
  int a = Utils::toUType(E::A);
  std::cout << Utils::toUType(E::A) << std::endl;
  Utils::lookType(a);
  auto f = [] {};
  Utils::lookType(f);
  std::cout << ((E::any & E::A) == E::A) << std::endl;
  using namespace std::string_literals;
  auto s = "s"s;
  using namespace std::string_view_literals;
  auto sv = "sd"sv;
  Utils::lookType(s);
  Utils::lookType(sv);
}

class A {
  void c() {
    "c"_p;
  }

  struct B {
    void f(A &a) {
      a.c();
      std::cout << a.a << std::endl;
    }
  };

 public:
  static B g() {
    return B{};
  }

 private:
  int a{0};
};

void test02() {
  auto b = A::g();
  A a;
  b.f(a);
  Utils::lookType(b);
}

int main(int argc, char const *argv[]) {
  test01();
  test02();
  return 0;
}
