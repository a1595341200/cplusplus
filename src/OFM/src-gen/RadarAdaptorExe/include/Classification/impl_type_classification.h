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
/**        \file  RadarAdaptorExe/include/Classification/impl_type_classification.h
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

#ifndef RADARADAPTOREXE_INCLUDE_CLASSIFICATION_IMPL_TYPE_CLASSIFICATION_H_
#define RADARADAPTOREXE_INCLUDE_CLASSIFICATION_IMPL_TYPE_CLASSIFICATION_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include <array>
#include <cstdint>
#include <map>
#include <string>
#include <vector>

namespace Classification {

/*!
 * \brief Type Classification.
 * \remark generated
 * \trace SPEC-5951372
 *
 * IMPLEMENTATION-DATA-TYPE /CppImplementationDataTypes/Classification
 */
enum class Classification : uint8_t {
  EClassification_Point = 0,
  EClassification_Car = 1,
  EClassification_Truck = 2,
  EClassification_Pedestrian = 3,
  EClassification_Motorcycle = 4,
  EClassification_Bicycle = 5,
  EClassification_Wide = 6,
  EClassification_Reserved1 = 7,
  EClassification_Reserved2 = 8,
  EClassification_Reserved3 = 9,
  EClassification_Unclassified = 10,
  EClassification_Reserved4 = 11,
  EClassification_Reserved5 = 12,
  EClassification_Reserved6 = 13,
  EClassification_Reserved7 = 14,
  EClassification_Reserved8 = 15
};

}  // namespace Classification

#endif  // RADARADAPTOREXE_INCLUDE_CLASSIFICATION_IMPL_TYPE_CLASSIFICATION_H_
