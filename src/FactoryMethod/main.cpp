#include <iostream>
#include "FactoryMethod.h"

int main() {
	std::shared_ptr<ObstractFactory> add(std::make_shared<AddFactory>());
	auto a = add->createMethod();
	auto res = a->operation(1, 2);
	std::cout << res << std::endl;
	return 0;
}
