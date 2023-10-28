/*
 * @Author: yao.xie 1595341200@qq.com
 * @Date: 2023-10-28 17:06:08
 * @LastEditors: yao.xie 1595341200@qq.com
 * @LastEditTime: 2023-10-28 17:07:14
 * @FilePath: /cplusplus/src/mem_fn/src/main.cpp
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置:
 * https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
#include <Utils.h>

#include <bitset>
#include <functional>
#include <iostream>
#include <type_traits>

struct Foo {
  void display_greeting() {
    std::cout << "Hello, world.\n";
  }

  void display_number(int i) {
    std::cout << "number: " << i << '\n';
  }

  int data = 7;
};

void test() {
  Foo f;
  auto greet = std::mem_fn(&Foo::display_greeting);
  greet(&f);

  auto print_num = std::mem_fn(&Foo::display_number);
  print_num(&f, 42);
  Utils::lookType(greet);
  Utils::lookType(print_num);

  auto access_data = std::mem_fn(&Foo::data);
  std::cout << "data: " << access_data(&f) << '\n';
}

class Q {
 public:
  void printf() {
    std::cout << "printf" << std::endl;
  }

  int a;
};

template <typename U, typename T>
void print(T &q, U q1) {
  if constexpr (std::is_member_function_pointer_v<U>) {
    (q.*q1)();
  } else if constexpr (std::is_member_object_pointer_v<U>) {
    std::cout << q.*q1 << std::endl;
  }
}

template <typename T, typename U>
void test01(T U::*t) {
  T *t1 = nullptr;
  using namespace std;
  if constexpr (std::is_function_v<T>) {
    cout << "T"
         << "is"
         << "function" << endl;
  } else {
    cout << "T"
         << "is"
         << "not function" << endl;
  }
  Utils::lookType(t1);
}

void test02() {
  Q q{1};
  print(q, &Q::printf);
  print(q, &Q::a);
  test01(&Q::printf);
  test01(&Q::a);
}

int main() {
  //    __builtin_prefecth
  //    test();
  std::cout << std::showbase << std::bitset<16>(10) << std::endl;
}
