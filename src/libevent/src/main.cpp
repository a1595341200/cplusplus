#include <stdio.h>
#include <event.h>
#include <time.h>
#include <cstring>
#include <gtest/gtest.h>
struct event ev;
struct timeval tv;
static int count{0};

void timer_cb(int fd, short event, void *arg)    //回调函数
{
	printf("timer_cb\n");
	if (++count < 10) {
		event_add(&ev, &tv);    //重新注册
	}
}

TEST(libevent, event) {
	struct event_base *base = event_init();  //初始化libevent库
	tv.tv_sec = 1;
	tv.tv_usec = 0;
	event_base_set(base, &ev);
	event_set(&ev, -1, 0, timer_cb, NULL);  //初始化event结构中成员
	event_add(&ev, &tv);  //将event添加到events事件链表，注册事件
	event_base_dispatch(base);  //循环、分发事件
}

int main() {
	testing::InitGoogleTest();
	return RUN_ALL_TESTS();
}