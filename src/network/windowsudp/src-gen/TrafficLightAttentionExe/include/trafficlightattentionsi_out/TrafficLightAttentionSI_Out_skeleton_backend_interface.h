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
/**        \file  TrafficLightAttentionExe/include/trafficlightattentionsi_out/TrafficLightAttentionSI_Out_skeleton_backend_interface.h
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

#ifndef TRAFFICLIGHTATTENTIONEXE_INCLUDE_TRAFFICLIGHTATTENTIONSI_OUT_TRAFFICLIGHTATTENTIONSI_OUT_SKELETON_BACKEND_INTERFACE_H_
#define TRAFFICLIGHTATTENTIONEXE_INCLUDE_TRAFFICLIGHTATTENTIONSI_OUT_TRAFFICLIGHTATTENTIONSI_OUT_SKELETON_BACKEND_INTERFACE_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include "trafficlightattentionsi_out/TrafficLightAttentionSI_Out_datatypes.h"

namespace trafficlightattentionsi_out {
namespace internal {

/*!
 * \brief Skeleton backend interface for the Service 'TrafficLightAttentionSI_Out'.
 * \remark generated
 */
class TrafficLightAttentionSI_OutSkeletonBackendInterface {
 public:

  /*!
   * \brief Define default constructor.
   * \pre -
   * \context     App
   * \synchronus  TRUE
   */
  TrafficLightAttentionSI_OutSkeletonBackendInterface() noexcept = default;

  /*!
   * \brief Define default destructor.
   * \pre -
   * \context     App
   * \synchronus  TRUE
   */
  virtual ~TrafficLightAttentionSI_OutSkeletonBackendInterface() noexcept = default;

  TrafficLightAttentionSI_OutSkeletonBackendInterface(TrafficLightAttentionSI_OutSkeletonBackendInterface const &) = delete;

  TrafficLightAttentionSI_OutSkeletonBackendInterface(TrafficLightAttentionSI_OutSkeletonBackendInterface &&) = delete;

  TrafficLightAttentionSI_OutSkeletonBackendInterface &operator=(TrafficLightAttentionSI_OutSkeletonBackendInterface const &) & = delete;

  TrafficLightAttentionSI_OutSkeletonBackendInterface &operator=(TrafficLightAttentionSI_OutSkeletonBackendInterface &&) & = delete;

  // ---- Methods --------------------------------------------------------------------------------------------------
  // ---- Fields ---------------------------------------------------------------------------------------------------
};

} // namespace internal
}  // namespace trafficlightattentionsi_out

#endif  // TRAFFICLIGHTATTENTIONEXE_INCLUDE_TRAFFICLIGHTATTENTIONSI_OUT_TRAFFICLIGHTATTENTIONSI_OUT_SKELETON_BACKEND_INTERFACE_H_

