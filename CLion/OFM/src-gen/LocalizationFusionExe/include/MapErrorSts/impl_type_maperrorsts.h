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
/**        \file  LocalizationFusionExe/include/MapErrorSts/impl_type_maperrorsts.h
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

#ifndef LOCALIZATIONFUSIONEXE_INCLUDE_MAPERRORSTS_IMPL_TYPE_MAPERRORSTS_H_
#define LOCALIZATIONFUSIONEXE_INCLUDE_MAPERRORSTS_IMPL_TYPE_MAPERRORSTS_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include <array>
#include <cstdint>
#include <map>
#include <string>
#include <vector>
#include "CamErrorSts/impl_type_camerrorsts.h"
#include "GnssErrorSts/impl_type_gnsserrorsts.h"
#include "HdmapErrorSts/impl_type_hdmaperrorsts.h"
#include "ImuErrorSts/impl_type_imuerrorsts.h"
#include "VehErrorSts/impl_type_veherrorsts.h"

namespace MapErrorSts {

// VECTOR Disable AutosarC++17_10-A12.6.1: MD_MDTG_A12.6.1_GeneratedStructUninitializedMembers
// VECTOR Disable AutosarC++17_10-M8.5.1: MD_MDTG_M8.5.1_GeneratedStructUninitializedMembers
/*!
 * \brief Type MapErrorSts.
 * \remark generated
 * \trace SPEC-5951372
 *
 * IMPLEMENTATION-DATA-TYPE /CppImplementationDataTypes/MapErrorSts
 */
struct MapErrorSts {
  using _GnssErrorSts_ref_type = GnssErrorSts::GnssErrorSts;
  using _CamErrorSts_ref_type = CamErrorSts::CamErrorSts;
  using _HdmapErrorSts_ref_type = HdmapErrorSts::HdmapErrorSts;
  using _VehErrorSts_ref_type = VehErrorSts::VehErrorSts;
  using _ImuErrorSts_ref_type = ImuErrorSts::ImuErrorSts;

  _GnssErrorSts_ref_type GnssErrorSts_ref;
  _CamErrorSts_ref_type CamErrorSts_ref;
  _HdmapErrorSts_ref_type HdmapErrorSts_ref;
  _VehErrorSts_ref_type VehErrorSts_ref;
  _ImuErrorSts_ref_type ImuErrorSts_ref;
};
// VECTOR Enable AutosarC++17_10-A12.6.1
// VECTOR Enable AutosarC++17_10-M8.5.1

/*!
 * \brief Compare for equality with another MapErrorSts instance.
 */
inline bool operator==(MapErrorSts const& l,
                       MapErrorSts const& r) noexcept {
  return (&l == &r) || ((l.GnssErrorSts_ref == r.GnssErrorSts_ref)
                         && (l.CamErrorSts_ref == r.CamErrorSts_ref)
                         && (l.HdmapErrorSts_ref == r.HdmapErrorSts_ref)
                         && (l.VehErrorSts_ref == r.VehErrorSts_ref)
                         && (l.ImuErrorSts_ref == r.ImuErrorSts_ref)
  );
}

/*!
 * \brief Compare for inequality with another MapErrorSts instance.
 */
inline bool operator!=(MapErrorSts const& l,
                       MapErrorSts const& r) noexcept {
  return !(l == r);
}

}  // namespace MapErrorSts

#endif  // LOCALIZATIONFUSIONEXE_INCLUDE_MAPERRORSTS_IMPL_TYPE_MAPERRORSTS_H_
