//
// Created by 谢瑶 on 2023/3/6.
//

#ifndef DEV_SRC_DESIGNMODE_FACTORYPATTERN_SRC_ABSTRACTFACTORY_H_
#define DEV_SRC_DESIGNMODE_FACTORYPATTERN_SRC_ABSTRACTFACTORY_H_
#include <Log.h>

#include <memory>
#define DATEBASETYPE 0

class IUser {
 public:
};

class SqliteUser : public IUser {
 public:
};

class OtherUser : public IUser {
 public:
};

class IDepartMent {
 public:
};

class SqliteDepartMent : public IDepartMent {
 public:
};

class OtherDepartMent : public IDepartMent {
 public:
};

class AbstractFactory {
 public:
  virtual std::shared_ptr<IUser> ceateUser() = 0;
  virtual std::shared_ptr<IDepartMent> ceateDepartMent() = 0;
};

class SqliteFactory : public AbstractFactory {
 public:
  std::shared_ptr<IUser> ceateUser() {
    SLOG(INFO) << " 使用sqlit创建ProducA ";
    return std::make_shared<SqliteUser>();
  }

  std::shared_ptr<IDepartMent> ceateDepartMent() {
    SLOG(INFO) << " 使用sqlit创建DepartMentA ";
    return std::make_shared<SqliteDepartMent>();
  }
};

class OtherFactory : public AbstractFactory {
 public:
  std::shared_ptr<IUser> ceateUser() {
    SLOG(INFO) << " 使用其它创建ProducA ";
    return std::make_shared<OtherUser>();
  }

  std::shared_ptr<IDepartMent> ceateDepartMent() {
    SLOG(INFO) << " 使用其它创建DepartMentA ";
    return std::make_shared<OtherDepartMent>();
  }
};

std::shared_ptr<AbstractFactory> creatFactory(int type) {
  std::shared_ptr<AbstractFactory> ptr = nullptr;
  switch (type) {
    case 0:
      ptr = std::make_shared<SqliteFactory>();
      break;
    case 1:
      ptr = std::make_shared<OtherFactory>();
      break;
  }
  return ptr;
}

#endif  // DEV_SRC_DESIGNMODE_FACTORYPATTERN_SRC_ABSTRACTFACTORY_H_
