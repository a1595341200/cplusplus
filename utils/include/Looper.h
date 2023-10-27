//
// Created by 谢瑶 on 2022/10/31.
//

#ifndef DEV_LOOPER_H
#define DEV_LOOPER_H

#include "Message.h"
#include <event.h>
#include <unordered_map>
#include <atomic>
#include <chrono>
#include <memory>
#include <unordered_set>
#include <unordered_map>
#include <mutex>

class Message;

class MessageHandler : virtual public std::enable_shared_from_this<MessageHandler> {
public:
	virtual ~MessageHandler() = default;
	virtual void handleMessage(const std::shared_ptr<Message> &message) = 0;
};

class LooperCallback : public std::enable_shared_from_this<class LooperCallback> {
public:
	virtual ~LooperCallback() = default;
	virtual int handleEvent(int fd, short events, void *data) = 0;
};

class Looper;

struct Invok {
	std::shared_ptr<MessageHandler> handler;
	std::shared_ptr<Message> message;
	size_t index{0};
	inline static std::shared_ptr<Looper> mLooper{nullptr};
};

class Looper : public std::enable_shared_from_this<Looper> {
public:
	virtual ~Looper();

public:
	explicit Looper();
	void pollOnce(int timeOut = 1);
	void sendMessage(const std::shared_ptr<MessageHandler> &handler, const std::shared_ptr<Message> &message);
	void sendMessageDelay(std::chrono::nanoseconds uptimeDelay, const std::shared_ptr<MessageHandler> &handler,
						  const std::shared_ptr<Message> &message);
	int addFd(int fd, std::shared_ptr<class LooperCallback> &callback, short mask);
	int removeFd(int fd);
	void exit();
	std::unordered_map<int, Invok> mMessages;
	std::mutex mLock;
private:
	int addEvent(struct event *ev, const struct timeval *timeout);
	struct event *newEvent(struct event_base *base, evutil_socket_t fd, short mask, event_callback_fn func, void *arg);
	void delEvent(struct event *ev);
	struct event_base *base;
	std::unordered_map<int, struct event *> events;
	std::atomic_bool mStop{false};
	int fds[2];
	struct event mWakeUp;
};

#endif // DEV_LOOPER_H
