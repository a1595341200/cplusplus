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
/**        \file  PerceptionRearExe/include/AccrPedlPsd0IDT/impl_type_accrpedlpsd0idt.h
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

#ifndef PERCEPTIONREAREXE_INCLUDE_ACCRPEDLPSD0IDT_IMPL_TYPE_ACCRPEDLPSD0IDT_H_
#define PERCEPTIONREAREXE_INCLUDE_ACCRPEDLPSD0IDT_IMPL_TYPE_ACCRPEDLPSD0IDT_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include <array>
#include <cstdint>
#include <map>
#include <string>
#include <vector>
#include "NoYes1VccIDT/impl_type_noyes1vccidt.h"
#include "uint8IDT/impl_type_uint8idt.h"

namespace AccrPedlPsd0IDT {

// VCA Disable [LNG-01,LNG-03,SLC-11,SLC-12,SLC-14,SLC-16,SPC-15] : VCA_MODELLEDDATATYPEGENERATOR_DATA_TYPE_DECLARATION
// VECTOR Disable AutosarC++17_10-A12.6.1: MD_MDTG_A12.6.1_GeneratedStructUninitializedMembers
// VECTOR Disable AutosarC++17_10-M8.5.1: MD_MDTG_M8.5.1_GeneratedStructUninitializedMembers
/*!
 * \brief Type AccrPedlPsd0IDT.
 * \remark generated
 *
 * IMPLEMENTATION-DATA-TYPE /CppImplementationDataTypes/AccrPedlPsd0IDT
 */
struct AccrPedlPsd0IDT {
  using AccrPedlPsd_generated_type = NoYes1VccIDT::NoYes1VccIDT;
  using AccrPedlPsdSts_generated_type = NoYes1VccIDT::NoYes1VccIDT;
  using AccrPedlPsdCntr_generated_type = uint8IDT::uint8IDT;
  using AccrPedlPsdChks_generated_type = uint8IDT::uint8IDT;

  AccrPedlPsd_generated_type AccrPedlPsd;
  AccrPedlPsdSts_generated_type AccrPedlPsdSts;
  AccrPedlPsdCntr_generated_type AccrPedlPsdCntr;
  AccrPedlPsdChks_generated_type AccrPedlPsdChks;
};
// VECTOR Enable AutosarC++17_10-A12.6.1
// VECTOR Enable AutosarC++17_10-M8.5.1

/*!
 * \brief Compare for equality with another AccrPedlPsd0IDT instance.
 */
inline bool operator==(AccrPedlPsd0IDT const& l,
                       AccrPedlPsd0IDT const& r) noexcept {
  return (&l == &r) || ((l.AccrPedlPsd == r.AccrPedlPsd)
                         && (l.AccrPedlPsdSts == r.AccrPedlPsdSts)
                         && (l.AccrPedlPsdCntr == r.AccrPedlPsdCntr)
                         && (l.AccrPedlPsdChks == r.AccrPedlPsdChks)
  );
}

/*!
 * \brief Compare for inequality with another AccrPedlPsd0IDT instance.
 */
inline bool operator!=(AccrPedlPsd0IDT const& l,
                       AccrPedlPsd0IDT const& r) noexcept {
  return !(l == r);
}
// VCA Enable : VCA_MODELLEDDATATYPEGENERATOR_DATA_TYPE_DECLARATION

}  // namespace AccrPedlPsd0IDT

#endif  // PERCEPTIONREAREXE_INCLUDE_ACCRPEDLPSD0IDT_IMPL_TYPE_ACCRPEDLPSD0IDT_H_
