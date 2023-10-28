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
/**        \file  ObjectFusionModelExe/src/amsr/someip_protocol/internal/dataprototype_deserialization/perceptionsidesi_out/events/deserializer_PerceptionSide_Bus_CameraStatus.cpp
 *        \brief  SOME/IP protocol deserializer implementation for data prototype '/JICA/Service/Interface/PerceptionSideSI_Out/PerceptionSide_Bus_CameraStatus
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
#include "someip-protocol/internal/deserialization/deser_wrapper.h"
#include "amsr/someip_protocol/internal/dataprototype_deserialization/perceptionsidesi_out/events/deserializer_PerceptionSide_Bus_CameraStatus.h"
#include "amsr/someip_protocol/internal/datatype_deserialization/CameraStatusIDT/deserializer_CameraStatusIDT.h"
#include "amsr/someip_protocol/internal/datatype_deserialization/FLCamSts1VccIDT/deserializer_FLCamSts1VccIDT.h"
#include "amsr/someip_protocol/internal/datatype_deserialization/FRCamSts1VccIDT/deserializer_FRCamSts1VccIDT.h"
#include "amsr/someip_protocol/internal/datatype_deserialization/RLCamSts1VccIDT/deserializer_RLCamSts1VccIDT.h"
#include "amsr/someip_protocol/internal/datatype_deserialization/RRCamSts1VccIDT/deserializer_RRCamSts1VccIDT.h"

namespace amsr {
namespace someip_protocol {
namespace internal {
namespace dataprototype_deserializer {
namespace perceptionsidesi_out {
namespace events {

deserialization::Result DeserializerPerceptionSide_Bus_CameraStatus::Deserialize(deserialization::Reader &reader, ::CameraStatusIDT::CameraStatusIDT &data) noexcept {
  // Transformation properties parameter pack for data prototype /JICA/Service/Interface/PerceptionSideSI_Out/PerceptionSide_Bus_CameraStatus
    using TpPackAlias = internal::TpPack<
        BigEndian,
        internal::SizeOfArrayLengthField<0>, 
        internal::SizeOfVectorLengthField<4>,
        internal::SizeOfMapLengthField<4>,
        internal::SizeOfStringLengthField<4>,
        internal::SizeOfStructLengthField<0>,
        internal::SizeOfUnionLengthField<4>,
        internal::SizeOfUnionTypeSelectorField<4>,
        internal::StringBomActive,
        internal::StringNullTerminationActive>;


  // Verify static size
  constexpr std::size_t static_size{deserialization::SomeIpProtocolGetStaticSize<
      TpPackAlias,
        // Config of struct length field (/CppImplementationDataTypes/CameraStatusIDT)
      internal::LengthSize<deserialization::Tp<TpPackAlias>::kSizeOfStructLengthField, typename deserialization::Tp<TpPackAlias>::ByteOrder>

      >(deserialization::SizeToken<::CameraStatusIDT::CameraStatusIDT>{})};

  deserialization::Result result{reader.VerifySize(static_size)};
  if (result) {
    // Deserialize byte stream
    result = deserialization::SomeIpProtocolDeserialize<
      TpPackAlias,
      // Config of struct length field (/CppImplementationDataTypes/CameraStatusIDT)
      internal::LengthSize<deserialization::Tp<TpPackAlias>::kSizeOfStructLengthField, typename deserialization::Tp<TpPackAlias>::ByteOrder>

      >(reader, data);
  }

  return result;
}

}  // namespace events
}  // namespace perceptionsidesi_out
}  // namespace dataprototype_deserializer
}  // namespace internal
}  // namespace someip_protocol
}  // namespace amsr

