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
/**        \file  LocalizationFusionExe/include/MapErrorStsIDT/impl_type_maperrorstsidt.h
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

#ifndef LOCALIZATIONFUSIONEXE_INCLUDE_MAPERRORSTSIDT_IMPL_TYPE_MAPERRORSTSIDT_H_
#define LOCALIZATIONFUSIONEXE_INCLUDE_MAPERRORSTSIDT_IMPL_TYPE_MAPERRORSTSIDT_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include <array>
#include <cstdint>
#include <map>
#include <string>
#include <vector>
#include "uint8IDT/impl_type_uint8idt.h"

namespace MapErrorStsIDT {

// VCA Disable [LNG-01,LNG-03,SLC-11,SLC-12,SLC-14,SLC-16,SPC-15] : VCA_MODELLEDDATATYPEGENERATOR_DATA_TYPE_DECLARATION
// VECTOR Disable AutosarC++17_10-A12.6.1: MD_MDTG_A12.6.1_GeneratedStructUninitializedMembers
// VECTOR Disable AutosarC++17_10-M8.5.1: MD_MDTG_M8.5.1_GeneratedStructUninitializedMembers
/*!
 * \brief Type MapErrorStsIDT.
 * \remark generated
 *
 * IMPLEMENTATION-DATA-TYPE /CppImplementationDataTypes/MapErrorStsIDT
 */
struct MapErrorStsIDT {
  using GnssErrorSts_generated_type = uint8IDT::uint8IDT;
  using CamErrorSts_generated_type = uint8IDT::uint8IDT;
  using HdmapErrorSts_generated_type = uint8IDT::uint8IDT;
  using VehErrorSts_generated_type = uint8IDT::uint8IDT;
  using ImuErrorSts_generated_type = uint8IDT::uint8IDT;

  GnssErrorSts_generated_type GnssErrorSts;
  CamErrorSts_generated_type CamErrorSts;
  HdmapErrorSts_generated_type HdmapErrorSts;
  VehErrorSts_generated_type VehErrorSts;
  ImuErrorSts_generated_type ImuErrorSts;
};
// VECTOR Enable AutosarC++17_10-A12.6.1
// VECTOR Enable AutosarC++17_10-M8.5.1

/*!
 * \brief Compare for equality with another MapErrorStsIDT instance.
 */
inline bool operator==(MapErrorStsIDT const& l,
                       MapErrorStsIDT const& r) noexcept {
  return (&l == &r) || ((l.GnssErrorSts == r.GnssErrorSts)
                         && (l.CamErrorSts == r.CamErrorSts)
                         && (l.HdmapErrorSts == r.HdmapErrorSts)
                         && (l.VehErrorSts == r.VehErrorSts)
                         && (l.ImuErrorSts == r.ImuErrorSts)
  );
}

/*!
 * \brief Compare for inequality with another MapErrorStsIDT instance.
 */
inline bool operator!=(MapErrorStsIDT const& l,
                       MapErrorStsIDT const& r) noexcept {
  return !(l == r);
}
// VCA Enable : VCA_MODELLEDDATATYPEGENERATOR_DATA_TYPE_DECLARATION

}  // namespace MapErrorStsIDT

#endif  // LOCALIZATIONFUSIONEXE_INCLUDE_MAPERRORSTSIDT_IMPL_TYPE_MAPERRORSTSIDT_H_
