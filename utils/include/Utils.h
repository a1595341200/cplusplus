/*
 * @Author: yao.xie 1595341200@qq.com
 * @Date: 2023-09-12 18:25:37
 * @LastEditors: yao.xie 1595341200@qq.com
 * @LastEditTime: 2023-09-12 18:41:51
 * @FilePath: /utils/include/Utils.h
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置
 * 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
#ifndef UTILS_H
#define UTILS_H
#include <thread>
void bindThreadToCore(int coreId, std::thread::native_handle_type handle);
void bindProcessToCore(int coreId);
#endif /* UTILS_H */
