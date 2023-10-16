#include <iostream>

#include "UdpClient.h"
#include "backward-cpp/backward.hpp"
namespace backward {
backward::SignalHandling sh;
}

int main(int argc, char const *argv[]) {
  UDPClient server("127.0.0.1", 4000);
  server.Run();
  server.Stop();
  return 0;
}
