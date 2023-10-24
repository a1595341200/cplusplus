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
/**        \file  TrafficSignInformationExe/src/amsr/someip_protocol/internal/dataprototype_deserialization/perceptionsi_out/events/deserializer_Perception_Bus_LaneInfo.cpp
 *        \brief  SOME/IP protocol deserializer implementation for data prototype '/JICA/Service/Interface/PerceptionSI_Out/Perception_Bus_LaneInfo
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
#include "amsr/someip_protocol/internal/dataprototype_deserialization/perceptionsi_out/events/deserializer_Perception_Bus_LaneInfo.h"
#include "amsr/someip_protocol/internal/datatype_deserialization/LaneEventCam1IDT/deserializer_LaneEventCam1IDT.h"
#include "amsr/someip_protocol/internal/datatype_deserialization/LaneEventGroupCam1VccIDT/deserializer_LaneEventGroupCam1VccIDT.h"
#include "amsr/someip_protocol/internal/datatype_deserialization/LaneMkrCam1LeIDT/deserializer_LaneMkrCam1LeIDT.h"
#include "amsr/someip_protocol/internal/datatype_deserialization/LaneMkrCam1RiIDT/deserializer_LaneMkrCam1RiIDT.h"
#include "amsr/someip_protocol/internal/datatype_deserialization/LaneMkrCam1SecClsLeIDT/deserializer_LaneMkrCam1SecClsLeIDT.h"
#include "amsr/someip_protocol/internal/datatype_deserialization/LaneMkrCam1SecClsRiIDT/deserializer_LaneMkrCam1SecClsRiIDT.h"
#include "amsr/someip_protocol/internal/datatype_deserialization/LaneMkrTempCam1VccIDT/deserializer_LaneMkrTempCam1VccIDT.h"
#include "amsr/someip_protocol/internal/datatype_deserialization/PerceptionLaneInfoIDT/deserializer_PerceptionLaneInfoIDT.h"
#include "amsr/someip_protocol/internal/datatype_deserialization/RoadEdge1VccLeIDT/deserializer_RoadEdge1VccLeIDT.h"
#include "amsr/someip_protocol/internal/datatype_deserialization/RoadEdge1VccRiIDT/deserializer_RoadEdge1VccRiIDT.h"

namespace amsr {
namespace someip_protocol {
namespace internal {
namespace dataprototype_deserializer {
namespace perceptionsi_out {
namespace events {

deserialization::Result DeserializerPerception_Bus_LaneInfo::Deserialize(deserialization::Reader &reader, ::PerceptionLaneInfoIDT::PerceptionLaneInfoIDT &data) noexcept {
  // Transformation properties parameter pack for data prototype /JICA/Service/Interface/PerceptionSI_Out/Perception_Bus_LaneInfo
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
        // Config of struct length field (/CppImplementationDataTypes/PerceptionLaneInfoIDT)
      internal::LengthSize<deserialization::Tp<TpPackAlias>::kSizeOfStructLengthField, typename deserialization::Tp<TpPackAlias>::ByteOrder>

      >(deserialization::SizeToken<::PerceptionLaneInfoIDT::PerceptionLaneInfoIDT>{})};

  deserialization::Result result{reader.VerifySize(static_size)};
  if (result) {
    // Deserialize byte stream
    result = deserialization::SomeIpProtocolDeserialize<
      TpPackAlias,
      // Config of struct length field (/CppImplementationDataTypes/PerceptionLaneInfoIDT)
      internal::LengthSize<deserialization::Tp<TpPackAlias>::kSizeOfStructLengthField, typename deserialization::Tp<TpPackAlias>::ByteOrder>

      >(reader, data);
  }

  return result;
}

}  // namespace events
}  // namespace perceptionsi_out
}  // namespace dataprototype_deserializer
}  // namespace internal
}  // namespace someip_protocol
}  // namespace amsr

