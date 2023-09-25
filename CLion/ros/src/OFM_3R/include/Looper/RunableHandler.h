/*
 * @Author: yao.xie 1595341200@qq.com
 * @Date: 2023-07-31 13:55:17
 * @LastEditors: yao.xie 1595341200@qq.com
 * @LastEditTime: 2023-07-31 15:50:30
 * @FilePath: /ros_learning/src/OFM_3R/include/Looper/RunableHandler.h
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
#ifndef RUNABLEHANDLER_H
#define RUNABLEHANDLER_H
#include "MessageHandler.h"
#include "ThreadLoop.h"
#include "Looper.h"

class RunableHandler : public MessageHandler, public ThreadLoop {
public:
    RunableHandler(std::function<void(std::shared_ptr<Message> msg)> func);
    void onHandleMessage(std::shared_ptr<Message> msg) override;

    bool onThreadLoop() override;
    std::shared_ptr<Looper> getLooper();
    void sendMessage(std::shared_ptr<Message> message);
    void sendMessageDelay(std::shared_ptr<Message> message, const std::chrono::milliseconds &delay);
    void requestQuitAndWait();

private:
    std::shared_ptr<Looper> mLooper;
    std::function<void(std::shared_ptr<Message> msg)> mFunc;
    std::shared_ptr<RunableHandler> shared_from_this();
};

#endif /* RUNABLEHANDLER_H */
