/*
 * @Author: error: error: git config user.name & please set dead value or install git && error: git
 * config user.email & please set dead value or install git & please set dead value or install git
 * @Date: 2023-11-10 17:43:22
 * @LastEditors: error: error: git config user.name & please set dead value or install git && error: git config user.email & please set dead value or install git & please set dead value or install git
 * git config user.email & please set dead value or install git & please set dead value or install
 * git git config user.email & please set dead value or install git & please set dead value or
 * install git git config user.email & please set dead value or install git & please set dead value
 * or install git
 * @LastEditTime: 2023-11-10 17:50:12
 * @FilePath: /cplusplus/utils/include/Message.h
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置:
 * https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
//
// Created by 谢瑶 on 2022/10/31.
//

#pragma once

#include <chrono>
#include <memory>

class Looper;

class MessageHandler;

class Message : public std::enable_shared_from_this<Message> {
 public:
  explicit Message(int _w) : what(_w) {}

  Message(const std::shared_ptr<Looper> &_l, const std::shared_ptr<MessageHandler> &_h, int _w)
      : what(_w), mLooper(_l), mHandler(_h) {}

  virtual ~Message();
  void send();
  void sendDelay(std::chrono::nanoseconds uptimeDelay);
  int what;

 private:
  std::shared_ptr<Looper> mLooper;
  std::shared_ptr<MessageHandler> mHandler;
};
