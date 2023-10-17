/*
 * @Author: yao.xie 1595341200@qq.com
 * @Date: 2023-10-17 21:10:58
 * @LastEditors: yao.xie 1595341200@qq.com
 * @LastEditTime: 2023-10-17 22:11:21
 * @FilePath: /cplusplus/utils/include/Ip.h
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置:
 * https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
/*
 * @Author: yao.xie 1595341200@qq.com
 * @Date: 2023-10-17 21:10:58
 * @LastEditors: yao.xie 1595341200@qq.com
 * @LastEditTime: 2023-10-17 21:40:31
 * @FilePath: /cplusplus/utils/include/Ip.h
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置:
 * https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
#ifndef IP_H
#define IP_H
#include <arpa/inet.h>
#include <sys/socket.h>
#include <unistd.h>

#include <string>
namespace IP {
bool sring2addr(const std::string& in, in_addr& out);

int getUdpSocket();

//设置地址复用

bool setReuseAddr(int sock);

//加入多播组
bool setMulticastGroup(int socketFd, in_addr mutiaddr);

//设置是否接受自身消息
bool setMulticastLoop(int socketFd, bool on);

std::string ipToString(sockaddr_in& addr);

int getPort(in_port_t port);

};     // namespace IP
#endif /* IP_H */
