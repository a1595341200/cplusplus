/*
 * @Author: yao.xie 1595341200@qq.com
 * @Date: 2023-08-04 14:17:05
 * @LastEditors: yao.xie 1595341200@qq.com
 * @LastEditTime: 2023-08-04 14:24:54
 * @FilePath: /boost学习/asio/src/4.cpp
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置
 * 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
#include <boost/asio.hpp>
#include <boost/asio/impl/src.hpp>
#include <boost/asio/io_context.hpp>
#include <iostream>

using namespace std::chrono_literals;
using namespace boost::asio;

class Print {
public:
  explicit Print(io_context &io) : t(io, 1s) {
    t.async_wait(std::bind(&Print::print, this, std::placeholders::_1));
  }
  ~Print() { std::cout << count << "\n"; }

private:
  int count{};
  steady_timer t;

  void print(const boost::system::error_code &e) {
    if (count++ < 5) {
      std::cout << e.message() << "\n";
      t.expires_at(t.expiry() + 1s);
      t.async_wait(std::bind(&Print::print, this, std::placeholders::_1));
    }
  }
};

int main(int argc, char const *argv[]) {
  io_context io;
  Print p(io);
  io.run();
  return 0;
}
