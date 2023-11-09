/*
 * @Author: error: error: git config user.name & please set dead value or install git && error: git
 * config user.email & please set dead value or install git & please set dead value or install git
 * @Date: 2023-11-09 15:30:34
 * @LastEditors: error: error: git config user.name & please set dead value or install git && error:
 * git config user.email & please set dead value or install git & please set dead value or install
 * git git config user.email & please set dead value or install git & please set dead value or
 * install git git config user.email & please set dead value or install git & please set dead value
 * or install git git config user.email & please set dead value or install git & please set dead
 * value or install git git config user.email & please set dead value or install git & please set
 * dead value or install git git config user.email & please set dead value or install git & please
 * set dead value or install git
 * @LastEditTime: 2023-11-09 15:39:06
 * @FilePath: /cplusplus/src/cplusplus/unique_ptr/src/main.cpp
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置:
 * https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
#include <functional>
#include <iostream>
#include <memory>

using namespace std;

class Foo {
 public:
  int a{0};
};

template <typename T>
struct CustomDeleter {
  CustomDeleter() {
    std::cout << "CustomDeleter" << std::endl;
  }
  void operator()(T *ptr) const {
    delete ptr;
  }
};

int main(int argc, char const *argv[]) {
  std::unique_ptr<Foo, std::function<void(Foo *)>> f(new Foo(), [](Foo *f) {
    delete f;
    std::cout << "test" << std::endl;
  });
  auto f1 = f.get();
  f = nullptr;
  std::cout << f1->a << std::endl;

  std::unique_ptr<int> a(new int(1));
  auto &test = a;
  std::cout << *test << std::endl;
  CustomDeleter<int> c{};
  //共享一个删除器
  std::unique_ptr<int, CustomDeleter<int>> obj(new int(), c);
  std::unique_ptr<int, CustomDeleter<int>> obj1(new int(), c);
  //独享一个
  std::unique_ptr<int, CustomDeleter<int>> obj2(new int(), CustomDeleter<int>());
  return 0;
}
