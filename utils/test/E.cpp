/*
 * @Author: 谢瑶 
 * @Date: 2023-10-27 17:07:40
 * @LastEditors: 谢瑶 
 * @LastEditTime: 2023-10-27 17:08:47
 * @FilePath: /cplusplus/utils/test/E.cpp
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
//
// Created by 谢瑶 on 2023/1/6.
//

#include "E.h"

E::E(const std::string &name, const std::shared_ptr<Looper> &looper) : Engine(name, looper) {
	mStateMap[ASTATE] = std::make_shared<A>(this);
	mStateMap[BSTATE] = std::make_shared<B>(this);
	addState(mStateMap[ASTATE], nullptr);
	addState(mStateMap[BSTATE], mStateMap[ASTATE]);
	setInitialState(mStateMap[BSTATE]);
	for (auto i : Engine::mStateMap) {
		SLOG(INFO) << i.second->toString();
	}
	SLOG(INFO) << "Engine";
}

void E::sengMessage(std::shared_ptr<Message> msg) {
	mLooper->sendMessage(shared_from_this(), msg);
}

