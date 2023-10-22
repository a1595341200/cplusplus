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
/**        \file  Soc2LidarExe/include/SteerWhlSnsrSafe1/impl_type_steerwhlsnsrsafe1.h
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

#ifndef SOC2LIDAREXE_INCLUDE_STEERWHLSNSRSAFE1_IMPL_TYPE_STEERWHLSNSRSAFE1_H_
#define SOC2LIDAREXE_INCLUDE_STEERWHLSNSRSAFE1_IMPL_TYPE_STEERWHLSNSRSAFE1_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include <array>
#include <cstdint>
#include <map>
#include <string>
#include <vector>
#include "SteerWhlAg/impl_type_steerwhlag.h"
#include "SteerWhlAgSpd/impl_type_steerwhlagspd.h"
#include "SteerWhlSnsrChks/impl_type_steerwhlsnsrchks.h"
#include "SteerWhlSnsrCntr/impl_type_steerwhlsnsrcntr.h"
#include "SteerWhlSnsrQf/impl_type_steerwhlsnsrqf.h"

namespace SteerWhlSnsrSafe1 {

// VECTOR Disable AutosarC++17_10-A12.6.1: MD_MDTG_A12.6.1_GeneratedStructUninitializedMembers
// VECTOR Disable AutosarC++17_10-M8.5.1: MD_MDTG_M8.5.1_GeneratedStructUninitializedMembers
/*!
 * \brief Type SteerWhlSnsrSafe1.
 * \remark generated
 * \trace SPEC-5951372
 *
 * IMPLEMENTATION-DATA-TYPE /CppImplementationDataTypes/SteerWhlSnsrSafe1
 */
struct SteerWhlSnsrSafe1 {
  using _SteerWhlAg_ref_type = SteerWhlAg::SteerWhlAg;
  using _SteerWhlAgSpd_ref_type = SteerWhlAgSpd::SteerWhlAgSpd;
  using _SteerWhlSnsrQf_ref_type = SteerWhlSnsrQf::SteerWhlSnsrQf;
  using _SteerWhlSnsrChks_ref_type = SteerWhlSnsrChks::SteerWhlSnsrChks;
  using _SteerWhlSnsrCntr_ref_type = SteerWhlSnsrCntr::SteerWhlSnsrCntr;

  _SteerWhlAg_ref_type SteerWhlAg_ref;
  _SteerWhlAgSpd_ref_type SteerWhlAgSpd_ref;
  _SteerWhlSnsrQf_ref_type SteerWhlSnsrQf_ref;
  _SteerWhlSnsrChks_ref_type SteerWhlSnsrChks_ref;
  _SteerWhlSnsrCntr_ref_type SteerWhlSnsrCntr_ref;
};
// VECTOR Enable AutosarC++17_10-A12.6.1
// VECTOR Enable AutosarC++17_10-M8.5.1

/*!
 * \brief Compare for equality with another SteerWhlSnsrSafe1 instance.
 */
inline bool operator==(SteerWhlSnsrSafe1 const& l,
                       SteerWhlSnsrSafe1 const& r) noexcept {
  return (&l == &r) || ((l.SteerWhlAg_ref == r.SteerWhlAg_ref)
                         && (l.SteerWhlAgSpd_ref == r.SteerWhlAgSpd_ref)
                         && (l.SteerWhlSnsrQf_ref == r.SteerWhlSnsrQf_ref)
                         && (l.SteerWhlSnsrChks_ref == r.SteerWhlSnsrChks_ref)
                         && (l.SteerWhlSnsrCntr_ref == r.SteerWhlSnsrCntr_ref)
  );
}

/*!
 * \brief Compare for inequality with another SteerWhlSnsrSafe1 instance.
 */
inline bool operator!=(SteerWhlSnsrSafe1 const& l,
                       SteerWhlSnsrSafe1 const& r) noexcept {
  return !(l == r);
}

}  // namespace SteerWhlSnsrSafe1

#endif  // SOC2LIDAREXE_INCLUDE_STEERWHLSNSRSAFE1_IMPL_TYPE_STEERWHLSNSRSAFE1_H_
