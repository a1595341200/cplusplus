//
// Created by 谢瑶 on 2023/5/30.
//

#ifndef DECORATOR__DECORATOR_H_
#define DECORATOR__DECORATOR_H_
#include <string>
#include <iostream>
#include <memory>

class Person {
public:
	virtual void show() = 0;
	virtual ~Person() = default;
private:
	std::string mName;
};

class Decorator : public Person {
public:
	void setPerson(std::shared_ptr<Person> p){
		mPerson = p;
	}
	void show() override{
		if(mPerson) {
			mPerson->show();
		}
	}
private:
	std::shared_ptr<Person> mPerson;
};

class Knife : public Decorator {
public:
	void show() override {
		std::cout << "Knife" << std::endl;
		Decorator::show();
	}
};

class Sword : public Decorator {
public:
	void show() override {
        std::cout << "sword" << std::endl;
		Decorator::show();
	}
};

class Hero : public Person {
public:
	void show() override{
		std::cout << "I am a hero" << std::endl;
	}
};

#endif //DECORATOR__DECORATOR_H_
