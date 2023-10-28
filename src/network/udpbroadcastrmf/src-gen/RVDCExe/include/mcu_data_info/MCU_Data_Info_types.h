
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
/**        \file  RVDCExe/include/mcu_data_info/MCU_Data_Info_types.h
 *        \brief  Input and output structures for methods, fields and application errors of service 'MCU_Data_Info'
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

#ifndef RVDCEXE_INCLUDE_MCU_DATA_INFO_MCU_DATA_INFO_TYPES_H_
#define RVDCEXE_INCLUDE_MCU_DATA_INFO_MCU_DATA_INFO_TYPES_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include "amsr/socal/handle_type.h"
#include "mcu_data_info/MCU_Data_Info_datatypes.h"
#include "mcu_data_info/mcu_data_info_common.h"

namespace mcu_data_info {
namespace internal {

/*!
 * \brief Proxy HandleType for the Service 'MCU_Data_Info'.
 * \trace SPEC-4980259
 */
class MCU_Data_InfoHandleType final : public ::amsr::socal::HandleType {
  public:
  /*!
   * \brief Inherit constructor.
   */
  using HandleType::HandleType;
};

}  // namespace internal
}  //  namespace mcu_data_info

#endif  // RVDCEXE_INCLUDE_MCU_DATA_INFO_MCU_DATA_INFO_TYPES_H_

