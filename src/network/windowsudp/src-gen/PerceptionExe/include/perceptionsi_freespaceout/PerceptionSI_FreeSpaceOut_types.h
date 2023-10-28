
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
/**        \file  PerceptionExe/include/perceptionsi_freespaceout/PerceptionSI_FreeSpaceOut_types.h
 *        \brief  Input and output structures for methods, fields and application errors of service 'PerceptionSI_FreeSpaceOut'
 *
 *      \details  Definition of common input-/output structs used for simplified argument / marshalling handling. For all elements like methods, events fields structs with the related in-/output arguments are generated.
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 *  GENERATOR INFORMATION
 *  -------------------------------------------------------------------------------------------------------------------
 *    Generator Name: amsr_socal
 *         Commit ID: 876c9d7506d269a4ba294a46ad3c3ba9b81940a0
 *********************************************************************************************************************/

#ifndef PERCEPTIONEXE_INCLUDE_PERCEPTIONSI_FREESPACEOUT_PERCEPTIONSI_FREESPACEOUT_TYPES_H_
#define PERCEPTIONEXE_INCLUDE_PERCEPTIONSI_FREESPACEOUT_PERCEPTIONSI_FREESPACEOUT_TYPES_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include "amsr/socal/handle_type.h"
#include "perceptionsi_freespaceout/PerceptionSI_FreeSpaceOut_datatypes.h"
#include "perceptionsi_freespaceout/perceptionsi_freespaceout_common.h"

namespace perceptionsi_freespaceout {
namespace internal {

/*!
 * \brief Proxy HandleType for the Service 'PerceptionSI_FreeSpaceOut'.
 * \trace SPEC-4980259
 */
class PerceptionSI_FreeSpaceOutHandleType final : public ::amsr::socal::HandleType {
  public:
  /*!
   * \brief Inherit constructor.
   */
  using HandleType::HandleType;
};

}  // namespace internal
}  //  namespace perceptionsi_freespaceout

#endif  // PERCEPTIONEXE_INCLUDE_PERCEPTIONSI_FREESPACEOUT_PERCEPTIONSI_FREESPACEOUT_TYPES_H_

