/*
 * @Author: yao.xie 1595341200@qq.com
 * @Date: 2023-08-04 15:10:57
 * @LastEditors: yao.xie 1595341200@qq.com
 * @LastEditTime: 2023-08-04 15:21:33
 * @FilePath: /boost学习/asio/src/6.cpp
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置
 * 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
//
// client.cpp
// ~~~~~~~~~~
//
// Copyright (c) 2003-2023 Christopher M. Kohlhoff (chris at kohlhoff dot com)
//
// Distributed under the Boost Software License, Version 1.0. (See accompanying
// file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)
//

#include <boost/array.hpp>
#include <boost/asio.hpp>
#include <boost/asio/impl/src.hpp>
#include <iostream>

using boost::asio::ip::tcp;

int main(int argc, char *argv[]) {
  try {
    boost::asio::io_context io_context;

    // tcp::resolver resolver(io_context);
    // tcp::resolver::results_type endpoints =
    //     resolver.resolve(argv[1], "daytime");
    std::cout << boost::asio::ip::tcp::endpoint(boost::asio::ip::tcp::v4(), 13)
              << "\n";

    tcp::socket socket(io_context);
    socket.connect(
        boost::asio::ip::tcp::endpoint(boost::asio::ip::tcp::v4(), 13));
    // boost::asio::connect(socket, endpoints);

    for (;;) {
      boost::array<char, 128> buf;
      boost::system::error_code error;

      size_t len = socket.read_some(boost::asio::buffer(buf), error);

      if (error == boost::asio::error::eof) {
        break; // Connection closed cleanly by peer.
      } else if (error) {
        throw boost::system::system_error(error); // Some other error.
      }
      std::cout.write(buf.data(), len);
    }
  } catch (std::exception &e) {
    std::cerr << "error : " << e.what() << std::endl;
  }

  return 0;
}
