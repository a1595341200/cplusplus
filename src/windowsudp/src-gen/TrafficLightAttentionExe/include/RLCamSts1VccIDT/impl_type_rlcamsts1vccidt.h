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
/**        \file  TrafficLightAttentionExe/include/RLCamSts1VccIDT/impl_type_rlcamsts1vccidt.h
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

#ifndef TRAFFICLIGHTATTENTIONEXE_INCLUDE_RLCAMSTS1VCCIDT_IMPL_TYPE_RLCAMSTS1VCCIDT_H_
#define TRAFFICLIGHTATTENTIONEXE_INCLUDE_RLCAMSTS1VCCIDT_IMPL_TYPE_RLCAMSTS1VCCIDT_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include <array>
#include <cstdint>
#include <map>
#include <string>
#include <vector>
#include "CamBlck1IDT/impl_type_camblck1idt.h"
#include "DynCaliSts1IDT/impl_type_dyncalists1idt.h"
#include "StaticCaliSts1IDT/impl_type_staticcalists1idt.h"
#include "uint8IDT/impl_type_uint8idt.h"

namespace RLCamSts1VccIDT {

// VCA Disable [LNG-01,LNG-03,SLC-11,SLC-12,SLC-14,SLC-16,SPC-15] : VCA_MODELLEDDATATYPEGENERATOR_DATA_TYPE_DECLARATION
// VECTOR Disable AutosarC++17_10-A12.6.1: MD_MDTG_A12.6.1_GeneratedStructUninitializedMembers
// VECTOR Disable AutosarC++17_10-M8.5.1: MD_MDTG_M8.5.1_GeneratedStructUninitializedMembers
/*!
 * \brief Type RLCamSts1VccIDT.
 * \remark generated
 *
 * IMPLEMENTATION-DATA-TYPE /CppImplementationDataTypes/RLCamSts1VccIDT
 */
struct RLCamSts1VccIDT {
  using Blockage_generated_type = CamBlck1IDT::CamBlck1IDT;
  using Condensation_generated_type = CamBlck1IDT::CamBlck1IDT;
  using StaticCalibration_generated_type = StaticCaliSts1IDT::StaticCaliSts1IDT;
  using DynCalibration_generated_type = DynCaliSts1IDT::DynCaliSts1IDT;
  using Fault_generated_type = uint8IDT::uint8IDT;
  using CamStsChks_generated_type = uint8IDT::uint8IDT;
  using CamStsCntr_generated_type = uint8IDT::uint8IDT;

  Blockage_generated_type Blockage;
  Condensation_generated_type Condensation;
  StaticCalibration_generated_type StaticCalibration;
  DynCalibration_generated_type DynCalibration;
  Fault_generated_type Fault;
  CamStsChks_generated_type CamStsChks;
  CamStsCntr_generated_type CamStsCntr;
};
// VECTOR Enable AutosarC++17_10-A12.6.1
// VECTOR Enable AutosarC++17_10-M8.5.1

/*!
 * \brief Compare for equality with another RLCamSts1VccIDT instance.
 */
inline bool operator==(RLCamSts1VccIDT const& l,
                       RLCamSts1VccIDT const& r) noexcept {
  return (&l == &r) || ((l.Blockage == r.Blockage)
                         && (l.Condensation == r.Condensation)
                         && (l.StaticCalibration == r.StaticCalibration)
                         && (l.DynCalibration == r.DynCalibration)
                         && (l.Fault == r.Fault)
                         && (l.CamStsChks == r.CamStsChks)
                         && (l.CamStsCntr == r.CamStsCntr)
  );
}

/*!
 * \brief Compare for inequality with another RLCamSts1VccIDT instance.
 */
inline bool operator!=(RLCamSts1VccIDT const& l,
                       RLCamSts1VccIDT const& r) noexcept {
  return !(l == r);
}
// VCA Enable : VCA_MODELLEDDATATYPEGENERATOR_DATA_TYPE_DECLARATION

}  // namespace RLCamSts1VccIDT

#endif  // TRAFFICLIGHTATTENTIONEXE_INCLUDE_RLCAMSTS1VCCIDT_IMPL_TYPE_RLCAMSTS1VCCIDT_H_
