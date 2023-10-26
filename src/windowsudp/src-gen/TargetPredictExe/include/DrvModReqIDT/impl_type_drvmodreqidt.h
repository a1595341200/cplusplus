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
/**        \file  TargetPredictExe/include/DrvModReqIDT/impl_type_drvmodreqidt.h
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

#ifndef TARGETPREDICTEXE_INCLUDE_DRVMODREQIDT_IMPL_TYPE_DRVMODREQIDT_H_
#define TARGETPREDICTEXE_INCLUDE_DRVMODREQIDT_IMPL_TYPE_DRVMODREQIDT_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include <array>
#include <cstdint>
#include <map>
#include <string>
#include <vector>

namespace DrvModReqIDT {

// VCA Disable [LNG-01,LNG-03,SLC-11,SLC-12,SLC-14,SLC-16,SPC-15] : VCA_MODELLEDDATATYPEGENERATOR_DATA_TYPE_DECLARATION
/*!
 * \brief Type DrvModReqIDT.
 * \remark generated
 *
 * IMPLEMENTATION-DATA-TYPE /CppImplementationDataTypes/DrvModReqIDT
 */
enum class DrvModReqIDT : uint8_t {
  DrvModReq_Undefd = 0,
  DrvModReq_ECO = 1,
  DrvModReq_Comfort_Normal = 2,
  DrvModReq_Dynamic_Sport = 3,
  DrvModReq_Individual = 4,
  DrvModReq_Offroad_CrossTerrain = 5,
  DrvModReq_Adaptive = 6,
  DrvModReq_Race = 7,
  DrvModReq_Pure_EV = 8,
  DrvModReq_Hybrid = 9,
  DrvModReq_Power = 10,
  DrvModReq_Snow = 11,
  DrvModReq_Sand = 12,
  DrvModReq_Mud = 13,
  DrvModReq_Rock = 14,
  DrvModReq_Err = 15
};
// VCA Enable : VCA_MODELLEDDATATYPEGENERATOR_DATA_TYPE_DECLARATION

}  // namespace DrvModReqIDT

#endif  // TARGETPREDICTEXE_INCLUDE_DRVMODREQIDT_IMPL_TYPE_DRVMODREQIDT_H_
