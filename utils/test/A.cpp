/*
 * @Author: 谢瑶 
 * @Date: 2023-10-27 17:07:40
 * @LastEditors: 谢瑶 
 * @LastEditTime: 2023-10-27 17:09:10
 * @FilePath: /cplusplus/utils/test/A.cpp
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
//
// Created by 谢瑶 on 2023/1/6.
//

#include "A.h"
#include "E.h"
#include <Log.h>
#include <thread>
#include <Message.h>

A::A(E *e) : mE(e) {

}

void A::enter() {
	SLOG(INFO) << "A enter";
}

void A::exit() {
	SLOG(INFO) << "A exit";
}

bool A::processMessage(std::shared_ptr<Message> msg) {
	SLOG(INFO) << "A processMessage";
	mE->transitionState(mE->mStateMap[E::BSTATE]);
	using namespace std::chrono_literals;
	std::this_thread::sleep_for(1s);
	return true;
}

std::string A::toString() {
	return "A";
}

