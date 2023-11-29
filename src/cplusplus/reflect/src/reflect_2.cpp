#include <iostream>
#include <string>

#ifdef _WIN64
#define __FUNC__ __FUNCSIG__
#else
#define __FUNC__ __PRETTY_FUNCTION__
#endif

std::string_view parseResult(std::string result) {
  // str = constexpr void Func() [with T = int]
  auto begin = result.find("T = ") + 4;
  auto end = result.find_last_of("]");
  return std::string_view{result.data() + begin, end - begin};
}
template <typename T>
constexpr auto TypeInfo() {
  auto result = __FUNC__;
  return parseResult(result);
}

class Example {
  int d = 0;
  void GetData() {
    std::cout << "test" << std::endl;
  }
};

int main() {
  auto type = TypeInfo<Example>();
  std::cout << type << std::endl;
  type = TypeInfo<int>();
  std::cout << type << std::endl;
  type = TypeInfo<double>();
  std::cout << type << std::endl;
}