#include <iostream>
#include <memory>

int main(int argc, char const *argv[]) {
	using namespace std;
	shared_ptr<int> p(new int{2});
	weak_ptr<int> w(p);
	cout << *w.lock() << endl;
	return 0;
}
