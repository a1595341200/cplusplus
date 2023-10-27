//
// Created by 谢瑶 on 2022/10/31.
//
#define TAG "Looper"
#include "Looper.h"
#include <iostream>
#include <functional>
#include <unistd.h>
#include <cassert>
#include <Log.h>
#include <thread>

void messageCallback(int fd, short event, void *arg) {
	SLOG(INFO) << "messageCallback";
	auto m = static_cast<Invok *>(arg);
	m->handler->handleMessage(m->message);
	std::lock_guard<std::mutex> _l(m->mLooper->mLock);
	if (m->mLooper) {
		m->mLooper->mMessages.erase(m->index);
	}
}

void LooperCallback(int fd, short event, void *arg) {
	auto m = static_cast<class LooperCallback *>(arg);
	m->handleEvent(fd, event, arg);
}

void wakeUpEv(int fd, short event, void *arg) {
	fprintf(stderr, "wakeUpEv called with fd: %d, event: %d, arg: %p\n",
			(int) fd, event, arg);
}

Looper::Looper() {
//    event_enable_debug_logging(EVENT_DBG_ALL);
	base = event_base_new();
	auto res = pipe(fds);
	if (-1 == res) {
		SLOG(INFO) << "failed to create pipe";
		::exit(-1);
	}

	event_assign(&mWakeUp, base, fds[0], EV_READ | EV_PERSIST, wakeUpEv, event_self_cbarg());
	event_add(&mWakeUp, nullptr);
}

Looper::~Looper() {
	for (auto &e : events) {
		event_del(e.second);
	}
	event_del(&mWakeUp);
	event_base_free(base);
	libevent_global_shutdown();
}

void Looper::pollOnce(int timeOut) {
	Invok::mLooper = shared_from_this();
	 SLOG(INFO) << "pollOnce";
	struct timeval time{timeOut, 0};
	event_base_loopexit(base, &time);
	auto res = event_base_dispatch(base);
	 SLOG(INFO) << "pollOnce done res = " << res;
}

void Looper::sendMessage(const std::shared_ptr<MessageHandler> &handler, const std::shared_ptr<Message> &message) {
	 SLOG(INFO) << "Looper::sendMessage " << message->what;
	sendMessageDelay(std::chrono::nanoseconds(0), handler, message);
}

void Looper::sendMessageDelay(std::chrono::nanoseconds uptimeDelay, const std::shared_ptr<MessageHandler> &handler,
							  const std::shared_ptr<Message> &message) {
	struct timeval tv{};
	tv.tv_sec = uptimeDelay.count() / 1000000000;
	tv.tv_usec = 0;
	struct event *ev = nullptr;
	{
		std::lock_guard<std::mutex> _l(mLock);
		size_t l = mMessages.size();
		mMessages.emplace(l, Invok{handler, message, l});
		ev = event_new(base, -1, 0, messageCallback, &mMessages[l]);
	}
	event_add(ev, &tv);
	 SLOG(INFO) << "event_ad  " << &ev;
}

int Looper::addEvent(struct event *ev, const struct timeval *timeout) {
	int res = event_add(ev, nullptr);
	assert(res == 0);
	return 1;
}

struct event *
Looper::newEvent(struct event_base *base, evutil_socket_t fd, short mask, event_callback_fn func, void *arg) {
	struct event *ev = event_new(base, fd, mask, func, arg);
	assert(ev != nullptr);
	return ev;
}

int Looper::addFd(int fd, std::shared_ptr<class LooperCallback> &callback, short mask) {
	auto ev = newEvent(base, fd, mask, LooperCallback, callback.get());
	events[fd] = ev;
	addEvent(ev, nullptr);
	 SLOG(INFO) << "add event";
	return 1;
}

int Looper::removeFd(int fd) {
	 SLOG(INFO) << "remove";
	delEvent(events[fd]);
	events.erase(fd);
	close(fd);
	return 1;
}

void Looper::delEvent(struct event *ev) {
	int res = event_del(ev);
	event_free(ev);
	assert(res == 0);
}

void Looper::exit() {
	event_base_loopbreak(base);
	write(fds[1], "1", sizeof("1"));
}
