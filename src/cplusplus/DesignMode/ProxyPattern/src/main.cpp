#include <iostream>
#include "ProxyPattern.h"
using namespace std;

int main(int argc, char const *argv[]) {
	std::shared_ptr<Proxy> proxy(new TvProxy());
	proxy->show();
	return 0;
}
