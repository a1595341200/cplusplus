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
/**        \file  RoadModelFusionExe/include/GeoFenceIDT/impl_type_geofenceidt.h
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

#ifndef ROADMODELFUSIONEXE_INCLUDE_GEOFENCEIDT_IMPL_TYPE_GEOFENCEIDT_H_
#define ROADMODELFUSIONEXE_INCLUDE_GEOFENCEIDT_IMPL_TYPE_GEOFENCEIDT_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include <array>
#include <cstdint>
#include <map>
#include <string>
#include <vector>
#include "GeofenceTypeIDT/impl_type_geofencetypeidt.h"
#include "sint8IDT/impl_type_sint8idt.h"
#include "uint32IDT/impl_type_uint32idt.h"
#include "uint8IDT/impl_type_uint8idt.h"

namespace GeoFenceIDT {

// VCA Disable [LNG-01,LNG-03,SLC-11,SLC-12,SLC-14,SLC-16,SPC-15] : VCA_MODELLEDDATATYPEGENERATOR_DATA_TYPE_DECLARATION
// VECTOR Disable AutosarC++17_10-A12.6.1: MD_MDTG_A12.6.1_GeneratedStructUninitializedMembers
// VECTOR Disable AutosarC++17_10-M8.5.1: MD_MDTG_M8.5.1_GeneratedStructUninitializedMembers
/*!
 * \brief Type GeoFenceIDT.
 * \remark generated
 *
 * IMPLEMENTATION-DATA-TYPE /CppImplementationDataTypes/GeoFenceIDT
 */
struct GeoFenceIDT {
  using InstanceId_generated_type = uint32IDT::uint32IDT;
  using PathId_generated_type = uint32IDT::uint32IDT;
  using LaneNumber_generated_type = uint8IDT::uint8IDT;
  using PathOffset_generated_type = uint32IDT::uint32IDT;
  using EndOffset_generated_type = uint32IDT::uint32IDT;
  using GeoFenceCount_generated_type = uint8IDT::uint8IDT;
  using GeofenceType_generated_type = GeofenceTypeIDT::GeofenceTypeIDT;
  using Lanesequence_generated_type = sint8IDT::sint8IDT;
  using S_Offset_generated_type = uint32IDT::uint32IDT;
  using E_Offset_generated_type = uint32IDT::uint32IDT;

  InstanceId_generated_type InstanceId;
  PathId_generated_type PathId;
  LaneNumber_generated_type LaneNumber;
  PathOffset_generated_type PathOffset;
  EndOffset_generated_type EndOffset;
  GeoFenceCount_generated_type GeoFenceCount;
  GeofenceType_generated_type GeofenceType;
  Lanesequence_generated_type Lanesequence;
  S_Offset_generated_type S_Offset;
  E_Offset_generated_type E_Offset;
};
// VECTOR Enable AutosarC++17_10-A12.6.1
// VECTOR Enable AutosarC++17_10-M8.5.1

/*!
 * \brief Compare for equality with another GeoFenceIDT instance.
 */
inline bool operator==(GeoFenceIDT const& l,
                       GeoFenceIDT const& r) noexcept {
  return (&l == &r) || ((l.InstanceId == r.InstanceId)
                         && (l.PathId == r.PathId)
                         && (l.LaneNumber == r.LaneNumber)
                         && (l.PathOffset == r.PathOffset)
                         && (l.EndOffset == r.EndOffset)
                         && (l.GeoFenceCount == r.GeoFenceCount)
                         && (l.GeofenceType == r.GeofenceType)
                         && (l.Lanesequence == r.Lanesequence)
                         && (l.S_Offset == r.S_Offset)
                         && (l.E_Offset == r.E_Offset)
  );
}

/*!
 * \brief Compare for inequality with another GeoFenceIDT instance.
 */
inline bool operator!=(GeoFenceIDT const& l,
                       GeoFenceIDT const& r) noexcept {
  return !(l == r);
}
// VCA Enable : VCA_MODELLEDDATATYPEGENERATOR_DATA_TYPE_DECLARATION

}  // namespace GeoFenceIDT

#endif  // ROADMODELFUSIONEXE_INCLUDE_GEOFENCEIDT_IMPL_TYPE_GEOFENCEIDT_H_
