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
/**        \file  RoadModelFusionExe/include/RefLineSpeedInf/impl_type_reflinespeedinf.h
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

#ifndef ROADMODELFUSIONEXE_INCLUDE_REFLINESPEEDINF_IMPL_TYPE_REFLINESPEEDINF_H_
#define ROADMODELFUSIONEXE_INCLUDE_REFLINESPEEDINF_IMPL_TYPE_REFLINESPEEDINF_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include <array>
#include <cstdint>
#include <map>
#include <string>
#include <vector>
#include "PntIdx/impl_type_pntidx.h"
#include "SpeedLimitationMax/impl_type_speedlimitationmax.h"
#include "SpeedLimitationMin/impl_type_speedlimitationmin.h"

namespace RefLineSpeedInf {

// VECTOR Disable AutosarC++17_10-A12.6.1: MD_MDTG_A12.6.1_GeneratedStructUninitializedMembers
// VECTOR Disable AutosarC++17_10-M8.5.1: MD_MDTG_M8.5.1_GeneratedStructUninitializedMembers
/*!
 * \brief Type RefLineSpeedInf.
 * \remark generated
 * \trace SPEC-5951372
 *
 * IMPLEMENTATION-DATA-TYPE /CppImplementationDataTypes/RefLineSpeedInf
 */
struct RefLineSpeedInf {
  using _SpeedLimitationMin_ref_type = SpeedLimitationMin::SpeedLimitationMin;
  using _SpeedLimitationMax_ref_type = SpeedLimitationMax::SpeedLimitationMax;
  using _PntIdx_ref_type = PntIdx::PntIdx;

  _SpeedLimitationMin_ref_type SpeedLimitationMin_ref;
  _SpeedLimitationMax_ref_type SpeedLimitationMax_ref;
  _PntIdx_ref_type PntIdx_ref;
};
// VECTOR Enable AutosarC++17_10-A12.6.1
// VECTOR Enable AutosarC++17_10-M8.5.1

/*!
 * \brief Compare for equality with another RefLineSpeedInf instance.
 */
inline bool operator==(RefLineSpeedInf const& l,
                       RefLineSpeedInf const& r) noexcept {
  return (&l == &r) || ((l.SpeedLimitationMin_ref == r.SpeedLimitationMin_ref)
                         && (l.SpeedLimitationMax_ref == r.SpeedLimitationMax_ref)
                         && (l.PntIdx_ref == r.PntIdx_ref)
  );
}

/*!
 * \brief Compare for inequality with another RefLineSpeedInf instance.
 */
inline bool operator!=(RefLineSpeedInf const& l,
                       RefLineSpeedInf const& r) noexcept {
  return !(l == r);
}

}  // namespace RefLineSpeedInf

#endif  // ROADMODELFUSIONEXE_INCLUDE_REFLINESPEEDINF_IMPL_TYPE_REFLINESPEEDINF_H_
