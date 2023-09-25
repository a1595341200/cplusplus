#include <iostream>
#include "ThreadPool.h"
using namespace std::chrono_literals;
int main() {
	ThreadPool threadpool(4);
	threadpool.init();
	std::cout << "start\n";
	for (int i = 0; i < 100; i++) {
		threadpool.addTask([i] { std::cout << i<<"\n"; });
	}
	std::this_thread::sleep_for(1s);
	return 0;
}
