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
/**        \file  EDRExe/src/amsr/someip_protocol/internal/dataprototype_deserialization/edrsi_in/events/deserializer_OSM2_Bus_EDR_Data.cpp
 *        \brief  SOME/IP protocol deserializer implementation for data prototype '/JICA/Service/Interface/EDRSI_In/OSM2_Bus_EDR_Data
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
#include "amsr/someip_protocol/internal/dataprototype_deserialization/edrsi_in/events/deserializer_OSM2_Bus_EDR_Data.h"
#include "amsr/someip_protocol/internal/datatype_deserialization/AsyALgtReqRngForCmft1VccIDT/deserializer_AsyALgtReqRngForCmft1VccIDT.h"
#include "amsr/someip_protocol/internal/datatype_deserialization/AsyLineLe2Pah2IDT/deserializer_AsyLineLe2Pah2IDT.h"
#include "amsr/someip_protocol/internal/datatype_deserialization/AsyLineLe2PahIDT/deserializer_AsyLineLe2PahIDT.h"
#include "amsr/someip_protocol/internal/datatype_deserialization/AsyLineLePah2IDT/deserializer_AsyLineLePah2IDT.h"
#include "amsr/someip_protocol/internal/datatype_deserialization/AsyLineLePahIDT/deserializer_AsyLineLePahIDT.h"
#include "amsr/someip_protocol/internal/datatype_deserialization/AsyLineRi2Pah2IDT/deserializer_AsyLineRi2Pah2IDT.h"
#include "amsr/someip_protocol/internal/datatype_deserialization/AsyLineRi2PahIDT/deserializer_AsyLineRi2PahIDT.h"
#include "amsr/someip_protocol/internal/datatype_deserialization/AsyLineRiPah2IDT/deserializer_AsyLineRiPah2IDT.h"
#include "amsr/someip_protocol/internal/datatype_deserialization/AsyLineRiPahIDT/deserializer_AsyLineRiPahIDT.h"
#include "amsr/someip_protocol/internal/datatype_deserialization/AsyObjForBigData0IDT/deserializer_AsyObjForBigData0IDT.h"
#include "amsr/someip_protocol/internal/datatype_deserialization/AsyObjForBigData1IDT/deserializer_AsyObjForBigData1IDT.h"
#include "amsr/someip_protocol/internal/datatype_deserialization/AsyObjForBigData2IDT/deserializer_AsyObjForBigData2IDT.h"
#include "amsr/someip_protocol/internal/datatype_deserialization/BiasedPosnFromSatlt1FGIDT/deserializer_BiasedPosnFromSatlt1FGIDT.h"
#include "amsr/someip_protocol/internal/datatype_deserialization/BrkSysCylPMstRec1VccIDT/deserializer_BrkSysCylPMstRec1VccIDT.h"
#include "amsr/someip_protocol/internal/datatype_deserialization/DrvrPrsntSts0IDT/deserializer_DrvrPrsntSts0IDT.h"
#include "amsr/someip_protocol/internal/datatype_deserialization/DrvrSteerWhlHldGroup0IDT/deserializer_DrvrSteerWhlHldGroup0IDT.h"
#include "amsr/someip_protocol/internal/datatype_deserialization/EDRDataGroupIDT/deserializer_EDRDataGroupIDT.h"
#include "amsr/someip_protocol/internal/datatype_deserialization/FricEstimnFromVehDyn1VccIDT/deserializer_FricEstimnFromVehDyn1VccIDT.h"
#include "amsr/someip_protocol/internal/datatype_deserialization/LppLeadPntEDRIDT/deserializer_LppLeadPntEDRIDT.h"
#include "amsr/someip_protocol/internal/datatype_deserialization/LppPathSelectEDRIDT/deserializer_LppPathSelectEDRIDT.h"
#include "amsr/someip_protocol/internal/datatype_deserialization/ObjFrnt1VccIDT/deserializer_ObjFrnt1VccIDT.h"
#include "amsr/someip_protocol/internal/datatype_deserialization/PosnFromSatlt1VccIDT/deserializer_PosnFromSatlt1VccIDT.h"
#include "amsr/someip_protocol/internal/datatype_deserialization/ReSideRdrLeObj1IDT/deserializer_ReSideRdrLeObj1IDT.h"
#include "amsr/someip_protocol/internal/datatype_deserialization/ReSideRdrRiObj1IDT/deserializer_ReSideRdrRiObj1IDT.h"
#include "amsr/someip_protocol/internal/datatype_deserialization/RoadIncln1IDT/deserializer_RoadIncln1IDT.h"
#include "amsr/someip_protocol/internal/datatype_deserialization/SftyDecelGroupSafeIDT/deserializer_SftyDecelGroupSafeIDT.h"
#include "amsr/someip_protocol/internal/datatype_deserialization/SftySigGroupFromHmiSafe1IDT/deserializer_SftySigGroupFromHmiSafe1IDT.h"
#include "amsr/someip_protocol/internal/datatype_deserialization/SteerExtFctStsRec1VccIDT/deserializer_SteerExtFctStsRec1VccIDT.h"

namespace amsr {
namespace someip_protocol {
namespace internal {
namespace dataprototype_deserializer {
namespace edrsi_in {
namespace events {

deserialization::Result DeserializerOSM2_Bus_EDR_Data::Deserialize(deserialization::Reader &reader, ::EDRDataGroupIDT::EDRDataGroupIDT &data) noexcept {
  // Transformation properties parameter pack for data prototype /JICA/Service/Interface/EDRSI_In/OSM2_Bus_EDR_Data
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
        // Config of struct length field (/CppImplementationDataTypes/EDRDataGroupIDT)
      internal::LengthSize<deserialization::Tp<TpPackAlias>::kSizeOfStructLengthField, typename deserialization::Tp<TpPackAlias>::ByteOrder>

      >(deserialization::SizeToken<::EDRDataGroupIDT::EDRDataGroupIDT>{})};

  deserialization::Result result{reader.VerifySize(static_size)};
  if (result) {
    // Deserialize byte stream
    result = deserialization::SomeIpProtocolDeserialize<
      TpPackAlias,
      // Config of struct length field (/CppImplementationDataTypes/EDRDataGroupIDT)
      internal::LengthSize<deserialization::Tp<TpPackAlias>::kSizeOfStructLengthField, typename deserialization::Tp<TpPackAlias>::ByteOrder>

      >(reader, data);
  }

  return result;
}

}  // namespace events
}  // namespace edrsi_in
}  // namespace dataprototype_deserializer
}  // namespace internal
}  // namespace someip_protocol
}  // namespace amsr

