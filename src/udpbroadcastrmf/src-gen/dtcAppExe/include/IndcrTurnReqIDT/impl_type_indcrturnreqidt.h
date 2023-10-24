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
/**        \file  dtcAppExe/include/IndcrTurnReqIDT/impl_type_indcrturnreqidt.h
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

#ifndef DTCAPPEXE_INCLUDE_INDCRTURNREQIDT_IMPL_TYPE_INDCRTURNREQIDT_H_
#define DTCAPPEXE_INCLUDE_INDCRTURNREQIDT_IMPL_TYPE_INDCRTURNREQIDT_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include <array>
#include <cstdint>
#include <map>
#include <string>
#include <vector>
#include "IndcrTypExt1VccIDT/impl_type_indcrtypext1vccidt.h"
#include "Qf1VccIDT/impl_type_qf1vccidt.h"
#include "uint8IDT/impl_type_uint8idt.h"

namespace IndcrTurnReqIDT {

// VCA Disable [LNG-01,LNG-03,SLC-11,SLC-12,SLC-14,SLC-16,SPC-15] : VCA_MODELLEDDATATYPEGENERATOR_DATA_TYPE_DECLARATION
// VECTOR Disable AutosarC++17_10-A12.6.1: MD_MDTG_A12.6.1_GeneratedStructUninitializedMembers
// VECTOR Disable AutosarC++17_10-M8.5.1: MD_MDTG_M8.5.1_GeneratedStructUninitializedMembers
/*!
 * \brief Type IndcrTurnReqIDT.
 * \remark generated
 *
 * IMPLEMENTATION-DATA-TYPE /CppImplementationDataTypes/IndcrTurnReqIDT
 */
struct IndcrTurnReqIDT {
  using IndcrTypExtReq_generated_type = IndcrTypExt1VccIDT::IndcrTypExt1VccIDT;
  using IndcrTypExtReqToUpdQf_generated_type = Qf1VccIDT::Qf1VccIDT;
  using IndcrTypExtReqCntr_generated_type = uint8IDT::uint8IDT;
  using IndcrTypExtReqChks_generated_type = uint8IDT::uint8IDT;

  IndcrTypExtReq_generated_type IndcrTypExtReq;
  IndcrTypExtReqToUpdQf_generated_type IndcrTypExtReqToUpdQf;
  IndcrTypExtReqCntr_generated_type IndcrTypExtReqCntr;
  IndcrTypExtReqChks_generated_type IndcrTypExtReqChks;
};
// VECTOR Enable AutosarC++17_10-A12.6.1
// VECTOR Enable AutosarC++17_10-M8.5.1

/*!
 * \brief Compare for equality with another IndcrTurnReqIDT instance.
 */
inline bool operator==(IndcrTurnReqIDT const& l,
                       IndcrTurnReqIDT const& r) noexcept {
  return (&l == &r) || ((l.IndcrTypExtReq == r.IndcrTypExtReq)
                         && (l.IndcrTypExtReqToUpdQf == r.IndcrTypExtReqToUpdQf)
                         && (l.IndcrTypExtReqCntr == r.IndcrTypExtReqCntr)
                         && (l.IndcrTypExtReqChks == r.IndcrTypExtReqChks)
  );
}

/*!
 * \brief Compare for inequality with another IndcrTurnReqIDT instance.
 */
inline bool operator!=(IndcrTurnReqIDT const& l,
                       IndcrTurnReqIDT const& r) noexcept {
  return !(l == r);
}
// VCA Enable : VCA_MODELLEDDATATYPEGENERATOR_DATA_TYPE_DECLARATION

}  // namespace IndcrTurnReqIDT

#endif  // DTCAPPEXE_INCLUDE_INDCRTURNREQIDT_IMPL_TYPE_INDCRTURNREQIDT_H_
