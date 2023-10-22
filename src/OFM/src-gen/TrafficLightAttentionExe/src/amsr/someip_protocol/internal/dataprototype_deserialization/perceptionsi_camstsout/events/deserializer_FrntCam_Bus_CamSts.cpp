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
/**        \file  TrafficLightAttentionExe/src/amsr/someip_protocol/internal/dataprototype_deserialization/perceptionsi_camstsout/events/deserializer_FrntCam_Bus_CamSts.cpp
 *        \brief  SOME/IP protocol deserializer implementation for data prototype '/JICA/Service/Interface/PerceptionSI_CamStsOut/FrntCam_Bus_CamSts
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
#include "someip-protocol/internal/deserialization/deser_wrapper.h"
#include "amsr/someip_protocol/internal/dataprototype_deserialization/perceptionsi_camstsout/events/deserializer_FrntCam_Bus_CamSts.h"
#include "amsr/someip_protocol/internal/datatype_deserialization/CamSts1Vcc/deserializer_CamSts1Vcc.h"

namespace amsr {
namespace someip_protocol {
namespace internal {
namespace dataprototype_deserializer {
namespace perceptionsi_camstsout {
namespace events {

deserialization::Result DeserializerFrntCam_Bus_CamSts::Deserialize(deserialization::Reader &reader, ::CamSts1Vcc::CamSts1Vcc &data) {
  // Transformation properties parameter pack for data prototype /JICA/Service/Interface/PerceptionSI_CamStsOut/FrntCam_Bus_CamSts
    using TpPackAlias = deserialization::TpPack<
        BigEndian,
        deserialization::SizeOfArrayLengthField<0>, 
        deserialization::SizeOfVectorLengthField<4>,
        deserialization::SizeOfMapLengthField<4>,
        deserialization::SizeOfStringLengthField<4>,
        deserialization::SizeOfStructLengthField<0>,
        deserialization::SizeOfUnionLengthField<4>,
        deserialization::SizeOfUnionTypeSelectorField<4>,
        deserialization::StringBomActive,
        deserialization::StringNullTerminationActive>;


  // Verify static size
  constexpr std::size_t static_size{deserialization::SomeIpProtocolGetStaticSize<
      TpPackAlias,
        // Config of struct length field (/CppImplementationDataTypes/CamSts1Vcc)
      deserialization::LengthSize<deserialization::Tp<TpPackAlias>::kSizeOfStructLengthField, typename deserialization::Tp<TpPackAlias>::ByteOrder>

      >(deserialization::SizeToken<::CamSts1Vcc::CamSts1Vcc>{})};

  deserialization::Result result{reader.VerifySize(static_size)};
  if (result) {
    // Deserialize byte stream
    result = deserialization::SomeIpProtocolDeserialize<
      TpPackAlias,
      // Config of struct length field (/CppImplementationDataTypes/CamSts1Vcc)
      deserialization::LengthSize<deserialization::Tp<TpPackAlias>::kSizeOfStructLengthField, typename deserialization::Tp<TpPackAlias>::ByteOrder>

      >(reader, data);
  }

  return result;
}

}  // namespace events
}  // namespace perceptionsi_camstsout
}  // namespace dataprototype_deserializer
}  // namespace internal
}  // namespace someip_protocol
}  // namespace amsr
