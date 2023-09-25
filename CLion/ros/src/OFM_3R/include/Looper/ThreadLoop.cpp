#include "ThreadLoop.h"
ThreadLoop::ThreadLoop() {
    mThead = std::make_unique<Thread>([this]() { threadLoopInternal(); });
}

void ThreadLoop::start() {
    isRuning.store(true);
    mThead->start();
}

void ThreadLoop::threadLoopInternal() {
    while (isRuning.load()) {
        if (!onThreadLoop()) {
            break;
        };
    }
}

void ThreadLoop::join() {
    mThead->join();
}
