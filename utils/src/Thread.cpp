/*
 * @Author: 谢瑶
 * @Date: 2023-10-27 16:37:13
 * @LastEditors: yao.xie 1595341200@qq.com
 * @LastEditTime: 2023-10-27 17:19:25
 * @FilePath: /cplusplus/utils/src/Thread.cpp
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置:
 * https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
//
// Created by 谢瑶 on 2022/11/3.
//
#define TAG "Thread"
#include "Thread.h"

#include <Log.h>

#include <iostream>

bool Thread::run() {
  SLOG(INFO) << "run";
  mThread = std::make_unique<std::thread>(&Thread::_threadLoop, this);
  return mThread ? true : false;
}

void Thread::_threadLoop() {
  SLOG(INFO) << "_threadLoop";
  while (!mQuit.load()) {
    mStop.store(!threadLoop());
    std::this_thread::sleep_for(mInteval);
  }
  SLOG(INFO) << "_threadLoop done";
}

Thread::~Thread() {
  SLOG(INFO) << "~Thread";
  if (mThread && mThread->joinable()) {
    SLOG(INFO) << "joinable";
    mThread->join();
  }
}

void Thread::requestExit() {
  mQuit.store(true);
}

void Thread::requestExitAndWait() {
  mQuit.store(true);
  if (mThread->joinable()) {
    mThread->join();
  }
}

void Thread::join() {
  SLOG(INFO) << "join";
  if (mThread->joinable()) {
    mThread->join();
  }
}
