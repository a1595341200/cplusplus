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
/**        \file  dtcAppExe/include/amsr/someip_protocol/internal/method_serialization/dtc/methods/serializer_Response_Report.h
 *        \brief  SOME/IP packet serializer of service 'dtc_Provide'.
 *
 *      \details
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 *  GENERATOR INFORMATION
 *  -------------------------------------------------------------------------------------------------------------------
 *    Generator Name: amsr_someipprotocol
 *         Commit ID: 3fd8aac035abb6fb6709609fe09ab84fd0e635d8
 *********************************************************************************************************************/

#ifndef DTCAPPEXE_INCLUDE_AMSR_SOMEIP_PROTOCOL_INTERNAL_METHOD_SERIALIZATION_DTC_METHODS_serializer_Response_Report_h_
#define DTCAPPEXE_INCLUDE_AMSR_SOMEIP_PROTOCOL_INTERNAL_METHOD_SERIALIZATION_DTC_METHODS_serializer_Response_Report_h_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include "amsr/someip_protocol/internal/dataprototype_serialization/dtc/methods/serializer_Reportout_arg.h"
#include "ara/log/logging.h"
#include "osabstraction/io/io_buffer.h"
#include "someip-protocol/internal/serialization/ser_common.h"
#include "someip-protocol/internal/serialization/writer.h"
#include "vac/memory/memory_buffer.h"

namespace amsr {
namespace someip_protocol {
namespace internal {
namespace method_serializer {
namespace dtc {
namespace methods {

/*!
 * \brief Serializer for a SOME/IP packet of method '/JICA/Service/Interface/dtc_Provide/Report'
 *        of service interface '/JICA/Service/Interface/dtc_Provide'.
 */
class SerializerResponseOkReport final {
 public:

  /*!
   * \brief Type alias for the concrete memory buffer type.
   */
   using BufferPtrType = ::vac::memory::MemoryBufferPtr<osabstraction::io::MutableIOBuffer>;

  /*!
   * \brief Returns the required buffer size to serialize the SOME/IP packet payload of method 'Report'.
   *
   * \tparam      Input Type of data structure storing all in-/output arguments to be serialized.
   *              Type must support member initializer lists. Typically a struct or a std::tuple is used.
   * \param[in]   input Parameter to serialize.
   * \return      Calculated buffer size for serialization.
   * \pre         -
   * \context     Reactor|App
   * \threadsafe  FALSE
   * \reentrant   FALSE
   * \synchronous TRUE
   */
  template <typename Input>
  constexpr static std::size_t GetRequiredBufferSize(Input const& input) noexcept {
    std::size_t required_buffer_size{0};


    // Get required buffer size for the argument 'out_arg' of type '/AUTOSAR/StdTypes/int32_t'
    required_buffer_size += dataprototype_serializer::dtc::methods::SerializerReportout_arg::GetRequiredBufferSize(
        input.out_arg);

    return required_buffer_size;
  }

  /*!
   * \brief Serialize the SOME/IP packet payload of method 'Report'.
   *
   * \tparam Input Type of data structure storing all in-/output arguments to be serialized.
   *         Type must support member initializer lists. Typically a struct or a std::tuple is used.
   * \param[out] logger Reference to the logger used for logging during serialization.
   * \param[in, out] writer Reference to the byte stream writer.
   * \param[in] input Parameter to serialize.
   */
  template <typename Input>
  static void Serialize(ara::log::Logger& logger, serialization::Writer& writer, Input const& input) noexcept {

    // Serialize the argument 'out_arg' of type '/AUTOSAR/StdTypes/int32_t'
    dataprototype_serializer::dtc::methods::SerializerReportout_arg::Serialize(
        writer, input.out_arg);

    logger.LogDebug([](ara::log::LogStream& s) { s << "Serializer done."; }, __func__, __LINE__);
  }
};

}  // namespace methods
}  // namespace dtc
}  // namespace method_serializer
}  // namespace internal
}  // namespace someip_protocol
}  // namespace amsr

#endif  // DTCAPPEXE_INCLUDE_AMSR_SOMEIP_PROTOCOL_INTERNAL_METHOD_SERIALIZATION_DTC_METHODS_serializer_Response_Report_h_

