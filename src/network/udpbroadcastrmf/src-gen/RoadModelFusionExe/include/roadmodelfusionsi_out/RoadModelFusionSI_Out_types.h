
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
/**        \file  RoadModelFusionExe/include/roadmodelfusionsi_out/RoadModelFusionSI_Out_types.h
 *        \brief  Input and output structures for methods, fields and application errors of service 'RoadModelFusionSI_Out'
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

#ifndef ROADMODELFUSIONEXE_INCLUDE_ROADMODELFUSIONSI_OUT_ROADMODELFUSIONSI_OUT_TYPES_H_
#define ROADMODELFUSIONEXE_INCLUDE_ROADMODELFUSIONSI_OUT_ROADMODELFUSIONSI_OUT_TYPES_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include "amsr/socal/handle_type.h"
#include "roadmodelfusionsi_out/RoadModelFusionSI_Out_datatypes.h"
#include "roadmodelfusionsi_out/roadmodelfusionsi_out_common.h"

namespace roadmodelfusionsi_out {
namespace internal {

/*!
 * \brief Proxy HandleType for the Service 'RoadModelFusionSI_Out'.
 * \trace SPEC-4980259
 */
class RoadModelFusionSI_OutHandleType final : public ::amsr::socal::HandleType {
  public:
  /*!
   * \brief Inherit constructor.
   */
  using HandleType::HandleType;
};

}  // namespace internal
}  //  namespace roadmodelfusionsi_out

#endif  // ROADMODELFUSIONEXE_INCLUDE_ROADMODELFUSIONSI_OUT_ROADMODELFUSIONSI_OUT_TYPES_H_

