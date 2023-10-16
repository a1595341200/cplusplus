/*
 * @Author: yao.xie 1595341200@qq.com
 * @Date: 2023-10-16 17:21:41
 * @LastEditors: yao.xie 1595341200@qq.com
 * @LastEditTime: 2023-10-16 18:28:05
 * @FilePath: /cplusplus/src/udplearning/include/UdpServer.h
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置:
 * https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
#ifndef UDPSERVER_H
#define UDPSERVER_H
#include <arpa/inet.h>
#include <sys/epoll.h>
#include <sys/socket.h>

#include <iostream>
#include <memory>
#include <mutex>
#include <string>
#include <thread>
#include <unordered_map>
#include <vector>

#include "common.h"
#include "concurrent_task_queue.h"
// #include "convert_to_markerArray.h"
#include "ikcp.h"
#include "ringbuf.h"
#include "udp_client.h"

#define SOCKET_BUFFER_SIZE 102400U
#define FRAME_SIZE 65536u
#define BUFFER_SIZE 10240U
#define PARSE_THREAD_NUMBER 1

#define POLL_EVENT_MAX 1024

using EpollEventsList = std::vector<struct epoll_event>;

class UdpServer : public std::enable_shared_from_this<UdpServer> {
 public:
  UdpServer();
  ~UdpServer();

  bool Init();
  void Stop();

 protected:
  void UdpReceiveMessageLoop();
  void KcpMessageLoop();
  void BroadcastLoop();

 private:
  bool InitSocket();
  void ParseMsgCallback(UdpClient *client, void *data, SendDataType type);
  void ParseExtraMsgCallback(UdpClient *client, void *data, SendDataType type);

 private:
  ikcpcb *pkcp;
  int socket_fd_;
  struct sockaddr_in server_addr_;

  // broad cast

  std::thread kcp_thread_;
  std::thread broad_cast_thread_;

  std::atomic<bool> exit_{false};

  std::unordered_map<std::string, std::shared_ptr<UdpClient>> client_maps_;
  std::unique_ptr<ConcurrentTaskQueue> parse_task_queue_;
  EpollEventsList event_list_;
  struct sockaddr_in broad_cast_addr_;
  std::mutex mutex_;
};
#endif /* UDPSERVER_H */
