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
/**        \file  ObjectFusionModelExe/include/FourDRadarObjStsGrp11_20/impl_type_fourdradarobjstsgrp11_20.h
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

#ifndef OBJECTFUSIONMODELEXE_INCLUDE_FOURDRADAROBJSTSGRP11_20_IMPL_TYPE_FOURDRADAROBJSTSGRP11_20_H_
#define OBJECTFUSIONMODELEXE_INCLUDE_FOURDRADAROBJSTSGRP11_20_IMPL_TYPE_FOURDRADAROBJSTSGRP11_20_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include <array>
#include <cstdint>
#include <map>
#include <string>
#include <vector>
#include "ErrorStatuse11_20/impl_type_errorstatuse11_20.h"
#include "FourDRadarObjSts11_20/impl_type_fourdradarobjsts11_20.h"
#include "TFourDRadarDataValid11_20/impl_type_tfourdradardatavalid11_20.h"

namespace FourDRadarObjStsGrp11_20 {

// VECTOR Disable AutosarC++17_10-A12.6.1: MD_MDTG_A12.6.1_GeneratedStructUninitializedMembers
// VECTOR Disable AutosarC++17_10-M8.5.1: MD_MDTG_M8.5.1_GeneratedStructUninitializedMembers
/*!
 * \brief Type FourDRadarObjStsGrp11_20.
 * \remark generated
 * \trace SPEC-5951372
 *
 * IMPLEMENTATION-DATA-TYPE /CppImplementationDataTypes/FourDRadarObjStsGrp11_20
 */
struct FourDRadarObjStsGrp11_20 {
  using _TFourDRadarDataValid11_20_ref_type = TFourDRadarDataValid11_20::TFourDRadarDataValid11_20;
  using _FourDRadarObjSts11_20_ref_type = FourDRadarObjSts11_20::FourDRadarObjSts11_20;
  using _ErrorStatuse11_20_ref_type = ErrorStatuse11_20::ErrorStatuse11_20;

  _TFourDRadarDataValid11_20_ref_type TFourDRadarDataValid11_20_ref;
  _FourDRadarObjSts11_20_ref_type FourDRadarObjSts11_20_ref;
  _ErrorStatuse11_20_ref_type ErrorStatuse11_20_ref;
};
// VECTOR Enable AutosarC++17_10-A12.6.1
// VECTOR Enable AutosarC++17_10-M8.5.1

/*!
 * \brief Compare for equality with another FourDRadarObjStsGrp11_20 instance.
 */
inline bool operator==(FourDRadarObjStsGrp11_20 const& l,
                       FourDRadarObjStsGrp11_20 const& r) noexcept {
  return (&l == &r) || ((l.TFourDRadarDataValid11_20_ref == r.TFourDRadarDataValid11_20_ref)
                         && (l.FourDRadarObjSts11_20_ref == r.FourDRadarObjSts11_20_ref)
                         && (l.ErrorStatuse11_20_ref == r.ErrorStatuse11_20_ref)
  );
}

/*!
 * \brief Compare for inequality with another FourDRadarObjStsGrp11_20 instance.
 */
inline bool operator!=(FourDRadarObjStsGrp11_20 const& l,
                       FourDRadarObjStsGrp11_20 const& r) noexcept {
  return !(l == r);
}

}  // namespace FourDRadarObjStsGrp11_20

#endif  // OBJECTFUSIONMODELEXE_INCLUDE_FOURDRADAROBJSTSGRP11_20_IMPL_TYPE_FOURDRADAROBJSTSGRP11_20_H_
