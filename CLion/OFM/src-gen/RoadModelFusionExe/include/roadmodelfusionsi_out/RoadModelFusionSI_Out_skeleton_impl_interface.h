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
/**        \file  RoadModelFusionExe/include/roadmodelfusionsi_out/RoadModelFusionSI_Out_skeleton_impl_interface.h
 *        \brief  Skeleton implementation interface of service 'RoadModelFusionSI_Out'.
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

#ifndef ROADMODELFUSIONEXE_INCLUDE_ROADMODELFUSIONSI_OUT_ROADMODELFUSIONSI_OUT_SKELETON_IMPL_INTERFACE_H_
#define ROADMODELFUSIONEXE_INCLUDE_ROADMODELFUSIONSI_OUT_ROADMODELFUSIONSI_OUT_SKELETON_IMPL_INTERFACE_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include "amsr/socal/internal/events/skeleton_event_manager_interface.h"
#include "roadmodelfusionsi_out/roadmodelfusionsi_out_common.h"

namespace roadmodelfusionsi_out {
namespace internal {

/*!
 * \brief Skeleton implementation interface of service 'RoadModelFusionSI_Out'
 */
class RoadModelFusionSI_OutSkeletonImplInterface {
 public:
  /*!
   * \brief Use default destructor
   */
  virtual ~RoadModelFusionSI_OutSkeletonImplInterface() noexcept = default;

  // ---- Events ---------------------------------------------------------------------------------------------------

  /*!
   * \brief Get the event manager object for the service event 'RMF_Bus_ExtractedMapInf'.
   * \details Event sample type: ::ExtractedMapInf::ExtractedMapInf.
   * \return A binding-specific event management object/interface supporting event transmission.
   * \pre -
   * \context App
   */
  virtual ::amsr::socal::internal::events::SkeletonEventManagerInterface<::ExtractedMapInf::ExtractedMapInf>* GetEventManagerRMF_Bus_ExtractedMapInf() noexcept = 0;

  /*!
   * \brief Get the event manager object for the service event 'RMF_Bus_RefPathGlobal'.
   * \details Event sample type: ::RefPathGlobals::RefPathGlobals.
   * \return A binding-specific event management object/interface supporting event transmission.
   * \pre -
   * \context App
   */
  virtual ::amsr::socal::internal::events::SkeletonEventManagerInterface<::RefPathGlobals::RefPathGlobals>* GetEventManagerRMF_Bus_RefPathGlobal() noexcept = 0;

  /*!
   * \brief Get the event manager object for the service event 'RMF_Bus_LaneModel'.
   * \details Event sample type: ::ExtractedLanes::ExtractedLanes.
   * \return A binding-specific event management object/interface supporting event transmission.
   * \pre -
   * \context App
   */
  virtual ::amsr::socal::internal::events::SkeletonEventManagerInterface<::ExtractedLanes::ExtractedLanes>* GetEventManagerRMF_Bus_LaneModel() noexcept = 0;

  /*!
   * \brief Get the event manager object for the service event 'RMF_Bus_RefLineSpeedInf'.
   * \details Event sample type: ::RefLineSpeedInf::RefLineSpeedInf.
   * \return A binding-specific event management object/interface supporting event transmission.
   * \pre -
   * \context App
   */
  virtual ::amsr::socal::internal::events::SkeletonEventManagerInterface<::RefLineSpeedInf::RefLineSpeedInf>* GetEventManagerRMF_Bus_RefLineSpeedInf() noexcept = 0;

  /*!
   * \brief Get the event manager object for the service event 'RMF_Bus_RefLinePoints'.
   * \details Event sample type: ::BusRefLinePoints::BusRefLinePoints.
   * \return A binding-specific event management object/interface supporting event transmission.
   * \pre -
   * \context App
   */
  virtual ::amsr::socal::internal::events::SkeletonEventManagerInterface<::BusRefLinePoints::BusRefLinePoints>* GetEventManagerRMF_Bus_RefLinePoints() noexcept = 0;

  /*!
   * \brief Get the event manager object for the service event 'RMF_Bus_MapOdd'.
   * \details Event sample type: ::MapOdd::MapOdd.
   * \return A binding-specific event management object/interface supporting event transmission.
   * \pre -
   * \context App
   */
  virtual ::amsr::socal::internal::events::SkeletonEventManagerInterface<::MapOdd::MapOdd>* GetEventManagerRMF_Bus_MapOdd() noexcept = 0;

  // ---- Fields ---------------------------------------------------------------------------------------------------
};

} // namespace internal
}  // namespace roadmodelfusionsi_out

#endif  // ROADMODELFUSIONEXE_INCLUDE_ROADMODELFUSIONSI_OUT_ROADMODELFUSIONSI_OUT_SKELETON_IMPL_INTERFACE_H_

