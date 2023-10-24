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
/**        \file  TrafficSignInformationExe/include/LaneChgstatusIDT/impl_type_lanechgstatusidt.h
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

#ifndef TRAFFICSIGNINFORMATIONEXE_INCLUDE_LANECHGSTATUSIDT_IMPL_TYPE_LANECHGSTATUSIDT_H_
#define TRAFFICSIGNINFORMATIONEXE_INCLUDE_LANECHGSTATUSIDT_IMPL_TYPE_LANECHGSTATUSIDT_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include <array>
#include <cstdint>
#include <map>
#include <string>
#include <vector>

namespace LaneChgstatusIDT {

// VCA Disable [LNG-01,LNG-03,SLC-11,SLC-12,SLC-14,SLC-16,SPC-15] : VCA_MODELLEDDATATYPEGENERATOR_DATA_TYPE_DECLARATION
/*!
 * \brief Type LaneChgstatusIDT.
 * \remark generated
 *
 * IMPLEMENTATION-DATA-TYPE /CppImplementationDataTypes/LaneChgstatusIDT
 */
enum class LaneChgstatusIDT : uint8_t {
  AsyLaneChgAssistSts_NoLaneChg = 0,
  AsyLaneChgAssistSts_LaneChgOnLeSideFinsh = 1,
  AsyLaneChgAssistSts_LaneChgOnRiSideFinsh = 2,
  AsyLaneChgAssistSts_LaneChgFailrOnLeSide = 3,
  AsyLaneChgAssistSts_LaneChgFailrOnRiSide = 4,
  AsyLaneChgAssistSts_LaneChgRejectOnLeSide = 5,
  AsyLaneChgAssistSts_LaneChgRejectOnRiSide = 6,
  AsyLaneChgAssistSts_LaneChgOnLeSideProgress = 7,
  AsyLaneChgAssistSts_LaneChgOnRiSideProgress = 8,
  AsyLaneChgAssistSts_LaneChgCncOnLeSide = 9,
  AsyLaneChgAssistSts_LaneChgCncOnRiSide = 10,
  AsyLaneChgAssistSts_LaneChgReqOnLeSide = 11,
  AsyLaneChgAssistSts_LaneChgReqOnRiSide = 12,
  AsyLaneChgAssistSts_LaneChgWaitOnLeSide = 13,
  AsyLaneChgAssistSts_LaneChgWaitOnRiSide = 14,
  AsyLaneChgAssistSts_LaneChgNotAvl = 15,
  AsyLaneChgAssistSts_LaneChgAvl = 16,
  AsyLaneChgAssistSts_Fault = 17
};
// VCA Enable : VCA_MODELLEDDATATYPEGENERATOR_DATA_TYPE_DECLARATION

}  // namespace LaneChgstatusIDT

#endif  // TRAFFICSIGNINFORMATIONEXE_INCLUDE_LANECHGSTATUSIDT_IMPL_TYPE_LANECHGSTATUSIDT_H_
