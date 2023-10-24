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
/**        \file  TrafficSignInformationExe/include/AccTarSeln1RecIDT/impl_type_acctarseln1recidt.h
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

#ifndef TRAFFICSIGNINFORMATIONEXE_INCLUDE_ACCTARSELN1RECIDT_IMPL_TYPE_ACCTARSELN1RECIDT_H_
#define TRAFFICSIGNINFORMATIONEXE_INCLUDE_ACCTARSELN1RECIDT_IMPL_TYPE_ACCTARSELN1RECIDT_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include <array>
#include <cstdint>
#include <map>
#include <string>
#include <vector>
#include "uint8IDT/impl_type_uint8idt.h"

namespace AccTarSeln1RecIDT {

// VCA Disable [LNG-01,LNG-03,SLC-11,SLC-12,SLC-14,SLC-16,SPC-15] : VCA_MODELLEDDATATYPEGENERATOR_DATA_TYPE_DECLARATION
// VECTOR Disable AutosarC++17_10-A12.6.1: MD_MDTG_A12.6.1_GeneratedStructUninitializedMembers
// VECTOR Disable AutosarC++17_10-M8.5.1: MD_MDTG_M8.5.1_GeneratedStructUninitializedMembers
/*!
 * \brief Type AccTarSeln1RecIDT.
 * \remark generated
 *
 * IMPLEMENTATION-DATA-TYPE /CppImplementationDataTypes/AccTarSeln1RecIDT
 */
struct AccTarSeln1RecIDT {
  using AccTgtFrstClstLane_generated_type = uint8IDT::uint8IDT;
  using AccTgtSecClstLane_generated_type = uint8IDT::uint8IDT;
  using AccTgtAdjLLeft_generated_type = uint8IDT::uint8IDT;
  using AccTgtAdjLRight_generated_type = uint8IDT::uint8IDT;

  AccTgtFrstClstLane_generated_type AccTgtFrstClstLane;
  AccTgtSecClstLane_generated_type AccTgtSecClstLane;
  AccTgtAdjLLeft_generated_type AccTgtAdjLLeft;
  AccTgtAdjLRight_generated_type AccTgtAdjLRight;
};
// VECTOR Enable AutosarC++17_10-A12.6.1
// VECTOR Enable AutosarC++17_10-M8.5.1

/*!
 * \brief Compare for equality with another AccTarSeln1RecIDT instance.
 */
inline bool operator==(AccTarSeln1RecIDT const& l,
                       AccTarSeln1RecIDT const& r) noexcept {
  return (&l == &r) || ((l.AccTgtFrstClstLane == r.AccTgtFrstClstLane)
                         && (l.AccTgtSecClstLane == r.AccTgtSecClstLane)
                         && (l.AccTgtAdjLLeft == r.AccTgtAdjLLeft)
                         && (l.AccTgtAdjLRight == r.AccTgtAdjLRight)
  );
}

/*!
 * \brief Compare for inequality with another AccTarSeln1RecIDT instance.
 */
inline bool operator!=(AccTarSeln1RecIDT const& l,
                       AccTarSeln1RecIDT const& r) noexcept {
  return !(l == r);
}
// VCA Enable : VCA_MODELLEDDATATYPEGENERATOR_DATA_TYPE_DECLARATION

}  // namespace AccTarSeln1RecIDT

#endif  // TRAFFICSIGNINFORMATIONEXE_INCLUDE_ACCTARSELN1RECIDT_IMPL_TYPE_ACCTARSELN1RECIDT_H_
