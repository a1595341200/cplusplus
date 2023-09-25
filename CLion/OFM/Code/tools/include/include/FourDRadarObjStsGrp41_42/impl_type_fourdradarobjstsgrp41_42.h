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
/**        \file  ObjectFusionModelExe/include/FourDRadarObjStsGrp41_42/impl_type_fourdradarobjstsgrp41_42.h
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

#ifndef OBJECTFUSIONMODELEXE_INCLUDE_FOURDRADAROBJSTSGRP41_42_IMPL_TYPE_FOURDRADAROBJSTSGRP41_42_H_
#define OBJECTFUSIONMODELEXE_INCLUDE_FOURDRADAROBJSTSGRP41_42_IMPL_TYPE_FOURDRADAROBJSTSGRP41_42_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include <array>
#include <cstdint>
#include <map>
#include <string>
#include <vector>
#include "ErrorStatuse41_42/impl_type_errorstatuse41_42.h"
#include "FourDRadarObjSts41_42/impl_type_fourdradarobjsts41_42.h"
#include "TFourDRadarDataValid41_42/impl_type_tfourdradardatavalid41_42.h"

namespace FourDRadarObjStsGrp41_42 {

// VECTOR Disable AutosarC++17_10-A12.6.1: MD_MDTG_A12.6.1_GeneratedStructUninitializedMembers
// VECTOR Disable AutosarC++17_10-M8.5.1: MD_MDTG_M8.5.1_GeneratedStructUninitializedMembers
/*!
 * \brief Type FourDRadarObjStsGrp41_42.
 * \remark generated
 * \trace SPEC-5951372
 *
 * IMPLEMENTATION-DATA-TYPE /CppImplementationDataTypes/FourDRadarObjStsGrp41_42
 */
struct FourDRadarObjStsGrp41_42 {
  using _TFourDRadarDataValid41_42_ref_type = TFourDRadarDataValid41_42::TFourDRadarDataValid41_42;
  using _FourDRadarObjSts41_42_ref_type = FourDRadarObjSts41_42::FourDRadarObjSts41_42;
  using _ErrorStatuse41_42_ref_type = ErrorStatuse41_42::ErrorStatuse41_42;

  _TFourDRadarDataValid41_42_ref_type TFourDRadarDataValid41_42_ref;
  _FourDRadarObjSts41_42_ref_type FourDRadarObjSts41_42_ref;
  _ErrorStatuse41_42_ref_type ErrorStatuse41_42_ref;
};
// VECTOR Enable AutosarC++17_10-A12.6.1
// VECTOR Enable AutosarC++17_10-M8.5.1

/*!
 * \brief Compare for equality with another FourDRadarObjStsGrp41_42 instance.
 */
inline bool operator==(FourDRadarObjStsGrp41_42 const& l,
                       FourDRadarObjStsGrp41_42 const& r) noexcept {
  return (&l == &r) || ((l.TFourDRadarDataValid41_42_ref == r.TFourDRadarDataValid41_42_ref)
                         && (l.FourDRadarObjSts41_42_ref == r.FourDRadarObjSts41_42_ref)
                         && (l.ErrorStatuse41_42_ref == r.ErrorStatuse41_42_ref)
  );
}

/*!
 * \brief Compare for inequality with another FourDRadarObjStsGrp41_42 instance.
 */
inline bool operator!=(FourDRadarObjStsGrp41_42 const& l,
                       FourDRadarObjStsGrp41_42 const& r) noexcept {
  return !(l == r);
}

}  // namespace FourDRadarObjStsGrp41_42

#endif  // OBJECTFUSIONMODELEXE_INCLUDE_FOURDRADAROBJSTSGRP41_42_IMPL_TYPE_FOURDRADAROBJSTSGRP41_42_H_
