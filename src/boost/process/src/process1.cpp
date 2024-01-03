/*
 * @Author: yao.xie 1595341200@qq.com
 * @Date: 2024-01-03 14:00:58
 * @LastEditors: yao.xie 1595341200@qq.com
 * @LastEditTime: 2024-01-03 14:33:49
 * @FilePath: /cplusplus/src/boost/process/src/process1.cpp
 * @Description:
 *
 * Copyright (c) 2024 by ${git_name_email}, All Rights Reserved.
 */
#include <iostream>
#include <string>
#include <thread>

#include <boost/process.hpp>

int main() {
  boost::process::ipstream pipe_stream;
  boost::process::child c("ping 127.0.0.1", boost::process::std_out > pipe_stream);

  std::thread t([&]() {
    std::string line;
    while (pipe_stream && std::getline(pipe_stream, line) && !line.empty()) {
      std::cerr << line << std::endl;
    }
    std::cout << "stop\n";
  });

  c.wait_for(std::chrono::seconds(10));
  c.terminate();
  t.join();
}
