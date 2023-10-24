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
/**        \file  PerceptionExe/include/VehMtnStSafeGroup1IDT/impl_type_vehmtnstsafegroup1idt.h
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

#ifndef PERCEPTIONEXE_INCLUDE_VEHMTNSTSAFEGROUP1IDT_IMPL_TYPE_VEHMTNSTSAFEGROUP1IDT_H_
#define PERCEPTIONEXE_INCLUDE_VEHMTNSTSAFEGROUP1IDT_IMPL_TYPE_VEHMTNSTSAFEGROUP1IDT_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include <array>
#include <cstdint>
#include <map>
#include <string>
#include <vector>
#include "VehMtnSt2IDT/impl_type_vehmtnst2idt.h"
#include "uint8IDT/impl_type_uint8idt.h"

namespace VehMtnStSafeGroup1IDT {

// VCA Disable [LNG-01,LNG-03,SLC-11,SLC-12,SLC-14,SLC-16,SPC-15] : VCA_MODELLEDDATATYPEGENERATOR_DATA_TYPE_DECLARATION
// VECTOR Disable AutosarC++17_10-A12.6.1: MD_MDTG_A12.6.1_GeneratedStructUninitializedMembers
// VECTOR Disable AutosarC++17_10-M8.5.1: MD_MDTG_M8.5.1_GeneratedStructUninitializedMembers
/*!
 * \brief Type VehMtnStSafeGroup1IDT.
 * \remark generated
 *
 * IMPLEMENTATION-DATA-TYPE /CppImplementationDataTypes/VehMtnStSafeGroup1IDT
 */
struct VehMtnStSafeGroup1IDT {
  using VehMtnStChks_generated_type = uint8IDT::uint8IDT;
  using VehMtnStCntr_generated_type = uint8IDT::uint8IDT;
  using VehMtnStVehMtnSt_generated_type = VehMtnSt2IDT::VehMtnSt2IDT;

  VehMtnStChks_generated_type VehMtnStChks;
  VehMtnStCntr_generated_type VehMtnStCntr;
  VehMtnStVehMtnSt_generated_type VehMtnStVehMtnSt;
};
// VECTOR Enable AutosarC++17_10-A12.6.1
// VECTOR Enable AutosarC++17_10-M8.5.1

/*!
 * \brief Compare for equality with another VehMtnStSafeGroup1IDT instance.
 */
inline bool operator==(VehMtnStSafeGroup1IDT const& l,
                       VehMtnStSafeGroup1IDT const& r) noexcept {
  return (&l == &r) || ((l.VehMtnStChks == r.VehMtnStChks)
                         && (l.VehMtnStCntr == r.VehMtnStCntr)
                         && (l.VehMtnStVehMtnSt == r.VehMtnStVehMtnSt)
  );
}

/*!
 * \brief Compare for inequality with another VehMtnStSafeGroup1IDT instance.
 */
inline bool operator!=(VehMtnStSafeGroup1IDT const& l,
                       VehMtnStSafeGroup1IDT const& r) noexcept {
  return !(l == r);
}
// VCA Enable : VCA_MODELLEDDATATYPEGENERATOR_DATA_TYPE_DECLARATION

}  // namespace VehMtnStSafeGroup1IDT

#endif  // PERCEPTIONEXE_INCLUDE_VEHMTNSTSAFEGROUP1IDT_IMPL_TYPE_VEHMTNSTSAFEGROUP1IDT_H_
