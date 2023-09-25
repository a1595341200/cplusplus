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
/**        \file  EHRExe/include/GeometryPoints/impl_type_geometrypoints.h
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

#ifndef EHREXE_INCLUDE_GEOMETRYPOINTS_IMPL_TYPE_GEOMETRYPOINTS_H_
#define EHREXE_INCLUDE_GEOMETRYPOINTS_IMPL_TYPE_GEOMETRYPOINTS_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include <array>
#include <cstdint>
#include <map>
#include <string>
#include <vector>
#include "GeometryPoint/impl_type_geometrypoint.h"

namespace GeometryPoints {

/*!
 * \brief Type GeometryPoints.
 * \remark generated
 * \trace SPEC-5951372
 *
 * IMPLEMENTATION-DATA-TYPE /CppImplementationDataTypes/GeometryPoints
 */
using GeometryPoints = std::vector<
  GeometryPoint::GeometryPoint
>;

}  // namespace GeometryPoints

#endif  // EHREXE_INCLUDE_GEOMETRYPOINTS_IMPL_TYPE_GEOMETRYPOINTS_H_
