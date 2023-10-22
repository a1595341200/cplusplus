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
/**        \file  LocalizationFusionExe/include/PinionSteerAgGroup/impl_type_pinionsteeraggroup.h
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

#ifndef LOCALIZATIONFUSIONEXE_INCLUDE_PINIONSTEERAGGROUP_IMPL_TYPE_PINIONSTEERAGGROUP_H_
#define LOCALIZATIONFUSIONEXE_INCLUDE_PINIONSTEERAGGROUP_IMPL_TYPE_PINIONSTEERAGGROUP_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include <array>
#include <cstdint>
#include <map>
#include <string>
#include <vector>
#include "PinionSteerAgGroupChks/impl_type_pinionsteeraggroupchks.h"
#include "PinionSteerAgGroupCntr/impl_type_pinionsteeraggroupcntr.h"
#include "PinionSteerAgGroupPinionSteerAg1/impl_type_pinionsteeraggrouppinionsteerag1.h"
#include "PinionSteerAgGroupPinionSteerAg1Qf/impl_type_pinionsteeraggrouppinionsteerag1qf.h"
#include "PinionSteerAgGroupPinionSteerAgSpd1/impl_type_pinionsteeraggrouppinionsteeragspd1.h"
#include "PinionSteerAgGroupPinionSteerAgSpd1Qf/impl_type_pinionsteeraggrouppinionsteeragspd1qf.h"
#include "PinionSteerAgGroupSteerWhlTq/impl_type_pinionsteeraggroupsteerwhltq.h"
#include "PinionSteerAgGroupSteerWhlTqQf/impl_type_pinionsteeraggroupsteerwhltqqf.h"

namespace PinionSteerAgGroup {

// VECTOR Disable AutosarC++17_10-A12.6.1: MD_MDTG_A12.6.1_GeneratedStructUninitializedMembers
// VECTOR Disable AutosarC++17_10-M8.5.1: MD_MDTG_M8.5.1_GeneratedStructUninitializedMembers
/*!
 * \brief Type PinionSteerAgGroup.
 * \remark generated
 * \trace SPEC-5951372
 *
 * IMPLEMENTATION-DATA-TYPE /CppImplementationDataTypes/PinionSteerAgGroup
 */
struct PinionSteerAgGroup {
  using _PinionSteerAgGroupCntr_ref_type = PinionSteerAgGroupCntr::PinionSteerAgGroupCntr;
  using _PinionSteerAgGroupChks_ref_type = PinionSteerAgGroupChks::PinionSteerAgGroupChks;
  using _PinionSteerAgGroupSteerWhlTqQf_ref_type = PinionSteerAgGroupSteerWhlTqQf::PinionSteerAgGroupSteerWhlTqQf;
  using _PinionSteerAgGroupSteerWhlTq_ref_type = PinionSteerAgGroupSteerWhlTq::PinionSteerAgGroupSteerWhlTq;
  using _PinionSteerAgGroupPinionSteerAgSpd1Qf_ref_type = PinionSteerAgGroupPinionSteerAgSpd1Qf::PinionSteerAgGroupPinionSteerAgSpd1Qf;
  using _PinionSteerAgGroupPinionSteerAgSpd1_ref_type = PinionSteerAgGroupPinionSteerAgSpd1::PinionSteerAgGroupPinionSteerAgSpd1;
  using _PinionSteerAgGroupPinionSteerAg1Qf_ref_type = PinionSteerAgGroupPinionSteerAg1Qf::PinionSteerAgGroupPinionSteerAg1Qf;
  using _PinionSteerAgGroupPinionSteerAg1_ref_type = PinionSteerAgGroupPinionSteerAg1::PinionSteerAgGroupPinionSteerAg1;

  _PinionSteerAgGroupCntr_ref_type PinionSteerAgGroupCntr_ref;
  _PinionSteerAgGroupChks_ref_type PinionSteerAgGroupChks_ref;
  _PinionSteerAgGroupSteerWhlTqQf_ref_type PinionSteerAgGroupSteerWhlTqQf_ref;
  _PinionSteerAgGroupSteerWhlTq_ref_type PinionSteerAgGroupSteerWhlTq_ref;
  _PinionSteerAgGroupPinionSteerAgSpd1Qf_ref_type PinionSteerAgGroupPinionSteerAgSpd1Qf_ref;
  _PinionSteerAgGroupPinionSteerAgSpd1_ref_type PinionSteerAgGroupPinionSteerAgSpd1_ref;
  _PinionSteerAgGroupPinionSteerAg1Qf_ref_type PinionSteerAgGroupPinionSteerAg1Qf_ref;
  _PinionSteerAgGroupPinionSteerAg1_ref_type PinionSteerAgGroupPinionSteerAg1_ref;
};
// VECTOR Enable AutosarC++17_10-A12.6.1
// VECTOR Enable AutosarC++17_10-M8.5.1

/*!
 * \brief Compare for equality with another PinionSteerAgGroup instance.
 */
inline bool operator==(PinionSteerAgGroup const& l,
                       PinionSteerAgGroup const& r) noexcept {
  return (&l == &r) || ((l.PinionSteerAgGroupCntr_ref == r.PinionSteerAgGroupCntr_ref)
                         && (l.PinionSteerAgGroupChks_ref == r.PinionSteerAgGroupChks_ref)
                         && (l.PinionSteerAgGroupSteerWhlTqQf_ref == r.PinionSteerAgGroupSteerWhlTqQf_ref)
                         && (l.PinionSteerAgGroupSteerWhlTq_ref == r.PinionSteerAgGroupSteerWhlTq_ref)
                         && (l.PinionSteerAgGroupPinionSteerAgSpd1Qf_ref == r.PinionSteerAgGroupPinionSteerAgSpd1Qf_ref)
                         && (l.PinionSteerAgGroupPinionSteerAgSpd1_ref == r.PinionSteerAgGroupPinionSteerAgSpd1_ref)
                         && (l.PinionSteerAgGroupPinionSteerAg1Qf_ref == r.PinionSteerAgGroupPinionSteerAg1Qf_ref)
                         && (l.PinionSteerAgGroupPinionSteerAg1_ref == r.PinionSteerAgGroupPinionSteerAg1_ref)
  );
}

/*!
 * \brief Compare for inequality with another PinionSteerAgGroup instance.
 */
inline bool operator!=(PinionSteerAgGroup const& l,
                       PinionSteerAgGroup const& r) noexcept {
  return !(l == r);
}

}  // namespace PinionSteerAgGroup

#endif  // LOCALIZATIONFUSIONEXE_INCLUDE_PINIONSTEERAGGROUP_IMPL_TYPE_PINIONSTEERAGGROUP_H_
