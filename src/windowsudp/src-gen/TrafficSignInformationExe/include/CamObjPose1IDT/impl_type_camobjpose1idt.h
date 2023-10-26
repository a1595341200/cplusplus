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
/**        \file  TrafficSignInformationExe/include/CamObjPose1IDT/impl_type_camobjpose1idt.h
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

#ifndef TRAFFICSIGNINFORMATIONEXE_INCLUDE_CAMOBJPOSE1IDT_IMPL_TYPE_CAMOBJPOSE1IDT_H_
#define TRAFFICSIGNINFORMATIONEXE_INCLUDE_CAMOBJPOSE1IDT_IMPL_TYPE_CAMOBJPOSE1IDT_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include <array>
#include <cstdint>
#include <map>
#include <string>
#include <vector>

namespace CamObjPose1IDT {

// VCA Disable [LNG-01,LNG-03,SLC-11,SLC-12,SLC-14,SLC-16,SPC-15] : VCA_MODELLEDDATATYPEGENERATOR_DATA_TYPE_DECLARATION
/*!
 * \brief Type CamObjPose1IDT.
 * \remark generated
 *
 * IMPLEMENTATION-DATA-TYPE /CppImplementationDataTypes/CamObjPose1IDT
 */
enum class CamObjPose1IDT : uint8_t {
  Pose_Unknown = 0,
  Pose_Stationary = 1,
  Pose_PrecedingAway = 2,
  Pose_PrecedingStationary = 3,
  Pose_PrecedingCloser = 4,
  Pose_Oncoming = 5,
  Pose_CrossingFromLeft = 6,
  Pose_CrossingFromRight = 7
};
// VCA Enable : VCA_MODELLEDDATATYPEGENERATOR_DATA_TYPE_DECLARATION

}  // namespace CamObjPose1IDT

#endif  // TRAFFICSIGNINFORMATIONEXE_INCLUDE_CAMOBJPOSE1IDT_IMPL_TYPE_CAMOBJPOSE1IDT_H_
