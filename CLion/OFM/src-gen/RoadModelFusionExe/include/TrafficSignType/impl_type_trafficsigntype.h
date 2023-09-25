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
/**        \file  RoadModelFusionExe/include/TrafficSignType/impl_type_trafficsigntype.h
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

#ifndef ROADMODELFUSIONEXE_INCLUDE_TRAFFICSIGNTYPE_IMPL_TYPE_TRAFFICSIGNTYPE_H_
#define ROADMODELFUSIONEXE_INCLUDE_TRAFFICSIGNTYPE_IMPL_TYPE_TRAFFICSIGNTYPE_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include <array>
#include <cstdint>
#include <map>
#include <string>
#include <vector>

namespace TrafficSignType {

/*!
 * \brief Type TrafficSignType.
 * \remark generated
 * \trace SPEC-5951372
 *
 * IMPLEMENTATION-DATA-TYPE /CppImplementationDataTypes/TrafficSignType
 */
enum class TrafficSignType : uint8_t {
  TrafficSignType_RoadWorks = 6,
  TrafficSignType_Stop = 33,
  TrafficSignType_OvertakingProhibited = 46,
  TrafficSignType_ChildrenAndSchoolZone = 52,
  TrafficSignType_MinSpeedLimit = 86,
  TrafficSignType_MaxSpeedLimit = 87,
  TrafficSignType_EndOfSpeedLimit = 88,
  TrafficSignType_EndOfProhibitionOnOvertaking = 244,
  TrafficSignType_NoEntrance = 245,
  TrafficSignType_AllSpeedLimitCancel = 246,
  TrafficSignType_NoParkingSign = 247,
  TrafficSignType_overpass = 249,
  TrafficSignType_Others = 250,
  TrafficSignType_Unknown = 255
};

}  // namespace TrafficSignType

#endif  // ROADMODELFUSIONEXE_INCLUDE_TRAFFICSIGNTYPE_IMPL_TYPE_TRAFFICSIGNTYPE_H_
