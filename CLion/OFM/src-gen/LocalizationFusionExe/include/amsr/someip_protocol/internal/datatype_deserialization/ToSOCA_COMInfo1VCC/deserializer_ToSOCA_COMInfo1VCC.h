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
/**        \file  LocalizationFusionExe/include/amsr/someip_protocol/internal/datatype_deserialization/ToSOCA_COMInfo1VCC/deserializer_ToSOCA_COMInfo1VCC.h
 *        \brief  SOME/IP protocol deserializer implementation for datatype 'ToSOCA_COMInfo1VCC'
 *
 *      \details  /CppImplementationDataTypes/ToSOCA_COMInfo1VCC
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 *  GENERATOR INFORMATION
 *  -------------------------------------------------------------------------------------------------------------------
 *    Generator Name: amsr_someipprotocol
 *         Commit ID: 3fd8aac035abb6fb6709609fe09ab84fd0e635d8
 *********************************************************************************************************************/

#ifndef LOCALIZATIONFUSIONEXE_INCLUDE_AMSR_SOMEIP_PROTOCOL_INTERNAL_DATATYPE_DESERIALIZATION_TOSOCA_COMINFO1VCC_DESERIALIZER_TOSOCA_COMINFO1VCC_H_
#define LOCALIZATIONFUSIONEXE_INCLUDE_AMSR_SOMEIP_PROTOCOL_INTERNAL_DATATYPE_DESERIALIZATION_TOSOCA_COMINFO1VCC_DESERIALIZER_TOSOCA_COMINFO1VCC_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include "ToSOCA_COMInfo1VCC/impl_type_tosoca_cominfo1vcc.h"
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
#include "someip-protocol/internal/deserialization/deser_wrapper.h"

namespace ToSOCA_COMInfo1VCC {

// VECTOR NC Metric-HIS.PATH: MD_SOMEIPPROTOCOL_Metric-HIS.PATH
/*!
 * \brief Deserializer for datatype /CppImplementationDataTypes/ToSOCA_COMInfo1VCC.
 * \details Data type class: DataTypeStruct (CppImplDataTypeStruct).
 *          is TLV struct: false
 *
 * \tparam TpPack Transformation properties to be used for deserialization.
 *
 * \param[in,out] reader Reference to byte stream reader.
 * \param[out]    data Reference to the data object of type /CppImplementationDataTypes/ToSOCA_COMInfo1VCC
 *                in which the deserialized value will be written.
 * \return        True if the deserialization is successful, false otherwise.
 * \pre           The static size provided by SomeIpProtocolGetStaticSize has been verified.
 * \context       Reactor|App
 * \threadsafe    FALSE
 * \reentrant     TRUE for different reader objects.
 * \synchronous   TRUE
 */
template <typename TpPack>
amsr::someip_protocol::internal::deserialization::Result SomeIpProtocolDeserialize(amsr::someip_protocol::internal::deserialization::Reader& reader, ::ToSOCA_COMInfo1VCC::ToSOCA_COMInfo1VCC &data) noexcept {
  // Namespace alias for static deserialization code
  namespace deserialization = amsr::someip_protocol::internal::deserialization;
  // Deserialize non-TLV struct
  deserialization::Result result{false};
  // Deserialize struct member 'AccFusnTrfcReq_ref' of type /CppImplementationDataTypes/AccFusnTrfcReq
  result = deserialization::SomeIpProtocolDeserialize<
          TpPack,
          // Config of struct length field (/CppImplementationDataTypes/AccFusnTrfcReq)
        deserialization::LengthSize<deserialization::Tp<TpPack>::kSizeOfStructLengthField, typename deserialization::Tp<TpPack>::ByteOrder>

          >(reader, data.AccFusnTrfcReq_ref);


  // Deserialize struct member 'AccrPedlPsd0_ref' of type /CppImplementationDataTypes/AccrPedlPsd0
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Config of struct length field (/CppImplementationDataTypes/AccrPedlPsd0)
        deserialization::LengthSize<deserialization::Tp<TpPack>::kSizeOfStructLengthField, typename deserialization::Tp<TpPack>::ByteOrder>

        >(reader, data.AccrPedlPsd0_ref);
  }

  // Deserialize struct member 'ALgtStdFromWhlSpdSafe1Chkd_ref' of type /CppImplementationDataTypes/ALgtStdFromWhlSpdSafe1Chkd
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Config of struct length field (/CppImplementationDataTypes/ALgtStdFromWhlSpdSafe1Chkd)
        deserialization::LengthSize<deserialization::Tp<TpPack>::kSizeOfStructLengthField, typename deserialization::Tp<TpPack>::ByteOrder>

        >(reader, data.ALgtStdFromWhlSpdSafe1Chkd_ref);
  }

  // Deserialize struct member 'AmbTRaw_ref' of type /CppImplementationDataTypes/AmbTRaw
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Config of struct length field (/CppImplementationDataTypes/AmbTRaw)
        deserialization::LengthSize<deserialization::Tp<TpPack>::kSizeOfStructLengthField, typename deserialization::Tp<TpPack>::ByteOrder>

        >(reader, data.AmbTRaw_ref);
  }

  // Deserialize struct member 'AsyDataWithCmpSafe1Chkd_ref' of type /CppImplementationDataTypes/AsyDataWithCmpSafe1Chkd
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Config of struct length field (/CppImplementationDataTypes/AsyDataWithCmpSafe1Chkd)
        deserialization::LengthSize<deserialization::Tp<TpPack>::kSizeOfStructLengthField, typename deserialization::Tp<TpPack>::ByteOrder>

        >(reader, data.AsyDataWithCmpSafe1Chkd_ref);
  }

  // Deserialize struct member 'BltLockStFrnt_ref' of type /CppImplementationDataTypes/BltLockStFrnt
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Config of struct length field (/CppImplementationDataTypes/BltLockStFrnt)
        deserialization::LengthSize<deserialization::Tp<TpPack>::kSizeOfStructLengthField, typename deserialization::Tp<TpPack>::ByteOrder>

        >(reader, data.BltLockStFrnt_ref);
  }

  // Deserialize struct member 'BrkPedlPsdRec_ref' of type /CppImplementationDataTypes/BrkPedlPsdRec
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Config of struct length field (/CppImplementationDataTypes/BrkPedlPsdRec)
        deserialization::LengthSize<deserialization::Tp<TpPack>::kSizeOfStructLengthField, typename deserialization::Tp<TpPack>::ByteOrder>

        >(reader, data.BrkPedlPsdRec_ref);
  }

  // Deserialize struct member 'EgoMotion_ref' of type /CppImplementationDataTypes/EgoMotion
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Config of struct length field (/CppImplementationDataTypes/EgoMotion)
        deserialization::LengthSize<deserialization::Tp<TpPack>::kSizeOfStructLengthField, typename deserialization::Tp<TpPack>::ByteOrder>

        >(reader, data.EgoMotion_ref);
  }

  // Deserialize struct member 'IndcrTurnReq_ref' of type /CppImplementationDataTypes/IndcrTurnReq
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Config of struct length field (/CppImplementationDataTypes/IndcrTurnReq)
        deserialization::LengthSize<deserialization::Tp<TpPack>::kSizeOfStructLengthField, typename deserialization::Tp<TpPack>::ByteOrder>

        >(reader, data.IndcrTurnReq_ref);
  }

  // Deserialize struct member 'PinionSteerAgGroup_ref' of type /CppImplementationDataTypes/PinionSteerAgGroup
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Config of struct length field (/CppImplementationDataTypes/PinionSteerAgGroup)
        deserialization::LengthSize<deserialization::Tp<TpPack>::kSizeOfStructLengthField, typename deserialization::Tp<TpPack>::ByteOrder>

        >(reader, data.PinionSteerAgGroup_ref);
  }

  // Deserialize struct member 'RoadSgnInfoActv0_ref' of type /CppImplementationDataTypes/RoadSgnInfoActv0
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Config of struct length field (/CppImplementationDataTypes/RoadSgnInfoActv0)
        deserialization::LengthSize<deserialization::Tp<TpPack>::kSizeOfStructLengthField, typename deserialization::Tp<TpPack>::ByteOrder>

        >(reader, data.RoadSgnInfoActv0_ref);
  }

  // Deserialize struct member 'SpdAlrmActvForRoadSgnInfo0_ref' of type /CppImplementationDataTypes/SpdAlrmActvForRoadSgnInfo0
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Config of struct length field (/CppImplementationDataTypes/SpdAlrmActvForRoadSgnInfo0)
        deserialization::LengthSize<deserialization::Tp<TpPack>::kSizeOfStructLengthField, typename deserialization::Tp<TpPack>::ByteOrder>

        >(reader, data.SpdAlrmActvForRoadSgnInfo0_ref);
  }

  // Deserialize struct member 'SteerWhlSnsrSafe1_ref' of type /CppImplementationDataTypes/SteerWhlSnsrSafe1
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Config of struct length field (/CppImplementationDataTypes/SteerWhlSnsrSafe1)
        deserialization::LengthSize<deserialization::Tp<TpPack>::kSizeOfStructLengthField, typename deserialization::Tp<TpPack>::ByteOrder>

        >(reader, data.SteerWhlSnsrSafe1_ref);
  }

  // Deserialize struct member 'TrfcLiActvSts_ref' of type /CppImplementationDataTypes/TrfcLiActvSts
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Config of struct length field (/CppImplementationDataTypes/TrfcLiActvSts)
        deserialization::LengthSize<deserialization::Tp<TpPack>::kSizeOfStructLengthField, typename deserialization::Tp<TpPack>::ByteOrder>

        >(reader, data.TrfcLiActvSts_ref);
  }

  // Deserialize struct member 'TrsmParkLockd_ref' of type /CppImplementationDataTypes/TrsmParkLockd
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Config of struct length field (/CppImplementationDataTypes/TrsmParkLockd)
        deserialization::LengthSize<deserialization::Tp<TpPack>::kSizeOfStructLengthField, typename deserialization::Tp<TpPack>::ByteOrder>

        >(reader, data.TrsmParkLockd_ref);
  }

  // Deserialize struct member 'VehBattU1Vcc_ref' of type /CppImplementationDataTypes/VehBattU1Vcc
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Config of struct length field (/CppImplementationDataTypes/VehBattU1Vcc)
        deserialization::LengthSize<deserialization::Tp<TpPack>::kSizeOfStructLengthField, typename deserialization::Tp<TpPack>::ByteOrder>

        >(reader, data.VehBattU1Vcc_ref);
  }

  // Deserialize struct member 'VehMNomRecsts_1_ref' of type /CppImplementationDataTypes/VehMNomRecsts_1
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Config of struct length field (/CppImplementationDataTypes/VehMNomRecsts_1)
        deserialization::LengthSize<deserialization::Tp<TpPack>::kSizeOfStructLengthField, typename deserialization::Tp<TpPack>::ByteOrder>

        >(reader, data.VehMNomRecsts_1_ref);
  }

  // Deserialize struct member 'VehModMngtGlbSafe1_ref' of type /CppImplementationDataTypes/VehModMngtGlbSafe1
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Config of struct length field (/CppImplementationDataTypes/VehModMngtGlbSafe1)
        deserialization::LengthSize<deserialization::Tp<TpPack>::kSizeOfStructLengthField, typename deserialization::Tp<TpPack>::ByteOrder>

        >(reader, data.VehModMngtGlbSafe1_ref);
  }

  // Deserialize struct member 'VehMtnStSafeGroup1_ref' of type /CppImplementationDataTypes/VehMtnStSafeGroup1
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Config of struct length field (/CppImplementationDataTypes/VehMtnStSafeGroup1)
        deserialization::LengthSize<deserialization::Tp<TpPack>::kSizeOfStructLengthField, typename deserialization::Tp<TpPack>::ByteOrder>

        >(reader, data.VehMtnStSafeGroup1_ref);
  }

  // Deserialize struct member 'VehSpdIndcd1_ref' of type /CppImplementationDataTypes/VehSpdIndcd1
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Config of struct length field (/CppImplementationDataTypes/VehSpdIndcd1)
        deserialization::LengthSize<deserialization::Tp<TpPack>::kSizeOfStructLengthField, typename deserialization::Tp<TpPack>::ByteOrder>

        >(reader, data.VehSpdIndcd1_ref);
  }

  // Deserialize struct member 'VehSpdLgtSafe1Chkd_ref' of type /CppImplementationDataTypes/VehSpdLgtSafe1Chkd
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Config of struct length field (/CppImplementationDataTypes/VehSpdLgtSafe1Chkd)
        deserialization::LengthSize<deserialization::Tp<TpPack>::kSizeOfStructLengthField, typename deserialization::Tp<TpPack>::ByteOrder>

        >(reader, data.VehSpdLgtSafe1Chkd_ref);
  }

  // Deserialize struct member 'Vin1Vcc_ref' of type /CppImplementationDataTypes/Vin1Vcc
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Config of struct length field (/CppImplementationDataTypes/Vin1Vcc)
        deserialization::LengthSize<deserialization::Tp<TpPack>::kSizeOfStructLengthField, typename deserialization::Tp<TpPack>::ByteOrder>

        >(reader, data.Vin1Vcc_ref);
  }

  // Deserialize struct member 'WhlInfoGroup_ref' of type /CppImplementationDataTypes/WhlInfoGroup
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Config of struct length field (/CppImplementationDataTypes/WhlInfoGroup)
        deserialization::LengthSize<deserialization::Tp<TpPack>::kSizeOfStructLengthField, typename deserialization::Tp<TpPack>::ByteOrder>

        >(reader, data.WhlInfoGroup_ref);
  }

  // Deserialize struct member 'WipgInfoGroup_ref' of type /CppImplementationDataTypes/WipgInfoGroup
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Config of struct length field (/CppImplementationDataTypes/WipgInfoGroup)
        deserialization::LengthSize<deserialization::Tp<TpPack>::kSizeOfStructLengthField, typename deserialization::Tp<TpPack>::ByteOrder>

        >(reader, data.WipgInfoGroup_ref);
  }

  // Deserialize struct member 'BkpOfDstTrvld_ref' of type /CppImplementationDataTypes/uint32_t
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Byte-order of primitive datatype (/CppImplementationDataTypes/uint32_t)
        typename deserialization::Tp<TpPack>::ByteOrder

        >(reader, data.BkpOfDstTrvld_ref);
  }

  // Deserialize struct member 'FogSetFrntReq_ref' of type /CppImplementationDataTypes/FogSetFrntReq
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Byte-order of primitive datatype (/CppImplementationDataTypes/FogSetFrntReq)
        typename deserialization::Tp<TpPack>::ByteOrder

        >(reader, data.FogSetFrntReq_ref);
  }

  // Deserialize struct member 'FogSetReReq_ref' of type /CppImplementationDataTypes/FogSetReReq
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Byte-order of primitive datatype (/CppImplementationDataTypes/FogSetReReq)
        typename deserialization::Tp<TpPack>::ByteOrder

        >(reader, data.FogSetReReq_ref);
  }

  // Deserialize struct member 'OffsForSpdWarnSetgReq_ref' of type /CppImplementationDataTypes/OffsForSpdWarnSetgReq
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Byte-order of primitive datatype (/CppImplementationDataTypes/OffsForSpdWarnSetgReq)
        typename deserialization::Tp<TpPack>::ByteOrder

        >(reader, data.OffsForSpdWarnSetgReq_ref);
  }

  // Deserialize struct member 'DoorLeReSts_ref' of type /CppImplementationDataTypes/DoorLeReSts
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Byte-order of primitive datatype (/CppImplementationDataTypes/DoorLeReSts)
        typename deserialization::Tp<TpPack>::ByteOrder

        >(reader, data.DoorLeReSts_ref);
  }

  // Deserialize struct member 'DoorPassSts_ref' of type /CppImplementationDataTypes/DoorPassSts
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Byte-order of primitive datatype (/CppImplementationDataTypes/DoorPassSts)
        typename deserialization::Tp<TpPack>::ByteOrder

        >(reader, data.DoorPassSts_ref);
  }

  // Deserialize struct member 'DoorRiReSts_ref' of type /CppImplementationDataTypes/DoorRiReSts
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Byte-order of primitive datatype (/CppImplementationDataTypes/DoorRiReSts)
        typename deserialization::Tp<TpPack>::ByteOrder

        >(reader, data.DoorRiReSts_ref);
  }

  // Deserialize struct member 'EpbSts_ref' of type /CppImplementationDataTypes/EpbSts
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Byte-order of primitive datatype (/CppImplementationDataTypes/EpbSts)
        typename deserialization::Tp<TpPack>::ByteOrder

        >(reader, data.EpbSts_ref);
  }

  // Deserialize struct member 'ExtrLtgStsFrntFog_ref' of type /CppImplementationDataTypes/ExtrLtgStsFrntFog
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Byte-order of primitive datatype (/CppImplementationDataTypes/ExtrLtgStsFrntFog)
        typename deserialization::Tp<TpPack>::ByteOrder

        >(reader, data.ExtrLtgStsFrntFog_ref);
  }

  // Deserialize struct member 'ExtrLtgStsReFog_ref' of type /CppImplementationDataTypes/ExtrLtgStsReFog
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Byte-order of primitive datatype (/CppImplementationDataTypes/ExtrLtgStsReFog)
        typename deserialization::Tp<TpPack>::ByteOrder

        >(reader, data.ExtrLtgStsReFog_ref);
  }

  // Deserialize struct member 'GearLvr_ref' of type /CppImplementationDataTypes/GearLvr
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Byte-order of primitive datatype (/CppImplementationDataTypes/GearLvr)
        typename deserialization::Tp<TpPack>::ByteOrder

        >(reader, data.GearLvr_ref);
  }

  // Deserialize struct member 'HoodSts_ref' of type /CppImplementationDataTypes/HoodSts
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Byte-order of primitive datatype (/CppImplementationDataTypes/HoodSts)
        typename deserialization::Tp<TpPack>::ByteOrder

        >(reader, data.HoodSts_ref);
  }

  // Deserialize struct member 'HznSplyElectcSts1_ref' of type /CppImplementationDataTypes/HznSplyElectcSts1
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Byte-order of primitive datatype (/CppImplementationDataTypes/HznSplyElectcSts1)
        typename deserialization::Tp<TpPack>::ByteOrder

        >(reader, data.HznSplyElectcSts1_ref);
  }

  // Deserialize struct member 'RainfallAmnt_ref' of type /CppImplementationDataTypes/RainfallAmnt
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Byte-order of primitive datatype (/CppImplementationDataTypes/RainfallAmnt)
        typename deserialization::Tp<TpPack>::ByteOrder

        >(reader, data.RainfallAmnt_ref);
  }

  // Deserialize struct member 'RoadMiscSgnInfoSts_ref' of type /CppImplementationDataTypes/RoadMiscSgnInfoSts
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Byte-order of primitive datatype (/CppImplementationDataTypes/RoadMiscSgnInfoSts)
        typename deserialization::Tp<TpPack>::ByteOrder

        >(reader, data.RoadMiscSgnInfoSts_ref);
  }

  // Deserialize struct member 'TrSts_ref' of type /CppImplementationDataTypes/TrSts
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Byte-order of primitive datatype (/CppImplementationDataTypes/TrSts)
        typename deserialization::Tp<TpPack>::ByteOrder

        >(reader, data.TrSts_ref);
  }

  // Deserialize struct member 'CarTiGlb_ref' of type /CppImplementationDataTypes/float
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Byte-order of primitive datatype (/CppImplementationDataTypes/float)
        typename deserialization::Tp<TpPack>::ByteOrder

        >(reader, data.CarTiGlb_ref);
  }

  // Deserialize struct member 'OSM2TimeStamp_ref' of type /CppImplementationDataTypes/uint32_t
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Byte-order of primitive datatype (/CppImplementationDataTypes/uint32_t)
        typename deserialization::Tp<TpPack>::ByteOrder

        >(reader, data.OSM2TimeStamp_ref);
  }

  return result;
}

/*!
 * \brief Calculates the static size for datatype /CppImplementationDataTypes/ToSOCA_COMInfo1VCC.
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
 */
template <typename TpPack>
constexpr std::size_t SomeIpProtocolGetStaticSize(amsr::someip_protocol::internal::deserialization::SizeToken<::ToSOCA_COMInfo1VCC::ToSOCA_COMInfo1VCC>) noexcept {
  // Namespace alias for static deserialization code
  namespace deserialization = amsr::someip_protocol::internal::deserialization;

  // Sum of static size
 constexpr std::size_t static_size{
  // Accumulate the static size of struct member 'AccFusnTrfcReq_ref' of type /CppImplementationDataTypes/AccFusnTrfcReq
   SomeIpProtocolGetStaticSize<TpPack,
                                // Config of struct length field (/CppImplementationDataTypes/AccFusnTrfcReq)
                                deserialization::LengthSize<deserialization::Tp<TpPack>::kSizeOfStructLengthField, typename deserialization::Tp<TpPack>::ByteOrder>

                               >(deserialization::SizeToken<::AccFusnTrfcReq::AccFusnTrfcReq>{})  + 
  
  // Accumulate the static size of struct member 'AccrPedlPsd0_ref' of type /CppImplementationDataTypes/AccrPedlPsd0
   SomeIpProtocolGetStaticSize<TpPack,
                                // Config of struct length field (/CppImplementationDataTypes/AccrPedlPsd0)
                                deserialization::LengthSize<deserialization::Tp<TpPack>::kSizeOfStructLengthField, typename deserialization::Tp<TpPack>::ByteOrder>

                               >(deserialization::SizeToken<::AccrPedlPsd0::AccrPedlPsd0>{})  + 
  
  // Accumulate the static size of struct member 'ALgtStdFromWhlSpdSafe1Chkd_ref' of type /CppImplementationDataTypes/ALgtStdFromWhlSpdSafe1Chkd
   SomeIpProtocolGetStaticSize<TpPack,
                                // Config of struct length field (/CppImplementationDataTypes/ALgtStdFromWhlSpdSafe1Chkd)
                                deserialization::LengthSize<deserialization::Tp<TpPack>::kSizeOfStructLengthField, typename deserialization::Tp<TpPack>::ByteOrder>

                               >(deserialization::SizeToken<::ALgtStdFromWhlSpdSafe1Chkd::ALgtStdFromWhlSpdSafe1Chkd>{})  + 
  
  // Accumulate the static size of struct member 'AmbTRaw_ref' of type /CppImplementationDataTypes/AmbTRaw
   SomeIpProtocolGetStaticSize<TpPack,
                                // Config of struct length field (/CppImplementationDataTypes/AmbTRaw)
                                deserialization::LengthSize<deserialization::Tp<TpPack>::kSizeOfStructLengthField, typename deserialization::Tp<TpPack>::ByteOrder>

                               >(deserialization::SizeToken<::AmbTRaw::AmbTRaw>{})  + 
  
  // Accumulate the static size of struct member 'AsyDataWithCmpSafe1Chkd_ref' of type /CppImplementationDataTypes/AsyDataWithCmpSafe1Chkd
   SomeIpProtocolGetStaticSize<TpPack,
                                // Config of struct length field (/CppImplementationDataTypes/AsyDataWithCmpSafe1Chkd)
                                deserialization::LengthSize<deserialization::Tp<TpPack>::kSizeOfStructLengthField, typename deserialization::Tp<TpPack>::ByteOrder>

                               >(deserialization::SizeToken<::AsyDataWithCmpSafe1Chkd::AsyDataWithCmpSafe1Chkd>{})  + 
  
  // Accumulate the static size of struct member 'BltLockStFrnt_ref' of type /CppImplementationDataTypes/BltLockStFrnt
   SomeIpProtocolGetStaticSize<TpPack,
                                // Config of struct length field (/CppImplementationDataTypes/BltLockStFrnt)
                                deserialization::LengthSize<deserialization::Tp<TpPack>::kSizeOfStructLengthField, typename deserialization::Tp<TpPack>::ByteOrder>

                               >(deserialization::SizeToken<::BltLockStFrnt::BltLockStFrnt>{})  + 
  
  // Accumulate the static size of struct member 'BrkPedlPsdRec_ref' of type /CppImplementationDataTypes/BrkPedlPsdRec
   SomeIpProtocolGetStaticSize<TpPack,
                                // Config of struct length field (/CppImplementationDataTypes/BrkPedlPsdRec)
                                deserialization::LengthSize<deserialization::Tp<TpPack>::kSizeOfStructLengthField, typename deserialization::Tp<TpPack>::ByteOrder>

                               >(deserialization::SizeToken<::BrkPedlPsdRec::BrkPedlPsdRec>{})  + 
  
  // Accumulate the static size of struct member 'EgoMotion_ref' of type /CppImplementationDataTypes/EgoMotion
   SomeIpProtocolGetStaticSize<TpPack,
                                // Config of struct length field (/CppImplementationDataTypes/EgoMotion)
                                deserialization::LengthSize<deserialization::Tp<TpPack>::kSizeOfStructLengthField, typename deserialization::Tp<TpPack>::ByteOrder>

                               >(deserialization::SizeToken<::EgoMotion::EgoMotion>{})  + 
  
  // Accumulate the static size of struct member 'IndcrTurnReq_ref' of type /CppImplementationDataTypes/IndcrTurnReq
   SomeIpProtocolGetStaticSize<TpPack,
                                // Config of struct length field (/CppImplementationDataTypes/IndcrTurnReq)
                                deserialization::LengthSize<deserialization::Tp<TpPack>::kSizeOfStructLengthField, typename deserialization::Tp<TpPack>::ByteOrder>

                               >(deserialization::SizeToken<::IndcrTurnReq::IndcrTurnReq>{})  + 
  
  // Accumulate the static size of struct member 'PinionSteerAgGroup_ref' of type /CppImplementationDataTypes/PinionSteerAgGroup
   SomeIpProtocolGetStaticSize<TpPack,
                                // Config of struct length field (/CppImplementationDataTypes/PinionSteerAgGroup)
                                deserialization::LengthSize<deserialization::Tp<TpPack>::kSizeOfStructLengthField, typename deserialization::Tp<TpPack>::ByteOrder>

                               >(deserialization::SizeToken<::PinionSteerAgGroup::PinionSteerAgGroup>{})  + 
  
  // Accumulate the static size of struct member 'RoadSgnInfoActv0_ref' of type /CppImplementationDataTypes/RoadSgnInfoActv0
   SomeIpProtocolGetStaticSize<TpPack,
                                // Config of struct length field (/CppImplementationDataTypes/RoadSgnInfoActv0)
                                deserialization::LengthSize<deserialization::Tp<TpPack>::kSizeOfStructLengthField, typename deserialization::Tp<TpPack>::ByteOrder>

                               >(deserialization::SizeToken<::RoadSgnInfoActv0::RoadSgnInfoActv0>{})  + 
  
  // Accumulate the static size of struct member 'SpdAlrmActvForRoadSgnInfo0_ref' of type /CppImplementationDataTypes/SpdAlrmActvForRoadSgnInfo0
   SomeIpProtocolGetStaticSize<TpPack,
                                // Config of struct length field (/CppImplementationDataTypes/SpdAlrmActvForRoadSgnInfo0)
                                deserialization::LengthSize<deserialization::Tp<TpPack>::kSizeOfStructLengthField, typename deserialization::Tp<TpPack>::ByteOrder>

                               >(deserialization::SizeToken<::SpdAlrmActvForRoadSgnInfo0::SpdAlrmActvForRoadSgnInfo0>{})  + 
  
  // Accumulate the static size of struct member 'SteerWhlSnsrSafe1_ref' of type /CppImplementationDataTypes/SteerWhlSnsrSafe1
   SomeIpProtocolGetStaticSize<TpPack,
                                // Config of struct length field (/CppImplementationDataTypes/SteerWhlSnsrSafe1)
                                deserialization::LengthSize<deserialization::Tp<TpPack>::kSizeOfStructLengthField, typename deserialization::Tp<TpPack>::ByteOrder>

                               >(deserialization::SizeToken<::SteerWhlSnsrSafe1::SteerWhlSnsrSafe1>{})  + 
  
  // Accumulate the static size of struct member 'TrfcLiActvSts_ref' of type /CppImplementationDataTypes/TrfcLiActvSts
   SomeIpProtocolGetStaticSize<TpPack,
                                // Config of struct length field (/CppImplementationDataTypes/TrfcLiActvSts)
                                deserialization::LengthSize<deserialization::Tp<TpPack>::kSizeOfStructLengthField, typename deserialization::Tp<TpPack>::ByteOrder>

                               >(deserialization::SizeToken<::TrfcLiActvSts::TrfcLiActvSts>{})  + 
  
  // Accumulate the static size of struct member 'TrsmParkLockd_ref' of type /CppImplementationDataTypes/TrsmParkLockd
   SomeIpProtocolGetStaticSize<TpPack,
                                // Config of struct length field (/CppImplementationDataTypes/TrsmParkLockd)
                                deserialization::LengthSize<deserialization::Tp<TpPack>::kSizeOfStructLengthField, typename deserialization::Tp<TpPack>::ByteOrder>

                               >(deserialization::SizeToken<::TrsmParkLockd::TrsmParkLockd>{})  + 
  
  // Accumulate the static size of struct member 'VehBattU1Vcc_ref' of type /CppImplementationDataTypes/VehBattU1Vcc
   SomeIpProtocolGetStaticSize<TpPack,
                                // Config of struct length field (/CppImplementationDataTypes/VehBattU1Vcc)
                                deserialization::LengthSize<deserialization::Tp<TpPack>::kSizeOfStructLengthField, typename deserialization::Tp<TpPack>::ByteOrder>

                               >(deserialization::SizeToken<::VehBattU1Vcc::VehBattU1Vcc>{})  + 
  
  // Accumulate the static size of struct member 'VehMNomRecsts_1_ref' of type /CppImplementationDataTypes/VehMNomRecsts_1
   SomeIpProtocolGetStaticSize<TpPack,
                                // Config of struct length field (/CppImplementationDataTypes/VehMNomRecsts_1)
                                deserialization::LengthSize<deserialization::Tp<TpPack>::kSizeOfStructLengthField, typename deserialization::Tp<TpPack>::ByteOrder>

                               >(deserialization::SizeToken<::VehMNomRecsts_1::VehMNomRecsts_1>{})  + 
  
  // Accumulate the static size of struct member 'VehModMngtGlbSafe1_ref' of type /CppImplementationDataTypes/VehModMngtGlbSafe1
   SomeIpProtocolGetStaticSize<TpPack,
                                // Config of struct length field (/CppImplementationDataTypes/VehModMngtGlbSafe1)
                                deserialization::LengthSize<deserialization::Tp<TpPack>::kSizeOfStructLengthField, typename deserialization::Tp<TpPack>::ByteOrder>

                               >(deserialization::SizeToken<::VehModMngtGlbSafe1::VehModMngtGlbSafe1>{})  + 
  
  // Accumulate the static size of struct member 'VehMtnStSafeGroup1_ref' of type /CppImplementationDataTypes/VehMtnStSafeGroup1
   SomeIpProtocolGetStaticSize<TpPack,
                                // Config of struct length field (/CppImplementationDataTypes/VehMtnStSafeGroup1)
                                deserialization::LengthSize<deserialization::Tp<TpPack>::kSizeOfStructLengthField, typename deserialization::Tp<TpPack>::ByteOrder>

                               >(deserialization::SizeToken<::VehMtnStSafeGroup1::VehMtnStSafeGroup1>{})  + 
  
  // Accumulate the static size of struct member 'VehSpdIndcd1_ref' of type /CppImplementationDataTypes/VehSpdIndcd1
   SomeIpProtocolGetStaticSize<TpPack,
                                // Config of struct length field (/CppImplementationDataTypes/VehSpdIndcd1)
                                deserialization::LengthSize<deserialization::Tp<TpPack>::kSizeOfStructLengthField, typename deserialization::Tp<TpPack>::ByteOrder>

                               >(deserialization::SizeToken<::VehSpdIndcd1::VehSpdIndcd1>{})  + 
  
  // Accumulate the static size of struct member 'VehSpdLgtSafe1Chkd_ref' of type /CppImplementationDataTypes/VehSpdLgtSafe1Chkd
   SomeIpProtocolGetStaticSize<TpPack,
                                // Config of struct length field (/CppImplementationDataTypes/VehSpdLgtSafe1Chkd)
                                deserialization::LengthSize<deserialization::Tp<TpPack>::kSizeOfStructLengthField, typename deserialization::Tp<TpPack>::ByteOrder>

                               >(deserialization::SizeToken<::VehSpdLgtSafe1Chkd::VehSpdLgtSafe1Chkd>{})  + 
  
  // Accumulate the static size of struct member 'Vin1Vcc_ref' of type /CppImplementationDataTypes/Vin1Vcc
   SomeIpProtocolGetStaticSize<TpPack,
                                // Config of struct length field (/CppImplementationDataTypes/Vin1Vcc)
                                deserialization::LengthSize<deserialization::Tp<TpPack>::kSizeOfStructLengthField, typename deserialization::Tp<TpPack>::ByteOrder>

                               >(deserialization::SizeToken<::Vin1Vcc::Vin1Vcc>{})  + 
  
  // Accumulate the static size of struct member 'WhlInfoGroup_ref' of type /CppImplementationDataTypes/WhlInfoGroup
   SomeIpProtocolGetStaticSize<TpPack,
                                // Config of struct length field (/CppImplementationDataTypes/WhlInfoGroup)
                                deserialization::LengthSize<deserialization::Tp<TpPack>::kSizeOfStructLengthField, typename deserialization::Tp<TpPack>::ByteOrder>

                               >(deserialization::SizeToken<::WhlInfoGroup::WhlInfoGroup>{})  + 
  
  // Accumulate the static size of struct member 'WipgInfoGroup_ref' of type /CppImplementationDataTypes/WipgInfoGroup
   SomeIpProtocolGetStaticSize<TpPack,
                                // Config of struct length field (/CppImplementationDataTypes/WipgInfoGroup)
                                deserialization::LengthSize<deserialization::Tp<TpPack>::kSizeOfStructLengthField, typename deserialization::Tp<TpPack>::ByteOrder>

                               >(deserialization::SizeToken<::WipgInfoGroup::WipgInfoGroup>{})  + 
  
  // Accumulate the static size of struct member 'BkpOfDstTrvld_ref' of type /CppImplementationDataTypes/uint32_t
   SomeIpProtocolGetStaticSize<TpPack,
                                // Byte-order of primitive datatype (/CppImplementationDataTypes/uint32_t)
                                typename deserialization::Tp<TpPack>::ByteOrder

                               >(deserialization::SizeToken<::BkpOfDstTrvld::BkpOfDstTrvld>{})  + 
  
  // Accumulate the static size of struct member 'FogSetFrntReq_ref' of type /CppImplementationDataTypes/FogSetFrntReq
   SomeIpProtocolGetStaticSize<TpPack,
                                // Byte-order of primitive datatype (/CppImplementationDataTypes/FogSetFrntReq)
                                typename deserialization::Tp<TpPack>::ByteOrder

                               >(deserialization::SizeToken<::FogSetFrntReq::FogSetFrntReq>{})  + 
  
  // Accumulate the static size of struct member 'FogSetReReq_ref' of type /CppImplementationDataTypes/FogSetReReq
   SomeIpProtocolGetStaticSize<TpPack,
                                // Byte-order of primitive datatype (/CppImplementationDataTypes/FogSetReReq)
                                typename deserialization::Tp<TpPack>::ByteOrder

                               >(deserialization::SizeToken<::FogSetReReq::FogSetReReq>{})  + 
  
  // Accumulate the static size of struct member 'OffsForSpdWarnSetgReq_ref' of type /CppImplementationDataTypes/OffsForSpdWarnSetgReq
   SomeIpProtocolGetStaticSize<TpPack,
                                // Byte-order of primitive datatype (/CppImplementationDataTypes/OffsForSpdWarnSetgReq)
                                typename deserialization::Tp<TpPack>::ByteOrder

                               >(deserialization::SizeToken<::OffsForSpdWarnSetgReq::OffsForSpdWarnSetgReq>{})  + 
  
  // Accumulate the static size of struct member 'DoorLeReSts_ref' of type /CppImplementationDataTypes/DoorLeReSts
   SomeIpProtocolGetStaticSize<TpPack,
                                // Byte-order of primitive datatype (/CppImplementationDataTypes/DoorLeReSts)
                                typename deserialization::Tp<TpPack>::ByteOrder

                               >(deserialization::SizeToken<::DoorLeReSts::DoorLeReSts>{})  + 
  
  // Accumulate the static size of struct member 'DoorPassSts_ref' of type /CppImplementationDataTypes/DoorPassSts
   SomeIpProtocolGetStaticSize<TpPack,
                                // Byte-order of primitive datatype (/CppImplementationDataTypes/DoorPassSts)
                                typename deserialization::Tp<TpPack>::ByteOrder

                               >(deserialization::SizeToken<::DoorPassSts::DoorPassSts>{})  + 
  
  // Accumulate the static size of struct member 'DoorRiReSts_ref' of type /CppImplementationDataTypes/DoorRiReSts
   SomeIpProtocolGetStaticSize<TpPack,
                                // Byte-order of primitive datatype (/CppImplementationDataTypes/DoorRiReSts)
                                typename deserialization::Tp<TpPack>::ByteOrder

                               >(deserialization::SizeToken<::DoorRiReSts::DoorRiReSts>{})  + 
  
  // Accumulate the static size of struct member 'EpbSts_ref' of type /CppImplementationDataTypes/EpbSts
   SomeIpProtocolGetStaticSize<TpPack,
                                // Byte-order of primitive datatype (/CppImplementationDataTypes/EpbSts)
                                typename deserialization::Tp<TpPack>::ByteOrder

                               >(deserialization::SizeToken<::EpbSts::EpbSts>{})  + 
  
  // Accumulate the static size of struct member 'ExtrLtgStsFrntFog_ref' of type /CppImplementationDataTypes/ExtrLtgStsFrntFog
   SomeIpProtocolGetStaticSize<TpPack,
                                // Byte-order of primitive datatype (/CppImplementationDataTypes/ExtrLtgStsFrntFog)
                                typename deserialization::Tp<TpPack>::ByteOrder

                               >(deserialization::SizeToken<::ExtrLtgStsFrntFog::ExtrLtgStsFrntFog>{})  + 
  
  // Accumulate the static size of struct member 'ExtrLtgStsReFog_ref' of type /CppImplementationDataTypes/ExtrLtgStsReFog
   SomeIpProtocolGetStaticSize<TpPack,
                                // Byte-order of primitive datatype (/CppImplementationDataTypes/ExtrLtgStsReFog)
                                typename deserialization::Tp<TpPack>::ByteOrder

                               >(deserialization::SizeToken<::ExtrLtgStsReFog::ExtrLtgStsReFog>{})  + 
  
  // Accumulate the static size of struct member 'GearLvr_ref' of type /CppImplementationDataTypes/GearLvr
   SomeIpProtocolGetStaticSize<TpPack,
                                // Byte-order of primitive datatype (/CppImplementationDataTypes/GearLvr)
                                typename deserialization::Tp<TpPack>::ByteOrder

                               >(deserialization::SizeToken<::GearLvr::GearLvr>{})  + 
  
  // Accumulate the static size of struct member 'HoodSts_ref' of type /CppImplementationDataTypes/HoodSts
   SomeIpProtocolGetStaticSize<TpPack,
                                // Byte-order of primitive datatype (/CppImplementationDataTypes/HoodSts)
                                typename deserialization::Tp<TpPack>::ByteOrder

                               >(deserialization::SizeToken<::HoodSts::HoodSts>{})  + 
  
  // Accumulate the static size of struct member 'HznSplyElectcSts1_ref' of type /CppImplementationDataTypes/HznSplyElectcSts1
   SomeIpProtocolGetStaticSize<TpPack,
                                // Byte-order of primitive datatype (/CppImplementationDataTypes/HznSplyElectcSts1)
                                typename deserialization::Tp<TpPack>::ByteOrder

                               >(deserialization::SizeToken<::HznSplyElectcSts1::HznSplyElectcSts1>{})  + 
  
  // Accumulate the static size of struct member 'RainfallAmnt_ref' of type /CppImplementationDataTypes/RainfallAmnt
   SomeIpProtocolGetStaticSize<TpPack,
                                // Byte-order of primitive datatype (/CppImplementationDataTypes/RainfallAmnt)
                                typename deserialization::Tp<TpPack>::ByteOrder

                               >(deserialization::SizeToken<::RainfallAmnt::RainfallAmnt>{})  + 
  
  // Accumulate the static size of struct member 'RoadMiscSgnInfoSts_ref' of type /CppImplementationDataTypes/RoadMiscSgnInfoSts
   SomeIpProtocolGetStaticSize<TpPack,
                                // Byte-order of primitive datatype (/CppImplementationDataTypes/RoadMiscSgnInfoSts)
                                typename deserialization::Tp<TpPack>::ByteOrder

                               >(deserialization::SizeToken<::RoadMiscSgnInfoSts::RoadMiscSgnInfoSts>{})  + 
  
  // Accumulate the static size of struct member 'TrSts_ref' of type /CppImplementationDataTypes/TrSts
   SomeIpProtocolGetStaticSize<TpPack,
                                // Byte-order of primitive datatype (/CppImplementationDataTypes/TrSts)
                                typename deserialization::Tp<TpPack>::ByteOrder

                               >(deserialization::SizeToken<::TrSts::TrSts>{})  + 
  
  // Accumulate the static size of struct member 'CarTiGlb_ref' of type /CppImplementationDataTypes/float
   SomeIpProtocolGetStaticSize<TpPack,
                                // Byte-order of primitive datatype (/CppImplementationDataTypes/float)
                                typename deserialization::Tp<TpPack>::ByteOrder

                               >(deserialization::SizeToken<::CarTiGlb::CarTiGlb>{})  + 
  
  // Accumulate the static size of struct member 'OSM2TimeStamp_ref' of type /CppImplementationDataTypes/uint32_t
   SomeIpProtocolGetStaticSize<TpPack,
                                // Byte-order of primitive datatype (/CppImplementationDataTypes/uint32_t)
                                typename deserialization::Tp<TpPack>::ByteOrder

                               >(deserialization::SizeToken<::OSM2TimeStamp::OSM2TimeStamp>{}) 
  };
  return static_size;
}

}  // namespace ToSOCA_COMInfo1VCC

#endif  // LOCALIZATIONFUSIONEXE_INCLUDE_AMSR_SOMEIP_PROTOCOL_INTERNAL_DATATYPE_DESERIALIZATION_TOSOCA_COMINFO1VCC_DESERIALIZER_TOSOCA_COMINFO1VCC_H_

