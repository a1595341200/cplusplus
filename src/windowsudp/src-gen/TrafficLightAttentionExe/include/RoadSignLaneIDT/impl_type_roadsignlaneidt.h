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
/**        \file  TrafficLightAttentionExe/include/RoadSignLaneIDT/impl_type_roadsignlaneidt.h
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

#ifndef TRAFFICLIGHTATTENTIONEXE_INCLUDE_ROADSIGNLANEIDT_IMPL_TYPE_ROADSIGNLANEIDT_H_
#define TRAFFICLIGHTATTENTIONEXE_INCLUDE_ROADSIGNLANEIDT_IMPL_TYPE_ROADSIGNLANEIDT_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include <array>
#include <cstdint>
#include <map>
#include <string>
#include <vector>

namespace RoadSignLaneIDT {

// VCA Disable [LNG-01,LNG-03,SLC-11,SLC-12,SLC-14,SLC-16,SPC-15] : VCA_MODELLEDDATATYPEGENERATOR_DATA_TYPE_DECLARATION
/*!
 * \brief Type RoadSignLaneIDT.
 * \remark generated
 *
 * IMPLEMENTATION-DATA-TYPE /CppImplementationDataTypes/RoadSignLaneIDT
 */
enum class RoadSignLaneIDT : uint8_t {
  RoadSignLane_Unassigned = 0,
  RoadSignLane_Current = 1,
  RoadSignLane_FirstLeft = 2,
  RoadSignLane_SecondLeft = 3,
  RoadSignLane_FirstRight = 4,
  RoadSignLane_SecondRight = 5
};
// VCA Enable : VCA_MODELLEDDATATYPEGENERATOR_DATA_TYPE_DECLARATION

}  // namespace RoadSignLaneIDT

#endif  // TRAFFICLIGHTATTENTIONEXE_INCLUDE_ROADSIGNLANEIDT_IMPL_TYPE_ROADSIGNLANEIDT_H_
