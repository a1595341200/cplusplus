//
// Created by 谢瑶 on 2023/1/5.
//

#ifndef DEV_ISTATE_H
#define DEV_ISTATE_H

#include <memory>
#include "Message.h"

class IState : public std::enable_shared_from_this<IState> {
public:
	virtual void enter() = 0;
	virtual void exit() = 0;
	virtual bool processMessage(std::shared_ptr<Message> msg) = 0;
	virtual std::string toString() = 0;
};

#endif //DEV_ISTATE_H
