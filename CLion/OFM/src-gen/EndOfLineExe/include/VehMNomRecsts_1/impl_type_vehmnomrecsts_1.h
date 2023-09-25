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
/**        \file  EndOfLineExe/include/VehMNomRecsts_1/impl_type_vehmnomrecsts_1.h
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

#ifndef ENDOFLINEEXE_INCLUDE_VEHMNOMRECSTS_1_IMPL_TYPE_VEHMNOMRECSTS_1_H_
#define ENDOFLINEEXE_INCLUDE_VEHMNOMRECSTS_1_IMPL_TYPE_VEHMNOMRECSTS_1_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include <array>
#include <cstdint>
#include <map>
#include <string>
#include <vector>
#include "TrlrM/impl_type_trlrm.h"
#include "VehM/impl_type_vehm.h"
#include "VehMQly/impl_type_vehmqly.h"

namespace VehMNomRecsts_1 {

// VECTOR Disable AutosarC++17_10-A12.6.1: MD_MDTG_A12.6.1_GeneratedStructUninitializedMembers
// VECTOR Disable AutosarC++17_10-M8.5.1: MD_MDTG_M8.5.1_GeneratedStructUninitializedMembers
/*!
 * \brief Type VehMNomRecsts_1.
 * \remark generated
 * \trace SPEC-5951372
 *
 * IMPLEMENTATION-DATA-TYPE /CppImplementationDataTypes/VehMNomRecsts_1
 */
struct VehMNomRecsts_1 {
  using _VehM_ref_type = VehM::VehM;
  using _VehMQly_ref_type = VehMQly::VehMQly;
  using _TrlrM_ref_type = TrlrM::TrlrM;

  _VehM_ref_type VehM_ref;
  _VehMQly_ref_type VehMQly_ref;
  _TrlrM_ref_type TrlrM_ref;
};
// VECTOR Enable AutosarC++17_10-A12.6.1
// VECTOR Enable AutosarC++17_10-M8.5.1

/*!
 * \brief Compare for equality with another VehMNomRecsts_1 instance.
 */
inline bool operator==(VehMNomRecsts_1 const& l,
                       VehMNomRecsts_1 const& r) noexcept {
  return (&l == &r) || ((l.VehM_ref == r.VehM_ref)
                         && (l.VehMQly_ref == r.VehMQly_ref)
                         && (l.TrlrM_ref == r.TrlrM_ref)
  );
}

/*!
 * \brief Compare for inequality with another VehMNomRecsts_1 instance.
 */
inline bool operator!=(VehMNomRecsts_1 const& l,
                       VehMNomRecsts_1 const& r) noexcept {
  return !(l == r);
}

}  // namespace VehMNomRecsts_1

#endif  // ENDOFLINEEXE_INCLUDE_VEHMNOMRECSTS_1_IMPL_TYPE_VEHMNOMRECSTS_1_H_
