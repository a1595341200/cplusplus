/*
 * @Author: yao.xie 1595341200@qq.com
 * @Date: 2023-08-04 13:55:36
 * @LastEditors: yao.xie 1595341200@qq.com
 * @LastEditTime: 2023-08-04 13:56:41
 * @FilePath: /boost学习/asio/src/2.cpp
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置
 * 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
//
// timer.cpp
// ~~~~~~~~~
//
// Copyright (c) 2003-2023 Christopher M. Kohlhoff (chris at kohlhoff dot com)
//
// Distributed under the Boost Software License, Version 1.0. (See accompanying
// file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)
//

#include <boost/asio.hpp>
#include <boost/asio/impl/src.hpp>
#include <iostream>

void print(const boost::system::error_code &e) {
  std::cout << "Hello, world! " << e.message() << " : " << e.value()
            << std::endl;
}

int main() {
  boost::asio::io_context io;

  boost::asio::steady_timer t(io, boost::asio::chrono::seconds(5));
  t.async_wait(&print);

  io.run();

  return 0;
}
