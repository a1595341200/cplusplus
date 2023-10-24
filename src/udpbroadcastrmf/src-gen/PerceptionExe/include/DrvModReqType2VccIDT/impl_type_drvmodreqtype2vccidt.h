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
/**        \file  PerceptionExe/include/DrvModReqType2VccIDT/impl_type_drvmodreqtype2vccidt.h
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

#ifndef PERCEPTIONEXE_INCLUDE_DRVMODREQTYPE2VCCIDT_IMPL_TYPE_DRVMODREQTYPE2VCCIDT_H_
#define PERCEPTIONEXE_INCLUDE_DRVMODREQTYPE2VCCIDT_IMPL_TYPE_DRVMODREQTYPE2VCCIDT_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include <array>
#include <cstdint>
#include <map>
#include <string>
#include <vector>

namespace DrvModReqType2VccIDT {

// VCA Disable [LNG-01,LNG-03,SLC-11,SLC-12,SLC-14,SLC-16,SPC-15] : VCA_MODELLEDDATATYPEGENERATOR_DATA_TYPE_DECLARATION
/*!
 * \brief Type DrvModReqType2VccIDT.
 * \remark generated
 *
 * IMPLEMENTATION-DATA-TYPE /CppImplementationDataTypes/DrvModReqType2VccIDT
 */
enum class DrvModReqType2VccIDT : uint8_t {
  DrvModReqType1Vcc_Undefd = 0,
  DrvModReqType1Vcc_ECO = 1,
  DrvModReqType1Vcc_Comfort_Normal = 2,
  DrvModReqType1Vcc_Dynamic_Sport = 3,
  DrvModReqType1Vcc_Individual = 4,
  DrvModReqType1Vcc_Offroad_CrossTerrain = 5,
  DrvModReqType1Vcc_Adaptive = 6,
  DrvModReqType1Vcc_Race = 7,
  DrvModReqType1Vcc_Pure_EV = 8,
  DrvModReqType1Vcc_Hybrid = 9,
  DrvModReqType1Vcc_Power = 10,
  DrvModReqType1Vcc_Snow = 11,
  DrvModReqType1Vcc_Sand = 12,
  DrvModReqType1Vcc_Mud = 13,
  DrvModReqType1Vcc_Rock = 14,
  DrvModReqType1Vcc_Err = 15
};
// VCA Enable : VCA_MODELLEDDATATYPEGENERATOR_DATA_TYPE_DECLARATION

}  // namespace DrvModReqType2VccIDT

#endif  // PERCEPTIONEXE_INCLUDE_DRVMODREQTYPE2VCCIDT_IMPL_TYPE_DRVMODREQTYPE2VCCIDT_H_
