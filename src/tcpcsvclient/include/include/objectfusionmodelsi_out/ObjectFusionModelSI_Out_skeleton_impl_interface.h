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
/**        \file  ObjectFusionModelExe/include/objectfusionmodelsi_out/ObjectFusionModelSI_Out_skeleton_impl_interface.h
 *        \brief  Skeleton implementation interface of service 'ObjectFusionModelSI_Out'.
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

#ifndef OBJECTFUSIONMODELEXE_INCLUDE_OBJECTFUSIONMODELSI_OUT_OBJECTFUSIONMODELSI_OUT_SKELETON_IMPL_INTERFACE_H_
#define OBJECTFUSIONMODELEXE_INCLUDE_OBJECTFUSIONMODELSI_OUT_OBJECTFUSIONMODELSI_OUT_SKELETON_IMPL_INTERFACE_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include "amsr/socal/internal/events/skeleton_event_manager_interface.h"
#include "objectfusionmodelsi_out/objectfusionmodelsi_out_common.h"

namespace objectfusionmodelsi_out {
namespace internal {

/*!
 * \brief Skeleton implementation interface of service 'ObjectFusionModelSI_Out'
 */
class ObjectFusionModelSI_OutSkeletonImplInterface {
 public:
  /*!
   * \brief Use default destructor
   */
  virtual ~ObjectFusionModelSI_OutSkeletonImplInterface() noexcept = default;

  // ---- Events ---------------------------------------------------------------------------------------------------

  /*!
   * \brief Get the event manager object for the service event 'OFM_Bus_FusedTargets_11'.
   * \details Event sample type: ::ObjGroup2Vccs_11::ObjGroup2Vccs_11.
   * \return A binding-specific event management object/interface supporting event transmission.
   * \pre -
   * \context App
   */
  virtual ::amsr::socal::internal::events::SkeletonEventManagerInterface<::ObjGroup2Vccs_11::ObjGroup2Vccs_11>* GetEventManagerOFM_Bus_FusedTargets_11() noexcept = 0;

  /*!
   * \brief Get the event manager object for the service event 'OFM_St_SOCFusedSts'.
   * \details Event sample type: ::SOCFusedSts::SOCFusedSts.
   * \return A binding-specific event management object/interface supporting event transmission.
   * \pre -
   * \context App
   */
  virtual ::amsr::socal::internal::events::SkeletonEventManagerInterface<::SOCFusedSts::SOCFusedSts>* GetEventManagerOFM_St_SOCFusedSts() noexcept = 0;

  /*!
   * \brief Get the event manager object for the service event 'OFM_Bus_FourDRadarECUSts'.
   * \details Event sample type: ::FourDRadarECUSts::FourDRadarECUSts.
   * \return A binding-specific event management object/interface supporting event transmission.
   * \pre -
   * \context App
   */
  virtual ::amsr::socal::internal::events::SkeletonEventManagerInterface<::FourDRadarECUSts::FourDRadarECUSts>* GetEventManagerOFM_Bus_FourDRadarECUSts() noexcept = 0;

  /*!
   * \brief Get the event manager object for the service event 'OFM_Bus_FrontFourDRadarSts'.
   * \details Event sample type: ::FrontFourDRadarSts1Vcc::FrontFourDRadarSts1Vcc.
   * \return A binding-specific event management object/interface supporting event transmission.
   * \pre -
   * \context App
   */
  virtual ::amsr::socal::internal::events::SkeletonEventManagerInterface<::FrontFourDRadarSts1Vcc::FrontFourDRadarSts1Vcc>* GetEventManagerOFM_Bus_FrontFourDRadarSts() noexcept = 0;

  /*!
   * \brief Get the event manager object for the service event 'OFM_Bus_FusedTargets_22'.
   * \details Event sample type: ::ObjGroup2Vccs_11::ObjGroup2Vccs_11.
   * \return A binding-specific event management object/interface supporting event transmission.
   * \pre -
   * \context App
   */
  virtual ::amsr::socal::internal::events::SkeletonEventManagerInterface<::ObjGroup2Vccs_11::ObjGroup2Vccs_11>* GetEventManagerOFM_Bus_FusedTargets_22() noexcept = 0;

  /*!
   * \brief Get the event manager object for the service event 'OFM_Bus_FusedTargets_32'.
   * \details Event sample type: ::ObjGroup2Vccs_10::ObjGroup2Vccs_10.
   * \return A binding-specific event management object/interface supporting event transmission.
   * \pre -
   * \context App
   */
  virtual ::amsr::socal::internal::events::SkeletonEventManagerInterface<::ObjGroup2Vccs_10::ObjGroup2Vccs_10>* GetEventManagerOFM_Bus_FusedTargets_32() noexcept = 0;

  /*!
   * \brief Get the event manager object for the service event 'OFM_St_FrntRdrObjE2Efail'.
   * \details Event sample type: ::FrntRdrObjE2Efail::FrntRdrObjE2Efail.
   * \return A binding-specific event management object/interface supporting event transmission.
   * \pre -
   * \context App
   */
  virtual ::amsr::socal::internal::events::SkeletonEventManagerInterface<::FrntRdrObjE2Efail::FrntRdrObjE2Efail>* GetEventManagerOFM_St_FrntRdrObjE2Efail() noexcept = 0;

  /*!
   * \brief Get the event manager object for the service event 'OFM_St_FrntRdrObjTO'.
   * \details Event sample type: ::FrntRdrObjTO::FrntRdrObjTO.
   * \return A binding-specific event management object/interface supporting event transmission.
   * \pre -
   * \context App
   */
  virtual ::amsr::socal::internal::events::SkeletonEventManagerInterface<::FrntRdrObjTO::FrntRdrObjTO>* GetEventManagerOFM_St_FrntRdrObjTO() noexcept = 0;

  // ---- Fields ---------------------------------------------------------------------------------------------------
};

} // namespace internal
}  // namespace objectfusionmodelsi_out

#endif  // OBJECTFUSIONMODELEXE_INCLUDE_OBJECTFUSIONMODELSI_OUT_OBJECTFUSIONMODELSI_OUT_SKELETON_IMPL_INTERFACE_H_

