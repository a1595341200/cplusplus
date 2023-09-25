#include <iostream>
#include <sys/select.h>
#include <unistd.h>
#include <fcntl.h>
#include <unordered_map>
#include <thread>
#include <chrono>
#include <type_traits>

void selectTest() {
	timeval t{
		.tv_sec=5,
		.tv_usec=0
	};
	// 0 只读 1只写
	int pip[2];
	auto res = pipe(pip);
	assert(res == 0);
	fd_set rfdset;
	FD_ZERO(&rfdset);
	FD_SET(pip[0], &rfdset);
	int max{0};
	max = std::max(max, pip[0]) + 1;
	max = std::max(max, pip[1]) + 1;
	std::unordered_map<int, std::function<void()>> maps;
	std::thread thread([pip] {
		using namespace std::chrono_literals;
		while (1) {
			std::this_thread::sleep_for(1s);
			write(pip[1], "1", 2);
		}
	});
	int pr = pip[0];
	maps[pr] = [pr]() {
		std::cout << pr << std::endl;
		char buf[1024];
		read(pr, buf, 1024);
		std::cout << buf << std::endl;
	};
	fd_set temp = rfdset;
	while (true) {
		static int count{0};
		temp = rfdset;
		auto res = select(max, &temp, nullptr, nullptr, &t);
		if (res == -1 && errno == EINTR) {
			continue;
		}
		if (res == -1) {
			break;
		}

		if (res == 0) {
			std::cout << "time out" << std::endl;
		}
		if (res > 0) {
			std::cout << "recv : " << count++ << std::endl;
			for (int i = 0; i < max; ++i) {
				if (FD_ISSET(i, &rfdset) != 0) {
					maps[i]();
				}
			}
		}
	}
	close(pip[0]);
	close(pip[1]);
	thread.join();
}

template<typename T>
struct Test_traits{

};

template<typename T>
struct Test_traits<T*> {
	using ponit_type = const T*;
};
int main() {
	std::iterator_traits<int*>::iterator_category a;
	Test_traits<const int*>::ponit_type p{nullptr};
//	*p = 1;
	std::vector<int> v{1,2,3,4,5,6,7,8,9,10};
	std::vector<int> v2(10);

	auto len = std::distance(v.begin(),v.begin()+1);
	std::cout << len << std::endl;
	std::copy(v.begin(),v.begin()+1,v2.begin());
	std::copy(v2.begin(),v2.end(), std::ostream_iterator<int>(std::cout, " "));
	return 0;
}
