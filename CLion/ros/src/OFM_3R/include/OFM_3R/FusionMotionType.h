/*
 * @Author: yao.xie 1595341200@qq.com
 * @Date: 2023-07-25 13:50:59
 * @LastEditors: yao.xie 1595341200@qq.com
 * @LastEditTime: 2023-07-25 16:59:18
 * @FilePath: /ros_learning/src/OFM_3R/include/OFM_3R/preprocess/FusionMotiontype.h
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
#ifndef FUSIONMOTIONTYPE_H
#define FUSIONMOTIONTYPE_H

namespace FusionMotionType {

enum Type : uint16_t {
    JKOBJFUSN_TRACKABLE_U16MOTIONTYPE_UNKNOWN = 0x0000u,
    /* motion type is moving traffic in the direction of ego driving. Target going forward */
    JKOBJFUSN_TRACKABLE_U16MOTIONTYPE_MOVING_EGODIRECTION_DRIVING = 0x0111u,
    /* motion type is moving traffic in the direction of ego driving. Target not moving at the moment*/
    JKOBJFUSN_TRACKABLE_U16MOTIONTYPE_MOVING_EGODIRECTION_STOPPED = 0x0112u,
    /* motion type is moving traffic in the direction of ego driving. Target reversing */
    JKOBJFUSN_TRACKABLE_U16MOTIONTYPE_MOVING_EGODIRECTION_REVERSING = 0x0113u,
    /* motion type is moving traffic in the opposite direction of ego driving */
    JKOBJFUSN_TRACKABLE_U16MOTIONTYPE_MOVING_ONCOMING = 0x0120u,
    /* motion type is crossing traffic with respect to the ego driving direction */
    JKOBJFUSN_TRACKABLE_U16MOTIONTYPE_MOVING_CROSSING = 0x0130u,
    /* motion type is not moving and it will most likely stay like this */
    JKOBJFUSN_TRACKABLE_U16MOTIONTYPE_STATIONARY = 0x0200u,
};

}; // namespace FusionMotionType

#endif /* FUSIONMOTIONTYPE_H */
