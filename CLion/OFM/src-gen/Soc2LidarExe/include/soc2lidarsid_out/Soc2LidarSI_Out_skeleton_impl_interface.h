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
/**        \file  Soc2LidarExe/include/soc2lidarsid_out/Soc2LidarSI_Out_skeleton_impl_interface.h
 *        \brief  Skeleton implementation interface of service 'Soc2LidarSI_Out'.
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

#ifndef SOC2LIDAREXE_INCLUDE_SOC2LIDARSID_OUT_SOC2LIDARSI_OUT_SKELETON_IMPL_INTERFACE_H_
#define SOC2LIDAREXE_INCLUDE_SOC2LIDARSID_OUT_SOC2LIDARSI_OUT_SKELETON_IMPL_INTERFACE_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include "amsr/socal/internal/events/skeleton_event_manager_interface.h"
#include "soc2lidarsid_out/soc2lidarsi_out_common.h"

namespace soc2lidarsid_out {
namespace internal {

/*!
 * \brief Skeleton implementation interface of service 'Soc2LidarSI_Out'
 */
class Soc2LidarSI_OutSkeletonImplInterface {
 public:
  /*!
   * \brief Use default destructor
   */
  virtual ~Soc2LidarSI_OutSkeletonImplInterface() noexcept = default;

  // ---- Events ---------------------------------------------------------------------------------------------------

  /*!
   * \brief Get the event manager object for the service event 'Soc2L_Bus_VehicleInfo2Lidar'.
   * \details Event sample type: ::VehicleInfo2Lidar::VehicleInfo2Lidar.
   * \return A binding-specific event management object/interface supporting event transmission.
   * \pre -
   * \context App
   */
  virtual ::amsr::socal::internal::events::SkeletonEventManagerInterface<::VehicleInfo2Lidar::VehicleInfo2Lidar>* GetEventManagerSoc2L_Bus_VehicleInfo2Lidar() noexcept = 0;

  // ---- Fields ---------------------------------------------------------------------------------------------------
};

} // namespace internal
}  // namespace soc2lidarsid_out

#endif  // SOC2LIDAREXE_INCLUDE_SOC2LIDARSID_OUT_SOC2LIDARSI_OUT_SKELETON_IMPL_INTERFACE_H_

