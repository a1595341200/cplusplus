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
/**        \file  TrafficSignInformationExe/include/LsrObj/impl_type_lsrobj.h
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

#ifndef TRAFFICSIGNINFORMATIONEXE_INCLUDE_LSROBJ_IMPL_TYPE_LSROBJ_H_
#define TRAFFICSIGNINFORMATIONEXE_INCLUDE_LSROBJ_IMPL_TYPE_LSROBJ_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include <array>
#include <cstdint>
#include <map>
#include <string>
#include <vector>
#include "Confidence/impl_type_confidence.h"
#include "Dir/impl_type_dir.h"
#include "LgtDist/impl_type_lgtdist.h"
#include "LitArea/impl_type_litarea.h"
#include "TypeLsrObj/impl_type_typelsrobj.h"
#include "ValidTrueFalse/impl_type_validtruefalse.h"

namespace LsrObj {

// VECTOR Disable AutosarC++17_10-A12.6.1: MD_MDTG_A12.6.1_GeneratedStructUninitializedMembers
// VECTOR Disable AutosarC++17_10-M8.5.1: MD_MDTG_M8.5.1_GeneratedStructUninitializedMembers
/*!
 * \brief Type LsrObj.
 * \remark generated
 * \trace SPEC-5951372
 *
 * IMPLEMENTATION-DATA-TYPE /CppImplementationDataTypes/LsrObj
 */
struct LsrObj {
  using _TypeLsrObj_ref_type = TypeLsrObj::TypeLsrObj;
  using _Dir_ref_type = Dir::Dir;
  using _LgtDist_ref_type = LgtDist::LgtDist;
  using _Confidence_ref_type = Confidence::Confidence;
  using _ValidTrueFalse_ref_type = ValidTrueFalse::ValidTrueFalse;
  using _LitArea_ref_type = LitArea::LitArea;

  _TypeLsrObj_ref_type TypeLsrObj_ref;
  _Dir_ref_type Dir_ref;
  _LgtDist_ref_type LgtDist_ref;
  _Confidence_ref_type Confidence_ref;
  _ValidTrueFalse_ref_type ValidTrueFalse_ref;
  _LitArea_ref_type LitArea_ref;
};
// VECTOR Enable AutosarC++17_10-A12.6.1
// VECTOR Enable AutosarC++17_10-M8.5.1

/*!
 * \brief Compare for equality with another LsrObj instance.
 */
inline bool operator==(LsrObj const& l,
                       LsrObj const& r) noexcept {
  return (&l == &r) || ((l.TypeLsrObj_ref == r.TypeLsrObj_ref)
                         && (l.Dir_ref == r.Dir_ref)
                         && (l.LgtDist_ref == r.LgtDist_ref)
                         && (l.Confidence_ref == r.Confidence_ref)
                         && (l.ValidTrueFalse_ref == r.ValidTrueFalse_ref)
                         && (l.LitArea_ref == r.LitArea_ref)
  );
}

/*!
 * \brief Compare for inequality with another LsrObj instance.
 */
inline bool operator!=(LsrObj const& l,
                       LsrObj const& r) noexcept {
  return !(l == r);
}

}  // namespace LsrObj

#endif  // TRAFFICSIGNINFORMATIONEXE_INCLUDE_LSROBJ_IMPL_TYPE_LSROBJ_H_
