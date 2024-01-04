/*
 * @Author: yao.xie 1595341200@qq.com
 * @Date: 2024-01-04 14:20:47
 * @LastEditors: yao.xie 1595341200@qq.com
 * @LastEditTime: 2024-01-04 14:55:13
 * @FilePath: /cplusplus/src/cplusplus/nocopy/src/main.cpp
 * @Description:
 *
 * Copyright (c) 2024 by ${git_name_email}, All Rights Reserved.
 */
#include <unistd.h>

#include <iostream>
#include <memory>
#include <vector>

#include "XHD_MessageSenderReceiver.h"
#define TOTALREAD 2
std::string DefaultTopic = "123";
typedef struct {
  uint64_t array[64];
} TestTopic_st;
XHD_MemoryBuffer<TestTopic_st, 64> TestBuffer;

void TestWrite(int num) {
  uint64_t index = 0;
  std::vector<std::shared_ptr<XHD_MessageSenderReceiver>> Sender;
  Sender.reserve(num);
  std::string topic;
  for (int i = 0; i < num; i++) {
    char ch = '0' + i;
    topic = DefaultTopic + (ch);
    auto test = std::make_shared<XHD_MessageSenderReceiver>(topic);
    if (test->Init()) {
      Sender.emplace_back(test);
      SLOG(INFO) << topic << " added" << std::endl;
    }
    topic.clear();
  }
  uint64_t dataindex = 0;
  while (1) {
    SLOG(INFO) << "index : " << index;
    auto ptr = TestBuffer.GetDataWritePtr(index);
    if (ptr != nullptr) {
      SLOG(INFO) << "data sending" << std::endl;
      ptr->array[0] = dataindex++;
      TestBuffer.ReleaseWrite(index, TOTALREAD);
      XHD_Message msg;
      msg.mtype = 1;
      msg.mtext = index;
      for (auto it : Sender) {
        it->SendMsg(msg);
      }
      index = (index + 1) % 64;
    }
    usleep(10000);
  }
}

void TestRead(int index) {
  char ch = '0' + index;
  std::string topic = DefaultTopic + (ch);
  auto test = std::make_shared<XHD_MessageSenderReceiver>(topic);
  if (test->Init()) {
    SLOG(INFO) << topic << " connected" << std::endl;
  }
  XHD_Message msg;
  while (1) {
    if (true == test->RecvMsg(msg)) {
      SLOG(INFO) << "msg data:" << msg.mtext << std::endl;
      auto data = TestBuffer.GetDataReadPtr((int)msg.mtext);
      if (data != nullptr) {
        SLOG(INFO) << "data:" << data->array[0] << std::endl;
      }
      TestBuffer.ReleaseRead((int)msg.mtext);
    } else {
      SLOG(INFO) << "Can not get data" << std::endl;
    }
  }
}

#include <thread>

int main(int argc, char* argv[]) {
  std::vector<std::thread> t2;
  for (int i = 0; i < TOTALREAD; i++) {
    t2.push_back(std::thread(TestRead, i));
  }
  usleep(100000);
  std::thread t1(TestWrite, TOTALREAD);
  usleep(100000);

  t1.join();
  for (int i = 0; i < TOTALREAD; i++) {
    t2[i].join();
  }

  return 0;
}
