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
/**        \file  EHRExe/include/LaneConnectivitys/impl_type_laneconnectivitys.h
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

#ifndef EHREXE_INCLUDE_LANECONNECTIVITYS_IMPL_TYPE_LANECONNECTIVITYS_H_
#define EHREXE_INCLUDE_LANECONNECTIVITYS_IMPL_TYPE_LANECONNECTIVITYS_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include <array>
#include <cstdint>
#include <map>
#include <string>
#include <vector>
#include "PairConnectivity/impl_type_pairconnectivity.h"

namespace LaneConnectivitys {

/*!
 * \brief Type LaneConnectivitys.
 * \remark generated
 * \trace SPEC-5951372
 *
 * IMPLEMENTATION-DATA-TYPE /CppImplementationDataTypes/LaneConnectivitys
 */
using LaneConnectivitys = std::vector<
  PairConnectivity::PairConnectivity
>;

}  // namespace LaneConnectivitys

#endif  // EHREXE_INCLUDE_LANECONNECTIVITYS_IMPL_TYPE_LANECONNECTIVITYS_H_
