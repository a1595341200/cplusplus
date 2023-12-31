//
// Created by 谢瑶 on 2022/10/31.
//
#define TAG "Looper"
#include "Looper.h"

#include <Log.h>
#include <unistd.h>

#include <iostream>
#include <thread>

void wakeUpEv(int fd, short event, void *arg) {
  fprintf(stderr, "wakeUpEv called with fd: %d, event: %d, arg: %p\n", (int)fd, event, arg);
}

Looper::Looper() {
  auto res = pipe(mWakeUpFd);
  if (-1 == res) {
    SLOG(INFO) << "failed to create pipe";
    ::exit(-1);
  }

  mEpollFd = epoll_create1(0);
  if (mEpollFd == -1) {
    perror("epoll_create1");
    ::exit(-1);
  }
  mEvents[mWakeUpFd[0]] = Event();
  mEvents[mWakeUpFd[0]].event.events = EPOLLIN | EPOLLET;
  mEvents[mWakeUpFd[0]].fd = mWakeUpFd[0];
  mEvents[mWakeUpFd[0]].event.data.ptr = &mEvents[mWakeUpFd[0]];
  mEvents[mWakeUpFd[0]].callback = [this](uint8_t event) {
    std::cout << "callback " << this->mWakeUpFd[0] << "event " << (int)event << std::endl;
  };
  if (epoll_ctl(mEpollFd, EPOLL_CTL_ADD, mWakeUpFd[0], &mEvents[mWakeUpFd[0]].event) == -1) {
    SLOG(INFO) << "failed to add wakeUpFd";
    perror("epoll_ctl");
    ::exit(-1);
  }
}

Looper::~Looper() {
  SLOG(INFO) << "~Looper";
  close(mWakeUpFd[0]);
  close(mWakeUpFd[1]);
  for (auto &event : mEvents) {
    close(event.first);
  }
  for (auto &msg : mMessages) {
    msg.second.handler->handleMessage(msg.second.message);
  }
  mMessages.clear();
}

void Looper::pollOnce(int timeOut) {
  SLOG(INFO) << "pollOnce";
  static int timeout{1000};
  timeout = timeOut;
  int max = mWakeUpFd[0] + 1;

  while (!mStop) {
    static int count{0};
    int res = epoll_wait(mEpollFd, events, MAX_EVENTS, timeout);

    std::error_code ec(errno, std::generic_category());
    if (ec == std::errc::interrupted) {
      SLOG(INFO) << "maybe error : " << ec.message();
      timeout = 1000;
      continue;
    }

    if (res == -1) {
      std::lock_guard<std::mutex> _l(mLock);
      break;
    }

    if (res == 0 && mMessages.empty()) {
      SLOG(INFO) << "time out" << std::endl;
      break;
    }

    if (res == 0) {
      SLOG(INFO) << "handle message";
    }

    if (res >= 0) {
      SLOG(INFO) << "recv : " << count++ << std::endl;
      for (int i = 0; i < res; i++) {
        Event *event = (Event *)events[i].data.ptr;
        if (event->fd == mWakeUpFd[0]) {
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
          if (!mMessages.empty()) {
            timeout = std::chrono::duration_cast<std::chrono::milliseconds>(
                          mMessages.begin()->first.time_since_epoch())
                          .count() -
                      std::chrono::duration_cast<std::chrono::milliseconds>(now.time_since_epoch())
                          .count();
            SLOG(INFO) << timeout << "\n";
          } else {
            timeout = 1000;
          }
        } else {
          SLOG(INFO) << "message from fd " << event->fd;
          std::lock_guard<std::mutex> _l(mLock);
          event->callback(events[i].events);
        }
      }
    }
  }
}

void Looper::sendMessage(const std::shared_ptr<MessageHandler> &handler,
                         const std::shared_ptr<Message> &message) {
  sendMessageDelay(std::chrono::nanoseconds(0), handler, message);
}

void Looper::sendMessageDelay(std::chrono::nanoseconds uptimeDelay,
                              const std::shared_ptr<MessageHandler> &handler,
                              const std::shared_ptr<Message> &message) {
  auto time = std::chrono::high_resolution_clock::now() + uptimeDelay;
  {
    std::lock_guard<std::mutex> _l(mLock);
    mMessages.emplace(time, Invok{handler, message});
  }
  write(mWakeUpFd[1], "1", sizeof("1"));
}

int Looper::addFd(int fd, std::shared_ptr<class LooperCallback> callback, short mask) {
  std::lock_guard<std::mutex> _l(mLock);
  SLOG(INFO) << "add fd " << fd;
  mEvents[fd] = Event();
  mEvents[fd].fd = fd;
  mEvents[fd].event.events = EPOLLIN;
  mEvents[fd].event.data.ptr = &mEvents[fd];
  mEvents[fd].callback = [fd, callback](uint8_t event) {
    callback->handleEvent(fd, event, nullptr);
  };
  if (epoll_ctl(mEpollFd, EPOLL_CTL_ADD, fd, &mEvents[fd].event) == -1) {
    perror("epoll_ctl");
    SLOG(INFO) << "failed to removeFd";
    ::exit(-1);
  }
  write(mWakeUpFd[1], "1", sizeof("1"));
  return 1;
}

int Looper::removeFd(int fd) {
  std::lock_guard<std::mutex> _l(mLock);
  SLOG(INFO) << "removeFd " << fd;
  if (epoll_ctl(mEpollFd, EPOLL_CTL_DEL, fd, nullptr) == -1) {
    perror("epoll_ctl");
    SLOG(INFO) << "failed to removeFd";
    ::exit(-1);
  }
  mEvents.erase(fd);
  write(mWakeUpFd[1], "1", sizeof("1"));
  return 1;
}

void Looper::exit() {
  mStop.store(true);
  write(mWakeUpFd[1], "1", sizeof("1"));
}
