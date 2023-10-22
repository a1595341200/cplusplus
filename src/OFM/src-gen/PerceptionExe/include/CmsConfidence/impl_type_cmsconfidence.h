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
/**        \file  PerceptionExe/include/CmsConfidence/impl_type_cmsconfidence.h
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

#ifndef PERCEPTIONEXE_INCLUDE_CMSCONFIDENCE_IMPL_TYPE_CMSCONFIDENCE_H_
#define PERCEPTIONEXE_INCLUDE_CMSCONFIDENCE_IMPL_TYPE_CMSCONFIDENCE_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include <array>
#include <cstdint>
#include <map>
#include <string>
#include <vector>

namespace CmsConfidence {

/*!
 * \brief Type CmsConfidence.
 * \remark generated
 * \trace SPEC-5951372
 *
 * IMPLEMENTATION-DATA-TYPE /CppImplementationDataTypes/CmsConfidence
 */
enum class CmsConfidence : uint8_t {
  CmsConfidence1_NotReliable = 0,
  CmsConfidence1_ReliableLevel1 = 1,
  CmsConfidence1_ReliableLevel2 = 2,
  CmsConfidence1_ReliableLevel3 = 3
};

}  // namespace CmsConfidence

#endif  // PERCEPTIONEXE_INCLUDE_CMSCONFIDENCE_IMPL_TYPE_CMSCONFIDENCE_H_
