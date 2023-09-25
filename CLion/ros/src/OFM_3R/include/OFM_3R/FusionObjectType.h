/*
 * @Author: yao.xie 1595341200@qq.com
 * @Date: 2023-07-25 16:42:08
 * @LastEditors: yao.xie 1595341200@qq.com
 * @LastEditTime: 2023-07-25 16:59:22
 * @FilePath: /ros_learning/src/OFM_3R/include/OFM_3R/preprocess/FusionObjectType.h
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
#ifndef OBJECTTYPE_H
#define OBJECTTYPE_H

namespace FusionObjectType {
enum Type : int16_t {
    /* the object class could be determined */
    JKOBJFUSN_TRACKABLE_U16CLASS_UNKNOWN = 0x0000u,
    /* the object is a car */
    JKOBJFUSN_TRACKABLE_U16CLASS_VEHICLE_CAR = 0x0210u,
    /* the object is a truck */
    JKOBJFUSN_TRACKABLE_U16CLASS_VEHICLE_TRUCK = 0x0220u,
    /* the object is a pedestrian that cannot be further classified */
    JKOBJFUSN_TRACKABLE_U16CLASS_PEDESTRIAN_UNKNOWN = 0x0800u,
    /* the object is a motor cycle */
    JKOBJFUSN_TRACKABLE_U16CLASS_2WHEELER_MOTORCYCLE = 0x0420u,
    /* the object is a bicycle 目前类别当做Tricycle使用 */
    JKOBJFUSN_TRACKABLE_U16CLASS_2WHEELER_BICYCLE = 0x0410u,
};
};

#endif
