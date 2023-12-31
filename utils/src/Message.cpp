/*
 * @Author: error: error: git config user.name & please set dead value or install git && error: git
 * config user.email & please set dead value or install git & please set dead value or install git
 * @Date: 2023-11-10 17:48:30
 * @LastEditors: error: error: git config user.name & please set dead value or install git && error:
 * git config user.email & please set dead value or install git & please set dead value or install
 * git git config user.email & please set dead value or install git & please set dead value or
 * install git
 * @LastEditTime: 2023-11-10 17:50:45
 * @FilePath: /cplusplus/utils/src/Message.cpp
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置:
 * https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
//
// Created by 谢瑶 on 2022/10/31.
//
#define TAG "Message"
#include "Message.h"

#include "Looper.h"

void Message::send() {
  mLooper->sendMessage(mHandler, shared_from_this());
}

void Message::sendDelay(std::chrono::nanoseconds uptimeDelay) {
  mLooper->sendMessageDelay(uptimeDelay, mHandler, shared_from_this());
}

Message::~Message() = default;
