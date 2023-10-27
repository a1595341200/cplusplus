/*
 * @Author: 谢瑶 
 * @Date: 2023-10-27 17:07:40
 * @LastEditors: 谢瑶 
 * @LastEditTime: 2023-10-27 17:09:50
 * @FilePath: /cplusplus/utils/test/E.h
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
//
// Created by 谢瑶 on 2023/1/6.
//

#ifndef DEV_E_H
#define DEV_E_H

#include <Engine.h>
#include "A.h"
#include "B.h"

class E : public Engine {
public:
	enum {
		ASTATE,
		BSTATE,
	};
	E(const std::string &name, const std::shared_ptr<Looper> &looper);
	void sengMessage(std::shared_ptr<Message> msg);
	std::map<int, std::shared_ptr<IState>> mStateMap;
};

#endif //DEV_E_H
