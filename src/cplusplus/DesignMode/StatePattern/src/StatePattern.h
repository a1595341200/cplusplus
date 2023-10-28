//
// Created by 谢瑶 on 2023/3/6.
//

#ifndef DEV_SRC_DESIGNMODE_STATEPATTERN_SRC_STATEPATTERN_H_
#define DEV_SRC_DESIGNMODE_STATEPATTERN_SRC_STATEPATTERN_H_

#include <Log.h>

#include <memory>

class StateContext;

class State {
 public:
  virtual void doWork(std::shared_ptr<StateContext> context) = 0;
  virtual ~State() = default;
};

class ForenoonState : public State {
  void doWork(std::shared_ptr<StateContext> context) override;
};

class AfternoonState : public State {
  void doWork(std::shared_ptr<StateContext> context) override;
};

class StateContext : public std::enable_shared_from_this<StateContext> {
 public:
  StateContext() {
    mState = std::make_shared<ForenoonState>();
  }

  void setTime(int time) {
    mTime = time;
  }

  int getTime() {
    return mTime;
  }

  void setState(std::shared_ptr<State> state) {
    mState = state;
  }

  void doWork() {
    mState->doWork(shared_from_this());
  }

 private:
  std::shared_ptr<State> mState;
  int mTime{9};
};

void ForenoonState::doWork(std::shared_ptr<StateContext> context) {
  if (context->getTime() < 12) {
    SLOG(INFO) << " ForenoonState ";
  } else {
    context->setState(std::make_shared<AfternoonState>());
    context->doWork();
  }
}

void AfternoonState::doWork(std::shared_ptr<StateContext> context) {
  if (context->getTime() < 18) {
    SLOG(INFO) << " AfternoonState ";
  } else {
    SLOG(INFO) << "rest";
  }
}

#endif  // DEV_SRC_DESIGNMODE_STATEPATTERN_SRC_STATEPATTERN_H_
