
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
/**        \file  LocalizationFusionExe/include/tosoca_locsensorinfosi/ToSOCA_LocSensorInfoSI_types.h
 *        \brief  Input and output structures for methods, fields and application errors of service 'ToSOCA_LocSensorInfoSI'
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

#ifndef LOCALIZATIONFUSIONEXE_INCLUDE_TOSOCA_LOCSENSORINFOSI_TOSOCA_LOCSENSORINFOSI_TYPES_H_
#define LOCALIZATIONFUSIONEXE_INCLUDE_TOSOCA_LOCSENSORINFOSI_TOSOCA_LOCSENSORINFOSI_TYPES_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include "amsr/socal/internal/handle_type.h"
#include "tosoca_locsensorinfosi/tosoca_locsensorinfosi_common.h"

namespace tosoca_locsensorinfosi {

namespace internal {

/*!
 * \brief Proxy HandleType for the Service 'ToSOCA_LocSensorInfoSI'.
 * \trace SPEC-4980259
 */
class ToSOCA_LocSensorInfoSIHandleType final : public ::amsr::socal::internal::HandleType {
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

}  //  namespace tosoca_locsensorinfosi

#endif  // LOCALIZATIONFUSIONEXE_INCLUDE_TOSOCA_LOCSENSORINFOSI_TOSOCA_LOCSENSORINFOSI_TYPES_H_

