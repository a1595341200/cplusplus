/*
 * @Author: yao.xie 1595341200@qq.com
 * @Date: 2023-07-25 11:48:59
 * @LastEditors: yao.xie 1595341200@qq.com
 * @LastEditTime: 2023-07-25 17:32:49
 * @FilePath: /ros_learning/src/OFM_3R/include/OFM_3R/preprocess/RadarPreprocessInternal.h
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */

#include "FrontRadarPreprocessInternal.h"
#include "RadarConverter.h"
#include <array>
#include <iostream>

namespace PreprocessInternal {

bool validateObject(const FrontRadarObject &frontRadarObject) {
    static int i = 0;
    std::cout << "validateObject : " << i++ << " ID : " << frontRadarObject.ID << "\n";
    if ((frontRadarObject.ID <= RADAR_CONVERTER_OBJECTS_OBJID_MIN) ||
        (frontRadarObject.ID > RADAR_CONVERTER_OBJECTS_OBJID_MAX)) {
        printf("frontRadarObject.FourDID_ref invalid : %d\n", frontRadarObject.ID);
        return false;
    }

    if ((frontRadarObject.objXAccRel < RADAR_CONVERTER_OBJECTS_OBJAX_MIN) ||
        (frontRadarObject.objXAccRel > RADAR_CONVERTER_OBJECTS_OBJAX_MAX)) {
        // printf("frontRadarObject.ObjXAccRel_ref invalid : %f\n",frontRadarObject.ObjXAccRel_ref);
        return false;
    }
    if ((frontRadarObject.objYAccRel < RADAR_CONVERTER_OBJECTS_OBJAY_MIN) ||
        (frontRadarObject.objYAccRel > RADAR_CONVERTER_OBJECTS_OBJAY_MAX)) {
        // printf("frontRadarObject.ObjYAccRel_ref invalid : %f\n",frontRadarObject.ObjYAccRel_ref);
        return false;
    }
    if ((frontRadarObject.objBoundingBoxLength < RADAR_CONVERTER_OBJECTS_BOXLENGTH_MIN) ||
        (frontRadarObject.objBoundingBoxLength > RADAR_CONVERTER_OBJECTS_BOXLENGTH_MAX)) {
        // printf("frontRadarObject.ObjBoundingBoxLength_ref invalid : %f\n",frontRadarObject.ObjBoundingBoxLength_ref);
        return false;
    }
    if ((frontRadarObject.objBoundingBoxWidth < RADAR_CONVERTER_OBJECTS_BOXWIDTH_MIN) ||
        (frontRadarObject.objBoundingBoxWidth > RADAR_CONVERTER_OBJECTS_BOXWIDTH_MAX)) {
        // printf("frontRadarObject.ObjBoundingBoxWidth_ref invalid : %f\n",frontRadarObject.ObjBoundingBoxWidth_ref);
        return false;
    }

    if ((frontRadarObject.distX < RADAR_CONVERTER_OBJECTS_OBJDX_MIN) ||
        (frontRadarObject.distX > RADAR_CONVERTER_OBJECTS_OBJDX_MAX)) {
        // printf("frontRadarObject.DistX_ref invalid : %f\n",frontRadarObject.DistX_ref);
        return false;
    }

    if ((frontRadarObject.distY < RADAR_CONVERTER_OBJECTS_OBJDY_MIN) ||
        (frontRadarObject.distY > RADAR_CONVERTER_OBJECTS_OBJDY_MAX)) {
        // printf("frontRadarObject.DistY_ref invalid : %f\n",frontRadarObject.DistY_ref);
        return false;
    }

    if ((frontRadarObject.vAbsX < RADAR_CONVERTER_OBJECTS_OBJVX_MIN) ||
        (frontRadarObject.vAbsX > RADAR_CONVERTER_OBJECTS_OBJVX_MAX)) {
        // printf("frontRadarObject.VabsX_ref invalid : %f\n",frontRadarObject.VabsX_ref);
        return false;
    }

    if ((frontRadarObject.vAbsY < RADAR_CONVERTER_OBJECTS_OBJVY_MIN) ||
        (frontRadarObject.vAbsY > RADAR_CONVERTER_OBJECTS_OBJVY_MAX)) {
        // printf("frontRadarObject.VabsY_ref invalid : %f\n",frontRadarObject.VabsY_ref);
        return false;
    } else {
        return false;
    }
    return true;
}

MeasurementObject convertObject(const FrontRadarObject &frontRadar,
                                SensorType::Type sensorPattern) {
    std::cout << "ConvertObject FrontRadarObject" << std::endl;
    // uint32_t ConvertRdrSensorPat(const uint8_t u8RdrSnsrIdx);
    // uint16_t ConvertRdrObjType_4D(const uint8_t objType);
    // uint16_t ConvertRdrMtnPat_4D(const uint8_t objMtnPat);
    return {};
}

}; // namespace PreprocessInternal
