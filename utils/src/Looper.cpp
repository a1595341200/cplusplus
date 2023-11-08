//
// Created by 谢瑶 on 2022/10/31.
//
#define TAG "Looper"
#include "Looper.h"

#include <Log.h>
#include <unistd.h>

#include <cassert>
#include <functional>
#include <iostream>
#include <thread>

void LooperCallback(int fd, short event, void *arg) {
  auto m = static_cast<class LooperCallback *>(arg);
  m->handleEvent(fd, event, arg);
}

void wakeUpEv(int fd, short event, void *arg) {
  fprintf(stderr, "wakeUpEv called with fd: %d, event: %d, arg: %p\n", (int)fd, event, arg);
}

Looper::Looper() {
  auto res = pipe(mWakeUpFd);
  if (-1 == res) {
    SLOG(INFO) << "failed to create pipe";
    ::exit(-1);
  }
  FD_ZERO(&mReadfdset);
  FD_SET(mWakeUpFd[0], &mReadfdset);
}

Looper::~Looper() {
  SLOG(INFO) << "~Looper";
  close(mWakeUpFd[0]);
  close(mWakeUpFd[1]);
  for (auto &looperCallback : mLoopCallBacks) {
    close(looperCallback.first);
  }
  mLoopCallBacks.clear();
  for (auto &msg : mMessages) {
    msg.second.handler->handleMessage(msg.second.message);
  }
  mMessages.clear();
}

void Looper::pollOnce(int timeOut) {
  SLOG(INFO) << "pollOnce";
  struct timeval time {
    timeOut, 0
  };

  int max = mWakeUpFd[0] + 1;

  while (!mStop) {
    static int count{0};
    fd_set readFdset = mReadfdset;
    auto res = select(max, &readFdset, nullptr, nullptr, &time);
    SLOG(INFO) << "pollOnce done res = " << res;
    std::error_code ec(errno, std::generic_category());
    if (ec == std::errc::interrupted) {
      SLOG(INFO) << "maybe error : " << ec.message();
      time.tv_sec = 1;
      continue;
    }

    if (res == -1) {
      std::lock_guard<std::mutex> _l(mLock);
      break;
    }

    if (res == 0) {
      SLOG(INFO) << "time out" << std::endl;
      break;
    }

    if (res > 0) {
      SLOG(INFO) << "recv : " << count++ << std::endl;
      for (int i = 0; i < max; ++i) {
        if (FD_ISSET(i, &readFdset) != 0) {
          if (i == mWakeUpFd[0]) {
            // select后必须处理否则会一直置位
            char buf[2];
            read(i, buf, 2);
            SLOG(INFO) << "read wakeup";
            auto now = std::chrono::high_resolution_clock::now();
            std::lock_guard<std::mutex> _l(mLock);
            for (auto it = mMessages.begin(); it != mMessages.end();) {
              if (it->first.time_since_epoch() <= now.time_since_epoch()) {
                it->second.handler->handleMessage(it->second.message);
                it = mMessages.erase(it);
              } else {
                break;
              }
            }
            // SLOG(INFO) << std::chrono::duration_cast<std::chrono::microseconds>(
            //                   mMessages.begin()->first.time_since_epoch())
            //                   .count();
            // SLOG(INFO) << std::chrono::duration_cast<std::chrono::microseconds>(
            //                   now.time_since_epoch())
            //                   .count();
            if (!mMessages.empty()) {
              time.tv_sec = 0;
              time.tv_usec =
                  std::chrono::duration_cast<std::chrono::microseconds>(
                      mMessages.begin()->first.time_since_epoch())
                      .count() -
                  std::chrono::duration_cast<std::chrono::microseconds>(now.time_since_epoch())
                      .count();
              SLOG(INFO) << time.tv_usec << "\n";
            } else {
              time.tv_sec = 1;
              time.tv_usec = 0;
            }
          } else {
            SLOG(INFO) << "message from fd " << i;
            std::lock_guard<std::mutex> _l(mLock);
            mLoopCallBacks[i]->handleEvent(i, Looper::READ, nullptr);
          }
        }
      }
    }
  }
}

void Looper::sendMessage(std::shared_ptr<MessageHandler> handler,
                         std::shared_ptr<Message> message) {
  sendMessageDelay(std::chrono::nanoseconds(0), handler, message);
}

void Looper::sendMessageDelay(std::chrono::nanoseconds uptimeDelay,
                              std::shared_ptr<MessageHandler> handler,
                              std::shared_ptr<Message> message) {
  auto time = std::chrono::high_resolution_clock::now() + uptimeDelay;
  {
    std::lock_guard<std::mutex> _l(mLock);
    mMessages.emplace(time, Invok{handler, message});
  }
  write(mWakeUpFd[1], "1", sizeof("1"));
}

int Looper::addFd(int fd, std::shared_ptr<class LooperCallback> callback, short mask) {
  std::lock_guard<std::mutex> _l(mLock);
  FD_SET(fd, &mReadfdset);
  mLoopCallBacks.emplace(fd, callback);
  write(mWakeUpFd[1], "1", sizeof("1"));
  return 1;
}

int Looper::removeFd(int fd) {
  std::lock_guard<std::mutex> _l(mLock);
  FD_CLR(fd, &mReadfdset);
  mLoopCallBacks.erase(fd);
  write(mWakeUpFd[1], "1", sizeof("1"));
  return 1;
}

void Looper::exit() {
  mStop.store(true);
  write(mWakeUpFd[1], "1", sizeof("1"));
}
