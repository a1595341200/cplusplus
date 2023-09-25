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
/**        \file  ObjectFusionModelExe/include/TFourDRadarDataValid/impl_type_tfourdradardatavalid.h
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

#ifndef OBJECTFUSIONMODELEXE_INCLUDE_TFOURDRADARDATAVALID_IMPL_TYPE_TFOURDRADARDATAVALID_H_
#define OBJECTFUSIONMODELEXE_INCLUDE_TFOURDRADARDATAVALID_IMPL_TYPE_TFOURDRADARDATAVALID_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include <array>
#include <cstdint>
#include <map>
#include <string>
#include <vector>
#include "ErrStsValid/impl_type_errstsvalid.h"
#include "ObjValid/impl_type_objvalid.h"

namespace TFourDRadarDataValid {

// VECTOR Disable AutosarC++17_10-A12.6.1: MD_MDTG_A12.6.1_GeneratedStructUninitializedMembers
// VECTOR Disable AutosarC++17_10-M8.5.1: MD_MDTG_M8.5.1_GeneratedStructUninitializedMembers
/*!
 * \brief Type TFourDRadarDataValid.
 * \remark generated
 * \trace SPEC-5951372
 *
 * IMPLEMENTATION-DATA-TYPE /CppImplementationDataTypes/TFourDRadarDataValid
 */
struct TFourDRadarDataValid {
  using _ObjValid_ref_type = ObjValid::ObjValid;
  using _ErrStsValid_ref_type = ErrStsValid::ErrStsValid;

  _ObjValid_ref_type ObjValid_ref;
  _ErrStsValid_ref_type ErrStsValid_ref;
};
// VECTOR Enable AutosarC++17_10-A12.6.1
// VECTOR Enable AutosarC++17_10-M8.5.1

/*!
 * \brief Compare for equality with another TFourDRadarDataValid instance.
 */
inline bool operator==(TFourDRadarDataValid const& l,
                       TFourDRadarDataValid const& r) noexcept {
  return (&l == &r) || ((l.ObjValid_ref == r.ObjValid_ref)
                         && (l.ErrStsValid_ref == r.ErrStsValid_ref)
  );
}

/*!
 * \brief Compare for inequality with another TFourDRadarDataValid instance.
 */
inline bool operator!=(TFourDRadarDataValid const& l,
                       TFourDRadarDataValid const& r) noexcept {
  return !(l == r);
}

}  // namespace TFourDRadarDataValid

#endif  // OBJECTFUSIONMODELEXE_INCLUDE_TFOURDRADARDATAVALID_IMPL_TYPE_TFOURDRADARDATAVALID_H_
