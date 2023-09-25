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
/**        \file  EHRExe/include/LinearObjectCurveType/impl_type_linearobjectcurvetype.h
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

#ifndef EHREXE_INCLUDE_LINEAROBJECTCURVETYPE_IMPL_TYPE_LINEAROBJECTCURVETYPE_H_
#define EHREXE_INCLUDE_LINEAROBJECTCURVETYPE_IMPL_TYPE_LINEAROBJECTCURVETYPE_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include <array>
#include <cstdint>
#include <map>
#include <string>
#include <vector>

namespace LinearObjectCurveType {

/*!
 * \brief Type LinearObjectCurveType.
 * \remark generated
 * \trace SPEC-5951372
 *
 * IMPLEMENTATION-DATA-TYPE /CppImplementationDataTypes/LinearObjectCurveType
 */
enum class LinearObjectCurveType : uint8_t {
  LinearObjectCurveType_NotPresent = 0,
  LinearObjectCurveType_Polyline = 1,
  LinearObjectCurveType_BezierSpline = 2
};

}  // namespace LinearObjectCurveType

#endif  // EHREXE_INCLUDE_LINEAROBJECTCURVETYPE_IMPL_TYPE_LINEAROBJECTCURVETYPE_H_
