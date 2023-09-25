#include <iostream>
#include "Decorator.h"

int main() {
	std::shared_ptr<Hero> h(new Hero());
	std::shared_ptr<Decorator> k(new Knife());
	std::shared_ptr<Decorator> s(new Sword());
	k->setPerson(h);
	s->setPerson(k);
	s->show();
	return 0;
}
