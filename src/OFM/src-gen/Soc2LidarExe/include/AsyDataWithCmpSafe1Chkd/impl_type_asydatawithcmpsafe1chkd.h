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
/**        \file  Soc2LidarExe/include/AsyDataWithCmpSafe1Chkd/impl_type_asydatawithcmpsafe1chkd.h
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

#ifndef SOC2LIDAREXE_INCLUDE_ASYDATAWITHCMPSAFE1CHKD_IMPL_TYPE_ASYDATAWITHCMPSAFE1CHKD_H_
#define SOC2LIDAREXE_INCLUDE_ASYDATAWITHCMPSAFE1CHKD_IMPL_TYPE_ASYDATAWITHCMPSAFE1CHKD_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include <array>
#include <cstdint>
#include <map>
#include <string>
#include <vector>
#include "ALat1Qf2/impl_type_alat1qf2.h"
#include "ALatWithCmp/impl_type_alatwithcmp.h"
#include "ALgt1Qf2/impl_type_algt1qf2.h"
#include "Age1/impl_type_age1.h"
#include "GrdtOfALgt/impl_type_grdtofalgt.h"
#include "IsUpdated/impl_type_isupdated.h"
#include "IsUpdatedAndValid/impl_type_isupdatedandvalid.h"
#include "IsValid/impl_type_isvalid.h"
#include "YawRate1Qf2/impl_type_yawrate1qf2.h"
#include "YawRateWithCmp/impl_type_yawratewithcmp.h"

namespace AsyDataWithCmpSafe1Chkd {

// VECTOR Disable AutosarC++17_10-A12.6.1: MD_MDTG_A12.6.1_GeneratedStructUninitializedMembers
// VECTOR Disable AutosarC++17_10-M8.5.1: MD_MDTG_M8.5.1_GeneratedStructUninitializedMembers
/*!
 * \brief Type AsyDataWithCmpSafe1Chkd.
 * \remark generated
 * \trace SPEC-5951372
 *
 * IMPLEMENTATION-DATA-TYPE /CppImplementationDataTypes/AsyDataWithCmpSafe1Chkd
 */
struct AsyDataWithCmpSafe1Chkd {
  using _Age1_ref_type = Age1::Age1;
  using _IsUpdated_ref_type = IsUpdated::IsUpdated;
  using _IsUpdatedAndValid_ref_type = IsUpdatedAndValid::IsUpdatedAndValid;
  using _IsValid_ref_type = IsValid::IsValid;
  using _ALat1Qf2_ref_type = ALat1Qf2::ALat1Qf2;
  using _ALatWithCmp_ref_type = ALatWithCmp::ALatWithCmp;
  using _ALgt1Qf2_ref_type = ALgt1Qf2::ALgt1Qf2;
  using _GrdtOfALgt_ref_type = GrdtOfALgt::GrdtOfALgt;
  using _YawRate1Qf2_ref_type = YawRate1Qf2::YawRate1Qf2;
  using _YawRateWithCmp_ref_type = YawRateWithCmp::YawRateWithCmp;

  _Age1_ref_type Age1_ref;
  _IsUpdated_ref_type IsUpdated_ref;
  _IsUpdatedAndValid_ref_type IsUpdatedAndValid_ref;
  _IsValid_ref_type IsValid_ref;
  _ALat1Qf2_ref_type ALat1Qf2_ref;
  _ALatWithCmp_ref_type ALatWithCmp_ref;
  _ALgt1Qf2_ref_type ALgt1Qf2_ref;
  _GrdtOfALgt_ref_type GrdtOfALgt_ref;
  _YawRate1Qf2_ref_type YawRate1Qf2_ref;
  _YawRateWithCmp_ref_type YawRateWithCmp_ref;
};
// VECTOR Enable AutosarC++17_10-A12.6.1
// VECTOR Enable AutosarC++17_10-M8.5.1

/*!
 * \brief Compare for equality with another AsyDataWithCmpSafe1Chkd instance.
 */
inline bool operator==(AsyDataWithCmpSafe1Chkd const& l,
                       AsyDataWithCmpSafe1Chkd const& r) noexcept {
  return (&l == &r) || ((l.Age1_ref == r.Age1_ref)
                         && (l.IsUpdated_ref == r.IsUpdated_ref)
                         && (l.IsUpdatedAndValid_ref == r.IsUpdatedAndValid_ref)
                         && (l.IsValid_ref == r.IsValid_ref)
                         && (l.ALat1Qf2_ref == r.ALat1Qf2_ref)
                         && (l.ALatWithCmp_ref == r.ALatWithCmp_ref)
                         && (l.ALgt1Qf2_ref == r.ALgt1Qf2_ref)
                         && (l.GrdtOfALgt_ref == r.GrdtOfALgt_ref)
                         && (l.YawRate1Qf2_ref == r.YawRate1Qf2_ref)
                         && (l.YawRateWithCmp_ref == r.YawRateWithCmp_ref)
  );
}

/*!
 * \brief Compare for inequality with another AsyDataWithCmpSafe1Chkd instance.
 */
inline bool operator!=(AsyDataWithCmpSafe1Chkd const& l,
                       AsyDataWithCmpSafe1Chkd const& r) noexcept {
  return !(l == r);
}

}  // namespace AsyDataWithCmpSafe1Chkd

#endif  // SOC2LIDAREXE_INCLUDE_ASYDATAWITHCMPSAFE1CHKD_IMPL_TYPE_ASYDATAWITHCMPSAFE1CHKD_H_
