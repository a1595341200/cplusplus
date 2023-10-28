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
/**        \file  EHRExe/include/LaneAppTypeIDT/impl_type_laneapptypeidt.h
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

#ifndef EHREXE_INCLUDE_LANEAPPTYPEIDT_IMPL_TYPE_LANEAPPTYPEIDT_H_
#define EHREXE_INCLUDE_LANEAPPTYPEIDT_IMPL_TYPE_LANEAPPTYPEIDT_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include <array>
#include <cstdint>
#include <map>
#include <string>
#include <vector>

namespace LaneAppTypeIDT {

// VCA Disable [LNG-01,LNG-03,SLC-11,SLC-12,SLC-14,SLC-16,SPC-15] : VCA_MODELLEDDATATYPEGENERATOR_DATA_TYPE_DECLARATION
/*!
 * \brief Type LaneAppTypeIDT.
 * \remark generated
 *
 * IMPLEMENTATION-DATA-TYPE /CppImplementationDataTypes/LaneAppTypeIDT
 */
enum class LaneAppTypeIDT : uint8_t {
  LaneAppType_None = 0,
  LaneAppType_ReversibleLane = 1,
  LaneAppType_Buslane = 2,
  LaneAppType_HOV_Lane = 3
};
// VCA Enable : VCA_MODELLEDDATATYPEGENERATOR_DATA_TYPE_DECLARATION

}  // namespace LaneAppTypeIDT

#endif  // EHREXE_INCLUDE_LANEAPPTYPEIDT_IMPL_TYPE_LANEAPPTYPEIDT_H_
