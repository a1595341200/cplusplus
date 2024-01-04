#ifndef XHD_MESSAGESENDERRECEIVER_H
#define XHD_MESSAGESENDERRECEIVER_H
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/ipc.h>
#include <sys/msg.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <time.h>
#include <unistd.h>

#include <atomic>
#include <string>
#include <Log.h>
typedef struct {
  long mtype;      // 消息类型
  uint64_t mtext;  // 消息内容
} XHD_Message;

class XHD_MessageSenderReceiver {
 public:
  XHD_MessageSenderReceiver(std::string& name) : m_name(name) {}
  bool Init(void) {
    auto path = m_name.c_str();
    if (access(path, F_OK) < 0) {
      if (creat(path, S_IRWXU) < 0) {
        return -1;
      }
    }
    m_key = ftok(m_name.c_str(), 0);  // 生成唯一的消息队列键
    if (m_key == -1) {
      perror("ftok");
      exit(EXIT_FAILURE);
    }
    // 创建消息队列
    if ((m_msqid = msgget(m_key, 0666 | IPC_CREAT)) == -1) {
      perror("msgget");
      exit(EXIT_FAILURE);
    }
    return true;
  }
  bool SendMsg(XHD_Message& msg) {
    if (msgsnd(m_msqid, &msg, sizeof(uint64_t), 0) == -1) {
      perror("msgsnd");
      return false;
    }
    return true;
  }
  bool RecvMsg(XHD_Message& rcv_msg) {
    if (msgrcv(m_msqid, &rcv_msg, sizeof(uint64_t), 1, 0) == -1) {
      perror("msgrcv");
      return false;
    }
    return true;
  }

 private:
  std::string m_name;
  int m_msqid;
  key_t m_key;
};

template <typename ElementType>
class XHD_SharedBuffer {
 public:
  ElementType* GetDataPtr(void) {
    return &val;
  }
  inline void ReleaseRead(void) {
    m_reader.fetch_sub(1);
  }
  inline void SetRead(int value) {
    m_reader.store(value, std::memory_order::memory_order_release);
  }
  inline bool CheckRead(void) {
    return (m_reader.load(std::memory_order::memory_order_relaxed) <= 0);
  }

 private:
  std::atomic<int> m_reader;
  ElementType val;
};

template <typename ElementType, uint64_t Capacity>
class XHD_MemoryBuffer {
 public:
  ElementType* GetDataWritePtr(int index) {
    if (index < Capacity) {
      if (Buffer[index].CheckRead()) {
        return Buffer[index].GetDataPtr();
      }
      return nullptr;
    }
    return nullptr;
  }

  ElementType* GetDataReadPtr(int index) {
    if (index < Capacity) {
      return Buffer[index].GetDataPtr();
    }
    return nullptr;
  }

  bool ReleaseWrite(int index, int reader) {
    if (index < Capacity) {
      Buffer[index].SetRead(reader);
      return true;
    }
    return false;
  }
  bool ReleaseRead(int index) {
    if (index < Capacity) {
      Buffer[index].ReleaseRead();
      return true;
    }
    return false;
  }

 private:
  XHD_SharedBuffer<ElementType> Buffer[Capacity];
};

#endif /* XHD_MESSAGESENDERRECEIVER_H */
