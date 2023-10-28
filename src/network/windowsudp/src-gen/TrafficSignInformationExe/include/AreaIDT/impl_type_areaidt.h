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
/**        \file  TrafficSignInformationExe/include/AreaIDT/impl_type_areaidt.h
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

#ifndef TRAFFICSIGNINFORMATIONEXE_INCLUDE_AREAIDT_IMPL_TYPE_AREAIDT_H_
#define TRAFFICSIGNINFORMATIONEXE_INCLUDE_AREAIDT_IMPL_TYPE_AREAIDT_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include <array>
#include <cstdint>
#include <map>
#include <string>
#include <vector>
#include "Array_MapInfoNodeIDT_Vector/impl_type_array_mapinfonodeidt_vector.h"
#include "Array_float32IDT_2/impl_type_array_float32idt_2.h"
#include "MapInfoTypeIDT/impl_type_mapinfotypeidt.h"
#include "uint64IDT/impl_type_uint64idt.h"

namespace AreaIDT {

// VCA Disable [LNG-01,LNG-03,SLC-11,SLC-12,SLC-14,SLC-16,SPC-15] : VCA_MODELLEDDATATYPEGENERATOR_DATA_TYPE_DECLARATION
// VECTOR Disable AutosarC++17_10-A12.6.1: MD_MDTG_A12.6.1_GeneratedStructUninitializedMembers
// VECTOR Disable AutosarC++17_10-M8.5.1: MD_MDTG_M8.5.1_GeneratedStructUninitializedMembers
/*!
 * \brief Type AreaIDT.
 * \remark generated
 *
 * IMPLEMENTATION-DATA-TYPE /CppImplementationDataTypes/AreaIDT
 */
struct AreaIDT {
  using MapInfoTimestamp_generated_type = uint64IDT::uint64IDT;
  using MapInfoStartPnts_generated_type = Array_float32IDT_2::Array_float32IDT_2;
  using MapInfoEndPnts_generated_type = Array_float32IDT_2::Array_float32IDT_2;
  using MapInfoType_generated_type = MapInfoTypeIDT::MapInfoTypeIDT;
  using MapInfoNodes_generated_type = Array_MapInfoNodeIDT_Vector::Array_MapInfoNodeIDT_Vector;

  MapInfoTimestamp_generated_type MapInfoTimestamp;
  MapInfoStartPnts_generated_type MapInfoStartPnts;
  MapInfoEndPnts_generated_type MapInfoEndPnts;
  MapInfoType_generated_type MapInfoType;
  MapInfoNodes_generated_type MapInfoNodes;
};
// VECTOR Enable AutosarC++17_10-A12.6.1
// VECTOR Enable AutosarC++17_10-M8.5.1

/*!
 * \brief Compare for equality with another AreaIDT instance.
 */
inline bool operator==(AreaIDT const& l,
                       AreaIDT const& r) noexcept {
  return (&l == &r) || ((l.MapInfoTimestamp == r.MapInfoTimestamp)
                         && (l.MapInfoStartPnts == r.MapInfoStartPnts)
                         && (l.MapInfoEndPnts == r.MapInfoEndPnts)
                         && (l.MapInfoType == r.MapInfoType)
                         && (l.MapInfoNodes == r.MapInfoNodes)
  );
}

/*!
 * \brief Compare for inequality with another AreaIDT instance.
 */
inline bool operator!=(AreaIDT const& l,
                       AreaIDT const& r) noexcept {
  return !(l == r);
}
// VCA Enable : VCA_MODELLEDDATATYPEGENERATOR_DATA_TYPE_DECLARATION

}  // namespace AreaIDT

#endif  // TRAFFICSIGNINFORMATIONEXE_INCLUDE_AREAIDT_IMPL_TYPE_AREAIDT_H_
