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
/**        \file  EndOfLineExe/include/VehSpdIndcd1/impl_type_vehspdindcd1.h
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

#ifndef ENDOFLINEEXE_INCLUDE_VEHSPDINDCD1_IMPL_TYPE_VEHSPDINDCD1_H_
#define ENDOFLINEEXE_INCLUDE_VEHSPDINDCD1_IMPL_TYPE_VEHSPDINDCD1_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include <array>
#include <cstdint>
#include <map>
#include <string>
#include <vector>
#include "VehSpdIndcdUnit/impl_type_vehspdindcdunit.h"
#include "VehSpdIndcdVal/impl_type_vehspdindcdval.h"

namespace VehSpdIndcd1 {

// VECTOR Disable AutosarC++17_10-A12.6.1: MD_MDTG_A12.6.1_GeneratedStructUninitializedMembers
// VECTOR Disable AutosarC++17_10-M8.5.1: MD_MDTG_M8.5.1_GeneratedStructUninitializedMembers
/*!
 * \brief Type VehSpdIndcd1.
 * \remark generated
 * \trace SPEC-5951372
 *
 * IMPLEMENTATION-DATA-TYPE /CppImplementationDataTypes/VehSpdIndcd1
 */
struct VehSpdIndcd1 {
  using _VehSpdIndcdVal_ref_type = VehSpdIndcdVal::VehSpdIndcdVal;
  using _VehSpdIndcdUnit_ref_type = VehSpdIndcdUnit::VehSpdIndcdUnit;

  _VehSpdIndcdVal_ref_type VehSpdIndcdVal_ref;
  _VehSpdIndcdUnit_ref_type VehSpdIndcdUnit_ref;
};
// VECTOR Enable AutosarC++17_10-A12.6.1
// VECTOR Enable AutosarC++17_10-M8.5.1

/*!
 * \brief Compare for equality with another VehSpdIndcd1 instance.
 */
inline bool operator==(VehSpdIndcd1 const& l,
                       VehSpdIndcd1 const& r) noexcept {
  return (&l == &r) || ((l.VehSpdIndcdVal_ref == r.VehSpdIndcdVal_ref)
                         && (l.VehSpdIndcdUnit_ref == r.VehSpdIndcdUnit_ref)
  );
}

/*!
 * \brief Compare for inequality with another VehSpdIndcd1 instance.
 */
inline bool operator!=(VehSpdIndcd1 const& l,
                       VehSpdIndcd1 const& r) noexcept {
  return !(l == r);
}

}  // namespace VehSpdIndcd1

#endif  // ENDOFLINEEXE_INCLUDE_VEHSPDINDCD1_IMPL_TYPE_VEHSPDINDCD1_H_
