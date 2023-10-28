#include <iostream>
#include "DecoratorPattern.h"
using namespace std;

int main(int argc, char const *argv[]) {
	std::shared_ptr<Person> p(new Person("test"));
	std::shared_ptr<Decorator> s(new Suit());
	std::shared_ptr<Decorator> sn(new Sneaker());
	std::shared_ptr<Decorator> cat(new Cat());

	s->setContext(p);
	sn->setContext(s);
	cat->setContext(sn);
	cat->show();
	return 0;
}
