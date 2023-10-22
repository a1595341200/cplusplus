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
/**        \file  LocalizationFusionExe/include/AccrPedlPsd0/impl_type_accrpedlpsd0.h
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

#ifndef LOCALIZATIONFUSIONEXE_INCLUDE_ACCRPEDLPSD0_IMPL_TYPE_ACCRPEDLPSD0_H_
#define LOCALIZATIONFUSIONEXE_INCLUDE_ACCRPEDLPSD0_IMPL_TYPE_ACCRPEDLPSD0_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include <array>
#include <cstdint>
#include <map>
#include <string>
#include <vector>
#include "AccrPedlPsd/impl_type_accrpedlpsd.h"
#include "AccrPedlPsdChks/impl_type_accrpedlpsdchks.h"
#include "AccrPedlPsdCntr/impl_type_accrpedlpsdcntr.h"
#include "AccrPedlPsdSts/impl_type_accrpedlpsdsts.h"

namespace AccrPedlPsd0 {

// VECTOR Disable AutosarC++17_10-A12.6.1: MD_MDTG_A12.6.1_GeneratedStructUninitializedMembers
// VECTOR Disable AutosarC++17_10-M8.5.1: MD_MDTG_M8.5.1_GeneratedStructUninitializedMembers
/*!
 * \brief Type AccrPedlPsd0.
 * \remark generated
 * \trace SPEC-5951372
 *
 * IMPLEMENTATION-DATA-TYPE /CppImplementationDataTypes/AccrPedlPsd0
 */
struct AccrPedlPsd0 {
  using _AccrPedlPsd_ref_type = AccrPedlPsd::AccrPedlPsd;
  using _AccrPedlPsdSts_ref_type = AccrPedlPsdSts::AccrPedlPsdSts;
  using _AccrPedlPsdCntr_ref_type = AccrPedlPsdCntr::AccrPedlPsdCntr;
  using _AccrPedlPsdChks_ref_type = AccrPedlPsdChks::AccrPedlPsdChks;

  _AccrPedlPsd_ref_type AccrPedlPsd_ref;
  _AccrPedlPsdSts_ref_type AccrPedlPsdSts_ref;
  _AccrPedlPsdCntr_ref_type AccrPedlPsdCntr_ref;
  _AccrPedlPsdChks_ref_type AccrPedlPsdChks_ref;
};
// VECTOR Enable AutosarC++17_10-A12.6.1
// VECTOR Enable AutosarC++17_10-M8.5.1

/*!
 * \brief Compare for equality with another AccrPedlPsd0 instance.
 */
inline bool operator==(AccrPedlPsd0 const& l,
                       AccrPedlPsd0 const& r) noexcept {
  return (&l == &r) || ((l.AccrPedlPsd_ref == r.AccrPedlPsd_ref)
                         && (l.AccrPedlPsdSts_ref == r.AccrPedlPsdSts_ref)
                         && (l.AccrPedlPsdCntr_ref == r.AccrPedlPsdCntr_ref)
                         && (l.AccrPedlPsdChks_ref == r.AccrPedlPsdChks_ref)
  );
}

/*!
 * \brief Compare for inequality with another AccrPedlPsd0 instance.
 */
inline bool operator!=(AccrPedlPsd0 const& l,
                       AccrPedlPsd0 const& r) noexcept {
  return !(l == r);
}

}  // namespace AccrPedlPsd0

#endif  // LOCALIZATIONFUSIONEXE_INCLUDE_ACCRPEDLPSD0_IMPL_TYPE_ACCRPEDLPSD0_H_
