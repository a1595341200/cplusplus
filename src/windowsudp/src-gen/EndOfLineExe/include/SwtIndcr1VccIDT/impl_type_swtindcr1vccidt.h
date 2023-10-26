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
/**        \file  EndOfLineExe/include/SwtIndcr1VccIDT/impl_type_swtindcr1vccidt.h
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

#ifndef ENDOFLINEEXE_INCLUDE_SWTINDCR1VCCIDT_IMPL_TYPE_SWTINDCR1VCCIDT_H_
#define ENDOFLINEEXE_INCLUDE_SWTINDCR1VCCIDT_IMPL_TYPE_SWTINDCR1VCCIDT_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include <array>
#include <cstdint>
#include <map>
#include <string>
#include <vector>
#include "GenQf1VccIDT/impl_type_genqf1vccidt.h"
#include "IndcrTypExt1VccIDT/impl_type_indcrtypext1vccidt.h"

namespace SwtIndcr1VccIDT {

// VCA Disable [LNG-01,LNG-03,SLC-11,SLC-12,SLC-14,SLC-16,SPC-15] : VCA_MODELLEDDATATYPEGENERATOR_DATA_TYPE_DECLARATION
// VECTOR Disable AutosarC++17_10-A12.6.1: MD_MDTG_A12.6.1_GeneratedStructUninitializedMembers
// VECTOR Disable AutosarC++17_10-M8.5.1: MD_MDTG_M8.5.1_GeneratedStructUninitializedMembers
/*!
 * \brief Type SwtIndcr1VccIDT.
 * \remark generated
 *
 * IMPLEMENTATION-DATA-TYPE /CppImplementationDataTypes/SwtIndcr1VccIDT
 */
struct SwtIndcr1VccIDT {
  using SwtIndcrIndcrTypExtReq_generated_type = IndcrTypExt1VccIDT::IndcrTypExt1VccIDT;
  using SwtIndcrIndcrTypExtReqToUpdQf_generated_type = GenQf1VccIDT::GenQf1VccIDT;

  SwtIndcrIndcrTypExtReq_generated_type SwtIndcrIndcrTypExtReq;
  SwtIndcrIndcrTypExtReqToUpdQf_generated_type SwtIndcrIndcrTypExtReqToUpdQf;
};
// VECTOR Enable AutosarC++17_10-A12.6.1
// VECTOR Enable AutosarC++17_10-M8.5.1

/*!
 * \brief Compare for equality with another SwtIndcr1VccIDT instance.
 */
inline bool operator==(SwtIndcr1VccIDT const& l,
                       SwtIndcr1VccIDT const& r) noexcept {
  return (&l == &r) || ((l.SwtIndcrIndcrTypExtReq == r.SwtIndcrIndcrTypExtReq)
                         && (l.SwtIndcrIndcrTypExtReqToUpdQf == r.SwtIndcrIndcrTypExtReqToUpdQf)
  );
}

/*!
 * \brief Compare for inequality with another SwtIndcr1VccIDT instance.
 */
inline bool operator!=(SwtIndcr1VccIDT const& l,
                       SwtIndcr1VccIDT const& r) noexcept {
  return !(l == r);
}
// VCA Enable : VCA_MODELLEDDATATYPEGENERATOR_DATA_TYPE_DECLARATION

}  // namespace SwtIndcr1VccIDT

#endif  // ENDOFLINEEXE_INCLUDE_SWTINDCR1VCCIDT_IMPL_TYPE_SWTINDCR1VCCIDT_H_
