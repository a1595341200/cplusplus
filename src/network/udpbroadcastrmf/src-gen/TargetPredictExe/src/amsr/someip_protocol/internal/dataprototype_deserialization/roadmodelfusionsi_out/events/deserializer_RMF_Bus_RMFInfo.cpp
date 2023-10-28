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
/**        \file  TargetPredictExe/src/amsr/someip_protocol/internal/dataprototype_deserialization/roadmodelfusionsi_out/events/deserializer_RMF_Bus_RMFInfo.cpp
 *        \brief  SOME/IP protocol deserializer implementation for data prototype '/JICA/Service/Interface/RoadModelFusionSI_Out/RMF_Bus_RMFInfo
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
#include "amsr/someip_protocol/internal/dataprototype_deserialization/roadmodelfusionsi_out/events/deserializer_RMF_Bus_RMFInfo.h"
#include "amsr/someip_protocol/internal/datatype_deserialization/BusRefLinePointIDT/deserializer_BusRefLinePointIDT.h"
#include "amsr/someip_protocol/internal/datatype_deserialization/CenterLineIDT/deserializer_CenterLineIDT.h"
#include "amsr/someip_protocol/internal/datatype_deserialization/ConstructionIDT/deserializer_ConstructionIDT.h"
#include "amsr/someip_protocol/internal/datatype_deserialization/EndPntIDT/deserializer_EndPntIDT.h"
#include "amsr/someip_protocol/internal/datatype_deserialization/ExtractedLaneIDT/deserializer_ExtractedLaneIDT.h"
#include "amsr/someip_protocol/internal/datatype_deserialization/ExtractedMapInfIDT/deserializer_ExtractedMapInfIDT.h"
#include "amsr/someip_protocol/internal/datatype_deserialization/Lane_widthIDT/deserializer_Lane_widthIDT.h"
#include "amsr/someip_protocol/internal/datatype_deserialization/Left_line_delimiterIDT/deserializer_Left_line_delimiterIDT.h"
#include "amsr/someip_protocol/internal/datatype_deserialization/RMFInfoIDT/deserializer_RMFInfoIDT.h"
#include "amsr/someip_protocol/internal/datatype_deserialization/RampIDT/deserializer_RampIDT.h"
#include "amsr/someip_protocol/internal/datatype_deserialization/RefLineSpeedInfIDT/deserializer_RefLineSpeedInfIDT.h"
#include "amsr/someip_protocol/internal/datatype_deserialization/RefPathGlobalIDT/deserializer_RefPathGlobalIDT.h"
#include "amsr/someip_protocol/internal/datatype_deserialization/Right_line_delimiterIDT/deserializer_Right_line_delimiterIDT.h"
#include "amsr/someip_protocol/internal/datatype_deserialization/RoadChangeIDT/deserializer_RoadChangeIDT.h"
#include "amsr/someip_protocol/internal/datatype_deserialization/SpecialSituationIDT/deserializer_SpecialSituationIDT.h"
#include "amsr/someip_protocol/internal/datatype_deserialization/SpeedLimitationIDT/deserializer_SpeedLimitationIDT.h"
#include "amsr/someip_protocol/internal/datatype_deserialization/StartPntIDT/deserializer_StartPntIDT.h"

namespace amsr {
namespace someip_protocol {
namespace internal {
namespace dataprototype_deserializer {
namespace roadmodelfusionsi_out {
namespace events {

deserialization::Result DeserializerRMF_Bus_RMFInfo::Deserialize(deserialization::Reader &reader, ::RMFInfoIDT::RMFInfoIDT &data) noexcept {
  // Transformation properties parameter pack for data prototype /JICA/Service/Interface/RoadModelFusionSI_Out/RMF_Bus_RMFInfo
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
        // Config of struct length field (/CppImplementationDataTypes/RMFInfoIDT)
      internal::LengthSize<deserialization::Tp<TpPackAlias>::kSizeOfStructLengthField, typename deserialization::Tp<TpPackAlias>::ByteOrder>

      >(deserialization::SizeToken<::RMFInfoIDT::RMFInfoIDT>{})};

  deserialization::Result result{reader.VerifySize(static_size)};
  if (result) {
    // Deserialize byte stream
    result = deserialization::SomeIpProtocolDeserialize<
      TpPackAlias,
      // Config of struct length field (/CppImplementationDataTypes/RMFInfoIDT)
      internal::LengthSize<deserialization::Tp<TpPackAlias>::kSizeOfStructLengthField, typename deserialization::Tp<TpPackAlias>::ByteOrder>

      >(reader, data);
  }

  return result;
}

}  // namespace events
}  // namespace roadmodelfusionsi_out
}  // namespace dataprototype_deserializer
}  // namespace internal
}  // namespace someip_protocol
}  // namespace amsr

