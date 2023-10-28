#include <iostream>
#include <sys/socket.h>
#include <linux/netlink.h>
#include <unistd.h>
#include <memory.h>
using namespace std;
void uevent(){
// Create a netlink socket
	int sock = socket(AF_NETLINK, SOCK_RAW, NETLINK_KOBJECT_UEVENT);

// Bind the socket to the NETLINK_KOBJECT_UEVENT protocol
	struct sockaddr_nl addr;
	memset(&addr, 0, sizeof(addr));
	addr.nl_family = AF_NETLINK;
	addr.nl_pid = getpid();
	addr.nl_groups = 0xffffffff;

	bind(sock, (struct sockaddr*)&addr, sizeof(addr));

// Receive uevent messages
	while (true) {
		char buf[4096];
		int len = recv(sock, buf, sizeof(buf), 0);
		if (len > 0) {
			printf("Received uevent message: %s\n", buf);
		}
	}
}
int main(int argc, char const *argv[])
{
	uevent();
    return 0;
}
