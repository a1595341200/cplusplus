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
/**        \file  TargetPredictExe/include/BrkPedlPsdRecIDT/impl_type_brkpedlpsdrecidt.h
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

#ifndef TARGETPREDICTEXE_INCLUDE_BRKPEDLPSDRECIDT_IMPL_TYPE_BRKPEDLPSDRECIDT_H_
#define TARGETPREDICTEXE_INCLUDE_BRKPEDLPSDRECIDT_IMPL_TYPE_BRKPEDLPSDRECIDT_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include <array>
#include <cstdint>
#include <map>
#include <string>
#include <vector>
#include "GenQf1VccIDT/impl_type_genqf1vccidt.h"
#include "NoYes1VccIDT/impl_type_noyes1vccidt.h"
#include "uint8IDT/impl_type_uint8idt.h"

namespace BrkPedlPsdRecIDT {

// VCA Disable [LNG-01,LNG-03,SLC-11,SLC-12,SLC-14,SLC-16,SPC-15] : VCA_MODELLEDDATATYPEGENERATOR_DATA_TYPE_DECLARATION
// VECTOR Disable AutosarC++17_10-A12.6.1: MD_MDTG_A12.6.1_GeneratedStructUninitializedMembers
// VECTOR Disable AutosarC++17_10-M8.5.1: MD_MDTG_M8.5.1_GeneratedStructUninitializedMembers
/*!
 * \brief Type BrkPedlPsdRecIDT.
 * \remark generated
 *
 * IMPLEMENTATION-DATA-TYPE /CppImplementationDataTypes/BrkPedlPsdRecIDT
 */
struct BrkPedlPsdRecIDT {
  using BrkPedlPsd_generated_type = NoYes1VccIDT::NoYes1VccIDT;
  using BrkPedlPsdQf_generated_type = GenQf1VccIDT::GenQf1VccIDT;
  using BrkPedlPsdCntr_generated_type = uint8IDT::uint8IDT;
  using BrkPedlPsdChks_generated_type = uint8IDT::uint8IDT;
  using BrkPedlNotPsdSafe_generated_type = NoYes1VccIDT::NoYes1VccIDT;

  BrkPedlPsd_generated_type BrkPedlPsd;
  BrkPedlPsdQf_generated_type BrkPedlPsdQf;
  BrkPedlPsdCntr_generated_type BrkPedlPsdCntr;
  BrkPedlPsdChks_generated_type BrkPedlPsdChks;
  BrkPedlNotPsdSafe_generated_type BrkPedlNotPsdSafe;
};
// VECTOR Enable AutosarC++17_10-A12.6.1
// VECTOR Enable AutosarC++17_10-M8.5.1

/*!
 * \brief Compare for equality with another BrkPedlPsdRecIDT instance.
 */
inline bool operator==(BrkPedlPsdRecIDT const& l,
                       BrkPedlPsdRecIDT const& r) noexcept {
  return (&l == &r) || ((l.BrkPedlPsd == r.BrkPedlPsd)
                         && (l.BrkPedlPsdQf == r.BrkPedlPsdQf)
                         && (l.BrkPedlPsdCntr == r.BrkPedlPsdCntr)
                         && (l.BrkPedlPsdChks == r.BrkPedlPsdChks)
                         && (l.BrkPedlNotPsdSafe == r.BrkPedlNotPsdSafe)
  );
}

/*!
 * \brief Compare for inequality with another BrkPedlPsdRecIDT instance.
 */
inline bool operator!=(BrkPedlPsdRecIDT const& l,
                       BrkPedlPsdRecIDT const& r) noexcept {
  return !(l == r);
}
// VCA Enable : VCA_MODELLEDDATATYPEGENERATOR_DATA_TYPE_DECLARATION

}  // namespace BrkPedlPsdRecIDT

#endif  // TARGETPREDICTEXE_INCLUDE_BRKPEDLPSDRECIDT_IMPL_TYPE_BRKPEDLPSDRECIDT_H_
