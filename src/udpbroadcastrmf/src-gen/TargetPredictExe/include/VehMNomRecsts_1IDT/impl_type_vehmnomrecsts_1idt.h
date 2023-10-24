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
/**        \file  TargetPredictExe/include/VehMNomRecsts_1IDT/impl_type_vehmnomrecsts_1idt.h
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

#ifndef TARGETPREDICTEXE_INCLUDE_VEHMNOMRECSTS_1IDT_IMPL_TYPE_VEHMNOMRECSTS_1IDT_H_
#define TARGETPREDICTEXE_INCLUDE_VEHMNOMRECSTS_1IDT_IMPL_TYPE_VEHMNOMRECSTS_1IDT_H_

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
#include "VehMNomQly2VccIDT/impl_type_vehmnomqly2vccidt.h"
#include "VehMNomTrlrM1VccIDT/impl_type_vehmnomtrlrm1vccidt.h"
#include "float32IDT/impl_type_float32idt.h"

namespace VehMNomRecsts_1IDT {

// VCA Disable [LNG-01,LNG-03,SLC-11,SLC-12,SLC-14,SLC-16,SPC-15] : VCA_MODELLEDDATATYPEGENERATOR_DATA_TYPE_DECLARATION
// VECTOR Disable AutosarC++17_10-A12.6.1: MD_MDTG_A12.6.1_GeneratedStructUninitializedMembers
// VECTOR Disable AutosarC++17_10-M8.5.1: MD_MDTG_M8.5.1_GeneratedStructUninitializedMembers
/*!
 * \brief Type VehMNomRecsts_1IDT.
 * \remark generated
 *
 * IMPLEMENTATION-DATA-TYPE /CppImplementationDataTypes/VehMNomRecsts_1IDT
 */
struct VehMNomRecsts_1IDT {
  using VehM_generated_type = float32IDT::float32IDT;
  using VehMQly_generated_type = VehMNomQly2VccIDT::VehMNomQly2VccIDT;
  using TrlrM_generated_type = VehMNomTrlrM1VccIDT::VehMNomTrlrM1VccIDT;

  VehM_generated_type VehM;
  VehMQly_generated_type VehMQly;
  TrlrM_generated_type TrlrM;
};
// VECTOR Enable AutosarC++17_10-A12.6.1
// VECTOR Enable AutosarC++17_10-M8.5.1

/*!
 * \brief   Compare for equality with another VehMNomRecsts_1IDT instance.
 * \details The method for comparing floating point members is to check whether they are at most
 *          one machine epsilon apart. This method works best for comparing numbers between
 *          1.0 and 2.0. Larger numbers will only be equal if they match exactly, and smaller
 *          numbers that are relatively far apart will be considered equal.
 *          Consider if your application requires a different comparison method, and if so
 *          use your own.
 */
inline bool operator==(VehMNomRecsts_1IDT const& l,
                       VehMNomRecsts_1IDT const& r) noexcept {
  // VECTOR Next Construct VectorC++-V3.9.2: MD_MDTG_V3.9.2_EqualsOperator
  auto const compare_float = [](auto l_float, auto r_float) -> bool {
    // VECTOR Next Construct AutosarC++17_10-M0.4.2: MD_MDTG_M0.4.2_GeneratedFloatPointComparison
    return (std::fabs(l_float - r_float) <= std::numeric_limits<decltype(l_float)>::epsilon());
  };
  return (&l == &r) || (compare_float(l.VehM, r.VehM)
                         && (l.VehMQly == r.VehMQly)
                         && (l.TrlrM == r.TrlrM)
  );
}

/*!
 * \brief   Compare for inequality with another VehMNomRecsts_1IDT instance.
 * \details The method for comparing floating point members is to check whether they are at most
 *          one machine epsilon apart. This method works best for comparing numbers between
 *          1.0 and 2.0. Larger numbers will only be equal if they match exactly, and smaller
 *          numbers that are relatively far apart will be considered equal.
 *          Consider if your application requires a different comparison method, and if so
 *          use your own.
 */
inline bool operator!=(VehMNomRecsts_1IDT const& l,
                       VehMNomRecsts_1IDT const& r) noexcept {
  return !(l == r);
}
// VCA Enable : VCA_MODELLEDDATATYPEGENERATOR_DATA_TYPE_DECLARATION

}  // namespace VehMNomRecsts_1IDT

#endif  // TARGETPREDICTEXE_INCLUDE_VEHMNOMRECSTS_1IDT_IMPL_TYPE_VEHMNOMRECSTS_1IDT_H_
