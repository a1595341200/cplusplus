/*
 * @Author: 谢瑶
 * @Date: 2023-09-22 10:16:19
 * @LastEditors: 谢瑶
 * @LastEditTime: 2023-10-28 16:40:59
 * @FilePath: /C-/mac/myproject/src/from_chars/src/main.cpp
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置:
 * https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
#include <array>
#include <charconv>
#include <iostream>
// c++ 17
int main() {
  std::array<char, 10> str{"42 43"};
  int result;
  std::from_chars(str.data(), str.data() + str.size(), result);
  std::cout << result;
  if (const char *env_p = std::getenv("PATH"))
    std::cout << "Your PATH is: " << env_p << '\n';
  return 0;
}
