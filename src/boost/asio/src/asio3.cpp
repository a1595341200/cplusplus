/*
 * @Author: yao.xie 1595341200@qq.com
 * @Date: 2023-08-04 14:01:46
 * @LastEditors: yao.xie 1595341200@qq.com
 * @LastEditTime: 2023-08-04 14:12:07
 * @FilePath: /boost学习/asio/src/3.cpp
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置
 * 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
#include <boost/asio.hpp>
#include <boost/asio/impl/src.hpp>
#include <boost/asio/io_context.hpp>
#include <iostream>

void print(int &count, boost::asio::steady_timer &t,
           const boost::system::error_code &e) {
  if (count++ < 5) {
    std::cout << e.message() << " a \n";
    t.expires_at(t.expiry() + std::chrono::seconds(1));
    t.async_wait(
        std::bind(&print, std::ref(count), std::ref(t), std::placeholders::_1));
  }
}

int main(int argc, char const *argv[]) {
  boost::asio::io_context io;
  boost::asio::steady_timer t(io, std::chrono::seconds(1));
  int count{0};

  t.async_wait(
      std::bind(&print, std::ref(count), std::ref(t), std::placeholders::_1));
  io.run();
  std::cout << count << "\n";
  return 0;
}
