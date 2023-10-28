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
/**        \file  TargetPredictExe/include/LaneEventCam1IDT/impl_type_laneeventcam1idt.h
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

#ifndef TARGETPREDICTEXE_INCLUDE_LANEEVENTCAM1IDT_IMPL_TYPE_LANEEVENTCAM1IDT_H_
#define TARGETPREDICTEXE_INCLUDE_LANEEVENTCAM1IDT_IMPL_TYPE_LANEEVENTCAM1IDT_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include <array>
#include <cstdint>
#include <map>
#include <string>
#include <vector>
#include "LaneChg1VccIDT/impl_type_lanechg1vccidt.h"
#include "uint8IDT/impl_type_uint8idt.h"

namespace LaneEventCam1IDT {

// VCA Disable [LNG-01,LNG-03,SLC-11,SLC-12,SLC-14,SLC-16,SPC-15] : VCA_MODELLEDDATATYPEGENERATOR_DATA_TYPE_DECLARATION
// VECTOR Disable AutosarC++17_10-A12.6.1: MD_MDTG_A12.6.1_GeneratedStructUninitializedMembers
// VECTOR Disable AutosarC++17_10-M8.5.1: MD_MDTG_M8.5.1_GeneratedStructUninitializedMembers
/*!
 * \brief Type LaneEventCam1IDT.
 * \remark generated
 *
 * IMPLEMENTATION-DATA-TYPE /CppImplementationDataTypes/LaneEventCam1IDT
 */
struct LaneEventCam1IDT {
  using NumberOfLanes_generated_type = uint8IDT::uint8IDT;
  using AssignedLaneNumber_generated_type = uint8IDT::uint8IDT;
  using LaneChange_generated_type = LaneChg1VccIDT::LaneChg1VccIDT;

  NumberOfLanes_generated_type NumberOfLanes;
  AssignedLaneNumber_generated_type AssignedLaneNumber;
  LaneChange_generated_type LaneChange;
};
// VECTOR Enable AutosarC++17_10-A12.6.1
// VECTOR Enable AutosarC++17_10-M8.5.1

/*!
 * \brief Compare for equality with another LaneEventCam1IDT instance.
 */
inline bool operator==(LaneEventCam1IDT const& l,
                       LaneEventCam1IDT const& r) noexcept {
  return (&l == &r) || ((l.NumberOfLanes == r.NumberOfLanes)
                         && (l.AssignedLaneNumber == r.AssignedLaneNumber)
                         && (l.LaneChange == r.LaneChange)
  );
}

/*!
 * \brief Compare for inequality with another LaneEventCam1IDT instance.
 */
inline bool operator!=(LaneEventCam1IDT const& l,
                       LaneEventCam1IDT const& r) noexcept {
  return !(l == r);
}
// VCA Enable : VCA_MODELLEDDATATYPEGENERATOR_DATA_TYPE_DECLARATION

}  // namespace LaneEventCam1IDT

#endif  // TARGETPREDICTEXE_INCLUDE_LANEEVENTCAM1IDT_IMPL_TYPE_LANEEVENTCAM1IDT_H_
