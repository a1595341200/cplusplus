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
/**        \file  ObjectFusionModelExe/src/amsr/someip_protocol/internal/dataprototype_serialization/objectfusionmodelsi_out/events/serializer_OFM_Bus_FourDRadarStatus.cpp
 *        \brief  SOME/IP protocol serializer implementation for data prototype '/JICA/Service/Interface/ObjectFusionModelSI_Out/OFM_Bus_FourDRadarStatus
 *
 *      \details
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 *  GENERATOR INFORMATION
 *  -------------------------------------------------------------------------------------------------------------------
 *    Generator Name: amsr_someipprotocol
 *         Commit ID: 1b535f531ca8eaaa17edbe97d022bbf394412553
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include "someip-protocol/internal/serialization/ser_wrapper.h"

#include "amsr/someip_protocol/internal/dataprototype_serialization/objectfusionmodelsi_out/events/serializer_OFM_Bus_FourDRadarStatus.h"
#include "amsr/someip_protocol/internal/datatype_serialization/FourDRadarECUStsIDT/serializer_FourDRadarECUStsIDT.h"
#include "amsr/someip_protocol/internal/datatype_serialization/FourDRadarStatusIDT/serializer_FourDRadarStatusIDT.h"
#include "amsr/someip_protocol/internal/datatype_serialization/FrontFourDRadarSts2VccIDT/serializer_FrontFourDRadarSts2VccIDT.h"
#include "ara/log/logging.h"

namespace amsr {
namespace someip_protocol {
namespace internal {
namespace dataprototype_serializer {
namespace objectfusionmodelsi_out {
namespace events {

void SerializerOFM_Bus_FourDRadarStatus::Serialize(serialization::Writer
&writer, ::FourDRadarStatusIDT::FourDRadarStatusIDT const &data) noexcept {
  // Serialize byte stream
  serialization::SomeIpProtocolSerialize<
      TpPackDataPrototype,
      // Config of struct length field (/CppImplementationDataTypes/FourDRadarStatusIDT)
      internal::LengthSize<serialization::Tp<TpPackDataPrototype>::kSizeOfStructLengthField, typename serialization::Tp<TpPackDataPrototype>::ByteOrder>

      >(writer, data);
}

}  // namespace events
}  // namespace objectfusionmodelsi_out
}  // namespace dataprototype_serializer
}  // namespace internal
}  // namespace someip_protocol
}  // namespace amsr

