/*
 * @Author: yao.xie 1595341200@qq.com
 * @Date: 2023-09-23 00:22:51
 * @LastEditors: yao.xie 1595341200@qq.com
 * @LastEditTime: 2023-09-23 00:22:51
 * @FilePath: /cplusplus/src/apollo/modules/perception/pipeline/plugin_factory.h
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置:
 * https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
/******************************************************************************
 * Copyright 2022 The Apollo Authors. All Rights Reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 * http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *****************************************************************************/

#pragma once

#include <memory>
#include <unordered_map>

// #include "modules/perception/pipeline/proto/pipeline_config.pb.h"

#include "modules/common/util/factory.h"
#include "modules/perception/pipeline/plugin.h"

namespace apollo {
namespace perception {
namespace pipeline {

template <typename To, typename From>
std::unique_ptr<To> dynamic_unique_cast(std::unique_ptr<From>&& p) {
  To* q = dynamic_cast<To*>(p.get());
  if (q)
    p.release();
  return std::unique_ptr<To>(q);
}

class PluginFactory {
 public:
  static void Init();

  // static std::unique_ptr<Plugin> CreatePlugin(const PluginConfig& plugin_config);

 private:
  // static apollo::common::util::Factory<
  //     PluginType, Plugin, Plugin* (*)(const PluginConfig& plugin_config),
  //     std::unordered_map<PluginType, Plugin* (*)(const PluginConfig& plugin_config),
  //                        std::hash<int>>>
  //     plugin_factory_;
};

}  // namespace pipeline
}  // namespace perception
}  // namespace apollo
