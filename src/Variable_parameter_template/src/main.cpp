#include <iostream>

using namespace std;

template<typename... Args>
void p(Args... args) {
	(std::cout<< ...<< args) << std::endl;
}

template<class T, class U>
T baz(T t, U u) {
	std::cout << t << ":" << u << std::endl;
	return t;
}

template<class ...Args>
void foo(Args ...args) {}

template<class ...Args>
class bar {
public:
	bar(Args ...args) {
		foo(baz(&args, args) ...);
	}
};

template<class ...T>
int baz(T ...t) {
	return 0;
}

template<class ...Args>
void foo1(Args ...args) {}

template<class ...Args>
class bar1 {
public:
	bar1(Args ...args) {
		foo1(baz(&args...) + args...);
	}
};

int add(int a, int b) { return a + b; };

int sub(int a, int b) { return a - b; };

template<class ...Args>
void foo(Args (*...args)(int, int)) {
	int tmp[] = {(std::cout << args(7, 11) << std::endl, 0) ...};
}

template<class ...Args>
class derived : public Args ... {
public:
	derived(const Args &...args) : Args(args) ... {}
};

class base1 {
public:
	base1() {}

	base1(const base1 &) {
		std::cout << "copy ctor base1" << std::endl;
	}
};

class base2 {
public:
	base2() {}

	base2(const base2 &) {
		std::cout << "copy ctor base2" << std::endl;
	}
};

template<class...>
struct Tuple {
};
template<class T1, class T2>
struct Pair {
};
template<class ...Args1>
struct zip {
	template<class ...Args2>
	struct with {
		typedef Tuple<Pair<Args1, Args2>...> type;
	};
};

template<class ...Args>
void foo2(Args ...args) {}

template<class ...Args>
class bar2 {
public:
	bar2(Args ...args) {
		auto lm = [args ...] { foo2(&args...); };
		lm();
	}
};

int main(int argc, char const *argv[]) {
	p(1, 2, 3, 4, 5);
//    bar<int, double, unsigned int> b(1, 5.0, 8);
//    bar b(1, 5.0, 8);
//    bar1(1,5.0,8);
//    foo(add, sub);
//    base1 b1;
//    base2 b2;
//    derived<base1, base2> d(b1, b2);
//    zip<short, int>::with<unsigned short, unsigned>::type t1;
	// 编译成功
	//zip<short>::with<unsigned short, unsigned>::type t2; // 编译失败，
	// 形参包长度不同
//    bar2<int, double> b2(5, 8.11);
	return 0;
}
