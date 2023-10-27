//
// Created by 谢瑶 on 2022/10/31.
//

#ifndef DEV_MESSAGE_H
#define DEV_MESSAGE_H
#include <memory>
#include "Looper.h"
#include <chrono>

class Looper;

class MessageHandler;

class Message : public std::enable_shared_from_this<Message> {
public:
	explicit Message(int _w) : what(_w) {}

	Message(const std::shared_ptr<Looper> &_l, const std::shared_ptr<MessageHandler> &_h, int _w)
		: what(_w), mLooper(_l), mHandler(_h) {}

	~Message() = default;
	void send();
	void sendDelay(std::chrono::nanoseconds uptimeDelay);
	int what;
private:
	std::shared_ptr<Looper> mLooper;
	std::shared_ptr<MessageHandler> mHandler;
};

#endif //DEV_MESSAGE_H
