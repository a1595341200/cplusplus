/*
 * @Author: yao.xie 1595341200@qq.com
 * @Date: 2023-08-01 09:44:09
 * @LastEditors: yao.xie 1595341200@qq.com
 * @LastEditTime: 2023-08-01 11:45:05
 * @FilePath: /ros_learning/src/OFM_3R/include/utils/ThreadPool.cpp
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
#define TAG "ThreadPool"
#include "ThreadPool.h"
#include "Log.h"
#include <algorithm>

ThreadPool::ThreadPool(size_t size) : mSize(size) {
}

void ThreadPool::init() {
	auto f = [this] {
		while (!isStop) {
			Task task;

			{
				std::unique_lock<std::mutex> _l(mLock);
				mCv.wait(_l, [this]() { return isStop || !mTasks.empty(); });

				if (isStop) {
					break;
				}
				task = std::move(mTasks.front());
				mTasks.pop();
			}

			task();
			ALOG(INFO) << std::this_thread::get_id();
		}
		ALOG(INFO) << "exit";
	};
	for (size_t i = 0; i < mSize; i++) {
		mThreads.emplace_back(f);
	}
}

ThreadPool::~ThreadPool() {
	{
		std::unique_lock<std::mutex> _l(mLock);
		isStop.store(true);
	}
	mCv.notify_all();
	for (auto &thread : mThreads) {
		if (thread.joinable()) {
			thread.join();
		}
		ALOG(INFO) << thread.get_id();
	}
	while (!mTasks.empty()) {
		mTasks.pop();
	}
}
