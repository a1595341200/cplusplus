/*
 * @Author: error: error: git config user.name & please set dead value or install git && error: git
 * config user.email & please set dead value or install git & please set dead value or install git
 * @Date: 2023-11-09 15:05:06
 * @LastEditors: error: error: git config user.name & please set dead value or install git && error:
 * git config user.email & please set dead value or install git & please set dead value or install
 * git
 * @LastEditTime: 2023-11-09 15:05:06
 * @FilePath: /cplusplus/utils/include/RunableHandler.h
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置:
 * https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
//
// Created by 谢瑶 on 2022/11/3.
//

#ifndef DEV_RUNABLEHANDLER_H
#define DEV_RUNABLEHANDLER_H

#include <functional>

#include "Looper.h"
#include "Thread.h"

class RunableHandler : public MessageHandler, public Thread {
 public:
  RunableHandler(std::function<void(const std::shared_ptr<Message> &msg)>,
                 std::chrono::milliseconds inteval);
  ~RunableHandler();
  bool threadLoop() override;
  void handleMessage(const std::shared_ptr<Message> &message) override;
  std::shared_ptr<Looper> &getLooer();
  void requestExitAndWait();

 private:
  std::shared_ptr<Looper> mLooper;
  std::function<void(const std::shared_ptr<Message> &msg)> mHandler;
};

#endif  // DEV_RUNABLEHANDLER_H
