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
/**        \file  ObjectFusionModelExe/include/TrafficInfoIDT/impl_type_trafficinfoidt.h
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

#ifndef OBJECTFUSIONMODELEXE_INCLUDE_TRAFFICINFOIDT_IMPL_TYPE_TRAFFICINFOIDT_H_
#define OBJECTFUSIONMODELEXE_INCLUDE_TRAFFICINFOIDT_IMPL_TYPE_TRAFFICINFOIDT_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include <array>
#include <cstdint>
#include <map>
#include <string>
#include <vector>
#include "Array_LsrObjIDT_8/impl_type_array_lsrobjidt_8.h"
#include "Array_TrfcSignIDT_8/impl_type_array_trfcsignidt_8.h"

namespace TrafficInfoIDT {

// VCA Disable [LNG-01,LNG-03,SLC-11,SLC-12,SLC-14,SLC-16,SPC-15] : VCA_MODELLEDDATATYPEGENERATOR_DATA_TYPE_DECLARATION
// VECTOR Disable AutosarC++17_10-A12.6.1: MD_MDTG_A12.6.1_GeneratedStructUninitializedMembers
// VECTOR Disable AutosarC++17_10-M8.5.1: MD_MDTG_M8.5.1_GeneratedStructUninitializedMembers
/*!
 * \brief Type TrafficInfoIDT.
 * \remark generated
 *
 * IMPLEMENTATION-DATA-TYPE /CppImplementationDataTypes/TrafficInfoIDT
 */
struct TrafficInfoIDT {
  using LsrObjs_generated_type = Array_LsrObjIDT_8::Array_LsrObjIDT_8;
  using TrfcSigns_generated_type = Array_TrfcSignIDT_8::Array_TrfcSignIDT_8;

  LsrObjs_generated_type LsrObjs;
  TrfcSigns_generated_type TrfcSigns;
};
// VECTOR Enable AutosarC++17_10-A12.6.1
// VECTOR Enable AutosarC++17_10-M8.5.1

/*!
 * \brief Compare for equality with another TrafficInfoIDT instance.
 */
inline bool operator==(TrafficInfoIDT const& l,
                       TrafficInfoIDT const& r) noexcept {
  return (&l == &r) || ((l.LsrObjs == r.LsrObjs)
                         && (l.TrfcSigns == r.TrfcSigns)
  );
}

/*!
 * \brief Compare for inequality with another TrafficInfoIDT instance.
 */
inline bool operator!=(TrafficInfoIDT const& l,
                       TrafficInfoIDT const& r) noexcept {
  return !(l == r);
}
// VCA Enable : VCA_MODELLEDDATATYPEGENERATOR_DATA_TYPE_DECLARATION

}  // namespace TrafficInfoIDT

#endif  // OBJECTFUSIONMODELEXE_INCLUDE_TRAFFICINFOIDT_IMPL_TYPE_TRAFFICINFOIDT_H_
