/*
 * @Description:
 * @Author: yao.xie
 * @Date: 2022-12-08 13:51:10
 * @LastEditTime: 2022-12-08 13:51:11
 * @LastEditors: yao.xie
 */
#include <iostream>
#include <memory>
using namespace std;

class A {
public:
	static int a;
};

int A::a = 1;

class B {
public:
	int getA() {
		return a;
	}

	inline static int a = 2;
};

int main(int argc, char const *argv[]) {
	std::cout << A::a << std::endl;
	std::cout << B::a << std::endl;
	std::shared_ptr<B> b(nullptr);
	std::cout << b->getA() << std::endl;
	return 0;
}
