//
// Created by 谢瑶 on 2023/3/2.
//

#ifndef DEV_SRC_DESIGNMODE_DECORATORPATTERN_SRC_DECORATORPATTERN_H_
#define DEV_SRC_DESIGNMODE_DECORATORPATTERN_SRC_DECORATORPATTERN_H_
#include <string>
#include <memory>

class Person {
public:
	explicit Person(const std::string &name);
	explicit Person() = default;
	virtual void show();
	virtual ~Person() = default;
private:
	std::string mName;
};

class Decorator : public Person {
public:
	void setContext(std::shared_ptr<Person> context);
	void show() override;
private:
	std::shared_ptr<Person> mContext;
};

class Suit : public Decorator {
public:
	void show() override;
};

class Sneaker : public Decorator {
public:
	void show() override;
};

class Cat : public Decorator {
public:
	void show() override;
};

#endif //DEV_SRC_DESIGNMODE_DECORATORPATTERN_SRC_DECORATORPATTERN_H_
