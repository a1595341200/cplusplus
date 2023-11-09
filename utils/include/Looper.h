/*
 * @Author: error: error: git config user.name & please set dead value or install git && error: git
 * config user.email & please set dead value or install git & please set dead value or install git
 * @Date: 2023-11-09 09:44:46
 * @LastEditors: error: error: git config user.name & please set dead value or install git && error:
 * git config user.email & please set dead value or install git & please set dead value or install
 * git
 * @LastEditTime: 2023-11-09 09:44:46
 * @FilePath: /cplusplus/utils/include/Looper.h
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置:
 * https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
//
// Created by 谢瑶 on 2022/10/31.
//

#ifndef DEV_LOOPER_H
#define DEV_LOOPER_H

#include <atomic>
#include <chrono>
#include <map>
#include <memory>
#include <mutex>
#include <unordered_set>

#include "Message.h"

class Message;

class MessageHandler : virtual public std::enable_shared_from_this<MessageHandler> {
 public:
  virtual ~MessageHandler() = default;
  virtual void handleMessage(std::shared_ptr<Message> message) = 0;
};

class LooperCallback : public std::enable_shared_from_this<class LooperCallback> {
 public:
  virtual ~LooperCallback() = default;
  virtual int handleEvent(int fd, short events, void *data) = 0;
};

struct Invok {
  std::shared_ptr<MessageHandler> handler;
  std::shared_ptr<Message> message;
};

class Looper : public std::enable_shared_from_this<Looper> {
 public:
  enum { READ, WRITE };
  virtual ~Looper();

 public:
  explicit Looper();
  void pollOnce(int timeOut = 1);
  void sendMessage(std::shared_ptr<MessageHandler> handler, std::shared_ptr<Message> message);
  void sendMessageDelay(std::chrono::nanoseconds uptimeDelay,
                        std::shared_ptr<MessageHandler> handler, std::shared_ptr<Message> message);
  int addFd(int fd, std::shared_ptr<class LooperCallback> callback, short mask);
  int removeFd(int fd);
  void exit();
  std::mutex mLock;

 private:
  std::map<std::chrono::time_point<std::chrono::high_resolution_clock>, Invok> mMessages;
  std::map<int, std::shared_ptr<class LooperCallback>> mLoopCallBacks;
  std::atomic_bool mStop{false};
  int mWakeUpFd[2];
  fd_set mReadfdset;
};

#endif  // DEV_LOOPER_H
