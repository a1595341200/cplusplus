/**********************************************************************************************************************
 *  COPYRIGHT
 *  -------------------------------------------------------------------------------------------------------------------
 *  \verbatim
 *  Copyright (c) 2023 by Vector Informatik GmbH. All rights reserved.
 *
 *                This software is copyright protected and proprietary to Vector Informatik GmbH.
 *                Vector Informatik GmbH grants to you only those rights as set out in the license conditions.
 *                All other rights remain with Vector Informatik GmbH.
 *  \endverbatim
 *  -------------------------------------------------------------------------------------------------------------------
 *  FILE DESCRIPTION
 *  -----------------------------------------------------------------------------------------------------------------*/
/**        \file  Soc2LidarExe/include/VehicleInfo2Lidar/impl_type_vehicleinfo2lidar.h
 *        \brief
 *
 *      \details
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 *  GENERATOR INFORMATION
 *  -------------------------------------------------------------------------------------------------------------------
 *    Generator Name: amsr_modelleddatatypes_api
 *         Commit ID: 46318213ad7ac4d9dbeb54ad2e67c431a47a9a9f
 *********************************************************************************************************************/

#ifndef SOC2LIDAREXE_INCLUDE_VEHICLEINFO2LIDAR_IMPL_TYPE_VEHICLEINFO2LIDAR_H_
#define SOC2LIDAREXE_INCLUDE_VEHICLEINFO2LIDAR_IMPL_TYPE_VEHICLEINFO2LIDAR_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include <array>
#include <cstdint>
#include <map>
#include <string>
#include <vector>
#include "AmbTRawAmbTVal/impl_type_ambtrawambtval.h"
#include "BkpOfDstTrvldLidar/impl_type_bkpofdsttrvldlidar.h"
#include "CarTiGlb/impl_type_cartiglb.h"
#include "Checksum/impl_type_checksum.h"
#include "Counter/impl_type_counter.h"
#include "DataID/impl_type_dataid.h"
#include "DataLength/impl_type_datalength.h"
#include "ROI_Switch/impl_type_roi_switch.h"
#include "RainfallAmnt/impl_type_rainfallamntlidar.h"
#include "VehBattUSysU/impl_type_vehbattusysu.h"
#include "VehModMngtGlbSafe1CarModSts1/impl_type_vehmodmngtglbsafe1carmodsts1.h"
#include "VehModMngtGlbSafe1PwrLvlElecMai/impl_type_vehmodmngtglbsafe1pwrlvlelecmai.h"
#include "VehModMngtGlbSafe1UsgModSts/impl_type_vehmodmngtglbsafe1usgmodsts.h"
#include "VehSpdLgtALidar/impl_type_vehspdlgtalidar.h"
#include "VehTiAndDataDay/impl_type_vehtianddataday.h"
#include "VehTiAndDataHr1/impl_type_vehtianddatahr1.h"
#include "VehTiAndDataMins1/impl_type_vehtianddatamins1.h"
#include "VehTiAndDataMth1/impl_type_vehtianddatamth1.h"
#include "VehTiAndDataSec1/impl_type_vehtianddatasec1.h"
#include "VehTiAndDataYr1/impl_type_vehtianddatayr1.h"

namespace VehicleInfo2Lidar {

// VECTOR Disable AutosarC++17_10-A12.6.1: MD_MDTG_A12.6.1_GeneratedStructUninitializedMembers
// VECTOR Disable AutosarC++17_10-M8.5.1: MD_MDTG_M8.5.1_GeneratedStructUninitializedMembers
/*!
 * \brief Type VehicleInfo2Lidar.
 * \remark generated
 * \trace SPEC-5951372
 *
 * IMPLEMENTATION-DATA-TYPE /CppImplementationDataTypes/VehicleInfo2Lidar
 */
struct VehicleInfo2Lidar {
  using _AmbTRawAmbTVal_ref_type = AmbTRawAmbTVal::AmbTRawAmbTVal;
  using _RainfallAmntLidar_ref_type = RainfallAmnt::RainfallAmntLidar;
  using _VehSpdLgtALidar_ref_type = VehSpdLgtALidar::VehSpdLgtALidar;
  using _BkpOfDstTrvldLidar_ref_type = BkpOfDstTrvldLidar::BkpOfDstTrvldLidar;
  using _VehModMngtGlbSafe1CarModSts1_ref_type = VehModMngtGlbSafe1CarModSts1::VehModMngtGlbSafe1CarModSts1;
  using _VehModMngtGlbSafe1PwrLvlElecMai_ref_type = VehModMngtGlbSafe1PwrLvlElecMai::VehModMngtGlbSafe1PwrLvlElecMai;
  using _VehModMngtGlbSafe1UsgModSts_ref_type = VehModMngtGlbSafe1UsgModSts::VehModMngtGlbSafe1UsgModSts;
  using _VehTiAndDataDay_ref_type = VehTiAndDataDay::VehTiAndDataDay;
  using _VehTiAndDataHr1_ref_type = VehTiAndDataHr1::VehTiAndDataHr1;
  using _VehTiAndDataMins1_ref_type = VehTiAndDataMins1::VehTiAndDataMins1;
  using _VehTiAndDataMth1_ref_type = VehTiAndDataMth1::VehTiAndDataMth1;
  using _VehTiAndDataSec1_ref_type = VehTiAndDataSec1::VehTiAndDataSec1;
  using _VehTiAndDataYr1_ref_type = VehTiAndDataYr1::VehTiAndDataYr1;
  using _VehBattUSysU_ref_type = VehBattUSysU::VehBattUSysU;
  using _CarTiGlb_ref_type = CarTiGlb::CarTiGlb;
  using _ROI_Switch_ref_type = ROI_Switch::ROI_Switch;
  using _DataLength_ref_type = DataLength::DataLength;
  using _DataID_ref_type = DataID::DataID;
  using _Counter_ref_type = Counter::Counter;
  using _Checksum_ref_type = Checksum::Checksum;

  _AmbTRawAmbTVal_ref_type AmbTRawAmbTVal_ref;
  _RainfallAmntLidar_ref_type RainfallAmntLidar_ref;
  _VehSpdLgtALidar_ref_type VehSpdLgtALidar_ref;
  _BkpOfDstTrvldLidar_ref_type BkpOfDstTrvldLidar_ref;
  _VehModMngtGlbSafe1CarModSts1_ref_type VehModMngtGlbSafe1CarModSts1_ref;
  _VehModMngtGlbSafe1PwrLvlElecMai_ref_type VehModMngtGlbSafe1PwrLvlElecMai_ref;
  _VehModMngtGlbSafe1UsgModSts_ref_type VehModMngtGlbSafe1UsgModSts_ref;
  _VehTiAndDataDay_ref_type VehTiAndDataDay_ref;
  _VehTiAndDataHr1_ref_type VehTiAndDataHr1_ref;
  _VehTiAndDataMins1_ref_type VehTiAndDataMins1_ref;
  _VehTiAndDataMth1_ref_type VehTiAndDataMth1_ref;
  _VehTiAndDataSec1_ref_type VehTiAndDataSec1_ref;
  _VehTiAndDataYr1_ref_type VehTiAndDataYr1_ref;
  _VehBattUSysU_ref_type VehBattUSysU_ref;
  _CarTiGlb_ref_type CarTiGlb_ref;
  _ROI_Switch_ref_type ROI_Switch_ref;
  _DataLength_ref_type DataLength_ref;
  _DataID_ref_type DataID_ref;
  _Counter_ref_type Counter_ref;
  _Checksum_ref_type Checksum_ref;
};
// VECTOR Enable AutosarC++17_10-A12.6.1
// VECTOR Enable AutosarC++17_10-M8.5.1

/*!
 * \brief Compare for equality with another VehicleInfo2Lidar instance.
 */
inline bool operator==(VehicleInfo2Lidar const& l,
                       VehicleInfo2Lidar const& r) noexcept {
  return (&l == &r) || ((l.AmbTRawAmbTVal_ref == r.AmbTRawAmbTVal_ref)
                         && (l.RainfallAmntLidar_ref == r.RainfallAmntLidar_ref)
                         && (l.VehSpdLgtALidar_ref == r.VehSpdLgtALidar_ref)
                         && (l.BkpOfDstTrvldLidar_ref == r.BkpOfDstTrvldLidar_ref)
                         && (l.VehModMngtGlbSafe1CarModSts1_ref == r.VehModMngtGlbSafe1CarModSts1_ref)
                         && (l.VehModMngtGlbSafe1PwrLvlElecMai_ref == r.VehModMngtGlbSafe1PwrLvlElecMai_ref)
                         && (l.VehModMngtGlbSafe1UsgModSts_ref == r.VehModMngtGlbSafe1UsgModSts_ref)
                         && (l.VehTiAndDataDay_ref == r.VehTiAndDataDay_ref)
                         && (l.VehTiAndDataHr1_ref == r.VehTiAndDataHr1_ref)
                         && (l.VehTiAndDataMins1_ref == r.VehTiAndDataMins1_ref)
                         && (l.VehTiAndDataMth1_ref == r.VehTiAndDataMth1_ref)
                         && (l.VehTiAndDataSec1_ref == r.VehTiAndDataSec1_ref)
                         && (l.VehTiAndDataYr1_ref == r.VehTiAndDataYr1_ref)
                         && (l.VehBattUSysU_ref == r.VehBattUSysU_ref)
                         && (l.CarTiGlb_ref == r.CarTiGlb_ref)
                         && (l.ROI_Switch_ref == r.ROI_Switch_ref)
                         && (l.DataLength_ref == r.DataLength_ref)
                         && (l.DataID_ref == r.DataID_ref)
                         && (l.Counter_ref == r.Counter_ref)
                         && (l.Checksum_ref == r.Checksum_ref)
  );
}

/*!
 * \brief Compare for inequality with another VehicleInfo2Lidar instance.
 */
inline bool operator!=(VehicleInfo2Lidar const& l,
                       VehicleInfo2Lidar const& r) noexcept {
  return !(l == r);
}

}  // namespace VehicleInfo2Lidar

#endif  // SOC2LIDAREXE_INCLUDE_VEHICLEINFO2LIDAR_IMPL_TYPE_VEHICLEINFO2LIDAR_H_
