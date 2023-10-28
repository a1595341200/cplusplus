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
/**        \file  ObjectFusionModelExe/include/CamObjPose/impl_type_camobjpose.h
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

#ifndef OBJECTFUSIONMODELEXE_INCLUDE_CAMOBJPOSE_IMPL_TYPE_CAMOBJPOSE_H_
#define OBJECTFUSIONMODELEXE_INCLUDE_CAMOBJPOSE_IMPL_TYPE_CAMOBJPOSE_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include <array>
#include <cstdint>
#include <map>
#include <string>
#include <vector>

namespace CamObjPose {

/*!
 * \brief Type CamObjPose.
 * \remark generated
 * \trace SPEC-5951372
 *
 * IMPLEMENTATION-DATA-TYPE /CppImplementationDataTypes/CamObjPose
 */
enum class CamObjPose : uint8_t {
  Pose_Unknown = 0,
  Pose_Stationary = 1,
  Pose_PrecedingAway = 2,
  Pose_PrecedingStationary = 3,
  Pose_PrecedingCloser = 4,
  Pose_Oncoming = 5,
  Pose_CrossingFromLeft = 6,
  Pose_CrossingFromRight = 7
};

}  // namespace CamObjPose

#endif  // OBJECTFUSIONMODELEXE_INCLUDE_CAMOBJPOSE_IMPL_TYPE_CAMOBJPOSE_H_
