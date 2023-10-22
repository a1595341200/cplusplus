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
/**        \file  LocalizationFusionExe/src/amsr/someip_protocol/internal/dataprototype_deserialization/perceptionsi_laneout/events/deserializer_FrntCam_Bus_RoadEdgeRi.cpp
 *        \brief  SOME/IP protocol deserializer implementation for data prototype '/JICA/Service/Interface/PerceptionSI_LaneOut/FrntCam_Bus_RoadEdgeRi
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
#include "amsr/someip_protocol/internal/dataprototype_deserialization/perceptionsi_laneout/events/deserializer_FrntCam_Bus_RoadEdgeRi.h"
#include "amsr/someip_protocol/internal/datatype_deserialization/RoadEdge1VccRi/deserializer_RoadEdge1VccRi.h"

namespace amsr {
namespace someip_protocol {
namespace internal {
namespace dataprototype_deserializer {
namespace perceptionsi_laneout {
namespace events {

deserialization::Result DeserializerFrntCam_Bus_RoadEdgeRi::Deserialize(deserialization::Reader &reader, ::RoadEdge1VccRi::RoadEdge1VccRi &data) {
  // Transformation properties parameter pack for data prototype /JICA/Service/Interface/PerceptionSI_LaneOut/FrntCam_Bus_RoadEdgeRi
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
        // Config of struct length field (/CppImplementationDataTypes/RoadEdge1VccRi)
      deserialization::LengthSize<deserialization::Tp<TpPackAlias>::kSizeOfStructLengthField, typename deserialization::Tp<TpPackAlias>::ByteOrder>

      >(deserialization::SizeToken<::RoadEdge1VccRi::RoadEdge1VccRi>{})};

  deserialization::Result result{reader.VerifySize(static_size)};
  if (result) {
    // Deserialize byte stream
    result = deserialization::SomeIpProtocolDeserialize<
      TpPackAlias,
      // Config of struct length field (/CppImplementationDataTypes/RoadEdge1VccRi)
      deserialization::LengthSize<deserialization::Tp<TpPackAlias>::kSizeOfStructLengthField, typename deserialization::Tp<TpPackAlias>::ByteOrder>

      >(reader, data);
  }

  return result;
}

}  // namespace events
}  // namespace perceptionsi_laneout
}  // namespace dataprototype_deserializer
}  // namespace internal
}  // namespace someip_protocol
}  // namespace amsr
