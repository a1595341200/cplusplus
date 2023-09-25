#ifndef MESSAGE_H
#define MESSAGE_H
#include <memory>

class Message : public std::enable_shared_from_this<Message> {
public:
    Message(int what) : _waht(what){};
    virtual ~Message() = default;
    int _waht{-1};
};
#endif /* MESSAGE_H */
