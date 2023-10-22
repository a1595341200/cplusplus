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
/**        \file  ObjectFusionModelExe/include/FourDRadarECUStsGrpSts/impl_type_fourdradarecustsgrpsts.h
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

#ifndef OBJECTFUSIONMODELEXE_INCLUDE_FOURDRADARECUSTSGRPSTS_IMPL_TYPE_FOURDRADARECUSTSGRPSTS_H_
#define OBJECTFUSIONMODELEXE_INCLUDE_FOURDRADARECUSTSGRPSTS_IMPL_TYPE_FOURDRADARECUSTSGRPSTS_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include <array>
#include <cstdint>
#include <map>
#include <string>
#include <vector>
#include "FourDRadarECUSts/impl_type_fourdradarecusts.h"
#include "FrontFourDRadarSts1Vcc/impl_type_frontfourdradarsts1vcc.h"

namespace FourDRadarECUStsGrpSts {

// VECTOR Disable AutosarC++17_10-A12.6.1: MD_MDTG_A12.6.1_GeneratedStructUninitializedMembers
// VECTOR Disable AutosarC++17_10-M8.5.1: MD_MDTG_M8.5.1_GeneratedStructUninitializedMembers
/*!
 * \brief Type FourDRadarECUStsGrpSts.
 * \remark generated
 * \trace SPEC-5951372
 *
 * IMPLEMENTATION-DATA-TYPE /CppImplementationDataTypes/FourDRadarECUStsGrpSts
 */
struct FourDRadarECUStsGrpSts {
  using _FourDRadarECUSts_ref_type = FourDRadarECUSts::FourDRadarECUSts;
  using _FrontFourDRadarSts1Vcc_ref_type = FrontFourDRadarSts1Vcc::FrontFourDRadarSts1Vcc;

  _FourDRadarECUSts_ref_type FourDRadarECUSts_ref;
  _FrontFourDRadarSts1Vcc_ref_type FrontFourDRadarSts1Vcc_ref;
};
// VECTOR Enable AutosarC++17_10-A12.6.1
// VECTOR Enable AutosarC++17_10-M8.5.1

/*!
 * \brief Compare for equality with another FourDRadarECUStsGrpSts instance.
 */
inline bool operator==(FourDRadarECUStsGrpSts const& l,
                       FourDRadarECUStsGrpSts const& r) noexcept {
  return (&l == &r) || ((l.FourDRadarECUSts_ref == r.FourDRadarECUSts_ref)
                         && (l.FrontFourDRadarSts1Vcc_ref == r.FrontFourDRadarSts1Vcc_ref)
  );
}

/*!
 * \brief Compare for inequality with another FourDRadarECUStsGrpSts instance.
 */
inline bool operator!=(FourDRadarECUStsGrpSts const& l,
                       FourDRadarECUStsGrpSts const& r) noexcept {
  return !(l == r);
}

}  // namespace FourDRadarECUStsGrpSts

#endif  // OBJECTFUSIONMODELEXE_INCLUDE_FOURDRADARECUSTSGRPSTS_IMPL_TYPE_FOURDRADARECUSTSGRPSTS_H_
