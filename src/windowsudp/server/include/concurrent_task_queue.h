
#pragma once
#include <atomic>
#include <condition_variable>
#include <functional>
#include <list>
#include <memory>
#include <mutex>
#include <queue>
#include <string>
#include <thread>
#include <vector>

#include "concurrentqueue.h"

class ConcurrentTaskQueue {
 public:
  ConcurrentTaskQueue(size_t threadNum, const std::string &name);
  void runTaskInQueue(const std::function<void()> &task);
  void runTaskInQueue(std::function<void()> &&task);

  void stop();
  ~ConcurrentTaskQueue();
  std::string getName() const {
    return queueName_;
  };
  size_t getTaskCount();

 private:
  size_t queueCount_;
  std::string queueName_;

  //   moodycamel::ConcurrentQueue<std::function<void()>> taskQueue_;

  std::queue<std::function<void()>> taskQueue_;
  std::vector<std::thread> threads_;

  std::mutex taskMutex_;
  std::condition_variable taskCond_;
  std::atomic_bool stop_;
  void queueFunc(int queueNum);
};
