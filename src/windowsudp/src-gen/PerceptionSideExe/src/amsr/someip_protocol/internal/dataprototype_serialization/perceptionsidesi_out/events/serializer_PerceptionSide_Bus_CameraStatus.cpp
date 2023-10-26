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
/**        \file  PerceptionSideExe/src/amsr/someip_protocol/internal/dataprototype_serialization/perceptionsidesi_out/events/serializer_PerceptionSide_Bus_CameraStatus.cpp
 *        \brief  SOME/IP protocol serializer implementation for data prototype '/JICA/Service/Interface/PerceptionSideSI_Out/PerceptionSide_Bus_CameraStatus
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

#include "amsr/someip_protocol/internal/dataprototype_serialization/perceptionsidesi_out/events/serializer_PerceptionSide_Bus_CameraStatus.h"
#include "amsr/someip_protocol/internal/datatype_serialization/CameraStatusIDT/serializer_CameraStatusIDT.h"
#include "amsr/someip_protocol/internal/datatype_serialization/FLCamSts1VccIDT/serializer_FLCamSts1VccIDT.h"
#include "amsr/someip_protocol/internal/datatype_serialization/FRCamSts1VccIDT/serializer_FRCamSts1VccIDT.h"
#include "amsr/someip_protocol/internal/datatype_serialization/RLCamSts1VccIDT/serializer_RLCamSts1VccIDT.h"
#include "amsr/someip_protocol/internal/datatype_serialization/RRCamSts1VccIDT/serializer_RRCamSts1VccIDT.h"
#include "ara/log/logging.h"

namespace amsr {
namespace someip_protocol {
namespace internal {
namespace dataprototype_serializer {
namespace perceptionsidesi_out {
namespace events {

void SerializerPerceptionSide_Bus_CameraStatus::Serialize(serialization::Writer
&writer, ::CameraStatusIDT::CameraStatusIDT const &data) noexcept {
  // Serialize byte stream
  serialization::SomeIpProtocolSerialize<
      TpPackDataPrototype,
      // Config of struct length field (/CppImplementationDataTypes/CameraStatusIDT)
      internal::LengthSize<serialization::Tp<TpPackDataPrototype>::kSizeOfStructLengthField, typename serialization::Tp<TpPackDataPrototype>::ByteOrder>

      >(writer, data);
}

}  // namespace events
}  // namespace perceptionsidesi_out
}  // namespace dataprototype_serializer
}  // namespace internal
}  // namespace someip_protocol
}  // namespace amsr

