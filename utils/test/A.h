/*
 * @Author: 谢瑶 
 * @Date: 2023-10-27 17:07:40
 * @LastEditors: 谢瑶 
 * @LastEditTime: 2023-10-27 17:09:40
 * @FilePath: /cplusplus/utils/test/A.h
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
//
// Created by 谢瑶 on 2023/1/6.
//

#ifndef DEV_A_H
#define DEV_A_H

#include <IState.h>

class E;

class A : public IState {
public:
	A(E *e);
	void enter() override;
	void exit() override;
	bool processMessage(std::shared_ptr<Message> msg) override;
	std::string toString() override;

private:
	E *mE;
};

#endif //DEV_A_H
