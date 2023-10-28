//
// Created by 谢瑶 on 2023/1/6.
//

#ifndef DEV_REFERENCE_H
#define DEV_REFERENCE_H
#include <iostream>
#include "ifc.h"
#include <linux/if.h>
#include <sys/ioctl.h>
#include <stdlib.h>
#include <unistd.h>
#include <memory.h>

using namespace std;

int get_mac_by_name(int fd, char *name) {
	int i = 0;
	struct ifreq ifr;
	sprintf(ifr.ifr_ifrn.ifrn_name, "%s", name);
	if (i = ioctl(fd, SIOCGIFHWADDR, &ifr)) {
		perror("ioctl");
		close(fd);
		exit(-2);
	}

	for (i = 0; i < 6; i++) {
		if (i == 5) {
			printf("0x%02x\n", (uint8_t) ifr.ifr_ifru.ifru_hwaddr.sa_data[i]);
		} else {
			printf("0x%02x:", (uint8_t) ifr.ifr_ifru.ifru_hwaddr.sa_data[i]);
		}
	}
	return 0;
}

int get_ip_by_name(int fd, char *name);

int show_all_net_interface_name(int fd) {
	int i = 0;
	struct ifconf ifconf;
	ifconf.ifc_len = 1024;
	ifconf.ifc_ifcu.ifcu_buf = (char *) malloc(1024);
	memset(ifconf.ifc_ifcu.ifcu_buf, 0, 1024);
	if (i = ioctl(fd, SIOCGIFCONF, &ifconf)) {
		perror("ioctl");
		printf("ret = %d\n", i);
		close(fd);
		exit(-1);
	}
	for (i = 0; i < ifconf.ifc_len / sizeof(struct ifreq); i++) {
		if (strlen(ifconf.ifc_ifcu.ifcu_req[i].ifr_ifrn.ifrn_name) == 0)break;
		printf("%d:%s\n", i, ifconf.ifc_ifcu.ifcu_req[i].ifr_ifrn.ifrn_name);
		printf("ip:");
		get_ip_by_name(fd, ifconf.ifc_ifcu.ifcu_req[i].ifr_ifrn.ifrn_name);
		printf("mac:");
		get_mac_by_name(fd, ifconf.ifc_ifcu.ifcu_req[i].ifr_ifrn.ifrn_name);
		printf("\n");
	}
	free(ifconf.ifc_ifcu.ifcu_buf);
	return 0;
}

int get_ip_by_name(int fd, char *name) {
	int i = 0;
	struct ifreq ifr;
	sprintf(ifr.ifr_ifrn.ifrn_name, "%s", name);
	if (i = ioctl(fd, SIOCGIFADDR, &ifr)) {
		perror("ioctl");
		close(fd);
		exit(-2);
	}

	for (i = 0; i < 4; i++) {
		if (i == 3) {
			printf("%d\n", (uint8_t) ifr.ifr_ifru.ifru_addr.sa_data[2 + i]);
		} else {
			printf("%d:", (uint8_t) ifr.ifr_ifru.ifru_addr.sa_data[2 + i]);
		}
	}
	return 0;
}

void test() {
	int fd;
	int i;
	fd = socket(AF_INET, SOCK_DGRAM, 0);
	if (fd < 0) {
		perror("socket");
		exit(-1);
	}
	show_all_net_interface_name(fd);
	close(fd);
}

#endif //DEV_REFERENCE_H
