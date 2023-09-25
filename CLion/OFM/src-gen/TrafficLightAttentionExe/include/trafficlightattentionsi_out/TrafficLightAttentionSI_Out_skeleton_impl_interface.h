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
/**        \file  TrafficLightAttentionExe/include/trafficlightattentionsi_out/TrafficLightAttentionSI_Out_skeleton_impl_interface.h
 *        \brief  Skeleton implementation interface of service 'TrafficLightAttentionSI_Out'.
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

#ifndef TRAFFICLIGHTATTENTIONEXE_INCLUDE_TRAFFICLIGHTATTENTIONSI_OUT_TRAFFICLIGHTATTENTIONSI_OUT_SKELETON_IMPL_INTERFACE_H_
#define TRAFFICLIGHTATTENTIONEXE_INCLUDE_TRAFFICLIGHTATTENTIONSI_OUT_TRAFFICLIGHTATTENTIONSI_OUT_SKELETON_IMPL_INTERFACE_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include "amsr/socal/internal/events/skeleton_event_manager_interface.h"
#include "trafficlightattentionsi_out/trafficlightattentionsi_out_common.h"

namespace trafficlightattentionsi_out {
namespace internal {

/*!
 * \brief Skeleton implementation interface of service 'TrafficLightAttentionSI_Out'
 */
class TrafficLightAttentionSI_OutSkeletonImplInterface {
 public:
  /*!
   * \brief Use default destructor
   */
  virtual ~TrafficLightAttentionSI_OutSkeletonImplInterface() noexcept = default;

  // ---- Events ---------------------------------------------------------------------------------------------------

  /*!
   * \brief Get the event manager object for the service event 'TLA_Bus_HMIDataTrfcLi'.
   * \details Event sample type: ::HMIDataTrfcLi1Vcc::HMIDataTrfcLi1Vcc.
   * \return A binding-specific event management object/interface supporting event transmission.
   * \pre -
   * \context App
   */
  virtual ::amsr::socal::internal::events::SkeletonEventManagerInterface<::HMIDataTrfcLi1Vcc::HMIDataTrfcLi1Vcc>* GetEventManagerTLA_Bus_HMIDataTrfcLi() noexcept = 0;

  // ---- Fields ---------------------------------------------------------------------------------------------------
};

} // namespace internal
}  // namespace trafficlightattentionsi_out

#endif  // TRAFFICLIGHTATTENTIONEXE_INCLUDE_TRAFFICLIGHTATTENTIONSI_OUT_TRAFFICLIGHTATTENTIONSI_OUT_SKELETON_IMPL_INTERFACE_H_

