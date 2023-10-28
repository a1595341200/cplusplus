//
// Created by 谢瑶 on 2023/3/6.
//

#ifndef DEV_SRC_DESIGNMODE_OBSERVERPATTERN_SRC_OBSERVER_HPP_
#define DEV_SRC_DESIGNMODE_OBSERVERPATTERN_SRC_OBSERVER_HPP_
#include <vector>
#include <functional>
#include <memory>

template<typename Func>
class Subject {
public:
	virtual void notify() = 0;
	virtual ~Subject() = default;

	void addFunc(Func &&func) {
		mFunc.emplace_back(std::forward<Func>(func));
	}

protected:
	std::vector<Func> mFunc;
};

template<typename Sub>
class Observer {
public:
	explicit Observer(std::shared_ptr<Subject<Sub>> subject) : mSubject(subject) {

	}

	virtual ~Observer() = default;

	template<typename Func>
	void subscription(Func &&func) {
		mSubject->addFunc(std::forward<Func>(func));
	}

protected:
	std::shared_ptr<Subject<Sub>> mSubject;
};
namespace BossEmployee {
using callBackFunc = std::function<void(bool)>;
using ObserverType = Observer<callBackFunc>;
using SubjectType = Subject<callBackFunc>;

class Employee : public ObserverType {
public:
	using Observer<callBackFunc>::Observer;
};

class Boss : public SubjectType {
public:
	void notify() override {
		std::for_each(mFunc.begin(), mFunc.end(), [&](const callBackFunc &func) {
			func(mState);
		});
	}

private:
	bool mState{true};
};
};

#endif //DEV_SRC_DESIGNMODE_OBSERVERPATTERN_SRC_OBSERVER_HPP_
