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
/**        \file  PerceptionSideExe/include/LppLaneChgStsIDT/impl_type_lpplanechgstsidt.h
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

#ifndef PERCEPTIONSIDEEXE_INCLUDE_LPPLANECHGSTSIDT_IMPL_TYPE_LPPLANECHGSTSIDT_H_
#define PERCEPTIONSIDEEXE_INCLUDE_LPPLANECHGSTSIDT_IMPL_TYPE_LPPLANECHGSTSIDT_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include <array>
#include <cstdint>
#include <map>
#include <string>
#include <vector>
#include "LaneChangeFailReason1VccIDT/impl_type_lanechangefailreason1vccidt.h"
#include "LaneChangeIDT/impl_type_lanechangeidt.h"
#include "LaneChgAutInfoForAsyHiWay1VccIDT/impl_type_lanechgautinfoforasyhiway1vccidt.h"
#include "LaneChgstatusIDT/impl_type_lanechgstatusidt.h"
#include "uint8IDT/impl_type_uint8idt.h"

namespace LppLaneChgStsIDT {

// VCA Disable [LNG-01,LNG-03,SLC-11,SLC-12,SLC-14,SLC-16,SPC-15] : VCA_MODELLEDDATATYPEGENERATOR_DATA_TYPE_DECLARATION
// VECTOR Disable AutosarC++17_10-A12.6.1: MD_MDTG_A12.6.1_GeneratedStructUninitializedMembers
// VECTOR Disable AutosarC++17_10-M8.5.1: MD_MDTG_M8.5.1_GeneratedStructUninitializedMembers
/*!
 * \brief Type LppLaneChgStsIDT.
 * \remark generated
 *
 * IMPLEMENTATION-DATA-TYPE /CppImplementationDataTypes/LppLaneChgStsIDT
 */
struct LppLaneChgStsIDT {
  using LaneChgtype_generated_type = LaneChangeIDT::LaneChangeIDT;
  using LaneChgpossible_generated_type = LaneChgAutInfoForAsyHiWay1VccIDT::LaneChgAutInfoForAsyHiWay1VccIDT;
  using LaneChgstatus_generated_type = LaneChgstatusIDT::LaneChgstatusIDT;
  using LaneChgreason_generated_type = LaneChangeFailReason1VccIDT::LaneChangeFailReason1VccIDT;
  using LaneChgObjId_generated_type = uint8IDT::uint8IDT;

  LaneChgtype_generated_type LaneChgtype;
  LaneChgpossible_generated_type LaneChgpossible;
  LaneChgstatus_generated_type LaneChgstatus;
  LaneChgreason_generated_type LaneChgreason;
  LaneChgObjId_generated_type LaneChgObjId;
};
// VECTOR Enable AutosarC++17_10-A12.6.1
// VECTOR Enable AutosarC++17_10-M8.5.1

/*!
 * \brief Compare for equality with another LppLaneChgStsIDT instance.
 */
inline bool operator==(LppLaneChgStsIDT const& l,
                       LppLaneChgStsIDT const& r) noexcept {
  return (&l == &r) || ((l.LaneChgtype == r.LaneChgtype)
                         && (l.LaneChgpossible == r.LaneChgpossible)
                         && (l.LaneChgstatus == r.LaneChgstatus)
                         && (l.LaneChgreason == r.LaneChgreason)
                         && (l.LaneChgObjId == r.LaneChgObjId)
  );
}

/*!
 * \brief Compare for inequality with another LppLaneChgStsIDT instance.
 */
inline bool operator!=(LppLaneChgStsIDT const& l,
                       LppLaneChgStsIDT const& r) noexcept {
  return !(l == r);
}
// VCA Enable : VCA_MODELLEDDATATYPEGENERATOR_DATA_TYPE_DECLARATION

}  // namespace LppLaneChgStsIDT

#endif  // PERCEPTIONSIDEEXE_INCLUDE_LPPLANECHGSTSIDT_IMPL_TYPE_LPPLANECHGSTSIDT_H_
