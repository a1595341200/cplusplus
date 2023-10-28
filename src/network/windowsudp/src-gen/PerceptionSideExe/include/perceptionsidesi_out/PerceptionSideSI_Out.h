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
/**        \file  PerceptionSideExe/include/perceptionsidesi_out/PerceptionSideSI_Out.h
 *        \brief  Header for service 'PerceptionSideSI_Out'.
 *
 *      \details
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 *  GENERATOR INFORMATION
 *  -------------------------------------------------------------------------------------------------------------------
 *    Generator Name: amsr_socal
 *         Commit ID: 876c9d7506d269a4ba294a46ad3c3ba9b81940a0
 *********************************************************************************************************************/

#ifndef PERCEPTIONSIDEEXE_INCLUDE_PERCEPTIONSIDESI_OUT_PERCEPTIONSIDESI_OUT_H_
#define PERCEPTIONSIDEEXE_INCLUDE_PERCEPTIONSIDESI_OUT_PERCEPTIONSIDESI_OUT_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include "ara/com/service_identifier.h"
#include "vac/container/c_string_view.h"
#include "vac/container/string_literals.h"

namespace perceptionsidesi_out {

// VECTOR NC AutosarC++17_10-M7.3.6: MD_SOCAL_AutosarC++17_10-M7.3.6_usingDirectiveInHeaderFile
/*!
 * \brief Literals namespace is needed for "_sv literal.
 */
using vac::container::literals::operator""_sv;  // NOLINT(build/namespaces)

/*!
 * \brief Representation of service 'PerceptionSideSI_Out'
 * \details Used for service-specific aspects:
 *  - Resource management
 *  - Service Identifier
 *
 * \trace SPEC-4980256
 */
class PerceptionSideSI_Out final {

 private:
 /*!
* \brief Type-alias for easy access to CStringView.
*/
 using CStringView = vac::container::CStringView;

  /*!
   * \brief String View for Service Identifier
   */
  static constexpr CStringView kServiceIdentifier{"PerceptionSideSI_Out"_sv};

 public:

  /*!
   * \brief Service Identifier.
   *
   * \trace SPEC-4980252, SPEC-4980256
   */
  static constexpr ::ara::com::ServiceIdentifierType ServiceIdentifier{kServiceIdentifier};

  /*!
   * \brief Service shortname path.
   */
  static constexpr CStringView kServiceShortNamePath{"/JICA/Service/Interface/PerceptionSideSI_Out"_sv};
};

}  // namespace perceptionsidesi_out

#endif  // PERCEPTIONSIDEEXE_INCLUDE_PERCEPTIONSIDESI_OUT_PERCEPTIONSIDESI_OUT_H_

