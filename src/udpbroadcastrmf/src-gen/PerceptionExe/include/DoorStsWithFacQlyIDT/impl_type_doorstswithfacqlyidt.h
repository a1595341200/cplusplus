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
/**        \file  PerceptionExe/include/DoorStsWithFacQlyIDT/impl_type_doorstswithfacqlyidt.h
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

#ifndef PERCEPTIONEXE_INCLUDE_DOORSTSWITHFACQLYIDT_IMPL_TYPE_DOORSTSWITHFACQLYIDT_H_
#define PERCEPTIONEXE_INCLUDE_DOORSTSWITHFACQLYIDT_IMPL_TYPE_DOORSTSWITHFACQLYIDT_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include <array>
#include <cstdint>
#include <map>
#include <string>
#include <vector>
#include "DoorSts2VccIDT/impl_type_doorsts2vccidt.h"
#include "GenQf1VccIDT/impl_type_genqf1vccidt.h"

namespace DoorStsWithFacQlyIDT {

// VCA Disable [LNG-01,LNG-03,SLC-11,SLC-12,SLC-14,SLC-16,SPC-15] : VCA_MODELLEDDATATYPEGENERATOR_DATA_TYPE_DECLARATION
// VECTOR Disable AutosarC++17_10-A12.6.1: MD_MDTG_A12.6.1_GeneratedStructUninitializedMembers
// VECTOR Disable AutosarC++17_10-M8.5.1: MD_MDTG_M8.5.1_GeneratedStructUninitializedMembers
/*!
 * \brief Type DoorStsWithFacQlyIDT.
 * \remark generated
 *
 * IMPLEMENTATION-DATA-TYPE /CppImplementationDataTypes/DoorStsWithFacQlyIDT
 */
struct DoorStsWithFacQlyIDT {
  using DoorDrvrSts_generated_type = DoorSts2VccIDT::DoorSts2VccIDT;
  using DoorDrvrStsFacQly_generated_type = GenQf1VccIDT::GenQf1VccIDT;

  DoorDrvrSts_generated_type DoorDrvrSts;
  DoorDrvrStsFacQly_generated_type DoorDrvrStsFacQly;
};
// VECTOR Enable AutosarC++17_10-A12.6.1
// VECTOR Enable AutosarC++17_10-M8.5.1

/*!
 * \brief Compare for equality with another DoorStsWithFacQlyIDT instance.
 */
inline bool operator==(DoorStsWithFacQlyIDT const& l,
                       DoorStsWithFacQlyIDT const& r) noexcept {
  return (&l == &r) || ((l.DoorDrvrSts == r.DoorDrvrSts)
                         && (l.DoorDrvrStsFacQly == r.DoorDrvrStsFacQly)
  );
}

/*!
 * \brief Compare for inequality with another DoorStsWithFacQlyIDT instance.
 */
inline bool operator!=(DoorStsWithFacQlyIDT const& l,
                       DoorStsWithFacQlyIDT const& r) noexcept {
  return !(l == r);
}
// VCA Enable : VCA_MODELLEDDATATYPEGENERATOR_DATA_TYPE_DECLARATION

}  // namespace DoorStsWithFacQlyIDT

#endif  // PERCEPTIONEXE_INCLUDE_DOORSTSWITHFACQLYIDT_IMPL_TYPE_DOORSTSWITHFACQLYIDT_H_
