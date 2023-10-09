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
/**        \file  Soc2LidarExe/include/RollRateQfEgoMotionData/impl_type_rollrateqfegomotiondata.h
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

#ifndef SOC2LIDAREXE_INCLUDE_ROLLRATEQFEGOMOTIONDATA_IMPL_TYPE_ROLLRATEQFEGOMOTIONDATA_H_
#define SOC2LIDAREXE_INCLUDE_ROLLRATEQFEGOMOTIONDATA_IMPL_TYPE_ROLLRATEQFEGOMOTIONDATA_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include <array>
#include <cstdint>
#include <map>
#include <string>
#include <vector>

namespace RollRateQfEgoMotionData {

/*!
 * \brief Type RollRateQfEgoMotionData.
 * \remark generated
 * \trace SPEC-5951372
 *
 * IMPLEMENTATION-DATA-TYPE /CppImplementationDataTypes/RollRateQfEgoMotionData
 */
enum class RollRateQfEgoMotionData : uint8_t {
  Qf1_DevOfDataUndefd = 0,
  Qf1_DataTmpUndefdAndEvlnInProgs = 1,
  Qf1_DevOfDataNotWithinRngAllwd = 2,
  Qf1_DataCalcdWithDevDefd = 3
};

}  // namespace RollRateQfEgoMotionData

#endif  // SOC2LIDAREXE_INCLUDE_ROLLRATEQFEGOMOTIONDATA_IMPL_TYPE_ROLLRATEQFEGOMOTIONDATA_H_