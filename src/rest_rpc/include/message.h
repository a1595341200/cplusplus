#ifndef MESSAGE_H
#define MESSAGE_H
#include <msgpack.hpp>

struct person {
  int id;
  std::string name;
  int age;
  int score[5]{};
  MSGPACK_DEFINE(id, name, age, score[0], score[1], score[2], score[3], score[4]);
};

#endif /* MESSAGE_H */
