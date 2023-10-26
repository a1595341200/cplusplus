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
/**        \file  PerceptionSideExe/include/CrossInfo1VccIDT/impl_type_crossinfo1vccidt.h
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

#ifndef PERCEPTIONSIDEEXE_INCLUDE_CROSSINFO1VCCIDT_IMPL_TYPE_CROSSINFO1VCCIDT_H_
#define PERCEPTIONSIDEEXE_INCLUDE_CROSSINFO1VCCIDT_IMPL_TYPE_CROSSINFO1VCCIDT_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include <array>
#include <cstdint>
#include <map>
#include <string>
#include <vector>
#include "Boolean1VccIDT/impl_type_boolean1vccidt.h"
#include "DirOfNavRout1VccIDT/impl_type_dirofnavrout1vccidt.h"
#include "uint16IDT/impl_type_uint16idt.h"

namespace CrossInfo1VccIDT {

// VCA Disable [LNG-01,LNG-03,SLC-11,SLC-12,SLC-14,SLC-16,SPC-15] : VCA_MODELLEDDATATYPEGENERATOR_DATA_TYPE_DECLARATION
// VECTOR Disable AutosarC++17_10-A12.6.1: MD_MDTG_A12.6.1_GeneratedStructUninitializedMembers
// VECTOR Disable AutosarC++17_10-M8.5.1: MD_MDTG_M8.5.1_GeneratedStructUninitializedMembers
/*!
 * \brief Type CrossInfo1VccIDT.
 * \remark generated
 *
 * IMPLEMENTATION-DATA-TYPE /CppImplementationDataTypes/CrossInfo1VccIDT
 */
struct CrossInfo1VccIDT {
  using CrossInfoDirOfNavRut_generated_type = DirOfNavRout1VccIDT::DirOfNavRout1VccIDT;
  using CrossInfoDstToCros_generated_type = uint16IDT::uint16IDT;
  using CrossInfoTrfcLi_generated_type = Boolean1VccIDT::Boolean1VccIDT;

  CrossInfoDirOfNavRut_generated_type CrossInfoDirOfNavRut;
  CrossInfoDstToCros_generated_type CrossInfoDstToCros;
  CrossInfoTrfcLi_generated_type CrossInfoTrfcLi;
};
// VECTOR Enable AutosarC++17_10-A12.6.1
// VECTOR Enable AutosarC++17_10-M8.5.1

/*!
 * \brief Compare for equality with another CrossInfo1VccIDT instance.
 */
inline bool operator==(CrossInfo1VccIDT const& l,
                       CrossInfo1VccIDT const& r) noexcept {
  return (&l == &r) || ((l.CrossInfoDirOfNavRut == r.CrossInfoDirOfNavRut)
                         && (l.CrossInfoDstToCros == r.CrossInfoDstToCros)
                         && (l.CrossInfoTrfcLi == r.CrossInfoTrfcLi)
  );
}

/*!
 * \brief Compare for inequality with another CrossInfo1VccIDT instance.
 */
inline bool operator!=(CrossInfo1VccIDT const& l,
                       CrossInfo1VccIDT const& r) noexcept {
  return !(l == r);
}
// VCA Enable : VCA_MODELLEDDATATYPEGENERATOR_DATA_TYPE_DECLARATION

}  // namespace CrossInfo1VccIDT

#endif  // PERCEPTIONSIDEEXE_INCLUDE_CROSSINFO1VCCIDT_IMPL_TYPE_CROSSINFO1VCCIDT_H_
