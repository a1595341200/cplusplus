/*
 * @Author: yao.xie 1595341200@qq.com
 * @Date: 2023-10-19 15:03:54
 * @LastEditors: yao.xie 1595341200@qq.com
 * @LastEditTime: 2023-10-19 15:03:55
 * @FilePath: /cplusplus/multi-objective-fusion/jpdaf_tracking/src/local_tracker.h
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置:
 * https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
#ifndef _LOCAL_TRACKER_
#define _LOCAL_TRACKER_

#include "tracker.h"

namespace JPDAFTracker {
class LocalTracker : public Tracker {
 public:
  LocalTracker(const TrackerParam& _param);
  void track(const Detections& _detections, VecBool& _isAssoc, uint& _trackID);

 public:
  inline void push_back(const Track_ptr& _track) {
    tracks_.push_back(_track);
  }
  inline Vectors2f getNotAssociated() const {
    return not_associated_;
  }
  const Tracks getTracks() const {
    return tracks_;
  }

 private:
  double time;

 private:
  void associate(Vectors2f& _selected_detections, cv::Mat& _q, const Detections& _detections,
                 VecBool& _isAssoc);
  void delete_tracks();
};
}  // namespace JPDAFTracker

#endif
