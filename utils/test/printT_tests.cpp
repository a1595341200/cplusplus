#include <filesystem>
#include <fstream>
#include <iostream>
#include <type_traits>

#include <gtest/gtest.h>

#include "printT.h"

void t(int) {
  std::cout << "int" << std::endl;
}

void t(void *p) {
  std::cout << "void *" << std::endl;
}

class B {
 public:
  explicit B(int b)
      : b(b){

        };
  int b;
};

class A {
 public:
  explicit A(int a, B b) {
    std::cout << a << " " << b.b << std::endl;
  }

  A(std::initializer_list<int> a) {
    std::cout << a.begin() << " " << a.begin() + 1 << std::endl;
  }
};

class E {};

void test1() {
  std::cout << "Hello, World!" << std::endl;
  std::ofstream f("./1.txt", std::ios::trunc);
  std::string h = "123\n";
  f << h;
  std::cout << h << std::endl;
  std::cout << __cplusplus << std::endl;
  t(0);
  t(nullptr);
  B b{2};
  A a{1, b};
  A c{1, 2};
  A{1, 2, 3};
  std::cout << std::boolalpha << std::is_move_constructible<A>::value << std::endl;
  std::filesystem::remove("./1.txt");
}

void test2() {
  std::ofstream out("./1.csv");
  out << "a,"
         "b,"
         "c \n";
  out << 1 << "," << 2 << "," << 3 << ",\n";
  std::filesystem::remove("./1.csv");
}

template <typename T, template <class> class Con>
class MyTest {
 private:
  Con<T> t;
};

template <typename T>
using Vec = std::vector<T, std::allocator<T>>;

TEST(ptintT, 1) {
  test1();
  test2();
  MyTest<std::string, Vec> test;
  std::vector<int> a{1, 2, 3, 4};
  std::vector<std::vector<int>> b(4, a);
  printT(b);
  std::cout << std::make_tuple(1, 2, 3, 4);
}
