/*
 * @Author: yao.xie 1595341200@qq.com
 * @Date: 2023-07-31 09:50:37
 * @LastEditors: yao.xie 1595341200@qq.com
 * @LastEditTime: 2023-07-31 17:01:18
 * @FilePath: /ros_learning/src/OFM_3R/include/Looper/Looper.cpp
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
#define TAG "Looper"
#include "Looper.h"
#include <algorithm>
#include <iostream>
#include "utils/Log.h"

using namespace std::chrono_literals;

void Looper::sendMessage(std::shared_ptr<MessageHandler> handler,
                         std::shared_ptr<Message> message) {
    sendMessageInternal(handler, message, std::chrono::steady_clock::now());
}

void Looper::sendMessageDelay(std::shared_ptr<MessageHandler> handler,
                              std::shared_ptr<Message> message,
                              const std::chrono::milliseconds &delay) {
    sendMessageInternal(handler, message, std::chrono::steady_clock::now() + delay);
}

void Looper::removeMessage(std::shared_ptr<Message> message) {
    bool isBegin{false};
    {
        std::unique_lock<std::mutex> _l(mLock);
        for (auto it = mEvents.begin(); it != mEvents.end();) {
            if (it->message->_waht == message->_waht) {
                if (it == mEvents.begin()) {
                    isBegin = true;
                }
                it = mEvents.erase(it);
                ALOG(INFO) << "remove messgae : " << message->_waht;
            } else {
                it++;
            }
        }
    }

    if (isBegin) {
        mCv.notify_one();
    }
}

void Looper::run() {
    isRuning.store(true);
    process();
}

void Looper::process() {
    while (isRuning.load()) {
        std::unique_lock<std::mutex> _l(mLock);
        if (mWaitTime == 0ms) {
            ALOG(INFO) << "mCv.wait ";
            mCv.wait(_l, [this]() { return !isRuning || !mEvents.empty(); });
            ALOG(INFO) << "mCv.wait done";
        } else {
            ALOG(INFO) << "mCv.wait_for " << mWaitTime.count();
            mCv.wait_for(_l, mWaitTime, [this]() {
                return (!isRuning || !mEvents.empty()) &&
                       std::chrono::steady_clock::now() >= mEvents.front().time;
            });
            ALOG(INFO) << "mCv.wait_for done";
        }

        while (!mEvents.empty()) {
            Event &ev = mEvents.front();
            if (std::chrono::steady_clock::now() > ev.time) {
                ev.handler.lock()->onHandleMessage(ev.message);
                mEvents.pop_front();
            } else {
                break;
            }
        }

        if (!mEvents.empty()) {
            //如果剩余时间的时间小于当前时间
            if (mEvents.front().time >= std::chrono::steady_clock::now()) {
                mWaitTime = std::chrono::duration_cast<std::chrono::milliseconds>(
                    mEvents.front().time - std::chrono::steady_clock::now());
            }
        } else {
            mWaitTime = 0ms;
        }
    }
}
void Looper::sendMessageInternal(std::shared_ptr<MessageHandler> handler,
                                 std::shared_ptr<Message> message,
                                 const std::chrono::time_point<std::chrono::steady_clock> &delay) {
    {
        std::unique_lock<std::mutex> _l(mLock);
        mEvents.emplace_back(Event{handler, message, delay});
        std::sort(mEvents.begin(), mEvents.end(),
                  [](const Event &ev1, const Event &ev2) { return ev1.time < ev2.time; });
    }

    mCv.notify_one();
}

Looper::~Looper() {
    ALOG(INFO) << "~Looper ";
    stop();
}

void Looper::stop() {
    isRuning.store(false);
    mCv.notify_all();
    ALOG(INFO) << "Looper::stop() : " << mEvents.size();
}
