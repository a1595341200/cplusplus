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
/**        \file  EndOfLineExe/include/BltLockStFrnt/impl_type_bltlockstfrnt.h
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

#ifndef ENDOFLINEEXE_INCLUDE_BLTLOCKSTFRNT_IMPL_TYPE_BLTLOCKSTFRNT_H_
#define ENDOFLINEEXE_INCLUDE_BLTLOCKSTFRNT_IMPL_TYPE_BLTLOCKSTFRNT_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include <array>
#include <cstdint>
#include <map>
#include <string>
#include <vector>
#include "BltLockStAtDrvrForBltLockSt1/impl_type_bltlockstatdrvrforbltlockst1.h"
#include "BltLockStAtDrvrForDevErrSts2/impl_type_bltlockstatdrvrfordeverrsts2.h"

namespace BltLockStFrnt {

// VECTOR Disable AutosarC++17_10-A12.6.1: MD_MDTG_A12.6.1_GeneratedStructUninitializedMembers
// VECTOR Disable AutosarC++17_10-M8.5.1: MD_MDTG_M8.5.1_GeneratedStructUninitializedMembers
/*!
 * \brief Type BltLockStFrnt.
 * \remark generated
 * \trace SPEC-5951372
 *
 * IMPLEMENTATION-DATA-TYPE /CppImplementationDataTypes/BltLockStFrnt
 */
struct BltLockStFrnt {
  using _BltLockStAtDrvrForBltLockSt1_ref_type = BltLockStAtDrvrForBltLockSt1::BltLockStAtDrvrForBltLockSt1;
  using _BltLockStAtDrvrForDevErrSts2_ref_type = BltLockStAtDrvrForDevErrSts2::BltLockStAtDrvrForDevErrSts2;

  _BltLockStAtDrvrForBltLockSt1_ref_type BltLockStAtDrvrForBltLockSt1_ref;
  _BltLockStAtDrvrForDevErrSts2_ref_type BltLockStAtDrvrForDevErrSts2_ref;
};
// VECTOR Enable AutosarC++17_10-A12.6.1
// VECTOR Enable AutosarC++17_10-M8.5.1

/*!
 * \brief Compare for equality with another BltLockStFrnt instance.
 */
inline bool operator==(BltLockStFrnt const& l,
                       BltLockStFrnt const& r) noexcept {
  return (&l == &r) || ((l.BltLockStAtDrvrForBltLockSt1_ref == r.BltLockStAtDrvrForBltLockSt1_ref)
                         && (l.BltLockStAtDrvrForDevErrSts2_ref == r.BltLockStAtDrvrForDevErrSts2_ref)
  );
}

/*!
 * \brief Compare for inequality with another BltLockStFrnt instance.
 */
inline bool operator!=(BltLockStFrnt const& l,
                       BltLockStFrnt const& r) noexcept {
  return !(l == r);
}

}  // namespace BltLockStFrnt

#endif  // ENDOFLINEEXE_INCLUDE_BLTLOCKSTFRNT_IMPL_TYPE_BLTLOCKSTFRNT_H_
