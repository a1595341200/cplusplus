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
/**        \file  ObjectFusionModelExe/include/FrntCamSts1VccIDT/impl_type_frntcamsts1vccidt.h
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

#ifndef OBJECTFUSIONMODELEXE_INCLUDE_FRNTCAMSTS1VCCIDT_IMPL_TYPE_FRNTCAMSTS1VCCIDT_H_
#define OBJECTFUSIONMODELEXE_INCLUDE_FRNTCAMSTS1VCCIDT_IMPL_TYPE_FRNTCAMSTS1VCCIDT_H_

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
#include "LowilluminanceIDT/impl_type_lowilluminanceidt.h"
#include "StaticCaliSts1IDT/impl_type_staticcalists1idt.h"
#include "uint8IDT/impl_type_uint8idt.h"

namespace FrntCamSts1VccIDT {

// VCA Disable [LNG-01,LNG-03,SLC-11,SLC-12,SLC-14,SLC-16,SPC-15] : VCA_MODELLEDDATATYPEGENERATOR_DATA_TYPE_DECLARATION
// VECTOR Disable AutosarC++17_10-A12.6.1: MD_MDTG_A12.6.1_GeneratedStructUninitializedMembers
// VECTOR Disable AutosarC++17_10-M8.5.1: MD_MDTG_M8.5.1_GeneratedStructUninitializedMembers
/*!
 * \brief Type FrntCamSts1VccIDT.
 * \remark generated
 *
 * IMPLEMENTATION-DATA-TYPE /CppImplementationDataTypes/FrntCamSts1VccIDT
 */
struct FrntCamSts1VccIDT {
  using Blockage_generated_type = CamBlck1IDT::CamBlck1IDT;
  using Condensation_generated_type = CamBlck1IDT::CamBlck1IDT;
  using StaticCalibration_generated_type = StaticCaliSts1IDT::StaticCaliSts1IDT;
  using DynCalibration_generated_type = DynCaliSts1IDT::DynCaliSts1IDT;
  using Fault_generated_type = uint8IDT::uint8IDT;
  using CamStsChks_generated_type = uint8IDT::uint8IDT;
  using CamStsCntr_generated_type = uint8IDT::uint8IDT;
  using Lowilluminance_generated_type = LowilluminanceIDT::LowilluminanceIDT;

  Blockage_generated_type Blockage;
  Condensation_generated_type Condensation;
  StaticCalibration_generated_type StaticCalibration;
  DynCalibration_generated_type DynCalibration;
  Fault_generated_type Fault;
  CamStsChks_generated_type CamStsChks;
  CamStsCntr_generated_type CamStsCntr;
  Lowilluminance_generated_type Lowilluminance;
};
// VECTOR Enable AutosarC++17_10-A12.6.1
// VECTOR Enable AutosarC++17_10-M8.5.1

/*!
 * \brief Compare for equality with another FrntCamSts1VccIDT instance.
 */
inline bool operator==(FrntCamSts1VccIDT const& l,
                       FrntCamSts1VccIDT const& r) noexcept {
  return (&l == &r) || ((l.Blockage == r.Blockage)
                         && (l.Condensation == r.Condensation)
                         && (l.StaticCalibration == r.StaticCalibration)
                         && (l.DynCalibration == r.DynCalibration)
                         && (l.Fault == r.Fault)
                         && (l.CamStsChks == r.CamStsChks)
                         && (l.CamStsCntr == r.CamStsCntr)
                         && (l.Lowilluminance == r.Lowilluminance)
  );
}

/*!
 * \brief Compare for inequality with another FrntCamSts1VccIDT instance.
 */
inline bool operator!=(FrntCamSts1VccIDT const& l,
                       FrntCamSts1VccIDT const& r) noexcept {
  return !(l == r);
}
// VCA Enable : VCA_MODELLEDDATATYPEGENERATOR_DATA_TYPE_DECLARATION

}  // namespace FrntCamSts1VccIDT

#endif  // OBJECTFUSIONMODELEXE_INCLUDE_FRNTCAMSTS1VCCIDT_IMPL_TYPE_FRNTCAMSTS1VCCIDT_H_
