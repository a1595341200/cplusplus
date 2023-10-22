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
/**        \file  dtcAppExe/include/amsr/someip_binding_transformation_layer/internal/dtc/dtc_Provide_skeleton_someip_methods.h
 *        \brief  SOME/IP skeleton method de- /serialization handling for methods and field methods of service 'dtc_Provide'
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

#ifndef DTCAPPEXE_INCLUDE_AMSR_SOMEIP_BINDING_TRANSFORMATION_LAYER_INTERNAL_DTC_DTC_PROVIDE_SKELETON_SOMEIP_METHODS_H_
#define DTCAPPEXE_INCLUDE_AMSR_SOMEIP_BINDING_TRANSFORMATION_LAYER_INTERNAL_DTC_DTC_PROVIDE_SKELETON_SOMEIP_METHODS_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include <memory>
#include "amsr/someip_protocol/internal/method_deserialization/dtc/methods/deserializer_Request_Report.h"
#include "amsr/someip_protocol/internal/method_serialization/dtc/methods/serializer_Response_Report.h"
#include "ara/core/result.h"
#include "dtc/dtc_Provide_types.h"
#include "dtc/dtc_provide_skeleton.h"
#include "osabstraction/io/io_buffer.h"
#include "someip-protocol/internal/message.h"
#include "someip_binding_transformation_layer/internal/methods/skeleton_method_manager.h"
#include "someip_binding_transformation_layer/internal/methods/skeleton_response_handler.h"
#include "vac/container/c_string_view.h"

namespace amsr {
namespace someip_binding_transformation_layer {
namespace internal {
namespace dtc {

// Forward-declaration for back-reference
class dtc_ProvideSkeletonSomeIpBinding;


namespace methods {

/*!
 * \brief Forward-declaration for back-reference
 */
class SkeletonReportAsyncRequest;

namespace report {

// VECTOR NC AutosarC++17_10-M7.3.6, VectorC++-V5.0.1: MD_SOMEIPBINDING_AutosarC++17_10-M7.3.6_using_directive
// VECTOR NC AutosarC++17_10-M7.3.4, VectorC++-V5.0.1: MD_SOMEIPBINDING_AutosarC++17_10-M7.3.4_using_directive
using namespace vac::container::literals;  // NOLINT(build/namespaces)

/*!
 * \brief Struct combining all required types/values for creating the method manager.
 *
 * \remark generated
 */
struct SkeletonConfiguration final {

/*!
 * \brief Method name string.
 */
static constexpr vac::container::CStringView kName{"Report"_sv};

/*!
 * \brief Method Id.
 */
static constexpr ::amsr::someip_protocol::internal::MethodId kMethodId{0x500CU};

/*!
 * \brief Skeleton SomeIp Binding.
 */
using SkeletonSomeIpBinding = dtc_ProvideSkeletonSomeIpBinding;

/*!
 * \brief Method Input struct.
 */
using Input = ::dtc::internal::methods::Report::Input;

/*!
 * \brief Async request type.
 */
using AsyncRequest = SkeletonReportAsyncRequest;

/*!
 * \brief Method Request deserializer.
 */
using MethodRequestDeserializer = ::amsr::someip_protocol::internal::method_deserializer::dtc::methods::DeserializerRequestReport;

/*!
 * \brief Method response serializer.
 */
using MethodResponseSerializer = ::amsr::someip_protocol::internal::method_serializer::dtc::methods::SerializerResponseOkReport;
};

/*!
 * \brief Method manager configuration class.
 *
 * \remark generated
 */
using SkeletonReportConfiguration = ::amsr::someip_binding_transformation_layer::internal::methods::SkeletonMethodManagerConfiguration<SkeletonConfiguration::kMethodId, SkeletonConfiguration::SkeletonSomeIpBinding, SkeletonConfiguration::Input, SkeletonConfiguration::AsyncRequest, SkeletonConfiguration::MethodRequestDeserializer>;

} // namespace report

/*!
 * \brief SOME/IP Skeleton method class for method 'Report'.
 * \details Handles SOME/IP de-/serialization.
 * \remark generated
 */
using SkeletonReport = ::amsr::someip_binding_transformation_layer::internal::methods::SkeletonMethodManager<report::SkeletonReportConfiguration>;

/*!
 * \brief For each method request a task of this type is assembled and is passed to the skeleton's frontend,
 *        where it is being executed asynchronously according to the chosen processing mode.
 */
class SkeletonReportAsyncRequest : public ::amsr::socal::internal::PendingRequest {
 public:
  /*!
   * \brief At initialization store all relevant information, to be able to invoke the method call
   *        and route the response to the binding-related part again.
   * \param[in] skeleton A pointer to the skeleton frontend for calling the concrete method asynchronously in a separate
   *                     worker thread.
   * \param[in] skeleton_method A pointer to the skeleton method class needed to send the response after processing the
   *                            method request.
   * \param[in] header The SOME/IP header which must be stored for a possible response
   *                   (in case this method is not fire & forget).
   * \param[in] packet Serialized Method Request [SOME/IP Header + Payload].
   * \pre -
   * \context     Reactor
   * \threadsafe  FALSE
   * \reentrant   FALSE
   * \synchronous TRUE
   */
  SkeletonReportAsyncRequest(::dtc::skeleton::dtc_ProvideSkeleton* skeleton,
      SkeletonReport& skeleton_method,
      ::amsr::someip_protocol::internal::SomeIpMessageHeader const& header,
      ::vac::memory::MemoryBufferPtr<osabstraction::io::MutableIOBuffer> packet)
      : ::amsr::socal::internal::PendingRequest{skeleton},
        skeleton_{skeleton},
        response_handler_{skeleton_method},
        header_{header},
        packet_{std::move(packet)} {}

  /*!
   * \brief   Operator gets called when method invocation is planned in the frontend.
   * \details It shall be called only once for each instance.
   * \pre -
   * \context     Callback
   * \threadsafe  FALSE
   * \reentrant   FALSE
   * \synchronous TRUE
   *
   */
  void operator()() override {
    // VECTOR Next Line AutosarC++17_10-A18.5.8: MD_SOMEIPBINDING_AutosarC++17_10-A18.5.8_Local_object_allocated_in_the_heap
    std::unique_ptr<Input> const input{std::make_unique<Input>()};
    bool const deserialization_ok{DeserializeInput(packet_.get(), *input)};
    if (deserialization_ok) {
    ::dtc::DtcStruct const& arg_in_arg{input->in_arg};

    ara::core::Result<::dtc::internal::methods::Report::Output> result{skeleton_->Report(arg_in_arg).GetResult()};
    if (result.HasValue()) {
      response_handler_.SerializeAndSendMethodResponse<Serializer>(header_, result.Value());
    } else {
      response_handler_.SerializeAndSendApplicationErrorMethodResponse(header_, result.Error());
    }
    } else { // Deserialization failed
      response_handler_.SendErrorResponse(header_,
                                          static_cast<::amsr::someip_protocol::internal::ReturnCode>(::amsr::someip_protocol::internal::SomeIpReturnCode::kMalformedMessage));
    }
  }

 private:
  /*!
   * \brief Serialization class of the method response.
   */
  using Serializer = report::SkeletonConfiguration::MethodResponseSerializer;

  /*!
   * \brief Pointer to the skeleton to invoke the method request call.
   */
  using Input = report::SkeletonConfiguration::Input;

  /*!
   * \brief Deserialization class of the method request.
   */
  using Deserializer = report::SkeletonConfiguration::MethodRequestDeserializer;

  /*!
   * \brief Deserialize the given method request.
   * \param[in]  serialized_sample  Serialized SOME/IP Method Request [SOME/IP header + Payload].
   * \param[out] input              The deserialized method request arguments will be written into this param.
   * \return     true               If the deserialization succeeded.
   *             false              If an error occurred during deserialization.
   * \pre -
   * \context     Callback
   * \threadsafe  FALSE
   * \reentrant   FALSE
   * \synchronous TRUE
   */
  inline static bool DeserializeInput(::vac::memory::MemoryBuffer<osabstraction::io::MutableIOBuffer> const* serialized_sample,
                                      Input& input) {
    // Prepare Reader
    ::vac::memory::MemoryBuffer<osabstraction::io::MutableIOBuffer>::MemoryBufferView packet_view{serialized_sample->GetView(0U)};
    ::amsr::someip_protocol::internal::deserialization::BufferView const body_view{
        // VECTOR Next Line AutosarC++17_10-M5.2.8:MD_SOMEIPBINDING_AutosarC++17_10-M5.2.8_conv_from_voidp
        static_cast<std::uint8_t*>(packet_view[0U].base_pointer), serialized_sample->size()};

    // Skip the header
    ::amsr::someip_protocol::internal::deserialization::BufferView const buffer_view{body_view.subspan(
        ::amsr::someip_protocol::internal::kHeaderSize, body_view.size() - ::amsr::someip_protocol::internal::kHeaderSize)};

    // Deserialize Payload
    ::amsr::someip_protocol::internal::deserialization::Reader reader{buffer_view};
    return Deserializer::Deserialize(reader, input);
  }

  /*!
   * \brief Pointer to the skeleton to invoke the method request call.
   */
  ::dtc::skeleton::dtc_ProvideSkeleton* skeleton_;

  /*!
   * \brief Binding-related handler to serialize and send a response right after the method call.
   */
  ::amsr::someip_binding_transformation_layer::internal::methods::SkeletonResponseHandler<SkeletonReport> response_handler_;

  /*!
   * \brief Buffer the SOME/IP header from the request for the response with the corresponding client ID and session ID.
   */
  ::amsr::someip_protocol::internal::SomeIpMessageHeader const header_;

  /*!
   * \brief Serialized Method Request [SOME/IP Header + Payload].
   */
  ::vac::memory::MemoryBufferPtr<osabstraction::io::MutableIOBuffer> packet_;
};


}  // namespace methods


}  // namespace internal
}  // namespace someip_binding_transformation_layer
}  // namespace amsr
}  // namespace dtc

#endif  // DTCAPPEXE_INCLUDE_AMSR_SOMEIP_BINDING_TRANSFORMATION_LAYER_INTERNAL_DTC_DTC_PROVIDE_SKELETON_SOMEIP_METHODS_H_

