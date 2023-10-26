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
/**        \file  ObjectFusionModelExe/include/FrntCamInfoIDT/impl_type_frntcaminfoidt.h
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

#ifndef OBJECTFUSIONMODELEXE_INCLUDE_FRNTCAMINFOIDT_IMPL_TYPE_FRNTCAMINFOIDT_H_
#define OBJECTFUSIONMODELEXE_INCLUDE_FRNTCAMINFOIDT_IMPL_TYPE_FRNTCAMINFOIDT_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include <array>
#include <cstdint>
#include <map>
#include <string>
#include <vector>
#include "Array_StaticObjIDT_20/impl_type_array_staticobjidt_20.h"
#include "FrntCamSts1VccIDT/impl_type_frntcamsts1vccidt.h"

namespace FrntCamInfoIDT {

// VCA Disable [LNG-01,LNG-03,SLC-11,SLC-12,SLC-14,SLC-16,SPC-15] : VCA_MODELLEDDATATYPEGENERATOR_DATA_TYPE_DECLARATION
// VECTOR Disable AutosarC++17_10-A12.6.1: MD_MDTG_A12.6.1_GeneratedStructUninitializedMembers
// VECTOR Disable AutosarC++17_10-M8.5.1: MD_MDTG_M8.5.1_GeneratedStructUninitializedMembers
/*!
 * \brief Type FrntCamInfoIDT.
 * \remark generated
 *
 * IMPLEMENTATION-DATA-TYPE /CppImplementationDataTypes/FrntCamInfoIDT
 */
struct FrntCamInfoIDT {
  using StaticObjs_generated_type = Array_StaticObjIDT_20::Array_StaticObjIDT_20;
  using FrntCamSts1Vcc_generated_type = FrntCamSts1VccIDT::FrntCamSts1VccIDT;

  StaticObjs_generated_type StaticObjs;
  FrntCamSts1Vcc_generated_type FrntCamSts1Vcc;
};
// VECTOR Enable AutosarC++17_10-A12.6.1
// VECTOR Enable AutosarC++17_10-M8.5.1

/*!
 * \brief Compare for equality with another FrntCamInfoIDT instance.
 */
inline bool operator==(FrntCamInfoIDT const& l,
                       FrntCamInfoIDT const& r) noexcept {
  return (&l == &r) || ((l.StaticObjs == r.StaticObjs)
                         && (l.FrntCamSts1Vcc == r.FrntCamSts1Vcc)
  );
}

/*!
 * \brief Compare for inequality with another FrntCamInfoIDT instance.
 */
inline bool operator!=(FrntCamInfoIDT const& l,
                       FrntCamInfoIDT const& r) noexcept {
  return !(l == r);
}
// VCA Enable : VCA_MODELLEDDATATYPEGENERATOR_DATA_TYPE_DECLARATION

}  // namespace FrntCamInfoIDT

#endif  // OBJECTFUSIONMODELEXE_INCLUDE_FRNTCAMINFOIDT_IMPL_TYPE_FRNTCAMINFOIDT_H_
