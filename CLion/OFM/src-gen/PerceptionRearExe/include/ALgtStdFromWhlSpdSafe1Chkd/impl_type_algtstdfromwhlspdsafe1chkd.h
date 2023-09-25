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
/**        \file  PerceptionRearExe/include/ALgtStdFromWhlSpdSafe1Chkd/impl_type_algtstdfromwhlspdsafe1chkd.h
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

#ifndef PERCEPTIONREAREXE_INCLUDE_ALGTSTDFROMWHLSPDSAFE1CHKD_IMPL_TYPE_ALGTSTDFROMWHLSPDSAFE1CHKD_H_
#define PERCEPTIONREAREXE_INCLUDE_ALGTSTDFROMWHLSPDSAFE1CHKD_IMPL_TYPE_ALGTSTDFROMWHLSPDSAFE1CHKD_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include <array>
#include <cstdint>
#include <map>
#include <string>
#include <vector>
#include "ALgtStdFromWhlSpd/impl_type_algtstdfromwhlspd.h"
#include "ALgtStdFromWhlSpdQf/impl_type_algtstdfromwhlspdqf.h"
#include "Age1/impl_type_age1.h"
#include "IsUpdated/impl_type_isupdated.h"
#include "IsUpdatedAndValid/impl_type_isupdatedandvalid.h"
#include "IsValid/impl_type_isvalid.h"

namespace ALgtStdFromWhlSpdSafe1Chkd {

// VECTOR Disable AutosarC++17_10-A12.6.1: MD_MDTG_A12.6.1_GeneratedStructUninitializedMembers
// VECTOR Disable AutosarC++17_10-M8.5.1: MD_MDTG_M8.5.1_GeneratedStructUninitializedMembers
/*!
 * \brief Type ALgtStdFromWhlSpdSafe1Chkd.
 * \remark generated
 * \trace SPEC-5951372
 *
 * IMPLEMENTATION-DATA-TYPE /CppImplementationDataTypes/ALgtStdFromWhlSpdSafe1Chkd
 */
struct ALgtStdFromWhlSpdSafe1Chkd {
  using _Age1_ref_type = Age1::Age1;
  using _IsUpdated_ref_type = IsUpdated::IsUpdated;
  using _IsUpdatedAndValid_ref_type = IsUpdatedAndValid::IsUpdatedAndValid;
  using _IsValid_ref_type = IsValid::IsValid;
  using _ALgtStdFromWhlSpd_ref_type = ALgtStdFromWhlSpd::ALgtStdFromWhlSpd;
  using _ALgtStdFromWhlSpdQf_ref_type = ALgtStdFromWhlSpdQf::ALgtStdFromWhlSpdQf;

  _Age1_ref_type Age1_ref;
  _IsUpdated_ref_type IsUpdated_ref;
  _IsUpdatedAndValid_ref_type IsUpdatedAndValid_ref;
  _IsValid_ref_type IsValid_ref;
  _ALgtStdFromWhlSpd_ref_type ALgtStdFromWhlSpd_ref;
  _ALgtStdFromWhlSpdQf_ref_type ALgtStdFromWhlSpdQf_ref;
};
// VECTOR Enable AutosarC++17_10-A12.6.1
// VECTOR Enable AutosarC++17_10-M8.5.1

/*!
 * \brief Compare for equality with another ALgtStdFromWhlSpdSafe1Chkd instance.
 */
inline bool operator==(ALgtStdFromWhlSpdSafe1Chkd const& l,
                       ALgtStdFromWhlSpdSafe1Chkd const& r) noexcept {
  return (&l == &r) || ((l.Age1_ref == r.Age1_ref)
                         && (l.IsUpdated_ref == r.IsUpdated_ref)
                         && (l.IsUpdatedAndValid_ref == r.IsUpdatedAndValid_ref)
                         && (l.IsValid_ref == r.IsValid_ref)
                         && (l.ALgtStdFromWhlSpd_ref == r.ALgtStdFromWhlSpd_ref)
                         && (l.ALgtStdFromWhlSpdQf_ref == r.ALgtStdFromWhlSpdQf_ref)
  );
}

/*!
 * \brief Compare for inequality with another ALgtStdFromWhlSpdSafe1Chkd instance.
 */
inline bool operator!=(ALgtStdFromWhlSpdSafe1Chkd const& l,
                       ALgtStdFromWhlSpdSafe1Chkd const& r) noexcept {
  return !(l == r);
}

}  // namespace ALgtStdFromWhlSpdSafe1Chkd

#endif  // PERCEPTIONREAREXE_INCLUDE_ALGTSTDFROMWHLSPDSAFE1CHKD_IMPL_TYPE_ALGTSTDFROMWHLSPDSAFE1CHKD_H_
