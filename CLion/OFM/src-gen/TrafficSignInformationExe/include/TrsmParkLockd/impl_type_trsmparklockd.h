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
/**        \file  TrafficSignInformationExe/include/TrsmParkLockd/impl_type_trsmparklockd.h
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

#ifndef TRAFFICSIGNINFORMATIONEXE_INCLUDE_TRSMPARKLOCKD_IMPL_TYPE_TRSMPARKLOCKD_H_
#define TRAFFICSIGNINFORMATIONEXE_INCLUDE_TRSMPARKLOCKD_IMPL_TYPE_TRSMPARKLOCKD_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include <array>
#include <cstdint>
#include <map>
#include <string>
#include <vector>
#include "TrsmParkLockd1/impl_type_trsmparklockd1.h"
#include "TrsmParkLockdChks/impl_type_trsmparklockdchks.h"
#include "TrsmParkLockdCntr/impl_type_trsmparklockdcntr.h"

namespace TrsmParkLockd {

// VECTOR Disable AutosarC++17_10-A12.6.1: MD_MDTG_A12.6.1_GeneratedStructUninitializedMembers
// VECTOR Disable AutosarC++17_10-M8.5.1: MD_MDTG_M8.5.1_GeneratedStructUninitializedMembers
/*!
 * \brief Type TrsmParkLockd.
 * \remark generated
 * \trace SPEC-5951372
 *
 * IMPLEMENTATION-DATA-TYPE /CppImplementationDataTypes/TrsmParkLockd
 */
struct TrsmParkLockd {
  using _TrsmParkLockd1_ref_type = TrsmParkLockd1::TrsmParkLockd1;
  using _TrsmParkLockdChks_ref_type = TrsmParkLockdChks::TrsmParkLockdChks;
  using _TrsmParkLockdCntr_ref_type = TrsmParkLockdCntr::TrsmParkLockdCntr;

  _TrsmParkLockd1_ref_type TrsmParkLockd1_ref;
  _TrsmParkLockdChks_ref_type TrsmParkLockdChks_ref;
  _TrsmParkLockdCntr_ref_type TrsmParkLockdCntr_ref;
};
// VECTOR Enable AutosarC++17_10-A12.6.1
// VECTOR Enable AutosarC++17_10-M8.5.1

/*!
 * \brief Compare for equality with another TrsmParkLockd instance.
 */
inline bool operator==(TrsmParkLockd const& l,
                       TrsmParkLockd const& r) noexcept {
  return (&l == &r) || ((l.TrsmParkLockd1_ref == r.TrsmParkLockd1_ref)
                         && (l.TrsmParkLockdChks_ref == r.TrsmParkLockdChks_ref)
                         && (l.TrsmParkLockdCntr_ref == r.TrsmParkLockdCntr_ref)
  );
}

/*!
 * \brief Compare for inequality with another TrsmParkLockd instance.
 */
inline bool operator!=(TrsmParkLockd const& l,
                       TrsmParkLockd const& r) noexcept {
  return !(l == r);
}

}  // namespace TrsmParkLockd

#endif  // TRAFFICSIGNINFORMATIONEXE_INCLUDE_TRSMPARKLOCKD_IMPL_TYPE_TRSMPARKLOCKD_H_
