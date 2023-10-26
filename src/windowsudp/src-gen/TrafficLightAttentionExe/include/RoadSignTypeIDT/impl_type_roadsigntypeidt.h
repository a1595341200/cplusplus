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
/**        \file  TrafficLightAttentionExe/include/RoadSignTypeIDT/impl_type_roadsigntypeidt.h
 *        \brief
 *
 *      \details
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 *  GENERATOR INFORMATION
 *  -------------------------------------------------------------------------------------------------------------------
 *    Generator Name: amsr_modelleddatatypes_api
 *         Commit ID: ac290ed6b867d81fff39c644dd6c9dfa396bacad
 *********************************************************************************************************************/

#ifndef TRAFFICLIGHTATTENTIONEXE_INCLUDE_ROADSIGNTYPEIDT_IMPL_TYPE_ROADSIGNTYPEIDT_H_
#define TRAFFICLIGHTATTENTIONEXE_INCLUDE_ROADSIGNTYPEIDT_IMPL_TYPE_ROADSIGNTYPEIDT_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include <array>
#include <cstdint>
#include <map>
#include <string>
#include <vector>

namespace RoadSignTypeIDT {

// VCA Disable [LNG-01,LNG-03,SLC-11,SLC-12,SLC-14,SLC-16,SPC-15] : VCA_MODELLEDDATATYPEGENERATOR_DATA_TYPE_DECLARATION
/*!
 * \brief Type RoadSignTypeIDT.
 * \remark generated
 *
 * IMPLEMENTATION-DATA-TYPE /CppImplementationDataTypes/RoadSignTypeIDT
 */
enum class RoadSignTypeIDT : uint8_t {
  RoadSignType_Unknown = 0,
  RoadSignType_Left = 1,
  RoadSignType_Right = 2,
  RoadSignType_Forward = 3,
  RoadSignType_LeftForward = 4,
  RoadSignType_LeftRight = 5,
  RoadSignType_RightForward = 6,
  RoadSignType_LeftRightForward = 7,
  RoadSignType_Uturn = 8,
  RoadSignType_LeftturnUturn = 9,
  RoadSignType_10kphSpeedLimitation = 10,
  RoadSignType_20kphSpeedLimitation = 11,
  RoadSignType_30kphSpeedLimitation = 12,
  RoadSignType_40kphSpeedLimitation = 13,
  RoadSignType_50kphSpeedLimitation = 15,
  RoadSignType_60kphSpeedLimitation = 16,
  RoadSignType_70kphSpeedLimitation = 17,
  RoadSignType_80kphSpeedLimitation = 18,
  RoadSignType_90kphSpeedLimitation = 19,
  RoadSignType_100kphSpeedLimitation = 20,
  RoadSignType_110kphSpeedLimitation = 21,
  RoadSignType_120kphSpeedLimitation = 22,
  RoadSignType_130kphSpeedLimitation = 23,
  RoadSignType_140kphSpeedLimitation = 24,
  RoadSignType_150kphSpeedLimitation = 25,
  RoadSignType_Reserve1 = 26,
  RoadSignType_Reserve2 = 27,
  RoadSignType_Reserve3 = 28,
  RoadSignType_Reserve4 = 29,
  RoadSignType_Reserve5 = 30,
  RoadSignType_Reserve6 = 31
};
// VCA Enable : VCA_MODELLEDDATATYPEGENERATOR_DATA_TYPE_DECLARATION

}  // namespace RoadSignTypeIDT

#endif  // TRAFFICLIGHTATTENTIONEXE_INCLUDE_ROADSIGNTYPEIDT_IMPL_TYPE_ROADSIGNTYPEIDT_H_
