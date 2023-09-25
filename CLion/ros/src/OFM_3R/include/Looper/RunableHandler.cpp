/*
 * @Author: yao.xie 1595341200@qq.com
 * @Date: 2023-07-31 14:10:01
 * @LastEditors: yao.xie 1595341200@qq.com
 * @LastEditTime: 2023-07-31 15:53:05
 * @FilePath: /ros_learning/src/OFM_3R/include/Looper/RunableHandler.cpp
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
#include "RunableHandler.h"

RunableHandler::RunableHandler(std::function<void(std::shared_ptr<Message> msg)> func)
    : mFunc(func) {
    mLooper = std::make_shared<Looper>();
}

void RunableHandler::onHandleMessage(std::shared_ptr<Message> msg) {
    mFunc(msg);
}

bool RunableHandler::onThreadLoop() {
    mLooper->run();
    return false;
}
std::shared_ptr<Looper> RunableHandler::getLooper() {
    return mLooper;
}

std::shared_ptr<RunableHandler> RunableHandler::shared_from_this() {
    return std::dynamic_pointer_cast<RunableHandler>(MessageHandler::shared_from_this());
}

void RunableHandler::sendMessage(std::shared_ptr<Message> message) {
    mLooper->sendMessage(shared_from_this(), message);
}

void RunableHandler::sendMessageDelay(std::shared_ptr<Message> message,
                                      const std::chrono::milliseconds &delay) {
    mLooper->sendMessageDelay(shared_from_this(), message, delay);
}

void RunableHandler::requestQuitAndWait() {
    mLooper->stop();
    join();
}
