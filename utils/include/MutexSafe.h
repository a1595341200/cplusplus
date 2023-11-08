#pragma once
#include <memory>
#include <mutex>

template <typename T>
class MutexSafe {
 public:
  MutexSafe(std::shared_ptr<T> t) : mSource(t){};
  void lock() {
    mMutex.lock();
  }

  void unlock() {
    mMutex.unlock();
  }

  void try_lock() {
    mMutex.try_lock();
  }

  std::shared_ptr<T>& acquire(std::lock_guard<MutexSafe<T>>& lk) {
    return mSource;
  }

 private:
  std::shared_ptr<T> mSource;
  std::mutex mMutex;
};
