/*
 * @Author: yao.xie 1595341200@qq.com
 * @Date: 2023-10-28 17:35:29
 * @LastEditors: yao.xie 1595341200@qq.com
 * @LastEditTime: 2023-10-28 17:35:30
 * @FilePath: /cplusplus/src/quoted/src/main.cpp
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置:
 * https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
#include <iomanip>
#include <iostream>
#include <sstream>
// 给字符串加括号
int main() {
  std::stringstream ss;
  std::string in = "String with spaces, and embedded \"quotes\" too";
  std::string out;
  auto show = [&](const auto &what) {
    &what == &in ? std::cout << "read in     [" << in << "]\n"
                             << "stored as   [" << ss.str() << "]\n"
                 : std::cout << "written out [" << out << "]\n\n";
  };

  ss << std::quoted(in);
  show(in);
  ss >> std::quoted(out);
  show(out);

  ss.str("");  // clear the stream buffer

  in = "String with spaces, and embedded $quotes$ too";
  char delim{'$'};
  char escape{'%'};

  ss << std::quoted(in, delim, escape);
  show(in);
  ss >> std::quoted(out, delim, escape);
  show(out);
  ss.str("");
  in = "\r\n3\r\nOK\r\n5\r\n";
  delim = '\n';
  escape = '\r';

  ss << std::quoted(in, delim, escape);
  show(in);
  ss >> std::quoted(out, delim, escape);
  show(out);
}
