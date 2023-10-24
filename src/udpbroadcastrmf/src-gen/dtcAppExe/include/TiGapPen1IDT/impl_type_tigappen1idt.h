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
/**        \file  dtcAppExe/include/TiGapPen1IDT/impl_type_tigappen1idt.h
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

#ifndef DTCAPPEXE_INCLUDE_TIGAPPEN1IDT_IMPL_TYPE_TIGAPPEN1IDT_H_
#define DTCAPPEXE_INCLUDE_TIGAPPEN1IDT_IMPL_TYPE_TIGAPPEN1IDT_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include <array>
#include <cstdint>
#include <map>
#include <string>
#include <vector>
#include "IdPen1VccIDT/impl_type_idpen1vccidt.h"
#include "TiGapSetForLgtCtrl1VccIDT/impl_type_tigapsetforlgtctrl1vccidt.h"

namespace TiGapPen1IDT {

// VCA Disable [LNG-01,LNG-03,SLC-11,SLC-12,SLC-14,SLC-16,SPC-15] : VCA_MODELLEDDATATYPEGENERATOR_DATA_TYPE_DECLARATION
// VECTOR Disable AutosarC++17_10-A12.6.1: MD_MDTG_A12.6.1_GeneratedStructUninitializedMembers
// VECTOR Disable AutosarC++17_10-M8.5.1: MD_MDTG_M8.5.1_GeneratedStructUninitializedMembers
/*!
 * \brief Type TiGapPen1IDT.
 * \remark generated
 *
 * IMPLEMENTATION-DATA-TYPE /CppImplementationDataTypes/TiGapPen1IDT
 */
struct TiGapPen1IDT {
  using TiGapSts_generated_type = TiGapSetForLgtCtrl1VccIDT::TiGapSetForLgtCtrl1VccIDT;
  using TiGapPen_generated_type = IdPen1VccIDT::IdPen1VccIDT;

  TiGapSts_generated_type TiGapSts;
  TiGapPen_generated_type TiGapPen;
};
// VECTOR Enable AutosarC++17_10-A12.6.1
// VECTOR Enable AutosarC++17_10-M8.5.1

/*!
 * \brief Compare for equality with another TiGapPen1IDT instance.
 */
inline bool operator==(TiGapPen1IDT const& l,
                       TiGapPen1IDT const& r) noexcept {
  return (&l == &r) || ((l.TiGapSts == r.TiGapSts)
                         && (l.TiGapPen == r.TiGapPen)
  );
}

/*!
 * \brief Compare for inequality with another TiGapPen1IDT instance.
 */
inline bool operator!=(TiGapPen1IDT const& l,
                       TiGapPen1IDT const& r) noexcept {
  return !(l == r);
}
// VCA Enable : VCA_MODELLEDDATATYPEGENERATOR_DATA_TYPE_DECLARATION

}  // namespace TiGapPen1IDT

#endif  // DTCAPPEXE_INCLUDE_TIGAPPEN1IDT_IMPL_TYPE_TIGAPPEN1IDT_H_
