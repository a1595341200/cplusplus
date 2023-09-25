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
/**        \file  RoadModelFusionExe/include/RefPathGlobal/impl_type_refpathglobal.h
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

#ifndef ROADMODELFUSIONEXE_INCLUDE_REFPATHGLOBAL_IMPL_TYPE_REFPATHGLOBAL_H_
#define ROADMODELFUSIONEXE_INCLUDE_REFPATHGLOBAL_IMPL_TYPE_REFPATHGLOBAL_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include <array>
#include <cstdint>
#include <map>
#include <string>
#include <vector>
#include "NodeOffset/impl_type_nodeoffset.h"
#include "ProbabilityLe/impl_type_probabilityle.h"
#include "ProbabilityRi/impl_type_probabilityri.h"

namespace RefPathGlobal {

// VECTOR Disable AutosarC++17_10-A12.6.1: MD_MDTG_A12.6.1_GeneratedStructUninitializedMembers
// VECTOR Disable AutosarC++17_10-M8.5.1: MD_MDTG_M8.5.1_GeneratedStructUninitializedMembers
/*!
 * \brief Type RefPathGlobal.
 * \remark generated
 * \trace SPEC-5951372
 *
 * IMPLEMENTATION-DATA-TYPE /CppImplementationDataTypes/RefPathGlobal
 */
struct RefPathGlobal {
  using _NodeOffset_ref_type = NodeOffset::NodeOffset;
  using _ProbabilityLe_ref_type = ProbabilityLe::ProbabilityLe;
  using _ProbabilityRi_ref_type = ProbabilityRi::ProbabilityRi;

  _NodeOffset_ref_type NodeOffset_ref;
  _ProbabilityLe_ref_type ProbabilityLe_ref;
  _ProbabilityRi_ref_type ProbabilityRi_ref;
};
// VECTOR Enable AutosarC++17_10-A12.6.1
// VECTOR Enable AutosarC++17_10-M8.5.1

/*!
 * \brief Compare for equality with another RefPathGlobal instance.
 */
inline bool operator==(RefPathGlobal const& l,
                       RefPathGlobal const& r) noexcept {
  return (&l == &r) || ((l.NodeOffset_ref == r.NodeOffset_ref)
                         && (l.ProbabilityLe_ref == r.ProbabilityLe_ref)
                         && (l.ProbabilityRi_ref == r.ProbabilityRi_ref)
  );
}

/*!
 * \brief Compare for inequality with another RefPathGlobal instance.
 */
inline bool operator!=(RefPathGlobal const& l,
                       RefPathGlobal const& r) noexcept {
  return !(l == r);
}

}  // namespace RefPathGlobal

#endif  // ROADMODELFUSIONEXE_INCLUDE_REFPATHGLOBAL_IMPL_TYPE_REFPATHGLOBAL_H_
