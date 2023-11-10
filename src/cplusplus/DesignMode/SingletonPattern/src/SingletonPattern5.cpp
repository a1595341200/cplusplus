/*
 * @Author: error: error: git config user.name & please set dead value or install git && error: git
 * config user.email & please set dead value or install git & please set dead value or install git
 * @Date: 2023-11-10 17:16:10
 * @LastEditors: error: error: git config user.name & please set dead value or install git && error: git config user.email & please set dead value or install git & please set dead value or install git
 * git config user.email & please set dead value or install git & please set dead value or install
 * git
 * @LastEditTime: 2023-11-10 17:18:19
 * @FilePath: /cplusplus/src/cplusplus/DesignMode/SingletonPattern/src/SingletonPattern5.cpp
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置:
 * https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
#include <iostream>

#include <Singleton.hpp>

class A {
 private:
  int a{0};
  A(const A& tmp) {
    std::cout << "A拷贝构造函数" << std::endl;
  }
  A& operator=(const A& tmp) {
    std::cout << "A赋值运算符" << std::endl;
    return *this;
  }

 public:
  A() {
    std::cout << "A构造函数" << std::endl;
  }
  void addA() {
    a++;
  }

  void printA() {
    std::cout << "printA:" << a << std::endl;
  }
};

int main() {
  A* singleton = Singleton<A>::getInstance();
  singleton->addA();
  singleton->printA();
  A* singleton1 = Singleton<A>::getInstance();
  singleton1->addA();
  singleton1->printA();
  return 0;
}
