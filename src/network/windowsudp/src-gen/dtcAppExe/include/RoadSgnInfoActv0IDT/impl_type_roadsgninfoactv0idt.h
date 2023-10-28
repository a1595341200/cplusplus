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
/**        \file  dtcAppExe/include/RoadSgnInfoActv0IDT/impl_type_roadsgninfoactv0idt.h
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

#ifndef DTCAPPEXE_INCLUDE_ROADSGNINFOACTV0IDT_IMPL_TYPE_ROADSGNINFOACTV0IDT_H_
#define DTCAPPEXE_INCLUDE_ROADSGNINFOACTV0IDT_IMPL_TYPE_ROADSGNINFOACTV0IDT_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include <array>
#include <cstdint>
#include <map>
#include <string>
#include <vector>
#include "IdPen1VccIDT/impl_type_idpen1vccidt.h"
#include "OnOff1VccIDT/impl_type_onoff1vccidt.h"

namespace RoadSgnInfoActv0IDT {

// VCA Disable [LNG-01,LNG-03,SLC-11,SLC-12,SLC-14,SLC-16,SPC-15] : VCA_MODELLEDDATATYPEGENERATOR_DATA_TYPE_DECLARATION
// VECTOR Disable AutosarC++17_10-A12.6.1: MD_MDTG_A12.6.1_GeneratedStructUninitializedMembers
// VECTOR Disable AutosarC++17_10-M8.5.1: MD_MDTG_M8.5.1_GeneratedStructUninitializedMembers
/*!
 * \brief Type RoadSgnInfoActv0IDT.
 * \remark generated
 *
 * IMPLEMENTATION-DATA-TYPE /CppImplementationDataTypes/RoadSgnInfoActv0IDT
 */
struct RoadSgnInfoActv0IDT {
  using RoadSgnInfoActvSts_generated_type = OnOff1VccIDT::OnOff1VccIDT;
  using RoadSgnInfoActvPen_generated_type = IdPen1VccIDT::IdPen1VccIDT;

  RoadSgnInfoActvSts_generated_type RoadSgnInfoActvSts;
  RoadSgnInfoActvPen_generated_type RoadSgnInfoActvPen;
};
// VECTOR Enable AutosarC++17_10-A12.6.1
// VECTOR Enable AutosarC++17_10-M8.5.1

/*!
 * \brief Compare for equality with another RoadSgnInfoActv0IDT instance.
 */
inline bool operator==(RoadSgnInfoActv0IDT const& l,
                       RoadSgnInfoActv0IDT const& r) noexcept {
  return (&l == &r) || ((l.RoadSgnInfoActvSts == r.RoadSgnInfoActvSts)
                         && (l.RoadSgnInfoActvPen == r.RoadSgnInfoActvPen)
  );
}

/*!
 * \brief Compare for inequality with another RoadSgnInfoActv0IDT instance.
 */
inline bool operator!=(RoadSgnInfoActv0IDT const& l,
                       RoadSgnInfoActv0IDT const& r) noexcept {
  return !(l == r);
}
// VCA Enable : VCA_MODELLEDDATATYPEGENERATOR_DATA_TYPE_DECLARATION

}  // namespace RoadSgnInfoActv0IDT

#endif  // DTCAPPEXE_INCLUDE_ROADSGNINFOACTV0IDT_IMPL_TYPE_ROADSGNINFOACTV0IDT_H_
