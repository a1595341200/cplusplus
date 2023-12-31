/*
 * @Author: 谢瑶 
 * @Date: 2023-10-27 17:07:40
 * @LastEditors: 谢瑶 
 * @LastEditTime: 2023-10-27 17:08:58
 * @FilePath: /cplusplus/utils/test/B.cpp
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
//
// Created by 谢瑶 on 2023/1/6.
//

#include "B.h"
#include <Log.h>
#include "E.h"
#include <thread>

B::B(E *e) : mE(e) {

}

void B::enter() {
	SLOG(INFO) << "B enter";
}

void B::exit() {
	SLOG(INFO) << "B exit";
}

bool B::processMessage(std::shared_ptr<Message> msg) {
	SLOG(INFO) << "B processMessage";
	mE->transitionState(mE->mStateMap[E::ASTATE]);
	using namespace std::chrono_literals;
	std::this_thread::sleep_for(1ms);
	return true;
}

std::string B::toString() {
	return "B";
}
