#include <arpa/inet.h>
#include <net/route.h>
#include <netdb.h>
#include <stdio.h>
#include <sys/socket.h>
#include <thread>
#include <time.h>
#include <vector>

int dns(int argc, char **argv) {
	char *ptr, **pptr;
	struct hostent *hptr;
	char str[128];
//  if (argc < 2) {
//    printf("usage: ./a.out www.baidu.com\n");
//    return -1;
//  }
//    ptr = argv[1];
	ptr = "www.baidu.com";
	time_t begin = time(NULL);
	if ((hptr = gethostbyname(ptr)) == NULL) {
		printf(" gethostbyname error [%s] for host:%s\n", hstrerror(h_errno), ptr);
		time_t end = time(NULL);
		printf("gethostbyname error, used [%ld] times\n", end - begin);
		return 0;
	}

	printf("official hostname:%s\n", hptr->h_name);
	for (pptr = hptr->h_aliases; *pptr != NULL; pptr++)
		printf(" alias:%s\n", *pptr);

	switch (hptr->h_addrtype) {
		case AF_INET:
		case AF_INET6:pptr = hptr->h_addr_list;
			for (; *pptr != NULL; pptr++)
				printf(" address:%s\n",
					   inet_ntop(hptr->h_addrtype, *pptr, str, sizeof(str)));
			break;
		default:printf("unknown address type\n");
			break;
	}
	return 1;
}

int main(int argc, char **argv) {
	// std::vector<int> v;
	// std::thread t([]() {
	//   while (1) {
	//     sleep(1);
	//   }
	// });
	// std::thread t2([]() {
	//   while (1) {
	//     sleep(1);
	//   }
	// });
	// t.join();
	// t2.join();
	// v.at(14);
	dns(argc, argv);
	return 0;
}
