/*
 * @Author: error: error: git config user.name & please set dead value or install git && error: git
 * config user.email & please set dead value or install git & please set dead value or install git
 * @Date: 2023-11-10 13:23:36
 * @LastEditors: error: error: git config user.name & please set dead value or install git && error:
 * git config user.email & please set dead value or install git & please set dead value or install
 * git
 * @LastEditTime: 2023-11-10 13:23:44
 * @FilePath: /cplusplus/src/cplusplus/DesignMode/SingletonPattern/src/SingletonPattern1.cpp
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置:
 * https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
#include <iostream>
#include <memory>

class Singleton {
 public:
  static Singleton* getInstance() {
    return instance;
  }

  void addA() {
    a++;
  }

  void printA() {
    std::cout << "printA:" << a << std::endl;
  }

 private:
  // 声明
  static Singleton* instance;
  int a{0};

  Singleton() {
    std::cout << "Singleton 构造函数" << std::endl;
  }
  Singleton(const Singleton& temp) {
    std::cout << "Singleton 拷贝构造函数" << std::endl;
  }

  Singleton(Singleton&& temp) = default;

  Singleton& operator=(const Singleton& temp) {
    return *instance;
  }

//  void* operator new(size_t size) {
//    std::cout << "Custom new called." << std::endl;
//    return ::operator new(size);  // 使用默认的内存分配
//  }

  // 删除delete 防止被delete
  void operator delete(void* ptr) {
    std::cout << "Custom delete called." << std::endl;
    //    ::operator delete(ptr); // 使用默认的内存释放
  }

  Singleton& operator=(Singleton&& temp) = default;
};

// 类静态变量要在类内声明，类外定义c++17之前
// C++17之后可以 inline static 在类内使用
Singleton* Singleton::instance = new Singleton;

int main() {
    Singleton* singleton = Singleton::getInstance();
    singleton->addA();
    singleton->printA();
  return 0;
}
