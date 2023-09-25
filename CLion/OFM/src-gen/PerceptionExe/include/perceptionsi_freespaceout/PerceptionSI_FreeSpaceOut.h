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
/**        \file  PerceptionExe/include/perceptionsi_freespaceout/PerceptionSI_FreeSpaceOut.h
 *        \brief  Header for service 'PerceptionSI_FreeSpaceOut'.
 *
 *      \details
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 *  GENERATOR INFORMATION
 *  -------------------------------------------------------------------------------------------------------------------
 *    Generator Name: amsr_socal
 *         Commit ID: 48d01869de8722335d03ff89fbd3fef3e2fe462b
 *********************************************************************************************************************/

#ifndef PERCEPTIONEXE_INCLUDE_PERCEPTIONSI_FREESPACEOUT_PERCEPTIONSI_FREESPACEOUT_H_
#define PERCEPTIONEXE_INCLUDE_PERCEPTIONSI_FREESPACEOUT_PERCEPTIONSI_FREESPACEOUT_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include "ara/com/service_identifier.h"
#include "vac/container/c_string_view.h"
#include "vac/container/string_literals.h"

namespace perceptionsi_freespaceout {

// VECTOR NC AutosarC++17_10-M7.3.6: MD_SOCAL_AutosarC++17_10_M7.3.6_sv
/*!
 * \brief Literals namespace is needed for "_sv literal.
 */
using vac::container::literals::operator""_sv;  // NOLINT(build/namespaces)

/*!
 * \brief Representation of service 'PerceptionSI_FreeSpaceOut'
 * \details Used for service-specific aspects:
 *  - Resource management
 *  - Service Identifier
 *
 * \trace SPEC-4980256
 */
class PerceptionSI_FreeSpaceOut final {

 private:
 /*!
* \brief Type-alias for easy access to CStringView.
*/
 using CStringView = vac::container::CStringView;

  /*!
   * \brief String View for Service Identifier
   */
  static constexpr CStringView kServiceIdentifier{"PerceptionSI_FreeSpaceOut"_sv};

 public:

  /*!
   * \brief Service Identifier.
   *
   * \trace SPEC-4980252, SPEC-4980256
   */
  static constexpr ara::com::ServiceIdentifierType ServiceIdentifier{kServiceIdentifier};

  /*!
   * \brief Service shortname path.
   */
  static constexpr CStringView kServiceShortNamePath{"/JICA/Service/Interface/PerceptionSI_FreeSpaceOut"_sv};
};

}  // namespace perceptionsi_freespaceout

#endif  // PERCEPTIONEXE_INCLUDE_PERCEPTIONSI_FREESPACEOUT_PERCEPTIONSI_FREESPACEOUT_H_

