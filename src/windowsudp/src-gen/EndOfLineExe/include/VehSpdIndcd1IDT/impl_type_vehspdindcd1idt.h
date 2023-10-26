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
/**        \file  EndOfLineExe/include/VehSpdIndcd1IDT/impl_type_vehspdindcd1idt.h
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

#ifndef ENDOFLINEEXE_INCLUDE_VEHSPDINDCD1IDT_IMPL_TYPE_VEHSPDINDCD1IDT_H_
#define ENDOFLINEEXE_INCLUDE_VEHSPDINDCD1IDT_IMPL_TYPE_VEHSPDINDCD1IDT_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include <array>
#include <cstdint>
#include <map>
#include <string>
#include <vector>
#include "VehSpdIndcdUnit1VccIDT/impl_type_vehspdindcdunit1vccidt.h"
#include "uint16IDT/impl_type_uint16idt.h"

namespace VehSpdIndcd1IDT {

// VCA Disable [LNG-01,LNG-03,SLC-11,SLC-12,SLC-14,SLC-16,SPC-15] : VCA_MODELLEDDATATYPEGENERATOR_DATA_TYPE_DECLARATION
// VECTOR Disable AutosarC++17_10-A12.6.1: MD_MDTG_A12.6.1_GeneratedStructUninitializedMembers
// VECTOR Disable AutosarC++17_10-M8.5.1: MD_MDTG_M8.5.1_GeneratedStructUninitializedMembers
/*!
 * \brief Type VehSpdIndcd1IDT.
 * \remark generated
 *
 * IMPLEMENTATION-DATA-TYPE /CppImplementationDataTypes/VehSpdIndcd1IDT
 */
struct VehSpdIndcd1IDT {
  using VehSpdIndcdVal_generated_type = uint16IDT::uint16IDT;
  using VehSpdIndcdUnit_generated_type = VehSpdIndcdUnit1VccIDT::VehSpdIndcdUnit1VccIDT;

  VehSpdIndcdVal_generated_type VehSpdIndcdVal;
  VehSpdIndcdUnit_generated_type VehSpdIndcdUnit;
};
// VECTOR Enable AutosarC++17_10-A12.6.1
// VECTOR Enable AutosarC++17_10-M8.5.1

/*!
 * \brief Compare for equality with another VehSpdIndcd1IDT instance.
 */
inline bool operator==(VehSpdIndcd1IDT const& l,
                       VehSpdIndcd1IDT const& r) noexcept {
  return (&l == &r) || ((l.VehSpdIndcdVal == r.VehSpdIndcdVal)
                         && (l.VehSpdIndcdUnit == r.VehSpdIndcdUnit)
  );
}

/*!
 * \brief Compare for inequality with another VehSpdIndcd1IDT instance.
 */
inline bool operator!=(VehSpdIndcd1IDT const& l,
                       VehSpdIndcd1IDT const& r) noexcept {
  return !(l == r);
}
// VCA Enable : VCA_MODELLEDDATATYPEGENERATOR_DATA_TYPE_DECLARATION

}  // namespace VehSpdIndcd1IDT

#endif  // ENDOFLINEEXE_INCLUDE_VEHSPDINDCD1IDT_IMPL_TYPE_VEHSPDINDCD1IDT_H_
