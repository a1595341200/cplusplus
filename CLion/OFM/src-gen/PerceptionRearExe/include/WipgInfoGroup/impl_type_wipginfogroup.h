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
/**        \file  PerceptionRearExe/include/WipgInfoGroup/impl_type_wipginfogroup.h
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

#ifndef PERCEPTIONREAREXE_INCLUDE_WIPGINFOGROUP_IMPL_TYPE_WIPGINFOGROUP_H_
#define PERCEPTIONREAREXE_INCLUDE_WIPGINFOGROUP_IMPL_TYPE_WIPGINFOGROUP_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include <array>
#include <cstdint>
#include <map>
#include <string>
#include <vector>
#include "WipgSpdInfo/impl_type_wipgspdinfo.h"
#include "WiprActv/impl_type_wipractv.h"
#include "WiprInWipgAr/impl_type_wiprinwipgar.h"

namespace WipgInfoGroup {

// VECTOR Disable AutosarC++17_10-A12.6.1: MD_MDTG_A12.6.1_GeneratedStructUninitializedMembers
// VECTOR Disable AutosarC++17_10-M8.5.1: MD_MDTG_M8.5.1_GeneratedStructUninitializedMembers
/*!
 * \brief Type WipgInfoGroup.
 * \remark generated
 * \trace SPEC-5951372
 *
 * IMPLEMENTATION-DATA-TYPE /CppImplementationDataTypes/WipgInfoGroup
 */
struct WipgInfoGroup {
  using _WipgSpdInfo_ref_type = WipgSpdInfo::WipgSpdInfo;
  using _WiprActv_ref_type = WiprActv::WiprActv;
  using _WiprInWipgAr_ref_type = WiprInWipgAr::WiprInWipgAr;

  _WipgSpdInfo_ref_type WipgSpdInfo_ref;
  _WiprActv_ref_type WiprActv_ref;
  _WiprInWipgAr_ref_type WiprInWipgAr_ref;
};
// VECTOR Enable AutosarC++17_10-A12.6.1
// VECTOR Enable AutosarC++17_10-M8.5.1

/*!
 * \brief Compare for equality with another WipgInfoGroup instance.
 */
inline bool operator==(WipgInfoGroup const& l,
                       WipgInfoGroup const& r) noexcept {
  return (&l == &r) || ((l.WipgSpdInfo_ref == r.WipgSpdInfo_ref)
                         && (l.WiprActv_ref == r.WiprActv_ref)
                         && (l.WiprInWipgAr_ref == r.WiprInWipgAr_ref)
  );
}

/*!
 * \brief Compare for inequality with another WipgInfoGroup instance.
 */
inline bool operator!=(WipgInfoGroup const& l,
                       WipgInfoGroup const& r) noexcept {
  return !(l == r);
}

}  // namespace WipgInfoGroup

#endif  // PERCEPTIONREAREXE_INCLUDE_WIPGINFOGROUP_IMPL_TYPE_WIPGINFOGROUP_H_
