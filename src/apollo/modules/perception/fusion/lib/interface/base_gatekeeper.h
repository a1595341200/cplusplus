/*
 * @Author: yao.xie 1595341200@qq.com
 * @Date: 2023-09-23 00:22:06
 * @LastEditors: yao.xie 1595341200@qq.com
 * @LastEditTime: 2023-09-23 01:37:16
 * @FilePath: /cplusplus/src/apollo/modules/perception/fusion/lib/interface/base_gatekeeper.h
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置:
 * https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
/******************************************************************************
 * Copyright 2018 The Apollo Authors. All Rights Reserved.
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

#include <string>

#include "cyber/common/macros.h"
#include "modules/perception/fusion/base/base_forward_declaration.h"
#include "modules/perception/fusion/base/scene.h"
#include "modules/perception/fusion/base/sensor_frame.h"
#include "modules/perception/fusion/lib/gatekeeper/pbf_gatekeeper/PluginConfig.h"
#include "modules/perception/lib/registerer/registerer.h"
#include "modules/perception/pipeline/plugin.h"

namespace apollo {
namespace perception {
namespace fusion {

class BaseGatekeeper : public pipeline::Plugin {
 public:
  // using PluginConfig = pipeline::PluginConfig;

 public:
  BaseGatekeeper() = default;
  virtual ~BaseGatekeeper() = default;

  virtual bool Init() = 0;

  virtual bool AbleToPublish(const TrackPtr& track) = 0;

  virtual bool Init(const PluginConfig& plugin_config) = 0;

  virtual bool IsEnabled() const = 0;

  virtual std::string Name() const = 0;

  DISALLOW_COPY_AND_ASSIGN(BaseGatekeeper);
};

}  // namespace fusion
}  // namespace perception
}  // namespace apollo
