//
// Created by 谢瑶 on 2023/3/3.
//

#include "ProxyPattern.h"

#include <Log.h>

#include <stdexcept>

void Proxy::show() {
  if (mContext) {
    mContext->show();
  } else {
    throw std::runtime_error("nullptr");
  }
}

void Tv::show() {
  SLOG(INFO) << " TV ";
}
