/*
 * @Author: error: error: git config user.name & please set dead value or install git && error: git
 * config user.email & please set dead value or install git & please set dead value or install git
 * @Date: 2023-11-10 18:03:25
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
 * value or install git & please set dead value or install git
 * @LastEditTime: 2023-11-10 18:14:45
 * @FilePath: /cplusplus/src/linux/epoll/epoll_ptr.cpp
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置:
 * https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
#include <stdio.h>
#include <stdlib.h>
#include <sys/epoll.h>
#include <unistd.h>

#include <functional>
#include <iostream>
#define MAX_EVENTS 10

struct Event {
  int fd;
  std::function<void(uint8_t)> callback;
};

int main() {
  int epoll_fd{}, num_events{};
  epoll_event event{}, events[MAX_EVENTS];
  char buffer[256]{0};
  // 创建一个管道
  int fds[2];  // 0读 1写
  if (pipe(fds) == -1) {
    perror("pipe error");
    exit(EXIT_FAILURE);
  }
  // 创建 epoll 实例
  epoll_fd = epoll_create1(0);
  if (epoll_fd == -1) {
    perror("epoll_create1");
    exit(EXIT_FAILURE);
  }

  // 添加标准输入文件描述符到 epoll 实例，监视可读事件
  // 边缘触发方式要求您在每次事件触发后明确处理所有可用数据，而水平触发方式允许您部分处理数据，然后在下一次触发时继续处理。
  // 使用边缘触发方式时，您需要确保及时处理所有数据，否则可能会错过事件。这可能需要更高效的处理方式，以确保不丢失数据。
  // 对于边缘触发方式，通常需要设置非阻塞的文件描述符，以确保 epoll 不会一直等待数据。
  // 在使用 epoll 时，是否选择 EPOLLET
  // 取决于您的应用程序需求。如果需要更精细的控制和处理，边缘触发方式可能更合适。如果您可以接受在数据准备好时反复触发事件，那么水平触发方式可能更简单。
  event.events = EPOLLIN | EPOLLET;
  // event.data.fd = fds[0];  // 文件描述符 0 表示标准输入
  Event e;
  e.fd = fds[0];
  e.callback = [&e](uint8_t event) {
    std::cout << "callback " << e.fd << "event " << (int)event << std::endl;
  };
  event.data.ptr = &e;

  if (epoll_ctl(epoll_fd, EPOLL_CTL_ADD, fds[0], &event) == -1) {
    perror("epoll_ctl");
    exit(EXIT_FAILURE);
  }
  write(fds[1], "test", 4);
  int timeout = 1000;

  while (true) {
    num_events = epoll_wait(epoll_fd, events, MAX_EVENTS, timeout);  // 无限等待事件
    std::cout << "num_events: " << num_events << std::endl;
    if (num_events == -1) {
      perror("epoll_wait");
      exit(EXIT_FAILURE);
    }
    if (num_events == 0) {
      printf("timeout\n");
      break;
    }
    for (int i = 0; i < num_events; i++) {
      ((Event*)events->data.ptr)->callback(events[i].events);
    }
  }

  close(epoll_fd);

  return 0;
}
