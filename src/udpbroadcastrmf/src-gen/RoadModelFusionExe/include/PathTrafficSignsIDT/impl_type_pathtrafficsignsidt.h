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
/**        \file  RoadModelFusionExe/include/PathTrafficSignsIDT/impl_type_pathtrafficsignsidt.h
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

#ifndef ROADMODELFUSIONEXE_INCLUDE_PATHTRAFFICSIGNSIDT_IMPL_TYPE_PATHTRAFFICSIGNSIDT_H_
#define ROADMODELFUSIONEXE_INCLUDE_PATHTRAFFICSIGNSIDT_IMPL_TYPE_PATHTRAFFICSIGNSIDT_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include <array>
#include <cstdint>
#include <map>
#include <string>
#include <vector>
#include "TrafficSignShapeIDT/impl_type_trafficsignshapeidt.h"
#include "TrafficSignTypeIDT/impl_type_trafficsigntypeidt.h"
#include "sint32IDT/impl_type_sint32idt.h"
#include "uint32IDT/impl_type_uint32idt.h"
#include "uint8IDT/impl_type_uint8idt.h"

namespace PathTrafficSignsIDT {

// VCA Disable [LNG-01,LNG-03,SLC-11,SLC-12,SLC-14,SLC-16,SPC-15] : VCA_MODELLEDDATATYPEGENERATOR_DATA_TYPE_DECLARATION
// VECTOR Disable AutosarC++17_10-A12.6.1: MD_MDTG_A12.6.1_GeneratedStructUninitializedMembers
// VECTOR Disable AutosarC++17_10-M8.5.1: MD_MDTG_M8.5.1_GeneratedStructUninitializedMembers
/*!
 * \brief Type PathTrafficSignsIDT.
 * \remark generated
 *
 * IMPLEMENTATION-DATA-TYPE /CppImplementationDataTypes/PathTrafficSignsIDT
 */
struct PathTrafficSignsIDT {
  using InstanceId_generated_type = uint32IDT::uint32IDT;
  using PathId_generated_type = uint32IDT::uint32IDT;
  using LaneNumber_generated_type = uint8IDT::uint8IDT;
  using PathOffset_generated_type = uint32IDT::uint32IDT;
  using EndOffset_generated_type = uint32IDT::uint32IDT;
  using TrafficSignType_generated_type = TrafficSignTypeIDT::TrafficSignTypeIDT;
  using TrafficSignShape_generated_type = TrafficSignShapeIDT::TrafficSignShapeIDT;
  using Latitude_generated_type = sint32IDT::sint32IDT;
  using Longitude_generated_type = sint32IDT::sint32IDT;
  using Altitude_generated_type = sint32IDT::sint32IDT;

  InstanceId_generated_type InstanceId;
  PathId_generated_type PathId;
  LaneNumber_generated_type LaneNumber;
  PathOffset_generated_type PathOffset;
  EndOffset_generated_type EndOffset;
  TrafficSignType_generated_type TrafficSignType;
  TrafficSignShape_generated_type TrafficSignShape;
  Latitude_generated_type Latitude;
  Longitude_generated_type Longitude;
  Altitude_generated_type Altitude;
};
// VECTOR Enable AutosarC++17_10-A12.6.1
// VECTOR Enable AutosarC++17_10-M8.5.1

/*!
 * \brief Compare for equality with another PathTrafficSignsIDT instance.
 */
inline bool operator==(PathTrafficSignsIDT const& l,
                       PathTrafficSignsIDT const& r) noexcept {
  return (&l == &r) || ((l.InstanceId == r.InstanceId)
                         && (l.PathId == r.PathId)
                         && (l.LaneNumber == r.LaneNumber)
                         && (l.PathOffset == r.PathOffset)
                         && (l.EndOffset == r.EndOffset)
                         && (l.TrafficSignType == r.TrafficSignType)
                         && (l.TrafficSignShape == r.TrafficSignShape)
                         && (l.Latitude == r.Latitude)
                         && (l.Longitude == r.Longitude)
                         && (l.Altitude == r.Altitude)
  );
}

/*!
 * \brief Compare for inequality with another PathTrafficSignsIDT instance.
 */
inline bool operator!=(PathTrafficSignsIDT const& l,
                       PathTrafficSignsIDT const& r) noexcept {
  return !(l == r);
}
// VCA Enable : VCA_MODELLEDDATATYPEGENERATOR_DATA_TYPE_DECLARATION

}  // namespace PathTrafficSignsIDT

#endif  // ROADMODELFUSIONEXE_INCLUDE_PATHTRAFFICSIGNSIDT_IMPL_TYPE_PATHTRAFFICSIGNSIDT_H_
