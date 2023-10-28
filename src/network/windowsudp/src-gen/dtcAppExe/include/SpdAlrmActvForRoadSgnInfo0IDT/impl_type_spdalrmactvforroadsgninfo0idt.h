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
/**        \file  dtcAppExe/include/SpdAlrmActvForRoadSgnInfo0IDT/impl_type_spdalrmactvforroadsgninfo0idt.h
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

#ifndef DTCAPPEXE_INCLUDE_SPDALRMACTVFORROADSGNINFO0IDT_IMPL_TYPE_SPDALRMACTVFORROADSGNINFO0IDT_H_
#define DTCAPPEXE_INCLUDE_SPDALRMACTVFORROADSGNINFO0IDT_IMPL_TYPE_SPDALRMACTVFORROADSGNINFO0IDT_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include <array>
#include <cstdint>
#include <map>
#include <string>
#include <vector>
#include "DY1VccIDT/impl_type_dy1vccidt.h"
#include "IdPen1VccIDT/impl_type_idpen1vccidt.h"

namespace SpdAlrmActvForRoadSgnInfo0IDT {

// VCA Disable [LNG-01,LNG-03,SLC-11,SLC-12,SLC-14,SLC-16,SPC-15] : VCA_MODELLEDDATATYPEGENERATOR_DATA_TYPE_DECLARATION
// VECTOR Disable AutosarC++17_10-A12.6.1: MD_MDTG_A12.6.1_GeneratedStructUninitializedMembers
// VECTOR Disable AutosarC++17_10-M8.5.1: MD_MDTG_M8.5.1_GeneratedStructUninitializedMembers
/*!
 * \brief Type SpdAlrmActvForRoadSgnInfo0IDT.
 * \remark generated
 *
 * IMPLEMENTATION-DATA-TYPE /CppImplementationDataTypes/SpdAlrmActvForRoadSgnInfo0IDT
 */
struct SpdAlrmActvForRoadSgnInfo0IDT {
  using SpdAlrmActvForRoadSgnInfoSts_generated_type = DY1VccIDT::DY1VccIDT;
  using SpdAlrmActvForRoadSgnInfoPen_generated_type = IdPen1VccIDT::IdPen1VccIDT;

  SpdAlrmActvForRoadSgnInfoSts_generated_type SpdAlrmActvForRoadSgnInfoSts;
  SpdAlrmActvForRoadSgnInfoPen_generated_type SpdAlrmActvForRoadSgnInfoPen;
};
// VECTOR Enable AutosarC++17_10-A12.6.1
// VECTOR Enable AutosarC++17_10-M8.5.1

/*!
 * \brief Compare for equality with another SpdAlrmActvForRoadSgnInfo0IDT instance.
 */
inline bool operator==(SpdAlrmActvForRoadSgnInfo0IDT const& l,
                       SpdAlrmActvForRoadSgnInfo0IDT const& r) noexcept {
  return (&l == &r) || ((l.SpdAlrmActvForRoadSgnInfoSts == r.SpdAlrmActvForRoadSgnInfoSts)
                         && (l.SpdAlrmActvForRoadSgnInfoPen == r.SpdAlrmActvForRoadSgnInfoPen)
  );
}

/*!
 * \brief Compare for inequality with another SpdAlrmActvForRoadSgnInfo0IDT instance.
 */
inline bool operator!=(SpdAlrmActvForRoadSgnInfo0IDT const& l,
                       SpdAlrmActvForRoadSgnInfo0IDT const& r) noexcept {
  return !(l == r);
}
// VCA Enable : VCA_MODELLEDDATATYPEGENERATOR_DATA_TYPE_DECLARATION

}  // namespace SpdAlrmActvForRoadSgnInfo0IDT

#endif  // DTCAPPEXE_INCLUDE_SPDALRMACTVFORROADSGNINFO0IDT_IMPL_TYPE_SPDALRMACTVFORROADSGNINFO0IDT_H_
