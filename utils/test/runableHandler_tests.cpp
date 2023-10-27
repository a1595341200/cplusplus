/*
 * @Author: yao.xie 1595341200@qq.com
 * @Date: 2023-10-27 17:42:53
 * @LastEditors: yao.xie 1595341200@qq.com
 * @LastEditTime: 2023-10-27 17:48:27
 * @FilePath: /cplusplus/utils/test/runableHandler_tests.cpp
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置:
 * https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
#include <Log.h>
#include <RunableHandler.h>

#include <iostream>

#include <gtest/gtest.h>
using namespace std;

TEST(RunableHandler, 1) {
  std::shared_ptr<RunableHandler> b = std::make_shared<RunableHandler>(
      [](const std::shared_ptr<Message> &msg) {
        SLOG(INFO) << "message what : " << msg->what << std::endl;
      },
      1000ms);
  b->getLooer()->sendMessage(b, std::make_shared<Message>(0));
  b->run();
  std::this_thread::sleep_for(2s);
  b->requestExitAndWait();
}
