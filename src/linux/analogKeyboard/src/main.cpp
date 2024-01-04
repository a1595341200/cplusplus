/*
 * @Author: yao.xie 1595341200@qq.com
 * @Date: 2024-01-04 15:24:58
 * @LastEditors: yao.xie 1595341200@qq.com
 * @LastEditTime: 2024-01-04 17:04:49
 * @FilePath: /cplusplus/src/linux/analogKeyboard/src/main.cpp
 * @Description:
 *
 * Copyright (c) 2024 by ${git_name_email}, All Rights Reserved.
 */
#include <Log.h>
#include <unistd.h>

#include <chrono>
#include <iostream>
#include <thread>

#include <X11/Xlib.h>
#include <X11/extensions/XTest.h>
#include <X11/keysym.h>
using namespace std::chrono_literals;

void test01() {
  Display *display = XOpenDisplay(NULL);
  if (display == NULL) {
    SLOG(INFO) << "无法打开显示器！\n";
    return;
  }

  Window window = DefaultRootWindow(display);
  KeySym keysym = XK_a;  // 要模拟的按键
  KeyCode keycode = NoSymbol;
  std::cout << "start \n";
  // 模拟按键按下事件
  std::thread t([] { system("gedit"); });
  std::this_thread::sleep_for(std::chrono::seconds(1));
  int x{}, y{};
  for (int i = 0; i < 10; i++) {
    keycode = XKeysymToKeycode(display, keysym);
    XTestFakeKeyEvent(display, keycode, True, 0);
    XFlush(display);
    XTestFakeKeyEvent(display, keycode, False, 0);
    XFlush(display);
    // 模拟鼠标移动到屏幕的右下角
    std::this_thread::sleep_for(std::chrono::seconds(1));
    x = x + 50;
    y = y + 50;
    XTestFakeMotionEvent(display, DefaultScreen(display), x, y, CurrentTime);
    XFlush(display);
    keysym++;
  }

  XCloseDisplay(display);
  t.join();
}

void test02() {
  Display *display = XOpenDisplay(NULL);
  if (display == NULL) {
    SLOG(INFO) << "无法打开显示器！\n";
    return;
  }

  Window window = DefaultRootWindow(display);
  std::cout << "test02 start \n";
  // 模拟鼠标移动到屏幕的右下角
  std::this_thread::sleep_for(std::chrono::seconds(1));
  XTestFakeMotionEvent(display, DefaultScreen(display), 0, 0, CurrentTime);
  XFlush(display);
  XTestFakeButtonEvent(display, Button1, true, CurrentTime);
  XTestFakeButtonEvent(display, Button1, false, CurrentTime);

  std::this_thread::sleep_for(1s);

  XTestFakeButtonEvent(display, Button1, true, CurrentTime);
  XTestFakeButtonEvent(display, Button1, false, CurrentTime);
  XFlush(display);
  XCloseDisplay(display);
}

int main() {
  test02();
  return 0;
}
