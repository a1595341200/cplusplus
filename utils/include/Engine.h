//
// Created by 谢瑶 on 2023/1/5.
//

#ifndef DEV_ENGINE_H
#define DEV_ENGINE_H

#include <map>
#include <stack>
#include <string>

#include "IState.h"
#include "Log.h"
#include "Looper.h"

class Engine : public MessageHandler {
 public:
  Engine(const std::string &name, std::shared_ptr<Looper> looper = nullptr);
  ~Engine() override;
  std::shared_ptr<Engine> shared_from_this();
  void addState(std::shared_ptr<IState> state, std::shared_ptr<IState> parent);
  bool delState(std::shared_ptr<IState> state);
  void setInitialState(std::shared_ptr<IState> state);
  void transitionState(std::shared_ptr<IState> state);
  void onHandleTransition(std::shared_ptr<Message> msg);
  void start();
  void stop();

  virtual void onPreHandleMessage(std::shared_ptr<Message> msg){};

  virtual void onPostHandleMessage(std::shared_ptr<Message> msg){};

  virtual void onUnHandleMessage(std::shared_ptr<Message> msg){};

  virtual void onHaltHandleMessage(std::shared_ptr<Message> msg){};

  virtual void onHalt(){};

  virtual void onQuit(){};

  std::shared_ptr<Looper> mLooper;

  inline std::shared_ptr<IState> curState() const {
    return mStateVec.back()->cState;
  };

 protected:
  static inline std::string printState(const std::shared_ptr<IState> &state) {
    return state ? state->toString() : "Null";
  };

  // private:
  enum {
    ENGINE_INIT_CMD = 1,
    ENGINE_QUIT_CMD = 2,
  };

  struct StateInfo {
    std::shared_ptr<IState> cState;
    StateInfo *pStateInfo;
    bool active;

    inline std::string toString() const {
      return cState ? cState->toString() : "Null";
    }
  };

  class HaltState : public IState {
   public:
    inline void setEngine(Engine *e) {
      engine = e;
    }

   private:
    void enter() override{};

    void exit() override{};

    bool processMessage(std::shared_ptr<Message> msg) override {
      if (engine) {
        engine->onHaltHandleMessage(msg);
        return true;
      }
      return false;
    };

    std::string toString() override {
      using namespace std::string_literals;
      return "HaltState"s;
    }

    Engine *engine;
  };

  class QuitState : public IState {
   public:
    inline void setEngine(Engine *e) {
      engine = e;
    }

   private:
    void enter() override{};

    void exit() override{};

    bool processMessage(std::shared_ptr<Message> msg) override {
      SLOG(INFO) << "quit state process msg " << msg->what;
      return false;
    };

    std::string toString() override {
      using namespace std::string_literals;
      return "QuitState"s;
    }

    Engine *engine;
  };

  StateInfo *addStateIn(std::shared_ptr<IState> state, std::shared_ptr<IState> parent);
  void invokeEnterMethods(int index);
  void invokeExitMethods(StateInfo *info);
  void handleMessage(std::shared_ptr<Message> message) override;
  void onHandleMessage(std::shared_ptr<Message> msg);
  void onHandleMessageTravel(std::shared_ptr<Message> msg);
  void onHandleTransitionDone(std::shared_ptr<IState> state);
  void fillStateStack(StateInfo *info, bool checkActive);
  void fillStateVector();
  bool isCustomMessage(int32_t id);

  inline std::string printStateInfo(const StateInfo *info) const {
    return info ? info->toString() : "Null";
  };

  std::string mName;
  std::shared_ptr<IState> mInitialState;
  std::shared_ptr<IState> mTransitState;
  std::shared_ptr<HaltState> mHaltState;
  std::shared_ptr<QuitState> mQuitState;
  bool mInit{false};
  bool mQuit{false};
  std::stack<StateInfo *> mStateStack;
  std::vector<StateInfo *> mStateVec;
  std::map<std::shared_ptr<IState>, StateInfo *> mStateMap;
};

#endif  // DEV_ENGINE_H
