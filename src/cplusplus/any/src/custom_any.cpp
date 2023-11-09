/*
 * @Author: error: error: git config user.name & please set dead value or install git && error: git
 * config user.email & please set dead value or install git & please set dead value or install git
 * @Date: 2023-11-09 16:09:30
 * @LastEditors: error: error: git config user.name & please set dead value or install git && error: git config user.email & please set dead value or install git & please set dead value or install git
 * git config user.email & please set dead value or install git & please set dead value or install
 * git
 * @LastEditTime: 2023-11-09 16:12:56
 * @FilePath: /cplusplus/src/cplusplus/any/src/custom_any.cpp
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置:
 * https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
#include <iostream>
#include <stdexcept>
#include <typeinfo>

class Any {
 public:
  Any() : data(nullptr) {}

  template <typename T>
  Any(const T& value) : data(new Holder<T>(value)) {}

  ~Any() {
    delete data;
  }

  template <typename T>
  T& cast() const {
    if (!data) {
      throw std::runtime_error("Any: empty type");
    }

    if (typeid(T) != data->type()) {
      throw std::runtime_error("Any: type mismatch");
    }

    return static_cast<Holder<T>*>(data)->value;
  }

 private:
  class BaseHolder {
   public:
    virtual ~BaseHolder() {}
    virtual const std::type_info& type() const = 0;
  };

  template <typename T>
  class Holder : public BaseHolder {
   public:
    Holder(const T& value) : value(value) {}

    const std::type_info& type() const override {
      return typeid(T);
    }

    T value;
  };

  BaseHolder* data;
};

int main() {
  Any anyInt(42);
  Any anyDouble(3.14);
  Any anyString(std::string("Hello, Any!"));

  std::cout << anyInt.cast<int>() << std::endl;
  std::cout << anyDouble.cast<double>() << std::endl;
  std::cout << anyString.cast<std::string>() << std::endl;

  try {
    // 尝试错误的类型转换
    std::cout << anyInt.cast<double>() << std::endl;
  } catch (const std::exception& e) {
    std::cerr << "Exception: " << e.what() << std::endl;
  }

  return 0;
}
