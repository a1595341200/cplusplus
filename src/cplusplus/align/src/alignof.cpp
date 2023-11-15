/*
 * @Author: error: error: git config user.name & please set dead value or install git && error: git
 * config user.email & please set dead value or install git & please set dead value or install git
 * @Date: 2023-11-15 16:34:25
 * @LastEditors: error: error: git config user.name & please set dead value or install git && error:
 * git config user.email & please set dead value or install git & please set dead value or install
 * git
 * @LastEditTime: 2023-11-15 16:34:33
 * @FilePath: /cplusplus/src/cplusplus/align/src/alignof.cpp
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置:
 * https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
#include <iostream>

struct Foo {
  int i;
  float f;
  char c;
};

// 注：下面的 `alignas(alignof(long double))` 如果需要可以简化为
// `alignas(long double)`
struct alignas(alignof(long double)) Foo2 {
  // Foo2 成员的定义...
};

struct Empty {};

struct alignas(64) Empty64 {};

int main() {
  std::cout << "对齐字节数"
               "\n"
               "- char             :"
            << alignof(char)
            << "\n"
               "- 指针             :"
            << alignof(int*)
            << "\n"
               "- Foo 类           :"
            << alignof(Foo)
            << "\n"
               "- Foo2 类          :"
            << alignof(Foo2)
            << "\n"
               "- 空类             :"
            << alignof(Empty)
            << "\n"
               "- alignas(64) Empty:"
            << alignof(Empty64) << "\n";
}
