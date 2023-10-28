#include <iostream>
using namespace std;

/*
 * 为了解决一元折叠表达式中参数包为空的问
    题，下面的规则是必须遵守的。
    1.只有&&、||和,运算符能够在空参数包的一元折叠表达式中使 用。
    2.&&的求值结果一定为true。
    3.||的求值结果一定为false。
    4.,的求值结果为void()。
    5.其他运算符都是非法的。
 */

template <typename... Args>
auto sum(Args... args) {
  return (args && ...);
}

int main(int argc, char const *argv[]) {
  std::cout << std::boolalpha << sum();
  return 0;
}
