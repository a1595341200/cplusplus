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
/**        \file  LocalizationFusionExe/include/LaneChgstatus/impl_type_lanechgstatus.h
 *        \brief
 *
 *      \details
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 *  GENERATOR INFORMATION
 *  -------------------------------------------------------------------------------------------------------------------
 *    Generator Name: amsr_modelleddatatypes_api
 *         Commit ID: 46318213ad7ac4d9dbeb54ad2e67c431a47a9a9f
 *********************************************************************************************************************/

#ifndef LOCALIZATIONFUSIONEXE_INCLUDE_LANECHGSTATUS_IMPL_TYPE_LANECHGSTATUS_H_
#define LOCALIZATIONFUSIONEXE_INCLUDE_LANECHGSTATUS_IMPL_TYPE_LANECHGSTATUS_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include <array>
#include <cstdint>
#include <map>
#include <string>
#include <vector>

namespace LaneChgstatus {

/*!
 * \brief Type LaneChgstatus.
 * \remark generated
 * \trace SPEC-5951372
 *
 * IMPLEMENTATION-DATA-TYPE /CppImplementationDataTypes/LaneChgstatus
 */
enum class LaneChgstatus : uint8_t {
  NoLaneChg = 0,
  LaneChgOnLeSideFinsh = 1,
  LaneChgOnRiSideFinsh = 2,
  LaneChgFailrOnLeSide = 3,
  LaneChgFailrOnRiSide = 4,
  LaneChgRejectOnLeSide = 5,
  LaneChgRejectOnRiSide = 6,
  LaneChgOnLeSideProgress = 7,
  LaneChgOnRiSideProgress = 8,
  LaneChgCncOnLeSide = 9,
  LaneChgCncOnRiSide = 10,
  LaneChgReqOnLeSide = 11,
  LaneChgReqOnRiSide = 12,
  LaneChgWaitOnLeSide = 13,
  LaneChgWaitOnRiSide = 14,
  LaneChgNotAvl = 15,
  LaneChgAvl = 16,
  Fault = 17
};

}  // namespace LaneChgstatus

#endif  // LOCALIZATIONFUSIONEXE_INCLUDE_LANECHGSTATUS_IMPL_TYPE_LANECHGSTATUS_H_
