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
/**        \file  ObjectFusionModelExe/include/ObjGroup2Vcc/impl_type_objgroup2vcc.h
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

#ifndef OBJECTFUSIONMODELEXE_INCLUDE_OBJGROUP2VCC_IMPL_TYPE_OBJGROUP2VCC_H_
#define OBJECTFUSIONMODELEXE_INCLUDE_OBJGROUP2VCC_IMPL_TYPE_OBJGROUP2VCC_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include <array>
#include <cstdint>
#include <map>
#include <string>
#include <vector>
#include "ObjEstimn2VccGroup/impl_type_objestimn2vccgroup.h"
#include "ObjInfo2VccGroup/impl_type_objinfo2vccgroup.h"
#include "ObjPpty1Vcc/impl_type_objppty2vcc.h"

namespace ObjGroup2Vcc {

// VECTOR Disable AutosarC++17_10-A12.6.1: MD_MDTG_A12.6.1_GeneratedStructUninitializedMembers
// VECTOR Disable AutosarC++17_10-M8.5.1: MD_MDTG_M8.5.1_GeneratedStructUninitializedMembers
/*!
 * \brief Type ObjGroup2Vcc.
 * \remark generated
 * \trace SPEC-5951372
 *
 * IMPLEMENTATION-DATA-TYPE /CppImplementationDataTypes/ObjGroup2Vcc
 */
struct ObjGroup2Vcc {
  using _ObjEstimn2VccGroup_ref_type = ObjEstimn2VccGroup::ObjEstimn2VccGroup;
  using _ObjInfo2VccGroup_ref_type = ObjInfo2VccGroup::ObjInfo2VccGroup;
  using _ObjPpty2Vcc_ref_type = ObjPpty1Vcc::ObjPpty2Vcc;

  _ObjEstimn2VccGroup_ref_type ObjEstimn2VccGroup_ref;
  _ObjInfo2VccGroup_ref_type ObjInfo2VccGroup_ref;
  _ObjPpty2Vcc_ref_type ObjPpty2Vcc_ref;
};
// VECTOR Enable AutosarC++17_10-A12.6.1
// VECTOR Enable AutosarC++17_10-M8.5.1

/*!
 * \brief Compare for equality with another ObjGroup2Vcc instance.
 */
inline bool operator==(ObjGroup2Vcc const& l,
                       ObjGroup2Vcc const& r) noexcept {
  return (&l == &r) || ((l.ObjEstimn2VccGroup_ref == r.ObjEstimn2VccGroup_ref)
                         && (l.ObjInfo2VccGroup_ref == r.ObjInfo2VccGroup_ref)
                         && (l.ObjPpty2Vcc_ref == r.ObjPpty2Vcc_ref)
  );
}

/*!
 * \brief Compare for inequality with another ObjGroup2Vcc instance.
 */
inline bool operator!=(ObjGroup2Vcc const& l,
                       ObjGroup2Vcc const& r) noexcept {
  return !(l == r);
}

}  // namespace ObjGroup2Vcc

#endif  // OBJECTFUSIONMODELEXE_INCLUDE_OBJGROUP2VCC_IMPL_TYPE_OBJGROUP2VCC_H_
