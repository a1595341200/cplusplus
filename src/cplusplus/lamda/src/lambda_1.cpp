/*
 * @Author: yao.xie 1595341200@qq.com
 * @Date: 2023-11-17 13:08:23
 * @LastEditors: yao.xie 1595341200@qq.com
 * @LastEditTime: 2023-11-17 13:29:57
 * @FilePath: /cplusplus/src/cplusplus/lamda/src/lambda_1.cpp
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置:
 * https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */

#include <iostream>

void test_capture_val() {
  int a = 0;
  //编译不过 值捕获默认const 需要加mutable 才可以
  auto f = [a]() mutable {
    a = 1;
    std::cout << "a = " << a << std::endl;
  };
  f();
  std::cout << "a = " << a << std::endl;
}

void test_capture_reference() {
  int a = 0;
  auto f = [&a]() {
    a = 1;
    std::cout << "a = " << a << std::endl;
  };
  f();
  std::cout << "a = " << a << std::endl;
}

class Foo {
 public:
  int Add(int a, int b) {
    return a + b;
  }

  int Handle() {
    auto lambda = [this](int a, int b) { return Add(a, b); };
    return lambda(1, 2);
  }
};

void test_capture_this() {
  Foo f;
  std::cout << f.Handle() << std::endl;
}

void test_capture_rvalue() {
  std::string str = "hi, lambda";
  auto concate = [prefix = std::move(str)](auto&& str) { return prefix + std::to_string(str); };
  std::cout << concate(1) << std::endl;
  std::cout << str << std::endl;
}

int main(int argc, char* argv[]) {
  test_capture_val();
  test_capture_reference();
  test_capture_this();
  test_capture_rvalue();
  return 0;
}
