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
/**        \file  EndOfLineExe/include/BrkPedlPsdRec/impl_type_brkpedlpsdrec.h
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

#ifndef ENDOFLINEEXE_INCLUDE_BRKPEDLPSDREC_IMPL_TYPE_BRKPEDLPSDREC_H_
#define ENDOFLINEEXE_INCLUDE_BRKPEDLPSDREC_IMPL_TYPE_BRKPEDLPSDREC_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include <array>
#include <cstdint>
#include <map>
#include <string>
#include <vector>
#include "BrkPedlNotPsdSafe/impl_type_brkpedlnotpsdsafe.h"
#include "BrkPedlPsd/impl_type_brkpedlpsd.h"
#include "BrkPedlPsdChks/impl_type_brkpedlpsdchks.h"
#include "BrkPedlPsdCntr/impl_type_brkpedlpsdcntr.h"
#include "BrkPedlPsdQf/impl_type_brkpedlpsdqf.h"

namespace BrkPedlPsdRec {

// VECTOR Disable AutosarC++17_10-A12.6.1: MD_MDTG_A12.6.1_GeneratedStructUninitializedMembers
// VECTOR Disable AutosarC++17_10-M8.5.1: MD_MDTG_M8.5.1_GeneratedStructUninitializedMembers
/*!
 * \brief Type BrkPedlPsdRec.
 * \remark generated
 * \trace SPEC-5951372
 *
 * IMPLEMENTATION-DATA-TYPE /CppImplementationDataTypes/BrkPedlPsdRec
 */
struct BrkPedlPsdRec {
  using _BrkPedlPsd_ref_type = BrkPedlPsd::BrkPedlPsd;
  using _BrkPedlPsdQf_ref_type = BrkPedlPsdQf::BrkPedlPsdQf;
  using _BrkPedlPsdCntr_ref_type = BrkPedlPsdCntr::BrkPedlPsdCntr;
  using _BrkPedlPsdChks_ref_type = BrkPedlPsdChks::BrkPedlPsdChks;
  using _BrkPedlNotPsdSafe_ref_type = BrkPedlNotPsdSafe::BrkPedlNotPsdSafe;

  _BrkPedlPsd_ref_type BrkPedlPsd_ref;
  _BrkPedlPsdQf_ref_type BrkPedlPsdQf_ref;
  _BrkPedlPsdCntr_ref_type BrkPedlPsdCntr_ref;
  _BrkPedlPsdChks_ref_type BrkPedlPsdChks_ref;
  _BrkPedlNotPsdSafe_ref_type BrkPedlNotPsdSafe_ref;
};
// VECTOR Enable AutosarC++17_10-A12.6.1
// VECTOR Enable AutosarC++17_10-M8.5.1

/*!
 * \brief Compare for equality with another BrkPedlPsdRec instance.
 */
inline bool operator==(BrkPedlPsdRec const& l,
                       BrkPedlPsdRec const& r) noexcept {
  return (&l == &r) || ((l.BrkPedlPsd_ref == r.BrkPedlPsd_ref)
                         && (l.BrkPedlPsdQf_ref == r.BrkPedlPsdQf_ref)
                         && (l.BrkPedlPsdCntr_ref == r.BrkPedlPsdCntr_ref)
                         && (l.BrkPedlPsdChks_ref == r.BrkPedlPsdChks_ref)
                         && (l.BrkPedlNotPsdSafe_ref == r.BrkPedlNotPsdSafe_ref)
  );
}

/*!
 * \brief Compare for inequality with another BrkPedlPsdRec instance.
 */
inline bool operator!=(BrkPedlPsdRec const& l,
                       BrkPedlPsdRec const& r) noexcept {
  return !(l == r);
}

}  // namespace BrkPedlPsdRec

#endif  // ENDOFLINEEXE_INCLUDE_BRKPEDLPSDREC_IMPL_TYPE_BRKPEDLPSDREC_H_
