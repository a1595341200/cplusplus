//
// Created by 谢瑶 on 2022/11/3.
//

#ifndef DEV_RUNNABLEHAANDLER_H
#define DEV_RUNNABLEHAANDLER_H

#include "Looper.h"
#include "Thread.h"
#include <functional>

class RunableHandler : public MessageHandler, public Thread {
public:
	RunableHandler(std::function<void(const std::shared_ptr<Message> &msg)>, std::chrono::milliseconds inteval);
	bool threadLoop() override;
	void handleMessage(const std::shared_ptr<Message> &message) override;
	std::shared_ptr<Looper> &getLooer();
	void requestExitAndWait();
private:
	std::shared_ptr<Looper> mLooper;
	std::function<void(const std::shared_ptr<Message> &msg)> mHndler;
};

#endif //DEV_RUNNABLEHAANDLER_H
