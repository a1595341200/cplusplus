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
/**        \file  TargetPredictExe/include/EscWarnIndcnReqRec1VccIDT/impl_type_escwarnindcnreqrec1vccidt.h
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

#ifndef TARGETPREDICTEXE_INCLUDE_ESCWARNINDCNREQREC1VCCIDT_IMPL_TYPE_ESCWARNINDCNREQREC1VCCIDT_H_
#define TARGETPREDICTEXE_INCLUDE_ESCWARNINDCNREQREC1VCCIDT_IMPL_TYPE_ESCWARNINDCNREQREC1VCCIDT_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include <array>
#include <cstdint>
#include <map>
#include <string>
#include <vector>
#include "EscWarnIndcnReq1VccIDT/impl_type_escwarnindcnreq1vccidt.h"
#include "uint8IDT/impl_type_uint8idt.h"

namespace EscWarnIndcnReqRec1VccIDT {

// VCA Disable [LNG-01,LNG-03,SLC-11,SLC-12,SLC-14,SLC-16,SPC-15] : VCA_MODELLEDDATATYPEGENERATOR_DATA_TYPE_DECLARATION
// VECTOR Disable AutosarC++17_10-A12.6.1: MD_MDTG_A12.6.1_GeneratedStructUninitializedMembers
// VECTOR Disable AutosarC++17_10-M8.5.1: MD_MDTG_M8.5.1_GeneratedStructUninitializedMembers
/*!
 * \brief Type EscWarnIndcnReqRec1VccIDT.
 * \remark generated
 *
 * IMPLEMENTATION-DATA-TYPE /CppImplementationDataTypes/EscWarnIndcnReqRec1VccIDT
 */
struct EscWarnIndcnReqRec1VccIDT {
  using EscWarnIndcnReq_generated_type = EscWarnIndcnReq1VccIDT::EscWarnIndcnReq1VccIDT;
  using EscWarnIndcnReqChks_generated_type = uint8IDT::uint8IDT;
  using EscWarnIndcnReqCntr_generated_type = uint8IDT::uint8IDT;

  EscWarnIndcnReq_generated_type EscWarnIndcnReq;
  EscWarnIndcnReqChks_generated_type EscWarnIndcnReqChks;
  EscWarnIndcnReqCntr_generated_type EscWarnIndcnReqCntr;
};
// VECTOR Enable AutosarC++17_10-A12.6.1
// VECTOR Enable AutosarC++17_10-M8.5.1

/*!
 * \brief Compare for equality with another EscWarnIndcnReqRec1VccIDT instance.
 */
inline bool operator==(EscWarnIndcnReqRec1VccIDT const& l,
                       EscWarnIndcnReqRec1VccIDT const& r) noexcept {
  return (&l == &r) || ((l.EscWarnIndcnReq == r.EscWarnIndcnReq)
                         && (l.EscWarnIndcnReqChks == r.EscWarnIndcnReqChks)
                         && (l.EscWarnIndcnReqCntr == r.EscWarnIndcnReqCntr)
  );
}

/*!
 * \brief Compare for inequality with another EscWarnIndcnReqRec1VccIDT instance.
 */
inline bool operator!=(EscWarnIndcnReqRec1VccIDT const& l,
                       EscWarnIndcnReqRec1VccIDT const& r) noexcept {
  return !(l == r);
}
// VCA Enable : VCA_MODELLEDDATATYPEGENERATOR_DATA_TYPE_DECLARATION

}  // namespace EscWarnIndcnReqRec1VccIDT

#endif  // TARGETPREDICTEXE_INCLUDE_ESCWARNINDCNREQREC1VCCIDT_IMPL_TYPE_ESCWARNINDCNREQREC1VCCIDT_H_
