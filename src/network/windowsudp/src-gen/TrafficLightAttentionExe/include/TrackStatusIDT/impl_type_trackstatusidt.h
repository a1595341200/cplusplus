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
/**        \file  TrafficLightAttentionExe/include/TrackStatusIDT/impl_type_trackstatusidt.h
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

#ifndef TRAFFICLIGHTATTENTIONEXE_INCLUDE_TRACKSTATUSIDT_IMPL_TYPE_TRACKSTATUSIDT_H_
#define TRAFFICLIGHTATTENTIONEXE_INCLUDE_TRACKSTATUSIDT_IMPL_TYPE_TRACKSTATUSIDT_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include <array>
#include <cstdint>
#include <map>
#include <string>
#include <vector>

namespace TrackStatusIDT {

// VCA Disable [LNG-01,LNG-03,SLC-11,SLC-12,SLC-14,SLC-16,SPC-15] : VCA_MODELLEDDATATYPEGENERATOR_DATA_TYPE_DECLARATION
/*!
 * \brief Type TrackStatusIDT.
 * \remark generated
 *
 * IMPLEMENTATION-DATA-TYPE /CppImplementationDataTypes/TrackStatusIDT
 */
enum class TrackStatusIDT : uint8_t {
  TrackStatus_Invalid = 0,
  TrackStatus_NotTracked = 1,
  TrackStatus_Initialized = 2,
  TrackStatus_Tracked = 3,
  TrackStatus_Predicted = 4
};
// VCA Enable : VCA_MODELLEDDATATYPEGENERATOR_DATA_TYPE_DECLARATION

}  // namespace TrackStatusIDT

#endif  // TRAFFICLIGHTATTENTIONEXE_INCLUDE_TRACKSTATUSIDT_IMPL_TYPE_TRACKSTATUSIDT_H_
