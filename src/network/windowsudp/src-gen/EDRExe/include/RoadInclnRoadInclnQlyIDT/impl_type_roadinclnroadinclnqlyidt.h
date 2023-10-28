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
/**        \file  EDRExe/include/RoadInclnRoadInclnQlyIDT/impl_type_roadinclnroadinclnqlyidt.h
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

#ifndef EDREXE_INCLUDE_ROADINCLNROADINCLNQLYIDT_IMPL_TYPE_ROADINCLNROADINCLNQLYIDT_H_
#define EDREXE_INCLUDE_ROADINCLNROADINCLNQLYIDT_IMPL_TYPE_ROADINCLNROADINCLNQLYIDT_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include <array>
#include <cstdint>
#include <map>
#include <string>
#include <vector>

namespace RoadInclnRoadInclnQlyIDT {

// VCA Disable [LNG-01,LNG-03,SLC-11,SLC-12,SLC-14,SLC-16,SPC-15] : VCA_MODELLEDDATATYPEGENERATOR_DATA_TYPE_DECLARATION
/*!
 * \brief Type RoadInclnRoadInclnQlyIDT.
 * \remark generated
 *
 * IMPLEMENTATION-DATA-TYPE /CppImplementationDataTypes/RoadInclnRoadInclnQlyIDT
 */
enum class RoadInclnRoadInclnQlyIDT : uint8_t {
  RoadInclnRoadInclnQly_Flt = 0,
  RoadInclnRoadInclnQly_NoInfo = 1,
  RoadInclnRoadInclnQly_Vld = 2
};
// VCA Enable : VCA_MODELLEDDATATYPEGENERATOR_DATA_TYPE_DECLARATION

}  // namespace RoadInclnRoadInclnQlyIDT

#endif  // EDREXE_INCLUDE_ROADINCLNROADINCLNQLYIDT_IMPL_TYPE_ROADINCLNROADINCLNQLYIDT_H_
