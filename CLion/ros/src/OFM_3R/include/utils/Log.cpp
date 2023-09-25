/*
 * @Author: yao.xie 1595341200@qq.com
 * @Date: 2023-07-31 11:54:15
 * @LastEditors: yao.xie 1595341200@qq.com
 * @LastEditTime: 2023-07-31 15:35:57
 * @FilePath: /ros_learning/src/OFM_3R/include/utils/Log.cpp
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
#include "Log.h"
namespace Log {
void SignalHandler(const char *data, size_t size) {
    // std::string glog_file = "./log/error.log";
    // std::ofstream fs(glog_file, std::ios::app);
    std::string str = std::string(data, size);
    // fs << str;
    // fs.close();
    ALOG(INFO) << str;
}
void init() {
    google::InitGoogleLogging("test");
    google::InstallFailureSignalHandler(); // 配置安装程序崩溃失败信号处理器
    FLAGS_log_dir = "/media/psf/Home/Desktop/work/ros_learning";
    FLAGS_alsologtostderr = true;
    google::LogToStderr();
    google::SetStderrLogging(
        google::GLOG_INFO); // 输出log的最低等级是 INFO (可以设置为WARNING或者更高)
    google::InstallFailureWriter(
        &SignalHandler); // 安装配置程序失败信号的信息打印过程，设置回调函数
    FLAGS_colorlogtostderr = true; // 标准输出带颜色
    FLAGS_minloglevel = -1;
    FLAGS_v = 3;
    // VLOG(-1) << "VLOG(-1) message.";
    // VLOG(0) << "VLOG(0) message.";
    // VLOG(1) << "VLOG(1) message.";
    // VLOG(2) << "VLOG(2) message.";
    // VLOG(3) << "VLOG(3) message.";
}
}; // namespace Log
