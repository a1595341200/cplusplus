/*
 * @Author: yao.xie 1595341200@qq.com
 * @Date: 2023-08-04 15:42:31
 * @LastEditors: yao.xie 1595341200@qq.com
 * @LastEditTime: 2023-08-04 15:48:51
 * @FilePath: /boost学习/asio/src/9.cpp
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

using boost::asio::ip::udp;

int main(int argc, char *argv[]) {
  try {
    // if (argc != 2) {
    //   std::cerr << "Usage: client <host>" << std::endl;
    //   return 1;
    // }

    boost::asio::io_context io_context;

    // udp::resolver resolver(io_context);
    // udp::endpoint receiver_endpoint =
    //     *resolver.resolve(udp::v4(), argv[1], "daytime").begin();

    udp::endpoint receiver_endpoint = boost::asio::ip::udp::endpoint(
        boost::asio::ip::address::from_string("127.0.0.1"), 13);

    udp::socket socket(io_context);
    socket.open(udp::v4());

    boost::array<char, 1> send_buf = {{0}};
    socket.send_to(boost::asio::buffer(send_buf), receiver_endpoint);

    boost::array<char, 128> recv_buf;
    udp::endpoint sender_endpoint;
    size_t len =
        socket.receive_from(boost::asio::buffer(recv_buf), sender_endpoint);

    std::cout.write(recv_buf.data(), len);
    std::cout << sender_endpoint << "\n";
  } catch (std::exception &e) {
    std::cerr << e.what() << std::endl;
  }

  return 0;
}
