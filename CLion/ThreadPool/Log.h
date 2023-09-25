/*
 * @Author: yao.xie 1595341200@qq.com
 * @Date: 2023-07-31 11:26:12
 * @LastEditors: yao.xie 1595341200@qq.com
 * @LastEditTime: 2023-07-31 11:54:28
 * @FilePath: /ros_learning/src/OFM_3R/include/utils/Log.h
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
#ifndef LOG_H
#define LOG_H
#ifndef TAG
#define TAG "null"
#endif
#include <glog/logging.h>
#define ALOG(level) ALOG_##level
#define ALOG_INFO LOG(INFO) << TAG << " : "
#define ALOG_WARNING LOG(WARNING) << TAG << " : "
#define ALOG_ERROR LOG(ERROR) << TAG << " : "
#define ALOG_FATAL LOG(FATAL) << TAG << " : "
namespace Log {
void SignalHandler(const char *data, size_t size);
void init();
};     // namespace Log
#endif /* LOG_H */
