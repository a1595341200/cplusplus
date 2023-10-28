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
/**        \file  LocalizationFusionExe/include/TjaTrailBusIDT/impl_type_tjatrailbusidt.h
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

#ifndef LOCALIZATIONFUSIONEXE_INCLUDE_TJATRAILBUSIDT_IMPL_TYPE_TJATRAILBUSIDT_H_
#define LOCALIZATIONFUSIONEXE_INCLUDE_TJATRAILBUSIDT_IMPL_TYPE_TJATRAILBUSIDT_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include <array>
#include <cstdint>
#include <map>
#include <string>
#include <vector>
#include "Array_singleIDT_30/impl_type_array_singleidt_30.h"
#include "uint8IDT/impl_type_uint8idt.h"

namespace TjaTrailBusIDT {

// VCA Disable [LNG-01,LNG-03,SLC-11,SLC-12,SLC-14,SLC-16,SPC-15] : VCA_MODELLEDDATATYPEGENERATOR_DATA_TYPE_DECLARATION
// VECTOR Disable AutosarC++17_10-A12.6.1: MD_MDTG_A12.6.1_GeneratedStructUninitializedMembers
// VECTOR Disable AutosarC++17_10-M8.5.1: MD_MDTG_M8.5.1_GeneratedStructUninitializedMembers
/*!
 * \brief Type TjaTrailBusIDT.
 * \remark generated
 *
 * IMPLEMENTATION-DATA-TYPE /CppImplementationDataTypes/TjaTrailBusIDT
 */
struct TjaTrailBusIDT {
  using x_generated_type = Array_singleIDT_30::Array_singleIDT_30;
  using y_generated_type = Array_singleIDT_30::Array_singleIDT_30;
  using n_generated_type = uint8IDT::uint8IDT;

  x_generated_type x;
  y_generated_type y;
  n_generated_type n;
};
// VECTOR Enable AutosarC++17_10-A12.6.1
// VECTOR Enable AutosarC++17_10-M8.5.1

/*!
 * \brief Compare for equality with another TjaTrailBusIDT instance.
 */
inline bool operator==(TjaTrailBusIDT const& l,
                       TjaTrailBusIDT const& r) noexcept {
  return (&l == &r) || ((l.x == r.x)
                         && (l.y == r.y)
                         && (l.n == r.n)
  );
}

/*!
 * \brief Compare for inequality with another TjaTrailBusIDT instance.
 */
inline bool operator!=(TjaTrailBusIDT const& l,
                       TjaTrailBusIDT const& r) noexcept {
  return !(l == r);
}
// VCA Enable : VCA_MODELLEDDATATYPEGENERATOR_DATA_TYPE_DECLARATION

}  // namespace TjaTrailBusIDT

#endif  // LOCALIZATIONFUSIONEXE_INCLUDE_TJATRAILBUSIDT_IMPL_TYPE_TJATRAILBUSIDT_H_
