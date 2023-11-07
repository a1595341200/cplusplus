//
// Created by 谢瑶 on 2023/11/7.
//
#include <iostream>
//CRTP
template <typename T>
class Solution {
 public:
  void doSomething() {
    return GetDerivedPtr()->doSomethingImpl();
  }
  virtual ~Solution() = default;

 private:
  T* GetDerivedPtr() {
    return dynamic_cast<T*>(this);
  }
};

class A : public Solution<A> {
 public:
  void doSomethingImpl() {
    std::cout << "A::doSomething()" << std::endl;
  }
};

class B : public Solution<B> {
 public:
  void doSomethingImpl() {
    std::cout << "B::doSomething()" << std::endl;
  }
};

template <typename T>
void doSomething(T&& t) {
  t.doSomething();
}

int main(int argc, const char* argv[]) {
  Solution<A> a;
  Solution<B> b;
  doSomething(a);
  doSomething(b);
  return 0;
}