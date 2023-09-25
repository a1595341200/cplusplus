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
/**        \file  EHRExe/include/ehrsi_out/EHRSI_Out_skeleton_impl_interface.h
 *        \brief  Skeleton implementation interface of service 'EHRSI_Out'.
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

#ifndef EHREXE_INCLUDE_EHRSI_OUT_EHRSI_OUT_SKELETON_IMPL_INTERFACE_H_
#define EHREXE_INCLUDE_EHRSI_OUT_EHRSI_OUT_SKELETON_IMPL_INTERFACE_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include "amsr/socal/internal/events/skeleton_event_manager_interface.h"
#include "ehrsi_out/ehrsi_out_common.h"

namespace ehrsi_out {
namespace internal {

/*!
 * \brief Skeleton implementation interface of service 'EHRSI_Out'
 */
class EHRSI_OutSkeletonImplInterface {
 public:
  /*!
   * \brief Use default destructor
   */
  virtual ~EHRSI_OutSkeletonImplInterface() noexcept = default;

  // ---- Events ---------------------------------------------------------------------------------------------------

  /*!
   * \brief Get the event manager object for the service event 'EHR_Bus_NOAInfo'.
   * \details Event sample type: ::NOAInfo::NOAInfo.
   * \return A binding-specific event management object/interface supporting event transmission.
   * \pre -
   * \context App
   */
  virtual ::amsr::socal::internal::events::SkeletonEventManagerInterface<::NOAInfo::NOAInfo>* GetEventManagerEHR_Bus_NOAInfo() noexcept = 0;

  /*!
   * \brief Get the event manager object for the service event 'EHR_Bus_LaneConnectivitys'.
   * \details Event sample type: ::LaneConnectivitys::LaneConnectivitys.
   * \return A binding-specific event management object/interface supporting event transmission.
   * \pre -
   * \context App
   */
  virtual ::amsr::socal::internal::events::SkeletonEventManagerInterface<::LaneConnectivitys::LaneConnectivitys>* GetEventManagerEHR_Bus_LaneConnectivitys() noexcept = 0;

  /*!
   * \brief Get the event manager object for the service event 'EHR_Bus_Nodes'.
   * \details Event sample type: ::Nodes::Nodes.
   * \return A binding-specific event management object/interface supporting event transmission.
   * \pre -
   * \context App
   */
  virtual ::amsr::socal::internal::events::SkeletonEventManagerInterface<::Nodes::Nodes>* GetEventManagerEHR_Bus_Nodes() noexcept = 0;

  /*!
   * \brief Get the event manager object for the service event 'EHR_Bus_TrafficSigns'.
   * \details Event sample type: ::TrafficSigns::TrafficSigns.
   * \return A binding-specific event management object/interface supporting event transmission.
   * \pre -
   * \context App
   */
  virtual ::amsr::socal::internal::events::SkeletonEventManagerInterface<::TrafficSigns::TrafficSigns>* GetEventManagerEHR_Bus_TrafficSigns() noexcept = 0;

  /*!
   * \brief Get the event manager object for the service event 'EHR_Bus_GeoFences'.
   * \details Event sample type: ::GeoFences::GeoFences.
   * \return A binding-specific event management object/interface supporting event transmission.
   * \pre -
   * \context App
   */
  virtual ::amsr::socal::internal::events::SkeletonEventManagerInterface<::GeoFences::GeoFences>* GetEventManagerEHR_Bus_GeoFences() noexcept = 0;

  /*!
   * \brief Get the event manager object for the service event 'EHR_Bus_LinkCurvatures'.
   * \details Event sample type: ::LinkCurvatures::LinkCurvatures.
   * \return A binding-specific event management object/interface supporting event transmission.
   * \pre -
   * \context App
   */
  virtual ::amsr::socal::internal::events::SkeletonEventManagerInterface<::LinkCurvatures::LinkCurvatures>* GetEventManagerEHR_Bus_LinkCurvatures() noexcept = 0;

  /*!
   * \brief Get the event manager object for the service event 'EHR_Bus_LinkSlopes'.
   * \details Event sample type: ::LinkSlopes::LinkSlopes.
   * \return A binding-specific event management object/interface supporting event transmission.
   * \pre -
   * \context App
   */
  virtual ::amsr::socal::internal::events::SkeletonEventManagerInterface<::LinkSlopes::LinkSlopes>* GetEventManagerEHR_Bus_LinkSlopes() noexcept = 0;

  /*!
   * \brief Get the event manager object for the service event 'EHR_Bus_LaneSpeedLimits'.
   * \details Event sample type: ::LaneSpeedLimits::LaneSpeedLimits.
   * \return A binding-specific event management object/interface supporting event transmission.
   * \pre -
   * \context App
   */
  virtual ::amsr::socal::internal::events::SkeletonEventManagerInterface<::LaneSpeedLimits::LaneSpeedLimits>* GetEventManagerEHR_Bus_LaneSpeedLimits() noexcept = 0;

  /*!
   * \brief Get the event manager object for the service event 'EHR_Bus_LinkInfos'.
   * \details Event sample type: ::LinkInfos::LinkInfos.
   * \return A binding-specific event management object/interface supporting event transmission.
   * \pre -
   * \context App
   */
  virtual ::amsr::socal::internal::events::SkeletonEventManagerInterface<::LinkInfos::LinkInfos>* GetEventManagerEHR_Bus_LinkInfos() noexcept = 0;

  /*!
   * \brief Get the event manager object for the service event 'EHR_Bus_MergePoints'.
   * \details Event sample type: ::AllMergePoints::AllMergePoints.
   * \return A binding-specific event management object/interface supporting event transmission.
   * \pre -
   * \context App
   */
  virtual ::amsr::socal::internal::events::SkeletonEventManagerInterface<::AllMergePoints::AllMergePoints>* GetEventManagerEHR_Bus_MergePoints() noexcept = 0;

  /*!
   * \brief Get the event manager object for the service event 'EHR_Bus_GeofennceJudge'.
   * \details Event sample type: ::GeofennceJudge::GeofennceJudge.
   * \return A binding-specific event management object/interface supporting event transmission.
   * \pre -
   * \context App
   */
  virtual ::amsr::socal::internal::events::SkeletonEventManagerInterface<::GeofennceJudge::GeofennceJudge>* GetEventManagerEHR_Bus_GeofennceJudge() noexcept = 0;

  // ---- Fields ---------------------------------------------------------------------------------------------------
};

} // namespace internal
}  // namespace ehrsi_out

#endif  // EHREXE_INCLUDE_EHRSI_OUT_EHRSI_OUT_SKELETON_IMPL_INTERFACE_H_

