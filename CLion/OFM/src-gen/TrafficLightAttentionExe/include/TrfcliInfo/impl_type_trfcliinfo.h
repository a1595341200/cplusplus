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
/**        \file  TrafficLightAttentionExe/include/TrfcliInfo/impl_type_trfcliinfo.h
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

#ifndef TRAFFICLIGHTATTENTIONEXE_INCLUDE_TRFCLIINFO_IMPL_TYPE_TRFCLIINFO_H_
#define TRAFFICLIGHTATTENTIONEXE_INCLUDE_TRFCLIINFO_IMPL_TYPE_TRFCLIINFO_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include <array>
#include <cstdint>
#include <map>
#include <string>
#include <vector>

namespace TrfcliInfo {

/*!
 * \brief Type TrfcliInfo.
 * \remark generated
 * \trace SPEC-5951372
 *
 * IMPLEMENTATION-DATA-TYPE /CppImplementationDataTypes/TrfcliInfo
 */
enum class TrfcliInfo : uint8_t {
  TrfcLiInfo1_Empty = 0,
  TrfcLiInfo1_Timetogo = 1,
  TrfcLiInfo1_LightenRedCircle = 2,
  TrfcLiInfo1_LightenYellowCircle = 3,
  TrfcLiInfo1_LightenGreenCircle = 4,
  TrfcLiInfo1_LightenRedLeftArrow = 5,
  TrfcLiInfo1_LightenYellowLeftArrow = 6,
  TrfcLiInfo1_LightenGreenLeftArrow = 7,
  TrfcLiInfo1_LightenRedStraightArrow = 8,
  TrfcLiInfo1_LightenYellowStraightArrow = 9,
  TrfcLiInfo1_LightenGreenStraightArrow = 10,
  TrfcLiInfo1_LightenRedRightArrow = 11,
  TrfcLiInfo1_LightenYellowRightArrow = 12,
  TrfcLiInfo1_LightenGreenRightArrow = 13
};

}  // namespace TrfcliInfo

#endif  // TRAFFICLIGHTATTENTIONEXE_INCLUDE_TRFCLIINFO_IMPL_TYPE_TRFCLIINFO_H_
