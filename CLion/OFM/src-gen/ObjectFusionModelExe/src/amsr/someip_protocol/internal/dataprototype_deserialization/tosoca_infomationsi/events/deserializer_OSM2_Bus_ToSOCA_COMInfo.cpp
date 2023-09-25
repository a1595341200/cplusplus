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
/**        \file  ObjectFusionModelExe/src/amsr/someip_protocol/internal/dataprototype_deserialization/tosoca_infomationsi/events/deserializer_OSM2_Bus_ToSOCA_COMInfo.cpp
 *        \brief  SOME/IP protocol deserializer implementation for data prototype '/JICA/Service/Interface/ToSOCA_InfomationSI/OSM2_Bus_ToSOCA_COMInfo
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
#include "amsr/someip_protocol/internal/dataprototype_deserialization/tosoca_infomationsi/events/deserializer_OSM2_Bus_ToSOCA_COMInfo.h"
#include "amsr/someip_protocol/internal/datatype_deserialization/ALgtStdFromWhlSpdSafe1Chkd/deserializer_ALgtStdFromWhlSpdSafe1Chkd.h"
#include "amsr/someip_protocol/internal/datatype_deserialization/AccFusnTrfcReq/deserializer_AccFusnTrfcReq.h"
#include "amsr/someip_protocol/internal/datatype_deserialization/AccrPedlPsd0/deserializer_AccrPedlPsd0.h"
#include "amsr/someip_protocol/internal/datatype_deserialization/AmbTRaw/deserializer_AmbTRaw.h"
#include "amsr/someip_protocol/internal/datatype_deserialization/AsyDataWithCmpSafe1Chkd/deserializer_AsyDataWithCmpSafe1Chkd.h"
#include "amsr/someip_protocol/internal/datatype_deserialization/BltLockStFrnt/deserializer_BltLockStFrnt.h"
#include "amsr/someip_protocol/internal/datatype_deserialization/BrkPedlPsdRec/deserializer_BrkPedlPsdRec.h"
#include "amsr/someip_protocol/internal/datatype_deserialization/EgoMotion/deserializer_EgoMotion.h"
#include "amsr/someip_protocol/internal/datatype_deserialization/IndcrTurnReq/deserializer_IndcrTurnReq.h"
#include "amsr/someip_protocol/internal/datatype_deserialization/PinionSteerAgGroup/deserializer_PinionSteerAgGroup.h"
#include "amsr/someip_protocol/internal/datatype_deserialization/RoadSgnInfoActv0/deserializer_RoadSgnInfoActv0.h"
#include "amsr/someip_protocol/internal/datatype_deserialization/SpdAlrmActvForRoadSgnInfo0/deserializer_SpdAlrmActvForRoadSgnInfo0.h"
#include "amsr/someip_protocol/internal/datatype_deserialization/SteerWhlSnsrSafe1/deserializer_SteerWhlSnsrSafe1.h"
#include "amsr/someip_protocol/internal/datatype_deserialization/ToSOCA_COMInfo1VCC/deserializer_ToSOCA_COMInfo1VCC.h"
#include "amsr/someip_protocol/internal/datatype_deserialization/TrfcLiActvSts/deserializer_TrfcLiActvSts.h"
#include "amsr/someip_protocol/internal/datatype_deserialization/TrsmParkLockd/deserializer_TrsmParkLockd.h"
#include "amsr/someip_protocol/internal/datatype_deserialization/VehBattU1Vcc/deserializer_VehBattU1Vcc.h"
#include "amsr/someip_protocol/internal/datatype_deserialization/VehMNomRecsts_1/deserializer_VehMNomRecsts_1.h"
#include "amsr/someip_protocol/internal/datatype_deserialization/VehModMngtGlbSafe1/deserializer_VehModMngtGlbSafe1.h"
#include "amsr/someip_protocol/internal/datatype_deserialization/VehMtnStSafeGroup1/deserializer_VehMtnStSafeGroup1.h"
#include "amsr/someip_protocol/internal/datatype_deserialization/VehSpdIndcd1/deserializer_VehSpdIndcd1.h"
#include "amsr/someip_protocol/internal/datatype_deserialization/VehSpdLgtSafe1Chkd/deserializer_VehSpdLgtSafe1Chkd.h"
#include "amsr/someip_protocol/internal/datatype_deserialization/Vin1Vcc/deserializer_Vin1Vcc.h"
#include "amsr/someip_protocol/internal/datatype_deserialization/WhlInfoGroup/deserializer_WhlInfoGroup.h"
#include "amsr/someip_protocol/internal/datatype_deserialization/WipgInfoGroup/deserializer_WipgInfoGroup.h"

namespace amsr {
namespace someip_protocol {
namespace internal {
namespace dataprototype_deserializer {
namespace tosoca_infomationsi {
namespace events {

deserialization::Result DeserializerOSM2_Bus_ToSOCA_COMInfo::Deserialize(deserialization::Reader &reader, ::ToSOCA_COMInfo1VCC::ToSOCA_COMInfo1VCC &data) {
  // Transformation properties parameter pack for data prototype /JICA/Service/Interface/ToSOCA_InfomationSI/OSM2_Bus_ToSOCA_COMInfo
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
        // Config of struct length field (/CppImplementationDataTypes/ToSOCA_COMInfo1VCC)
      deserialization::LengthSize<deserialization::Tp<TpPackAlias>::kSizeOfStructLengthField, typename deserialization::Tp<TpPackAlias>::ByteOrder>

      >(deserialization::SizeToken<::ToSOCA_COMInfo1VCC::ToSOCA_COMInfo1VCC>{})};

  deserialization::Result result{reader.VerifySize(static_size)};
  if (result) {
    // Deserialize byte stream
    result = deserialization::SomeIpProtocolDeserialize<
      TpPackAlias,
      // Config of struct length field (/CppImplementationDataTypes/ToSOCA_COMInfo1VCC)
      deserialization::LengthSize<deserialization::Tp<TpPackAlias>::kSizeOfStructLengthField, typename deserialization::Tp<TpPackAlias>::ByteOrder>

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

