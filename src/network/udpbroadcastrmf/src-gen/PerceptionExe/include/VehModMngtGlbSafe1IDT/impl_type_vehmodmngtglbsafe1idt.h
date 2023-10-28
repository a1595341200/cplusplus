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
/**        \file  PerceptionExe/include/VehModMngtGlbSafe1IDT/impl_type_vehmodmngtglbsafe1idt.h
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

#ifndef PERCEPTIONEXE_INCLUDE_VEHMODMNGTGLBSAFE1IDT_IMPL_TYPE_VEHMODMNGTGLBSAFE1IDT_H_
#define PERCEPTIONEXE_INCLUDE_VEHMODMNGTGLBSAFE1IDT_IMPL_TYPE_VEHMODMNGTGLBSAFE1IDT_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include <array>
#include <cstdint>
#include <map>
#include <string>
#include <vector>
#include "CarModSts11IDT/impl_type_carmodsts11idt.h"
#include "FltEgyCns1VccIDT/impl_type_fltegycns1vccidt.h"
#include "UsgModSts1VccIDT/impl_type_usgmodsts1vccidt.h"
#include "uint8IDT/impl_type_uint8idt.h"

namespace VehModMngtGlbSafe1IDT {

// VCA Disable [LNG-01,LNG-03,SLC-11,SLC-12,SLC-14,SLC-16,SPC-15] : VCA_MODELLEDDATATYPEGENERATOR_DATA_TYPE_DECLARATION
// VECTOR Disable AutosarC++17_10-A12.6.1: MD_MDTG_A12.6.1_GeneratedStructUninitializedMembers
// VECTOR Disable AutosarC++17_10-M8.5.1: MD_MDTG_M8.5.1_GeneratedStructUninitializedMembers
/*!
 * \brief Type VehModMngtGlbSafe1IDT.
 * \remark generated
 *
 * IMPLEMENTATION-DATA-TYPE /CppImplementationDataTypes/VehModMngtGlbSafe1IDT
 */
struct VehModMngtGlbSafe1IDT {
  using UsgModSts_generated_type = UsgModSts1VccIDT::UsgModSts1VccIDT;
  using CarModSts1_generated_type = CarModSts11IDT::CarModSts11IDT;
  using CarModSubtypWdCarModSubtyp_generated_type = uint8IDT::uint8IDT;
  using EgyLvlElecMai_generated_type = uint8IDT::uint8IDT;
  using EgyLvlElecSubtyp_generated_type = uint8IDT::uint8IDT;
  using PwrLvlElecMai_generated_type = uint8IDT::uint8IDT;
  using PwrLvlElecSubtyp_generated_type = uint8IDT::uint8IDT;
  using FltEgyCnsWdSts_generated_type = FltEgyCns1VccIDT::FltEgyCns1VccIDT;
  using VehModChks_generated_type = uint8IDT::uint8IDT;
  using VehModCntr_generated_type = uint8IDT::uint8IDT;

  UsgModSts_generated_type UsgModSts;
  CarModSts1_generated_type CarModSts1;
  CarModSubtypWdCarModSubtyp_generated_type CarModSubtypWdCarModSubtyp;
  EgyLvlElecMai_generated_type EgyLvlElecMai;
  EgyLvlElecSubtyp_generated_type EgyLvlElecSubtyp;
  PwrLvlElecMai_generated_type PwrLvlElecMai;
  PwrLvlElecSubtyp_generated_type PwrLvlElecSubtyp;
  FltEgyCnsWdSts_generated_type FltEgyCnsWdSts;
  VehModChks_generated_type VehModChks;
  VehModCntr_generated_type VehModCntr;
};
// VECTOR Enable AutosarC++17_10-A12.6.1
// VECTOR Enable AutosarC++17_10-M8.5.1

/*!
 * \brief Compare for equality with another VehModMngtGlbSafe1IDT instance.
 */
inline bool operator==(VehModMngtGlbSafe1IDT const& l,
                       VehModMngtGlbSafe1IDT const& r) noexcept {
  return (&l == &r) || ((l.UsgModSts == r.UsgModSts)
                         && (l.CarModSts1 == r.CarModSts1)
                         && (l.CarModSubtypWdCarModSubtyp == r.CarModSubtypWdCarModSubtyp)
                         && (l.EgyLvlElecMai == r.EgyLvlElecMai)
                         && (l.EgyLvlElecSubtyp == r.EgyLvlElecSubtyp)
                         && (l.PwrLvlElecMai == r.PwrLvlElecMai)
                         && (l.PwrLvlElecSubtyp == r.PwrLvlElecSubtyp)
                         && (l.FltEgyCnsWdSts == r.FltEgyCnsWdSts)
                         && (l.VehModChks == r.VehModChks)
                         && (l.VehModCntr == r.VehModCntr)
  );
}

/*!
 * \brief Compare for inequality with another VehModMngtGlbSafe1IDT instance.
 */
inline bool operator!=(VehModMngtGlbSafe1IDT const& l,
                       VehModMngtGlbSafe1IDT const& r) noexcept {
  return !(l == r);
}
// VCA Enable : VCA_MODELLEDDATATYPEGENERATOR_DATA_TYPE_DECLARATION

}  // namespace VehModMngtGlbSafe1IDT

#endif  // PERCEPTIONEXE_INCLUDE_VEHMODMNGTGLBSAFE1IDT_IMPL_TYPE_VEHMODMNGTGLBSAFE1IDT_H_
