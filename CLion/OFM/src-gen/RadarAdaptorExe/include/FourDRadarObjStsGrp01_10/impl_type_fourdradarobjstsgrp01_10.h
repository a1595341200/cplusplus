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
/**        \file  RadarAdaptorExe/include/FourDRadarObjStsGrp01_10/impl_type_fourdradarobjstsgrp01_10.h
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

#ifndef RADARADAPTOREXE_INCLUDE_FOURDRADAROBJSTSGRP01_10_IMPL_TYPE_FOURDRADAROBJSTSGRP01_10_H_
#define RADARADAPTOREXE_INCLUDE_FOURDRADAROBJSTSGRP01_10_IMPL_TYPE_FOURDRADAROBJSTSGRP01_10_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include <array>
#include <cstdint>
#include <map>
#include <string>
#include <vector>
#include "ErrorStatuse01_10/impl_type_errorstatuse01_10.h"
#include "FourDRadarObjSts01_10/impl_type_fourdradarobjsts01_10.h"
#include "TFourDRadarDataValid01_10/impl_type_tfourdradardatavalid01_10.h"

namespace FourDRadarObjStsGrp01_10 {

// VECTOR Disable AutosarC++17_10-A12.6.1: MD_MDTG_A12.6.1_GeneratedStructUninitializedMembers
// VECTOR Disable AutosarC++17_10-M8.5.1: MD_MDTG_M8.5.1_GeneratedStructUninitializedMembers
/*!
 * \brief Type FourDRadarObjStsGrp01_10.
 * \remark generated
 * \trace SPEC-5951372
 *
 * IMPLEMENTATION-DATA-TYPE /CppImplementationDataTypes/FourDRadarObjStsGrp01_10
 */
struct FourDRadarObjStsGrp01_10 {
  using _TFourDRadarDataValid01_10_ref_type = TFourDRadarDataValid01_10::TFourDRadarDataValid01_10;
  using _FourDRadarObjSts01_10_ref_type = FourDRadarObjSts01_10::FourDRadarObjSts01_10;
  using _ErrorStatuse01_10_ref_type = ErrorStatuse01_10::ErrorStatuse01_10;

  _TFourDRadarDataValid01_10_ref_type TFourDRadarDataValid01_10_ref;
  _FourDRadarObjSts01_10_ref_type FourDRadarObjSts01_10_ref;
  _ErrorStatuse01_10_ref_type ErrorStatuse01_10_ref;
};
// VECTOR Enable AutosarC++17_10-A12.6.1
// VECTOR Enable AutosarC++17_10-M8.5.1

/*!
 * \brief Compare for equality with another FourDRadarObjStsGrp01_10 instance.
 */
inline bool operator==(FourDRadarObjStsGrp01_10 const& l,
                       FourDRadarObjStsGrp01_10 const& r) noexcept {
  return (&l == &r) || ((l.TFourDRadarDataValid01_10_ref == r.TFourDRadarDataValid01_10_ref)
                         && (l.FourDRadarObjSts01_10_ref == r.FourDRadarObjSts01_10_ref)
                         && (l.ErrorStatuse01_10_ref == r.ErrorStatuse01_10_ref)
  );
}

/*!
 * \brief Compare for inequality with another FourDRadarObjStsGrp01_10 instance.
 */
inline bool operator!=(FourDRadarObjStsGrp01_10 const& l,
                       FourDRadarObjStsGrp01_10 const& r) noexcept {
  return !(l == r);
}

}  // namespace FourDRadarObjStsGrp01_10

#endif  // RADARADAPTOREXE_INCLUDE_FOURDRADAROBJSTSGRP01_10_IMPL_TYPE_FOURDRADAROBJSTSGRP01_10_H_
