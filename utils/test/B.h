//
// Created by 谢瑶 on 2023/1/6.
//

#ifndef DEV_B_H
#define DEV_B_H

#include <IState.h>

class E;

class B : public IState {
public:
	B(E *e);
	void enter() override;
	void exit() override;
	bool processMessage(std::shared_ptr<Message> msg) override;
	std::string toString() override;

private:
	E *mE;
};

#endif //DEV_B_H
