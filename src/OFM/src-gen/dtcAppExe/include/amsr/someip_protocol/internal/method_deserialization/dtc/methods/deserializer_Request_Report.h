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
/**        \file  dtcAppExe/include/amsr/someip_protocol/internal/method_deserialization/dtc/methods/deserializer_Request_Report.h
 *        \brief  SOME/IP packet deserializer of service 'dtc_Provide'.
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

#ifndef DTCAPPEXE_INCLUDE_AMSR_SOMEIP_PROTOCOL_INTERNAL_METHOD_DESERIALIZATION_DTC_METHODS_deserializer_Request_Report_h_
#define DTCAPPEXE_INCLUDE_AMSR_SOMEIP_PROTOCOL_INTERNAL_METHOD_DESERIALIZATION_DTC_METHODS_deserializer_Request_Report_h_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include "amsr/someip_protocol/internal/dataprototype_deserialization/dtc/methods/deserializer_Reportin_arg.h"
#include "someip-protocol/internal/deserialization/common.h"
#include "someip-protocol/internal/deserialization/reader.h"

namespace amsr {
namespace someip_protocol {
namespace internal {
namespace method_deserializer {
namespace dtc {
namespace methods {

/*!
 * \brief Deserializer for a SOME/IP packet of method '/JICA/Service/Interface/dtc_Provide/Report'
 *        of service interface '/JICA/Service/Interface/dtc_Provide'.
 */
class DeserializerRequestReport final {
 public:
  /*!
   * \brief Deserialize the SOME/IP packet payload of method 'Report'.
   *
   * \tparam Output Type of data structure storing all deserialized in-/output arguments.
   *                Type must support member initializer lists. Typically a struct or a std::tuple is used.
   * \param[in,out] reader Reference to the byte stream reader.
   * \param[out]    output Parameter to store deserialized output.
   * \return        True if the deserialization is successful, false otherwise.
   * \pre           -
   * \context       Reactor|App
   * \threadsafe    FALSE
   * \reentrant     TRUE for different reader objects.
   * \synchronous   TRUE
   */
  template <typename Output>
  static bool Deserialize(deserialization::Reader& reader, Output & output) noexcept {    


    // Deserialize the argument 'in_arg' of type '/AUTOSAR/diag/DtcStruct'

    // VECTOR NC AutosarC++17_10-A7.1.1: MD_SOMEIPPROTOCOL_AutosarC++17_10-A7.1.1_Immutable_Variable_Generation
    bool deserialization_ok{
        dataprototype_deserializer::dtc::methods::DeserializerReportin_arg::Deserialize(
            reader, output.in_arg)};
  // Return deserialization result
  return deserialization_ok;
  }
};

}  // namespace methods
}  // namespace dtc
}  // namespace method_deserializer
}  // namespace internal
}  // namespace someip_protocol
}  // namespace amsr

#endif  // DTCAPPEXE_INCLUDE_AMSR_SOMEIP_PROTOCOL_INTERNAL_METHOD_DESERIALIZATION_DTC_METHODS_deserializer_Request_Report_h_

