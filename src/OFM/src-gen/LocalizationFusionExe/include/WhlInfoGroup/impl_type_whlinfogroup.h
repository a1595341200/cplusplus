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
/**        \file  LocalizationFusionExe/include/WhlInfoGroup/impl_type_whlinfogroup.h
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

#ifndef LOCALIZATIONFUSIONEXE_INCLUDE_WHLINFOGROUP_IMPL_TYPE_WHLINFOGROUP_H_
#define LOCALIZATIONFUSIONEXE_INCLUDE_WHLINFOGROUP_IMPL_TYPE_WHLINFOGROUP_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include <array>
#include <cstdint>
#include <map>
#include <string>
#include <vector>
#include "WhlDirRotlFrntLe/impl_type_whldirrotlfrntle.h"
#include "WhlDirRotlFrntRi/impl_type_whldirrotlfrntri.h"
#include "WhlDirRotlReLe/impl_type_whldirrotlrele.h"
#include "WhlDirRotlReRi/impl_type_whldirrotlreri.h"
#include "WhlSpdCircumlFrntLe/impl_type_whlspdcircumlfrntle.h"
#include "WhlSpdCircumlFrntLeQf/impl_type_whlspdcircumlfrntleqf.h"
#include "WhlSpdCircumlFrntRi/impl_type_whlspdcircumlfrntri.h"
#include "WhlSpdCircumlFrntRiQf/impl_type_whlspdcircumlfrntriqf.h"
#include "WhlSpdCircumlReLe/impl_type_whlspdcircumlrele.h"
#include "WhlSpdCircumlReLeQf/impl_type_whlspdcircumlreleqf.h"
#include "WhlSpdCircumlReRi/impl_type_whlspdcircumlreri.h"
#include "WhlSpdCircumlReRiQf/impl_type_whlspdcircumlreriqf.h"

namespace WhlInfoGroup {

// VECTOR Disable AutosarC++17_10-A12.6.1: MD_MDTG_A12.6.1_GeneratedStructUninitializedMembers
// VECTOR Disable AutosarC++17_10-M8.5.1: MD_MDTG_M8.5.1_GeneratedStructUninitializedMembers
/*!
 * \brief Type WhlInfoGroup.
 * \remark generated
 * \trace SPEC-5951372
 *
 * IMPLEMENTATION-DATA-TYPE /CppImplementationDataTypes/WhlInfoGroup
 */
struct WhlInfoGroup {
  using _WhlSpdCircumlFrntLe_ref_type = WhlSpdCircumlFrntLe::WhlSpdCircumlFrntLe;
  using _WhlSpdCircumlFrntLeQf_ref_type = WhlSpdCircumlFrntLeQf::WhlSpdCircumlFrntLeQf;
  using _WhlSpdCircumlFrntRi_ref_type = WhlSpdCircumlFrntRi::WhlSpdCircumlFrntRi;
  using _WhlSpdCircumlFrntRiQf_ref_type = WhlSpdCircumlFrntRiQf::WhlSpdCircumlFrntRiQf;
  using _WhlSpdCircumlReLe_ref_type = WhlSpdCircumlReLe::WhlSpdCircumlReLe;
  using _WhlSpdCircumlReLeQf_ref_type = WhlSpdCircumlReLeQf::WhlSpdCircumlReLeQf;
  using _WhlSpdCircumlReRi_ref_type = WhlSpdCircumlReRi::WhlSpdCircumlReRi;
  using _WhlSpdCircumlReRiQf_ref_type = WhlSpdCircumlReRiQf::WhlSpdCircumlReRiQf;
  using _WhlDirRotlFrntLe_ref_type = WhlDirRotlFrntLe::WhlDirRotlFrntLe;
  using _WhlDirRotlFrntRi_ref_type = WhlDirRotlFrntRi::WhlDirRotlFrntRi;
  using _WhlDirRotlReLe_ref_type = WhlDirRotlReLe::WhlDirRotlReLe;
  using _WhlDirRotlReRi_ref_type = WhlDirRotlReRi::WhlDirRotlReRi;

  _WhlSpdCircumlFrntLe_ref_type WhlSpdCircumlFrntLe_ref;
  _WhlSpdCircumlFrntLeQf_ref_type WhlSpdCircumlFrntLeQf_ref;
  _WhlSpdCircumlFrntRi_ref_type WhlSpdCircumlFrntRi_ref;
  _WhlSpdCircumlFrntRiQf_ref_type WhlSpdCircumlFrntRiQf_ref;
  _WhlSpdCircumlReLe_ref_type WhlSpdCircumlReLe_ref;
  _WhlSpdCircumlReLeQf_ref_type WhlSpdCircumlReLeQf_ref;
  _WhlSpdCircumlReRi_ref_type WhlSpdCircumlReRi_ref;
  _WhlSpdCircumlReRiQf_ref_type WhlSpdCircumlReRiQf_ref;
  _WhlDirRotlFrntLe_ref_type WhlDirRotlFrntLe_ref;
  _WhlDirRotlFrntRi_ref_type WhlDirRotlFrntRi_ref;
  _WhlDirRotlReLe_ref_type WhlDirRotlReLe_ref;
  _WhlDirRotlReRi_ref_type WhlDirRotlReRi_ref;
};
// VECTOR Enable AutosarC++17_10-A12.6.1
// VECTOR Enable AutosarC++17_10-M8.5.1

/*!
 * \brief Compare for equality with another WhlInfoGroup instance.
 */
inline bool operator==(WhlInfoGroup const& l,
                       WhlInfoGroup const& r) noexcept {
  return (&l == &r) || ((l.WhlSpdCircumlFrntLe_ref == r.WhlSpdCircumlFrntLe_ref)
                         && (l.WhlSpdCircumlFrntLeQf_ref == r.WhlSpdCircumlFrntLeQf_ref)
                         && (l.WhlSpdCircumlFrntRi_ref == r.WhlSpdCircumlFrntRi_ref)
                         && (l.WhlSpdCircumlFrntRiQf_ref == r.WhlSpdCircumlFrntRiQf_ref)
                         && (l.WhlSpdCircumlReLe_ref == r.WhlSpdCircumlReLe_ref)
                         && (l.WhlSpdCircumlReLeQf_ref == r.WhlSpdCircumlReLeQf_ref)
                         && (l.WhlSpdCircumlReRi_ref == r.WhlSpdCircumlReRi_ref)
                         && (l.WhlSpdCircumlReRiQf_ref == r.WhlSpdCircumlReRiQf_ref)
                         && (l.WhlDirRotlFrntLe_ref == r.WhlDirRotlFrntLe_ref)
                         && (l.WhlDirRotlFrntRi_ref == r.WhlDirRotlFrntRi_ref)
                         && (l.WhlDirRotlReLe_ref == r.WhlDirRotlReLe_ref)
                         && (l.WhlDirRotlReRi_ref == r.WhlDirRotlReRi_ref)
  );
}

/*!
 * \brief Compare for inequality with another WhlInfoGroup instance.
 */
inline bool operator!=(WhlInfoGroup const& l,
                       WhlInfoGroup const& r) noexcept {
  return !(l == r);
}

}  // namespace WhlInfoGroup

#endif  // LOCALIZATIONFUSIONEXE_INCLUDE_WHLINFOGROUP_IMPL_TYPE_WHLINFOGROUP_H_
