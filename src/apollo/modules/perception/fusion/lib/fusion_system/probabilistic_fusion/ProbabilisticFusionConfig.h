/*
 * @Author: yao.xie 1595341200@qq.com
 * @Date: 2023-09-23 01:08:13
 * @LastEditors: yao.xie 1595341200@qq.com
 * @LastEditTime: 2023-09-23 01:15:33
 * @FilePath:
 * /cplusplus/src/apollo/modules/perception/fusion/lib/fusion_system/probabilistic_fusion/ProbabilisticFusionConfig.h
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置:
 * https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
#ifndef PROBABILISTICFUSIONCONFIG_H
#define PROBABILISTICFUSIONCONFIG_H
#include <string>
#include <vector>
class ProbabilisticFusionConfig {
 public:
  bool use_lidar() {
    return true;
  }

  bool use_radar() {
    return true;
  }
  bool use_camera() {
    return true;
  }
  std::string tracker_method() {
    return {};
  }

  std::string data_association_method() {
    return {};
  }
  std::string gate_keeper_method() {
    return {};
  }
  int prohibition_sensors_size() {
    return 128;
  }

  std::string prohibition_sensors(int i) {
    return {};
  }

  double max_lidar_invisible_period() {
    return {};
  }

  double max_radar_invisible_period() {
    return {};
  }

  double max_camera_invisible_period() {
    return {};
  }

  int max_cached_frame_num() {
    return 1000;
  }
};
#endif /* PROBABILISTICFUSIONCONFIG_H */
