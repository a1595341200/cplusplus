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
/**        \file  RadarAdaptorExe/include/FourDRadarObjStsGrp21_30/impl_type_fourdradarobjstsgrp21_30.h
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

#ifndef RADARADAPTOREXE_INCLUDE_FOURDRADAROBJSTSGRP21_30_IMPL_TYPE_FOURDRADAROBJSTSGRP21_30_H_
#define RADARADAPTOREXE_INCLUDE_FOURDRADAROBJSTSGRP21_30_IMPL_TYPE_FOURDRADAROBJSTSGRP21_30_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include <array>
#include <cstdint>
#include <map>
#include <string>
#include <vector>
#include "ErrorStatuse21_30/impl_type_errorstatuse21_30.h"
#include "FourDRadarObjSts21_30/impl_type_fourdradarobjsts21_30.h"
#include "TFourDRadarDataValid21_30/impl_type_tfourdradardatavalid21_30.h"

namespace FourDRadarObjStsGrp21_30 {

// VECTOR Disable AutosarC++17_10-A12.6.1: MD_MDTG_A12.6.1_GeneratedStructUninitializedMembers
// VECTOR Disable AutosarC++17_10-M8.5.1: MD_MDTG_M8.5.1_GeneratedStructUninitializedMembers
/*!
 * \brief Type FourDRadarObjStsGrp21_30.
 * \remark generated
 * \trace SPEC-5951372
 *
 * IMPLEMENTATION-DATA-TYPE /CppImplementationDataTypes/FourDRadarObjStsGrp21_30
 */
struct FourDRadarObjStsGrp21_30 {
  using _TFourDRadarDataValid21_30_ref_type = TFourDRadarDataValid21_30::TFourDRadarDataValid21_30;
  using _FourDRadarObjSts21_30_ref_type = FourDRadarObjSts21_30::FourDRadarObjSts21_30;
  using _ErrorStatuse21_30_ref_type = ErrorStatuse21_30::ErrorStatuse21_30;

  _TFourDRadarDataValid21_30_ref_type TFourDRadarDataValid21_30_ref;
  _FourDRadarObjSts21_30_ref_type FourDRadarObjSts21_30_ref;
  _ErrorStatuse21_30_ref_type ErrorStatuse21_30_ref;
};
// VECTOR Enable AutosarC++17_10-A12.6.1
// VECTOR Enable AutosarC++17_10-M8.5.1

/*!
 * \brief Compare for equality with another FourDRadarObjStsGrp21_30 instance.
 */
inline bool operator==(FourDRadarObjStsGrp21_30 const& l,
                       FourDRadarObjStsGrp21_30 const& r) noexcept {
  return (&l == &r) || ((l.TFourDRadarDataValid21_30_ref == r.TFourDRadarDataValid21_30_ref)
                         && (l.FourDRadarObjSts21_30_ref == r.FourDRadarObjSts21_30_ref)
                         && (l.ErrorStatuse21_30_ref == r.ErrorStatuse21_30_ref)
  );
}

/*!
 * \brief Compare for inequality with another FourDRadarObjStsGrp21_30 instance.
 */
inline bool operator!=(FourDRadarObjStsGrp21_30 const& l,
                       FourDRadarObjStsGrp21_30 const& r) noexcept {
  return !(l == r);
}

}  // namespace FourDRadarObjStsGrp21_30

#endif  // RADARADAPTOREXE_INCLUDE_FOURDRADAROBJSTSGRP21_30_IMPL_TYPE_FOURDRADAROBJSTSGRP21_30_H_
