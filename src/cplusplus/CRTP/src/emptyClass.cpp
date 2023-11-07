//
// Created by 谢瑶 on 2023/11/7.
//
#include <iostream>
using namespace std;

template <typename T>
class demoClass : public T {};

class func_policy1 {
 public:
  void func() {
    cout << "used func1" << endl;
  }
};

class func_policy2 {
 public:
  void func() {
    cout << "used func2" << endl;
  }
};

template <typename T>
void func(T&& t) {
  t.func();
}

int main() {
  func(demoClass<func_policy1>());
  func(demoClass<func_policy2>());
  return 0;
}