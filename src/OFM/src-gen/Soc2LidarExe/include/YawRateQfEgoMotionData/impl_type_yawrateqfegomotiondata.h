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
/**        \file  Soc2LidarExe/include/YawRateQfEgoMotionData/impl_type_yawrateqfegomotiondata.h
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

#ifndef SOC2LIDAREXE_INCLUDE_YAWRATEQFEGOMOTIONDATA_IMPL_TYPE_YAWRATEQFEGOMOTIONDATA_H_
#define SOC2LIDAREXE_INCLUDE_YAWRATEQFEGOMOTIONDATA_IMPL_TYPE_YAWRATEQFEGOMOTIONDATA_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include <array>
#include <cstdint>
#include <map>
#include <string>
#include <vector>

namespace YawRateQfEgoMotionData {

/*!
 * \brief Type YawRateQfEgoMotionData.
 * \remark generated
 * \trace SPEC-5951372
 *
 * IMPLEMENTATION-DATA-TYPE /CppImplementationDataTypes/YawRateQfEgoMotionData
 */
enum class YawRateQfEgoMotionData : uint8_t {
  Qf1_DevOfDataUndefd = 0,
  Qf1_DataTmpUndefdAndEvlnInProgs = 1,
  Qf1_DevOfDataNotWithinRngAllwd = 2,
  Qf1_DataCalcdWithDevDefd = 3
};

}  // namespace YawRateQfEgoMotionData

#endif  // SOC2LIDAREXE_INCLUDE_YAWRATEQFEGOMOTIONDATA_IMPL_TYPE_YAWRATEQFEGOMOTIONDATA_H_
