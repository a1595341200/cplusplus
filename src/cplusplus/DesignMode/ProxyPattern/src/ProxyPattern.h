/*
 * @Author: yao.xie 1595341200@qq.com
 * @Date: 2023-10-28 15:59:54
 * @LastEditors: yao.xie 1595341200@qq.com
 * @LastEditTime: 2023-10-28 16:02:06
 * @FilePath: /cplusplus/src/DesignMode/ProxyPattern/src/ProxyPattern.h
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置:
 * https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
//
// Created by 谢瑶 on 2023/3/3.
//

#ifndef DEV_SRC_DESIGNMODE_PROXYPATTERN_SRC_PROXYPATTERN_H_
#define DEV_SRC_DESIGNMODE_PROXYPATTERN_SRC_PROXYPATTERN_H_
#include <memory>

class Show {
 public:
  virtual void show() = 0;
};

class Proxy : public Show {
 public:
  void show() override;

 protected:
  std::shared_ptr<Show> mContext;
};

class Tv : public Show {
 public:
  void show() override;
};

class TvProxy : public Proxy {
 public:
  TvProxy() {
    mContext = std::make_shared<Tv>();
  }
};

#endif  // DEV_SRC_DESIGNMODE_PROXYPATTERN_SRC_PROXYPATTERN_H_
