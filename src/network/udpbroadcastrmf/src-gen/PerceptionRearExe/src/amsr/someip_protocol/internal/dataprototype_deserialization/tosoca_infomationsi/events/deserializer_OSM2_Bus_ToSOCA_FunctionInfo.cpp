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
/**        \file  PerceptionRearExe/src/amsr/someip_protocol/internal/dataprototype_deserialization/tosoca_infomationsi/events/deserializer_OSM2_Bus_ToSOCA_FunctionInfo.cpp
 *        \brief  SOME/IP protocol deserializer implementation for data prototype '/JICA/Service/Interface/ToSOCA_InfomationSI/OSM2_Bus_ToSOCA_FunctionInfo
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
#include "amsr/someip_protocol/internal/dataprototype_deserialization/tosoca_infomationsi/events/deserializer_OSM2_Bus_ToSOCA_FunctionInfo.h"
#include "amsr/someip_protocol/internal/datatype_deserialization/AccTarSeln1RecIDT/deserializer_AccTarSeln1RecIDT.h"
#include "amsr/someip_protocol/internal/datatype_deserialization/CamSts1IDT/deserializer_CamSts1IDT.h"
#include "amsr/someip_protocol/internal/datatype_deserialization/LppLaneChgStsIDT/deserializer_LppLaneChgStsIDT.h"
#include "amsr/someip_protocol/internal/datatype_deserialization/TjaTrailBusIDT/deserializer_TjaTrailBusIDT.h"
#include "amsr/someip_protocol/internal/datatype_deserialization/ToSOCA_FunctionInfo1VCCIDT/deserializer_ToSOCA_FunctionInfo1VCCIDT.h"

namespace amsr {
namespace someip_protocol {
namespace internal {
namespace dataprototype_deserializer {
namespace tosoca_infomationsi {
namespace events {

deserialization::Result DeserializerOSM2_Bus_ToSOCA_FunctionInfo::Deserialize(deserialization::Reader &reader, ::ToSOCA_FunctionInfo1VCCIDT::ToSOCA_FunctionInfo1VCCIDT &data) noexcept {
  // Transformation properties parameter pack for data prototype /JICA/Service/Interface/ToSOCA_InfomationSI/OSM2_Bus_ToSOCA_FunctionInfo
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
        // Config of struct length field (/CppImplementationDataTypes/ToSOCA_FunctionInfo1VCCIDT)
      internal::LengthSize<deserialization::Tp<TpPackAlias>::kSizeOfStructLengthField, typename deserialization::Tp<TpPackAlias>::ByteOrder>

      >(deserialization::SizeToken<::ToSOCA_FunctionInfo1VCCIDT::ToSOCA_FunctionInfo1VCCIDT>{})};

  deserialization::Result result{reader.VerifySize(static_size)};
  if (result) {
    // Deserialize byte stream
    result = deserialization::SomeIpProtocolDeserialize<
      TpPackAlias,
      // Config of struct length field (/CppImplementationDataTypes/ToSOCA_FunctionInfo1VCCIDT)
      internal::LengthSize<deserialization::Tp<TpPackAlias>::kSizeOfStructLengthField, typename deserialization::Tp<TpPackAlias>::ByteOrder>

      >(reader, data);
  }

  return result;
}

}  // namespace events
}  // namespace tosoca_infomationsi
}  // namespace dataprototype_deserializer
}  // namespace internal
}  // namespace someip_protocol
}  // namespace amsr

