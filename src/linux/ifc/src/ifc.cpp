//
// Created by 谢瑶 on 2023/1/5.
//
#include "ifc.h"

#include <Log.h>
#include <pthread.h>
#include <sys/socket.h>
#include <sys/types.h>
#include <unistd.h>

#include <iostream>

#include <linux/if_ether.h>
#include <linux/if_vlan.h>
#include <linux/route.h>
#include <linux/sockios.h>
static int ifc_ctl_sock = -1;
static int ifc_ctl_sock6 = -1;
static pthread_mutex_t ifc_sock_mutex = PTHREAD_RECURSIVE_MUTEX_INITIALIZER_NP;
static pthread_mutex_t ifc_sock6_mutex = PTHREAD_RECURSIVE_MUTEX_INITIALIZER_NP;

#define INET_ADDRLEN 4
#define INET6_ADDRLEN 16

int ifc_init() {
  int ret{-1};
  ::pthread_mutex_lock(&ifc_sock_mutex);
  if (ifc_ctl_sock == -1) {
    ifc_ctl_sock = socket(AF_INET, SOCK_DGRAM | SOCK_CLOEXEC, 0);
    if (ifc_ctl_sock < 0) {
      SLOG(INFO) << "sock fail";
    }
  }

  ret = ifc_ctl_sock < 0 ? -1 : 0;
  return ret;
}

int ifc_close() {
  if (ifc_ctl_sock != -1) {
    ::close(ifc_ctl_sock);
    ifc_ctl_sock = -1;
  }
  pthread_mutex_unlock(&ifc_sock_mutex);
}

#include <memory.h>

static void ifc_init_ifr(const char *name, struct ifreq *ifr) {
  memset(ifr, 0, sizeof(ifreq));
  strncpy(ifr->ifr_name, name, IFNAMSIZ);
  ifr->ifr_name[IFNAMSIZ - 1] = 0;
}

#include <sys/ioctl.h>

static int ifc_set_flags(const char *name, unsigned set, unsigned clr) {
  struct ifreq ifr {};
  ifc_init_ifr(name, &ifr);
  if (ioctl(ifc_ctl_sock, SIOCGIFFLAGS, &ifr) < 0)
    return -1;
  ifr.ifr_flags = (ifr.ifr_flags & (~clr)) | set;
  return ioctl(ifc_ctl_sock, SIOCSIFFLAGS, &ifr);
}

int ifc_up(const char *name) {
  return ifc_set_flags(name, IFF_UP, 0);
}

int ifc_down(const char *name) {
  return ifc_set_flags(name, 0, IFF_UP);
}

#include <linux/if_arp.h>

int ifc_set_hwaddr(const char *name, const void *ptr) {
  struct ifreq ifr;
  ifc_init_ifr(name, &ifr);
  ifr.ifr_hwaddr.sa_family = ARPHRD_ETHER;
  ::memcpy(&ifr.ifr_hwaddr.sa_data, ptr, ETH_ALEN);
  ifc_init();
  std::cout << ifr.ifr_ifrn.ifrn_name << std::endl;
  auto res = ioctl(ifc_ctl_sock, SIOCSIFHWADDR, &ifr);
  ifc_close();
  return res;
}

int ifc_get_hwaddr(const char *name, void *ptr) {
  int r{-1};
  struct ifreq ifr;
  ifc_init_ifr(name, &ifr);
  ifc_init();
  r = ioctl(ifc_ctl_sock, SIOCGIFHWADDR, &ifr);
  if (r < -1) {
    return -1;
  }
  memcpy(ptr, &ifr.ifr_hwaddr.sa_data, ETH_ALEN);
  ifc_close();
  return 0;
}

static void ifc_init_vlan(const char *name, struct vlan_ioctl_args *vlan) {
  memset(vlan, 0, sizeof(vlan_ioctl_args));
  strncpy(vlan->device1, name, 24);
}

int vlan_ioctl(struct vlan_ioctl_args *vlan) {
  int res{-1};
  ifc_init();
  res = ioctl(ifc_ctl_sock, SIOCSIFVLAN, vlan);
  ifc_close();
  return res;
}

int ifc_add_vlan(const char *name, int count) {
  struct vlan_ioctl_args vlan;
  ifc_init_vlan(name, &vlan);
  vlan.cmd = ADD_VLAN_CMD;
  vlan.u.VID = count;
  return vlan_ioctl(&vlan);
}

int ifc_del_vlan(const char *name) {
  struct vlan_ioctl_args vlan;
  ifc_init_vlan(name, &vlan);
  vlan.cmd = DEL_VLAN_CMD;
  return vlan_ioctl(&vlan);
}

int ifc_set_vlan_flag(const char *name, unsigned int flag) {
  struct vlan_ioctl_args vlan;
  ifc_init_vlan(name, &vlan);
  vlan.cmd = SET_VLAN_FLAG_CMD;
  vlan.u.flag = flag;
  return vlan_ioctl(&vlan);
}

int ifc_set_vlan_name_type(const char *name, unsigned int type) {
  struct vlan_ioctl_args vlan;
  ifc_init_vlan(name, &vlan);
  vlan.cmd = SET_VLAN_FLAG_CMD;
  vlan.u.name_type = type;
  return vlan_ioctl(&vlan);
}
