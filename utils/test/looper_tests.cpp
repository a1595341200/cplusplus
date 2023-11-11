/*
 * @Author: yao.xie 1595341200@qq.com
 * @Date: 2023-10-27 17:29:23
 * @LastEditors: error: error: git config user.name & please set dead value or install git && error: git config user.email & please set dead value or install git & please set dead value or install git
 * git config user.email & please set dead value or install git & please set dead value or install
 * git git config user.email & please set dead value or install git & please set dead value or
 * install git git config user.email & please set dead value or install git & please set dead value
 * or install git git config user.email & please set dead value or install git & please set dead
 * value or install git git config user.email & please set dead value or install git & please set
 * dead value or install git
 * @LastEditTime: 2023-11-11 17:53:44
 * @FilePath: /cplusplus/utils/test/looper_tests.cpp
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置:
 * https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
#define TAG "LooperTest"
#include <Log.h>
#include <Looper.h>
#include <Timer.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <unistd.h>

#include <filesystem>
#include <iostream>
#include <thread>

#include <gmock/gmock.h>
#include <gtest/gtest.h>

using namespace std;

class MessageTest : public MessageHandler {
 public:
  MOCK_METHOD1(handleMessage, void(const std::shared_ptr<Message> &));
};

class FdHandler : public LooperCallback {
 public:
  int handleEvent(int fd, short events, void *data) override {
    char buf[1024] = {};
    SLOG(INFO) << fd;
    if (events == EPOLLIN) {
      fprintf(stderr, "fifo_read called with fd: %d, event: %d, arg: %p\n", (int)fd, events, data);
      int len;
      len = read(fd, buf, sizeof(buf) - 1);
      buf[len] = '\0';
      SLOG(INFO) << "EV_READ " << buf;
    }
    EXPECT_STREQ("hello", buf);

    SLOG(INFO) << events;
    return 1;
  }
};

TEST(Looper, LooperTest) {
  Utils::Timer timer;
  std::filesystem::path linkpath(std::filesystem::temp_directory_path().append("testf"));
  SLOG(INFO) << linkpath;
  if (std::filesystem::exists(linkpath)) {
    auto res = unlink(linkpath.c_str());
    SLOG(INFO) << res;
  }
  auto ret = mkfifo(linkpath.c_str(), S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH | S_IWOTH);
  if (ret == 0) {
    printf("Created FIFO at pathname: %s\n", linkpath.c_str());
  } else {
    printf("Failed to create FIFO: %s\n", strerror(errno));
  }
  auto fd = open(linkpath.c_str(), O_RDWR | O_NONBLOCK);
  if (fd == -1) {
    perror("open");
    exit(1);
  }

  fprintf(stderr, "Write data to \"testf\"\n");
  SLOG(INFO) << fd;
  std::shared_ptr<Looper> l = std::make_shared<Looper>();
  std::shared_ptr<MessageTest> handler = std::make_shared<MessageTest>();
  EXPECT_CALL(*handler.get(), handleMessage(testing::_)).Times(testing::AtLeast(100));
  bool stop = false;
  std::thread t([&]() {
    while (!stop) {
      l->pollOnce();
    }
  });
  for (int i = 0; i < 100; i++) {
    l->sendMessage(handler, std::make_shared<Message>(i));
  }
  l->sendMessageDelay(std::chrono::duration_cast<std::chrono::nanoseconds>(1s), handler,
                      std::make_shared<Message>(3425));
  std::shared_ptr<LooperCallback> fda = std::make_shared<FdHandler>();
  l->addFd(fd, fda, Looper::READ);
  write(fd, "hello", 5);
  std::this_thread::sleep_for(100ms);
  l->removeFd(fd);
  unlink(linkpath.c_str());
  stop = true;
  l->exit();
  t.join();
}
