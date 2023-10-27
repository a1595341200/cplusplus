//
// Created by 谢瑶 on 2022/10/31.
//
#define TAG "Message"
#include "Message.h"

void Message::send() {
	mLooper->sendMessage(mHandler, shared_from_this());
}

void Message::sendDelay(std::chrono::nanoseconds uptimeDelay) {
	mLooper->sendMessageDelay(uptimeDelay, mHandler, shared_from_this());
}
