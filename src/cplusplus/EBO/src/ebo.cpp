/*
 * @Author: error: error: git config user.name & please set dead value or install git && error: git
 * config user.email & please set dead value or install git & please set dead value or install git
 * @Date: 2023-11-09 13:41:34
 * @LastEditors: error: error: git config user.name & please set dead value or install git && error:
 * git config user.email & please set dead value or install git & please set dead value or install
 * git
 * @LastEditTime: 2023-11-09 13:41:34
 * @FilePath: /cplusplus/src/cplusplus/EBO/src/ebo.cpp
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置:
 * https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
#include <iostream>
using namespace std;

struct Base {};  // 空类, size = 1

struct Composed {  // size = 8
  Base b;          // 组合，无空基类优化
  int i;
};

struct Derived1 : Base {  // size = 4
  int i;                  // 典型的空基类优化
};

struct Derived2 : Base {  // size = 8
  int i;
  Base b;  // 这个例子似乎有点特殊，解释可能是： 继承的空基类已被优化，则组合的空基类不能再被优化
};

struct Derived3 : Base {  // size = 8
  Base b;                 // 第一个非静态数据成员，因此对b不能应用空基类优化
  int i;
};

struct Derived4 : Base {  // size = 12
  Derived1 c;             // 第一个非静态数据成员，因此对c不能应用空基类优化
  int i;
};

struct Derived5 : Base {  // size = 8
  int i;
  Derived1 c;  // 不是第一个非静态成员，且派生自空基类，对c可应用空基类优化
};

int main() {
  cout << "sizeof(Base) = " << sizeof(Base) << endl;          // 1
  cout << "sizeof(Composed) = " << sizeof(Composed) << endl;  // 8
  cout << "sizeof(Derived1) = " << sizeof(Derived1) << endl;  // 4
  cout << "sizeof(Derived2) = " << sizeof(Derived2) << endl;  // 8
  cout << "sizeof(Derived3) = " << sizeof(Derived3) << endl;  // 8
  cout << "sizeof(Derived4) = " << sizeof(Derived4) << endl;  // 12
  cout << "sizeof(Derived5) = " << sizeof(Derived5) << endl;  // 8

  return 0;
}
