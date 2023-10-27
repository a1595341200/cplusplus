/*
 * @Author: 谢瑶
 * @Date: 2023-10-27 17:07:09
 * @LastEditors: yao.xie 1595341200@qq.com
 * @LastEditTime: 2023-10-27 17:17:22
 * @FilePath: /cplusplus/utils/test/engine_tests.cpp
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置:
 * https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
#include <Engine.h>
#include <RunableHandler.h>

#include <memory>

#include <gtest/gtest.h>

#include "E.h"
using namespace std;

TEST(Engine, 2) {
  using namespace chrono_literals;
  auto handle = std::make_shared<RunableHandler>(nullptr, 1000ms);
  std::shared_ptr<E> p(new E("test", handle->getLooer()));
  handle->run();
  std::this_thread::sleep_for(1s);
  p->start();
  std::this_thread::sleep_for(1s);
  SLOG(INFO) << p->curState()->toString() << std::endl;
  int i = 0;
  while (i++ < 10) {
    std::string r = p->curState()->toString();
    SLOG(INFO) << r;
    if (r == "A" || r == "B") {
      handle->getLooer()->sendMessageDelay(1s, p, std::shared_ptr<Message>(new Message(0)));
      std::this_thread::sleep_for(300ms);
    }
  }
  handle->requestExitAndWait();
  handle->join();
}
