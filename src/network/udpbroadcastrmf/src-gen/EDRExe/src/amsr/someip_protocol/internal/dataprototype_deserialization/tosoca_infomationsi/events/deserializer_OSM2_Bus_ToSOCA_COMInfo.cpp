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
/**        \file  EDRExe/src/amsr/someip_protocol/internal/dataprototype_deserialization/tosoca_infomationsi/events/deserializer_OSM2_Bus_ToSOCA_COMInfo.cpp
 *        \brief  SOME/IP protocol deserializer implementation for data prototype '/JICA/Service/Interface/ToSOCA_InfomationSI/OSM2_Bus_ToSOCA_COMInfo
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
#include "amsr/someip_protocol/internal/dataprototype_deserialization/tosoca_infomationsi/events/deserializer_OSM2_Bus_ToSOCA_COMInfo.h"
#include "amsr/someip_protocol/internal/datatype_deserialization/ADModCtrlInhbn1VccIDT/deserializer_ADModCtrlInhbn1VccIDT.h"
#include "amsr/someip_protocol/internal/datatype_deserialization/ALgtStdFromWhlSpdSafe1ChkdIDT/deserializer_ALgtStdFromWhlSpdSafe1ChkdIDT.h"
#include "amsr/someip_protocol/internal/datatype_deserialization/AccFusnTrfcReqIDT/deserializer_AccFusnTrfcReqIDT.h"
#include "amsr/someip_protocol/internal/datatype_deserialization/AccrPedlPsd0IDT/deserializer_AccrPedlPsd0IDT.h"
#include "amsr/someip_protocol/internal/datatype_deserialization/AgDataRaw2Safe1VccIDT/deserializer_AgDataRaw2Safe1VccIDT.h"
#include "amsr/someip_protocol/internal/datatype_deserialization/AmbTRawIDT/deserializer_AmbTRawIDT.h"
#include "amsr/someip_protocol/internal/datatype_deserialization/AsyDataWithCmpSafe1ChkdIDT/deserializer_AsyDataWithCmpSafe1ChkdIDT.h"
#include "amsr/someip_protocol/internal/datatype_deserialization/BltLockStFrntIDT/deserializer_BltLockStFrntIDT.h"
#include "amsr/someip_protocol/internal/datatype_deserialization/BrkPedlPsdRecIDT/deserializer_BrkPedlPsdRecIDT.h"
#include "amsr/someip_protocol/internal/datatype_deserialization/BrkPedlrRatIDT/deserializer_BrkPedlrRatIDT.h"
#include "amsr/someip_protocol/internal/datatype_deserialization/CrossInfo1VccIDT/deserializer_CrossInfo1VccIDT.h"
#include "amsr/someip_protocol/internal/datatype_deserialization/DoorStsWithFacQlyIDT/deserializer_DoorStsWithFacQlyIDT.h"
#include "amsr/someip_protocol/internal/datatype_deserialization/DrvrACCrsSetSpdReq1VccIDT/deserializer_DrvrACCrsSetSpdReq1VccIDT.h"
#include "amsr/someip_protocol/internal/datatype_deserialization/DrvrSteerActv1VccIDT/deserializer_DrvrSteerActv1VccIDT.h"
#include "amsr/someip_protocol/internal/datatype_deserialization/DrvrSteerWhlHldGroup0IDT/deserializer_DrvrSteerWhlHldGroup0IDT.h"
#include "amsr/someip_protocol/internal/datatype_deserialization/EgoMotionIDT/deserializer_EgoMotionIDT.h"
#include "amsr/someip_protocol/internal/datatype_deserialization/EscWarnIndcnReqRec1VccIDT/deserializer_EscWarnIndcnReqRec1VccIDT.h"
#include "amsr/someip_protocol/internal/datatype_deserialization/EyeGaze3VccIDT/deserializer_EyeGaze3VccIDT.h"
#include "amsr/someip_protocol/internal/datatype_deserialization/IndcrTurnReqIDT/deserializer_IndcrTurnReqIDT.h"
#include "amsr/someip_protocol/internal/datatype_deserialization/PinionSteerAgGroupIDT/deserializer_PinionSteerAgGroupIDT.h"
#include "amsr/someip_protocol/internal/datatype_deserialization/PtDrvrSetg1VccIDT/deserializer_PtDrvrSetg1VccIDT.h"
#include "amsr/someip_protocol/internal/datatype_deserialization/RampInfo1VccIDT/deserializer_RampInfo1VccIDT.h"
#include "amsr/someip_protocol/internal/datatype_deserialization/RoadSgnInfoActv0IDT/deserializer_RoadSgnInfoActv0IDT.h"
#include "amsr/someip_protocol/internal/datatype_deserialization/SideRdrSts2VccIDT/deserializer_SideRdrSts2VccIDT.h"
#include "amsr/someip_protocol/internal/datatype_deserialization/SpdAlrmActvForRoadSgnInfo0IDT/deserializer_SpdAlrmActvForRoadSgnInfo0IDT.h"
#include "amsr/someip_protocol/internal/datatype_deserialization/SteerWhlSnsrSafe1IDT/deserializer_SteerWhlSnsrSafe1IDT.h"
#include "amsr/someip_protocol/internal/datatype_deserialization/SwtIndcr1VccIDT/deserializer_SwtIndcr1VccIDT.h"
#include "amsr/someip_protocol/internal/datatype_deserialization/TiGapPen1IDT/deserializer_TiGapPen1IDT.h"
#include "amsr/someip_protocol/internal/datatype_deserialization/ToSOCA_COMInfo1VCCIDT/deserializer_ToSOCA_COMInfo1VCCIDT.h"
#include "amsr/someip_protocol/internal/datatype_deserialization/TrfcLiActvStsIDT/deserializer_TrfcLiActvStsIDT.h"
#include "amsr/someip_protocol/internal/datatype_deserialization/TrfcLiWarnTyp1VccIDT/deserializer_TrfcLiWarnTyp1VccIDT.h"
#include "amsr/someip_protocol/internal/datatype_deserialization/TrsmParkLockdIDT/deserializer_TrsmParkLockdIDT.h"
#include "amsr/someip_protocol/internal/datatype_deserialization/TurnIndcrMonostable1VccIDT/deserializer_TurnIndcrMonostable1VccIDT.h"
#include "amsr/someip_protocol/internal/datatype_deserialization/VehBattU1VccIDT/deserializer_VehBattU1VccIDT.h"
#include "amsr/someip_protocol/internal/datatype_deserialization/VehDynCtrlStsForALgtCmftRec1IDT/deserializer_VehDynCtrlStsForALgtCmftRec1IDT.h"
#include "amsr/someip_protocol/internal/datatype_deserialization/VehMNomRecsts_1IDT/deserializer_VehMNomRecsts_1IDT.h"
#include "amsr/someip_protocol/internal/datatype_deserialization/VehModMngtGlbSafe1IDT/deserializer_VehModMngtGlbSafe1IDT.h"
#include "amsr/someip_protocol/internal/datatype_deserialization/VehMtnStSafeGroup1IDT/deserializer_VehMtnStSafeGroup1IDT.h"
#include "amsr/someip_protocol/internal/datatype_deserialization/VehSpdIndcd1IDT/deserializer_VehSpdIndcd1IDT.h"
#include "amsr/someip_protocol/internal/datatype_deserialization/VehSpdLgtSafe1ChkdIDT/deserializer_VehSpdLgtSafe1ChkdIDT.h"
#include "amsr/someip_protocol/internal/datatype_deserialization/Vin1VccIDT/deserializer_Vin1VccIDT.h"
#include "amsr/someip_protocol/internal/datatype_deserialization/WhlInfoGroupIDT/deserializer_WhlInfoGroupIDT.h"
#include "amsr/someip_protocol/internal/datatype_deserialization/WipgInfoGroupIDT/deserializer_WipgInfoGroupIDT.h"

namespace amsr {
namespace someip_protocol {
namespace internal {
namespace dataprototype_deserializer {
namespace tosoca_infomationsi {
namespace events {

deserialization::Result DeserializerOSM2_Bus_ToSOCA_COMInfo::Deserialize(deserialization::Reader &reader, ::ToSOCA_COMInfo1VCCIDT::ToSOCA_COMInfo1VCCIDT &data) noexcept {
  // Transformation properties parameter pack for data prototype /JICA/Service/Interface/ToSOCA_InfomationSI/OSM2_Bus_ToSOCA_COMInfo
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
        // Config of struct length field (/CppImplementationDataTypes/ToSOCA_COMInfo1VCCIDT)
      internal::LengthSize<deserialization::Tp<TpPackAlias>::kSizeOfStructLengthField, typename deserialization::Tp<TpPackAlias>::ByteOrder>

      >(deserialization::SizeToken<::ToSOCA_COMInfo1VCCIDT::ToSOCA_COMInfo1VCCIDT>{})};

  deserialization::Result result{reader.VerifySize(static_size)};
  if (result) {
    // Deserialize byte stream
    result = deserialization::SomeIpProtocolDeserialize<
      TpPackAlias,
      // Config of struct length field (/CppImplementationDataTypes/ToSOCA_COMInfo1VCCIDT)
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

