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
/**        \file  PerceptionExe/include/perceptionsi_out/PerceptionSI_Out_skeleton_impl_interface.h
 *        \brief  Skeleton implementation interface of service 'PerceptionSI_Out'.
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

#ifndef PERCEPTIONEXE_INCLUDE_PERCEPTIONSI_OUT_PERCEPTIONSI_OUT_SKELETON_IMPL_INTERFACE_H_
#define PERCEPTIONEXE_INCLUDE_PERCEPTIONSI_OUT_PERCEPTIONSI_OUT_SKELETON_IMPL_INTERFACE_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include "amsr/socal/internal/events/skeleton_event_manager_interface.h"
#include "perceptionsi_out/perceptionsi_out_common.h"

namespace perceptionsi_out {
namespace internal {

/*!
 * \brief Skeleton implementation interface of service 'PerceptionSI_Out'
 */
class PerceptionSI_OutSkeletonImplInterface {
 public:
  /*!
   * \brief Use default destructor
   */
  virtual ~PerceptionSI_OutSkeletonImplInterface() noexcept = default;

  // ---- Events ---------------------------------------------------------------------------------------------------

  /*!
   * \brief Get the event manager object for the service event 'FrntCam_Bus_RoadSign'.
   * \details Event sample type: ::RoadSigns::RoadSigns.
   * \return A binding-specific event management object/interface supporting event transmission.
   * \pre -
   * \context App
   */
  virtual ::amsr::socal::internal::events::SkeletonEventManagerInterface<::RoadSigns::RoadSigns>* GetEventManagerFrntCam_Bus_RoadSign() noexcept = 0;

  /*!
   * \brief Get the event manager object for the service event 'FrntCam_Bus_TrfcSign'.
   * \details Event sample type: ::TrfcSigns::TrfcSigns.
   * \return A binding-specific event management object/interface supporting event transmission.
   * \pre -
   * \context App
   */
  virtual ::amsr::socal::internal::events::SkeletonEventManagerInterface<::TrfcSigns::TrfcSigns>* GetEventManagerFrntCam_Bus_TrfcSign() noexcept = 0;

  /*!
   * \brief Get the event manager object for the service event 'FrntCam_Bus_StopLine'.
   * \details Event sample type: ::StopLine::StopLine.
   * \return A binding-specific event management object/interface supporting event transmission.
   * \pre -
   * \context App
   */
  virtual ::amsr::socal::internal::events::SkeletonEventManagerInterface<::StopLine::StopLine>* GetEventManagerFrntCam_Bus_StopLine() noexcept = 0;

  /*!
   * \brief Get the event manager object for the service event 'FrntCam_Bus_Crosswalk'.
   * \details Event sample type: ::Crosswalk::Crosswalk.
   * \return A binding-specific event management object/interface supporting event transmission.
   * \pre -
   * \context App
   */
  virtual ::amsr::socal::internal::events::SkeletonEventManagerInterface<::Crosswalk::Crosswalk>* GetEventManagerFrntCam_Bus_Crosswalk() noexcept = 0;

  /*!
   * \brief Get the event manager object for the service event 'FrntCam_Bus_TrfcLi'.
   * \details Event sample type: ::TrfcLi1Vccs::TrfcLi1Vccs.
   * \return A binding-specific event management object/interface supporting event transmission.
   * \pre -
   * \context App
   */
  virtual ::amsr::socal::internal::events::SkeletonEventManagerInterface<::TrfcLi1Vccs::TrfcLi1Vccs>* GetEventManagerFrntCam_Bus_TrfcLi() noexcept = 0;

  /*!
   * \brief Get the event manager object for the service event 'FrntCam_Bus_ExtInfo'.
   * \details Event sample type: ::ExtInfo::ExtInfo.
   * \return A binding-specific event management object/interface supporting event transmission.
   * \pre -
   * \context App
   */
  virtual ::amsr::socal::internal::events::SkeletonEventManagerInterface<::ExtInfo::ExtInfo>* GetEventManagerFrntCam_Bus_ExtInfo() noexcept = 0;

  /*!
   * \brief Get the event manager object for the service event 'FrntCam_Bus_LsrObj'.
   * \details Event sample type: ::LsrObj::LsrObj.
   * \return A binding-specific event management object/interface supporting event transmission.
   * \pre -
   * \context App
   */
  virtual ::amsr::socal::internal::events::SkeletonEventManagerInterface<::LsrObj::LsrObj>* GetEventManagerFrntCam_Bus_LsrObj() noexcept = 0;

  // ---- Fields ---------------------------------------------------------------------------------------------------
};

} // namespace internal
}  // namespace perceptionsi_out

#endif  // PERCEPTIONEXE_INCLUDE_PERCEPTIONSI_OUT_PERCEPTIONSI_OUT_SKELETON_IMPL_INTERFACE_H_

