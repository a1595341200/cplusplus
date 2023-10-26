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
/**        \file  TrafficLightAttentionExe/include/LaneTrackStsIDT/impl_type_lanetrackstsidt.h
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

#ifndef TRAFFICLIGHTATTENTIONEXE_INCLUDE_LANETRACKSTSIDT_IMPL_TYPE_LANETRACKSTSIDT_H_
#define TRAFFICLIGHTATTENTIONEXE_INCLUDE_LANETRACKSTSIDT_IMPL_TYPE_LANETRACKSTSIDT_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include <array>
#include <cstdint>
#include <map>
#include <string>
#include <vector>

namespace LaneTrackStsIDT {

// VCA Disable [LNG-01,LNG-03,SLC-11,SLC-12,SLC-14,SLC-16,SPC-15] : VCA_MODELLEDDATATYPEGENERATOR_DATA_TYPE_DECLARATION
/*!
 * \brief Type LaneTrackStsIDT.
 * \remark generated
 *
 * IMPLEMENTATION-DATA-TYPE /CppImplementationDataTypes/LaneTrackStsIDT
 */
enum class LaneTrackStsIDT : uint8_t {
  LaneTrackSts_NoMarkingDetected = 0,
  LaneTrackSts_TrackedDetectedMarking = 1,
  LaneTrackSts_CloseRangePredictedMarking = 2,
  LaneTrackSts_FarRangePredictedMarking = 3,
  LaneTrackSts_PredictedMarking = 4
};
// VCA Enable : VCA_MODELLEDDATATYPEGENERATOR_DATA_TYPE_DECLARATION

}  // namespace LaneTrackStsIDT

#endif  // TRAFFICLIGHTATTENTIONEXE_INCLUDE_LANETRACKSTSIDT_IMPL_TYPE_LANETRACKSTSIDT_H_
