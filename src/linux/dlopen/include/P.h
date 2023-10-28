#include <stdio.h>

class P {
public:
	P() { printf("construct\n"); }

	void run() { printf("run\n"); }

private:
};