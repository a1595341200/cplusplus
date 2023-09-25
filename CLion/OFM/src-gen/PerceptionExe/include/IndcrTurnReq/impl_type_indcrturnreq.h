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
/**        \file  PerceptionExe/include/IndcrTurnReq/impl_type_indcrturnreq.h
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

#ifndef PERCEPTIONEXE_INCLUDE_INDCRTURNREQ_IMPL_TYPE_INDCRTURNREQ_H_
#define PERCEPTIONEXE_INCLUDE_INDCRTURNREQ_IMPL_TYPE_INDCRTURNREQ_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include <array>
#include <cstdint>
#include <map>
#include <string>
#include <vector>
#include "IndcrTypExtReq/impl_type_indcrtypextreq.h"
#include "IndcrTypExtReqChks/impl_type_indcrtypextreqchks.h"
#include "IndcrTypExtReqCntr/impl_type_indcrtypextreqcntr.h"
#include "IndcrTypExtReqToUpdQf/impl_type_indcrtypextreqtoupdqf.h"

namespace IndcrTurnReq {

// VECTOR Disable AutosarC++17_10-A12.6.1: MD_MDTG_A12.6.1_GeneratedStructUninitializedMembers
// VECTOR Disable AutosarC++17_10-M8.5.1: MD_MDTG_M8.5.1_GeneratedStructUninitializedMembers
/*!
 * \brief Type IndcrTurnReq.
 * \remark generated
 * \trace SPEC-5951372
 *
 * IMPLEMENTATION-DATA-TYPE /CppImplementationDataTypes/IndcrTurnReq
 */
struct IndcrTurnReq {
  using _IndcrTypExtReq_ref_type = IndcrTypExtReq::IndcrTypExtReq;
  using _IndcrTypExtReqToUpdQf_ref_type = IndcrTypExtReqToUpdQf::IndcrTypExtReqToUpdQf;
  using _IndcrTypExtReqCntr_ref_type = IndcrTypExtReqCntr::IndcrTypExtReqCntr;
  using _IndcrTypExtReqChks_ref_type = IndcrTypExtReqChks::IndcrTypExtReqChks;

  _IndcrTypExtReq_ref_type IndcrTypExtReq_ref;
  _IndcrTypExtReqToUpdQf_ref_type IndcrTypExtReqToUpdQf_ref;
  _IndcrTypExtReqCntr_ref_type IndcrTypExtReqCntr_ref;
  _IndcrTypExtReqChks_ref_type IndcrTypExtReqChks_ref;
};
// VECTOR Enable AutosarC++17_10-A12.6.1
// VECTOR Enable AutosarC++17_10-M8.5.1

/*!
 * \brief Compare for equality with another IndcrTurnReq instance.
 */
inline bool operator==(IndcrTurnReq const& l,
                       IndcrTurnReq const& r) noexcept {
  return (&l == &r) || ((l.IndcrTypExtReq_ref == r.IndcrTypExtReq_ref)
                         && (l.IndcrTypExtReqToUpdQf_ref == r.IndcrTypExtReqToUpdQf_ref)
                         && (l.IndcrTypExtReqCntr_ref == r.IndcrTypExtReqCntr_ref)
                         && (l.IndcrTypExtReqChks_ref == r.IndcrTypExtReqChks_ref)
  );
}

/*!
 * \brief Compare for inequality with another IndcrTurnReq instance.
 */
inline bool operator!=(IndcrTurnReq const& l,
                       IndcrTurnReq const& r) noexcept {
  return !(l == r);
}

}  // namespace IndcrTurnReq

#endif  // PERCEPTIONEXE_INCLUDE_INDCRTURNREQ_IMPL_TYPE_INDCRTURNREQ_H_
