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
/**        \file  PerceptionRearExe/include/amsr/someip_protocol/internal/datatype_deserialization/ToSOCA_COMInfo1VCCIDT/deserializer_ToSOCA_COMInfo1VCCIDT.h
 *        \brief  SOME/IP protocol deserializer implementation for datatype 'ToSOCA_COMInfo1VCCIDT'
 *
 *      \details  /CppImplementationDataTypes/ToSOCA_COMInfo1VCCIDT
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 *  GENERATOR INFORMATION
 *  -------------------------------------------------------------------------------------------------------------------
 *    Generator Name: amsr_someipprotocol
 *         Commit ID: 1b535f531ca8eaaa17edbe97d022bbf394412553
 *********************************************************************************************************************/

#ifndef PERCEPTIONREAREXE_INCLUDE_AMSR_SOMEIP_PROTOCOL_INTERNAL_DATATYPE_DESERIALIZATION_TOSOCA_COMINFO1VCCIDT_DESERIALIZER_TOSOCA_COMINFO1VCCIDT_H_
#define PERCEPTIONREAREXE_INCLUDE_AMSR_SOMEIP_PROTOCOL_INTERNAL_DATATYPE_DESERIALIZATION_TOSOCA_COMINFO1VCCIDT_DESERIALIZER_TOSOCA_COMINFO1VCCIDT_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include "ToSOCA_COMInfo1VCCIDT/impl_type_tosoca_cominfo1vccidt.h"
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
#include "someip-protocol/internal/deserialization/deser_wrapper.h"

namespace ToSOCA_COMInfo1VCCIDT {

// VECTOR NC Metric-HIS.PATH: MD_SOMEIPPROTOCOL_Metric-HIS.PATH
/*!
 * \brief Deserializer for datatype /CppImplementationDataTypes/ToSOCA_COMInfo1VCCIDT.
 * \details Data type class: DataTypeStruct (CppImplDataTypeStruct).
 *          is TLV struct: false
 *
 * \tparam TpPack Transformation properties to be used for deserialization.
 *
 * \param[in,out] reader Reference to byte stream reader.
 * \param[out]    data Reference to the data object of type /CppImplementationDataTypes/ToSOCA_COMInfo1VCCIDT
 *                in which the deserialized value will be written.
 * \return        True if the deserialization is successful, false otherwise.
 * \pre           The static size provided by SomeIpProtocolGetStaticSize has been verified.
 * \context       Reactor|App
 * \threadsafe    FALSE
 * \reentrant     TRUE for different reader objects.
 * \synchronous   TRUE
 */
template <typename TpPack>
amsr::someip_protocol::internal::deserialization::Result SomeIpProtocolDeserialize(amsr::someip_protocol::internal::deserialization::Reader& reader, ::ToSOCA_COMInfo1VCCIDT::ToSOCA_COMInfo1VCCIDT &data) noexcept {
  // Namespace alias for static deserialization code
  namespace internal = amsr::someip_protocol::internal;
  namespace deserialization = internal::deserialization;
  // Deserialize non-TLV struct
  deserialization::Result result{false};
  // Deserialize struct member 'OSM2TimeStamp' of type /CppImplementationDataTypes/uint32_t
  result = deserialization::SomeIpProtocolDeserialize<
          TpPack,
          // Byte-order of primitive datatype (/CppImplementationDataTypes/uint32_t)
        typename deserialization::Tp<TpPack>::ByteOrder

          >(reader, data.OSM2TimeStamp);


  // Deserialize struct member 'AccFusnTrfcReq' of type /CppImplementationDataTypes/AccFusnTrfcReqIDT
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Config of struct length field (/CppImplementationDataTypes/AccFusnTrfcReqIDT)
        internal::LengthSize<deserialization::Tp<TpPack>::kSizeOfStructLengthField, typename deserialization::Tp<TpPack>::ByteOrder>

        >(reader, data.AccFusnTrfcReq);
  }

  // Deserialize struct member 'AccrPedlPsd0' of type /CppImplementationDataTypes/AccrPedlPsd0IDT
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Config of struct length field (/CppImplementationDataTypes/AccrPedlPsd0IDT)
        internal::LengthSize<deserialization::Tp<TpPack>::kSizeOfStructLengthField, typename deserialization::Tp<TpPack>::ByteOrder>

        >(reader, data.AccrPedlPsd0);
  }

  // Deserialize struct member 'AgDataRaw2Safe1Vcc' of type /CppImplementationDataTypes/AgDataRaw2Safe1VccIDT
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Config of struct length field (/CppImplementationDataTypes/AgDataRaw2Safe1VccIDT)
        internal::LengthSize<deserialization::Tp<TpPack>::kSizeOfStructLengthField, typename deserialization::Tp<TpPack>::ByteOrder>

        >(reader, data.AgDataRaw2Safe1Vcc);
  }

  // Deserialize struct member 'ALgtStdFromWhlSpdSafe1Chkd' of type /CppImplementationDataTypes/ALgtStdFromWhlSpdSafe1ChkdIDT
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Config of struct length field (/CppImplementationDataTypes/ALgtStdFromWhlSpdSafe1ChkdIDT)
        internal::LengthSize<deserialization::Tp<TpPack>::kSizeOfStructLengthField, typename deserialization::Tp<TpPack>::ByteOrder>

        >(reader, data.ALgtStdFromWhlSpdSafe1Chkd);
  }

  // Deserialize struct member 'AmbTRaw' of type /CppImplementationDataTypes/AmbTRawIDT
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Config of struct length field (/CppImplementationDataTypes/AmbTRawIDT)
        internal::LengthSize<deserialization::Tp<TpPack>::kSizeOfStructLengthField, typename deserialization::Tp<TpPack>::ByteOrder>

        >(reader, data.AmbTRaw);
  }

  // Deserialize struct member 'AsyDataWithCmpSafe1Chkd' of type /CppImplementationDataTypes/AsyDataWithCmpSafe1ChkdIDT
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Config of struct length field (/CppImplementationDataTypes/AsyDataWithCmpSafe1ChkdIDT)
        internal::LengthSize<deserialization::Tp<TpPack>::kSizeOfStructLengthField, typename deserialization::Tp<TpPack>::ByteOrder>

        >(reader, data.AsyDataWithCmpSafe1Chkd);
  }

  // Deserialize struct member 'BltLockStFrnt' of type /CppImplementationDataTypes/BltLockStFrntIDT
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Config of struct length field (/CppImplementationDataTypes/BltLockStFrntIDT)
        internal::LengthSize<deserialization::Tp<TpPack>::kSizeOfStructLengthField, typename deserialization::Tp<TpPack>::ByteOrder>

        >(reader, data.BltLockStFrnt);
  }

  // Deserialize struct member 'BrkPedlPsdRec' of type /CppImplementationDataTypes/BrkPedlPsdRecIDT
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Config of struct length field (/CppImplementationDataTypes/BrkPedlPsdRecIDT)
        internal::LengthSize<deserialization::Tp<TpPack>::kSizeOfStructLengthField, typename deserialization::Tp<TpPack>::ByteOrder>

        >(reader, data.BrkPedlPsdRec);
  }

  // Deserialize struct member 'DoorStsWithFacQly' of type /CppImplementationDataTypes/DoorStsWithFacQlyIDT
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Config of struct length field (/CppImplementationDataTypes/DoorStsWithFacQlyIDT)
        internal::LengthSize<deserialization::Tp<TpPack>::kSizeOfStructLengthField, typename deserialization::Tp<TpPack>::ByteOrder>

        >(reader, data.DoorStsWithFacQly);
  }

  // Deserialize struct member 'EgoMotion' of type /CppImplementationDataTypes/EgoMotionIDT
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Config of struct length field (/CppImplementationDataTypes/EgoMotionIDT)
        internal::LengthSize<deserialization::Tp<TpPack>::kSizeOfStructLengthField, typename deserialization::Tp<TpPack>::ByteOrder>

        >(reader, data.EgoMotion);
  }

  // Deserialize struct member 'IndcrTurnReq' of type /CppImplementationDataTypes/IndcrTurnReqIDT
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Config of struct length field (/CppImplementationDataTypes/IndcrTurnReqIDT)
        internal::LengthSize<deserialization::Tp<TpPack>::kSizeOfStructLengthField, typename deserialization::Tp<TpPack>::ByteOrder>

        >(reader, data.IndcrTurnReq);
  }

  // Deserialize struct member 'PinionSteerAgGroup' of type /CppImplementationDataTypes/PinionSteerAgGroupIDT
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Config of struct length field (/CppImplementationDataTypes/PinionSteerAgGroupIDT)
        internal::LengthSize<deserialization::Tp<TpPack>::kSizeOfStructLengthField, typename deserialization::Tp<TpPack>::ByteOrder>

        >(reader, data.PinionSteerAgGroup);
  }

  // Deserialize struct member 'RampInfo1Vcc' of type /CppImplementationDataTypes/RampInfo1VccIDT
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Config of struct length field (/CppImplementationDataTypes/RampInfo1VccIDT)
        internal::LengthSize<deserialization::Tp<TpPack>::kSizeOfStructLengthField, typename deserialization::Tp<TpPack>::ByteOrder>

        >(reader, data.RampInfo1Vcc);
  }

  // Deserialize struct member 'RoadSgnInfoActv0' of type /CppImplementationDataTypes/RoadSgnInfoActv0IDT
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Config of struct length field (/CppImplementationDataTypes/RoadSgnInfoActv0IDT)
        internal::LengthSize<deserialization::Tp<TpPack>::kSizeOfStructLengthField, typename deserialization::Tp<TpPack>::ByteOrder>

        >(reader, data.RoadSgnInfoActv0);
  }

  // Deserialize struct member 'SpdAlrmActvForRoadSgnInfo0' of type /CppImplementationDataTypes/SpdAlrmActvForRoadSgnInfo0IDT
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Config of struct length field (/CppImplementationDataTypes/SpdAlrmActvForRoadSgnInfo0IDT)
        internal::LengthSize<deserialization::Tp<TpPack>::kSizeOfStructLengthField, typename deserialization::Tp<TpPack>::ByteOrder>

        >(reader, data.SpdAlrmActvForRoadSgnInfo0);
  }

  // Deserialize struct member 'SteerWhlSnsrSafe1' of type /CppImplementationDataTypes/SteerWhlSnsrSafe1IDT
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Config of struct length field (/CppImplementationDataTypes/SteerWhlSnsrSafe1IDT)
        internal::LengthSize<deserialization::Tp<TpPack>::kSizeOfStructLengthField, typename deserialization::Tp<TpPack>::ByteOrder>

        >(reader, data.SteerWhlSnsrSafe1);
  }

  // Deserialize struct member 'SwtIndcr1Vcc' of type /CppImplementationDataTypes/SwtIndcr1VccIDT
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Config of struct length field (/CppImplementationDataTypes/SwtIndcr1VccIDT)
        internal::LengthSize<deserialization::Tp<TpPack>::kSizeOfStructLengthField, typename deserialization::Tp<TpPack>::ByteOrder>

        >(reader, data.SwtIndcr1Vcc);
  }

  // Deserialize struct member 'TrfcLiActvSts' of type /CppImplementationDataTypes/TrfcLiActvStsIDT
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Config of struct length field (/CppImplementationDataTypes/TrfcLiActvStsIDT)
        internal::LengthSize<deserialization::Tp<TpPack>::kSizeOfStructLengthField, typename deserialization::Tp<TpPack>::ByteOrder>

        >(reader, data.TrfcLiActvSts);
  }

  // Deserialize struct member 'TrfcLiWarnTyp1Vcc' of type /CppImplementationDataTypes/TrfcLiWarnTyp1VccIDT
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Config of struct length field (/CppImplementationDataTypes/TrfcLiWarnTyp1VccIDT)
        internal::LengthSize<deserialization::Tp<TpPack>::kSizeOfStructLengthField, typename deserialization::Tp<TpPack>::ByteOrder>

        >(reader, data.TrfcLiWarnTyp1Vcc);
  }

  // Deserialize struct member 'TrsmParkLockd' of type /CppImplementationDataTypes/TrsmParkLockdIDT
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Config of struct length field (/CppImplementationDataTypes/TrsmParkLockdIDT)
        internal::LengthSize<deserialization::Tp<TpPack>::kSizeOfStructLengthField, typename deserialization::Tp<TpPack>::ByteOrder>

        >(reader, data.TrsmParkLockd);
  }

  // Deserialize struct member 'VehBattU1Vcc' of type /CppImplementationDataTypes/VehBattU1VccIDT
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Config of struct length field (/CppImplementationDataTypes/VehBattU1VccIDT)
        internal::LengthSize<deserialization::Tp<TpPack>::kSizeOfStructLengthField, typename deserialization::Tp<TpPack>::ByteOrder>

        >(reader, data.VehBattU1Vcc);
  }

  // Deserialize struct member 'VehMNomRecsts_1' of type /CppImplementationDataTypes/VehMNomRecsts_1IDT
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Config of struct length field (/CppImplementationDataTypes/VehMNomRecsts_1IDT)
        internal::LengthSize<deserialization::Tp<TpPack>::kSizeOfStructLengthField, typename deserialization::Tp<TpPack>::ByteOrder>

        >(reader, data.VehMNomRecsts_1);
  }

  // Deserialize struct member 'VehModMngtGlbSafe1' of type /CppImplementationDataTypes/VehModMngtGlbSafe1IDT
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Config of struct length field (/CppImplementationDataTypes/VehModMngtGlbSafe1IDT)
        internal::LengthSize<deserialization::Tp<TpPack>::kSizeOfStructLengthField, typename deserialization::Tp<TpPack>::ByteOrder>

        >(reader, data.VehModMngtGlbSafe1);
  }

  // Deserialize struct member 'VehMtnStSafeGroup1' of type /CppImplementationDataTypes/VehMtnStSafeGroup1IDT
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Config of struct length field (/CppImplementationDataTypes/VehMtnStSafeGroup1IDT)
        internal::LengthSize<deserialization::Tp<TpPack>::kSizeOfStructLengthField, typename deserialization::Tp<TpPack>::ByteOrder>

        >(reader, data.VehMtnStSafeGroup1);
  }

  // Deserialize struct member 'VehSpdIndcd1' of type /CppImplementationDataTypes/VehSpdIndcd1IDT
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Config of struct length field (/CppImplementationDataTypes/VehSpdIndcd1IDT)
        internal::LengthSize<deserialization::Tp<TpPack>::kSizeOfStructLengthField, typename deserialization::Tp<TpPack>::ByteOrder>

        >(reader, data.VehSpdIndcd1);
  }

  // Deserialize struct member 'VehSpdLgtSafe1Chkd' of type /CppImplementationDataTypes/VehSpdLgtSafe1ChkdIDT
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Config of struct length field (/CppImplementationDataTypes/VehSpdLgtSafe1ChkdIDT)
        internal::LengthSize<deserialization::Tp<TpPack>::kSizeOfStructLengthField, typename deserialization::Tp<TpPack>::ByteOrder>

        >(reader, data.VehSpdLgtSafe1Chkd);
  }

  // Deserialize struct member 'Vin1Vcc' of type /CppImplementationDataTypes/Vin1VccIDT
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Config of struct length field (/CppImplementationDataTypes/Vin1VccIDT)
        internal::LengthSize<deserialization::Tp<TpPack>::kSizeOfStructLengthField, typename deserialization::Tp<TpPack>::ByteOrder>

        >(reader, data.Vin1Vcc);
  }

  // Deserialize struct member 'WhlInfoGroup' of type /CppImplementationDataTypes/WhlInfoGroupIDT
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Config of struct length field (/CppImplementationDataTypes/WhlInfoGroupIDT)
        internal::LengthSize<deserialization::Tp<TpPack>::kSizeOfStructLengthField, typename deserialization::Tp<TpPack>::ByteOrder>

        >(reader, data.WhlInfoGroup);
  }

  // Deserialize struct member 'WipgInfoGroup' of type /CppImplementationDataTypes/WipgInfoGroupIDT
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Config of struct length field (/CppImplementationDataTypes/WipgInfoGroupIDT)
        internal::LengthSize<deserialization::Tp<TpPack>::kSizeOfStructLengthField, typename deserialization::Tp<TpPack>::ByteOrder>

        >(reader, data.WipgInfoGroup);
  }

  // Deserialize struct member 'BkpOfDstTrvld' of type /CppImplementationDataTypes/uint32_t
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Byte-order of primitive datatype (/CppImplementationDataTypes/uint32_t)
        typename deserialization::Tp<TpPack>::ByteOrder

        >(reader, data.BkpOfDstTrvld);
  }

  // Deserialize struct member 'FogSetFrntReq' of type /CppImplementationDataTypes/OnOff1_2IDT
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Byte-order of primitive datatype (/CppImplementationDataTypes/OnOff1_2IDT)
        typename deserialization::Tp<TpPack>::ByteOrder

        >(reader, data.FogSetFrntReq);
  }

  // Deserialize struct member 'FogSetReReq' of type /CppImplementationDataTypes/OnOff1_2IDT
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Byte-order of primitive datatype (/CppImplementationDataTypes/OnOff1_2IDT)
        typename deserialization::Tp<TpPack>::ByteOrder

        >(reader, data.FogSetReReq);
  }

  // Deserialize struct member 'OffsForSpdWarnSetgReq' of type /CppImplementationDataTypes/OffsForSpdWarnSetgReqIDT
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Byte-order of primitive datatype (/CppImplementationDataTypes/OffsForSpdWarnSetgReqIDT)
        typename deserialization::Tp<TpPack>::ByteOrder

        >(reader, data.OffsForSpdWarnSetgReq);
  }

  // Deserialize struct member 'OffsForSpdWarnSetgReqSts' of type /CppImplementationDataTypes/SetgReqSts1VccIDT
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Byte-order of primitive datatype (/CppImplementationDataTypes/SetgReqSts1VccIDT)
        typename deserialization::Tp<TpPack>::ByteOrder

        >(reader, data.OffsForSpdWarnSetgReqSts);
  }

  // Deserialize struct member 'CtryCodInfo' of type /CppImplementationDataTypes/uint16_t
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Byte-order of primitive datatype (/CppImplementationDataTypes/uint16_t)
        typename deserialization::Tp<TpPack>::ByteOrder

        >(reader, data.CtryCodInfo);
  }

  // Deserialize struct member 'CurrentRoadLvl' of type /CppImplementationDataTypes/CurrentRoadLvl1VccIDT
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Byte-order of primitive datatype (/CppImplementationDataTypes/CurrentRoadLvl1VccIDT)
        typename deserialization::Tp<TpPack>::ByteOrder

        >(reader, data.CurrentRoadLvl);
  }

  // Deserialize struct member 'DoorLeReSts' of type /CppImplementationDataTypes/DoorSts2VccIDT
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Byte-order of primitive datatype (/CppImplementationDataTypes/DoorSts2VccIDT)
        typename deserialization::Tp<TpPack>::ByteOrder

        >(reader, data.DoorLeReSts);
  }

  // Deserialize struct member 'DoorPassSts' of type /CppImplementationDataTypes/DoorSts2VccIDT
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Byte-order of primitive datatype (/CppImplementationDataTypes/DoorSts2VccIDT)
        typename deserialization::Tp<TpPack>::ByteOrder

        >(reader, data.DoorPassSts);
  }

  // Deserialize struct member 'DoorRiReSts' of type /CppImplementationDataTypes/DoorSts2VccIDT
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Byte-order of primitive datatype (/CppImplementationDataTypes/DoorSts2VccIDT)
        typename deserialization::Tp<TpPack>::ByteOrder

        >(reader, data.DoorRiReSts);
  }

  // Deserialize struct member 'DrvrDesDir1Vcc' of type /CppImplementationDataTypes/DrvrDesDir1VccIDT
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Byte-order of primitive datatype (/CppImplementationDataTypes/DrvrDesDir1VccIDT)
        typename deserialization::Tp<TpPack>::ByteOrder

        >(reader, data.DrvrDesDir1Vcc);
  }

  // Deserialize struct member 'EpbSts' of type /CppImplementationDataTypes/EpbSts1VccIDT
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Byte-order of primitive datatype (/CppImplementationDataTypes/EpbSts1VccIDT)
        typename deserialization::Tp<TpPack>::ByteOrder

        >(reader, data.EpbSts);
  }

  // Deserialize struct member 'ExtrLtgStsFrntFog' of type /CppImplementationDataTypes/DevSts4IDT
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Byte-order of primitive datatype (/CppImplementationDataTypes/DevSts4IDT)
        typename deserialization::Tp<TpPack>::ByteOrder

        >(reader, data.ExtrLtgStsFrntFog);
  }

  // Deserialize struct member 'ExtrLtgStsReFog' of type /CppImplementationDataTypes/DevSts4IDT
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Byte-order of primitive datatype (/CppImplementationDataTypes/DevSts4IDT)
        typename deserialization::Tp<TpPack>::ByteOrder

        >(reader, data.ExtrLtgStsReFog);
  }

  // Deserialize struct member 'FrontFourDRadarStsForDim' of type /CppImplementationDataTypes/RsdsMstStIDT
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Byte-order of primitive datatype (/CppImplementationDataTypes/RsdsMstStIDT)
        typename deserialization::Tp<TpPack>::ByteOrder

        >(reader, data.FrontFourDRadarStsForDim);
  }

  // Deserialize struct member 'GearLvr' of type /CppImplementationDataTypes/GearLvrIDT
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Byte-order of primitive datatype (/CppImplementationDataTypes/GearLvrIDT)
        typename deserialization::Tp<TpPack>::ByteOrder

        >(reader, data.GearLvr);
  }

  // Deserialize struct member 'HoodSts' of type /CppImplementationDataTypes/DoorSts2VccIDT
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Byte-order of primitive datatype (/CppImplementationDataTypes/DoorSts2VccIDT)
        typename deserialization::Tp<TpPack>::ByteOrder

        >(reader, data.HoodSts);
  }

  // Deserialize struct member 'HznSplyElectcSts1' of type /CppImplementationDataTypes/HznSplyElectcSts1IDT
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Byte-order of primitive datatype (/CppImplementationDataTypes/HznSplyElectcSts1IDT)
        typename deserialization::Tp<TpPack>::ByteOrder

        >(reader, data.HznSplyElectcSts1);
  }

  // Deserialize struct member 'MiscTrfcSgnInfoFromNavMap' of type /CppImplementationDataTypes/TrfcInfoMiscFirst1IDT
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Byte-order of primitive datatype (/CppImplementationDataTypes/TrfcInfoMiscFirst1IDT)
        typename deserialization::Tp<TpPack>::ByteOrder

        >(reader, data.MiscTrfcSgnInfoFromNavMap);
  }

  // Deserialize struct member 'NavInfoSts' of type /CppImplementationDataTypes/NoYes1VccIDT
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Byte-order of primitive datatype (/CppImplementationDataTypes/NoYes1VccIDT)
        typename deserialization::Tp<TpPack>::ByteOrder

        >(reader, data.NavInfoSts);
  }

  // Deserialize struct member 'RainfallAmnt' of type /CppImplementationDataTypes/AmntSnsrIDT
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Byte-order of primitive datatype (/CppImplementationDataTypes/AmntSnsrIDT)
        typename deserialization::Tp<TpPack>::ByteOrder

        >(reader, data.RainfallAmnt);
  }

  // Deserialize struct member 'RoadMiscSgnInfoForRoadSgnInfoSts' of type /CppImplementationDataTypes/OnOff1VccIDT
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Byte-order of primitive datatype (/CppImplementationDataTypes/OnOff1VccIDT)
        typename deserialization::Tp<TpPack>::ByteOrder

        >(reader, data.RoadMiscSgnInfoForRoadSgnInfoSts);
  }

  // Deserialize struct member 'SpdCamFromNavMap' of type /CppImplementationDataTypes/uint8_t
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Byte-order of primitive datatype (/CppImplementationDataTypes/uint8_t)
        typename deserialization::Tp<TpPack>::ByteOrder

        >(reader, data.SpdCamFromNavMap);
  }

  // Deserialize struct member 'SpdLimOfRoad' of type /CppImplementationDataTypes/uint8_t
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Byte-order of primitive datatype (/CppImplementationDataTypes/uint8_t)
        typename deserialization::Tp<TpPack>::ByteOrder

        >(reader, data.SpdLimOfRoad);
  }

  // Deserialize struct member 'SpplTrfcSgnInfoFromNavMap' of type /CppImplementationDataTypes/SpplTrfcSgnInfo1IDT
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Byte-order of primitive datatype (/CppImplementationDataTypes/SpplTrfcSgnInfo1IDT)
        typename deserialization::Tp<TpPack>::ByteOrder

        >(reader, data.SpplTrfcSgnInfoFromNavMap);
  }

  // Deserialize struct member 'TrSts' of type /CppImplementationDataTypes/DoorSts2VccIDT
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Byte-order of primitive datatype (/CppImplementationDataTypes/DoorSts2VccIDT)
        typename deserialization::Tp<TpPack>::ByteOrder

        >(reader, data.TrSts);
  }

  // Deserialize struct member 'TwliBriSts' of type /CppImplementationDataTypes/TwliBriSts1VccIDT
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Byte-order of primitive datatype (/CppImplementationDataTypes/TwliBriSts1VccIDT)
        typename deserialization::Tp<TpPack>::ByteOrder

        >(reader, data.TwliBriSts);
  }

  // Deserialize struct member 'CarTiGlbTi' of type /CppImplementationDataTypes/float
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Byte-order of primitive datatype (/CppImplementationDataTypes/float)
        typename deserialization::Tp<TpPack>::ByteOrder

        >(reader, data.CarTiGlbTi);
  }

  // Deserialize struct member 'HznDataCountryCode' of type /CppImplementationDataTypes/uint16_t
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Byte-order of primitive datatype (/CppImplementationDataTypes/uint16_t)
        typename deserialization::Tp<TpPack>::ByteOrder

        >(reader, data.HznDataCountryCode);
  }

  // Deserialize struct member 'TurnIndcrMonostable' of type /CppImplementationDataTypes/TurnIndcrMonostable1VccIDT
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Config of struct length field (/CppImplementationDataTypes/TurnIndcrMonostable1VccIDT)
        internal::LengthSize<deserialization::Tp<TpPack>::kSizeOfStructLengthField, typename deserialization::Tp<TpPack>::ByteOrder>

        >(reader, data.TurnIndcrMonostable);
  }

  // Deserialize struct member 'CrossInfo' of type /CppImplementationDataTypes/CrossInfo1VccIDT
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Config of struct length field (/CppImplementationDataTypes/CrossInfo1VccIDT)
        internal::LengthSize<deserialization::Tp<TpPack>::kSizeOfStructLengthField, typename deserialization::Tp<TpPack>::ByteOrder>

        >(reader, data.CrossInfo);
  }

  // Deserialize struct member 'PlannedPahDe' of type /CppImplementationDataTypes/NoYesCrit1VccIDT
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Byte-order of primitive datatype (/CppImplementationDataTypes/NoYesCrit1VccIDT)
        typename deserialization::Tp<TpPack>::ByteOrder

        >(reader, data.PlannedPahDe);
  }

  // Deserialize struct member 'LatCtrlModCfmd' of type /CppImplementationDataTypes/LatCtrlMod1VccIDT
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Byte-order of primitive datatype (/CppImplementationDataTypes/LatCtrlMod1VccIDT)
        typename deserialization::Tp<TpPack>::ByteOrder

        >(reader, data.LatCtrlModCfmd);
  }

  // Deserialize struct member 'AsyAutDrvCtrlTypDIMReq' of type /CppImplementationDataTypes/AsyAutDrvCtrlTyp1VccIDT
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Byte-order of primitive datatype (/CppImplementationDataTypes/AsyAutDrvCtrlTyp1VccIDT)
        typename deserialization::Tp<TpPack>::ByteOrder

        >(reader, data.AsyAutDrvCtrlTypDIMReq);
  }

  // Deserialize struct member 'AutoLaneChgStyleSwSts' of type /CppImplementationDataTypes/HmiAutoLaneChgStyle1VccIDT
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Byte-order of primitive datatype (/CppImplementationDataTypes/HmiAutoLaneChgStyle1VccIDT)
        typename deserialization::Tp<TpPack>::ByteOrder

        >(reader, data.AutoLaneChgStyleSwSts);
  }

  // Deserialize struct member 'PtDrvrSetg' of type /CppImplementationDataTypes/PtDrvrSetg1VccIDT
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Config of struct length field (/CppImplementationDataTypes/PtDrvrSetg1VccIDT)
        internal::LengthSize<deserialization::Tp<TpPack>::kSizeOfStructLengthField, typename deserialization::Tp<TpPack>::ByteOrder>

        >(reader, data.PtDrvrSetg);
  }

  // Deserialize struct member 'DrvrLaneChgAutActvSts' of type /CppImplementationDataTypes/OnOff1VccIDT
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Byte-order of primitive datatype (/CppImplementationDataTypes/OnOff1VccIDT)
        typename deserialization::Tp<TpPack>::ByteOrder

        >(reader, data.DrvrLaneChgAutActvSts);
  }

  // Deserialize struct member 'NOPCofmOfLanChagOnoff' of type /CppImplementationDataTypes/OnOff1VccIDT
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Byte-order of primitive datatype (/CppImplementationDataTypes/OnOff1VccIDT)
        typename deserialization::Tp<TpPack>::ByteOrder

        >(reader, data.NOPCofmOfLanChagOnoff);
  }

  // Deserialize struct member 'HmiSodLanChgSwitch' of type /CppImplementationDataTypes/OnOff1VccIDT
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Byte-order of primitive datatype (/CppImplementationDataTypes/OnOff1VccIDT)
        typename deserialization::Tp<TpPack>::ByteOrder

        >(reader, data.HmiSodLanChgSwitch);
  }

  // Deserialize struct member 'HmiDrvrSodReqChg' of type /CppImplementationDataTypes/ReqChg1VccIDT
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Byte-order of primitive datatype (/CppImplementationDataTypes/ReqChg1VccIDT)
        typename deserialization::Tp<TpPack>::ByteOrder

        >(reader, data.HmiDrvrSodReqChg);
  }

  // Deserialize struct member 'EyeOnRoadFromDHU' of type /CppImplementationDataTypes/EyeOnRoadFromDHUIDT
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Byte-order of primitive datatype (/CppImplementationDataTypes/EyeOnRoadFromDHUIDT)
        typename deserialization::Tp<TpPack>::ByteOrder

        >(reader, data.EyeOnRoadFromDHU);
  }

  // Deserialize struct member 'DrvrSteerWhlHldGroup' of type /CppImplementationDataTypes/DrvrSteerWhlHldGroup0IDT
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Config of struct length field (/CppImplementationDataTypes/DrvrSteerWhlHldGroup0IDT)
        internal::LengthSize<deserialization::Tp<TpPack>::kSizeOfStructLengthField, typename deserialization::Tp<TpPack>::ByteOrder>

        >(reader, data.DrvrSteerWhlHldGroup);
  }

  // Deserialize struct member 'TiGap' of type /CppImplementationDataTypes/TiGapPen1IDT
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Config of struct length field (/CppImplementationDataTypes/TiGapPen1IDT)
        internal::LengthSize<deserialization::Tp<TpPack>::kSizeOfStructLengthField, typename deserialization::Tp<TpPack>::ByteOrder>

        >(reader, data.TiGap);
  }

  // Deserialize struct member 'BrkPedlrRat' of type /CppImplementationDataTypes/BrkPedlrRatIDT
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Config of struct length field (/CppImplementationDataTypes/BrkPedlrRatIDT)
        internal::LengthSize<deserialization::Tp<TpPack>::kSizeOfStructLengthField, typename deserialization::Tp<TpPack>::ByteOrder>

        >(reader, data.BrkPedlrRat);
  }

  // Deserialize struct member 'DrvrACCFctDeactvnReq' of type /CppImplementationDataTypes/OnOff1VccIDT
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Byte-order of primitive datatype (/CppImplementationDataTypes/OnOff1VccIDT)
        typename deserialization::Tp<TpPack>::ByteOrder

        >(reader, data.DrvrACCFctDeactvnReq);
  }

  // Deserialize struct member 'DrvrCrsCtrlFctActvReq' of type /CppImplementationDataTypes/DrvrCrsCtrlFctActvReq1VccIDT
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Byte-order of primitive datatype (/CppImplementationDataTypes/DrvrCrsCtrlFctActvReq1VccIDT)
        typename deserialization::Tp<TpPack>::ByteOrder

        >(reader, data.DrvrCrsCtrlFctActvReq);
  }

  // Deserialize struct member 'AsyNoaUpgradeswitch' of type /CppImplementationDataTypes/OnOff1VccIDT
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Byte-order of primitive datatype (/CppImplementationDataTypes/OnOff1VccIDT)
        typename deserialization::Tp<TpPack>::ByteOrder

        >(reader, data.AsyNoaUpgradeswitch);
  }

  // Deserialize struct member 'VehDynCtrlStsForALgtCmft' of type /CppImplementationDataTypes/VehDynCtrlStsForALgtCmftRec1IDT
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Config of struct length field (/CppImplementationDataTypes/VehDynCtrlStsForALgtCmftRec1IDT)
        internal::LengthSize<deserialization::Tp<TpPack>::kSizeOfStructLengthField, typename deserialization::Tp<TpPack>::ByteOrder>

        >(reader, data.VehDynCtrlStsForALgtCmft);
  }

  // Deserialize struct member 'InhbOfAsySftyDecelByVehDyn' of type /CppImplementationDataTypes/InhbOfAsySftyDecelByVehDyn1VccIDT
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Byte-order of primitive datatype (/CppImplementationDataTypes/InhbOfAsySftyDecelByVehDyn1VccIDT)
        typename deserialization::Tp<TpPack>::ByteOrder

        >(reader, data.InhbOfAsySftyDecelByVehDyn);
  }

  // Deserialize struct member 'ADModCtrlInhbn' of type /CppImplementationDataTypes/ADModCtrlInhbn1VccIDT
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Config of struct length field (/CppImplementationDataTypes/ADModCtrlInhbn1VccIDT)
        internal::LengthSize<deserialization::Tp<TpPack>::kSizeOfStructLengthField, typename deserialization::Tp<TpPack>::ByteOrder>

        >(reader, data.ADModCtrlInhbn);
  }

  // Deserialize struct member 'DrvModReq' of type /CppImplementationDataTypes/DrvModReqIDT
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Byte-order of primitive datatype (/CppImplementationDataTypes/DrvModReqIDT)
        typename deserialization::Tp<TpPack>::ByteOrder

        >(reader, data.DrvModReq);
  }

  // Deserialize struct member 'DrvrSteerActv' of type /CppImplementationDataTypes/DrvrSteerActv1VccIDT
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Config of struct length field (/CppImplementationDataTypes/DrvrSteerActv1VccIDT)
        internal::LengthSize<deserialization::Tp<TpPack>::kSizeOfStructLengthField, typename deserialization::Tp<TpPack>::ByteOrder>

        >(reader, data.DrvrSteerActv);
  }

  // Deserialize struct member 'EscWarnIndcnReq' of type /CppImplementationDataTypes/EscWarnIndcnReqRec1VccIDT
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Config of struct length field (/CppImplementationDataTypes/EscWarnIndcnReqRec1VccIDT)
        internal::LengthSize<deserialization::Tp<TpPack>::kSizeOfStructLengthField, typename deserialization::Tp<TpPack>::ByteOrder>

        >(reader, data.EscWarnIndcnReq);
  }

  // Deserialize struct member 'EyeGazeFromDHU' of type /CppImplementationDataTypes/EyeGaze3VccIDT
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Config of struct length field (/CppImplementationDataTypes/EyeGaze3VccIDT)
        internal::LengthSize<deserialization::Tp<TpPack>::kSizeOfStructLengthField, typename deserialization::Tp<TpPack>::ByteOrder>

        >(reader, data.EyeGazeFromDHU);
  }

  // Deserialize struct member 'TwliBriRaw' of type /CppImplementationDataTypes/float
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Byte-order of primitive datatype (/CppImplementationDataTypes/float)
        typename deserialization::Tp<TpPack>::ByteOrder

        >(reader, data.TwliBriRaw);
  }

  // Deserialize struct member 'ADDimLight' of type /CppImplementationDataTypes/ADDimLight1VccIDT
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Byte-order of primitive datatype (/CppImplementationDataTypes/ADDimLight1VccIDT)
        typename deserialization::Tp<TpPack>::ByteOrder

        >(reader, data.ADDimLight);
  }

  // Deserialize struct member 'CpmswOnOff' of type /CppImplementationDataTypes/OnOff1VccIDT
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Byte-order of primitive datatype (/CppImplementationDataTypes/OnOff1VccIDT)
        typename deserialization::Tp<TpPack>::ByteOrder

        >(reader, data.CpmswOnOff);
  }

  // Deserialize struct member 'CrsCtrlTiGapAdjReq' of type /CppImplementationDataTypes/TiGapSetForLgtCtrl1VccIDT
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Byte-order of primitive datatype (/CppImplementationDataTypes/TiGapSetForLgtCtrl1VccIDT)
        typename deserialization::Tp<TpPack>::ByteOrder

        >(reader, data.CrsCtrlTiGapAdjReq);
  }

  // Deserialize struct member 'CllsnMtgtnFctSts' of type /CppImplementationDataTypes/CllsnMtgtnFctSts1VccIDT
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Byte-order of primitive datatype (/CppImplementationDataTypes/CllsnMtgtnFctSts1VccIDT)
        typename deserialization::Tp<TpPack>::ByteOrder

        >(reader, data.CllsnMtgtnFctSts);
  }

  // Deserialize struct member 'DrvOffReqForLgtCtrl' of type /CppImplementationDataTypes/Bool1VccIDT
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Byte-order of primitive datatype (/CppImplementationDataTypes/Bool1VccIDT)
        typename deserialization::Tp<TpPack>::ByteOrder

        >(reader, data.DrvOffReqForLgtCtrl);
  }

  // Deserialize struct member 'AsyActrActvForLgtCtrl' of type /CppImplementationDataTypes/AsyActrActvForLgtCtrlIDT
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Byte-order of primitive datatype (/CppImplementationDataTypes/AsyActrActvForLgtCtrlIDT)
        typename deserialization::Tp<TpPack>::ByteOrder

        >(reader, data.AsyActrActvForLgtCtrl);
  }

  // Deserialize struct member 'AsyLaneChgWarnMod' of type /CppImplementationDataTypes/ChgWarnMod1VccIDT
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Byte-order of primitive datatype (/CppImplementationDataTypes/ChgWarnMod1VccIDT)
        typename deserialization::Tp<TpPack>::ByteOrder

        >(reader, data.AsyLaneChgWarnMod);
  }

  // Deserialize struct member 'DrvrACCrsSetSpdReq' of type /CppImplementationDataTypes/DrvrACCrsSetSpdReq1VccIDT
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Config of struct length field (/CppImplementationDataTypes/DrvrACCrsSetSpdReq1VccIDT)
        internal::LengthSize<deserialization::Tp<TpPack>::kSizeOfStructLengthField, typename deserialization::Tp<TpPack>::ByteOrder>

        >(reader, data.DrvrACCrsSetSpdReq);
  }

  // Deserialize struct member 'LcmaLedStsDrvrSide' of type /CppImplementationDataTypes/YesNo1VccIDT
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Byte-order of primitive datatype (/CppImplementationDataTypes/YesNo1VccIDT)
        typename deserialization::Tp<TpPack>::ByteOrder

        >(reader, data.LcmaLedStsDrvrSide);
  }

  // Deserialize struct member 'LcmaLedStsPassSide' of type /CppImplementationDataTypes/YesNo1VccIDT
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Byte-order of primitive datatype (/CppImplementationDataTypes/YesNo1VccIDT)
        typename deserialization::Tp<TpPack>::ByteOrder

        >(reader, data.LcmaLedStsPassSide);
  }

  // Deserialize struct member 'LaneChgWarnSts' of type /CppImplementationDataTypes/OnOff1VccIDT
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Byte-order of primitive datatype (/CppImplementationDataTypes/OnOff1VccIDT)
        typename deserialization::Tp<TpPack>::ByteOrder

        >(reader, data.LaneChgWarnSts);
  }

  // Deserialize struct member 'AsySteerWhlHptcWarnReq' of type /CppImplementationDataTypes/OnOff1VccIDT
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Byte-order of primitive datatype (/CppImplementationDataTypes/OnOff1VccIDT)
        typename deserialization::Tp<TpPack>::ByteOrder

        >(reader, data.AsySteerWhlHptcWarnReq);
  }

  // Deserialize struct member 'StopReqOfLgtCtrlForPrpsn' of type /CppImplementationDataTypes/NoYes1VccIDT
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Byte-order of primitive datatype (/CppImplementationDataTypes/NoYes1VccIDT)
        typename deserialization::Tp<TpPack>::ByteOrder

        >(reader, data.StopReqOfLgtCtrlForPrpsn);
  }

  // Deserialize struct member 'StrtReqOfLgtCtrlForPrpsn' of type /CppImplementationDataTypes/NoYes1VccIDT
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Byte-order of primitive datatype (/CppImplementationDataTypes/NoYes1VccIDT)
        typename deserialization::Tp<TpPack>::ByteOrder

        >(reader, data.StrtReqOfLgtCtrlForPrpsn);
  }

  // Deserialize struct member 'AsyEmgyLaneKeepAidSts' of type /CppImplementationDataTypes/AsyALatSts1VccIDT
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Byte-order of primitive datatype (/CppImplementationDataTypes/AsyALatSts1VccIDT)
        typename deserialization::Tp<TpPack>::ByteOrder

        >(reader, data.AsyEmgyLaneKeepAidSts);
  }

  // Deserialize struct member 'FrntSideRdrLeSts' of type /CppImplementationDataTypes/SideRdrSts2VccIDT
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Config of struct length field (/CppImplementationDataTypes/SideRdrSts2VccIDT)
        internal::LengthSize<deserialization::Tp<TpPack>::kSizeOfStructLengthField, typename deserialization::Tp<TpPack>::ByteOrder>

        >(reader, data.FrntSideRdrLeSts);
  }

  // Deserialize struct member 'FrntSideRdrRiSts' of type /CppImplementationDataTypes/SideRdrSts2VccIDT
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Config of struct length field (/CppImplementationDataTypes/SideRdrSts2VccIDT)
        internal::LengthSize<deserialization::Tp<TpPack>::kSizeOfStructLengthField, typename deserialization::Tp<TpPack>::ByteOrder>

        >(reader, data.FrntSideRdrRiSts);
  }

  // Deserialize struct member 'ReSideRdrLeSts' of type /CppImplementationDataTypes/SideRdrSts2VccIDT
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Config of struct length field (/CppImplementationDataTypes/SideRdrSts2VccIDT)
        internal::LengthSize<deserialization::Tp<TpPack>::kSizeOfStructLengthField, typename deserialization::Tp<TpPack>::ByteOrder>

        >(reader, data.ReSideRdrLeSts);
  }

  // Deserialize struct member 'ReSideRdrRiSts' of type /CppImplementationDataTypes/SideRdrSts2VccIDT
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Config of struct length field (/CppImplementationDataTypes/SideRdrSts2VccIDT)
        internal::LengthSize<deserialization::Tp<TpPack>::kSizeOfStructLengthField, typename deserialization::Tp<TpPack>::ByteOrder>

        >(reader, data.ReSideRdrRiSts);
  }

  return result;
}

/*!
 * \brief Calculates the static size for datatype /CppImplementationDataTypes/ToSOCA_COMInfo1VCCIDT.
 * \details Data type class: DataTypeStruct (CppImplDataTypeStruct).
 *          is TLV struct: false
 *
 * \tparam TpPack Transformation properties to be used for deserialization.
 * \return Returns the static size of the struct in bytes.
 * \pre -
 * \context Reactor|App
 * \threadsafe FALSE
 * \reentrant TRUE
 * \vprivate Vector component internal API.
 * \synchronous TRUE
 * \spec
 *   requires true;
 * \endspec
 */
template <typename TpPack>
constexpr std::size_t SomeIpProtocolGetStaticSize(amsr::someip_protocol::internal::deserialization::SizeToken<::ToSOCA_COMInfo1VCCIDT::ToSOCA_COMInfo1VCCIDT>) noexcept {
  // Namespace alias for static deserialization code
  namespace internal = amsr::someip_protocol::internal;
  namespace deserialization = internal::deserialization;

  // Sum of static size
 constexpr std::size_t static_size{
  // Accumulate the static size of struct member 'OSM2TimeStamp' of type /CppImplementationDataTypes/uint32_t
   SomeIpProtocolGetStaticSize<TpPack,
                                // Byte-order of primitive datatype (/CppImplementationDataTypes/uint32_t)
                                typename deserialization::Tp<TpPack>::ByteOrder

                               >(deserialization::SizeToken<::uint32IDT::uint32IDT>{})  + 
  
  // Accumulate the static size of struct member 'AccFusnTrfcReq' of type /CppImplementationDataTypes/AccFusnTrfcReqIDT
   SomeIpProtocolGetStaticSize<TpPack,
                                // Config of struct length field (/CppImplementationDataTypes/AccFusnTrfcReqIDT)
                                internal::LengthSize<deserialization::Tp<TpPack>::kSizeOfStructLengthField, typename deserialization::Tp<TpPack>::ByteOrder>

                               >(deserialization::SizeToken<::AccFusnTrfcReqIDT::AccFusnTrfcReqIDT>{})  + 
  
  // Accumulate the static size of struct member 'AccrPedlPsd0' of type /CppImplementationDataTypes/AccrPedlPsd0IDT
   SomeIpProtocolGetStaticSize<TpPack,
                                // Config of struct length field (/CppImplementationDataTypes/AccrPedlPsd0IDT)
                                internal::LengthSize<deserialization::Tp<TpPack>::kSizeOfStructLengthField, typename deserialization::Tp<TpPack>::ByteOrder>

                               >(deserialization::SizeToken<::AccrPedlPsd0IDT::AccrPedlPsd0IDT>{})  + 
  
  // Accumulate the static size of struct member 'AgDataRaw2Safe1Vcc' of type /CppImplementationDataTypes/AgDataRaw2Safe1VccIDT
   SomeIpProtocolGetStaticSize<TpPack,
                                // Config of struct length field (/CppImplementationDataTypes/AgDataRaw2Safe1VccIDT)
                                internal::LengthSize<deserialization::Tp<TpPack>::kSizeOfStructLengthField, typename deserialization::Tp<TpPack>::ByteOrder>

                               >(deserialization::SizeToken<::AgDataRaw2Safe1VccIDT::AgDataRaw2Safe1VccIDT>{})  + 
  
  // Accumulate the static size of struct member 'ALgtStdFromWhlSpdSafe1Chkd' of type /CppImplementationDataTypes/ALgtStdFromWhlSpdSafe1ChkdIDT
   SomeIpProtocolGetStaticSize<TpPack,
                                // Config of struct length field (/CppImplementationDataTypes/ALgtStdFromWhlSpdSafe1ChkdIDT)
                                internal::LengthSize<deserialization::Tp<TpPack>::kSizeOfStructLengthField, typename deserialization::Tp<TpPack>::ByteOrder>

                               >(deserialization::SizeToken<::ALgtStdFromWhlSpdSafe1ChkdIDT::ALgtStdFromWhlSpdSafe1ChkdIDT>{})  + 
  
  // Accumulate the static size of struct member 'AmbTRaw' of type /CppImplementationDataTypes/AmbTRawIDT
   SomeIpProtocolGetStaticSize<TpPack,
                                // Config of struct length field (/CppImplementationDataTypes/AmbTRawIDT)
                                internal::LengthSize<deserialization::Tp<TpPack>::kSizeOfStructLengthField, typename deserialization::Tp<TpPack>::ByteOrder>

                               >(deserialization::SizeToken<::AmbTRawIDT::AmbTRawIDT>{})  + 
  
  // Accumulate the static size of struct member 'AsyDataWithCmpSafe1Chkd' of type /CppImplementationDataTypes/AsyDataWithCmpSafe1ChkdIDT
   SomeIpProtocolGetStaticSize<TpPack,
                                // Config of struct length field (/CppImplementationDataTypes/AsyDataWithCmpSafe1ChkdIDT)
                                internal::LengthSize<deserialization::Tp<TpPack>::kSizeOfStructLengthField, typename deserialization::Tp<TpPack>::ByteOrder>

                               >(deserialization::SizeToken<::AsyDataWithCmpSafe1ChkdIDT::AsyDataWithCmpSafe1ChkdIDT>{})  + 
  
  // Accumulate the static size of struct member 'BltLockStFrnt' of type /CppImplementationDataTypes/BltLockStFrntIDT
   SomeIpProtocolGetStaticSize<TpPack,
                                // Config of struct length field (/CppImplementationDataTypes/BltLockStFrntIDT)
                                internal::LengthSize<deserialization::Tp<TpPack>::kSizeOfStructLengthField, typename deserialization::Tp<TpPack>::ByteOrder>

                               >(deserialization::SizeToken<::BltLockStFrntIDT::BltLockStFrntIDT>{})  + 
  
  // Accumulate the static size of struct member 'BrkPedlPsdRec' of type /CppImplementationDataTypes/BrkPedlPsdRecIDT
   SomeIpProtocolGetStaticSize<TpPack,
                                // Config of struct length field (/CppImplementationDataTypes/BrkPedlPsdRecIDT)
                                internal::LengthSize<deserialization::Tp<TpPack>::kSizeOfStructLengthField, typename deserialization::Tp<TpPack>::ByteOrder>

                               >(deserialization::SizeToken<::BrkPedlPsdRecIDT::BrkPedlPsdRecIDT>{})  + 
  
  // Accumulate the static size of struct member 'DoorStsWithFacQly' of type /CppImplementationDataTypes/DoorStsWithFacQlyIDT
   SomeIpProtocolGetStaticSize<TpPack,
                                // Config of struct length field (/CppImplementationDataTypes/DoorStsWithFacQlyIDT)
                                internal::LengthSize<deserialization::Tp<TpPack>::kSizeOfStructLengthField, typename deserialization::Tp<TpPack>::ByteOrder>

                               >(deserialization::SizeToken<::DoorStsWithFacQlyIDT::DoorStsWithFacQlyIDT>{})  + 
  
  // Accumulate the static size of struct member 'EgoMotion' of type /CppImplementationDataTypes/EgoMotionIDT
   SomeIpProtocolGetStaticSize<TpPack,
                                // Config of struct length field (/CppImplementationDataTypes/EgoMotionIDT)
                                internal::LengthSize<deserialization::Tp<TpPack>::kSizeOfStructLengthField, typename deserialization::Tp<TpPack>::ByteOrder>

                               >(deserialization::SizeToken<::EgoMotionIDT::EgoMotionIDT>{})  + 
  
  // Accumulate the static size of struct member 'IndcrTurnReq' of type /CppImplementationDataTypes/IndcrTurnReqIDT
   SomeIpProtocolGetStaticSize<TpPack,
                                // Config of struct length field (/CppImplementationDataTypes/IndcrTurnReqIDT)
                                internal::LengthSize<deserialization::Tp<TpPack>::kSizeOfStructLengthField, typename deserialization::Tp<TpPack>::ByteOrder>

                               >(deserialization::SizeToken<::IndcrTurnReqIDT::IndcrTurnReqIDT>{})  + 
  
  // Accumulate the static size of struct member 'PinionSteerAgGroup' of type /CppImplementationDataTypes/PinionSteerAgGroupIDT
   SomeIpProtocolGetStaticSize<TpPack,
                                // Config of struct length field (/CppImplementationDataTypes/PinionSteerAgGroupIDT)
                                internal::LengthSize<deserialization::Tp<TpPack>::kSizeOfStructLengthField, typename deserialization::Tp<TpPack>::ByteOrder>

                               >(deserialization::SizeToken<::PinionSteerAgGroupIDT::PinionSteerAgGroupIDT>{})  + 
  
  // Accumulate the static size of struct member 'RampInfo1Vcc' of type /CppImplementationDataTypes/RampInfo1VccIDT
   SomeIpProtocolGetStaticSize<TpPack,
                                // Config of struct length field (/CppImplementationDataTypes/RampInfo1VccIDT)
                                internal::LengthSize<deserialization::Tp<TpPack>::kSizeOfStructLengthField, typename deserialization::Tp<TpPack>::ByteOrder>

                               >(deserialization::SizeToken<::RampInfo1VccIDT::RampInfo1VccIDT>{})  + 
  
  // Accumulate the static size of struct member 'RoadSgnInfoActv0' of type /CppImplementationDataTypes/RoadSgnInfoActv0IDT
   SomeIpProtocolGetStaticSize<TpPack,
                                // Config of struct length field (/CppImplementationDataTypes/RoadSgnInfoActv0IDT)
                                internal::LengthSize<deserialization::Tp<TpPack>::kSizeOfStructLengthField, typename deserialization::Tp<TpPack>::ByteOrder>

                               >(deserialization::SizeToken<::RoadSgnInfoActv0IDT::RoadSgnInfoActv0IDT>{})  + 
  
  // Accumulate the static size of struct member 'SpdAlrmActvForRoadSgnInfo0' of type /CppImplementationDataTypes/SpdAlrmActvForRoadSgnInfo0IDT
   SomeIpProtocolGetStaticSize<TpPack,
                                // Config of struct length field (/CppImplementationDataTypes/SpdAlrmActvForRoadSgnInfo0IDT)
                                internal::LengthSize<deserialization::Tp<TpPack>::kSizeOfStructLengthField, typename deserialization::Tp<TpPack>::ByteOrder>

                               >(deserialization::SizeToken<::SpdAlrmActvForRoadSgnInfo0IDT::SpdAlrmActvForRoadSgnInfo0IDT>{})  + 
  
  // Accumulate the static size of struct member 'SteerWhlSnsrSafe1' of type /CppImplementationDataTypes/SteerWhlSnsrSafe1IDT
   SomeIpProtocolGetStaticSize<TpPack,
                                // Config of struct length field (/CppImplementationDataTypes/SteerWhlSnsrSafe1IDT)
                                internal::LengthSize<deserialization::Tp<TpPack>::kSizeOfStructLengthField, typename deserialization::Tp<TpPack>::ByteOrder>

                               >(deserialization::SizeToken<::SteerWhlSnsrSafe1IDT::SteerWhlSnsrSafe1IDT>{})  + 
  
  // Accumulate the static size of struct member 'SwtIndcr1Vcc' of type /CppImplementationDataTypes/SwtIndcr1VccIDT
   SomeIpProtocolGetStaticSize<TpPack,
                                // Config of struct length field (/CppImplementationDataTypes/SwtIndcr1VccIDT)
                                internal::LengthSize<deserialization::Tp<TpPack>::kSizeOfStructLengthField, typename deserialization::Tp<TpPack>::ByteOrder>

                               >(deserialization::SizeToken<::SwtIndcr1VccIDT::SwtIndcr1VccIDT>{})  + 
  
  // Accumulate the static size of struct member 'TrfcLiActvSts' of type /CppImplementationDataTypes/TrfcLiActvStsIDT
   SomeIpProtocolGetStaticSize<TpPack,
                                // Config of struct length field (/CppImplementationDataTypes/TrfcLiActvStsIDT)
                                internal::LengthSize<deserialization::Tp<TpPack>::kSizeOfStructLengthField, typename deserialization::Tp<TpPack>::ByteOrder>

                               >(deserialization::SizeToken<::TrfcLiActvStsIDT::TrfcLiActvStsIDT>{})  + 
  
  // Accumulate the static size of struct member 'TrfcLiWarnTyp1Vcc' of type /CppImplementationDataTypes/TrfcLiWarnTyp1VccIDT
   SomeIpProtocolGetStaticSize<TpPack,
                                // Config of struct length field (/CppImplementationDataTypes/TrfcLiWarnTyp1VccIDT)
                                internal::LengthSize<deserialization::Tp<TpPack>::kSizeOfStructLengthField, typename deserialization::Tp<TpPack>::ByteOrder>

                               >(deserialization::SizeToken<::TrfcLiWarnTyp1VccIDT::TrfcLiWarnTyp1VccIDT>{})  + 
  
  // Accumulate the static size of struct member 'TrsmParkLockd' of type /CppImplementationDataTypes/TrsmParkLockdIDT
   SomeIpProtocolGetStaticSize<TpPack,
                                // Config of struct length field (/CppImplementationDataTypes/TrsmParkLockdIDT)
                                internal::LengthSize<deserialization::Tp<TpPack>::kSizeOfStructLengthField, typename deserialization::Tp<TpPack>::ByteOrder>

                               >(deserialization::SizeToken<::TrsmParkLockdIDT::TrsmParkLockdIDT>{})  + 
  
  // Accumulate the static size of struct member 'VehBattU1Vcc' of type /CppImplementationDataTypes/VehBattU1VccIDT
   SomeIpProtocolGetStaticSize<TpPack,
                                // Config of struct length field (/CppImplementationDataTypes/VehBattU1VccIDT)
                                internal::LengthSize<deserialization::Tp<TpPack>::kSizeOfStructLengthField, typename deserialization::Tp<TpPack>::ByteOrder>

                               >(deserialization::SizeToken<::VehBattU1VccIDT::VehBattU1VccIDT>{})  + 
  
  // Accumulate the static size of struct member 'VehMNomRecsts_1' of type /CppImplementationDataTypes/VehMNomRecsts_1IDT
   SomeIpProtocolGetStaticSize<TpPack,
                                // Config of struct length field (/CppImplementationDataTypes/VehMNomRecsts_1IDT)
                                internal::LengthSize<deserialization::Tp<TpPack>::kSizeOfStructLengthField, typename deserialization::Tp<TpPack>::ByteOrder>

                               >(deserialization::SizeToken<::VehMNomRecsts_1IDT::VehMNomRecsts_1IDT>{})  + 
  
  // Accumulate the static size of struct member 'VehModMngtGlbSafe1' of type /CppImplementationDataTypes/VehModMngtGlbSafe1IDT
   SomeIpProtocolGetStaticSize<TpPack,
                                // Config of struct length field (/CppImplementationDataTypes/VehModMngtGlbSafe1IDT)
                                internal::LengthSize<deserialization::Tp<TpPack>::kSizeOfStructLengthField, typename deserialization::Tp<TpPack>::ByteOrder>

                               >(deserialization::SizeToken<::VehModMngtGlbSafe1IDT::VehModMngtGlbSafe1IDT>{})  + 
  
  // Accumulate the static size of struct member 'VehMtnStSafeGroup1' of type /CppImplementationDataTypes/VehMtnStSafeGroup1IDT
   SomeIpProtocolGetStaticSize<TpPack,
                                // Config of struct length field (/CppImplementationDataTypes/VehMtnStSafeGroup1IDT)
                                internal::LengthSize<deserialization::Tp<TpPack>::kSizeOfStructLengthField, typename deserialization::Tp<TpPack>::ByteOrder>

                               >(deserialization::SizeToken<::VehMtnStSafeGroup1IDT::VehMtnStSafeGroup1IDT>{})  + 
  
  // Accumulate the static size of struct member 'VehSpdIndcd1' of type /CppImplementationDataTypes/VehSpdIndcd1IDT
   SomeIpProtocolGetStaticSize<TpPack,
                                // Config of struct length field (/CppImplementationDataTypes/VehSpdIndcd1IDT)
                                internal::LengthSize<deserialization::Tp<TpPack>::kSizeOfStructLengthField, typename deserialization::Tp<TpPack>::ByteOrder>

                               >(deserialization::SizeToken<::VehSpdIndcd1IDT::VehSpdIndcd1IDT>{})  + 
  
  // Accumulate the static size of struct member 'VehSpdLgtSafe1Chkd' of type /CppImplementationDataTypes/VehSpdLgtSafe1ChkdIDT
   SomeIpProtocolGetStaticSize<TpPack,
                                // Config of struct length field (/CppImplementationDataTypes/VehSpdLgtSafe1ChkdIDT)
                                internal::LengthSize<deserialization::Tp<TpPack>::kSizeOfStructLengthField, typename deserialization::Tp<TpPack>::ByteOrder>

                               >(deserialization::SizeToken<::VehSpdLgtSafe1ChkdIDT::VehSpdLgtSafe1ChkdIDT>{})  + 
  
  // Accumulate the static size of struct member 'Vin1Vcc' of type /CppImplementationDataTypes/Vin1VccIDT
   SomeIpProtocolGetStaticSize<TpPack,
                                // Config of struct length field (/CppImplementationDataTypes/Vin1VccIDT)
                                internal::LengthSize<deserialization::Tp<TpPack>::kSizeOfStructLengthField, typename deserialization::Tp<TpPack>::ByteOrder>

                               >(deserialization::SizeToken<::Vin1VccIDT::Vin1VccIDT>{})  + 
  
  // Accumulate the static size of struct member 'WhlInfoGroup' of type /CppImplementationDataTypes/WhlInfoGroupIDT
   SomeIpProtocolGetStaticSize<TpPack,
                                // Config of struct length field (/CppImplementationDataTypes/WhlInfoGroupIDT)
                                internal::LengthSize<deserialization::Tp<TpPack>::kSizeOfStructLengthField, typename deserialization::Tp<TpPack>::ByteOrder>

                               >(deserialization::SizeToken<::WhlInfoGroupIDT::WhlInfoGroupIDT>{})  + 
  
  // Accumulate the static size of struct member 'WipgInfoGroup' of type /CppImplementationDataTypes/WipgInfoGroupIDT
   SomeIpProtocolGetStaticSize<TpPack,
                                // Config of struct length field (/CppImplementationDataTypes/WipgInfoGroupIDT)
                                internal::LengthSize<deserialization::Tp<TpPack>::kSizeOfStructLengthField, typename deserialization::Tp<TpPack>::ByteOrder>

                               >(deserialization::SizeToken<::WipgInfoGroupIDT::WipgInfoGroupIDT>{})  + 
  
  // Accumulate the static size of struct member 'BkpOfDstTrvld' of type /CppImplementationDataTypes/uint32_t
   SomeIpProtocolGetStaticSize<TpPack,
                                // Byte-order of primitive datatype (/CppImplementationDataTypes/uint32_t)
                                typename deserialization::Tp<TpPack>::ByteOrder

                               >(deserialization::SizeToken<::uint32IDT::uint32IDT>{})  + 
  
  // Accumulate the static size of struct member 'FogSetFrntReq' of type /CppImplementationDataTypes/OnOff1_2IDT
   SomeIpProtocolGetStaticSize<TpPack,
                                // Byte-order of primitive datatype (/CppImplementationDataTypes/OnOff1_2IDT)
                                typename deserialization::Tp<TpPack>::ByteOrder

                               >(deserialization::SizeToken<::OnOff1_2IDT::OnOff1_2IDT>{})  + 
  
  // Accumulate the static size of struct member 'FogSetReReq' of type /CppImplementationDataTypes/OnOff1_2IDT
   SomeIpProtocolGetStaticSize<TpPack,
                                // Byte-order of primitive datatype (/CppImplementationDataTypes/OnOff1_2IDT)
                                typename deserialization::Tp<TpPack>::ByteOrder

                               >(deserialization::SizeToken<::OnOff1_2IDT::OnOff1_2IDT>{})  + 
  
  // Accumulate the static size of struct member 'OffsForSpdWarnSetgReq' of type /CppImplementationDataTypes/OffsForSpdWarnSetgReqIDT
   SomeIpProtocolGetStaticSize<TpPack,
                                // Byte-order of primitive datatype (/CppImplementationDataTypes/OffsForSpdWarnSetgReqIDT)
                                typename deserialization::Tp<TpPack>::ByteOrder

                               >(deserialization::SizeToken<::OffsForSpdWarnSetgReqIDT::OffsForSpdWarnSetgReqIDT>{})  + 
  
  // Accumulate the static size of struct member 'OffsForSpdWarnSetgReqSts' of type /CppImplementationDataTypes/SetgReqSts1VccIDT
   SomeIpProtocolGetStaticSize<TpPack,
                                // Byte-order of primitive datatype (/CppImplementationDataTypes/SetgReqSts1VccIDT)
                                typename deserialization::Tp<TpPack>::ByteOrder

                               >(deserialization::SizeToken<::SetgReqSts1VccIDT::SetgReqSts1VccIDT>{})  + 
  
  // Accumulate the static size of struct member 'CtryCodInfo' of type /CppImplementationDataTypes/uint16_t
   SomeIpProtocolGetStaticSize<TpPack,
                                // Byte-order of primitive datatype (/CppImplementationDataTypes/uint16_t)
                                typename deserialization::Tp<TpPack>::ByteOrder

                               >(deserialization::SizeToken<::uint16IDT::uint16IDT>{})  + 
  
  // Accumulate the static size of struct member 'CurrentRoadLvl' of type /CppImplementationDataTypes/CurrentRoadLvl1VccIDT
   SomeIpProtocolGetStaticSize<TpPack,
                                // Byte-order of primitive datatype (/CppImplementationDataTypes/CurrentRoadLvl1VccIDT)
                                typename deserialization::Tp<TpPack>::ByteOrder

                               >(deserialization::SizeToken<::CurrentRoadLvl1VccIDT::CurrentRoadLvl1VccIDT>{})  + 
  
  // Accumulate the static size of struct member 'DoorLeReSts' of type /CppImplementationDataTypes/DoorSts2VccIDT
   SomeIpProtocolGetStaticSize<TpPack,
                                // Byte-order of primitive datatype (/CppImplementationDataTypes/DoorSts2VccIDT)
                                typename deserialization::Tp<TpPack>::ByteOrder

                               >(deserialization::SizeToken<::DoorSts2VccIDT::DoorSts2VccIDT>{})  + 
  
  // Accumulate the static size of struct member 'DoorPassSts' of type /CppImplementationDataTypes/DoorSts2VccIDT
   SomeIpProtocolGetStaticSize<TpPack,
                                // Byte-order of primitive datatype (/CppImplementationDataTypes/DoorSts2VccIDT)
                                typename deserialization::Tp<TpPack>::ByteOrder

                               >(deserialization::SizeToken<::DoorSts2VccIDT::DoorSts2VccIDT>{})  + 
  
  // Accumulate the static size of struct member 'DoorRiReSts' of type /CppImplementationDataTypes/DoorSts2VccIDT
   SomeIpProtocolGetStaticSize<TpPack,
                                // Byte-order of primitive datatype (/CppImplementationDataTypes/DoorSts2VccIDT)
                                typename deserialization::Tp<TpPack>::ByteOrder

                               >(deserialization::SizeToken<::DoorSts2VccIDT::DoorSts2VccIDT>{})  + 
  
  // Accumulate the static size of struct member 'DrvrDesDir1Vcc' of type /CppImplementationDataTypes/DrvrDesDir1VccIDT
   SomeIpProtocolGetStaticSize<TpPack,
                                // Byte-order of primitive datatype (/CppImplementationDataTypes/DrvrDesDir1VccIDT)
                                typename deserialization::Tp<TpPack>::ByteOrder

                               >(deserialization::SizeToken<::DrvrDesDir1VccIDT::DrvrDesDir1VccIDT>{})  + 
  
  // Accumulate the static size of struct member 'EpbSts' of type /CppImplementationDataTypes/EpbSts1VccIDT
   SomeIpProtocolGetStaticSize<TpPack,
                                // Byte-order of primitive datatype (/CppImplementationDataTypes/EpbSts1VccIDT)
                                typename deserialization::Tp<TpPack>::ByteOrder

                               >(deserialization::SizeToken<::EpbSts1VccIDT::EpbSts1VccIDT>{})  + 
  
  // Accumulate the static size of struct member 'ExtrLtgStsFrntFog' of type /CppImplementationDataTypes/DevSts4IDT
   SomeIpProtocolGetStaticSize<TpPack,
                                // Byte-order of primitive datatype (/CppImplementationDataTypes/DevSts4IDT)
                                typename deserialization::Tp<TpPack>::ByteOrder

                               >(deserialization::SizeToken<::DevSts4IDT::DevSts4IDT>{})  + 
  
  // Accumulate the static size of struct member 'ExtrLtgStsReFog' of type /CppImplementationDataTypes/DevSts4IDT
   SomeIpProtocolGetStaticSize<TpPack,
                                // Byte-order of primitive datatype (/CppImplementationDataTypes/DevSts4IDT)
                                typename deserialization::Tp<TpPack>::ByteOrder

                               >(deserialization::SizeToken<::DevSts4IDT::DevSts4IDT>{})  + 
  
  // Accumulate the static size of struct member 'FrontFourDRadarStsForDim' of type /CppImplementationDataTypes/RsdsMstStIDT
   SomeIpProtocolGetStaticSize<TpPack,
                                // Byte-order of primitive datatype (/CppImplementationDataTypes/RsdsMstStIDT)
                                typename deserialization::Tp<TpPack>::ByteOrder

                               >(deserialization::SizeToken<::RsdsMstStIDT::RsdsMstStIDT>{})  + 
  
  // Accumulate the static size of struct member 'GearLvr' of type /CppImplementationDataTypes/GearLvrIDT
   SomeIpProtocolGetStaticSize<TpPack,
                                // Byte-order of primitive datatype (/CppImplementationDataTypes/GearLvrIDT)
                                typename deserialization::Tp<TpPack>::ByteOrder

                               >(deserialization::SizeToken<::GearLvrIDT::GearLvrIDT>{})  + 
  
  // Accumulate the static size of struct member 'HoodSts' of type /CppImplementationDataTypes/DoorSts2VccIDT
   SomeIpProtocolGetStaticSize<TpPack,
                                // Byte-order of primitive datatype (/CppImplementationDataTypes/DoorSts2VccIDT)
                                typename deserialization::Tp<TpPack>::ByteOrder

                               >(deserialization::SizeToken<::DoorSts2VccIDT::DoorSts2VccIDT>{})  + 
  
  // Accumulate the static size of struct member 'HznSplyElectcSts1' of type /CppImplementationDataTypes/HznSplyElectcSts1IDT
   SomeIpProtocolGetStaticSize<TpPack,
                                // Byte-order of primitive datatype (/CppImplementationDataTypes/HznSplyElectcSts1IDT)
                                typename deserialization::Tp<TpPack>::ByteOrder

                               >(deserialization::SizeToken<::HznSplyElectcSts1IDT::HznSplyElectcSts1IDT>{})  + 
  
  // Accumulate the static size of struct member 'MiscTrfcSgnInfoFromNavMap' of type /CppImplementationDataTypes/TrfcInfoMiscFirst1IDT
   SomeIpProtocolGetStaticSize<TpPack,
                                // Byte-order of primitive datatype (/CppImplementationDataTypes/TrfcInfoMiscFirst1IDT)
                                typename deserialization::Tp<TpPack>::ByteOrder

                               >(deserialization::SizeToken<::TrfcInfoMiscFirst1IDT::TrfcInfoMiscFirst1IDT>{})  + 
  
  // Accumulate the static size of struct member 'NavInfoSts' of type /CppImplementationDataTypes/NoYes1VccIDT
   SomeIpProtocolGetStaticSize<TpPack,
                                // Byte-order of primitive datatype (/CppImplementationDataTypes/NoYes1VccIDT)
                                typename deserialization::Tp<TpPack>::ByteOrder

                               >(deserialization::SizeToken<::NoYes1VccIDT::NoYes1VccIDT>{})  + 
  
  // Accumulate the static size of struct member 'RainfallAmnt' of type /CppImplementationDataTypes/AmntSnsrIDT
   SomeIpProtocolGetStaticSize<TpPack,
                                // Byte-order of primitive datatype (/CppImplementationDataTypes/AmntSnsrIDT)
                                typename deserialization::Tp<TpPack>::ByteOrder

                               >(deserialization::SizeToken<::AmntSnsrIDT::AmntSnsrIDT>{})  + 
  
  // Accumulate the static size of struct member 'RoadMiscSgnInfoForRoadSgnInfoSts' of type /CppImplementationDataTypes/OnOff1VccIDT
   SomeIpProtocolGetStaticSize<TpPack,
                                // Byte-order of primitive datatype (/CppImplementationDataTypes/OnOff1VccIDT)
                                typename deserialization::Tp<TpPack>::ByteOrder

                               >(deserialization::SizeToken<::OnOff1VccIDT::OnOff1VccIDT>{})  + 
  
  // Accumulate the static size of struct member 'SpdCamFromNavMap' of type /CppImplementationDataTypes/uint8_t
   SomeIpProtocolGetStaticSize<TpPack,
                                // Byte-order of primitive datatype (/CppImplementationDataTypes/uint8_t)
                                typename deserialization::Tp<TpPack>::ByteOrder

                               >(deserialization::SizeToken<::uint8IDT::uint8IDT>{})  + 
  
  // Accumulate the static size of struct member 'SpdLimOfRoad' of type /CppImplementationDataTypes/uint8_t
   SomeIpProtocolGetStaticSize<TpPack,
                                // Byte-order of primitive datatype (/CppImplementationDataTypes/uint8_t)
                                typename deserialization::Tp<TpPack>::ByteOrder

                               >(deserialization::SizeToken<::uint8IDT::uint8IDT>{})  + 
  
  // Accumulate the static size of struct member 'SpplTrfcSgnInfoFromNavMap' of type /CppImplementationDataTypes/SpplTrfcSgnInfo1IDT
   SomeIpProtocolGetStaticSize<TpPack,
                                // Byte-order of primitive datatype (/CppImplementationDataTypes/SpplTrfcSgnInfo1IDT)
                                typename deserialization::Tp<TpPack>::ByteOrder

                               >(deserialization::SizeToken<::SpplTrfcSgnInfo1IDT::SpplTrfcSgnInfo1IDT>{})  + 
  
  // Accumulate the static size of struct member 'TrSts' of type /CppImplementationDataTypes/DoorSts2VccIDT
   SomeIpProtocolGetStaticSize<TpPack,
                                // Byte-order of primitive datatype (/CppImplementationDataTypes/DoorSts2VccIDT)
                                typename deserialization::Tp<TpPack>::ByteOrder

                               >(deserialization::SizeToken<::DoorSts2VccIDT::DoorSts2VccIDT>{})  + 
  
  // Accumulate the static size of struct member 'TwliBriSts' of type /CppImplementationDataTypes/TwliBriSts1VccIDT
   SomeIpProtocolGetStaticSize<TpPack,
                                // Byte-order of primitive datatype (/CppImplementationDataTypes/TwliBriSts1VccIDT)
                                typename deserialization::Tp<TpPack>::ByteOrder

                               >(deserialization::SizeToken<::TwliBriSts1VccIDT::TwliBriSts1VccIDT>{})  + 
  
  // Accumulate the static size of struct member 'CarTiGlbTi' of type /CppImplementationDataTypes/float
   SomeIpProtocolGetStaticSize<TpPack,
                                // Byte-order of primitive datatype (/CppImplementationDataTypes/float)
                                typename deserialization::Tp<TpPack>::ByteOrder

                               >(deserialization::SizeToken<::float32IDT::float32IDT>{})  + 
  
  // Accumulate the static size of struct member 'HznDataCountryCode' of type /CppImplementationDataTypes/uint16_t
   SomeIpProtocolGetStaticSize<TpPack,
                                // Byte-order of primitive datatype (/CppImplementationDataTypes/uint16_t)
                                typename deserialization::Tp<TpPack>::ByteOrder

                               >(deserialization::SizeToken<::uint16IDT::uint16IDT>{})  + 
  
  // Accumulate the static size of struct member 'TurnIndcrMonostable' of type /CppImplementationDataTypes/TurnIndcrMonostable1VccIDT
   SomeIpProtocolGetStaticSize<TpPack,
                                // Config of struct length field (/CppImplementationDataTypes/TurnIndcrMonostable1VccIDT)
                                internal::LengthSize<deserialization::Tp<TpPack>::kSizeOfStructLengthField, typename deserialization::Tp<TpPack>::ByteOrder>

                               >(deserialization::SizeToken<::TurnIndcrMonostable1VccIDT::TurnIndcrMonostable1VccIDT>{})  + 
  
  // Accumulate the static size of struct member 'CrossInfo' of type /CppImplementationDataTypes/CrossInfo1VccIDT
   SomeIpProtocolGetStaticSize<TpPack,
                                // Config of struct length field (/CppImplementationDataTypes/CrossInfo1VccIDT)
                                internal::LengthSize<deserialization::Tp<TpPack>::kSizeOfStructLengthField, typename deserialization::Tp<TpPack>::ByteOrder>

                               >(deserialization::SizeToken<::CrossInfo1VccIDT::CrossInfo1VccIDT>{})  + 
  
  // Accumulate the static size of struct member 'PlannedPahDe' of type /CppImplementationDataTypes/NoYesCrit1VccIDT
   SomeIpProtocolGetStaticSize<TpPack,
                                // Byte-order of primitive datatype (/CppImplementationDataTypes/NoYesCrit1VccIDT)
                                typename deserialization::Tp<TpPack>::ByteOrder

                               >(deserialization::SizeToken<::NoYesCrit1VccIDT::NoYesCrit1VccIDT>{})  + 
  
  // Accumulate the static size of struct member 'LatCtrlModCfmd' of type /CppImplementationDataTypes/LatCtrlMod1VccIDT
   SomeIpProtocolGetStaticSize<TpPack,
                                // Byte-order of primitive datatype (/CppImplementationDataTypes/LatCtrlMod1VccIDT)
                                typename deserialization::Tp<TpPack>::ByteOrder

                               >(deserialization::SizeToken<::LatCtrlMod1VccIDT::LatCtrlMod1VccIDT>{})  + 
  
  // Accumulate the static size of struct member 'AsyAutDrvCtrlTypDIMReq' of type /CppImplementationDataTypes/AsyAutDrvCtrlTyp1VccIDT
   SomeIpProtocolGetStaticSize<TpPack,
                                // Byte-order of primitive datatype (/CppImplementationDataTypes/AsyAutDrvCtrlTyp1VccIDT)
                                typename deserialization::Tp<TpPack>::ByteOrder

                               >(deserialization::SizeToken<::AsyAutDrvCtrlTyp1VccIDT::AsyAutDrvCtrlTyp1VccIDT>{})  + 
  
  // Accumulate the static size of struct member 'AutoLaneChgStyleSwSts' of type /CppImplementationDataTypes/HmiAutoLaneChgStyle1VccIDT
   SomeIpProtocolGetStaticSize<TpPack,
                                // Byte-order of primitive datatype (/CppImplementationDataTypes/HmiAutoLaneChgStyle1VccIDT)
                                typename deserialization::Tp<TpPack>::ByteOrder

                               >(deserialization::SizeToken<::HmiAutoLaneChgStyle1VccIDT::HmiAutoLaneChgStyle1VccIDT>{})  + 
  
  // Accumulate the static size of struct member 'PtDrvrSetg' of type /CppImplementationDataTypes/PtDrvrSetg1VccIDT
   SomeIpProtocolGetStaticSize<TpPack,
                                // Config of struct length field (/CppImplementationDataTypes/PtDrvrSetg1VccIDT)
                                internal::LengthSize<deserialization::Tp<TpPack>::kSizeOfStructLengthField, typename deserialization::Tp<TpPack>::ByteOrder>

                               >(deserialization::SizeToken<::PtDrvrSetg1VccIDT::PtDrvrSetg1VccIDT>{})  + 
  
  // Accumulate the static size of struct member 'DrvrLaneChgAutActvSts' of type /CppImplementationDataTypes/OnOff1VccIDT
   SomeIpProtocolGetStaticSize<TpPack,
                                // Byte-order of primitive datatype (/CppImplementationDataTypes/OnOff1VccIDT)
                                typename deserialization::Tp<TpPack>::ByteOrder

                               >(deserialization::SizeToken<::OnOff1VccIDT::OnOff1VccIDT>{})  + 
  
  // Accumulate the static size of struct member 'NOPCofmOfLanChagOnoff' of type /CppImplementationDataTypes/OnOff1VccIDT
   SomeIpProtocolGetStaticSize<TpPack,
                                // Byte-order of primitive datatype (/CppImplementationDataTypes/OnOff1VccIDT)
                                typename deserialization::Tp<TpPack>::ByteOrder

                               >(deserialization::SizeToken<::OnOff1VccIDT::OnOff1VccIDT>{})  + 
  
  // Accumulate the static size of struct member 'HmiSodLanChgSwitch' of type /CppImplementationDataTypes/OnOff1VccIDT
   SomeIpProtocolGetStaticSize<TpPack,
                                // Byte-order of primitive datatype (/CppImplementationDataTypes/OnOff1VccIDT)
                                typename deserialization::Tp<TpPack>::ByteOrder

                               >(deserialization::SizeToken<::OnOff1VccIDT::OnOff1VccIDT>{})  + 
  
  // Accumulate the static size of struct member 'HmiDrvrSodReqChg' of type /CppImplementationDataTypes/ReqChg1VccIDT
   SomeIpProtocolGetStaticSize<TpPack,
                                // Byte-order of primitive datatype (/CppImplementationDataTypes/ReqChg1VccIDT)
                                typename deserialization::Tp<TpPack>::ByteOrder

                               >(deserialization::SizeToken<::ReqChg1VccIDT::ReqChg1VccIDT>{})  + 
  
  // Accumulate the static size of struct member 'EyeOnRoadFromDHU' of type /CppImplementationDataTypes/EyeOnRoadFromDHUIDT
   SomeIpProtocolGetStaticSize<TpPack,
                                // Byte-order of primitive datatype (/CppImplementationDataTypes/EyeOnRoadFromDHUIDT)
                                typename deserialization::Tp<TpPack>::ByteOrder

                               >(deserialization::SizeToken<::EyeOnRoadFromDHUIDT::EyeOnRoadFromDHUIDT>{})  + 
  
  // Accumulate the static size of struct member 'DrvrSteerWhlHldGroup' of type /CppImplementationDataTypes/DrvrSteerWhlHldGroup0IDT
   SomeIpProtocolGetStaticSize<TpPack,
                                // Config of struct length field (/CppImplementationDataTypes/DrvrSteerWhlHldGroup0IDT)
                                internal::LengthSize<deserialization::Tp<TpPack>::kSizeOfStructLengthField, typename deserialization::Tp<TpPack>::ByteOrder>

                               >(deserialization::SizeToken<::DrvrSteerWhlHldGroup0IDT::DrvrSteerWhlHldGroup0IDT>{})  + 
  
  // Accumulate the static size of struct member 'TiGap' of type /CppImplementationDataTypes/TiGapPen1IDT
   SomeIpProtocolGetStaticSize<TpPack,
                                // Config of struct length field (/CppImplementationDataTypes/TiGapPen1IDT)
                                internal::LengthSize<deserialization::Tp<TpPack>::kSizeOfStructLengthField, typename deserialization::Tp<TpPack>::ByteOrder>

                               >(deserialization::SizeToken<::TiGapPen1IDT::TiGapPen1IDT>{})  + 
  
  // Accumulate the static size of struct member 'BrkPedlrRat' of type /CppImplementationDataTypes/BrkPedlrRatIDT
   SomeIpProtocolGetStaticSize<TpPack,
                                // Config of struct length field (/CppImplementationDataTypes/BrkPedlrRatIDT)
                                internal::LengthSize<deserialization::Tp<TpPack>::kSizeOfStructLengthField, typename deserialization::Tp<TpPack>::ByteOrder>

                               >(deserialization::SizeToken<::BrkPedlrRatIDT::BrkPedlrRatIDT>{})  + 
  
  // Accumulate the static size of struct member 'DrvrACCFctDeactvnReq' of type /CppImplementationDataTypes/OnOff1VccIDT
   SomeIpProtocolGetStaticSize<TpPack,
                                // Byte-order of primitive datatype (/CppImplementationDataTypes/OnOff1VccIDT)
                                typename deserialization::Tp<TpPack>::ByteOrder

                               >(deserialization::SizeToken<::OnOff1VccIDT::OnOff1VccIDT>{})  + 
  
  // Accumulate the static size of struct member 'DrvrCrsCtrlFctActvReq' of type /CppImplementationDataTypes/DrvrCrsCtrlFctActvReq1VccIDT
   SomeIpProtocolGetStaticSize<TpPack,
                                // Byte-order of primitive datatype (/CppImplementationDataTypes/DrvrCrsCtrlFctActvReq1VccIDT)
                                typename deserialization::Tp<TpPack>::ByteOrder

                               >(deserialization::SizeToken<::DrvrCrsCtrlFctActvReq1VccIDT::DrvrCrsCtrlFctActvReq1VccIDT>{})  + 
  
  // Accumulate the static size of struct member 'AsyNoaUpgradeswitch' of type /CppImplementationDataTypes/OnOff1VccIDT
   SomeIpProtocolGetStaticSize<TpPack,
                                // Byte-order of primitive datatype (/CppImplementationDataTypes/OnOff1VccIDT)
                                typename deserialization::Tp<TpPack>::ByteOrder

                               >(deserialization::SizeToken<::OnOff1VccIDT::OnOff1VccIDT>{})  + 
  
  // Accumulate the static size of struct member 'VehDynCtrlStsForALgtCmft' of type /CppImplementationDataTypes/VehDynCtrlStsForALgtCmftRec1IDT
   SomeIpProtocolGetStaticSize<TpPack,
                                // Config of struct length field (/CppImplementationDataTypes/VehDynCtrlStsForALgtCmftRec1IDT)
                                internal::LengthSize<deserialization::Tp<TpPack>::kSizeOfStructLengthField, typename deserialization::Tp<TpPack>::ByteOrder>

                               >(deserialization::SizeToken<::VehDynCtrlStsForALgtCmftRec1IDT::VehDynCtrlStsForALgtCmftRec1IDT>{})  + 
  
  // Accumulate the static size of struct member 'InhbOfAsySftyDecelByVehDyn' of type /CppImplementationDataTypes/InhbOfAsySftyDecelByVehDyn1VccIDT
   SomeIpProtocolGetStaticSize<TpPack,
                                // Byte-order of primitive datatype (/CppImplementationDataTypes/InhbOfAsySftyDecelByVehDyn1VccIDT)
                                typename deserialization::Tp<TpPack>::ByteOrder

                               >(deserialization::SizeToken<::InhbOfAsySftyDecelByVehDyn1VccIDT::InhbOfAsySftyDecelByVehDyn1VccIDT>{})  + 
  
  // Accumulate the static size of struct member 'ADModCtrlInhbn' of type /CppImplementationDataTypes/ADModCtrlInhbn1VccIDT
   SomeIpProtocolGetStaticSize<TpPack,
                                // Config of struct length field (/CppImplementationDataTypes/ADModCtrlInhbn1VccIDT)
                                internal::LengthSize<deserialization::Tp<TpPack>::kSizeOfStructLengthField, typename deserialization::Tp<TpPack>::ByteOrder>

                               >(deserialization::SizeToken<::ADModCtrlInhbn1VccIDT::ADModCtrlInhbn1VccIDT>{})  + 
  
  // Accumulate the static size of struct member 'DrvModReq' of type /CppImplementationDataTypes/DrvModReqIDT
   SomeIpProtocolGetStaticSize<TpPack,
                                // Byte-order of primitive datatype (/CppImplementationDataTypes/DrvModReqIDT)
                                typename deserialization::Tp<TpPack>::ByteOrder

                               >(deserialization::SizeToken<::DrvModReqIDT::DrvModReqIDT>{})  + 
  
  // Accumulate the static size of struct member 'DrvrSteerActv' of type /CppImplementationDataTypes/DrvrSteerActv1VccIDT
   SomeIpProtocolGetStaticSize<TpPack,
                                // Config of struct length field (/CppImplementationDataTypes/DrvrSteerActv1VccIDT)
                                internal::LengthSize<deserialization::Tp<TpPack>::kSizeOfStructLengthField, typename deserialization::Tp<TpPack>::ByteOrder>

                               >(deserialization::SizeToken<::DrvrSteerActv1VccIDT::DrvrSteerActv1VccIDT>{})  + 
  
  // Accumulate the static size of struct member 'EscWarnIndcnReq' of type /CppImplementationDataTypes/EscWarnIndcnReqRec1VccIDT
   SomeIpProtocolGetStaticSize<TpPack,
                                // Config of struct length field (/CppImplementationDataTypes/EscWarnIndcnReqRec1VccIDT)
                                internal::LengthSize<deserialization::Tp<TpPack>::kSizeOfStructLengthField, typename deserialization::Tp<TpPack>::ByteOrder>

                               >(deserialization::SizeToken<::EscWarnIndcnReqRec1VccIDT::EscWarnIndcnReqRec1VccIDT>{})  + 
  
  // Accumulate the static size of struct member 'EyeGazeFromDHU' of type /CppImplementationDataTypes/EyeGaze3VccIDT
   SomeIpProtocolGetStaticSize<TpPack,
                                // Config of struct length field (/CppImplementationDataTypes/EyeGaze3VccIDT)
                                internal::LengthSize<deserialization::Tp<TpPack>::kSizeOfStructLengthField, typename deserialization::Tp<TpPack>::ByteOrder>

                               >(deserialization::SizeToken<::EyeGaze3VccIDT::EyeGaze3VccIDT>{})  + 
  
  // Accumulate the static size of struct member 'TwliBriRaw' of type /CppImplementationDataTypes/float
   SomeIpProtocolGetStaticSize<TpPack,
                                // Byte-order of primitive datatype (/CppImplementationDataTypes/float)
                                typename deserialization::Tp<TpPack>::ByteOrder

                               >(deserialization::SizeToken<::singleIDT::singleIDT>{})  + 
  
  // Accumulate the static size of struct member 'ADDimLight' of type /CppImplementationDataTypes/ADDimLight1VccIDT
   SomeIpProtocolGetStaticSize<TpPack,
                                // Byte-order of primitive datatype (/CppImplementationDataTypes/ADDimLight1VccIDT)
                                typename deserialization::Tp<TpPack>::ByteOrder

                               >(deserialization::SizeToken<::ADDimLight1VccIDT::ADDimLight1VccIDT>{})  + 
  
  // Accumulate the static size of struct member 'CpmswOnOff' of type /CppImplementationDataTypes/OnOff1VccIDT
   SomeIpProtocolGetStaticSize<TpPack,
                                // Byte-order of primitive datatype (/CppImplementationDataTypes/OnOff1VccIDT)
                                typename deserialization::Tp<TpPack>::ByteOrder

                               >(deserialization::SizeToken<::OnOff1VccIDT::OnOff1VccIDT>{})  + 
  
  // Accumulate the static size of struct member 'CrsCtrlTiGapAdjReq' of type /CppImplementationDataTypes/TiGapSetForLgtCtrl1VccIDT
   SomeIpProtocolGetStaticSize<TpPack,
                                // Byte-order of primitive datatype (/CppImplementationDataTypes/TiGapSetForLgtCtrl1VccIDT)
                                typename deserialization::Tp<TpPack>::ByteOrder

                               >(deserialization::SizeToken<::TiGapSetForLgtCtrl1VccIDT::TiGapSetForLgtCtrl1VccIDT>{})  + 
  
  // Accumulate the static size of struct member 'CllsnMtgtnFctSts' of type /CppImplementationDataTypes/CllsnMtgtnFctSts1VccIDT
   SomeIpProtocolGetStaticSize<TpPack,
                                // Byte-order of primitive datatype (/CppImplementationDataTypes/CllsnMtgtnFctSts1VccIDT)
                                typename deserialization::Tp<TpPack>::ByteOrder

                               >(deserialization::SizeToken<::CllsnMtgtnFctSts1VccIDT::CllsnMtgtnFctSts1VccIDT>{})  + 
  
  // Accumulate the static size of struct member 'DrvOffReqForLgtCtrl' of type /CppImplementationDataTypes/Bool1VccIDT
   SomeIpProtocolGetStaticSize<TpPack,
                                // Byte-order of primitive datatype (/CppImplementationDataTypes/Bool1VccIDT)
                                typename deserialization::Tp<TpPack>::ByteOrder

                               >(deserialization::SizeToken<::Bool1VccIDT::Bool1VccIDT>{})  + 
  
  // Accumulate the static size of struct member 'AsyActrActvForLgtCtrl' of type /CppImplementationDataTypes/AsyActrActvForLgtCtrlIDT
   SomeIpProtocolGetStaticSize<TpPack,
                                // Byte-order of primitive datatype (/CppImplementationDataTypes/AsyActrActvForLgtCtrlIDT)
                                typename deserialization::Tp<TpPack>::ByteOrder

                               >(deserialization::SizeToken<::AsyActrActvForLgtCtrlIDT::AsyActrActvForLgtCtrlIDT>{})  + 
  
  // Accumulate the static size of struct member 'AsyLaneChgWarnMod' of type /CppImplementationDataTypes/ChgWarnMod1VccIDT
   SomeIpProtocolGetStaticSize<TpPack,
                                // Byte-order of primitive datatype (/CppImplementationDataTypes/ChgWarnMod1VccIDT)
                                typename deserialization::Tp<TpPack>::ByteOrder

                               >(deserialization::SizeToken<::ChgWarnMod1VccIDT::ChgWarnMod1VccIDT>{})  + 
  
  // Accumulate the static size of struct member 'DrvrACCrsSetSpdReq' of type /CppImplementationDataTypes/DrvrACCrsSetSpdReq1VccIDT
   SomeIpProtocolGetStaticSize<TpPack,
                                // Config of struct length field (/CppImplementationDataTypes/DrvrACCrsSetSpdReq1VccIDT)
                                internal::LengthSize<deserialization::Tp<TpPack>::kSizeOfStructLengthField, typename deserialization::Tp<TpPack>::ByteOrder>

                               >(deserialization::SizeToken<::DrvrACCrsSetSpdReq1VccIDT::DrvrACCrsSetSpdReq1VccIDT>{})  + 
  
  // Accumulate the static size of struct member 'LcmaLedStsDrvrSide' of type /CppImplementationDataTypes/YesNo1VccIDT
   SomeIpProtocolGetStaticSize<TpPack,
                                // Byte-order of primitive datatype (/CppImplementationDataTypes/YesNo1VccIDT)
                                typename deserialization::Tp<TpPack>::ByteOrder

                               >(deserialization::SizeToken<::YesNo1VccIDT::YesNo1VccIDT>{})  + 
  
  // Accumulate the static size of struct member 'LcmaLedStsPassSide' of type /CppImplementationDataTypes/YesNo1VccIDT
   SomeIpProtocolGetStaticSize<TpPack,
                                // Byte-order of primitive datatype (/CppImplementationDataTypes/YesNo1VccIDT)
                                typename deserialization::Tp<TpPack>::ByteOrder

                               >(deserialization::SizeToken<::YesNo1VccIDT::YesNo1VccIDT>{})  + 
  
  // Accumulate the static size of struct member 'LaneChgWarnSts' of type /CppImplementationDataTypes/OnOff1VccIDT
   SomeIpProtocolGetStaticSize<TpPack,
                                // Byte-order of primitive datatype (/CppImplementationDataTypes/OnOff1VccIDT)
                                typename deserialization::Tp<TpPack>::ByteOrder

                               >(deserialization::SizeToken<::OnOff1VccIDT::OnOff1VccIDT>{})  + 
  
  // Accumulate the static size of struct member 'AsySteerWhlHptcWarnReq' of type /CppImplementationDataTypes/OnOff1VccIDT
   SomeIpProtocolGetStaticSize<TpPack,
                                // Byte-order of primitive datatype (/CppImplementationDataTypes/OnOff1VccIDT)
                                typename deserialization::Tp<TpPack>::ByteOrder

                               >(deserialization::SizeToken<::OnOff1VccIDT::OnOff1VccIDT>{})  + 
  
  // Accumulate the static size of struct member 'StopReqOfLgtCtrlForPrpsn' of type /CppImplementationDataTypes/NoYes1VccIDT
   SomeIpProtocolGetStaticSize<TpPack,
                                // Byte-order of primitive datatype (/CppImplementationDataTypes/NoYes1VccIDT)
                                typename deserialization::Tp<TpPack>::ByteOrder

                               >(deserialization::SizeToken<::NoYes1VccIDT::NoYes1VccIDT>{})  + 
  
  // Accumulate the static size of struct member 'StrtReqOfLgtCtrlForPrpsn' of type /CppImplementationDataTypes/NoYes1VccIDT
   SomeIpProtocolGetStaticSize<TpPack,
                                // Byte-order of primitive datatype (/CppImplementationDataTypes/NoYes1VccIDT)
                                typename deserialization::Tp<TpPack>::ByteOrder

                               >(deserialization::SizeToken<::NoYes1VccIDT::NoYes1VccIDT>{})  + 
  
  // Accumulate the static size of struct member 'AsyEmgyLaneKeepAidSts' of type /CppImplementationDataTypes/AsyALatSts1VccIDT
   SomeIpProtocolGetStaticSize<TpPack,
                                // Byte-order of primitive datatype (/CppImplementationDataTypes/AsyALatSts1VccIDT)
                                typename deserialization::Tp<TpPack>::ByteOrder

                               >(deserialization::SizeToken<::AsyALatSts1VccIDT::AsyALatSts1VccIDT>{})  + 
  
  // Accumulate the static size of struct member 'FrntSideRdrLeSts' of type /CppImplementationDataTypes/SideRdrSts2VccIDT
   SomeIpProtocolGetStaticSize<TpPack,
                                // Config of struct length field (/CppImplementationDataTypes/SideRdrSts2VccIDT)
                                internal::LengthSize<deserialization::Tp<TpPack>::kSizeOfStructLengthField, typename deserialization::Tp<TpPack>::ByteOrder>

                               >(deserialization::SizeToken<::SideRdrSts2VccIDT::SideRdrSts2VccIDT>{})  + 
  
  // Accumulate the static size of struct member 'FrntSideRdrRiSts' of type /CppImplementationDataTypes/SideRdrSts2VccIDT
   SomeIpProtocolGetStaticSize<TpPack,
                                // Config of struct length field (/CppImplementationDataTypes/SideRdrSts2VccIDT)
                                internal::LengthSize<deserialization::Tp<TpPack>::kSizeOfStructLengthField, typename deserialization::Tp<TpPack>::ByteOrder>

                               >(deserialization::SizeToken<::SideRdrSts2VccIDT::SideRdrSts2VccIDT>{})  + 
  
  // Accumulate the static size of struct member 'ReSideRdrLeSts' of type /CppImplementationDataTypes/SideRdrSts2VccIDT
   SomeIpProtocolGetStaticSize<TpPack,
                                // Config of struct length field (/CppImplementationDataTypes/SideRdrSts2VccIDT)
                                internal::LengthSize<deserialization::Tp<TpPack>::kSizeOfStructLengthField, typename deserialization::Tp<TpPack>::ByteOrder>

                               >(deserialization::SizeToken<::SideRdrSts2VccIDT::SideRdrSts2VccIDT>{})  + 
  
  // Accumulate the static size of struct member 'ReSideRdrRiSts' of type /CppImplementationDataTypes/SideRdrSts2VccIDT
   SomeIpProtocolGetStaticSize<TpPack,
                                // Config of struct length field (/CppImplementationDataTypes/SideRdrSts2VccIDT)
                                internal::LengthSize<deserialization::Tp<TpPack>::kSizeOfStructLengthField, typename deserialization::Tp<TpPack>::ByteOrder>

                               >(deserialization::SizeToken<::SideRdrSts2VccIDT::SideRdrSts2VccIDT>{}) 
  };
  return static_size;
}

}  // namespace ToSOCA_COMInfo1VCCIDT

#endif  // PERCEPTIONREAREXE_INCLUDE_AMSR_SOMEIP_PROTOCOL_INTERNAL_DATATYPE_DESERIALIZATION_TOSOCA_COMINFO1VCCIDT_DESERIALIZER_TOSOCA_COMINFO1VCCIDT_H_

