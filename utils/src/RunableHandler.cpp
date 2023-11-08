/*
 * @Author: 谢瑶
 * @Date: 2023-10-27 16:36:54
 * @LastEditors: 谢瑶
 * @LastEditTime: 2023-10-27 16:39:32
 * @FilePath: /cplusplus/utils/src/RunableHandler.cpp
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置:
 * https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
//
// Created by 谢瑶 on 2022/11/3.
//
#define TAG "RunableHandler"
#include <Log.h>
#include <RunableHandler.h>

#include <iostream>

RunableHandler::RunableHandler(std::function<void(const std::shared_ptr<Message>& msg)> handler,
                               std::chrono::milliseconds inteval)
    : Thread(inteval), mHandler(std::move(handler)) {
  mLooper = std::make_shared<Looper>();
}

void RunableHandler::handleMessage(std::shared_ptr<Message> message) {
  if (mHandler) {
    mHandler(message);
  }
}

void RunableHandler::requestExitAndWait() {
  mLooper->exit();
  SLOG(INFO) << "looper exit";
  Thread::requestExitAndWait();
  SLOG(INFO) << "Runable exit";
}

bool RunableHandler::threadLoop() {
  SLOG(INFO) << "threadLoop";
  mLooper->pollOnce(1);
  return true;
}

std::shared_ptr<Looper>& RunableHandler::getLooer() {
  return mLooper;
}

RunableHandler::~RunableHandler() noexcept {
  requestExitAndWait();
}
