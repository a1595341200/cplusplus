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
/**        \file  TrafficSignInformationExe/include/PtDrvrSetg1VccIDT/impl_type_ptdrvrsetg1vccidt.h
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

#ifndef TRAFFICSIGNINFORMATIONEXE_INCLUDE_PTDRVRSETG1VCCIDT_IMPL_TYPE_PTDRVRSETG1VCCIDT_H_
#define TRAFFICSIGNINFORMATIONEXE_INCLUDE_PTDRVRSETG1VCCIDT_IMPL_TYPE_PTDRVRSETG1VCCIDT_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include <array>
#include <cstdint>
#include <map>
#include <string>
#include <vector>
#include "DrvModReqType2VccIDT/impl_type_drvmodreqtype2vccidt.h"
#include "IdPen1VccIDT/impl_type_idpen1vccidt.h"

namespace PtDrvrSetg1VccIDT {

// VCA Disable [LNG-01,LNG-03,SLC-11,SLC-12,SLC-14,SLC-16,SPC-15] : VCA_MODELLEDDATATYPEGENERATOR_DATA_TYPE_DECLARATION
// VECTOR Disable AutosarC++17_10-A12.6.1: MD_MDTG_A12.6.1_GeneratedStructUninitializedMembers
// VECTOR Disable AutosarC++17_10-M8.5.1: MD_MDTG_M8.5.1_GeneratedStructUninitializedMembers
/*!
 * \brief Type PtDrvrSetg1VccIDT.
 * \remark generated
 *
 * IMPLEMENTATION-DATA-TYPE /CppImplementationDataTypes/PtDrvrSetg1VccIDT
 */
struct PtDrvrSetg1VccIDT {
  using DrvModReqType2_generated_type = DrvModReqType2VccIDT::DrvModReqType2VccIDT;
  using IdPen_generated_type = IdPen1VccIDT::IdPen1VccIDT;

  DrvModReqType2_generated_type DrvModReqType2;
  IdPen_generated_type IdPen;
};
// VECTOR Enable AutosarC++17_10-A12.6.1
// VECTOR Enable AutosarC++17_10-M8.5.1

/*!
 * \brief Compare for equality with another PtDrvrSetg1VccIDT instance.
 */
inline bool operator==(PtDrvrSetg1VccIDT const& l,
                       PtDrvrSetg1VccIDT const& r) noexcept {
  return (&l == &r) || ((l.DrvModReqType2 == r.DrvModReqType2)
                         && (l.IdPen == r.IdPen)
  );
}

/*!
 * \brief Compare for inequality with another PtDrvrSetg1VccIDT instance.
 */
inline bool operator!=(PtDrvrSetg1VccIDT const& l,
                       PtDrvrSetg1VccIDT const& r) noexcept {
  return !(l == r);
}
// VCA Enable : VCA_MODELLEDDATATYPEGENERATOR_DATA_TYPE_DECLARATION

}  // namespace PtDrvrSetg1VccIDT

#endif  // TRAFFICSIGNINFORMATIONEXE_INCLUDE_PTDRVRSETG1VCCIDT_IMPL_TYPE_PTDRVRSETG1VCCIDT_H_
