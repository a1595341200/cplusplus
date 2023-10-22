#include <iostream>
#include "Proxy.h"
#include "Factory.h"
#include "test.h"
int main() {
	std::shared_ptr<ObstractAdd> Server = std::make_shared<AddServer>();
	std::shared_ptr<ObstractAdd> proxy = std::make_shared<AddProxy>(Server);
	auto res = proxy->add(1, 2);
	std::cout << res << std::endl;
	if (auto fruit = FruitFactory::createFruit("op"); fruit.has_value()) {
		std::cout << fruit.value()->show() << std::endl;
	} else {
		std::cout << "error" << std::endl;
	}
	add(1,2);
	return 0;
}
