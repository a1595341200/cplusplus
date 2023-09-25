/*
 * @Author: yao.xie 1595341200@qq.com
 * @Date: 2023-07-25 11:55:07
 * @LastEditors: yao.xie 1595341200@qq.com
 * @LastEditTime: 2023-07-25 17:18:09
 * @FilePath: /ros_learning/src/OFM_3R/include/OFM_3R/preprocess/RadarConverter.h
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
#ifndef RADARCONVERTER_H
#define RADARCONVERTER_H
#include <stdint.h>

#define RADAR_CONVERTER_OBJECTS_OBJID_MIN (0u)
/** maximum value */
#define RADAR_CONVERTER_OBJECTS_OBJID_MAX (255u)

/** minimum value */
#define RADAR_CONVERTER_OBJECTS_OBJAX_MIN (-44.5f)
/** maximum value */
#define RADAR_CONVERTER_OBJECTS_OBJAX_MAX (44.5f)

/** minimum value */
#define RADAR_CONVERTER_OBJECTS_OBJAY_MIN (-12.8f)
/** maximum value */
#define RADAR_CONVERTER_OBJECTS_OBJAY_MAX (12.7f)

/** minimum value */
#define RADAR_CONVERTER_OBJECTS_BOXLENGTH_MIN (0.0f)
/** maximum value */
#define RADAR_CONVERTER_OBJECTS_BOXLENGTH_MAX (50.0f)

/** minimum value */
#define RADAR_CONVERTER_OBJECTS_BOXWIDTH_MIN (0.0f)
/** maximum value */
#define RADAR_CONVERTER_OBJECTS_BOXWIDTH_MAX (50.0f)

/** minimum value */
#define RADAR_CONVERTER_OBJECTS_OBJDX_MIN (0.5f)
/** maximum value */
#define RADAR_CONVERTER_OBJECTS_OBJDX_MAX (200.0f)

/** minimum value */
#define RADAR_CONVERTER_OBJECTS_OBJDY_MIN (-200.0f)
/** maximum value */
#define RADAR_CONVERTER_OBJECTS_OBJDY_MAX (200.0f)

/** minimum value */
#define RADAR_CONVERTER_OBJECTS_OBJVX_MIN (-128.0f)
/** maximum value */
#define RADAR_CONVERTER_OBJECTS_OBJVX_MAX (128.0f)

/** minimum value */
#define RADAR_CONVERTER_OBJECTS_OBJVY_MIN (-128.0f)
/** maximum value */
#define RADAR_CONVERTER_OBJECTS_OBJVY_MAX (128.0f)

uint32_t ConvertRdrSensorPat(const uint8_t u8RdrSnsrIdx);
uint16_t ConvertRdrObjType(const uint8_t objType);
uint16_t ConvertRdrMtnPat(const uint8_t objMtnPat);
#endif /* RADARCONVERTER_H */
