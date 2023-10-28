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
/**        \file  EDRExe/include/SftySigGroupFromHmiSafe1IDT/impl_type_sftysiggroupfromhmisafe1idt.h
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

#ifndef EDREXE_INCLUDE_SFTYSIGGROUPFROMHMISAFE1IDT_IMPL_TYPE_SFTYSIGGROUPFROMHMISAFE1IDT_H_
#define EDREXE_INCLUDE_SFTYSIGGROUPFROMHMISAFE1IDT_IMPL_TYPE_SFTYSIGGROUPFROMHMISAFE1IDT_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include <array>
#include <cstdint>
#include <map>
#include <string>
#include <vector>
#include "NoYesCrit1VccIDT/impl_type_noyescrit1vccidt.h"
#include "uint8IDT/impl_type_uint8idt.h"

namespace SftySigGroupFromHmiSafe1IDT {

// VCA Disable [LNG-01,LNG-03,SLC-11,SLC-12,SLC-14,SLC-16,SPC-15] : VCA_MODELLEDDATATYPEGENERATOR_DATA_TYPE_DECLARATION
// VECTOR Disable AutosarC++17_10-A12.6.1: MD_MDTG_A12.6.1_GeneratedStructUninitializedMembers
// VECTOR Disable AutosarC++17_10-M8.5.1: MD_MDTG_M8.5.1_GeneratedStructUninitializedMembers
/*!
 * \brief Type SftySigGroupFromHmiSafe1IDT.
 * \remark generated
 *
 * IMPLEMENTATION-DATA-TYPE /CppImplementationDataTypes/SftySigGroupFromHmiSafe1IDT
 */
struct SftySigGroupFromHmiSafe1IDT {
  using SftyHmiDend_generated_type = NoYesCrit1VccIDT::NoYesCrit1VccIDT;
  using SftyHmiEna_generated_type = NoYesCrit1VccIDT::NoYesCrit1VccIDT;
  using SftySigFaildDetdByHmi_generated_type = NoYesCrit1VccIDT::NoYesCrit1VccIDT;
  using SftySigGroupFromHmiSafeChks_generated_type = uint8IDT::uint8IDT;
  using SftySigGroupFromHmiSafeCntr_generated_type = uint8IDT::uint8IDT;

  SftyHmiDend_generated_type SftyHmiDend;
  SftyHmiEna_generated_type SftyHmiEna;
  SftySigFaildDetdByHmi_generated_type SftySigFaildDetdByHmi;
  SftySigGroupFromHmiSafeChks_generated_type SftySigGroupFromHmiSafeChks;
  SftySigGroupFromHmiSafeCntr_generated_type SftySigGroupFromHmiSafeCntr;
};
// VECTOR Enable AutosarC++17_10-A12.6.1
// VECTOR Enable AutosarC++17_10-M8.5.1

/*!
 * \brief Compare for equality with another SftySigGroupFromHmiSafe1IDT instance.
 */
inline bool operator==(SftySigGroupFromHmiSafe1IDT const& l,
                       SftySigGroupFromHmiSafe1IDT const& r) noexcept {
  return (&l == &r) || ((l.SftyHmiDend == r.SftyHmiDend)
                         && (l.SftyHmiEna == r.SftyHmiEna)
                         && (l.SftySigFaildDetdByHmi == r.SftySigFaildDetdByHmi)
                         && (l.SftySigGroupFromHmiSafeChks == r.SftySigGroupFromHmiSafeChks)
                         && (l.SftySigGroupFromHmiSafeCntr == r.SftySigGroupFromHmiSafeCntr)
  );
}

/*!
 * \brief Compare for inequality with another SftySigGroupFromHmiSafe1IDT instance.
 */
inline bool operator!=(SftySigGroupFromHmiSafe1IDT const& l,
                       SftySigGroupFromHmiSafe1IDT const& r) noexcept {
  return !(l == r);
}
// VCA Enable : VCA_MODELLEDDATATYPEGENERATOR_DATA_TYPE_DECLARATION

}  // namespace SftySigGroupFromHmiSafe1IDT

#endif  // EDREXE_INCLUDE_SFTYSIGGROUPFROMHMISAFE1IDT_IMPL_TYPE_SFTYSIGGROUPFROMHMISAFE1IDT_H_
