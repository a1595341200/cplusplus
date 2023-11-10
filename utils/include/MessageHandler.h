/*
 * @Author: error: error: git config user.name & please set dead value or install git && error: git
 * config user.email & please set dead value or install git & please set dead value or install git
 * @Date: 2023-11-10 17:37:41
 * @LastEditors: error: error: git config user.name & please set dead value or install git && error: git config user.email & please set dead value or install git & please set dead value or install git
 * git config user.email & please set dead value or install git & please set dead value or install
 * git git config user.email & please set dead value or install git & please set dead value or
 * install git git config user.email & please set dead value or install git & please set dead value
 * or install git git config user.email & please set dead value or install git & please set dead
 * value or install git
 * @LastEditTime: 2023-11-10 17:49:52
 * @FilePath: /cplusplus/utils/include/MessageHandler.h
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置:
 * https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
#pragma once
#include <memory>

#include "Message.h"

class MessageHandler : virtual public std::enable_shared_from_this<MessageHandler> {
 public:
  virtual ~MessageHandler() = default;
  virtual void handleMessage(const std::shared_ptr<Message>& message) = 0;
};
