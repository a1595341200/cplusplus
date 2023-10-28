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
/**        \file  TrafficSignInformationExe/include/PerceptionLaneInfoIDT/impl_type_perceptionlaneinfoidt.h
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

#ifndef TRAFFICSIGNINFORMATIONEXE_INCLUDE_PERCEPTIONLANEINFOIDT_IMPL_TYPE_PERCEPTIONLANEINFOIDT_H_
#define TRAFFICSIGNINFORMATIONEXE_INCLUDE_PERCEPTIONLANEINFOIDT_IMPL_TYPE_PERCEPTIONLANEINFOIDT_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include <array>
#include <cstdint>
#include <map>
#include <string>
#include <vector>
#include "Array_LaneEventGroupCam1VccIDT_5/impl_type_array_laneeventgroupcam1vccidt_5.h"
#include "Array_LaneMkrTempCam1VccIDT_2/impl_type_array_lanemkrtempcam1vccidt_2.h"
#include "LaneEventCam1IDT/impl_type_laneeventcam1idt.h"
#include "LaneMkrCam1LeIDT/impl_type_lanemkrcam1leidt.h"
#include "LaneMkrCam1RiIDT/impl_type_lanemkrcam1riidt.h"
#include "LaneMkrCam1SecClsLeIDT/impl_type_lanemkrcam1secclsleidt.h"
#include "LaneMkrCam1SecClsRiIDT/impl_type_lanemkrcam1secclsriidt.h"
#include "RoadEdge1VccLeIDT/impl_type_roadedge1vccleidt.h"
#include "RoadEdge1VccRiIDT/impl_type_roadedge1vccriidt.h"

namespace PerceptionLaneInfoIDT {

// VCA Disable [LNG-01,LNG-03,SLC-11,SLC-12,SLC-14,SLC-16,SPC-15] : VCA_MODELLEDDATATYPEGENERATOR_DATA_TYPE_DECLARATION
// VECTOR Disable AutosarC++17_10-A12.6.1: MD_MDTG_A12.6.1_GeneratedStructUninitializedMembers
// VECTOR Disable AutosarC++17_10-M8.5.1: MD_MDTG_M8.5.1_GeneratedStructUninitializedMembers
/*!
 * \brief Type PerceptionLaneInfoIDT.
 * \remark generated
 *
 * IMPLEMENTATION-DATA-TYPE /CppImplementationDataTypes/PerceptionLaneInfoIDT
 */
struct PerceptionLaneInfoIDT {
  using LaneMkrCam1Le_generated_type = LaneMkrCam1LeIDT::LaneMkrCam1LeIDT;
  using LaneMkrCam1Ri_generated_type = LaneMkrCam1RiIDT::LaneMkrCam1RiIDT;
  using LaneMkrCam1SecClsLe_generated_type = LaneMkrCam1SecClsLeIDT::LaneMkrCam1SecClsLeIDT;
  using LaneMkrCam1SecClsRi_generated_type = LaneMkrCam1SecClsRiIDT::LaneMkrCam1SecClsRiIDT;
  using RoadEdge1VccLe_generated_type = RoadEdge1VccLeIDT::RoadEdge1VccLeIDT;
  using RoadEdge1VccRi_generated_type = RoadEdge1VccRiIDT::RoadEdge1VccRiIDT;
  using LaneEventCam1_generated_type = LaneEventCam1IDT::LaneEventCam1IDT;
  using LaneEventGroupCam1Vccs_generated_type = Array_LaneEventGroupCam1VccIDT_5::Array_LaneEventGroupCam1VccIDT_5;
  using LaneMkrTempCam1Vccs_generated_type = Array_LaneMkrTempCam1VccIDT_2::Array_LaneMkrTempCam1VccIDT_2;

  LaneMkrCam1Le_generated_type LaneMkrCam1Le;
  LaneMkrCam1Ri_generated_type LaneMkrCam1Ri;
  LaneMkrCam1SecClsLe_generated_type LaneMkrCam1SecClsLe;
  LaneMkrCam1SecClsRi_generated_type LaneMkrCam1SecClsRi;
  RoadEdge1VccLe_generated_type RoadEdge1VccLe;
  RoadEdge1VccRi_generated_type RoadEdge1VccRi;
  LaneEventCam1_generated_type LaneEventCam1;
  LaneEventGroupCam1Vccs_generated_type LaneEventGroupCam1Vccs;
  LaneMkrTempCam1Vccs_generated_type LaneMkrTempCam1Vccs;
};
// VECTOR Enable AutosarC++17_10-A12.6.1
// VECTOR Enable AutosarC++17_10-M8.5.1

/*!
 * \brief Compare for equality with another PerceptionLaneInfoIDT instance.
 */
inline bool operator==(PerceptionLaneInfoIDT const& l,
                       PerceptionLaneInfoIDT const& r) noexcept {
  return (&l == &r) || ((l.LaneMkrCam1Le == r.LaneMkrCam1Le)
                         && (l.LaneMkrCam1Ri == r.LaneMkrCam1Ri)
                         && (l.LaneMkrCam1SecClsLe == r.LaneMkrCam1SecClsLe)
                         && (l.LaneMkrCam1SecClsRi == r.LaneMkrCam1SecClsRi)
                         && (l.RoadEdge1VccLe == r.RoadEdge1VccLe)
                         && (l.RoadEdge1VccRi == r.RoadEdge1VccRi)
                         && (l.LaneEventCam1 == r.LaneEventCam1)
                         && (l.LaneEventGroupCam1Vccs == r.LaneEventGroupCam1Vccs)
                         && (l.LaneMkrTempCam1Vccs == r.LaneMkrTempCam1Vccs)
  );
}

/*!
 * \brief Compare for inequality with another PerceptionLaneInfoIDT instance.
 */
inline bool operator!=(PerceptionLaneInfoIDT const& l,
                       PerceptionLaneInfoIDT const& r) noexcept {
  return !(l == r);
}
// VCA Enable : VCA_MODELLEDDATATYPEGENERATOR_DATA_TYPE_DECLARATION

}  // namespace PerceptionLaneInfoIDT

#endif  // TRAFFICSIGNINFORMATIONEXE_INCLUDE_PERCEPTIONLANEINFOIDT_IMPL_TYPE_PERCEPTIONLANEINFOIDT_H_
