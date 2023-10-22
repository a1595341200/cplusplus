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
/**        \file  dtcAppExe/include/dtc/impl_type_dtcstruct.h
 *        \brief
 *
 *      \details
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 *  GENERATOR INFORMATION
 *  -------------------------------------------------------------------------------------------------------------------
 *    Generator Name: amsr_modelleddatatypes_api
 *         Commit ID: 46318213ad7ac4d9dbeb54ad2e67c431a47a9a9f
 *********************************************************************************************************************/

#ifndef DTCAPPEXE_INCLUDE_DTC_IMPL_TYPE_DTCSTRUCT_H_
#define DTCAPPEXE_INCLUDE_DTC_IMPL_TYPE_DTCSTRUCT_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include <array>
#include <cstdint>
#include <map>
#include <string>
#include <vector>

namespace dtc {

// VECTOR Disable AutosarC++17_10-A12.6.1: MD_MDTG_A12.6.1_GeneratedStructUninitializedMembers
// VECTOR Disable AutosarC++17_10-M8.5.1: MD_MDTG_M8.5.1_GeneratedStructUninitializedMembers
/*!
 * \brief Type DtcStruct.
 * \remark generated
 * \trace SPEC-5951372
 *
 * IMPLEMENTATION-DATA-TYPE /AUTOSAR/diag/DtcStruct
 */
struct DtcStruct {
  using _highByte_type = std::uint8_t;
  using _midByte_type = std::uint8_t;
  using _lowByte_type = std::uint8_t;

  _highByte_type highByte;
  _midByte_type midByte;
  _lowByte_type lowByte;
};
// VECTOR Enable AutosarC++17_10-A12.6.1
// VECTOR Enable AutosarC++17_10-M8.5.1

/*!
 * \brief Compare for equality with another DtcStruct instance.
 */
inline bool operator==(DtcStruct const& l,
                       DtcStruct const& r) noexcept {
  return (&l == &r) || ((l.highByte == r.highByte)
                         && (l.midByte == r.midByte)
                         && (l.lowByte == r.lowByte)
  );
}

/*!
 * \brief Compare for inequality with another DtcStruct instance.
 */
inline bool operator!=(DtcStruct const& l,
                       DtcStruct const& r) noexcept {
  return !(l == r);
}

}  // namespace dtc

#endif  // DTCAPPEXE_INCLUDE_DTC_IMPL_TYPE_DTCSTRUCT_H_
