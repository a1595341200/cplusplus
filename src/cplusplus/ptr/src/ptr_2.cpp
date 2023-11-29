#include <iostream>
#include <thread>
using namespace std;
#include <memory>

class A {
 public:
  A() {
    std::cerr << "call A constructor!" << std::endl;
  }
  virtual ~A() {
    std::cerr << "call A destructor!" << std::endl;
  }
};
class B : public A {
 public:
  B() {
    std::cerr << "call B constructor!" << std::endl;
  }
  ~B() {
    std::cerr << "call B destructor!" << std::endl;
  }

 public:
  int getdata() {
    return 10 + 30;
  }
};
class C {
 public:
  C() {
    std::cerr << "call C constructor!" << std::endl;
  }
  ~C() {
    std::cerr << "call C destructor!" << std::endl;
  }
  static std::shared_ptr<C> get() {
    static auto x = std::make_shared<C>();
    return x;
  }
  void test() {
    std::cerr << "call C test function!" << std::endl;
  }

 public:
  //  A a;
  //  B b;
};

// 普通全局
std::shared_ptr<B> bp = std::make_shared<B>();
// 二次释放崩溃 double free
char buf[12] = {0};
auto pbuf = std::shared_ptr<char[]>(buf);

int main() {
  auto x = C::get();
  x->test();

  auto x1 = bp->getdata();

  return 0;
}