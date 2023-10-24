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
/**        \file  RVDCExe/include/s_EDRInfo_tIDT/impl_type_s_edrinfo_tidt.h
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

#ifndef RVDCEXE_INCLUDE_S_EDRINFO_TIDT_IMPL_TYPE_S_EDRINFO_TIDT_H_
#define RVDCEXE_INCLUDE_S_EDRINFO_TIDT_IMPL_TYPE_S_EDRINFO_TIDT_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include <array>
#include <cstdint>
#include <map>
#include <string>
#include <vector>
#include "Array_uint8IDT_64/impl_type_array_uint8idt_64.h"

namespace s_EDRInfo_tIDT {

// VCA Disable [LNG-01,LNG-03,SLC-11,SLC-12,SLC-14,SLC-16,SPC-15] : VCA_MODELLEDDATATYPEGENERATOR_DATA_TYPE_DECLARATION
// VECTOR Disable AutosarC++17_10-A12.6.1: MD_MDTG_A12.6.1_GeneratedStructUninitializedMembers
// VECTOR Disable AutosarC++17_10-M8.5.1: MD_MDTG_M8.5.1_GeneratedStructUninitializedMembers
/*!
 * \brief Type s_EDRInfo_tIDT.
 * \remark generated
 *
 * IMPLEMENTATION-DATA-TYPE /CppImplementationDataTypes/s_EDRInfo_tIDT
 */
struct s_EDRInfo_tIDT {
  using LogName_generated_type = Array_uint8IDT_64::Array_uint8IDT_64;

  LogName_generated_type LogName;
};
// VECTOR Enable AutosarC++17_10-A12.6.1
// VECTOR Enable AutosarC++17_10-M8.5.1

/*!
 * \brief Compare for equality with another s_EDRInfo_tIDT instance.
 */
inline bool operator==(s_EDRInfo_tIDT const& l,
                       s_EDRInfo_tIDT const& r) noexcept {
  return (&l == &r) || (l.LogName == r.LogName);
}

/*!
 * \brief Compare for inequality with another s_EDRInfo_tIDT instance.
 */
inline bool operator!=(s_EDRInfo_tIDT const& l,
                       s_EDRInfo_tIDT const& r) noexcept {
  return !(l == r);
}
// VCA Enable : VCA_MODELLEDDATATYPEGENERATOR_DATA_TYPE_DECLARATION

}  // namespace s_EDRInfo_tIDT

#endif  // RVDCEXE_INCLUDE_S_EDRINFO_TIDT_IMPL_TYPE_S_EDRINFO_TIDT_H_
