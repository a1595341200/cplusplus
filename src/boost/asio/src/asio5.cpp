/*
 * @Author: yao.xie 1595341200@qq.com
 * @Date: 2023-08-04 14:17:05
 * @LastEditors: yao.xie 1595341200@qq.com
 * @LastEditTime: 2023-08-04 14:39:39
 * @FilePath: /boost学习/asio/src/4.cpp
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置
 * 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
#include <boost/asio.hpp>
#include <boost/asio/impl/src.hpp>
#include <boost/asio/io_context.hpp>
#include <boost/bind/bind.hpp>
#include <iostream>
#include <thread>

class printer {
public:
  printer(boost::asio::io_context &io)
      : strand_(boost::asio::make_strand(io)),
        timer1_(io, boost::asio::chrono::seconds(1)),
        timer2_(io, boost::asio::chrono::seconds(1)), count_(0) {
    timer1_.async_wait(boost::asio::bind_executor(
        strand_, boost::bind(&printer::print1, this)));

    timer2_.async_wait(boost::asio::bind_executor(
        strand_, boost::bind(&printer::print2, this)));
    // timer1_.async_wait(boost::bind(&printer::print1, this));

    // timer2_.async_wait(boost::bind(&printer::print2, this));
  }

  ~printer() { std::cout << "Final count is " << count_ << std::endl; }

  void print1() {
    if (count_ < 10) {
      std::cout << "Timer 1: " << count_ << std::endl;
      ++count_;

      timer1_.expires_at(timer1_.expiry() + boost::asio::chrono::seconds(1));

      timer1_.async_wait(boost::asio::bind_executor(
          strand_, boost::bind(&printer::print1, this)));
    }
  }

  void print2() {
    if (count_ < 10) {
      std::cout << "Timer 2: " << count_ << std::endl;
      ++count_;

      timer2_.expires_at(timer2_.expiry() + boost::asio::chrono::seconds(1));

      timer2_.async_wait(boost::asio::bind_executor(
          strand_, boost::bind(&printer::print2, this)));
    }
  }

private:
  boost::asio::strand<boost::asio::io_context::executor_type> strand_;
  boost::asio::steady_timer timer1_;
  boost::asio::steady_timer timer2_;
  int count_;
};

int main() {
  boost::asio::io_context io;
  printer p(io);
  std::thread t(boost::bind(&boost::asio::io_context::run, &io));
  io.run();
  t.join();

  return 0;
}
