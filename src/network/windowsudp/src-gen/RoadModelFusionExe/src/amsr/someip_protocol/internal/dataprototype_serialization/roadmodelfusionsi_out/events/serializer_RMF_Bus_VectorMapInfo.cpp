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
/**        \file  RoadModelFusionExe/src/amsr/someip_protocol/internal/dataprototype_serialization/roadmodelfusionsi_out/events/serializer_RMF_Bus_VectorMapInfo.cpp
 *        \brief  SOME/IP protocol serializer implementation for data prototype '/JICA/Service/Interface/RoadModelFusionSI_Out/RMF_Bus_VectorMapInfo
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

#include "amsr/someip_protocol/internal/dataprototype_serialization/roadmodelfusionsi_out/events/serializer_RMF_Bus_VectorMapInfo.h"
#include "amsr/someip_protocol/internal/datatype_serialization/AreaIDT/serializer_AreaIDT.h"
#include "amsr/someip_protocol/internal/datatype_serialization/MapInfoNodeIDT/serializer_MapInfoNodeIDT.h"
#include "amsr/someip_protocol/internal/datatype_serialization/VectorMapInfoIDT/serializer_VectorMapInfoIDT.h"
#include "ara/log/logging.h"

namespace amsr {
namespace someip_protocol {
namespace internal {
namespace dataprototype_serializer {
namespace roadmodelfusionsi_out {
namespace events {

void SerializerRMF_Bus_VectorMapInfo::Serialize(serialization::Writer
&writer, ::VectorMapInfoIDT::VectorMapInfoIDT const &data) noexcept {
  // Serialize byte stream
  serialization::SomeIpProtocolSerialize<
      TpPackDataPrototype,
      // Config of struct length field (/CppImplementationDataTypes/VectorMapInfoIDT)
      internal::LengthSize<serialization::Tp<TpPackDataPrototype>::kSizeOfStructLengthField, typename serialization::Tp<TpPackDataPrototype>::ByteOrder>

      >(writer, data);
}

}  // namespace events
}  // namespace roadmodelfusionsi_out
}  // namespace dataprototype_serializer
}  // namespace internal
}  // namespace someip_protocol
}  // namespace amsr

