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
/**        \file  RoadModelFusionExe/include/LinkCurvatures/impl_type_linkcurvatures.h
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

#ifndef ROADMODELFUSIONEXE_INCLUDE_LINKCURVATURES_IMPL_TYPE_LINKCURVATURES_H_
#define ROADMODELFUSIONEXE_INCLUDE_LINKCURVATURES_IMPL_TYPE_LINKCURVATURES_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include <array>
#include <cstdint>
#include <map>
#include <string>
#include <vector>
#include "LinkCurvature/impl_type_linkcurvature.h"

namespace LinkCurvatures {

/*!
 * \brief Type LinkCurvatures.
 * \remark generated
 * \trace SPEC-5951372
 *
 * IMPLEMENTATION-DATA-TYPE /CppImplementationDataTypes/LinkCurvatures
 */
using LinkCurvatures = std::vector<
  LinkCurvature::LinkCurvature
>;

}  // namespace LinkCurvatures

#endif  // ROADMODELFUSIONEXE_INCLUDE_LINKCURVATURES_IMPL_TYPE_LINKCURVATURES_H_
