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
/**        \file  RoadModelFusionExe/include/FormOfWay1IDT/impl_type_formofway1idt.h
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

#ifndef ROADMODELFUSIONEXE_INCLUDE_FORMOFWAY1IDT_IMPL_TYPE_FORMOFWAY1IDT_H_
#define ROADMODELFUSIONEXE_INCLUDE_FORMOFWAY1IDT_IMPL_TYPE_FORMOFWAY1IDT_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include <array>
#include <cstdint>
#include <map>
#include <string>
#include <vector>

namespace FormOfWay1IDT {

// VCA Disable [LNG-01,LNG-03,SLC-11,SLC-12,SLC-14,SLC-16,SPC-15] : VCA_MODELLEDDATATYPEGENERATOR_DATA_TYPE_DECLARATION
/*!
 * \brief Type FormOfWay1IDT.
 * \remark generated
 *
 * IMPLEMENTATION-DATA-TYPE /CppImplementationDataTypes/FormOfWay1IDT
 */
enum class FormOfWay1IDT : uint8_t {
  FormOfWay1_Unknown = 0,
  FormOfWay1_Normal = 1,
  FormOfWay1_MultipleCarriageWay = 2,
  FormOfWay1_SingleCarriageWay = 3,
  FormOfWay1_RoundaboutCircle = 4,
  FormOfWay1_Service = 13,
  FormOfWay1_RampEntry = 16,
  FormOfWay1_RampExit = 17,
  FormOfWay1_CrossLink = 18,
  FormOfWay1_JCT = 19,
  FormOfWay1_SlipRoad = 20,
  FormOfWay1_SideRoad = 21,
  FormOfWay1_SlipAndJCT = 22,
  FormOfWay1_TurnRightLineA = 23,
  FormOfWay1_TurnRightLineB = 24,
  FormOfWay1_TurnLeftLineA = 25,
  FormOfWay1_TurnLeftLineB = 26,
  FormOfWay1_TurnLeftRightLine = 27,
  FormOfWay1_ServiceAndSlipRoad = 28,
  FormOfWay1_ServiceAndJCT = 29,
  FormOfWay1_ServiceAndSlipRoadAndJCT = 30,
  FormOfWay1_RampConnect = 31,
  FormOfWay1_Other = 99
};
// VCA Enable : VCA_MODELLEDDATATYPEGENERATOR_DATA_TYPE_DECLARATION

}  // namespace FormOfWay1IDT

#endif  // ROADMODELFUSIONEXE_INCLUDE_FORMOFWAY1IDT_IMPL_TYPE_FORMOFWAY1IDT_H_
