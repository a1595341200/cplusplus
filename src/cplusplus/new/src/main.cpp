/*
 * @Author: 谢瑶 
 * @Date: 2023-09-22 10:16:19
 * @LastEditors: 谢瑶 
 * @LastEditTime: 2023-10-28 17:12:15
 * @FilePath: /C-/mac/myproject/src/new/src/main.cpp
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
#include <Utils.h>
#include <iostream>
#include <memory>
#include <Timer.h>
class Test {
private:
public:
	Test();
	~Test();
};

Test::Test() { std::cout << "构造" << std::endl; }

Test::~Test() { std::cout << "析构" << std::endl; }

void test01() { Test t; }

void test02() {
	void *t = operator new(sizeof(Test));
	std::cout << t << std::endl;
	Test *t1 = static_cast<Test *>(t);
	std::cout << t1 << std::endl;
	new(t1) Test();
}

int main(int argc, char *argv[]) {
	Utils::Timer t;
	test02();
}
