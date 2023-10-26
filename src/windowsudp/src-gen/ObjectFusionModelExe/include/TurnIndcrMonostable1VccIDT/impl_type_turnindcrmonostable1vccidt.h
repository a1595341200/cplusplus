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
/**        \file  ObjectFusionModelExe/include/TurnIndcrMonostable1VccIDT/impl_type_turnindcrmonostable1vccidt.h
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

#ifndef OBJECTFUSIONMODELEXE_INCLUDE_TURNINDCRMONOSTABLE1VCCIDT_IMPL_TYPE_TURNINDCRMONOSTABLE1VCCIDT_H_
#define OBJECTFUSIONMODELEXE_INCLUDE_TURNINDCRMONOSTABLE1VCCIDT_IMPL_TYPE_TURNINDCRMONOSTABLE1VCCIDT_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include <array>
#include <cstdint>
#include <map>
#include <string>
#include <vector>
#include "Dir10VccIDT/impl_type_dir10vccidt.h"
#include "GenQf1VccIDT/impl_type_genqf1vccidt.h"

namespace TurnIndcrMonostable1VccIDT {

// VCA Disable [LNG-01,LNG-03,SLC-11,SLC-12,SLC-14,SLC-16,SPC-15] : VCA_MODELLEDDATATYPEGENERATOR_DATA_TYPE_DECLARATION
// VECTOR Disable AutosarC++17_10-A12.6.1: MD_MDTG_A12.6.1_GeneratedStructUninitializedMembers
// VECTOR Disable AutosarC++17_10-M8.5.1: MD_MDTG_M8.5.1_GeneratedStructUninitializedMembers
/*!
 * \brief Type TurnIndcrMonostable1VccIDT.
 * \remark generated
 *
 * IMPLEMENTATION-DATA-TYPE /CppImplementationDataTypes/TurnIndcrMonostable1VccIDT
 */
struct TurnIndcrMonostable1VccIDT {
  using TurnIndcrMonostableQf_generated_type = GenQf1VccIDT::GenQf1VccIDT;
  using TurnIndcrMonostableTurnIndcrMonostable_generated_type = Dir10VccIDT::Dir10VccIDT;

  TurnIndcrMonostableQf_generated_type TurnIndcrMonostableQf;
  TurnIndcrMonostableTurnIndcrMonostable_generated_type TurnIndcrMonostableTurnIndcrMonostable;
};
// VECTOR Enable AutosarC++17_10-A12.6.1
// VECTOR Enable AutosarC++17_10-M8.5.1

/*!
 * \brief Compare for equality with another TurnIndcrMonostable1VccIDT instance.
 */
inline bool operator==(TurnIndcrMonostable1VccIDT const& l,
                       TurnIndcrMonostable1VccIDT const& r) noexcept {
  return (&l == &r) || ((l.TurnIndcrMonostableQf == r.TurnIndcrMonostableQf)
                         && (l.TurnIndcrMonostableTurnIndcrMonostable == r.TurnIndcrMonostableTurnIndcrMonostable)
  );
}

/*!
 * \brief Compare for inequality with another TurnIndcrMonostable1VccIDT instance.
 */
inline bool operator!=(TurnIndcrMonostable1VccIDT const& l,
                       TurnIndcrMonostable1VccIDT const& r) noexcept {
  return !(l == r);
}
// VCA Enable : VCA_MODELLEDDATATYPEGENERATOR_DATA_TYPE_DECLARATION

}  // namespace TurnIndcrMonostable1VccIDT

#endif  // OBJECTFUSIONMODELEXE_INCLUDE_TURNINDCRMONOSTABLE1VCCIDT_IMPL_TYPE_TURNINDCRMONOSTABLE1VCCIDT_H_
