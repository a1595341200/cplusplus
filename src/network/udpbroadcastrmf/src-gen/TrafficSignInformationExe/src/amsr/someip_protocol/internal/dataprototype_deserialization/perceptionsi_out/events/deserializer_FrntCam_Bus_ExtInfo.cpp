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
/**        \file  TrafficSignInformationExe/src/amsr/someip_protocol/internal/dataprototype_deserialization/perceptionsi_out/events/deserializer_FrntCam_Bus_ExtInfo.cpp
 *        \brief  SOME/IP protocol deserializer implementation for data prototype '/JICA/Service/Interface/PerceptionSI_Out/FrntCam_Bus_ExtInfo
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
#include "amsr/someip_protocol/internal/dataprototype_deserialization/perceptionsi_out/events/deserializer_FrntCam_Bus_ExtInfo.h"
#include "amsr/someip_protocol/internal/datatype_deserialization/ExtInfoIDT/deserializer_ExtInfoIDT.h"

namespace amsr {
namespace someip_protocol {
namespace internal {
namespace dataprototype_deserializer {
namespace perceptionsi_out {
namespace events {

deserialization::Result DeserializerFrntCam_Bus_ExtInfo::Deserialize(deserialization::Reader &reader, ::ExtInfoIDT::ExtInfoIDT &data) noexcept {
  // Transformation properties parameter pack for data prototype /JICA/Service/Interface/PerceptionSI_Out/FrntCam_Bus_ExtInfo
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
        // Config of struct length field (/CppImplementationDataTypes/ExtInfoIDT)
      internal::LengthSize<deserialization::Tp<TpPackAlias>::kSizeOfStructLengthField, typename deserialization::Tp<TpPackAlias>::ByteOrder>

      >(deserialization::SizeToken<::ExtInfoIDT::ExtInfoIDT>{})};

  deserialization::Result result{reader.VerifySize(static_size)};
  if (result) {
    // Deserialize byte stream
    result = deserialization::SomeIpProtocolDeserialize<
      TpPackAlias,
      // Config of struct length field (/CppImplementationDataTypes/ExtInfoIDT)
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

