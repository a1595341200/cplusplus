#include <iostream>
#include "StatePattern.h"
using namespace std;

int main(int argc, char const *argv[]) {
	std::shared_ptr<StateContext> context(new StateContext());
	context->doWork();
	context->setTime(15);
	context->doWork();
	context->setTime(19);
	context->doWork();
	return 0;
}
