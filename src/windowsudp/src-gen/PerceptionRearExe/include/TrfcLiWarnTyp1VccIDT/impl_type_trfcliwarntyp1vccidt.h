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
/**        \file  PerceptionRearExe/include/TrfcLiWarnTyp1VccIDT/impl_type_trfcliwarntyp1vccidt.h
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

#ifndef PERCEPTIONREAREXE_INCLUDE_TRFCLIWARNTYP1VCCIDT_IMPL_TYPE_TRFCLIWARNTYP1VCCIDT_H_
#define PERCEPTIONREAREXE_INCLUDE_TRFCLIWARNTYP1VCCIDT_IMPL_TYPE_TRFCLIWARNTYP1VCCIDT_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include <array>
#include <cstdint>
#include <map>
#include <string>
#include <vector>
#include "IdPen2IDT/impl_type_idpen2idt.h"
#include "OnOff1VccIDT/impl_type_onoff1vccidt.h"

namespace TrfcLiWarnTyp1VccIDT {

// VCA Disable [LNG-01,LNG-03,SLC-11,SLC-12,SLC-14,SLC-16,SPC-15] : VCA_MODELLEDDATATYPEGENERATOR_DATA_TYPE_DECLARATION
// VECTOR Disable AutosarC++17_10-A12.6.1: MD_MDTG_A12.6.1_GeneratedStructUninitializedMembers
// VECTOR Disable AutosarC++17_10-M8.5.1: MD_MDTG_M8.5.1_GeneratedStructUninitializedMembers
/*!
 * \brief Type TrfcLiWarnTyp1VccIDT.
 * \remark generated
 *
 * IMPLEMENTATION-DATA-TYPE /CppImplementationDataTypes/TrfcLiWarnTyp1VccIDT
 */
struct TrfcLiWarnTyp1VccIDT {
  using TrfcLiWarnTypIdPen_generated_type = IdPen2IDT::IdPen2IDT;
  using TrfcLiWarnTypOnOff1_generated_type = OnOff1VccIDT::OnOff1VccIDT;

  TrfcLiWarnTypIdPen_generated_type TrfcLiWarnTypIdPen;
  TrfcLiWarnTypOnOff1_generated_type TrfcLiWarnTypOnOff1;
};
// VECTOR Enable AutosarC++17_10-A12.6.1
// VECTOR Enable AutosarC++17_10-M8.5.1

/*!
 * \brief Compare for equality with another TrfcLiWarnTyp1VccIDT instance.
 */
inline bool operator==(TrfcLiWarnTyp1VccIDT const& l,
                       TrfcLiWarnTyp1VccIDT const& r) noexcept {
  return (&l == &r) || ((l.TrfcLiWarnTypIdPen == r.TrfcLiWarnTypIdPen)
                         && (l.TrfcLiWarnTypOnOff1 == r.TrfcLiWarnTypOnOff1)
  );
}

/*!
 * \brief Compare for inequality with another TrfcLiWarnTyp1VccIDT instance.
 */
inline bool operator!=(TrfcLiWarnTyp1VccIDT const& l,
                       TrfcLiWarnTyp1VccIDT const& r) noexcept {
  return !(l == r);
}
// VCA Enable : VCA_MODELLEDDATATYPEGENERATOR_DATA_TYPE_DECLARATION

}  // namespace TrfcLiWarnTyp1VccIDT

#endif  // PERCEPTIONREAREXE_INCLUDE_TRFCLIWARNTYP1VCCIDT_IMPL_TYPE_TRFCLIWARNTYP1VCCIDT_H_
