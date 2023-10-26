#include <assert.h>
#include <atomic>
#include <iostream>
#include <memory>
#include <type_traits>

struct MsgBase {
  virtual ~MsgBase() {}
};

template <typename Msg>
struct WrapperMsg : MsgBase {
 public:
  explicit WrapperMsg(Msg const &contents) : contents_(contents) {}
  const Msg &GetContents() {
    return contents_;
  }

 private:
  Msg contents_;
};

template <class T>
class SharedQueue final {
 public:
  SharedQueue() : head_(new BufferNode), tail_(head_.load(std::memory_order_relaxed)) {}
  ~SharedQueue() {
    T output;
    while (this->dequeue(output)) {
    }
    BufferNode *front = head_.load(std::memory_order_relaxed);
    delete front;
  }

  void enqueue(T &&input) {
    BufferNode *node{new BufferNode(std::move(input))};
    BufferNode *prevhead{head_.exchange(node, std::memory_order_acq_rel)};
    prevhead->next_.store(node, std::memory_order_release);
  }
  void enqueue(const T &input) {
    BufferNode *node{new BufferNode(input)};
    BufferNode *prevhead{head_.exchange(node, std::memory_order_acq_rel)};
    prevhead->next_.store(node, std::memory_order_release);
  }

  bool dequeue(T &output) {
    BufferNode *tail = tail_.load(std::memory_order_relaxed);
    BufferNode *next = tail->next_.load(std::memory_order_acquire);

    if (next == nullptr) {
      return false;
    }
    output = std::move(*(next->dataPtr_));
    delete next->dataPtr_;
    tail_.store(next, std::memory_order_release);
    delete tail;
    return true;
  }

  bool empty() {
    BufferNode *tail = tail_.load(std::memory_order_relaxed);
    BufferNode *next = tail->next_.load(std::memory_order_acquire);
    return next == nullptr;
  }

 private:
  struct BufferNode {
    BufferNode() = default;
    BufferNode(const T &data) : dataPtr_(new T(data)) {}
    BufferNode(T &&data) : dataPtr_(new T(std::move(data))) {}
    T *dataPtr_;
    std::atomic<BufferNode *> next_{nullptr};
  };

  std::atomic<BufferNode *> head_;
  std::atomic<BufferNode *> tail_;
};

class TcpMessageQueue {
 public:
  template <typename T>
  void Enqueue(T const &msg) {
    queue.enqueue(std::make_shared<WrapperMsg<T>>(msg));
  }

  bool Dequeue(std::shared_ptr<MsgBase> &msg) {
    return queue.dequeue(msg);
  }

  bool Empty() {
    return queue.empty();
  }

 private:
  SharedQueue<std::shared_ptr<MsgBase>> queue;
};