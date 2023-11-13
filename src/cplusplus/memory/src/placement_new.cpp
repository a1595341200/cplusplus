#include <Log.h>

#include <iostream>
#include <new>
class MyObject {
 public:
  MyObject(int value) : value(value) {
    std::cout << __FILE__ << " : " << __LINE__
              << " MyObject constructor called with value: " << value << std::endl;
  }

  ~MyObject() {
    std::cout << __FILE__ << " : " << __LINE__
              << " MyObject destructor called with value: " << value << std::endl;
  }

  void* operator new(size_t size) {
    std::cout << __FILE__ << " : " << __LINE__
              << " MyObject::operator new called with size: " << size << std::endl;
    return malloc(size);
  }

 private:
  int value;
};

//不会调用new，只是在那块内存构造
void new_test() {
  // 分配一块内存，大小足够容纳 MyObject 对象
  char* buffer = new char[sizeof(MyObject)];

  // 使用 placement new 在已分配的内存上创建 MyObject 对象
  MyObject* obj = ::new (buffer) MyObject(42);

  // 使用 obj 对象
  // ...

  // 显式调用对象的析构函数
  obj->~MyObject();

  // 释放内存
  delete[] buffer;
}

void placement_new() {
  auto obj = new MyObject(42);
  delete obj;
}

int main() {
  new_test();
  placement_new();
  return 0;
}
