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
/**        \file  EHRExe/include/TrafficSignTypeIDT/impl_type_trafficsigntypeidt.h
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

#ifndef EHREXE_INCLUDE_TRAFFICSIGNTYPEIDT_IMPL_TYPE_TRAFFICSIGNTYPEIDT_H_
#define EHREXE_INCLUDE_TRAFFICSIGNTYPEIDT_IMPL_TYPE_TRAFFICSIGNTYPEIDT_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include <array>
#include <cstdint>
#include <map>
#include <string>
#include <vector>

namespace TrafficSignTypeIDT {

// VCA Disable [LNG-01,LNG-03,SLC-11,SLC-12,SLC-14,SLC-16,SPC-15] : VCA_MODELLEDDATATYPEGENERATOR_DATA_TYPE_DECLARATION
/*!
 * \brief Type TrafficSignTypeIDT.
 * \remark generated
 *
 * IMPLEMENTATION-DATA-TYPE /CppImplementationDataTypes/TrafficSignTypeIDT
 */
enum class TrafficSignTypeIDT : uint8_t {
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
// VCA Enable : VCA_MODELLEDDATATYPEGENERATOR_DATA_TYPE_DECLARATION

}  // namespace TrafficSignTypeIDT

#endif  // EHREXE_INCLUDE_TRAFFICSIGNTYPEIDT_IMPL_TYPE_TRAFFICSIGNTYPEIDT_H_
