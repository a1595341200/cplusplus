/*
 * @Author: error: error: git config user.name & please set dead value or install git && error: git
 * config user.email & please set dead value or install git & please set dead value or install git
 * @Date: 2023-11-09 09:50:35
 * @LastEditors: error: error: git config user.name & please set dead value or install git && error: git config user.email & please set dead value or install git & please set dead value or install git
 * git config user.email & please set dead value or install git & please set dead value or install
 * git git config user.email & please set dead value or install git & please set dead value or
 * install git git config user.email & please set dead value or install git & please set dead value
 * or install git git config user.email & please set dead value or install git & please set dead
 * value or install git git config user.email & please set dead value or install git & please set
 * dead value or install git git config user.email & please set dead value or install git & please
 * set dead value or install git git config user.email & please set dead value or install git &
 * please set dead value or install git git config user.email & please set dead value or install git
 * & please set dead value or install git git config user.email & please set dead value or install
 * git & please set dead value or install git git config user.email & please set dead value or
 * install git & please set dead value or install git git config user.email & please set dead value
 * or install git & please set dead value or install git git config user.email & please set dead
 * value or install git & please set dead value or install git git config user.email & please set
 * dead value or install git & please set dead value or install git git config user.email & please
 * set dead value or install git & please set dead value or install git
 * @LastEditTime: 2023-11-09 10:07:30
 * @FilePath: /cplusplus/src/linux/poll/main.cpp
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置:
 * https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
#include <poll.h>
#include <unistd.h>

#include <iostream>

int main() {
  int fd[2];  // fd[0]用于读，fd[1]用于写
  if (pipe(fd) == -1) {
    std::cerr << "pipe error" << std::endl;
    return 1;
  }

  // 创建pollfd结构体数组
  struct pollfd fds[2];

  // 将文件描述符添加到pollfd数组中
  fds[0].fd = fd[0];
  fds[0].events = POLLIN;

  // fds[1].fd = fd[1];
  // fds[1].events = POLLOUT;

  // 调用poll函数，等待文件描述符上的事件
  write(fd[1], "hello", 5);
  int timeout = 1000;
  while (true) {
    int ret = poll(fds, 2, timeout);

    if (ret == -1) {
      std::cerr << "poll error" << std::endl;
      return 1;
    }

    if (ret == 0) {
      break;
    }

    // 检查哪个文件描述符上有事件发生
    if (fds[0].revents & POLLIN) {
      // 处理fd1上的事件
      std::string buf(6, '\0');
      read(fd[0], const_cast<char *>(buf.data()), 5);
      buf[buf.size() - 1] = '\n';
      std::cout << "fd1 has data to read " << buf << std::endl;
    }
  }

  // 关闭文件描述符
  close(fd[0]);
  close(fd[1]);

  return 0;
}
