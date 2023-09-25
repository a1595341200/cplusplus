//
// Created by 谢瑶 on 2023/5/30.
//

#ifndef PROXY__PROXY_H_
#define PROXY__PROXY_H_
#include <memory>
#include <utility>

class ObstractAdd {
public:
	virtual double add(double a, double b) = 0;
	virtual ~ObstractAdd() = default;
};

class AddServer : public ObstractAdd {
public:
	double add(double a, double b) override {
	    return a + b;
	}
};

class AddProxy : public ObstractAdd {
public:
	explicit AddProxy(std::shared_ptr<ObstractAdd>  server) : mServer(std::move(server)) {}
	double add(double a, double b) override {
		return mServer->add(a, b);
	}

private:
	std::shared_ptr<ObstractAdd> mServer;
};

#endif //PROXY__PROXY_H_
