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
/**        \file  TrafficSignInformationExe/include/PerceptionRearLaneInfoIDT/impl_type_perceptionrearlaneinfoidt.h
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

#ifndef TRAFFICSIGNINFORMATIONEXE_INCLUDE_PERCEPTIONREARLANEINFOIDT_IMPL_TYPE_PERCEPTIONREARLANEINFOIDT_H_
#define TRAFFICSIGNINFORMATIONEXE_INCLUDE_PERCEPTIONREARLANEINFOIDT_IMPL_TYPE_PERCEPTIONREARLANEINFOIDT_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include <array>
#include <cstdint>
#include <map>
#include <string>
#include <vector>
#include "Array_LaneEventGroupCam1VccIDT_5/impl_type_array_laneeventgroupcam1vccidt_5.h"
#include "LaneEventCam1IDT/impl_type_laneeventcam1idt.h"
#include "LaneMkrCam1LeIDT/impl_type_lanemkrcam1leidt.h"
#include "LaneMkrCam1RiIDT/impl_type_lanemkrcam1riidt.h"
#include "LaneMkrCam1SecClsLeIDT/impl_type_lanemkrcam1secclsleidt.h"
#include "LaneMkrCam1SecClsRiIDT/impl_type_lanemkrcam1secclsriidt.h"

namespace PerceptionRearLaneInfoIDT {

// VCA Disable [LNG-01,LNG-03,SLC-11,SLC-12,SLC-14,SLC-16,SPC-15] : VCA_MODELLEDDATATYPEGENERATOR_DATA_TYPE_DECLARATION
// VECTOR Disable AutosarC++17_10-A12.6.1: MD_MDTG_A12.6.1_GeneratedStructUninitializedMembers
// VECTOR Disable AutosarC++17_10-M8.5.1: MD_MDTG_M8.5.1_GeneratedStructUninitializedMembers
/*!
 * \brief Type PerceptionRearLaneInfoIDT.
 * \remark generated
 *
 * IMPLEMENTATION-DATA-TYPE /CppImplementationDataTypes/PerceptionRearLaneInfoIDT
 */
struct PerceptionRearLaneInfoIDT {
  using LaneMkrCam1Le_generated_type = LaneMkrCam1LeIDT::LaneMkrCam1LeIDT;
  using LaneMkrCam1Ri_generated_type = LaneMkrCam1RiIDT::LaneMkrCam1RiIDT;
  using LaneMkrCam1SecClsLe_generated_type = LaneMkrCam1SecClsLeIDT::LaneMkrCam1SecClsLeIDT;
  using LaneMkrCam1SecClsRi_generated_type = LaneMkrCam1SecClsRiIDT::LaneMkrCam1SecClsRiIDT;
  using LaneEventCam1_generated_type = LaneEventCam1IDT::LaneEventCam1IDT;
  using LaneEventGroupCam1Vccs_generated_type = Array_LaneEventGroupCam1VccIDT_5::Array_LaneEventGroupCam1VccIDT_5;

  LaneMkrCam1Le_generated_type LaneMkrCam1Le;
  LaneMkrCam1Ri_generated_type LaneMkrCam1Ri;
  LaneMkrCam1SecClsLe_generated_type LaneMkrCam1SecClsLe;
  LaneMkrCam1SecClsRi_generated_type LaneMkrCam1SecClsRi;
  LaneEventCam1_generated_type LaneEventCam1;
  LaneEventGroupCam1Vccs_generated_type LaneEventGroupCam1Vccs;
};
// VECTOR Enable AutosarC++17_10-A12.6.1
// VECTOR Enable AutosarC++17_10-M8.5.1

/*!
 * \brief Compare for equality with another PerceptionRearLaneInfoIDT instance.
 */
inline bool operator==(PerceptionRearLaneInfoIDT const& l,
                       PerceptionRearLaneInfoIDT const& r) noexcept {
  return (&l == &r) || ((l.LaneMkrCam1Le == r.LaneMkrCam1Le)
                         && (l.LaneMkrCam1Ri == r.LaneMkrCam1Ri)
                         && (l.LaneMkrCam1SecClsLe == r.LaneMkrCam1SecClsLe)
                         && (l.LaneMkrCam1SecClsRi == r.LaneMkrCam1SecClsRi)
                         && (l.LaneEventCam1 == r.LaneEventCam1)
                         && (l.LaneEventGroupCam1Vccs == r.LaneEventGroupCam1Vccs)
  );
}

/*!
 * \brief Compare for inequality with another PerceptionRearLaneInfoIDT instance.
 */
inline bool operator!=(PerceptionRearLaneInfoIDT const& l,
                       PerceptionRearLaneInfoIDT const& r) noexcept {
  return !(l == r);
}
// VCA Enable : VCA_MODELLEDDATATYPEGENERATOR_DATA_TYPE_DECLARATION

}  // namespace PerceptionRearLaneInfoIDT

#endif  // TRAFFICSIGNINFORMATIONEXE_INCLUDE_PERCEPTIONREARLANEINFOIDT_IMPL_TYPE_PERCEPTIONREARLANEINFOIDT_H_
