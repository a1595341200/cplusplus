/*
 * @Author: yao.xie 1595341200@qq.com
 * @Date: 2023-08-29 17:41:50
 * @LastEditors: yao.xie 1595341200@qq.com
 * @LastEditTime: 2023-09-15 09:33:33
 * @FilePath: /ros_learning/src/qtlog/include/Log.h
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置
 * 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
#ifndef TAG
#define TAG "null"
#endif
#ifndef LOG_H
#define LOG_H

#include <glog/logging.h>

#define SLOG(level) LOG_##level
#define LOG_DEBUG DLOG(INFO) << TAG << " : "
#define LOG_INFO LOG(INFO) << TAG << " : "

class Log {
public:
  static void init(int argc, char *argv[]);
  static void shutdown();
};

#endif /* LOG_H */
