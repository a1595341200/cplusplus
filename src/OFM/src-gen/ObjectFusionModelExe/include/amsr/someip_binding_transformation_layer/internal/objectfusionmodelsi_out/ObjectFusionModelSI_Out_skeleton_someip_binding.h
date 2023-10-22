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
/**        \file  ObjectFusionModelExe/include/amsr/someip_binding_transformation_layer/internal/objectfusionmodelsi_out/ObjectFusionModelSI_Out_skeleton_someip_binding.h
 *        \brief  SOME/IP binding of service skeleton for service 'ObjectFusionModelSI_Out'
 *
 *      \details
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 *  GENERATOR INFORMATION
 *  -------------------------------------------------------------------------------------------------------------------
 *    Generator Name: amsr_someipbinding
 *         Commit ID: 5d8070897bdfaedb620f897381ef230973e3ab64
 *********************************************************************************************************************/

#ifndef OBJECTFUSIONMODELEXE_INCLUDE_AMSR_SOMEIP_BINDING_TRANSFORMATION_LAYER_INTERNAL_OBJECTFUSIONMODELSI_OUT_OBJECTFUSIONMODELSI_OUT_SKELETON_SOMEIP_BINDING_H_
#define OBJECTFUSIONMODELEXE_INCLUDE_AMSR_SOMEIP_BINDING_TRANSFORMATION_LAYER_INTERNAL_OBJECTFUSIONMODELSI_OUT_OBJECTFUSIONMODELSI_OUT_SKELETON_SOMEIP_BINDING_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include "amsr/someip_binding_transformation_layer/internal/objectfusionmodelsi_out/ObjectFusionModelSI_Out_skeleton_someip_event_manager.h"
#include "amsr/someip_binding_transformation_layer/internal/objectfusionmodelsi_out/ObjectFusionModelSI_Out_skeleton_someip_methods.h"
#include "objectfusionmodelsi_out/ObjectFusionModelSI_Out_skeleton_impl_interface.h"
#include "objectfusionmodelsi_out/objectfusionmodelsi_out_skeleton.h"
#include "someip_binding/internal/server_interface.h"
#include "someip_binding/internal/server_manager_interface.h"

namespace amsr {
namespace someip_binding_transformation_layer {
namespace internal {

namespace objectfusionmodelsi_out {

/*!
 * \brief SOME/IP skeleton binding of Service 'ObjectFusionModelSI_Out'.
 * \details Handles serialization and deserialization of all method calls, events, etc.
 * \remark generated
 */
class ObjectFusionModelSI_OutSkeletonSomeIpBinding final :
    public ::objectfusionmodelsi_out::internal::ObjectFusionModelSI_OutSkeletonImplInterface,
    public ::amsr::someip_binding::internal::ServerInterface {
 public:
  /*!
   * \brief Type alias for used skeleton frontend.
   */
  using SkeletonFrontend = ::objectfusionmodelsi_out::skeleton::ObjectFusionModelSI_OutSkeleton;
  /*!
   * \brief Generated SOME/IP related service ID.
   */
  static constexpr ::amsr::someip_protocol::internal::ServiceId kServiceId{0x20U};

  /*!
   * \brief SOME/IP major version of this service interface deployment.
   */
  static constexpr ::amsr::someip_protocol::internal::MajorVersion kMajorVersion{1U};

  /*!
   * \brief Constructor of ObjectFusionModelSI_OutSkeletonSomeIpBinding.
   * \details Constructed when the service is offered.
   *
   * \param[in] instance_id                    SOME/IP service instance ID offered by this skeleton.
   * \param[in] someip_binding_server_manager  Reference to the related SOME/IP transport binding manager.
   * \param[in] skeleton                       Reference to the related frontend skeleton.
   * \pre         -
   * \context     App
   * \threadsafe  FALSE
   * \reentrant   FALSE
   * \synchronous TRUE
   */
  ObjectFusionModelSI_OutSkeletonSomeIpBinding(::amsr::someip_protocol::internal::InstanceId const instance_id,
                                                         ::amsr::someip_binding::internal::ServerManagerInterface& someip_binding_server_manager,
                                                         ::objectfusionmodelsi_out::skeleton::ObjectFusionModelSI_OutSkeleton& skeleton);

  /*!
   * \brief Default destructor must de-register the implementation from the SomeIpBinding.
   * \details Destroyed when the service is stopped.
   * \pre         -
   * \context     App
   * \threadsafe  FALSE
   * \reentrant   FALSE
   * \synchronous TRUE
   */
  // VECTOR NC AutosarC++17_10-A15.5.1: MD_SOMEIPBINDING_AutosarC++17_10-A15.4.2_A15.5.1_A15.5.2_A15.5.3_GoogleTest
  // VECTOR NC AutosarC++17_10-A10.3.3: MD_SOMEIPBINDING_AutosarC++17_10-A10.3.3_no_virtual_functions_in_final_class
  ~ObjectFusionModelSI_OutSkeletonSomeIpBinding() noexcept override  = default;

  /*!
   * \brief Getter for accessing the related frontend skeleton.
   * \pre         -
   * \context     Callback
   * \threadsafe  FALSE
   * \reentrant   FALSE
   * \synchronous TRUE
   */
  // VECTOR Next Line AutosarC++17_10-M9.3.3: MD_SOMEIPBINDING_AutosarC++17_10-M9.3.3_returns_nonconst
  SkeletonFrontend& GetSkeleton() noexcept { return skeleton_; }

  /*!
   * \brief Receive handler for method requests.
   *
   * \param[in] header Deserialized SOME/IP message header.
   * \param[in] packet Serialized SOME/IP Method Request [SOME/IP header + Payload]
   * \pre         -
   * \context     Reactor
   * \threadsafe  FALSE
   * \reentrant   FALSE
   * \synchronous TRUE
   */
  // VECTOR NC AutosarC++17_10-A10.3.3: MD_SOMEIPBINDING_AutosarC++17_10-A10.3.3_no_virtual_functions_in_final_class
  void HandleMethodRequest(::amsr::someip_protocol::internal::SomeIpMessageHeader const& header,
      ::amsr::someip_protocol::internal::SomeIpMessage packet) override;

  /*!
   * \brief Forward a prepared packet to the SomeIpBinding.
   * \param[in] packet the serialized response packet.
   * \pre         -
   * \context     Callback
   * \threadsafe  FALSE
   * \reentrant   FALSE
   * \synchronous TRUE
   */
  void SendMethodResponse(::vac::memory::MemoryBufferPtr<osabstraction::io::MutableIOBuffer> packet);

  /*!
   * \brief Send a SOME/IP error response packet. Used in case of:
   *  - Infrastructural checks failed (protocol version, return code, message type).
   *  - Deserialization failed.
   *  - Serialization of method responses failed.
   *  - Service / Method is not implemented.
   *
   * \tparam ReturnCode The error return code as template parameter to make a compile-time check.
   * \param[in] request_header The unmodified SOME/IP header.
   * \pre         -
   * \context     Reactor
   * \threadsafe  FALSE
   * \reentrant   FALSE
   * \synchronous TRUE
   */
  template <typename ::amsr::someip_protocol::internal::ReturnCode ReturnCode>
  void SendErrorResponse(::amsr::someip_protocol::internal::SomeIpMessageHeader const& request_header) noexcept {
    static_assert((static_cast<::amsr::someip_protocol::internal::SomeIpReturnCode>(ReturnCode) >= ::amsr::someip_protocol::internal::SomeIpReturnCode::kNotOk) &&
                      (static_cast<::amsr::someip_protocol::internal::SomeIpReturnCode>(ReturnCode) <= ::amsr::someip_protocol::internal::SomeIpReturnCode::kRangeServiceErrorsEnd),
                  "Return code for errors must be in the range of 0x01 .. 0x5E.");
    someip_binding_server_manager_.SendErrorResponse(ReturnCode, instance_id_, request_header);
  }

  /*!
   * \brief Send an error response if the SOME/IP request is malformed.
   * \details This method is invoked when the return code of the error response is only known during runtime.
   * \param[in] return_code    The return code to send.
   * \param[in] request_header The header taken from the request.
   * \pre         -
   * \context     Reactor
   * \threadsafe  FALSE
   * \reentrant   FALSE
   * \synchronous TRUE
   */
  void SendErrorResponse(::amsr::someip_protocol::internal::ReturnCode const return_code,
                         ::amsr::someip_protocol::internal::SomeIpMessageHeader const& request_header) {
    someip_binding_server_manager_.SendErrorResponse(return_code, instance_id_, request_header);
  }

  // ---- Events --------------------------------------------------------------------------------------------------- */

  /*!
   * \brief Get the event manager object for the SOME/IP binding service event 'OFM_Bus_FusedTargets_11'.
   * \details Event sample type: ::ObjGroup2Vccs_11::ObjGroup2Vccs_11.
   * \return The SOME/IP binding specific event management object/interface supporting event transmission.
   *
   * \pre         -
   * \context     App
   * \threadsafe  FALSE
   * \reentrant   FALSE
   * \synchronous TRUE
   */
  // VECTOR NC AutosarC++17_10-A10.3.3: MD_SOMEIPBINDING_AutosarC++17_10-A10.3.3_no_virtual_functions_in_final_class
  ObjectFusionModelSI_OutSkeletonSomeIpEventManagerOFM_Bus_FusedTargets_11* GetEventManagerOFM_Bus_FusedTargets_11() noexcept override;

  /*!
   * \brief Get the event manager object for the SOME/IP binding service event 'OFM_St_SOCFusedSts'.
   * \details Event sample type: ::SOCFusedSts::SOCFusedSts.
   * \return The SOME/IP binding specific event management object/interface supporting event transmission.
   *
   * \pre         -
   * \context     App
   * \threadsafe  FALSE
   * \reentrant   FALSE
   * \synchronous TRUE
   */
  // VECTOR NC AutosarC++17_10-A10.3.3: MD_SOMEIPBINDING_AutosarC++17_10-A10.3.3_no_virtual_functions_in_final_class
  ObjectFusionModelSI_OutSkeletonSomeIpEventManagerOFM_St_SOCFusedSts* GetEventManagerOFM_St_SOCFusedSts() noexcept override;

  /*!
   * \brief Get the event manager object for the SOME/IP binding service event 'OFM_Bus_FourDRadarECUSts'.
   * \details Event sample type: ::FourDRadarECUSts::FourDRadarECUSts.
   * \return The SOME/IP binding specific event management object/interface supporting event transmission.
   *
   * \pre         -
   * \context     App
   * \threadsafe  FALSE
   * \reentrant   FALSE
   * \synchronous TRUE
   */
  // VECTOR NC AutosarC++17_10-A10.3.3: MD_SOMEIPBINDING_AutosarC++17_10-A10.3.3_no_virtual_functions_in_final_class
  ObjectFusionModelSI_OutSkeletonSomeIpEventManagerOFM_Bus_FourDRadarECUSts* GetEventManagerOFM_Bus_FourDRadarECUSts() noexcept override;

  /*!
   * \brief Get the event manager object for the SOME/IP binding service event 'OFM_Bus_FrontFourDRadarSts'.
   * \details Event sample type: ::FrontFourDRadarSts1Vcc::FrontFourDRadarSts1Vcc.
   * \return The SOME/IP binding specific event management object/interface supporting event transmission.
   *
   * \pre         -
   * \context     App
   * \threadsafe  FALSE
   * \reentrant   FALSE
   * \synchronous TRUE
   */
  // VECTOR NC AutosarC++17_10-A10.3.3: MD_SOMEIPBINDING_AutosarC++17_10-A10.3.3_no_virtual_functions_in_final_class
  ObjectFusionModelSI_OutSkeletonSomeIpEventManagerOFM_Bus_FrontFourDRadarSts* GetEventManagerOFM_Bus_FrontFourDRadarSts() noexcept override;

  /*!
   * \brief Get the event manager object for the SOME/IP binding service event 'OFM_Bus_FusedTargets_22'.
   * \details Event sample type: ::ObjGroup2Vccs_11::ObjGroup2Vccs_11.
   * \return The SOME/IP binding specific event management object/interface supporting event transmission.
   *
   * \pre         -
   * \context     App
   * \threadsafe  FALSE
   * \reentrant   FALSE
   * \synchronous TRUE
   */
  // VECTOR NC AutosarC++17_10-A10.3.3: MD_SOMEIPBINDING_AutosarC++17_10-A10.3.3_no_virtual_functions_in_final_class
  ObjectFusionModelSI_OutSkeletonSomeIpEventManagerOFM_Bus_FusedTargets_22* GetEventManagerOFM_Bus_FusedTargets_22() noexcept override;

  /*!
   * \brief Get the event manager object for the SOME/IP binding service event 'OFM_Bus_FusedTargets_32'.
   * \details Event sample type: ::ObjGroup2Vccs_10::ObjGroup2Vccs_10.
   * \return The SOME/IP binding specific event management object/interface supporting event transmission.
   *
   * \pre         -
   * \context     App
   * \threadsafe  FALSE
   * \reentrant   FALSE
   * \synchronous TRUE
   */
  // VECTOR NC AutosarC++17_10-A10.3.3: MD_SOMEIPBINDING_AutosarC++17_10-A10.3.3_no_virtual_functions_in_final_class
  ObjectFusionModelSI_OutSkeletonSomeIpEventManagerOFM_Bus_FusedTargets_32* GetEventManagerOFM_Bus_FusedTargets_32() noexcept override;

  /*!
   * \brief Get the event manager object for the SOME/IP binding service event 'OFM_St_FrntRdrObjE2Efail'.
   * \details Event sample type: ::FrntRdrObjE2Efail::FrntRdrObjE2Efail.
   * \return The SOME/IP binding specific event management object/interface supporting event transmission.
   *
   * \pre         -
   * \context     App
   * \threadsafe  FALSE
   * \reentrant   FALSE
   * \synchronous TRUE
   */
  // VECTOR NC AutosarC++17_10-A10.3.3: MD_SOMEIPBINDING_AutosarC++17_10-A10.3.3_no_virtual_functions_in_final_class
  ObjectFusionModelSI_OutSkeletonSomeIpEventManagerOFM_St_FrntRdrObjE2Efail* GetEventManagerOFM_St_FrntRdrObjE2Efail() noexcept override;

  /*!
   * \brief Get the event manager object for the SOME/IP binding service event 'OFM_St_FrntRdrObjTO'.
   * \details Event sample type: ::FrntRdrObjTO::FrntRdrObjTO.
   * \return The SOME/IP binding specific event management object/interface supporting event transmission.
   *
   * \pre         -
   * \context     App
   * \threadsafe  FALSE
   * \reentrant   FALSE
   * \synchronous TRUE
   */
  // VECTOR NC AutosarC++17_10-A10.3.3: MD_SOMEIPBINDING_AutosarC++17_10-A10.3.3_no_virtual_functions_in_final_class
  ObjectFusionModelSI_OutSkeletonSomeIpEventManagerOFM_St_FrntRdrObjTO* GetEventManagerOFM_St_FrntRdrObjTO() noexcept override;

  // ---- Fields ---------------------------------------------------------------------------------------------------

 private:
  // SOME/IP instance ID offered by this skeleton
  ::amsr::someip_protocol::internal::InstanceId instance_id_;

  // Related SOME/IP binding
  ::amsr::someip_binding::internal::ServerManagerInterface& someip_binding_server_manager_;

  // Reference to the related frontend skeleton
  ::objectfusionmodelsi_out::skeleton::ObjectFusionModelSI_OutSkeleton& skeleton_;

  // ---- Methods ------------------------------------------------------------------------------------------

  // ---- Event manager --------------------------------------------------------------------------------------------

  // Event manager for skeleton event 'OFM_Bus_FusedTargets_11'
  ObjectFusionModelSI_OutSkeletonSomeIpEventManagerOFM_Bus_FusedTargets_11 event_manager_OFM_Bus_FusedTargets_11_;

  // Event manager for skeleton event 'OFM_St_SOCFusedSts'
  ObjectFusionModelSI_OutSkeletonSomeIpEventManagerOFM_St_SOCFusedSts event_manager_OFM_St_SOCFusedSts_;

  // Event manager for skeleton event 'OFM_Bus_FourDRadarECUSts'
  ObjectFusionModelSI_OutSkeletonSomeIpEventManagerOFM_Bus_FourDRadarECUSts event_manager_OFM_Bus_FourDRadarECUSts_;

  // Event manager for skeleton event 'OFM_Bus_FrontFourDRadarSts'
  ObjectFusionModelSI_OutSkeletonSomeIpEventManagerOFM_Bus_FrontFourDRadarSts event_manager_OFM_Bus_FrontFourDRadarSts_;

  // Event manager for skeleton event 'OFM_Bus_FusedTargets_22'
  ObjectFusionModelSI_OutSkeletonSomeIpEventManagerOFM_Bus_FusedTargets_22 event_manager_OFM_Bus_FusedTargets_22_;

  // Event manager for skeleton event 'OFM_Bus_FusedTargets_32'
  ObjectFusionModelSI_OutSkeletonSomeIpEventManagerOFM_Bus_FusedTargets_32 event_manager_OFM_Bus_FusedTargets_32_;

  // Event manager for skeleton event 'OFM_St_FrntRdrObjE2Efail'
  ObjectFusionModelSI_OutSkeletonSomeIpEventManagerOFM_St_FrntRdrObjE2Efail event_manager_OFM_St_FrntRdrObjE2Efail_;

  // Event manager for skeleton event 'OFM_St_FrntRdrObjTO'
  ObjectFusionModelSI_OutSkeletonSomeIpEventManagerOFM_St_FrntRdrObjTO event_manager_OFM_St_FrntRdrObjTO_;

  // ---- Field manager --------------------------------------------------------------------------------------------
};

}  // namespace internal
}  // namespace someip_binding_transformation_layer
}  // namespace amsr
}  // namespace objectfusionmodelsi_out

#endif  // OBJECTFUSIONMODELEXE_INCLUDE_AMSR_SOMEIP_BINDING_TRANSFORMATION_LAYER_INTERNAL_OBJECTFUSIONMODELSI_OUT_OBJECTFUSIONMODELSI_OUT_SKELETON_SOMEIP_BINDING_H_

