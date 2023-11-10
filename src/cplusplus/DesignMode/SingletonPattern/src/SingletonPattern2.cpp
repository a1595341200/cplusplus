/*
 * @Author: error: error: git config user.name & please set dead value or install git && error: git config user.email & please set dead value or install git & please set dead value or install git
 * @Date: 2023-11-10 13:38:57
 * @LastEditors: error: error: git config user.name & please set dead value or install git && error: git config user.email & please set dead value or install git & please set dead value or install git
 * @LastEditTime: 2023-11-10 14:06:36
 * @FilePath: /cplusplus/src/cplusplus/DesignMode/SingletonPattern/src/SingletonPattern2.cpp
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
#include <iostream>
#include <mutex>

class Singleton {
 public:
  static Singleton* getInstance() {
    // 锁、双重判断
    // 这个锁加双重判断的懒汉模式既繁琐又不安全，并不推荐。
    // 指令重排导致的不安全,对于锁要保证读写平等，下面对写平等对读未加锁
    // 22 行构造中, 其他线程调用getInstance会返回一个未构造好的对象
    if (nullptr == instance) {
      std::lock_guard<std::mutex> lock(mtx);
      if (nullptr == instance) {
        instance = new Singleton();
      }
    }
    return instance;
  }

  void addA() {
    a++;
  }

  void printA() {
    std::cout << "printA:" << a << std::endl;
  }

 private:
  int a{0};
  // 声明
  static std::mutex mtx;
  static Singleton* instance;
  Singleton() {}
  Singleton(const Singleton& temp) {
    std::cout << "Singleton 拷贝构造函数" << std::endl;
  }
  Singleton& operator=(const Singleton& temp) {
    return *instance;
  }
};

// 需要定义
std::mutex Singleton::mtx;
Singleton* Singleton::instance{nullptr};

int main() {
  Singleton* singleton = Singleton::getInstance();
  singleton->addA();
  singleton->printA();
  return 0;
}
