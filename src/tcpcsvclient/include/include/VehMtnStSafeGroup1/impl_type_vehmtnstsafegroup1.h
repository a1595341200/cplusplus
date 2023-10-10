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
/**        \file  ObjectFusionModelExe/include/VehMtnStSafeGroup1/impl_type_vehmtnstsafegroup1.h
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

#ifndef OBJECTFUSIONMODELEXE_INCLUDE_VEHMTNSTSAFEGROUP1_IMPL_TYPE_VEHMTNSTSAFEGROUP1_H_
#define OBJECTFUSIONMODELEXE_INCLUDE_VEHMTNSTSAFEGROUP1_IMPL_TYPE_VEHMTNSTSAFEGROUP1_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include <array>
#include <cstdint>
#include <map>
#include <string>
#include <vector>
#include "VehMtnStChks/impl_type_vehmtnstchks.h"
#include "VehMtnStCntr/impl_type_vehmtnstcntr.h"
#include "VehMtnStVehMtnSt/impl_type_vehmtnstvehmtnst.h"

namespace VehMtnStSafeGroup1 {

// VECTOR Disable AutosarC++17_10-A12.6.1: MD_MDTG_A12.6.1_GeneratedStructUninitializedMembers
// VECTOR Disable AutosarC++17_10-M8.5.1: MD_MDTG_M8.5.1_GeneratedStructUninitializedMembers
/*!
 * \brief Type VehMtnStSafeGroup1.
 * \remark generated
 * \trace SPEC-5951372
 *
 * IMPLEMENTATION-DATA-TYPE /CppImplementationDataTypes/VehMtnStSafeGroup1
 */
struct VehMtnStSafeGroup1 {
  using _VehMtnStChks_ref_type = VehMtnStChks::VehMtnStChks;
  using _VehMtnStCntr_ref_type = VehMtnStCntr::VehMtnStCntr;
  using _VehMtnStVehMtnSt_ref_type = VehMtnStVehMtnSt::VehMtnStVehMtnSt;

  _VehMtnStChks_ref_type VehMtnStChks_ref;
  _VehMtnStCntr_ref_type VehMtnStCntr_ref;
  _VehMtnStVehMtnSt_ref_type VehMtnStVehMtnSt_ref;
};
// VECTOR Enable AutosarC++17_10-A12.6.1
// VECTOR Enable AutosarC++17_10-M8.5.1

/*!
 * \brief Compare for equality with another VehMtnStSafeGroup1 instance.
 */
inline bool operator==(VehMtnStSafeGroup1 const& l,
                       VehMtnStSafeGroup1 const& r) noexcept {
  return (&l == &r) || ((l.VehMtnStChks_ref == r.VehMtnStChks_ref)
                         && (l.VehMtnStCntr_ref == r.VehMtnStCntr_ref)
                         && (l.VehMtnStVehMtnSt_ref == r.VehMtnStVehMtnSt_ref)
  );
}

/*!
 * \brief Compare for inequality with another VehMtnStSafeGroup1 instance.
 */
inline bool operator!=(VehMtnStSafeGroup1 const& l,
                       VehMtnStSafeGroup1 const& r) noexcept {
  return !(l == r);
}

}  // namespace VehMtnStSafeGroup1

#endif  // OBJECTFUSIONMODELEXE_INCLUDE_VEHMTNSTSAFEGROUP1_IMPL_TYPE_VEHMTNSTSAFEGROUP1_H_
