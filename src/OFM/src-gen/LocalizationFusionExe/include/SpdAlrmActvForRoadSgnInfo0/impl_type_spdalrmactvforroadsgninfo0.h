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
/**        \file  LocalizationFusionExe/include/SpdAlrmActvForRoadSgnInfo0/impl_type_spdalrmactvforroadsgninfo0.h
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

#ifndef LOCALIZATIONFUSIONEXE_INCLUDE_SPDALRMACTVFORROADSGNINFO0_IMPL_TYPE_SPDALRMACTVFORROADSGNINFO0_H_
#define LOCALIZATIONFUSIONEXE_INCLUDE_SPDALRMACTVFORROADSGNINFO0_IMPL_TYPE_SPDALRMACTVFORROADSGNINFO0_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include <array>
#include <cstdint>
#include <map>
#include <string>
#include <vector>
#include "SpdAlrmActvForRoadSgnInfoPen/impl_type_spdalrmactvforroadsgninfopen.h"
#include "SpdAlrmActvForRoadSgnInfoSts/impl_type_spdalrmactvforroadsgninfosts.h"

namespace SpdAlrmActvForRoadSgnInfo0 {

// VECTOR Disable AutosarC++17_10-A12.6.1: MD_MDTG_A12.6.1_GeneratedStructUninitializedMembers
// VECTOR Disable AutosarC++17_10-M8.5.1: MD_MDTG_M8.5.1_GeneratedStructUninitializedMembers
/*!
 * \brief Type SpdAlrmActvForRoadSgnInfo0.
 * \remark generated
 * \trace SPEC-5951372
 *
 * IMPLEMENTATION-DATA-TYPE /CppImplementationDataTypes/SpdAlrmActvForRoadSgnInfo0
 */
struct SpdAlrmActvForRoadSgnInfo0 {
  using _SpdAlrmActvForRoadSgnInfoSts_ref_type = SpdAlrmActvForRoadSgnInfoSts::SpdAlrmActvForRoadSgnInfoSts;
  using _SpdAlrmActvForRoadSgnInfoPen_ref_type = SpdAlrmActvForRoadSgnInfoPen::SpdAlrmActvForRoadSgnInfoPen;

  _SpdAlrmActvForRoadSgnInfoSts_ref_type SpdAlrmActvForRoadSgnInfoSts_ref;
  _SpdAlrmActvForRoadSgnInfoPen_ref_type SpdAlrmActvForRoadSgnInfoPen_ref;
};
// VECTOR Enable AutosarC++17_10-A12.6.1
// VECTOR Enable AutosarC++17_10-M8.5.1

/*!
 * \brief Compare for equality with another SpdAlrmActvForRoadSgnInfo0 instance.
 */
inline bool operator==(SpdAlrmActvForRoadSgnInfo0 const& l,
                       SpdAlrmActvForRoadSgnInfo0 const& r) noexcept {
  return (&l == &r) || ((l.SpdAlrmActvForRoadSgnInfoSts_ref == r.SpdAlrmActvForRoadSgnInfoSts_ref)
                         && (l.SpdAlrmActvForRoadSgnInfoPen_ref == r.SpdAlrmActvForRoadSgnInfoPen_ref)
  );
}

/*!
 * \brief Compare for inequality with another SpdAlrmActvForRoadSgnInfo0 instance.
 */
inline bool operator!=(SpdAlrmActvForRoadSgnInfo0 const& l,
                       SpdAlrmActvForRoadSgnInfo0 const& r) noexcept {
  return !(l == r);
}

}  // namespace SpdAlrmActvForRoadSgnInfo0

#endif  // LOCALIZATIONFUSIONEXE_INCLUDE_SPDALRMACTVFORROADSGNINFO0_IMPL_TYPE_SPDALRMACTVFORROADSGNINFO0_H_
