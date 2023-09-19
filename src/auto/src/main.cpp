#include <assert.h>
#include <initializer_list>
#include <iostream>

void echo(int a) { std::cout << a << std::endl; }

int f();

int main(int argc, char const *argv[]) {
	std::cout << "Hello World!" << std::endl;
	auto i = {1, 2, 3};
	auto f = []() {};
	std::string s = "df";
	auto l = [](auto &i) -> auto & { return i; };
	int x = 0;
	auto &b = l(x);
	assert(&x == &b);
	using namespace std;
	cout << typeid(decltype(f())).name() << endl;
	int a;
	const int &a1 = a;
	const int &a2 = a;
	decltype(a1 + a2) b1;
	b1 = a;
	// decltype(f()) c;
	return 0;
}
