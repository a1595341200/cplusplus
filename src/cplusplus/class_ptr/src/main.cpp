/*
 * @Author: yao.xie 1595341200@qq.com
 * @Date: 2023-10-28 17:29:59
 * @LastEditors: yao.xie 1595341200@qq.com
 * @LastEditTime: 2023-10-28 17:29:59
 * @FilePath: /cplusplus/src/clas_ptr/src/main.cpp
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置:
 * https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
#include <Utils.h>

#include <iostream>
#include <type_traits>

using namespace std;

class Test {
 public:
  void show(const std::string &name) {
    std::cout << name << " " << mName << std::endl;
  }

  int getId() {
    return 1;
  }

 private:
  std::string mName{"123"};
};

template <typename T, typename U>
void test(T U::*t) {
  Utils::lookType(U());
  Utils::lookType(t);
  Test p;
  (p.*t)("1");
}

template <typename T>
void test1(T t) {
  Utils::lookType(t);
  Test p;
  (p.*t)("2");
}

template <typename T, typename U, typename... Args>
auto test2(T U::*t, Args... args)
    -> std::enable_if_t<!std::is_same_v<decltype((U().*t)(std::forward<Args>(args)...)), void>,
                        decltype((U().*t)(std::forward<Args>(args)...))> {
  Utils::lookType(t);
  Test p;
  return (p.*t)(std::forward<Args>(args)...);
}

template <typename T, typename U, typename... Args>
std::enable_if_t<std::is_invocable_v<T, Args...>> test3(T U::*t, Args... args) {
  Utils::lookType(t);
  Test p;
  (p.*t)(std::forward<Args>(args)...);
}

template <typename T, typename U, typename... Args>
void test4(T U::*t, Args... args) {
  //    Utils::lookType(t);
  //    Utils::lookType(decltype(t)());
  //    Utils::lookType(U());
  using boost::typeindex::type_id_with_cvr;
  Utils::lookType<decltype(t)>();
  Utils::lookType<T *>();
  std::cout << "11212 " << std::is_invocable_v<decltype(t), U *, Args...> << std::endl;
}

int main(int argc, char const *argv[]) {
  //    Test t;
  //    test(&Test::show);
  //    test1(&Test::show);
  //    auto r = test2(&Test::getId);
  //    dbg(r);
  //    using namespace string_literals;
  //    test3(&Test::show, "3"s);
  //    test3(&Test::getId);
  //    decltype(&Test::show) rt;
  //    test4(&Test::show, "3");
  //    auto qa = std::bind(&Test::show, &t, std::placeholders::_1);
  //    qa("4");
  //    Utils::lookType(rt);
  std::optional<std::string> op;
  op = "s"s;
  if (op) {
    std::cout << std::boolalpha << true << std::endl;
  }
  return 0;
}
