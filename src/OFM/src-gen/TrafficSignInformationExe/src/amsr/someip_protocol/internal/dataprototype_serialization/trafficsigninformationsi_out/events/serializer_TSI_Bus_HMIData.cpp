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
/**        \file  TrafficSignInformationExe/src/amsr/someip_protocol/internal/dataprototype_serialization/trafficsigninformationsi_out/events/serializer_TSI_Bus_HMIData.cpp
 *        \brief  SOME/IP protocol serializer implementation for data prototype '/JICA/Service/Interface/TrafficSignInformationSI_Out/TSI_Bus_HMIData
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

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include "someip-protocol/internal/serialization/ser_wrapper.h"

#include "amsr/someip_protocol/internal/dataprototype_serialization/trafficsigninformationsi_out/events/serializer_TSI_Bus_HMIData.h"
#include "amsr/someip_protocol/internal/datatype_serialization/TsiHmiData1Vcc/serializer_TsiHmiData1Vcc.h"
#include "ara/log/logging.h"

namespace amsr {
namespace someip_protocol {
namespace internal {
namespace dataprototype_serializer {
namespace trafficsigninformationsi_out {
namespace events {

void SerializerTSI_Bus_HMIData::Serialize(serialization::Writer
&writer, ::TsiHmiData1Vcc::TsiHmiData1Vcc const &data) {
  // Serialize byte stream
  serialization::SomeIpProtocolSerialize<
      TpPackDataPrototype,
      // Config of struct length field (/CppImplementationDataTypes/TsiHmiData1Vcc)
      serialization::LengthSize<serialization::Tp<TpPackDataPrototype>::kSizeOfStructLengthField, typename serialization::Tp<TpPackDataPrototype>::ByteOrder>

      >(writer, data);
}

}  // namespace events
}  // namespace trafficsigninformationsi_out
}  // namespace dataprototype_serializer
}  // namespace internal
}  // namespace someip_protocol
}  // namespace amsr
