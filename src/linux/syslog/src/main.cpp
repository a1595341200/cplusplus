/*
 * @Author: yao.xie 1595341200@qq.com
 * @Date: 2023-10-28 17:48:10
 * @LastEditors: yao.xie 1595341200@qq.com
 * @LastEditTime: 2023-10-28 17:48:10
 * @FilePath: /cplusplus/src/syslog/src/main.cpp
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置:
 * https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
#include <Log.h>
#include <syslog.h>

#include <iostream>
#include <sstream>
using namespace std;

void sysLog() {
  openlog("lettuce_ sailor", LOG_NDELAY | LOG_PERROR | LOG_PID, LOG_USER);
  setlogmask(LOG_MASK(LOG_INFO));
  setlogmask(LOG_UPTO(LOG_INFO));
  std::ostringstream o;
  o << "32423\n";
  syslog(LOG_INFO, "%s", o.str().c_str());
}

void stringTest() {
  ostringstream out;
  out << "a"
      << "b"
      << "c";
  istringstream in(out.str());
  string s;
  in >> s;
  std::cout << s << std::endl;
}

int main(int argc, char const *argv[]) {
  //   Log::init("stream");
  stringTest();
  return 0;
}
