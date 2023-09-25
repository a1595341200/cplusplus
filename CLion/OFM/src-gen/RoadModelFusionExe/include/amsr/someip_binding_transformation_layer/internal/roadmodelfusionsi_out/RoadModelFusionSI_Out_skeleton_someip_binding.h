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
/**        \file  RoadModelFusionExe/include/amsr/someip_binding_transformation_layer/internal/roadmodelfusionsi_out/RoadModelFusionSI_Out_skeleton_someip_binding.h
 *        \brief  SOME/IP binding of service skeleton for service 'RoadModelFusionSI_Out'
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

#ifndef ROADMODELFUSIONEXE_INCLUDE_AMSR_SOMEIP_BINDING_TRANSFORMATION_LAYER_INTERNAL_ROADMODELFUSIONSI_OUT_ROADMODELFUSIONSI_OUT_SKELETON_SOMEIP_BINDING_H_
#define ROADMODELFUSIONEXE_INCLUDE_AMSR_SOMEIP_BINDING_TRANSFORMATION_LAYER_INTERNAL_ROADMODELFUSIONSI_OUT_ROADMODELFUSIONSI_OUT_SKELETON_SOMEIP_BINDING_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include "amsr/someip_binding_transformation_layer/internal/roadmodelfusionsi_out/RoadModelFusionSI_Out_skeleton_someip_event_manager.h"
#include "amsr/someip_binding_transformation_layer/internal/roadmodelfusionsi_out/RoadModelFusionSI_Out_skeleton_someip_methods.h"
#include "roadmodelfusionsi_out/RoadModelFusionSI_Out_skeleton_impl_interface.h"
#include "roadmodelfusionsi_out/roadmodelfusionsi_out_skeleton.h"
#include "someip_binding/internal/server_interface.h"
#include "someip_binding/internal/server_manager_interface.h"

namespace amsr {
namespace someip_binding_transformation_layer {
namespace internal {

namespace roadmodelfusionsi_out {

/*!
 * \brief SOME/IP skeleton binding of Service 'RoadModelFusionSI_Out'.
 * \details Handles serialization and deserialization of all method calls, events, etc.
 * \remark generated
 */
class RoadModelFusionSI_OutSkeletonSomeIpBinding final :
    public ::roadmodelfusionsi_out::internal::RoadModelFusionSI_OutSkeletonImplInterface,
    public ::amsr::someip_binding::internal::ServerInterface {
 public:
  /*!
   * \brief Type alias for used skeleton frontend.
   */
  using SkeletonFrontend = ::roadmodelfusionsi_out::skeleton::RoadModelFusionSI_OutSkeleton;
  /*!
   * \brief Generated SOME/IP related service ID.
   */
  static constexpr ::amsr::someip_protocol::internal::ServiceId kServiceId{0x30U};

  /*!
   * \brief SOME/IP major version of this service interface deployment.
   */
  static constexpr ::amsr::someip_protocol::internal::MajorVersion kMajorVersion{1U};

  /*!
   * \brief Constructor of RoadModelFusionSI_OutSkeletonSomeIpBinding.
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
  RoadModelFusionSI_OutSkeletonSomeIpBinding(::amsr::someip_protocol::internal::InstanceId const instance_id,
                                                         ::amsr::someip_binding::internal::ServerManagerInterface& someip_binding_server_manager,
                                                         ::roadmodelfusionsi_out::skeleton::RoadModelFusionSI_OutSkeleton& skeleton);

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
  ~RoadModelFusionSI_OutSkeletonSomeIpBinding() noexcept override  = default;

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
   * \brief Get the event manager object for the SOME/IP binding service event 'RMF_Bus_ExtractedMapInf'.
   * \details Event sample type: ::ExtractedMapInf::ExtractedMapInf.
   * \return The SOME/IP binding specific event management object/interface supporting event transmission.
   *
   * \pre         -
   * \context     App
   * \threadsafe  FALSE
   * \reentrant   FALSE
   * \synchronous TRUE
   */
  // VECTOR NC AutosarC++17_10-A10.3.3: MD_SOMEIPBINDING_AutosarC++17_10-A10.3.3_no_virtual_functions_in_final_class
  RoadModelFusionSI_OutSkeletonSomeIpEventManagerRMF_Bus_ExtractedMapInf* GetEventManagerRMF_Bus_ExtractedMapInf() noexcept override;

  /*!
   * \brief Get the event manager object for the SOME/IP binding service event 'RMF_Bus_RefPathGlobal'.
   * \details Event sample type: ::RefPathGlobals::RefPathGlobals.
   * \return The SOME/IP binding specific event management object/interface supporting event transmission.
   *
   * \pre         -
   * \context     App
   * \threadsafe  FALSE
   * \reentrant   FALSE
   * \synchronous TRUE
   */
  // VECTOR NC AutosarC++17_10-A10.3.3: MD_SOMEIPBINDING_AutosarC++17_10-A10.3.3_no_virtual_functions_in_final_class
  RoadModelFusionSI_OutSkeletonSomeIpEventManagerRMF_Bus_RefPathGlobal* GetEventManagerRMF_Bus_RefPathGlobal() noexcept override;

  /*!
   * \brief Get the event manager object for the SOME/IP binding service event 'RMF_Bus_LaneModel'.
   * \details Event sample type: ::ExtractedLanes::ExtractedLanes.
   * \return The SOME/IP binding specific event management object/interface supporting event transmission.
   *
   * \pre         -
   * \context     App
   * \threadsafe  FALSE
   * \reentrant   FALSE
   * \synchronous TRUE
   */
  // VECTOR NC AutosarC++17_10-A10.3.3: MD_SOMEIPBINDING_AutosarC++17_10-A10.3.3_no_virtual_functions_in_final_class
  RoadModelFusionSI_OutSkeletonSomeIpEventManagerRMF_Bus_LaneModel* GetEventManagerRMF_Bus_LaneModel() noexcept override;

  /*!
   * \brief Get the event manager object for the SOME/IP binding service event 'RMF_Bus_RefLineSpeedInf'.
   * \details Event sample type: ::RefLineSpeedInf::RefLineSpeedInf.
   * \return The SOME/IP binding specific event management object/interface supporting event transmission.
   *
   * \pre         -
   * \context     App
   * \threadsafe  FALSE
   * \reentrant   FALSE
   * \synchronous TRUE
   */
  // VECTOR NC AutosarC++17_10-A10.3.3: MD_SOMEIPBINDING_AutosarC++17_10-A10.3.3_no_virtual_functions_in_final_class
  RoadModelFusionSI_OutSkeletonSomeIpEventManagerRMF_Bus_RefLineSpeedInf* GetEventManagerRMF_Bus_RefLineSpeedInf() noexcept override;

  /*!
   * \brief Get the event manager object for the SOME/IP binding service event 'RMF_Bus_RefLinePoints'.
   * \details Event sample type: ::BusRefLinePoints::BusRefLinePoints.
   * \return The SOME/IP binding specific event management object/interface supporting event transmission.
   *
   * \pre         -
   * \context     App
   * \threadsafe  FALSE
   * \reentrant   FALSE
   * \synchronous TRUE
   */
  // VECTOR NC AutosarC++17_10-A10.3.3: MD_SOMEIPBINDING_AutosarC++17_10-A10.3.3_no_virtual_functions_in_final_class
  RoadModelFusionSI_OutSkeletonSomeIpEventManagerRMF_Bus_RefLinePoints* GetEventManagerRMF_Bus_RefLinePoints() noexcept override;

  /*!
   * \brief Get the event manager object for the SOME/IP binding service event 'RMF_Bus_MapOdd'.
   * \details Event sample type: ::MapOdd::MapOdd.
   * \return The SOME/IP binding specific event management object/interface supporting event transmission.
   *
   * \pre         -
   * \context     App
   * \threadsafe  FALSE
   * \reentrant   FALSE
   * \synchronous TRUE
   */
  // VECTOR NC AutosarC++17_10-A10.3.3: MD_SOMEIPBINDING_AutosarC++17_10-A10.3.3_no_virtual_functions_in_final_class
  RoadModelFusionSI_OutSkeletonSomeIpEventManagerRMF_Bus_MapOdd* GetEventManagerRMF_Bus_MapOdd() noexcept override;

  // ---- Fields ---------------------------------------------------------------------------------------------------

 private:
  // SOME/IP instance ID offered by this skeleton
  ::amsr::someip_protocol::internal::InstanceId instance_id_;

  // Related SOME/IP binding
  ::amsr::someip_binding::internal::ServerManagerInterface& someip_binding_server_manager_;

  // Reference to the related frontend skeleton
  ::roadmodelfusionsi_out::skeleton::RoadModelFusionSI_OutSkeleton& skeleton_;

  // ---- Methods ------------------------------------------------------------------------------------------

  // ---- Event manager --------------------------------------------------------------------------------------------

  // Event manager for skeleton event 'RMF_Bus_ExtractedMapInf'
  RoadModelFusionSI_OutSkeletonSomeIpEventManagerRMF_Bus_ExtractedMapInf event_manager_RMF_Bus_ExtractedMapInf_;

  // Event manager for skeleton event 'RMF_Bus_RefPathGlobal'
  RoadModelFusionSI_OutSkeletonSomeIpEventManagerRMF_Bus_RefPathGlobal event_manager_RMF_Bus_RefPathGlobal_;

  // Event manager for skeleton event 'RMF_Bus_LaneModel'
  RoadModelFusionSI_OutSkeletonSomeIpEventManagerRMF_Bus_LaneModel event_manager_RMF_Bus_LaneModel_;

  // Event manager for skeleton event 'RMF_Bus_RefLineSpeedInf'
  RoadModelFusionSI_OutSkeletonSomeIpEventManagerRMF_Bus_RefLineSpeedInf event_manager_RMF_Bus_RefLineSpeedInf_;

  // Event manager for skeleton event 'RMF_Bus_RefLinePoints'
  RoadModelFusionSI_OutSkeletonSomeIpEventManagerRMF_Bus_RefLinePoints event_manager_RMF_Bus_RefLinePoints_;

  // Event manager for skeleton event 'RMF_Bus_MapOdd'
  RoadModelFusionSI_OutSkeletonSomeIpEventManagerRMF_Bus_MapOdd event_manager_RMF_Bus_MapOdd_;

  // ---- Field manager --------------------------------------------------------------------------------------------
};

}  // namespace internal
}  // namespace someip_binding_transformation_layer
}  // namespace amsr
}  // namespace roadmodelfusionsi_out

#endif  // ROADMODELFUSIONEXE_INCLUDE_AMSR_SOMEIP_BINDING_TRANSFORMATION_LAYER_INTERNAL_ROADMODELFUSIONSI_OUT_ROADMODELFUSIONSI_OUT_SKELETON_SOMEIP_BINDING_H_

