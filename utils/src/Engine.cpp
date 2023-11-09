//
// Created by 谢瑶 on 2023/1/5.
//
#define TAG "Engine"

#include "Engine.h"

#include <Log.h>

#include <algorithm>

Engine::Engine(const std::string &name, std::shared_ptr<Looper> looper)
    : mName(name), mLooper(looper) {
  if (!mLooper) {
    SLOG(INFO) << "create looper";
    mLooper = std::make_shared<Looper>();
  }
  mHaltState = std::make_shared<HaltState>();
  mQuitState = std::make_shared<QuitState>();
  addState(mHaltState, nullptr);
  addState(mQuitState, nullptr);
}

Engine::~Engine() {
  if (!mStateMap.empty()) {
    for (auto &it : mStateMap) {
      delete it.second;
    }
  }
  mStateMap.clear();
}

Engine::StateInfo *Engine::addStateIn(std::shared_ptr<IState> state,
                                      std::shared_ptr<IState> parent) {
  StateInfo *pStateInfo{nullptr};
  if (parent) {
    //处理父节点为空的情况
    pStateInfo = mStateMap[parent];
    if (!pStateInfo) {
      pStateInfo = addStateIn(parent, nullptr);
    }
  }
  StateInfo *cStateInfo = mStateMap[state];
  if (!cStateInfo) {
    cStateInfo = new StateInfo();
    mStateMap[state] = cStateInfo;
  }

  cStateInfo->cState = state;
  cStateInfo->pStateInfo = pStateInfo;
  cStateInfo->active = false;
  return cStateInfo;
}

void Engine::addState(std::shared_ptr<IState> state, std::shared_ptr<IState> parent) {
  addStateIn(state, parent);
}

bool Engine::delState(std::shared_ptr<IState> state) {
  StateInfo *sinfo = mStateMap[state];
  //当前状态为根节点，或者已被激活，不可以删除
  if (!sinfo || sinfo->active) {
    SLOG(INFO) << "del state fail" << printState(state);
    return false;
  }
  bool isParent = false;

  for (auto &[state, stateInfo] : mStateMap) {
    if (stateInfo->pStateInfo == sinfo) {
      isParent = true;
    }
  }

  if (isParent) {
    SLOG(INFO) << "del state fail check is parent " << printState(state);
    return false;
  }
  mStateMap.erase(state);
  delete sinfo;
  SLOG(INFO) << "del state " << printState(state);
  return true;
}

void Engine::setInitialState(std::shared_ptr<IState> state) {
  mInitialState = state;
  SLOG(INFO) << "set initialState " << printState(state);
}

void Engine::transitionState(std::shared_ptr<IState> state) {
  mTransitState = state;
  SLOG(INFO) << "set transitionState " << printState(state);
}

void Engine::start() {
  SLOG(INFO) << "start engine " << printState(mInitialState);
  mHaltState->setEngine(this);
  StateInfo *sinfo = mStateMap[mInitialState];

  if (!mInitialState) {
    SLOG(INFO) << "unset initialState";
    return;
  }
  fillStateStack(sinfo, false);
  fillStateVector();
  mLooper->sendMessage(shared_from_this(), std::make_shared<Message>(ENGINE_INIT_CMD));
}

void Engine::stop() {
  SLOG(INFO) << "stop Engine";
  mLooper->sendMessage(shared_from_this(), std::make_shared<Message>(ENGINE_QUIT_CMD));
}

void Engine::handleMessage(const std::shared_ptr<Message> &message) {
  SLOG(INFO) << "handleMessage " << message->what;
  if (!mQuit) {
    if (isCustomMessage(message->what)) {
      onPreHandleMessage(message);
    }
    onHandleMessage(message);
    onHandleTransition(message);

    if (isCustomMessage(message->what)) {
      onPostHandleMessage(message);
    }
  }
}

void Engine::onHandleMessage(std::shared_ptr<Message> msg) {
  //如果init过 或者收到了Quit命令
  SLOG(INFO) << "onHandleMessage " << msg->what;
  if (mInit || msg->what == ENGINE_QUIT_CMD) {
    if (msg->what == ENGINE_QUIT_CMD) {
      //设置为退出状态
      transitionState(mQuitState);
    }
    //开始切换状态
    onHandleMessageTravel(msg);
  } else if (!mInit && msg->what == ENGINE_INIT_CMD) {
    SLOG(INFO) << "init";
    mInit = true;
    invokeEnterMethods(0);
  } else {
    SLOG(INFO) << "onHandleMessage skip";
  }
}

void Engine::onHandleMessageTravel(std::shared_ptr<Message> msg) {
  StateInfo *curStateInfo = mStateVec.back();
  while (!curStateInfo->cState->processMessage(msg)) {
    curStateInfo = curStateInfo->pStateInfo;
    if (!curStateInfo) {
      onUnHandleMessage(msg);
      break;
    }
  }
}

void Engine::onHandleTransition(std::shared_ptr<Message> msg) {
  auto newState = mTransitState;
  if (newState) {
    SLOG(INFO) << newState->toString();
  } else {
    SLOG(INFO) << " newState is nullptr ";
  }
  if (newState) {
    while (true) {
      SLOG(INFO) << "true";
      while (!mStateStack.empty()) {
        mStateStack.pop();
      }
      StateInfo *newStateInfo = mStateMap[newState];
      fillStateStack(newStateInfo, true);
      invokeExitMethods(newStateInfo);
      int index = mStateVec.size();
      fillStateVector();
      invokeEnterMethods(index);
      if (newState != mTransitState) {
        newState = mTransitState;
      } else {
        break;
      }
    }
    mTransitState = nullptr;
    onHandleTransitionDone(newState);
  }
}

void Engine::onHandleTransitionDone(std::shared_ptr<IState> state) {
  if (state != nullptr) {
    if (state == mQuitState) {
      onQuit();
    } else if (state == mHaltState) {
      onHalt();
    }
  }
}

void Engine::invokeEnterMethods(int index) {
  for (size_t i = index; i < mStateVec.size(); ++i) {
    mStateVec[i]->cState->enter();
    mStateVec[i]->active = true;
  }
}

void Engine::invokeExitMethods(StateInfo *info) {
  while (!mStateVec.empty() && mStateVec.back() != info) {
    StateInfo *cur = mStateVec.back();
    cur->cState->exit();
    cur->active = false;
    mStateVec.pop_back();
  }
}

void Engine::fillStateStack(StateInfo *info, bool checkActive) {
  SLOG(INFO) << "fillStateStack";
  do {
    mStateStack.push(info);
    SLOG(INFO) << "mStateStack push " << info->cState->toString();
    info = info->pStateInfo;
  } while (info && (!checkActive || !info->active));
}

void Engine::fillStateVector() {
  SLOG(INFO) << "fillStateVector";
  while (!mStateStack.empty()) {
    mStateVec.push_back(mStateStack.top());
    SLOG(INFO) << "mStateVec push " << mStateStack.top()->cState->toString();
    SLOG(INFO) << "mStateStack pop " << mStateStack.top()->cState->toString();
    mStateStack.pop();
  }
}

bool Engine::isCustomMessage(int32_t id) {
  switch (id) {
    case ENGINE_INIT_CMD:
    case ENGINE_QUIT_CMD:
      return false;
  }
  return true;
}

std::shared_ptr<Engine> Engine::shared_from_this() {
  return std::dynamic_pointer_cast<Engine>(MessageHandler::shared_from_this());
}
