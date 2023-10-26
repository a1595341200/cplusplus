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
/**        \file  PerceptionRearExe/include/AccFusnTrfcReqIDT/impl_type_accfusntrfcreqidt.h
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

#ifndef PERCEPTIONREAREXE_INCLUDE_ACCFUSNTRFCREQIDT_IMPL_TYPE_ACCFUSNTRFCREQIDT_H_
#define PERCEPTIONREAREXE_INCLUDE_ACCFUSNTRFCREQIDT_IMPL_TYPE_ACCFUSNTRFCREQIDT_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include <array>
#include <cstdint>
#include <map>
#include <string>
#include <vector>
#include "IdPen1VccIDT/impl_type_idpen1vccidt.h"
#include "OnOff1VccIDT/impl_type_onoff1vccidt.h"

namespace AccFusnTrfcReqIDT {

// VCA Disable [LNG-01,LNG-03,SLC-11,SLC-12,SLC-14,SLC-16,SPC-15] : VCA_MODELLEDDATATYPEGENERATOR_DATA_TYPE_DECLARATION
// VECTOR Disable AutosarC++17_10-A12.6.1: MD_MDTG_A12.6.1_GeneratedStructUninitializedMembers
// VECTOR Disable AutosarC++17_10-M8.5.1: MD_MDTG_M8.5.1_GeneratedStructUninitializedMembers
/*!
 * \brief Type AccFusnTrfcReqIDT.
 * \remark generated
 *
 * IMPLEMENTATION-DATA-TYPE /CppImplementationDataTypes/AccFusnTrfcReqIDT
 */
struct AccFusnTrfcReqIDT {
  using AccFusnTrfcReqOnOff1_generated_type = OnOff1VccIDT::OnOff1VccIDT;
  using AccFusnTrfcReqIdPen_generated_type = IdPen1VccIDT::IdPen1VccIDT;

  AccFusnTrfcReqOnOff1_generated_type AccFusnTrfcReqOnOff1;
  AccFusnTrfcReqIdPen_generated_type AccFusnTrfcReqIdPen;
};
// VECTOR Enable AutosarC++17_10-A12.6.1
// VECTOR Enable AutosarC++17_10-M8.5.1

/*!
 * \brief Compare for equality with another AccFusnTrfcReqIDT instance.
 */
inline bool operator==(AccFusnTrfcReqIDT const& l,
                       AccFusnTrfcReqIDT const& r) noexcept {
  return (&l == &r) || ((l.AccFusnTrfcReqOnOff1 == r.AccFusnTrfcReqOnOff1)
                         && (l.AccFusnTrfcReqIdPen == r.AccFusnTrfcReqIdPen)
  );
}

/*!
 * \brief Compare for inequality with another AccFusnTrfcReqIDT instance.
 */
inline bool operator!=(AccFusnTrfcReqIDT const& l,
                       AccFusnTrfcReqIDT const& r) noexcept {
  return !(l == r);
}
// VCA Enable : VCA_MODELLEDDATATYPEGENERATOR_DATA_TYPE_DECLARATION

}  // namespace AccFusnTrfcReqIDT

#endif  // PERCEPTIONREAREXE_INCLUDE_ACCFUSNTRFCREQIDT_IMPL_TYPE_ACCFUSNTRFCREQIDT_H_
