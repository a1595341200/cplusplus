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
/**        \file  PerceptionExe/include/BltLockStFrntIDT/impl_type_bltlockstfrntidt.h
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

#ifndef PERCEPTIONEXE_INCLUDE_BLTLOCKSTFRNTIDT_IMPL_TYPE_BLTLOCKSTFRNTIDT_H_
#define PERCEPTIONEXE_INCLUDE_BLTLOCKSTFRNTIDT_IMPL_TYPE_BLTLOCKSTFRNTIDT_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include <array>
#include <cstdint>
#include <map>
#include <string>
#include <vector>
#include "BltLockSt1VccIDT/impl_type_bltlockst1vccidt.h"
#include "DevErrSts2VccIDT/impl_type_deverrsts2vccidt.h"

namespace BltLockStFrntIDT {

// VCA Disable [LNG-01,LNG-03,SLC-11,SLC-12,SLC-14,SLC-16,SPC-15] : VCA_MODELLEDDATATYPEGENERATOR_DATA_TYPE_DECLARATION
// VECTOR Disable AutosarC++17_10-A12.6.1: MD_MDTG_A12.6.1_GeneratedStructUninitializedMembers
// VECTOR Disable AutosarC++17_10-M8.5.1: MD_MDTG_M8.5.1_GeneratedStructUninitializedMembers
/*!
 * \brief Type BltLockStFrntIDT.
 * \remark generated
 *
 * IMPLEMENTATION-DATA-TYPE /CppImplementationDataTypes/BltLockStFrntIDT
 */
struct BltLockStFrntIDT {
  using BltLockStAtDrvrForBltLockSt1_generated_type = BltLockSt1VccIDT::BltLockSt1VccIDT;
  using BltLockStAtDrvrForDevErrSts2_generated_type = DevErrSts2VccIDT::DevErrSts2VccIDT;

  BltLockStAtDrvrForBltLockSt1_generated_type BltLockStAtDrvrForBltLockSt1;
  BltLockStAtDrvrForDevErrSts2_generated_type BltLockStAtDrvrForDevErrSts2;
};
// VECTOR Enable AutosarC++17_10-A12.6.1
// VECTOR Enable AutosarC++17_10-M8.5.1

/*!
 * \brief Compare for equality with another BltLockStFrntIDT instance.
 */
inline bool operator==(BltLockStFrntIDT const& l,
                       BltLockStFrntIDT const& r) noexcept {
  return (&l == &r) || ((l.BltLockStAtDrvrForBltLockSt1 == r.BltLockStAtDrvrForBltLockSt1)
                         && (l.BltLockStAtDrvrForDevErrSts2 == r.BltLockStAtDrvrForDevErrSts2)
  );
}

/*!
 * \brief Compare for inequality with another BltLockStFrntIDT instance.
 */
inline bool operator!=(BltLockStFrntIDT const& l,
                       BltLockStFrntIDT const& r) noexcept {
  return !(l == r);
}
// VCA Enable : VCA_MODELLEDDATATYPEGENERATOR_DATA_TYPE_DECLARATION

}  // namespace BltLockStFrntIDT

#endif  // PERCEPTIONEXE_INCLUDE_BLTLOCKSTFRNTIDT_IMPL_TYPE_BLTLOCKSTFRNTIDT_H_
