//
// Created by 谢瑶 on 2023/5/30.
//

#ifndef PROXY__FACTORY_H_
#define PROXY__FACTORY_H_
#include <string>
#include <iostream>
#include <optional>

class Fruit {
public:
	virtual std::string show() = 0;
	virtual ~Fruit() = default;
};

class Apple : public Fruit {
public:
	std::string show() override {
		return "Apple";
	}
};

class FruitFactory {
public:
	static std::optional<std::shared_ptr<Fruit>> createFruit(const std::string &name) {
		std::optional<std::shared_ptr<Fruit>> res;
		if (name == "apple") {
			res = std::make_shared<Apple>();
		}
		return res;
	}
};

#endif //PROXY__FACTORY_H_
