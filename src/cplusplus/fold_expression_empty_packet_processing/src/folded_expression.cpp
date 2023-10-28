#include <iostream>

template<class... Args>
auto sum(Args ...args) {
	return (args + ...);
}

template<class... Args>
auto sum1(Args ...args) {
	return (... + args);
}

int main() {
	std::cout << sum(1, 5.0, 11.7) << std::endl;
	std::cout << sum1(1, 5.0, 11.7) << std::endl;
}