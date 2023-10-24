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
/**        \file  EDRExe/include/LppPathSelectEDRIDT/impl_type_lpppathselectedridt.h
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

#ifndef EDREXE_INCLUDE_LPPPATHSELECTEDRIDT_IMPL_TYPE_LPPPATHSELECTEDRIDT_H_
#define EDREXE_INCLUDE_LPPPATHSELECTEDRIDT_IMPL_TYPE_LPPPATHSELECTEDRIDT_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include <array>
#include <cstdint>
#include <map>
#include <string>
#include <vector>
#include "Array_float32IDT_30/impl_type_array_float32idt_30.h"
#include "uint8IDT/impl_type_uint8idt.h"

namespace LppPathSelectEDRIDT {

// VCA Disable [LNG-01,LNG-03,SLC-11,SLC-12,SLC-14,SLC-16,SPC-15] : VCA_MODELLEDDATATYPEGENERATOR_DATA_TYPE_DECLARATION
// VECTOR Disable AutosarC++17_10-A12.6.1: MD_MDTG_A12.6.1_GeneratedStructUninitializedMembers
// VECTOR Disable AutosarC++17_10-M8.5.1: MD_MDTG_M8.5.1_GeneratedStructUninitializedMembers
/*!
 * \brief Type LppPathSelectEDRIDT.
 * \remark generated
 *
 * IMPLEMENTATION-DATA-TYPE /CppImplementationDataTypes/LppPathSelectEDRIDT
 */
struct LppPathSelectEDRIDT {
  using LocalPathPosXs_generated_type = Array_float32IDT_30::Array_float32IDT_30;
  using LocalPathPosYs_generated_type = Array_float32IDT_30::Array_float32IDT_30;
  using LocalPathSpds_generated_type = Array_float32IDT_30::Array_float32IDT_30;
  using LocalPathNum_generated_type = uint8IDT::uint8IDT;

  LocalPathPosXs_generated_type LocalPathPosXs;
  LocalPathPosYs_generated_type LocalPathPosYs;
  LocalPathSpds_generated_type LocalPathSpds;
  LocalPathNum_generated_type LocalPathNum;
};
// VECTOR Enable AutosarC++17_10-A12.6.1
// VECTOR Enable AutosarC++17_10-M8.5.1

/*!
 * \brief Compare for equality with another LppPathSelectEDRIDT instance.
 */
inline bool operator==(LppPathSelectEDRIDT const& l,
                       LppPathSelectEDRIDT const& r) noexcept {
  return (&l == &r) || ((l.LocalPathPosXs == r.LocalPathPosXs)
                         && (l.LocalPathPosYs == r.LocalPathPosYs)
                         && (l.LocalPathSpds == r.LocalPathSpds)
                         && (l.LocalPathNum == r.LocalPathNum)
  );
}

/*!
 * \brief Compare for inequality with another LppPathSelectEDRIDT instance.
 */
inline bool operator!=(LppPathSelectEDRIDT const& l,
                       LppPathSelectEDRIDT const& r) noexcept {
  return !(l == r);
}
// VCA Enable : VCA_MODELLEDDATATYPEGENERATOR_DATA_TYPE_DECLARATION

}  // namespace LppPathSelectEDRIDT

#endif  // EDREXE_INCLUDE_LPPPATHSELECTEDRIDT_IMPL_TYPE_LPPPATHSELECTEDRIDT_H_
