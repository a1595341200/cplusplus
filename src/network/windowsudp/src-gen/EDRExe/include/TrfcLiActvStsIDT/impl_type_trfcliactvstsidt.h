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
/**        \file  EDRExe/include/TrfcLiActvStsIDT/impl_type_trfcliactvstsidt.h
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

#ifndef EDREXE_INCLUDE_TRFCLIACTVSTSIDT_IMPL_TYPE_TRFCLIACTVSTSIDT_H_
#define EDREXE_INCLUDE_TRFCLIACTVSTSIDT_IMPL_TYPE_TRFCLIACTVSTSIDT_H_

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

namespace TrfcLiActvStsIDT {

// VCA Disable [LNG-01,LNG-03,SLC-11,SLC-12,SLC-14,SLC-16,SPC-15] : VCA_MODELLEDDATATYPEGENERATOR_DATA_TYPE_DECLARATION
// VECTOR Disable AutosarC++17_10-A12.6.1: MD_MDTG_A12.6.1_GeneratedStructUninitializedMembers
// VECTOR Disable AutosarC++17_10-M8.5.1: MD_MDTG_M8.5.1_GeneratedStructUninitializedMembers
/*!
 * \brief Type TrfcLiActvStsIDT.
 * \remark generated
 *
 * IMPLEMENTATION-DATA-TYPE /CppImplementationDataTypes/TrfcLiActvStsIDT
 */
struct TrfcLiActvStsIDT {
  using TrfcLiActvStsOnOff1_generated_type = OnOff1VccIDT::OnOff1VccIDT;
  using TrfcLiActvStsIdPen_generated_type = IdPen1VccIDT::IdPen1VccIDT;

  TrfcLiActvStsOnOff1_generated_type TrfcLiActvStsOnOff1;
  TrfcLiActvStsIdPen_generated_type TrfcLiActvStsIdPen;
};
// VECTOR Enable AutosarC++17_10-A12.6.1
// VECTOR Enable AutosarC++17_10-M8.5.1

/*!
 * \brief Compare for equality with another TrfcLiActvStsIDT instance.
 */
inline bool operator==(TrfcLiActvStsIDT const& l,
                       TrfcLiActvStsIDT const& r) noexcept {
  return (&l == &r) || ((l.TrfcLiActvStsOnOff1 == r.TrfcLiActvStsOnOff1)
                         && (l.TrfcLiActvStsIdPen == r.TrfcLiActvStsIdPen)
  );
}

/*!
 * \brief Compare for inequality with another TrfcLiActvStsIDT instance.
 */
inline bool operator!=(TrfcLiActvStsIDT const& l,
                       TrfcLiActvStsIDT const& r) noexcept {
  return !(l == r);
}
// VCA Enable : VCA_MODELLEDDATATYPEGENERATOR_DATA_TYPE_DECLARATION

}  // namespace TrfcLiActvStsIDT

#endif  // EDREXE_INCLUDE_TRFCLIACTVSTSIDT_IMPL_TYPE_TRFCLIACTVSTSIDT_H_
