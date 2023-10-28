#include <iostream>

template<class... Args>
auto sum(Args ...args) {
	return (args + ... + 0);
}

template<class... Args>
auto sum1(Args ...args) {
	return (0 + ... +args);
}

template<class ...Args>
void print(Args ...args) {
	(std::cout << ... << args) << std::endl;
}

int main() {
	std::cout << sum(1, 5.0, 11.7) << std::endl;
	std::cout << sum1(1, 5.0, 11.7) << std::endl;
	print(std::string("hello "), "c++ ", "world");
}