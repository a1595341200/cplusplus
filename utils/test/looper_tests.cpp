/*
 * @Author: yao.xie 1595341200@qq.com
 * @Date: 2023-10-27 17:29:23
 * @LastEditors: yao.xie 1595341200@qq.com
 * @LastEditTime: 2023-10-27 17:33:46
 * @FilePath: /cplusplus/utils/test/looper_tests.cpp
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置:
 * https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
#define TAG "LooperTest"
#include <Log.h>
#include <Looper.h>
#include <Timer.h>
#include <Utils.h>
#include <event.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <unistd.h>

#include <iostream>
#include <thread>

#include <gmock/gmock.h>
#include <gtest/gtest.h>

using namespace std;
int flags = false;

class M : public MessageHandler {
 public:
  MOCK_METHOD1(handleMessage, void(const std::shared_ptr<Message> &));
};

class FdHandler : public LooperCallback {
 public:
  int handleEvent(int fd, short events, void *data) override {
    if ((events & EV_READ) == EV_READ) {
      fprintf(stderr, "fifo_read called with fd: %d, event: %d, arg: %p\n", (int)fd, events, data);
      char buf[1024] = {};
      int len;
      len = read(fd, buf, sizeof(buf) - 1);
      buf[len] = '\0';
      SLOG(INFO) << "EV_READ " << buf;
    }
    SLOG(INFO) << events;
    return 1;
  }
};

TEST(Looper, LooperTest) {
  Utils::Timer timer;
  unlink("./testf");
  auto ret = mkfifo("./testf", S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH | S_IWOTH);
  perror("mkfifo");
  auto fd = open("./testf", O_RDWR | O_NONBLOCK);
  if (fd == -1) {
    perror("open");
    exit(1);
  }

  fprintf(stderr, "Write data to \"testf\"\n");
  SLOG(INFO) << fd;
  std::shared_ptr<Looper> l = std::make_shared<Looper>();
  std::shared_ptr<M> handler = std::make_shared<M>();
  EXPECT_CALL(*handler.get(), handleMessage(testing::_)).Times(testing::AtLeast(100));
  bool stop = false;
  std::thread t([&]() {
    while (!stop) {
      l->pollOnce();
    }
  });
  for (int i = 0; i < 100; i++) {
    l->sendMessage(handler, std::make_shared<Message>(2));
  }
  l->sendMessageDelay(std::chrono::duration_cast<std::chrono::nanoseconds>(1s), handler,
                      std::make_shared<Message>(3425));
  std::shared_ptr<LooperCallback> fda = std::make_shared<FdHandler>();
  l->addFd(fd, fda, EV_READ | EV_PERSIST);
  sleep(2);
  l->removeFd(fd);
  unlink("testf");
  stop = true;
  l->exit();
  t.join();
}
