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
/**        \file  EDRExe/include/RdrObjUsedTracker1IDT/impl_type_rdrobjusedtracker1idt.h
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

#ifndef EDREXE_INCLUDE_RDROBJUSEDTRACKER1IDT_IMPL_TYPE_RDROBJUSEDTRACKER1IDT_H_
#define EDREXE_INCLUDE_RDROBJUSEDTRACKER1IDT_IMPL_TYPE_RDROBJUSEDTRACKER1IDT_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include <array>
#include <cstdint>
#include <map>
#include <string>
#include <vector>

namespace RdrObjUsedTracker1IDT {

// VCA Disable [LNG-01,LNG-03,SLC-11,SLC-12,SLC-14,SLC-16,SPC-15] : VCA_MODELLEDDATATYPEGENERATOR_DATA_TYPE_DECLARATION
/*!
 * \brief Type RdrObjUsedTracker1IDT.
 * \remark generated
 *
 * IMPLEMENTATION-DATA-TYPE /CppImplementationDataTypes/RdrObjUsedTracker1IDT
 */
enum class RdrObjUsedTracker1IDT : uint8_t {
  RdrObjUsedTracker1_Stationary = 0,
  RdrObjUsedTracker1_MovingCVModel = 1,
  RdrObjUsedTracker1_MovingCTModel = 2,
  RdrObjUsedTracker1_Undefined = 3
};
// VCA Enable : VCA_MODELLEDDATATYPEGENERATOR_DATA_TYPE_DECLARATION

}  // namespace RdrObjUsedTracker1IDT

#endif  // EDREXE_INCLUDE_RDROBJUSEDTRACKER1IDT_IMPL_TYPE_RDROBJUSEDTRACKER1IDT_H_
