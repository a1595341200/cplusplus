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
 *         Commit ID: 876c9d7506d269a4ba294a46ad3c3ba9b81940a0
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
   * \brief Creates a skeleton impl instance
   * \pre -
   * \context App
   */
  TrafficLightAttentionSI_OutSkeletonImplInterface() noexcept = default;

  /*!
   * \brief Use default destructor
   */
  virtual ~TrafficLightAttentionSI_OutSkeletonImplInterface() noexcept = default;

 protected:

  /*!
   * \brief Use default move constructor
   * \pre -
   * \context App
   */
  TrafficLightAttentionSI_OutSkeletonImplInterface(TrafficLightAttentionSI_OutSkeletonImplInterface &&) noexcept = default;

  /*!
   * \brief Use default move assignment
   * \pre -
   * \context App
   */
  TrafficLightAttentionSI_OutSkeletonImplInterface &operator=(TrafficLightAttentionSI_OutSkeletonImplInterface &&) & noexcept = default;

  TrafficLightAttentionSI_OutSkeletonImplInterface(TrafficLightAttentionSI_OutSkeletonImplInterface const &) = delete;

  TrafficLightAttentionSI_OutSkeletonImplInterface &operator=(TrafficLightAttentionSI_OutSkeletonImplInterface const &) & = delete;

 public:

  // ---- Events ---------------------------------------------------------------------------------------------------

  /*!
   * \brief Get the event manager object for the service event 'TLA_Bus_HMIDataTrfcLi'.
   * \details Event sample type: ::HMIDataTrfcLi1VccIDT::HMIDataTrfcLi1VccIDT.
              For each SkeletonEvent a distinct Skeleton Event Manager instance shall be created to ensure thread safety.
   * \return A binding-specific event management object/interface supporting event transmission (the returned pointer should not be a null pointer).
   * \pre -
   * \context    App
   * \threadsafe TRUE for different impl instances, FALSE otherwise.
   * \reentrant  TRUE for different impl instances, FALSE otherwise.
   */
  virtual ::amsr::socal::internal::events::SkeletonEventManagerInterface<::HMIDataTrfcLi1VccIDT::HMIDataTrfcLi1VccIDT>* GetEventManagerTLA_Bus_HMIDataTrfcLi() noexcept = 0;

  // ---- Fields ---------------------------------------------------------------------------------------------------
};

} // namespace internal
}  // namespace trafficlightattentionsi_out

#endif  // TRAFFICLIGHTATTENTIONEXE_INCLUDE_TRAFFICLIGHTATTENTIONSI_OUT_TRAFFICLIGHTATTENTIONSI_OUT_SKELETON_IMPL_INTERFACE_H_

