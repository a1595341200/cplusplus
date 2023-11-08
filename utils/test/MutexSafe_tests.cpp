#include <Log.h>
#include <MutexSafe.h>

#include <thread>

#include <gtest/gtest.h>
TEST(mutexafe, test) {
  MutexSafe<int> m(std::make_shared<int>(1));
  std::lock_guard<MutexSafe<int>> lock(m);
  SLOG(INFO) << *m.acquire(lock) << "\n";
}

TEST(mutexsafe, mutithread) {
  MutexSafe<int> m(std::make_shared<int>(0));
  std::vector<std::thread> threads;
  for (int i = 0; i < 10; ++i) {
    threads.emplace_back(
        [](MutexSafe<int>& m) {
          std::lock_guard<MutexSafe<int>> lock(m);
          SLOG(INFO) << (*m.acquire(lock))++ << "\n";
        },
        std ::ref(m));
  }
  for (auto& t : threads) {
    t.join();
  }
}
