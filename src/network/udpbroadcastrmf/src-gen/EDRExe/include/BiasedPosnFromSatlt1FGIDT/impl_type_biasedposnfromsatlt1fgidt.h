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
/**        \file  EDRExe/include/BiasedPosnFromSatlt1FGIDT/impl_type_biasedposnfromsatlt1fgidt.h
 *        \brief
 *
 *      \details
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 *  GENERATOR INFORMATION
 *  -------------------------------------------------------------------------------------------------------------------
 *    Generator Name: amsr_modelleddatatypes_api
 *         Commit ID: ac290ed6b867d81fff39c644dd6c9dfa396bacad
 *********************************************************************************************************************/

#ifndef EDREXE_INCLUDE_BIASEDPOSNFROMSATLT1FGIDT_IMPL_TYPE_BIASEDPOSNFROMSATLT1FGIDT_H_
#define EDREXE_INCLUDE_BIASEDPOSNFROMSATLT1FGIDT_IMPL_TYPE_BIASEDPOSNFROMSATLT1FGIDT_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include <array>
#include <cmath>
#include <cstdint>
#include <limits>
#include <map>
#include <string>
#include <vector>
#include "float32IDT/impl_type_float32idt.h"
#include "uint8IDT/impl_type_uint8idt.h"

namespace BiasedPosnFromSatlt1FGIDT {

// VCA Disable [LNG-01,LNG-03,SLC-11,SLC-12,SLC-14,SLC-16,SPC-15] : VCA_MODELLEDDATATYPEGENERATOR_DATA_TYPE_DECLARATION
// VECTOR Disable AutosarC++17_10-A12.6.1: MD_MDTG_A12.6.1_GeneratedStructUninitializedMembers
// VECTOR Disable AutosarC++17_10-M8.5.1: MD_MDTG_M8.5.1_GeneratedStructUninitializedMembers
/*!
 * \brief Type BiasedPosnFromSatlt1FGIDT.
 * \remark generated
 *
 * IMPLEMENTATION-DATA-TYPE /CppImplementationDataTypes/BiasedPosnFromSatlt1FGIDT
 */
struct BiasedPosnFromSatlt1FGIDT {
  using BiasedPosnFromSatltCntr_generated_type = uint8IDT::uint8IDT;
  using BiasedPosnFromSatltPosnLat_generated_type = float32IDT::float32IDT;
  using BiasedPosnFromSatltPosnLgt_generated_type = float32IDT::float32IDT;
  using BiasedPosnFromSatltTiForMins_generated_type = float32IDT::float32IDT;
  using BiasedPosnFromSatltTiForMsec_generated_type = float32IDT::float32IDT;
  using BiasedPosnFromSatltTiForSec_generated_type = float32IDT::float32IDT;

  BiasedPosnFromSatltCntr_generated_type BiasedPosnFromSatltCntr;
  BiasedPosnFromSatltPosnLat_generated_type BiasedPosnFromSatltPosnLat;
  BiasedPosnFromSatltPosnLgt_generated_type BiasedPosnFromSatltPosnLgt;
  BiasedPosnFromSatltTiForMins_generated_type BiasedPosnFromSatltTiForMins;
  BiasedPosnFromSatltTiForMsec_generated_type BiasedPosnFromSatltTiForMsec;
  BiasedPosnFromSatltTiForSec_generated_type BiasedPosnFromSatltTiForSec;
};
// VECTOR Enable AutosarC++17_10-A12.6.1
// VECTOR Enable AutosarC++17_10-M8.5.1

/*!
 * \brief   Compare for equality with another BiasedPosnFromSatlt1FGIDT instance.
 * \details The method for comparing floating point members is to check whether they are at most
 *          one machine epsilon apart. This method works best for comparing numbers between
 *          1.0 and 2.0. Larger numbers will only be equal if they match exactly, and smaller
 *          numbers that are relatively far apart will be considered equal.
 *          Consider if your application requires a different comparison method, and if so
 *          use your own.
 */
inline bool operator==(BiasedPosnFromSatlt1FGIDT const& l,
                       BiasedPosnFromSatlt1FGIDT const& r) noexcept {
  // VECTOR Next Construct VectorC++-V3.9.2: MD_MDTG_V3.9.2_EqualsOperator
  auto const compare_float = [](auto l_float, auto r_float) -> bool {
    // VECTOR Next Construct AutosarC++17_10-M0.4.2: MD_MDTG_M0.4.2_GeneratedFloatPointComparison
    return (std::fabs(l_float - r_float) <= std::numeric_limits<decltype(l_float)>::epsilon());
  };
  return (&l == &r) || ((l.BiasedPosnFromSatltCntr == r.BiasedPosnFromSatltCntr)
                         && compare_float(l.BiasedPosnFromSatltPosnLat, r.BiasedPosnFromSatltPosnLat)
                         && compare_float(l.BiasedPosnFromSatltPosnLgt, r.BiasedPosnFromSatltPosnLgt)
                         && compare_float(l.BiasedPosnFromSatltTiForMins, r.BiasedPosnFromSatltTiForMins)
                         && compare_float(l.BiasedPosnFromSatltTiForMsec, r.BiasedPosnFromSatltTiForMsec)
                         && compare_float(l.BiasedPosnFromSatltTiForSec, r.BiasedPosnFromSatltTiForSec)
  );
}

/*!
 * \brief   Compare for inequality with another BiasedPosnFromSatlt1FGIDT instance.
 * \details The method for comparing floating point members is to check whether they are at most
 *          one machine epsilon apart. This method works best for comparing numbers between
 *          1.0 and 2.0. Larger numbers will only be equal if they match exactly, and smaller
 *          numbers that are relatively far apart will be considered equal.
 *          Consider if your application requires a different comparison method, and if so
 *          use your own.
 */
inline bool operator!=(BiasedPosnFromSatlt1FGIDT const& l,
                       BiasedPosnFromSatlt1FGIDT const& r) noexcept {
  return !(l == r);
}
// VCA Enable : VCA_MODELLEDDATATYPEGENERATOR_DATA_TYPE_DECLARATION

}  // namespace BiasedPosnFromSatlt1FGIDT

#endif  // EDREXE_INCLUDE_BIASEDPOSNFROMSATLT1FGIDT_IMPL_TYPE_BIASEDPOSNFROMSATLT1FGIDT_H_
