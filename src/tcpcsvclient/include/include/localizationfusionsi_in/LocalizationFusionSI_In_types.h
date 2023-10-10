
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
/**        \file  ObjectFusionModelExe/include/localizationfusionsi_in/LocalizationFusionSI_In_types.h
 *        \brief  Input and output structures for methods, fields and application errors of service 'LocalizationFusionSI_In'
 *
 *      \details  Definition of common input-/output structs used for simplified argument / marshalling handling. For all elements like methods, events fields structs with the related in-/output arguments are generated.
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 *  GENERATOR INFORMATION
 *  -------------------------------------------------------------------------------------------------------------------
 *    Generator Name: amsr_socal
 *         Commit ID: 48d01869de8722335d03ff89fbd3fef3e2fe462b
 *********************************************************************************************************************/

#ifndef OBJECTFUSIONMODELEXE_INCLUDE_LOCALIZATIONFUSIONSI_IN_LOCALIZATIONFUSIONSI_IN_TYPES_H_
#define OBJECTFUSIONMODELEXE_INCLUDE_LOCALIZATIONFUSIONSI_IN_LOCALIZATIONFUSIONSI_IN_TYPES_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include "amsr/socal/internal/handle_type.h"
#include "localizationfusionsi_in/localizationfusionsi_in_common.h"

namespace localizationfusionsi_in {

namespace internal {

/*!
 * \brief Proxy HandleType for the Service 'LocalizationFusionSI_In'.
 * \trace SPEC-4980259
 */
class LocalizationFusionSI_InHandleType final : public ::amsr::socal::internal::HandleType {
  public:
  /*!
   * \brief Inherit constructor.
   */
  using HandleType::HandleType;
};

namespace methods {

}  // namespace methods

namespace fields {

}  // namespace fields
}  // namespace internal

}  //  namespace localizationfusionsi_in

#endif  // OBJECTFUSIONMODELEXE_INCLUDE_LOCALIZATIONFUSIONSI_IN_LOCALIZATIONFUSIONSI_IN_TYPES_H_

