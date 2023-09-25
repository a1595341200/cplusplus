/*
 * @Author: yao.xie 1595341200@qq.com
 * @Date: 2023-07-31 09:45:44
 * @LastEditors: yao.xie 1595341200@qq.com
 * @LastEditTime: 2023-07-31 15:59:00
 * @FilePath: /ros_learning/src/OFM_3R/include/Looper/Looper.h
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
#ifndef LOOPER_H
#define LOOPER_H
#include "MessageHandler.h"
#include <deque>
#include <mutex>
#include <condition_variable>
#include <atomic>

struct Event {
    std::weak_ptr<MessageHandler> handler;
    std::shared_ptr<Message> message;
    std::chrono::time_point<std::chrono::steady_clock> time;
};

class Looper : public std::enable_shared_from_this<Looper> {
public:
    virtual ~Looper();
    void sendMessage(std::shared_ptr<MessageHandler> handler, std::shared_ptr<Message> message);
    void sendMessageDelay(std::shared_ptr<MessageHandler> handler, std::shared_ptr<Message> message,
                          const std::chrono::milliseconds &delay);
    void removeMessage(std::shared_ptr<Message> message);
    void run();
    void stop();

private:
    void process();
    void sendMessageInternal(std::shared_ptr<MessageHandler> handler,
                             std::shared_ptr<Message> message,
                             const std::chrono::time_point<std::chrono::steady_clock> &delay);
    std::deque<Event> mEvents;
    std::mutex mLock;
    std::condition_variable mCv;
    std::atomic_bool isRuning{false};
    std::chrono::milliseconds mWaitTime{std::chrono::milliseconds(0)};
};

#endif /* LOOPER_H */
