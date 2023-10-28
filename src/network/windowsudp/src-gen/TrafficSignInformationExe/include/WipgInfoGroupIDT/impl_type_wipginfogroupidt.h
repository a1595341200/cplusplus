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
/**        \file  TrafficSignInformationExe/include/WipgInfoGroupIDT/impl_type_wipginfogroupidt.h
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

#ifndef TRAFFICSIGNINFORMATIONEXE_INCLUDE_WIPGINFOGROUPIDT_IMPL_TYPE_WIPGINFOGROUPIDT_H_
#define TRAFFICSIGNINFORMATIONEXE_INCLUDE_WIPGINFOGROUPIDT_IMPL_TYPE_WIPGINFOGROUPIDT_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include <array>
#include <cstdint>
#include <map>
#include <string>
#include <vector>
#include "OnOff1VccIDT/impl_type_onoff1vccidt.h"
#include "WipgSpdInfo1VccIDT/impl_type_wipgspdinfo1vccidt.h"
#include "WiprInWipgArIDT/impl_type_wiprinwipgaridt.h"

namespace WipgInfoGroupIDT {

// VCA Disable [LNG-01,LNG-03,SLC-11,SLC-12,SLC-14,SLC-16,SPC-15] : VCA_MODELLEDDATATYPEGENERATOR_DATA_TYPE_DECLARATION
// VECTOR Disable AutosarC++17_10-A12.6.1: MD_MDTG_A12.6.1_GeneratedStructUninitializedMembers
// VECTOR Disable AutosarC++17_10-M8.5.1: MD_MDTG_M8.5.1_GeneratedStructUninitializedMembers
/*!
 * \brief Type WipgInfoGroupIDT.
 * \remark generated
 *
 * IMPLEMENTATION-DATA-TYPE /CppImplementationDataTypes/WipgInfoGroupIDT
 */
struct WipgInfoGroupIDT {
  using WipgSpdInfo_generated_type = WipgSpdInfo1VccIDT::WipgSpdInfo1VccIDT;
  using WiprActv_generated_type = OnOff1VccIDT::OnOff1VccIDT;
  using WiprInWipgAr_generated_type = WiprInWipgArIDT::WiprInWipgArIDT;

  WipgSpdInfo_generated_type WipgSpdInfo;
  WiprActv_generated_type WiprActv;
  WiprInWipgAr_generated_type WiprInWipgAr;
};
// VECTOR Enable AutosarC++17_10-A12.6.1
// VECTOR Enable AutosarC++17_10-M8.5.1

/*!
 * \brief Compare for equality with another WipgInfoGroupIDT instance.
 */
inline bool operator==(WipgInfoGroupIDT const& l,
                       WipgInfoGroupIDT const& r) noexcept {
  return (&l == &r) || ((l.WipgSpdInfo == r.WipgSpdInfo)
                         && (l.WiprActv == r.WiprActv)
                         && (l.WiprInWipgAr == r.WiprInWipgAr)
  );
}

/*!
 * \brief Compare for inequality with another WipgInfoGroupIDT instance.
 */
inline bool operator!=(WipgInfoGroupIDT const& l,
                       WipgInfoGroupIDT const& r) noexcept {
  return !(l == r);
}
// VCA Enable : VCA_MODELLEDDATATYPEGENERATOR_DATA_TYPE_DECLARATION

}  // namespace WipgInfoGroupIDT

#endif  // TRAFFICSIGNINFORMATIONEXE_INCLUDE_WIPGINFOGROUPIDT_IMPL_TYPE_WIPGINFOGROUPIDT_H_
