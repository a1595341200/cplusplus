//
// Created by 谢瑶 on 2022/11/3.
//

#ifndef DEV_THREAD_H
#define DEV_THREAD_H

#include <thread>
#include <memory>
#include <atomic>
#include <mutex>
#include <condition_variable>

class Thread {
public:
	explicit Thread(std::chrono::milliseconds inteval) : mInteval(inteval) {}

	virtual bool threadLoop() = 0;
	virtual ~Thread();
	bool run();
	void join();
	virtual void requestExit();
	virtual void requestExitAndWait();

private:
	void _threadLoop();
	std::unique_ptr<std::thread> mThread;
	std::atomic_bool mStop{false};
	std::atomic_bool mQuit{false};
	std::chrono::milliseconds mInteval;
};

#endif // DEV_THREAD_H
