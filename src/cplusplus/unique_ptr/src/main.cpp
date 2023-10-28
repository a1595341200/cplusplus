#include <iostream>
#include <memory>
#include <functional>

using namespace std;

class Foo {
public:
	int a{0};
};

int main(int argc, char const *argv[]) {
	std::unique_ptr<Foo, std::function<void(Foo *)>> f(new Foo(), [](Foo *f) {
		delete f;
		std::cout << "test" << std::endl;
	});
	auto f1 = f.get();
	f = nullptr;
	std::cout << f1->a << std::endl;
	return 0;
}
