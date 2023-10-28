//
// Created by 谢瑶 on 2023/1/5.
//

#ifndef DEV_IFC_H
#define DEV_IFC_H

#include <sys/cdefs.h>
#include <arpa/inet.h>
int ifc_init();
int ifc_close();
int ifc_up(const char *name);
int ifc_down(const char *name);
int ifc_set_hwaddr(const char *name, const void *ptr);
int ifc_get_hwaddr(const char *name, void *ptr);
int ifc_add_vlan(const char *name, int count);
int ifc_del_vlan(const char *name, int count);
int ifc_set_vlan_flag(const char *name, unsigned int flag);
int ifc_set_vlan_name_type(const char *name, unsigned int type);

#endif //DEV_IFC_H
