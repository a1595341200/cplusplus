#ifndef UDPMUTICLIENT_H
#define UDPMUTICLIENT_H
#include <Ip.h>
class UdpMutiClient {
 public:
  UdpMutiClient(const std::string& mutiaddr, in_port_t port);
  ~UdpMutiClient();
  void init();
  void start();
  void stop();

 private:
  void bind();

  int mSockfd{-1};
  sockaddr_in mMutiAddr{};
};

#endif /* UDPMUTICLIENT_H */
