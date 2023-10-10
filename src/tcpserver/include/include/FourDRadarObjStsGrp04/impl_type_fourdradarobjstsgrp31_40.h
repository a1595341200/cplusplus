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
/**        \file  ObjectFusionModelExe/include/FourDRadarObjStsGrp04/impl_type_fourdradarobjstsgrp31_40.h
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

#ifndef OBJECTFUSIONMODELEXE_INCLUDE_FOURDRADAROBJSTSGRP04_IMPL_TYPE_FOURDRADAROBJSTSGRP31_40_H_
#define OBJECTFUSIONMODELEXE_INCLUDE_FOURDRADAROBJSTSGRP04_IMPL_TYPE_FOURDRADAROBJSTSGRP31_40_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include <array>
#include <cstdint>
#include <map>
#include <string>
#include <vector>
#include "ErrorStatuse31_40/impl_type_errorstatuse31_40.h"
#include "FourDRadarObjSts31_40/impl_type_fourdradarobjsts31_40.h"
#include "TFourDRadarDataValid31_40/impl_type_tfourdradardatavalid31_40.h"

namespace FourDRadarObjStsGrp04 {

// VECTOR Disable AutosarC++17_10-A12.6.1: MD_MDTG_A12.6.1_GeneratedStructUninitializedMembers
// VECTOR Disable AutosarC++17_10-M8.5.1: MD_MDTG_M8.5.1_GeneratedStructUninitializedMembers
/*!
 * \brief Type FourDRadarObjStsGrp31_40.
 * \remark generated
 * \trace SPEC-5951372
 *
 * IMPLEMENTATION-DATA-TYPE /CppImplementationDataTypes/FourDRadarObjStsGrp31_40
 */
struct FourDRadarObjStsGrp31_40 {
  using _TFourDRadarDataValid31_40_ref_type = TFourDRadarDataValid31_40::TFourDRadarDataValid31_40;
  using _FourDRadarObjSts31_40_ref_type = FourDRadarObjSts31_40::FourDRadarObjSts31_40;
  using _ErrorStatuse31_40_ref_type = ErrorStatuse31_40::ErrorStatuse31_40;

  _TFourDRadarDataValid31_40_ref_type TFourDRadarDataValid31_40_ref;
  _FourDRadarObjSts31_40_ref_type FourDRadarObjSts31_40_ref;
  _ErrorStatuse31_40_ref_type ErrorStatuse31_40_ref;
};
// VECTOR Enable AutosarC++17_10-A12.6.1
// VECTOR Enable AutosarC++17_10-M8.5.1

/*!
 * \brief Compare for equality with another FourDRadarObjStsGrp31_40 instance.
 */
inline bool operator==(FourDRadarObjStsGrp31_40 const& l,
                       FourDRadarObjStsGrp31_40 const& r) noexcept {
  return (&l == &r) || ((l.TFourDRadarDataValid31_40_ref == r.TFourDRadarDataValid31_40_ref)
                         && (l.FourDRadarObjSts31_40_ref == r.FourDRadarObjSts31_40_ref)
                         && (l.ErrorStatuse31_40_ref == r.ErrorStatuse31_40_ref)
  );
}

/*!
 * \brief Compare for inequality with another FourDRadarObjStsGrp31_40 instance.
 */
inline bool operator!=(FourDRadarObjStsGrp31_40 const& l,
                       FourDRadarObjStsGrp31_40 const& r) noexcept {
  return !(l == r);
}

}  // namespace FourDRadarObjStsGrp04

#endif  // OBJECTFUSIONMODELEXE_INCLUDE_FOURDRADAROBJSTSGRP04_IMPL_TYPE_FOURDRADAROBJSTSGRP31_40_H_
