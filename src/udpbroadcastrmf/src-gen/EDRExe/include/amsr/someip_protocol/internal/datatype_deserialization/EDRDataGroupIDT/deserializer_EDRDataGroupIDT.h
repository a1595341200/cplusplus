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
/**        \file  EDRExe/include/amsr/someip_protocol/internal/datatype_deserialization/EDRDataGroupIDT/deserializer_EDRDataGroupIDT.h
 *        \brief  SOME/IP protocol deserializer implementation for datatype 'EDRDataGroupIDT'
 *
 *      \details  /CppImplementationDataTypes/EDRDataGroupIDT
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 *  GENERATOR INFORMATION
 *  -------------------------------------------------------------------------------------------------------------------
 *    Generator Name: amsr_someipprotocol
 *         Commit ID: 1b535f531ca8eaaa17edbe97d022bbf394412553
 *********************************************************************************************************************/

#ifndef EDREXE_INCLUDE_AMSR_SOMEIP_PROTOCOL_INTERNAL_DATATYPE_DESERIALIZATION_EDRDATAGROUPIDT_DESERIALIZER_EDRDATAGROUPIDT_H_
#define EDREXE_INCLUDE_AMSR_SOMEIP_PROTOCOL_INTERNAL_DATATYPE_DESERIALIZATION_EDRDATAGROUPIDT_DESERIALIZER_EDRDATAGROUPIDT_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include "EDRDataGroupIDT/impl_type_edrdatagroupidt.h"
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
#include "someip-protocol/internal/deserialization/deser_wrapper.h"

namespace EDRDataGroupIDT {

// VECTOR NC Metric-HIS.PATH: MD_SOMEIPPROTOCOL_Metric-HIS.PATH
/*!
 * \brief Deserializer for datatype /CppImplementationDataTypes/EDRDataGroupIDT.
 * \details Data type class: DataTypeStruct (CppImplDataTypeStruct).
 *          is TLV struct: false
 *
 * \tparam TpPack Transformation properties to be used for deserialization.
 *
 * \param[in,out] reader Reference to byte stream reader.
 * \param[out]    data Reference to the data object of type /CppImplementationDataTypes/EDRDataGroupIDT
 *                in which the deserialized value will be written.
 * \return        True if the deserialization is successful, false otherwise.
 * \pre           The static size provided by SomeIpProtocolGetStaticSize has been verified.
 * \context       Reactor|App
 * \threadsafe    FALSE
 * \reentrant     TRUE for different reader objects.
 * \synchronous   TRUE
 */
template <typename TpPack>
amsr::someip_protocol::internal::deserialization::Result SomeIpProtocolDeserialize(amsr::someip_protocol::internal::deserialization::Reader& reader, ::EDRDataGroupIDT::EDRDataGroupIDT &data) noexcept {
  // Namespace alias for static deserialization code
  namespace internal = amsr::someip_protocol::internal;
  namespace deserialization = internal::deserialization;
  // Deserialize non-TLV struct
  deserialization::Result result{false};
  // Deserialize struct member 'CllsnAidPost' of type /CppImplementationDataTypes/OnOff1VccIDT
  result = deserialization::SomeIpProtocolDeserialize<
          TpPack,
          // Byte-order of primitive datatype (/CppImplementationDataTypes/OnOff1VccIDT)
        typename deserialization::Tp<TpPack>::ByteOrder

          >(reader, data.CllsnAidPost);


  // Deserialize struct member 'CllsnMtgtnWarnSts' of type /CppImplementationDataTypes/CllsnMtgtnWarnSts1IDT
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Byte-order of primitive datatype (/CppImplementationDataTypes/CllsnMtgtnWarnSts1IDT)
        typename deserialization::Tp<TpPack>::ByteOrder

        >(reader, data.CllsnMtgtnWarnSts);
  }

  // Deserialize struct member 'WarnForAsyEmgyLaneKeepAid' of type /CppImplementationDataTypes/OnOff1VccIDT
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Byte-order of primitive datatype (/CppImplementationDataTypes/OnOff1VccIDT)
        typename deserialization::Tp<TpPack>::ByteOrder

        >(reader, data.WarnForAsyEmgyLaneKeepAid);
  }

  // Deserialize struct member 'CllsnAidPostEMA' of type /CppImplementationDataTypes/OnOff1VccIDT
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Byte-order of primitive datatype (/CppImplementationDataTypes/OnOff1VccIDT)
        typename deserialization::Tp<TpPack>::ByteOrder

        >(reader, data.CllsnAidPostEMA);
  }

  // Deserialize struct member 'FctaIndcnLe' of type /CppImplementationDataTypes/LcmaIndcn1VccIDT
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Byte-order of primitive datatype (/CppImplementationDataTypes/LcmaIndcn1VccIDT)
        typename deserialization::Tp<TpPack>::ByteOrder

        >(reader, data.FctaIndcnLe);
  }

  // Deserialize struct member 'FctaIndcnRi' of type /CppImplementationDataTypes/LcmaIndcn1VccIDT
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Byte-order of primitive datatype (/CppImplementationDataTypes/LcmaIndcn1VccIDT)
        typename deserialization::Tp<TpPack>::ByteOrder

        >(reader, data.FctaIndcnRi);
  }

  // Deserialize struct member 'LaneChgAutStsForAsyHiWay' of type /CppImplementationDataTypes/LaneChgAutStsForAsyHiWay2IDT
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Byte-order of primitive datatype (/CppImplementationDataTypes/LaneChgAutStsForAsyHiWay2IDT)
        typename deserialization::Tp<TpPack>::ByteOrder

        >(reader, data.LaneChgAutStsForAsyHiWay);
  }

  // Deserialize struct member 'AsyALgtSts' of type /CppImplementationDataTypes/AsyALgtSts1VccIDT
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Byte-order of primitive datatype (/CppImplementationDataTypes/AsyALgtSts1VccIDT)
        typename deserialization::Tp<TpPack>::ByteOrder

        >(reader, data.AsyALgtSts);
  }

  // Deserialize struct member 'AsyALatIndcr' of type /CppImplementationDataTypes/AsyIndcrDispSts2VccIDT
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Byte-order of primitive datatype (/CppImplementationDataTypes/AsyIndcrDispSts2VccIDT)
        typename deserialization::Tp<TpPack>::ByteOrder

        >(reader, data.AsyALatIndcr);
  }

  // Deserialize struct member 'LcmaIndcnLe' of type /CppImplementationDataTypes/WarnLvl1VccIDT
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Byte-order of primitive datatype (/CppImplementationDataTypes/WarnLvl1VccIDT)
        typename deserialization::Tp<TpPack>::ByteOrder

        >(reader, data.LcmaIndcnLe);
  }

  // Deserialize struct member 'LcmaIndcnRi' of type /CppImplementationDataTypes/WarnLvl1VccIDT
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Byte-order of primitive datatype (/CppImplementationDataTypes/WarnLvl1VccIDT)
        typename deserialization::Tp<TpPack>::ByteOrder

        >(reader, data.LcmaIndcnRi);
  }

  // Deserialize struct member 'RcwmBrkReq' of type /CppImplementationDataTypes/OnOff1VccIDT
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Byte-order of primitive datatype (/CppImplementationDataTypes/OnOff1VccIDT)
        typename deserialization::Tp<TpPack>::ByteOrder

        >(reader, data.RcwmBrkReq);
  }

  // Deserialize struct member 'AsySftyDecelEnadByVehDyn' of type /CppImplementationDataTypes/AsySftyDecelEnadByVehDyn1VccIDT
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Byte-order of primitive datatype (/CppImplementationDataTypes/AsySftyDecelEnadByVehDyn1VccIDT)
        typename deserialization::Tp<TpPack>::ByteOrder

        >(reader, data.AsySftyDecelEnadByVehDyn);
  }

  // Deserialize struct member 'SftyDecelGroupSafe' of type /CppImplementationDataTypes/SftyDecelGroupSafeIDT
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Config of struct length field (/CppImplementationDataTypes/SftyDecelGroupSafeIDT)
        internal::LengthSize<deserialization::Tp<TpPack>::kSizeOfStructLengthField, typename deserialization::Tp<TpPack>::ByteOrder>

        >(reader, data.SftyDecelGroupSafe);
  }

  // Deserialize struct member 'AsySftyEnaDecelByDBS' of type /CppImplementationDataTypes/OnOff1VccIDT
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Byte-order of primitive datatype (/CppImplementationDataTypes/OnOff1VccIDT)
        typename deserialization::Tp<TpPack>::ByteOrder

        >(reader, data.AsySftyEnaDecelByDBS);
  }

  // Deserialize struct member 'AsySftyStandStillReq' of type /CppImplementationDataTypes/OnOff1VccIDT
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Byte-order of primitive datatype (/CppImplementationDataTypes/OnOff1VccIDT)
        typename deserialization::Tp<TpPack>::ByteOrder

        >(reader, data.AsySftyStandStillReq);
  }

  // Deserialize struct member 'BrkHptcWarnReqForAutDrv' of type /CppImplementationDataTypes/CllsnThreat1VccIDT
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Byte-order of primitive datatype (/CppImplementationDataTypes/CllsnThreat1VccIDT)
        typename deserialization::Tp<TpPack>::ByteOrder

        >(reader, data.BrkHptcWarnReqForAutDrv);
  }

  // Deserialize struct member 'CllsnThreat' of type /CppImplementationDataTypes/CllsnThreat1VccIDT
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Byte-order of primitive datatype (/CppImplementationDataTypes/CllsnThreat1VccIDT)
        typename deserialization::Tp<TpPack>::ByteOrder

        >(reader, data.CllsnThreat);
  }

  // Deserialize struct member 'AgCtrlTqLowrLim' of type /CppImplementationDataTypes/float
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Byte-order of primitive datatype (/CppImplementationDataTypes/float)
        typename deserialization::Tp<TpPack>::ByteOrder

        >(reader, data.AgCtrlTqLowrLim);
  }

  // Deserialize struct member 'AgCtrlTqUpprLim' of type /CppImplementationDataTypes/float
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Byte-order of primitive datatype (/CppImplementationDataTypes/float)
        typename deserialization::Tp<TpPack>::ByteOrder

        >(reader, data.AgCtrlTqUpprLim);
  }

  // Deserialize struct member 'AsyPinionAgReq' of type /CppImplementationDataTypes/float
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Byte-order of primitive datatype (/CppImplementationDataTypes/float)
        typename deserialization::Tp<TpPack>::ByteOrder

        >(reader, data.AsyPinionAgReq);
  }

  // Deserialize struct member 'TqAssAddl' of type /CppImplementationDataTypes/float
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Byte-order of primitive datatype (/CppImplementationDataTypes/float)
        typename deserialization::Tp<TpPack>::ByteOrder

        >(reader, data.TqAssAddl);
  }

  // Deserialize struct member 'SteerWhlTqAddl' of type /CppImplementationDataTypes/float
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Byte-order of primitive datatype (/CppImplementationDataTypes/float)
        typename deserialization::Tp<TpPack>::ByteOrder

        >(reader, data.SteerWhlTqAddl);
  }

  // Deserialize struct member 'SteerTqAddlForEma' of type /CppImplementationDataTypes/float
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Byte-order of primitive datatype (/CppImplementationDataTypes/float)
        typename deserialization::Tp<TpPack>::ByteOrder

        >(reader, data.SteerTqAddlForEma);
  }

  // Deserialize struct member 'RctaBrkReq' of type /CppImplementationDataTypes/YesNo1VccIDT
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Byte-order of primitive datatype (/CppImplementationDataTypes/YesNo1VccIDT)
        typename deserialization::Tp<TpPack>::ByteOrder

        >(reader, data.RctaBrkReq);
  }

  // Deserialize struct member 'RctaBrkReqQM' of type /CppImplementationDataTypes/OnOff1VccIDT
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Byte-order of primitive datatype (/CppImplementationDataTypes/OnOff1VccIDT)
        typename deserialization::Tp<TpPack>::ByteOrder

        >(reader, data.RctaBrkReqQM);
  }

  // Deserialize struct member 'RctaBrkActvd' of type /CppImplementationDataTypes/YesNo2VccIDT
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Byte-order of primitive datatype (/CppImplementationDataTypes/YesNo2VccIDT)
        typename deserialization::Tp<TpPack>::ByteOrder

        >(reader, data.RctaBrkActvd);
  }

  // Deserialize struct member 'AsyALgtActvAftLim' of type /CppImplementationDataTypes/float
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Byte-order of primitive datatype (/CppImplementationDataTypes/float)
        typename deserialization::Tp<TpPack>::ByteOrder

        >(reader, data.AsyALgtActvAftLim);
  }

  // Deserialize struct member 'AsyInformForDrvr' of type /CppImplementationDataTypes/uint8_t
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Byte-order of primitive datatype (/CppImplementationDataTypes/uint8_t)
        typename deserialization::Tp<TpPack>::ByteOrder

        >(reader, data.AsyInformForDrvr);
  }

  // Deserialize struct member 'AsyNoaActvSuggest' of type /CppImplementationDataTypes/OnOff1VccIDT
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Byte-order of primitive datatype (/CppImplementationDataTypes/OnOff1VccIDT)
        typename deserialization::Tp<TpPack>::ByteOrder

        >(reader, data.AsyNoaActvSuggest);
  }

  // Deserialize struct member 'AsySafeStopSts' of type /CppImplementationDataTypes/uint8_t
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Byte-order of primitive datatype (/CppImplementationDataTypes/uint8_t)
        typename deserialization::Tp<TpPack>::ByteOrder

        >(reader, data.AsySafeStopSts);
  }

  // Deserialize struct member 'AsyLatOffstSts' of type /CppImplementationDataTypes/uint8_t
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Byte-order of primitive datatype (/CppImplementationDataTypes/uint8_t)
        typename deserialization::Tp<TpPack>::ByteOrder

        >(reader, data.AsyLatOffstSts);
  }

  // Deserialize struct member 'ADCtrlMode' of type /CppImplementationDataTypes/uint8_t
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Byte-order of primitive datatype (/CppImplementationDataTypes/uint8_t)
        typename deserialization::Tp<TpPack>::ByteOrder

        >(reader, data.ADCtrlMode);
  }

  // Deserialize struct member 'AsyEyesOffWarnRqrd' of type /CppImplementationDataTypes/uint8_t
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Byte-order of primitive datatype (/CppImplementationDataTypes/uint8_t)
        typename deserialization::Tp<TpPack>::ByteOrder

        >(reader, data.AsyEyesOffWarnRqrd);
  }

  // Deserialize struct member 'AsyNoaSts' of type /CppImplementationDataTypes/uint8_t
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Byte-order of primitive datatype (/CppImplementationDataTypes/uint8_t)
        typename deserialization::Tp<TpPack>::ByteOrder

        >(reader, data.AsyNoaSts);
  }

  // Deserialize struct member 'AbsCtrlActv' of type /CppImplementationDataTypes/CtrlSts1VccIDT
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Byte-order of primitive datatype (/CppImplementationDataTypes/CtrlSts1VccIDT)
        typename deserialization::Tp<TpPack>::ByteOrder

        >(reader, data.AbsCtrlActv);
  }

  // Deserialize struct member 'AccrPedlRatAccrPedlRat' of type /CppImplementationDataTypes/float
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Byte-order of primitive datatype (/CppImplementationDataTypes/float)
        typename deserialization::Tp<TpPack>::ByteOrder

        >(reader, data.AccrPedlRatAccrPedlRat);
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

  // Deserialize struct member 'AsyALgtCtrlModCfmd' of type /CppImplementationDataTypes/AsyALgtCtrlMod1VccIDT
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Byte-order of primitive datatype (/CppImplementationDataTypes/AsyALgtCtrlMod1VccIDT)
        typename deserialization::Tp<TpPack>::ByteOrder

        >(reader, data.AsyALgtCtrlModCfmd);
  }

  // Deserialize struct member 'BrkPrecActv' of type /CppImplementationDataTypes/OnOff1VccIDT
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Byte-order of primitive datatype (/CppImplementationDataTypes/OnOff1VccIDT)
        typename deserialization::Tp<TpPack>::ByteOrder

        >(reader, data.BrkPrecActv);
  }

  // Deserialize struct member 'BrkSysCylPMstRec1Vcc' of type /CppImplementationDataTypes/BrkSysCylPMstRec1VccIDT
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Config of struct length field (/CppImplementationDataTypes/BrkSysCylPMstRec1VccIDT)
        internal::LengthSize<deserialization::Tp<TpPack>::kSizeOfStructLengthField, typename deserialization::Tp<TpPack>::ByteOrder>

        >(reader, data.BrkSysCylPMstRec1Vcc);
  }

  // Deserialize struct member 'DrvrDecelReqFloat8' of type /CppImplementationDataTypes/float
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Byte-order of primitive datatype (/CppImplementationDataTypes/float)
        typename deserialization::Tp<TpPack>::ByteOrder

        >(reader, data.DrvrDecelReqFloat8);
  }

  // Deserialize struct member 'EscCtrlIndcn' of type /CppImplementationDataTypes/DevSts1VccIDT
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Byte-order of primitive datatype (/CppImplementationDataTypes/DevSts1VccIDT)
        typename deserialization::Tp<TpPack>::ByteOrder

        >(reader, data.EscCtrlIndcn);
  }

  // Deserialize struct member 'EscSt' of type /CppImplementationDataTypes/EscSt1VccIDT
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Byte-order of primitive datatype (/CppImplementationDataTypes/EscSt1VccIDT)
        typename deserialization::Tp<TpPack>::ByteOrder

        >(reader, data.EscSt);
  }

  // Deserialize struct member 'VehSpdIndcdQly' of type /CppImplementationDataTypes/GenQf1VccIDT
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Byte-order of primitive datatype (/CppImplementationDataTypes/GenQf1VccIDT)
        typename deserialization::Tp<TpPack>::ByteOrder

        >(reader, data.VehSpdIndcdQly);
  }

  // Deserialize struct member 'FricEstimnFromVehDyn1Vcc' of type /CppImplementationDataTypes/FricEstimnFromVehDyn1VccIDT
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Config of struct length field (/CppImplementationDataTypes/FricEstimnFromVehDyn1VccIDT)
        internal::LengthSize<deserialization::Tp<TpPack>::kSizeOfStructLengthField, typename deserialization::Tp<TpPack>::ByteOrder>

        >(reader, data.FricEstimnFromVehDyn1Vcc);
  }

  // Deserialize struct member 'DrvrPrsntSts0' of type /CppImplementationDataTypes/DrvrPrsntSts0IDT
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Config of struct length field (/CppImplementationDataTypes/DrvrPrsntSts0IDT)
        internal::LengthSize<deserialization::Tp<TpPack>::kSizeOfStructLengthField, typename deserialization::Tp<TpPack>::ByteOrder>

        >(reader, data.DrvrPrsntSts0);
  }

  // Deserialize struct member 'DoorDrvrSts' of type /CppImplementationDataTypes/DoorSts2VccIDT
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Byte-order of primitive datatype (/CppImplementationDataTypes/DoorSts2VccIDT)
        typename deserialization::Tp<TpPack>::ByteOrder

        >(reader, data.DoorDrvrSts);
  }

  // Deserialize struct member 'AsyLineLePah' of type /CppImplementationDataTypes/AsyLineLePahIDT
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Config of struct length field (/CppImplementationDataTypes/AsyLineLePahIDT)
        internal::LengthSize<deserialization::Tp<TpPack>::kSizeOfStructLengthField, typename deserialization::Tp<TpPack>::ByteOrder>

        >(reader, data.AsyLineLePah);
  }

  // Deserialize struct member 'AsyLineLePah2' of type /CppImplementationDataTypes/AsyLineLePah2IDT
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Config of struct length field (/CppImplementationDataTypes/AsyLineLePah2IDT)
        internal::LengthSize<deserialization::Tp<TpPack>::kSizeOfStructLengthField, typename deserialization::Tp<TpPack>::ByteOrder>

        >(reader, data.AsyLineLePah2);
  }

  // Deserialize struct member 'AsyLeFirstStrt' of type /CppImplementationDataTypes/uint8_t
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Byte-order of primitive datatype (/CppImplementationDataTypes/uint8_t)
        typename deserialization::Tp<TpPack>::ByteOrder

        >(reader, data.AsyLeFirstStrt);
  }

  // Deserialize struct member 'AsyLeFirstEnd' of type /CppImplementationDataTypes/uint8_t
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Byte-order of primitive datatype (/CppImplementationDataTypes/uint8_t)
        typename deserialization::Tp<TpPack>::ByteOrder

        >(reader, data.AsyLeFirstEnd);
  }

  // Deserialize struct member 'AsyLeSecStrt' of type /CppImplementationDataTypes/uint8_t
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Byte-order of primitive datatype (/CppImplementationDataTypes/uint8_t)
        typename deserialization::Tp<TpPack>::ByteOrder

        >(reader, data.AsyLeSecStrt);
  }

  // Deserialize struct member 'AsyLeSecEnd' of type /CppImplementationDataTypes/uint8_t
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Byte-order of primitive datatype (/CppImplementationDataTypes/uint8_t)
        typename deserialization::Tp<TpPack>::ByteOrder

        >(reader, data.AsyLeSecEnd);
  }

  // Deserialize struct member 'AsyLineDstLe' of type /CppImplementationDataTypes/float
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Byte-order of primitive datatype (/CppImplementationDataTypes/float)
        typename deserialization::Tp<TpPack>::ByteOrder

        >(reader, data.AsyLineDstLe);
  }

  // Deserialize struct member 'AsyLineLeColor' of type /CppImplementationDataTypes/AsyLineLeColor1VccIDT
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Byte-order of primitive datatype (/CppImplementationDataTypes/AsyLineLeColor1VccIDT)
        typename deserialization::Tp<TpPack>::ByteOrder

        >(reader, data.AsyLineLeColor);
  }

  // Deserialize struct member 'AsyLineLeTyp' of type /CppImplementationDataTypes/AsyLineLeTyp1VccIDT
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Byte-order of primitive datatype (/CppImplementationDataTypes/AsyLineLeTyp1VccIDT)
        typename deserialization::Tp<TpPack>::ByteOrder

        >(reader, data.AsyLineLeTyp);
  }

  // Deserialize struct member 'AsyLineRiPah' of type /CppImplementationDataTypes/AsyLineRiPahIDT
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Config of struct length field (/CppImplementationDataTypes/AsyLineRiPahIDT)
        internal::LengthSize<deserialization::Tp<TpPack>::kSizeOfStructLengthField, typename deserialization::Tp<TpPack>::ByteOrder>

        >(reader, data.AsyLineRiPah);
  }

  // Deserialize struct member 'AsyLineRiPah2' of type /CppImplementationDataTypes/AsyLineRiPah2IDT
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Config of struct length field (/CppImplementationDataTypes/AsyLineRiPah2IDT)
        internal::LengthSize<deserialization::Tp<TpPack>::kSizeOfStructLengthField, typename deserialization::Tp<TpPack>::ByteOrder>

        >(reader, data.AsyLineRiPah2);
  }

  // Deserialize struct member 'AsyRiFirstStrt' of type /CppImplementationDataTypes/uint8_t
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Byte-order of primitive datatype (/CppImplementationDataTypes/uint8_t)
        typename deserialization::Tp<TpPack>::ByteOrder

        >(reader, data.AsyRiFirstStrt);
  }

  // Deserialize struct member 'AsyRiFirstEnd' of type /CppImplementationDataTypes/uint8_t
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Byte-order of primitive datatype (/CppImplementationDataTypes/uint8_t)
        typename deserialization::Tp<TpPack>::ByteOrder

        >(reader, data.AsyRiFirstEnd);
  }

  // Deserialize struct member 'AsyRiSecStrt' of type /CppImplementationDataTypes/uint8_t
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Byte-order of primitive datatype (/CppImplementationDataTypes/uint8_t)
        typename deserialization::Tp<TpPack>::ByteOrder

        >(reader, data.AsyRiSecStrt);
  }

  // Deserialize struct member 'AsyRiSecEnd' of type /CppImplementationDataTypes/uint8_t
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Byte-order of primitive datatype (/CppImplementationDataTypes/uint8_t)
        typename deserialization::Tp<TpPack>::ByteOrder

        >(reader, data.AsyRiSecEnd);
  }

  // Deserialize struct member 'AsyLineDstRi' of type /CppImplementationDataTypes/float
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Byte-order of primitive datatype (/CppImplementationDataTypes/float)
        typename deserialization::Tp<TpPack>::ByteOrder

        >(reader, data.AsyLineDstRi);
  }

  // Deserialize struct member 'AsyLineRiColor' of type /CppImplementationDataTypes/AsyLineLeColor1VccIDT
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Byte-order of primitive datatype (/CppImplementationDataTypes/AsyLineLeColor1VccIDT)
        typename deserialization::Tp<TpPack>::ByteOrder

        >(reader, data.AsyLineRiColor);
  }

  // Deserialize struct member 'AsyLineRiTyp' of type /CppImplementationDataTypes/AsyLineLeTyp1VccIDT
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Byte-order of primitive datatype (/CppImplementationDataTypes/AsyLineLeTyp1VccIDT)
        typename deserialization::Tp<TpPack>::ByteOrder

        >(reader, data.AsyLineRiTyp);
  }

  // Deserialize struct member 'AsyLineLe2Pah' of type /CppImplementationDataTypes/AsyLineLe2PahIDT
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Config of struct length field (/CppImplementationDataTypes/AsyLineLe2PahIDT)
        internal::LengthSize<deserialization::Tp<TpPack>::kSizeOfStructLengthField, typename deserialization::Tp<TpPack>::ByteOrder>

        >(reader, data.AsyLineLe2Pah);
  }

  // Deserialize struct member 'AsyLineLe2Pah2' of type /CppImplementationDataTypes/AsyLineLe2Pah2IDT
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Config of struct length field (/CppImplementationDataTypes/AsyLineLe2Pah2IDT)
        internal::LengthSize<deserialization::Tp<TpPack>::kSizeOfStructLengthField, typename deserialization::Tp<TpPack>::ByteOrder>

        >(reader, data.AsyLineLe2Pah2);
  }

  // Deserialize struct member 'AsyLe2FirstStrt' of type /CppImplementationDataTypes/uint8_t
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Byte-order of primitive datatype (/CppImplementationDataTypes/uint8_t)
        typename deserialization::Tp<TpPack>::ByteOrder

        >(reader, data.AsyLe2FirstStrt);
  }

  // Deserialize struct member 'AsyLe2FirstEnd' of type /CppImplementationDataTypes/uint8_t
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Byte-order of primitive datatype (/CppImplementationDataTypes/uint8_t)
        typename deserialization::Tp<TpPack>::ByteOrder

        >(reader, data.AsyLe2FirstEnd);
  }

  // Deserialize struct member 'AsyLe2SecStrt' of type /CppImplementationDataTypes/uint8_t
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Byte-order of primitive datatype (/CppImplementationDataTypes/uint8_t)
        typename deserialization::Tp<TpPack>::ByteOrder

        >(reader, data.AsyLe2SecStrt);
  }

  // Deserialize struct member 'AsyLe2SecEnd' of type /CppImplementationDataTypes/uint8_t
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Byte-order of primitive datatype (/CppImplementationDataTypes/uint8_t)
        typename deserialization::Tp<TpPack>::ByteOrder

        >(reader, data.AsyLe2SecEnd);
  }

  // Deserialize struct member 'AsyLineLe2Color' of type /CppImplementationDataTypes/AsyLineLeColor1VccIDT
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Byte-order of primitive datatype (/CppImplementationDataTypes/AsyLineLeColor1VccIDT)
        typename deserialization::Tp<TpPack>::ByteOrder

        >(reader, data.AsyLineLe2Color);
  }

  // Deserialize struct member 'AsyLineLe2Typ' of type /CppImplementationDataTypes/AsyLineLeTyp1VccIDT
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Byte-order of primitive datatype (/CppImplementationDataTypes/AsyLineLeTyp1VccIDT)
        typename deserialization::Tp<TpPack>::ByteOrder

        >(reader, data.AsyLineLe2Typ);
  }

  // Deserialize struct member 'AsyLineRi2Pah' of type /CppImplementationDataTypes/AsyLineRi2PahIDT
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Config of struct length field (/CppImplementationDataTypes/AsyLineRi2PahIDT)
        internal::LengthSize<deserialization::Tp<TpPack>::kSizeOfStructLengthField, typename deserialization::Tp<TpPack>::ByteOrder>

        >(reader, data.AsyLineRi2Pah);
  }

  // Deserialize struct member 'AsyLineRi2Pah2' of type /CppImplementationDataTypes/AsyLineRi2Pah2IDT
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Config of struct length field (/CppImplementationDataTypes/AsyLineRi2Pah2IDT)
        internal::LengthSize<deserialization::Tp<TpPack>::kSizeOfStructLengthField, typename deserialization::Tp<TpPack>::ByteOrder>

        >(reader, data.AsyLineRi2Pah2);
  }

  // Deserialize struct member 'AsyRi2FirstStrt' of type /CppImplementationDataTypes/uint8_t
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Byte-order of primitive datatype (/CppImplementationDataTypes/uint8_t)
        typename deserialization::Tp<TpPack>::ByteOrder

        >(reader, data.AsyRi2FirstStrt);
  }

  // Deserialize struct member 'AsyRi2FirstEnd' of type /CppImplementationDataTypes/uint8_t
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Byte-order of primitive datatype (/CppImplementationDataTypes/uint8_t)
        typename deserialization::Tp<TpPack>::ByteOrder

        >(reader, data.AsyRi2FirstEnd);
  }

  // Deserialize struct member 'AsyRi2SecStrt' of type /CppImplementationDataTypes/uint8_t
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Byte-order of primitive datatype (/CppImplementationDataTypes/uint8_t)
        typename deserialization::Tp<TpPack>::ByteOrder

        >(reader, data.AsyRi2SecStrt);
  }

  // Deserialize struct member 'AsyRi2SecEnd' of type /CppImplementationDataTypes/uint8_t
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Byte-order of primitive datatype (/CppImplementationDataTypes/uint8_t)
        typename deserialization::Tp<TpPack>::ByteOrder

        >(reader, data.AsyRi2SecEnd);
  }

  // Deserialize struct member 'AsyLineRi2Color' of type /CppImplementationDataTypes/AsyLineLeColor1VccIDT
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Byte-order of primitive datatype (/CppImplementationDataTypes/AsyLineLeColor1VccIDT)
        typename deserialization::Tp<TpPack>::ByteOrder

        >(reader, data.AsyLineRi2Color);
  }

  // Deserialize struct member 'AsyLineRi2Typ' of type /CppImplementationDataTypes/AsyLineLeTyp1VccIDT
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Byte-order of primitive datatype (/CppImplementationDataTypes/AsyLineLeTyp1VccIDT)
        typename deserialization::Tp<TpPack>::ByteOrder

        >(reader, data.AsyLineRi2Typ);
  }

  // Deserialize struct member 'EyesOnRoad' of type /CppImplementationDataTypes/EyeOnRoadFromDHUIDT
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Byte-order of primitive datatype (/CppImplementationDataTypes/EyeOnRoadFromDHUIDT)
        typename deserialization::Tp<TpPack>::ByteOrder

        >(reader, data.EyesOnRoad);
  }

  // Deserialize struct member 'DrvrSteerWhlHldGroup0' of type /CppImplementationDataTypes/DrvrSteerWhlHldGroup0IDT
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Config of struct length field (/CppImplementationDataTypes/DrvrSteerWhlHldGroup0IDT)
        internal::LengthSize<deserialization::Tp<TpPack>::kSizeOfStructLengthField, typename deserialization::Tp<TpPack>::ByteOrder>

        >(reader, data.DrvrSteerWhlHldGroup0);
  }

  // Deserialize struct member 'RoadIncln1' of type /CppImplementationDataTypes/RoadIncln1IDT
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Config of struct length field (/CppImplementationDataTypes/RoadIncln1IDT)
        internal::LengthSize<deserialization::Tp<TpPack>::kSizeOfStructLengthField, typename deserialization::Tp<TpPack>::ByteOrder>

        >(reader, data.RoadIncln1);
  }

  // Deserialize struct member 'SftySigGroupFromHmiSafe1' of type /CppImplementationDataTypes/SftySigGroupFromHmiSafe1IDT
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Config of struct length field (/CppImplementationDataTypes/SftySigGroupFromHmiSafe1IDT)
        internal::LengthSize<deserialization::Tp<TpPack>::kSizeOfStructLengthField, typename deserialization::Tp<TpPack>::ByteOrder>

        >(reader, data.SftySigGroupFromHmiSafe1);
  }

  // Deserialize struct member 'SteerServoSts' of type /CppImplementationDataTypes/SteerServoStsIDT
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Byte-order of primitive datatype (/CppImplementationDataTypes/SteerServoStsIDT)
        typename deserialization::Tp<TpPack>::ByteOrder

        >(reader, data.SteerServoSts);
  }

  // Deserialize struct member 'AsyObjForBigData0' of type /CppImplementationDataTypes/AsyObjForBigData0IDT
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Config of struct length field (/CppImplementationDataTypes/AsyObjForBigData0IDT)
        internal::LengthSize<deserialization::Tp<TpPack>::kSizeOfStructLengthField, typename deserialization::Tp<TpPack>::ByteOrder>

        >(reader, data.AsyObjForBigData0);
  }

  // Deserialize struct member 'AsyObjForBigData1' of type /CppImplementationDataTypes/AsyObjForBigData1IDT
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Config of struct length field (/CppImplementationDataTypes/AsyObjForBigData1IDT)
        internal::LengthSize<deserialization::Tp<TpPack>::kSizeOfStructLengthField, typename deserialization::Tp<TpPack>::ByteOrder>

        >(reader, data.AsyObjForBigData1);
  }

  // Deserialize struct member 'AsyObjForBigData2' of type /CppImplementationDataTypes/AsyObjForBigData2IDT
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Config of struct length field (/CppImplementationDataTypes/AsyObjForBigData2IDT)
        internal::LengthSize<deserialization::Tp<TpPack>::kSizeOfStructLengthField, typename deserialization::Tp<TpPack>::ByteOrder>

        >(reader, data.AsyObjForBigData2);
  }

  // Deserialize struct member 'ObjFrnt1Vcc' of type /CppImplementationDataTypes/ObjFrnt1VccIDT
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Config of struct length field (/CppImplementationDataTypes/ObjFrnt1VccIDT)
        internal::LengthSize<deserialization::Tp<TpPack>::kSizeOfStructLengthField, typename deserialization::Tp<TpPack>::ByteOrder>

        >(reader, data.ObjFrnt1Vcc);
  }

  // Deserialize struct member 'ReSideRdrLeObj1' of type /CppImplementationDataTypes/ReSideRdrLeObj1IDT
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Config of struct length field (/CppImplementationDataTypes/ReSideRdrLeObj1IDT)
        internal::LengthSize<deserialization::Tp<TpPack>::kSizeOfStructLengthField, typename deserialization::Tp<TpPack>::ByteOrder>

        >(reader, data.ReSideRdrLeObj1);
  }

  // Deserialize struct member 'ReSideRdrRiObj1' of type /CppImplementationDataTypes/ReSideRdrRiObj1IDT
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Config of struct length field (/CppImplementationDataTypes/ReSideRdrRiObj1IDT)
        internal::LengthSize<deserialization::Tp<TpPack>::kSizeOfStructLengthField, typename deserialization::Tp<TpPack>::ByteOrder>

        >(reader, data.ReSideRdrRiObj1);
  }

  // Deserialize struct member 'BiasedPosnFromSatlt1FG' of type /CppImplementationDataTypes/BiasedPosnFromSatlt1FGIDT
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Config of struct length field (/CppImplementationDataTypes/BiasedPosnFromSatlt1FGIDT)
        internal::LengthSize<deserialization::Tp<TpPack>::kSizeOfStructLengthField, typename deserialization::Tp<TpPack>::ByteOrder>

        >(reader, data.BiasedPosnFromSatlt1FG);
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

  // Deserialize struct member 'PosnFromSatlt1Vcc' of type /CppImplementationDataTypes/PosnFromSatlt1VccIDT
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Config of struct length field (/CppImplementationDataTypes/PosnFromSatlt1VccIDT)
        internal::LengthSize<deserialization::Tp<TpPack>::kSizeOfStructLengthField, typename deserialization::Tp<TpPack>::ByteOrder>

        >(reader, data.PosnFromSatlt1Vcc);
  }

  // Deserialize struct member 'LppLeadPnt' of type /CppImplementationDataTypes/LppLeadPntEDRIDT
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Config of struct length field (/CppImplementationDataTypes/LppLeadPntEDRIDT)
        internal::LengthSize<deserialization::Tp<TpPack>::kSizeOfStructLengthField, typename deserialization::Tp<TpPack>::ByteOrder>

        >(reader, data.LppLeadPnt);
  }

  // Deserialize struct member 'AsyLanChgColorDsp' of type /CppImplementationDataTypes/AsyLanChgColorDspIDT
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Byte-order of primitive datatype (/CppImplementationDataTypes/AsyLanChgColorDspIDT)
        typename deserialization::Tp<TpPack>::ByteOrder

        >(reader, data.AsyLanChgColorDsp);
  }

  // Deserialize struct member 'LppPathSelect' of type /CppImplementationDataTypes/LppPathSelectEDRIDT
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Config of struct length field (/CppImplementationDataTypes/LppPathSelectEDRIDT)
        internal::LengthSize<deserialization::Tp<TpPack>::kSizeOfStructLengthField, typename deserialization::Tp<TpPack>::ByteOrder>

        >(reader, data.LppPathSelect);
  }

  // Deserialize struct member 'HmiStaticObj' of type /CppImplementationDataTypes/AsyObjType1VccIDT
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Byte-order of primitive datatype (/CppImplementationDataTypes/AsyObjType1VccIDT)
        typename deserialization::Tp<TpPack>::ByteOrder

        >(reader, data.HmiStaticObj);
  }

  // Deserialize struct member 'HmiMovgObj' of type /CppImplementationDataTypes/AsyObjType1VccIDT
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Byte-order of primitive datatype (/CppImplementationDataTypes/AsyObjType1VccIDT)
        typename deserialization::Tp<TpPack>::ByteOrder

        >(reader, data.HmiMovgObj);
  }

  // Deserialize struct member 'HmiObjID0' of type /CppImplementationDataTypes/uint8_t
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Byte-order of primitive datatype (/CppImplementationDataTypes/uint8_t)
        typename deserialization::Tp<TpPack>::ByteOrder

        >(reader, data.HmiObjID0);
  }

  // Deserialize struct member 'HmiObjID1' of type /CppImplementationDataTypes/uint8_t
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Byte-order of primitive datatype (/CppImplementationDataTypes/uint8_t)
        typename deserialization::Tp<TpPack>::ByteOrder

        >(reader, data.HmiObjID1);
  }

  // Deserialize struct member 'ColorOfHmiMovgObj' of type /CppImplementationDataTypes/AsyObjColor1VccIDT
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Byte-order of primitive datatype (/CppImplementationDataTypes/AsyObjColor1VccIDT)
        typename deserialization::Tp<TpPack>::ByteOrder

        >(reader, data.ColorOfHmiMovgObj);
  }

  // Deserialize struct member 'HdDirOfMovgObj' of type /CppImplementationDataTypes/AsyObjstat1VccIDT
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Byte-order of primitive datatype (/CppImplementationDataTypes/AsyObjstat1VccIDT)
        typename deserialization::Tp<TpPack>::ByteOrder

        >(reader, data.HdDirOfMovgObj);
  }

  // Deserialize struct member 'HmiMoving' of type /CppImplementationDataTypes/NoYes1VccIDT
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Byte-order of primitive datatype (/CppImplementationDataTypes/NoYes1VccIDT)
        typename deserialization::Tp<TpPack>::ByteOrder

        >(reader, data.HmiMoving);
  }

  // Deserialize struct member 'Objectposnlat' of type /CppImplementationDataTypes/uint16_t
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Byte-order of primitive datatype (/CppImplementationDataTypes/uint16_t)
        typename deserialization::Tp<TpPack>::ByteOrder

        >(reader, data.Objectposnlat);
  }

  // Deserialize struct member 'Objectposnlgt' of type /CppImplementationDataTypes/uint16_t
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Byte-order of primitive datatype (/CppImplementationDataTypes/uint16_t)
        typename deserialization::Tp<TpPack>::ByteOrder

        >(reader, data.Objectposnlgt);
  }

  // Deserialize struct member 'AsyLineLe2RampPosn' of type /CppImplementationDataTypes/uint8_t
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Byte-order of primitive datatype (/CppImplementationDataTypes/uint8_t)
        typename deserialization::Tp<TpPack>::ByteOrder

        >(reader, data.AsyLineLe2RampPosn);
  }

  // Deserialize struct member 'AsyLineLe2RampTyp' of type /CppImplementationDataTypes/RampType1VccIDT
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Byte-order of primitive datatype (/CppImplementationDataTypes/RampType1VccIDT)
        typename deserialization::Tp<TpPack>::ByteOrder

        >(reader, data.AsyLineLe2RampTyp);
  }

  // Deserialize struct member 'AsyLineRi2RampPosn' of type /CppImplementationDataTypes/uint8_t
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Byte-order of primitive datatype (/CppImplementationDataTypes/uint8_t)
        typename deserialization::Tp<TpPack>::ByteOrder

        >(reader, data.AsyLineRi2RampPosn);
  }

  // Deserialize struct member 'AsyLineRi2RampTyp' of type /CppImplementationDataTypes/RampType1VccIDT
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Byte-order of primitive datatype (/CppImplementationDataTypes/RampType1VccIDT)
        typename deserialization::Tp<TpPack>::ByteOrder

        >(reader, data.AsyLineRi2RampTyp);
  }

  // Deserialize struct member 'CrashStsSafe' of type /CppImplementationDataTypes/CrashSts2VccIDT
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Byte-order of primitive datatype (/CppImplementationDataTypes/CrashSts2VccIDT)
        typename deserialization::Tp<TpPack>::ByteOrder

        >(reader, data.CrashStsSafe);
  }

  // Deserialize struct member 'CircularCamsts' of type /CppImplementationDataTypes/RsdsMstSt1VccIDT
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Byte-order of primitive datatype (/CppImplementationDataTypes/RsdsMstSt1VccIDT)
        typename deserialization::Tp<TpPack>::ByteOrder

        >(reader, data.CircularCamsts);
  }

  // Deserialize struct member 'SteerExtFctStsRec1Vcc' of type /CppImplementationDataTypes/SteerExtFctStsRec1VccIDT
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Config of struct length field (/CppImplementationDataTypes/SteerExtFctStsRec1VccIDT)
        internal::LengthSize<deserialization::Tp<TpPack>::kSizeOfStructLengthField, typename deserialization::Tp<TpPack>::ByteOrder>

        >(reader, data.SteerExtFctStsRec1Vcc);
  }

  // Deserialize struct member 'AsyALgtReqRngForCmft1Vcc' of type /CppImplementationDataTypes/AsyALgtReqRngForCmft1VccIDT
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Config of struct length field (/CppImplementationDataTypes/AsyALgtReqRngForCmft1VccIDT)
        internal::LengthSize<deserialization::Tp<TpPack>::kSizeOfStructLengthField, typename deserialization::Tp<TpPack>::ByteOrder>

        >(reader, data.AsyALgtReqRngForCmft1Vcc);
  }

  return result;
}

/*!
 * \brief Calculates the static size for datatype /CppImplementationDataTypes/EDRDataGroupIDT.
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
constexpr std::size_t SomeIpProtocolGetStaticSize(amsr::someip_protocol::internal::deserialization::SizeToken<::EDRDataGroupIDT::EDRDataGroupIDT>) noexcept {
  // Namespace alias for static deserialization code
  namespace internal = amsr::someip_protocol::internal;
  namespace deserialization = internal::deserialization;

  // Sum of static size
 constexpr std::size_t static_size{
  // Accumulate the static size of struct member 'CllsnAidPost' of type /CppImplementationDataTypes/OnOff1VccIDT
   SomeIpProtocolGetStaticSize<TpPack,
                                // Byte-order of primitive datatype (/CppImplementationDataTypes/OnOff1VccIDT)
                                typename deserialization::Tp<TpPack>::ByteOrder

                               >(deserialization::SizeToken<::OnOff1VccIDT::OnOff1VccIDT>{})  + 
  
  // Accumulate the static size of struct member 'CllsnMtgtnWarnSts' of type /CppImplementationDataTypes/CllsnMtgtnWarnSts1IDT
   SomeIpProtocolGetStaticSize<TpPack,
                                // Byte-order of primitive datatype (/CppImplementationDataTypes/CllsnMtgtnWarnSts1IDT)
                                typename deserialization::Tp<TpPack>::ByteOrder

                               >(deserialization::SizeToken<::CllsnMtgtnWarnSts1IDT::CllsnMtgtnWarnSts1IDT>{})  + 
  
  // Accumulate the static size of struct member 'WarnForAsyEmgyLaneKeepAid' of type /CppImplementationDataTypes/OnOff1VccIDT
   SomeIpProtocolGetStaticSize<TpPack,
                                // Byte-order of primitive datatype (/CppImplementationDataTypes/OnOff1VccIDT)
                                typename deserialization::Tp<TpPack>::ByteOrder

                               >(deserialization::SizeToken<::OnOff1VccIDT::OnOff1VccIDT>{})  + 
  
  // Accumulate the static size of struct member 'CllsnAidPostEMA' of type /CppImplementationDataTypes/OnOff1VccIDT
   SomeIpProtocolGetStaticSize<TpPack,
                                // Byte-order of primitive datatype (/CppImplementationDataTypes/OnOff1VccIDT)
                                typename deserialization::Tp<TpPack>::ByteOrder

                               >(deserialization::SizeToken<::OnOff1VccIDT::OnOff1VccIDT>{})  + 
  
  // Accumulate the static size of struct member 'FctaIndcnLe' of type /CppImplementationDataTypes/LcmaIndcn1VccIDT
   SomeIpProtocolGetStaticSize<TpPack,
                                // Byte-order of primitive datatype (/CppImplementationDataTypes/LcmaIndcn1VccIDT)
                                typename deserialization::Tp<TpPack>::ByteOrder

                               >(deserialization::SizeToken<::LcmaIndcn1VccIDT::LcmaIndcn1VccIDT>{})  + 
  
  // Accumulate the static size of struct member 'FctaIndcnRi' of type /CppImplementationDataTypes/LcmaIndcn1VccIDT
   SomeIpProtocolGetStaticSize<TpPack,
                                // Byte-order of primitive datatype (/CppImplementationDataTypes/LcmaIndcn1VccIDT)
                                typename deserialization::Tp<TpPack>::ByteOrder

                               >(deserialization::SizeToken<::LcmaIndcn1VccIDT::LcmaIndcn1VccIDT>{})  + 
  
  // Accumulate the static size of struct member 'LaneChgAutStsForAsyHiWay' of type /CppImplementationDataTypes/LaneChgAutStsForAsyHiWay2IDT
   SomeIpProtocolGetStaticSize<TpPack,
                                // Byte-order of primitive datatype (/CppImplementationDataTypes/LaneChgAutStsForAsyHiWay2IDT)
                                typename deserialization::Tp<TpPack>::ByteOrder

                               >(deserialization::SizeToken<::LaneChgAutStsForAsyHiWay2IDT::LaneChgAutStsForAsyHiWay2IDT>{})  + 
  
  // Accumulate the static size of struct member 'AsyALgtSts' of type /CppImplementationDataTypes/AsyALgtSts1VccIDT
   SomeIpProtocolGetStaticSize<TpPack,
                                // Byte-order of primitive datatype (/CppImplementationDataTypes/AsyALgtSts1VccIDT)
                                typename deserialization::Tp<TpPack>::ByteOrder

                               >(deserialization::SizeToken<::AsyALgtSts1VccIDT::AsyALgtSts1VccIDT>{})  + 
  
  // Accumulate the static size of struct member 'AsyALatIndcr' of type /CppImplementationDataTypes/AsyIndcrDispSts2VccIDT
   SomeIpProtocolGetStaticSize<TpPack,
                                // Byte-order of primitive datatype (/CppImplementationDataTypes/AsyIndcrDispSts2VccIDT)
                                typename deserialization::Tp<TpPack>::ByteOrder

                               >(deserialization::SizeToken<::AsyIndcrDispSts2VccIDT::AsyIndcrDispSts2VccIDT>{})  + 
  
  // Accumulate the static size of struct member 'LcmaIndcnLe' of type /CppImplementationDataTypes/WarnLvl1VccIDT
   SomeIpProtocolGetStaticSize<TpPack,
                                // Byte-order of primitive datatype (/CppImplementationDataTypes/WarnLvl1VccIDT)
                                typename deserialization::Tp<TpPack>::ByteOrder

                               >(deserialization::SizeToken<::WarnLvl1VccIDT::WarnLvl1VccIDT>{})  + 
  
  // Accumulate the static size of struct member 'LcmaIndcnRi' of type /CppImplementationDataTypes/WarnLvl1VccIDT
   SomeIpProtocolGetStaticSize<TpPack,
                                // Byte-order of primitive datatype (/CppImplementationDataTypes/WarnLvl1VccIDT)
                                typename deserialization::Tp<TpPack>::ByteOrder

                               >(deserialization::SizeToken<::WarnLvl1VccIDT::WarnLvl1VccIDT>{})  + 
  
  // Accumulate the static size of struct member 'RcwmBrkReq' of type /CppImplementationDataTypes/OnOff1VccIDT
   SomeIpProtocolGetStaticSize<TpPack,
                                // Byte-order of primitive datatype (/CppImplementationDataTypes/OnOff1VccIDT)
                                typename deserialization::Tp<TpPack>::ByteOrder

                               >(deserialization::SizeToken<::OnOff1VccIDT::OnOff1VccIDT>{})  + 
  
  // Accumulate the static size of struct member 'AsySftyDecelEnadByVehDyn' of type /CppImplementationDataTypes/AsySftyDecelEnadByVehDyn1VccIDT
   SomeIpProtocolGetStaticSize<TpPack,
                                // Byte-order of primitive datatype (/CppImplementationDataTypes/AsySftyDecelEnadByVehDyn1VccIDT)
                                typename deserialization::Tp<TpPack>::ByteOrder

                               >(deserialization::SizeToken<::AsySftyDecelEnadByVehDyn1VccIDT::AsySftyDecelEnadByVehDyn1VccIDT>{})  + 
  
  // Accumulate the static size of struct member 'SftyDecelGroupSafe' of type /CppImplementationDataTypes/SftyDecelGroupSafeIDT
   SomeIpProtocolGetStaticSize<TpPack,
                                // Config of struct length field (/CppImplementationDataTypes/SftyDecelGroupSafeIDT)
                                internal::LengthSize<deserialization::Tp<TpPack>::kSizeOfStructLengthField, typename deserialization::Tp<TpPack>::ByteOrder>

                               >(deserialization::SizeToken<::SftyDecelGroupSafeIDT::SftyDecelGroupSafeIDT>{})  + 
  
  // Accumulate the static size of struct member 'AsySftyEnaDecelByDBS' of type /CppImplementationDataTypes/OnOff1VccIDT
   SomeIpProtocolGetStaticSize<TpPack,
                                // Byte-order of primitive datatype (/CppImplementationDataTypes/OnOff1VccIDT)
                                typename deserialization::Tp<TpPack>::ByteOrder

                               >(deserialization::SizeToken<::OnOff1VccIDT::OnOff1VccIDT>{})  + 
  
  // Accumulate the static size of struct member 'AsySftyStandStillReq' of type /CppImplementationDataTypes/OnOff1VccIDT
   SomeIpProtocolGetStaticSize<TpPack,
                                // Byte-order of primitive datatype (/CppImplementationDataTypes/OnOff1VccIDT)
                                typename deserialization::Tp<TpPack>::ByteOrder

                               >(deserialization::SizeToken<::OnOff1VccIDT::OnOff1VccIDT>{})  + 
  
  // Accumulate the static size of struct member 'BrkHptcWarnReqForAutDrv' of type /CppImplementationDataTypes/CllsnThreat1VccIDT
   SomeIpProtocolGetStaticSize<TpPack,
                                // Byte-order of primitive datatype (/CppImplementationDataTypes/CllsnThreat1VccIDT)
                                typename deserialization::Tp<TpPack>::ByteOrder

                               >(deserialization::SizeToken<::CllsnThreat1VccIDT::CllsnThreat1VccIDT>{})  + 
  
  // Accumulate the static size of struct member 'CllsnThreat' of type /CppImplementationDataTypes/CllsnThreat1VccIDT
   SomeIpProtocolGetStaticSize<TpPack,
                                // Byte-order of primitive datatype (/CppImplementationDataTypes/CllsnThreat1VccIDT)
                                typename deserialization::Tp<TpPack>::ByteOrder

                               >(deserialization::SizeToken<::CllsnThreat1VccIDT::CllsnThreat1VccIDT>{})  + 
  
  // Accumulate the static size of struct member 'AgCtrlTqLowrLim' of type /CppImplementationDataTypes/float
   SomeIpProtocolGetStaticSize<TpPack,
                                // Byte-order of primitive datatype (/CppImplementationDataTypes/float)
                                typename deserialization::Tp<TpPack>::ByteOrder

                               >(deserialization::SizeToken<::float32IDT::float32IDT>{})  + 
  
  // Accumulate the static size of struct member 'AgCtrlTqUpprLim' of type /CppImplementationDataTypes/float
   SomeIpProtocolGetStaticSize<TpPack,
                                // Byte-order of primitive datatype (/CppImplementationDataTypes/float)
                                typename deserialization::Tp<TpPack>::ByteOrder

                               >(deserialization::SizeToken<::float32IDT::float32IDT>{})  + 
  
  // Accumulate the static size of struct member 'AsyPinionAgReq' of type /CppImplementationDataTypes/float
   SomeIpProtocolGetStaticSize<TpPack,
                                // Byte-order of primitive datatype (/CppImplementationDataTypes/float)
                                typename deserialization::Tp<TpPack>::ByteOrder

                               >(deserialization::SizeToken<::float32IDT::float32IDT>{})  + 
  
  // Accumulate the static size of struct member 'TqAssAddl' of type /CppImplementationDataTypes/float
   SomeIpProtocolGetStaticSize<TpPack,
                                // Byte-order of primitive datatype (/CppImplementationDataTypes/float)
                                typename deserialization::Tp<TpPack>::ByteOrder

                               >(deserialization::SizeToken<::float32IDT::float32IDT>{})  + 
  
  // Accumulate the static size of struct member 'SteerWhlTqAddl' of type /CppImplementationDataTypes/float
   SomeIpProtocolGetStaticSize<TpPack,
                                // Byte-order of primitive datatype (/CppImplementationDataTypes/float)
                                typename deserialization::Tp<TpPack>::ByteOrder

                               >(deserialization::SizeToken<::float32IDT::float32IDT>{})  + 
  
  // Accumulate the static size of struct member 'SteerTqAddlForEma' of type /CppImplementationDataTypes/float
   SomeIpProtocolGetStaticSize<TpPack,
                                // Byte-order of primitive datatype (/CppImplementationDataTypes/float)
                                typename deserialization::Tp<TpPack>::ByteOrder

                               >(deserialization::SizeToken<::float32IDT::float32IDT>{})  + 
  
  // Accumulate the static size of struct member 'RctaBrkReq' of type /CppImplementationDataTypes/YesNo1VccIDT
   SomeIpProtocolGetStaticSize<TpPack,
                                // Byte-order of primitive datatype (/CppImplementationDataTypes/YesNo1VccIDT)
                                typename deserialization::Tp<TpPack>::ByteOrder

                               >(deserialization::SizeToken<::YesNo1VccIDT::YesNo1VccIDT>{})  + 
  
  // Accumulate the static size of struct member 'RctaBrkReqQM' of type /CppImplementationDataTypes/OnOff1VccIDT
   SomeIpProtocolGetStaticSize<TpPack,
                                // Byte-order of primitive datatype (/CppImplementationDataTypes/OnOff1VccIDT)
                                typename deserialization::Tp<TpPack>::ByteOrder

                               >(deserialization::SizeToken<::OnOff1VccIDT::OnOff1VccIDT>{})  + 
  
  // Accumulate the static size of struct member 'RctaBrkActvd' of type /CppImplementationDataTypes/YesNo2VccIDT
   SomeIpProtocolGetStaticSize<TpPack,
                                // Byte-order of primitive datatype (/CppImplementationDataTypes/YesNo2VccIDT)
                                typename deserialization::Tp<TpPack>::ByteOrder

                               >(deserialization::SizeToken<::YesNo2VccIDT::YesNo2VccIDT>{})  + 
  
  // Accumulate the static size of struct member 'AsyALgtActvAftLim' of type /CppImplementationDataTypes/float
   SomeIpProtocolGetStaticSize<TpPack,
                                // Byte-order of primitive datatype (/CppImplementationDataTypes/float)
                                typename deserialization::Tp<TpPack>::ByteOrder

                               >(deserialization::SizeToken<::float32IDT::float32IDT>{})  + 
  
  // Accumulate the static size of struct member 'AsyInformForDrvr' of type /CppImplementationDataTypes/uint8_t
   SomeIpProtocolGetStaticSize<TpPack,
                                // Byte-order of primitive datatype (/CppImplementationDataTypes/uint8_t)
                                typename deserialization::Tp<TpPack>::ByteOrder

                               >(deserialization::SizeToken<::uint8IDT::uint8IDT>{})  + 
  
  // Accumulate the static size of struct member 'AsyNoaActvSuggest' of type /CppImplementationDataTypes/OnOff1VccIDT
   SomeIpProtocolGetStaticSize<TpPack,
                                // Byte-order of primitive datatype (/CppImplementationDataTypes/OnOff1VccIDT)
                                typename deserialization::Tp<TpPack>::ByteOrder

                               >(deserialization::SizeToken<::OnOff1VccIDT::OnOff1VccIDT>{})  + 
  
  // Accumulate the static size of struct member 'AsySafeStopSts' of type /CppImplementationDataTypes/uint8_t
   SomeIpProtocolGetStaticSize<TpPack,
                                // Byte-order of primitive datatype (/CppImplementationDataTypes/uint8_t)
                                typename deserialization::Tp<TpPack>::ByteOrder

                               >(deserialization::SizeToken<::uint8IDT::uint8IDT>{})  + 
  
  // Accumulate the static size of struct member 'AsyLatOffstSts' of type /CppImplementationDataTypes/uint8_t
   SomeIpProtocolGetStaticSize<TpPack,
                                // Byte-order of primitive datatype (/CppImplementationDataTypes/uint8_t)
                                typename deserialization::Tp<TpPack>::ByteOrder

                               >(deserialization::SizeToken<::uint8IDT::uint8IDT>{})  + 
  
  // Accumulate the static size of struct member 'ADCtrlMode' of type /CppImplementationDataTypes/uint8_t
   SomeIpProtocolGetStaticSize<TpPack,
                                // Byte-order of primitive datatype (/CppImplementationDataTypes/uint8_t)
                                typename deserialization::Tp<TpPack>::ByteOrder

                               >(deserialization::SizeToken<::uint8IDT::uint8IDT>{})  + 
  
  // Accumulate the static size of struct member 'AsyEyesOffWarnRqrd' of type /CppImplementationDataTypes/uint8_t
   SomeIpProtocolGetStaticSize<TpPack,
                                // Byte-order of primitive datatype (/CppImplementationDataTypes/uint8_t)
                                typename deserialization::Tp<TpPack>::ByteOrder

                               >(deserialization::SizeToken<::uint8IDT::uint8IDT>{})  + 
  
  // Accumulate the static size of struct member 'AsyNoaSts' of type /CppImplementationDataTypes/uint8_t
   SomeIpProtocolGetStaticSize<TpPack,
                                // Byte-order of primitive datatype (/CppImplementationDataTypes/uint8_t)
                                typename deserialization::Tp<TpPack>::ByteOrder

                               >(deserialization::SizeToken<::uint8IDT::uint8IDT>{})  + 
  
  // Accumulate the static size of struct member 'AbsCtrlActv' of type /CppImplementationDataTypes/CtrlSts1VccIDT
   SomeIpProtocolGetStaticSize<TpPack,
                                // Byte-order of primitive datatype (/CppImplementationDataTypes/CtrlSts1VccIDT)
                                typename deserialization::Tp<TpPack>::ByteOrder

                               >(deserialization::SizeToken<::CtrlSts1VccIDT::CtrlSts1VccIDT>{})  + 
  
  // Accumulate the static size of struct member 'AccrPedlRatAccrPedlRat' of type /CppImplementationDataTypes/float
   SomeIpProtocolGetStaticSize<TpPack,
                                // Byte-order of primitive datatype (/CppImplementationDataTypes/float)
                                typename deserialization::Tp<TpPack>::ByteOrder

                               >(deserialization::SizeToken<::float32IDT::float32IDT>{})  + 
  
  // Accumulate the static size of struct member 'LatCtrlModCfmd' of type /CppImplementationDataTypes/LatCtrlMod1VccIDT
   SomeIpProtocolGetStaticSize<TpPack,
                                // Byte-order of primitive datatype (/CppImplementationDataTypes/LatCtrlMod1VccIDT)
                                typename deserialization::Tp<TpPack>::ByteOrder

                               >(deserialization::SizeToken<::LatCtrlMod1VccIDT::LatCtrlMod1VccIDT>{})  + 
  
  // Accumulate the static size of struct member 'AsyALgtCtrlModCfmd' of type /CppImplementationDataTypes/AsyALgtCtrlMod1VccIDT
   SomeIpProtocolGetStaticSize<TpPack,
                                // Byte-order of primitive datatype (/CppImplementationDataTypes/AsyALgtCtrlMod1VccIDT)
                                typename deserialization::Tp<TpPack>::ByteOrder

                               >(deserialization::SizeToken<::AsyALgtCtrlMod1VccIDT::AsyALgtCtrlMod1VccIDT>{})  + 
  
  // Accumulate the static size of struct member 'BrkPrecActv' of type /CppImplementationDataTypes/OnOff1VccIDT
   SomeIpProtocolGetStaticSize<TpPack,
                                // Byte-order of primitive datatype (/CppImplementationDataTypes/OnOff1VccIDT)
                                typename deserialization::Tp<TpPack>::ByteOrder

                               >(deserialization::SizeToken<::OnOff1VccIDT::OnOff1VccIDT>{})  + 
  
  // Accumulate the static size of struct member 'BrkSysCylPMstRec1Vcc' of type /CppImplementationDataTypes/BrkSysCylPMstRec1VccIDT
   SomeIpProtocolGetStaticSize<TpPack,
                                // Config of struct length field (/CppImplementationDataTypes/BrkSysCylPMstRec1VccIDT)
                                internal::LengthSize<deserialization::Tp<TpPack>::kSizeOfStructLengthField, typename deserialization::Tp<TpPack>::ByteOrder>

                               >(deserialization::SizeToken<::BrkSysCylPMstRec1VccIDT::BrkSysCylPMstRec1VccIDT>{})  + 
  
  // Accumulate the static size of struct member 'DrvrDecelReqFloat8' of type /CppImplementationDataTypes/float
   SomeIpProtocolGetStaticSize<TpPack,
                                // Byte-order of primitive datatype (/CppImplementationDataTypes/float)
                                typename deserialization::Tp<TpPack>::ByteOrder

                               >(deserialization::SizeToken<::float32IDT::float32IDT>{})  + 
  
  // Accumulate the static size of struct member 'EscCtrlIndcn' of type /CppImplementationDataTypes/DevSts1VccIDT
   SomeIpProtocolGetStaticSize<TpPack,
                                // Byte-order of primitive datatype (/CppImplementationDataTypes/DevSts1VccIDT)
                                typename deserialization::Tp<TpPack>::ByteOrder

                               >(deserialization::SizeToken<::DevSts1VccIDT::DevSts1VccIDT>{})  + 
  
  // Accumulate the static size of struct member 'EscSt' of type /CppImplementationDataTypes/EscSt1VccIDT
   SomeIpProtocolGetStaticSize<TpPack,
                                // Byte-order of primitive datatype (/CppImplementationDataTypes/EscSt1VccIDT)
                                typename deserialization::Tp<TpPack>::ByteOrder

                               >(deserialization::SizeToken<::EscSt1VccIDT::EscSt1VccIDT>{})  + 
  
  // Accumulate the static size of struct member 'VehSpdIndcdQly' of type /CppImplementationDataTypes/GenQf1VccIDT
   SomeIpProtocolGetStaticSize<TpPack,
                                // Byte-order of primitive datatype (/CppImplementationDataTypes/GenQf1VccIDT)
                                typename deserialization::Tp<TpPack>::ByteOrder

                               >(deserialization::SizeToken<::GenQf1VccIDT::GenQf1VccIDT>{})  + 
  
  // Accumulate the static size of struct member 'FricEstimnFromVehDyn1Vcc' of type /CppImplementationDataTypes/FricEstimnFromVehDyn1VccIDT
   SomeIpProtocolGetStaticSize<TpPack,
                                // Config of struct length field (/CppImplementationDataTypes/FricEstimnFromVehDyn1VccIDT)
                                internal::LengthSize<deserialization::Tp<TpPack>::kSizeOfStructLengthField, typename deserialization::Tp<TpPack>::ByteOrder>

                               >(deserialization::SizeToken<::FricEstimnFromVehDyn1VccIDT::FricEstimnFromVehDyn1VccIDT>{})  + 
  
  // Accumulate the static size of struct member 'DrvrPrsntSts0' of type /CppImplementationDataTypes/DrvrPrsntSts0IDT
   SomeIpProtocolGetStaticSize<TpPack,
                                // Config of struct length field (/CppImplementationDataTypes/DrvrPrsntSts0IDT)
                                internal::LengthSize<deserialization::Tp<TpPack>::kSizeOfStructLengthField, typename deserialization::Tp<TpPack>::ByteOrder>

                               >(deserialization::SizeToken<::DrvrPrsntSts0IDT::DrvrPrsntSts0IDT>{})  + 
  
  // Accumulate the static size of struct member 'DoorDrvrSts' of type /CppImplementationDataTypes/DoorSts2VccIDT
   SomeIpProtocolGetStaticSize<TpPack,
                                // Byte-order of primitive datatype (/CppImplementationDataTypes/DoorSts2VccIDT)
                                typename deserialization::Tp<TpPack>::ByteOrder

                               >(deserialization::SizeToken<::DoorSts2VccIDT::DoorSts2VccIDT>{})  + 
  
  // Accumulate the static size of struct member 'AsyLineLePah' of type /CppImplementationDataTypes/AsyLineLePahIDT
   SomeIpProtocolGetStaticSize<TpPack,
                                // Config of struct length field (/CppImplementationDataTypes/AsyLineLePahIDT)
                                internal::LengthSize<deserialization::Tp<TpPack>::kSizeOfStructLengthField, typename deserialization::Tp<TpPack>::ByteOrder>

                               >(deserialization::SizeToken<::AsyLineLePahIDT::AsyLineLePahIDT>{})  + 
  
  // Accumulate the static size of struct member 'AsyLineLePah2' of type /CppImplementationDataTypes/AsyLineLePah2IDT
   SomeIpProtocolGetStaticSize<TpPack,
                                // Config of struct length field (/CppImplementationDataTypes/AsyLineLePah2IDT)
                                internal::LengthSize<deserialization::Tp<TpPack>::kSizeOfStructLengthField, typename deserialization::Tp<TpPack>::ByteOrder>

                               >(deserialization::SizeToken<::AsyLineLePah2IDT::AsyLineLePah2IDT>{})  + 
  
  // Accumulate the static size of struct member 'AsyLeFirstStrt' of type /CppImplementationDataTypes/uint8_t
   SomeIpProtocolGetStaticSize<TpPack,
                                // Byte-order of primitive datatype (/CppImplementationDataTypes/uint8_t)
                                typename deserialization::Tp<TpPack>::ByteOrder

                               >(deserialization::SizeToken<::uint8IDT::uint8IDT>{})  + 
  
  // Accumulate the static size of struct member 'AsyLeFirstEnd' of type /CppImplementationDataTypes/uint8_t
   SomeIpProtocolGetStaticSize<TpPack,
                                // Byte-order of primitive datatype (/CppImplementationDataTypes/uint8_t)
                                typename deserialization::Tp<TpPack>::ByteOrder

                               >(deserialization::SizeToken<::uint8IDT::uint8IDT>{})  + 
  
  // Accumulate the static size of struct member 'AsyLeSecStrt' of type /CppImplementationDataTypes/uint8_t
   SomeIpProtocolGetStaticSize<TpPack,
                                // Byte-order of primitive datatype (/CppImplementationDataTypes/uint8_t)
                                typename deserialization::Tp<TpPack>::ByteOrder

                               >(deserialization::SizeToken<::uint8IDT::uint8IDT>{})  + 
  
  // Accumulate the static size of struct member 'AsyLeSecEnd' of type /CppImplementationDataTypes/uint8_t
   SomeIpProtocolGetStaticSize<TpPack,
                                // Byte-order of primitive datatype (/CppImplementationDataTypes/uint8_t)
                                typename deserialization::Tp<TpPack>::ByteOrder

                               >(deserialization::SizeToken<::uint8IDT::uint8IDT>{})  + 
  
  // Accumulate the static size of struct member 'AsyLineDstLe' of type /CppImplementationDataTypes/float
   SomeIpProtocolGetStaticSize<TpPack,
                                // Byte-order of primitive datatype (/CppImplementationDataTypes/float)
                                typename deserialization::Tp<TpPack>::ByteOrder

                               >(deserialization::SizeToken<::float32IDT::float32IDT>{})  + 
  
  // Accumulate the static size of struct member 'AsyLineLeColor' of type /CppImplementationDataTypes/AsyLineLeColor1VccIDT
   SomeIpProtocolGetStaticSize<TpPack,
                                // Byte-order of primitive datatype (/CppImplementationDataTypes/AsyLineLeColor1VccIDT)
                                typename deserialization::Tp<TpPack>::ByteOrder

                               >(deserialization::SizeToken<::AsyLineLeColor1VccIDT::AsyLineLeColor1VccIDT>{})  + 
  
  // Accumulate the static size of struct member 'AsyLineLeTyp' of type /CppImplementationDataTypes/AsyLineLeTyp1VccIDT
   SomeIpProtocolGetStaticSize<TpPack,
                                // Byte-order of primitive datatype (/CppImplementationDataTypes/AsyLineLeTyp1VccIDT)
                                typename deserialization::Tp<TpPack>::ByteOrder

                               >(deserialization::SizeToken<::AsyLineLeTyp1VccIDT::AsyLineLeTyp1VccIDT>{})  + 
  
  // Accumulate the static size of struct member 'AsyLineRiPah' of type /CppImplementationDataTypes/AsyLineRiPahIDT
   SomeIpProtocolGetStaticSize<TpPack,
                                // Config of struct length field (/CppImplementationDataTypes/AsyLineRiPahIDT)
                                internal::LengthSize<deserialization::Tp<TpPack>::kSizeOfStructLengthField, typename deserialization::Tp<TpPack>::ByteOrder>

                               >(deserialization::SizeToken<::AsyLineRiPahIDT::AsyLineRiPahIDT>{})  + 
  
  // Accumulate the static size of struct member 'AsyLineRiPah2' of type /CppImplementationDataTypes/AsyLineRiPah2IDT
   SomeIpProtocolGetStaticSize<TpPack,
                                // Config of struct length field (/CppImplementationDataTypes/AsyLineRiPah2IDT)
                                internal::LengthSize<deserialization::Tp<TpPack>::kSizeOfStructLengthField, typename deserialization::Tp<TpPack>::ByteOrder>

                               >(deserialization::SizeToken<::AsyLineRiPah2IDT::AsyLineRiPah2IDT>{})  + 
  
  // Accumulate the static size of struct member 'AsyRiFirstStrt' of type /CppImplementationDataTypes/uint8_t
   SomeIpProtocolGetStaticSize<TpPack,
                                // Byte-order of primitive datatype (/CppImplementationDataTypes/uint8_t)
                                typename deserialization::Tp<TpPack>::ByteOrder

                               >(deserialization::SizeToken<::uint8IDT::uint8IDT>{})  + 
  
  // Accumulate the static size of struct member 'AsyRiFirstEnd' of type /CppImplementationDataTypes/uint8_t
   SomeIpProtocolGetStaticSize<TpPack,
                                // Byte-order of primitive datatype (/CppImplementationDataTypes/uint8_t)
                                typename deserialization::Tp<TpPack>::ByteOrder

                               >(deserialization::SizeToken<::uint8IDT::uint8IDT>{})  + 
  
  // Accumulate the static size of struct member 'AsyRiSecStrt' of type /CppImplementationDataTypes/uint8_t
   SomeIpProtocolGetStaticSize<TpPack,
                                // Byte-order of primitive datatype (/CppImplementationDataTypes/uint8_t)
                                typename deserialization::Tp<TpPack>::ByteOrder

                               >(deserialization::SizeToken<::uint8IDT::uint8IDT>{})  + 
  
  // Accumulate the static size of struct member 'AsyRiSecEnd' of type /CppImplementationDataTypes/uint8_t
   SomeIpProtocolGetStaticSize<TpPack,
                                // Byte-order of primitive datatype (/CppImplementationDataTypes/uint8_t)
                                typename deserialization::Tp<TpPack>::ByteOrder

                               >(deserialization::SizeToken<::uint8IDT::uint8IDT>{})  + 
  
  // Accumulate the static size of struct member 'AsyLineDstRi' of type /CppImplementationDataTypes/float
   SomeIpProtocolGetStaticSize<TpPack,
                                // Byte-order of primitive datatype (/CppImplementationDataTypes/float)
                                typename deserialization::Tp<TpPack>::ByteOrder

                               >(deserialization::SizeToken<::float32IDT::float32IDT>{})  + 
  
  // Accumulate the static size of struct member 'AsyLineRiColor' of type /CppImplementationDataTypes/AsyLineLeColor1VccIDT
   SomeIpProtocolGetStaticSize<TpPack,
                                // Byte-order of primitive datatype (/CppImplementationDataTypes/AsyLineLeColor1VccIDT)
                                typename deserialization::Tp<TpPack>::ByteOrder

                               >(deserialization::SizeToken<::AsyLineLeColor1VccIDT::AsyLineLeColor1VccIDT>{})  + 
  
  // Accumulate the static size of struct member 'AsyLineRiTyp' of type /CppImplementationDataTypes/AsyLineLeTyp1VccIDT
   SomeIpProtocolGetStaticSize<TpPack,
                                // Byte-order of primitive datatype (/CppImplementationDataTypes/AsyLineLeTyp1VccIDT)
                                typename deserialization::Tp<TpPack>::ByteOrder

                               >(deserialization::SizeToken<::AsyLineLeTyp1VccIDT::AsyLineLeTyp1VccIDT>{})  + 
  
  // Accumulate the static size of struct member 'AsyLineLe2Pah' of type /CppImplementationDataTypes/AsyLineLe2PahIDT
   SomeIpProtocolGetStaticSize<TpPack,
                                // Config of struct length field (/CppImplementationDataTypes/AsyLineLe2PahIDT)
                                internal::LengthSize<deserialization::Tp<TpPack>::kSizeOfStructLengthField, typename deserialization::Tp<TpPack>::ByteOrder>

                               >(deserialization::SizeToken<::AsyLineLe2PahIDT::AsyLineLe2PahIDT>{})  + 
  
  // Accumulate the static size of struct member 'AsyLineLe2Pah2' of type /CppImplementationDataTypes/AsyLineLe2Pah2IDT
   SomeIpProtocolGetStaticSize<TpPack,
                                // Config of struct length field (/CppImplementationDataTypes/AsyLineLe2Pah2IDT)
                                internal::LengthSize<deserialization::Tp<TpPack>::kSizeOfStructLengthField, typename deserialization::Tp<TpPack>::ByteOrder>

                               >(deserialization::SizeToken<::AsyLineLe2Pah2IDT::AsyLineLe2Pah2IDT>{})  + 
  
  // Accumulate the static size of struct member 'AsyLe2FirstStrt' of type /CppImplementationDataTypes/uint8_t
   SomeIpProtocolGetStaticSize<TpPack,
                                // Byte-order of primitive datatype (/CppImplementationDataTypes/uint8_t)
                                typename deserialization::Tp<TpPack>::ByteOrder

                               >(deserialization::SizeToken<::uint8IDT::uint8IDT>{})  + 
  
  // Accumulate the static size of struct member 'AsyLe2FirstEnd' of type /CppImplementationDataTypes/uint8_t
   SomeIpProtocolGetStaticSize<TpPack,
                                // Byte-order of primitive datatype (/CppImplementationDataTypes/uint8_t)
                                typename deserialization::Tp<TpPack>::ByteOrder

                               >(deserialization::SizeToken<::uint8IDT::uint8IDT>{})  + 
  
  // Accumulate the static size of struct member 'AsyLe2SecStrt' of type /CppImplementationDataTypes/uint8_t
   SomeIpProtocolGetStaticSize<TpPack,
                                // Byte-order of primitive datatype (/CppImplementationDataTypes/uint8_t)
                                typename deserialization::Tp<TpPack>::ByteOrder

                               >(deserialization::SizeToken<::uint8IDT::uint8IDT>{})  + 
  
  // Accumulate the static size of struct member 'AsyLe2SecEnd' of type /CppImplementationDataTypes/uint8_t
   SomeIpProtocolGetStaticSize<TpPack,
                                // Byte-order of primitive datatype (/CppImplementationDataTypes/uint8_t)
                                typename deserialization::Tp<TpPack>::ByteOrder

                               >(deserialization::SizeToken<::uint8IDT::uint8IDT>{})  + 
  
  // Accumulate the static size of struct member 'AsyLineLe2Color' of type /CppImplementationDataTypes/AsyLineLeColor1VccIDT
   SomeIpProtocolGetStaticSize<TpPack,
                                // Byte-order of primitive datatype (/CppImplementationDataTypes/AsyLineLeColor1VccIDT)
                                typename deserialization::Tp<TpPack>::ByteOrder

                               >(deserialization::SizeToken<::AsyLineLeColor1VccIDT::AsyLineLeColor1VccIDT>{})  + 
  
  // Accumulate the static size of struct member 'AsyLineLe2Typ' of type /CppImplementationDataTypes/AsyLineLeTyp1VccIDT
   SomeIpProtocolGetStaticSize<TpPack,
                                // Byte-order of primitive datatype (/CppImplementationDataTypes/AsyLineLeTyp1VccIDT)
                                typename deserialization::Tp<TpPack>::ByteOrder

                               >(deserialization::SizeToken<::AsyLineLeTyp1VccIDT::AsyLineLeTyp1VccIDT>{})  + 
  
  // Accumulate the static size of struct member 'AsyLineRi2Pah' of type /CppImplementationDataTypes/AsyLineRi2PahIDT
   SomeIpProtocolGetStaticSize<TpPack,
                                // Config of struct length field (/CppImplementationDataTypes/AsyLineRi2PahIDT)
                                internal::LengthSize<deserialization::Tp<TpPack>::kSizeOfStructLengthField, typename deserialization::Tp<TpPack>::ByteOrder>

                               >(deserialization::SizeToken<::AsyLineRi2PahIDT::AsyLineRi2PahIDT>{})  + 
  
  // Accumulate the static size of struct member 'AsyLineRi2Pah2' of type /CppImplementationDataTypes/AsyLineRi2Pah2IDT
   SomeIpProtocolGetStaticSize<TpPack,
                                // Config of struct length field (/CppImplementationDataTypes/AsyLineRi2Pah2IDT)
                                internal::LengthSize<deserialization::Tp<TpPack>::kSizeOfStructLengthField, typename deserialization::Tp<TpPack>::ByteOrder>

                               >(deserialization::SizeToken<::AsyLineRi2Pah2IDT::AsyLineRi2Pah2IDT>{})  + 
  
  // Accumulate the static size of struct member 'AsyRi2FirstStrt' of type /CppImplementationDataTypes/uint8_t
   SomeIpProtocolGetStaticSize<TpPack,
                                // Byte-order of primitive datatype (/CppImplementationDataTypes/uint8_t)
                                typename deserialization::Tp<TpPack>::ByteOrder

                               >(deserialization::SizeToken<::uint8IDT::uint8IDT>{})  + 
  
  // Accumulate the static size of struct member 'AsyRi2FirstEnd' of type /CppImplementationDataTypes/uint8_t
   SomeIpProtocolGetStaticSize<TpPack,
                                // Byte-order of primitive datatype (/CppImplementationDataTypes/uint8_t)
                                typename deserialization::Tp<TpPack>::ByteOrder

                               >(deserialization::SizeToken<::uint8IDT::uint8IDT>{})  + 
  
  // Accumulate the static size of struct member 'AsyRi2SecStrt' of type /CppImplementationDataTypes/uint8_t
   SomeIpProtocolGetStaticSize<TpPack,
                                // Byte-order of primitive datatype (/CppImplementationDataTypes/uint8_t)
                                typename deserialization::Tp<TpPack>::ByteOrder

                               >(deserialization::SizeToken<::uint8IDT::uint8IDT>{})  + 
  
  // Accumulate the static size of struct member 'AsyRi2SecEnd' of type /CppImplementationDataTypes/uint8_t
   SomeIpProtocolGetStaticSize<TpPack,
                                // Byte-order of primitive datatype (/CppImplementationDataTypes/uint8_t)
                                typename deserialization::Tp<TpPack>::ByteOrder

                               >(deserialization::SizeToken<::uint8IDT::uint8IDT>{})  + 
  
  // Accumulate the static size of struct member 'AsyLineRi2Color' of type /CppImplementationDataTypes/AsyLineLeColor1VccIDT
   SomeIpProtocolGetStaticSize<TpPack,
                                // Byte-order of primitive datatype (/CppImplementationDataTypes/AsyLineLeColor1VccIDT)
                                typename deserialization::Tp<TpPack>::ByteOrder

                               >(deserialization::SizeToken<::AsyLineLeColor1VccIDT::AsyLineLeColor1VccIDT>{})  + 
  
  // Accumulate the static size of struct member 'AsyLineRi2Typ' of type /CppImplementationDataTypes/AsyLineLeTyp1VccIDT
   SomeIpProtocolGetStaticSize<TpPack,
                                // Byte-order of primitive datatype (/CppImplementationDataTypes/AsyLineLeTyp1VccIDT)
                                typename deserialization::Tp<TpPack>::ByteOrder

                               >(deserialization::SizeToken<::AsyLineLeTyp1VccIDT::AsyLineLeTyp1VccIDT>{})  + 
  
  // Accumulate the static size of struct member 'EyesOnRoad' of type /CppImplementationDataTypes/EyeOnRoadFromDHUIDT
   SomeIpProtocolGetStaticSize<TpPack,
                                // Byte-order of primitive datatype (/CppImplementationDataTypes/EyeOnRoadFromDHUIDT)
                                typename deserialization::Tp<TpPack>::ByteOrder

                               >(deserialization::SizeToken<::EyeOnRoadFromDHUIDT::EyeOnRoadFromDHUIDT>{})  + 
  
  // Accumulate the static size of struct member 'DrvrSteerWhlHldGroup0' of type /CppImplementationDataTypes/DrvrSteerWhlHldGroup0IDT
   SomeIpProtocolGetStaticSize<TpPack,
                                // Config of struct length field (/CppImplementationDataTypes/DrvrSteerWhlHldGroup0IDT)
                                internal::LengthSize<deserialization::Tp<TpPack>::kSizeOfStructLengthField, typename deserialization::Tp<TpPack>::ByteOrder>

                               >(deserialization::SizeToken<::DrvrSteerWhlHldGroup0IDT::DrvrSteerWhlHldGroup0IDT>{})  + 
  
  // Accumulate the static size of struct member 'RoadIncln1' of type /CppImplementationDataTypes/RoadIncln1IDT
   SomeIpProtocolGetStaticSize<TpPack,
                                // Config of struct length field (/CppImplementationDataTypes/RoadIncln1IDT)
                                internal::LengthSize<deserialization::Tp<TpPack>::kSizeOfStructLengthField, typename deserialization::Tp<TpPack>::ByteOrder>

                               >(deserialization::SizeToken<::RoadIncln1IDT::RoadIncln1IDT>{})  + 
  
  // Accumulate the static size of struct member 'SftySigGroupFromHmiSafe1' of type /CppImplementationDataTypes/SftySigGroupFromHmiSafe1IDT
   SomeIpProtocolGetStaticSize<TpPack,
                                // Config of struct length field (/CppImplementationDataTypes/SftySigGroupFromHmiSafe1IDT)
                                internal::LengthSize<deserialization::Tp<TpPack>::kSizeOfStructLengthField, typename deserialization::Tp<TpPack>::ByteOrder>

                               >(deserialization::SizeToken<::SftySigGroupFromHmiSafe1IDT::SftySigGroupFromHmiSafe1IDT>{})  + 
  
  // Accumulate the static size of struct member 'SteerServoSts' of type /CppImplementationDataTypes/SteerServoStsIDT
   SomeIpProtocolGetStaticSize<TpPack,
                                // Byte-order of primitive datatype (/CppImplementationDataTypes/SteerServoStsIDT)
                                typename deserialization::Tp<TpPack>::ByteOrder

                               >(deserialization::SizeToken<::SteerServoStsIDT::SteerServoStsIDT>{})  + 
  
  // Accumulate the static size of struct member 'AsyObjForBigData0' of type /CppImplementationDataTypes/AsyObjForBigData0IDT
   SomeIpProtocolGetStaticSize<TpPack,
                                // Config of struct length field (/CppImplementationDataTypes/AsyObjForBigData0IDT)
                                internal::LengthSize<deserialization::Tp<TpPack>::kSizeOfStructLengthField, typename deserialization::Tp<TpPack>::ByteOrder>

                               >(deserialization::SizeToken<::AsyObjForBigData0IDT::AsyObjForBigData0IDT>{})  + 
  
  // Accumulate the static size of struct member 'AsyObjForBigData1' of type /CppImplementationDataTypes/AsyObjForBigData1IDT
   SomeIpProtocolGetStaticSize<TpPack,
                                // Config of struct length field (/CppImplementationDataTypes/AsyObjForBigData1IDT)
                                internal::LengthSize<deserialization::Tp<TpPack>::kSizeOfStructLengthField, typename deserialization::Tp<TpPack>::ByteOrder>

                               >(deserialization::SizeToken<::AsyObjForBigData1IDT::AsyObjForBigData1IDT>{})  + 
  
  // Accumulate the static size of struct member 'AsyObjForBigData2' of type /CppImplementationDataTypes/AsyObjForBigData2IDT
   SomeIpProtocolGetStaticSize<TpPack,
                                // Config of struct length field (/CppImplementationDataTypes/AsyObjForBigData2IDT)
                                internal::LengthSize<deserialization::Tp<TpPack>::kSizeOfStructLengthField, typename deserialization::Tp<TpPack>::ByteOrder>

                               >(deserialization::SizeToken<::AsyObjForBigData2IDT::AsyObjForBigData2IDT>{})  + 
  
  // Accumulate the static size of struct member 'ObjFrnt1Vcc' of type /CppImplementationDataTypes/ObjFrnt1VccIDT
   SomeIpProtocolGetStaticSize<TpPack,
                                // Config of struct length field (/CppImplementationDataTypes/ObjFrnt1VccIDT)
                                internal::LengthSize<deserialization::Tp<TpPack>::kSizeOfStructLengthField, typename deserialization::Tp<TpPack>::ByteOrder>

                               >(deserialization::SizeToken<::ObjFrnt1VccIDT::ObjFrnt1VccIDT>{})  + 
  
  // Accumulate the static size of struct member 'ReSideRdrLeObj1' of type /CppImplementationDataTypes/ReSideRdrLeObj1IDT
   SomeIpProtocolGetStaticSize<TpPack,
                                // Config of struct length field (/CppImplementationDataTypes/ReSideRdrLeObj1IDT)
                                internal::LengthSize<deserialization::Tp<TpPack>::kSizeOfStructLengthField, typename deserialization::Tp<TpPack>::ByteOrder>

                               >(deserialization::SizeToken<::ReSideRdrLeObj1IDT::ReSideRdrLeObj1IDT>{})  + 
  
  // Accumulate the static size of struct member 'ReSideRdrRiObj1' of type /CppImplementationDataTypes/ReSideRdrRiObj1IDT
   SomeIpProtocolGetStaticSize<TpPack,
                                // Config of struct length field (/CppImplementationDataTypes/ReSideRdrRiObj1IDT)
                                internal::LengthSize<deserialization::Tp<TpPack>::kSizeOfStructLengthField, typename deserialization::Tp<TpPack>::ByteOrder>

                               >(deserialization::SizeToken<::ReSideRdrRiObj1IDT::ReSideRdrRiObj1IDT>{})  + 
  
  // Accumulate the static size of struct member 'BiasedPosnFromSatlt1FG' of type /CppImplementationDataTypes/BiasedPosnFromSatlt1FGIDT
   SomeIpProtocolGetStaticSize<TpPack,
                                // Config of struct length field (/CppImplementationDataTypes/BiasedPosnFromSatlt1FGIDT)
                                internal::LengthSize<deserialization::Tp<TpPack>::kSizeOfStructLengthField, typename deserialization::Tp<TpPack>::ByteOrder>

                               >(deserialization::SizeToken<::BiasedPosnFromSatlt1FGIDT::BiasedPosnFromSatlt1FGIDT>{})  + 
  
  // Accumulate the static size of struct member 'BkpOfDstTrvld' of type /CppImplementationDataTypes/uint32_t
   SomeIpProtocolGetStaticSize<TpPack,
                                // Byte-order of primitive datatype (/CppImplementationDataTypes/uint32_t)
                                typename deserialization::Tp<TpPack>::ByteOrder

                               >(deserialization::SizeToken<::uint32IDT::uint32IDT>{})  + 
  
  // Accumulate the static size of struct member 'PosnFromSatlt1Vcc' of type /CppImplementationDataTypes/PosnFromSatlt1VccIDT
   SomeIpProtocolGetStaticSize<TpPack,
                                // Config of struct length field (/CppImplementationDataTypes/PosnFromSatlt1VccIDT)
                                internal::LengthSize<deserialization::Tp<TpPack>::kSizeOfStructLengthField, typename deserialization::Tp<TpPack>::ByteOrder>

                               >(deserialization::SizeToken<::PosnFromSatlt1VccIDT::PosnFromSatlt1VccIDT>{})  + 
  
  // Accumulate the static size of struct member 'LppLeadPnt' of type /CppImplementationDataTypes/LppLeadPntEDRIDT
   SomeIpProtocolGetStaticSize<TpPack,
                                // Config of struct length field (/CppImplementationDataTypes/LppLeadPntEDRIDT)
                                internal::LengthSize<deserialization::Tp<TpPack>::kSizeOfStructLengthField, typename deserialization::Tp<TpPack>::ByteOrder>

                               >(deserialization::SizeToken<::LppLeadPntEDRIDT::LppLeadPntEDRIDT>{})  + 
  
  // Accumulate the static size of struct member 'AsyLanChgColorDsp' of type /CppImplementationDataTypes/AsyLanChgColorDspIDT
   SomeIpProtocolGetStaticSize<TpPack,
                                // Byte-order of primitive datatype (/CppImplementationDataTypes/AsyLanChgColorDspIDT)
                                typename deserialization::Tp<TpPack>::ByteOrder

                               >(deserialization::SizeToken<::AsyLanChgColorDspIDT::AsyLanChgColorDspIDT>{})  + 
  
  // Accumulate the static size of struct member 'LppPathSelect' of type /CppImplementationDataTypes/LppPathSelectEDRIDT
   SomeIpProtocolGetStaticSize<TpPack,
                                // Config of struct length field (/CppImplementationDataTypes/LppPathSelectEDRIDT)
                                internal::LengthSize<deserialization::Tp<TpPack>::kSizeOfStructLengthField, typename deserialization::Tp<TpPack>::ByteOrder>

                               >(deserialization::SizeToken<::LppPathSelectEDRIDT::LppPathSelectEDRIDT>{})  + 
  
  // Accumulate the static size of struct member 'HmiStaticObj' of type /CppImplementationDataTypes/AsyObjType1VccIDT
   SomeIpProtocolGetStaticSize<TpPack,
                                // Byte-order of primitive datatype (/CppImplementationDataTypes/AsyObjType1VccIDT)
                                typename deserialization::Tp<TpPack>::ByteOrder

                               >(deserialization::SizeToken<::AsyObjType1VccIDT::AsyObjType1VccIDT>{})  + 
  
  // Accumulate the static size of struct member 'HmiMovgObj' of type /CppImplementationDataTypes/AsyObjType1VccIDT
   SomeIpProtocolGetStaticSize<TpPack,
                                // Byte-order of primitive datatype (/CppImplementationDataTypes/AsyObjType1VccIDT)
                                typename deserialization::Tp<TpPack>::ByteOrder

                               >(deserialization::SizeToken<::AsyObjType1VccIDT::AsyObjType1VccIDT>{})  + 
  
  // Accumulate the static size of struct member 'HmiObjID0' of type /CppImplementationDataTypes/uint8_t
   SomeIpProtocolGetStaticSize<TpPack,
                                // Byte-order of primitive datatype (/CppImplementationDataTypes/uint8_t)
                                typename deserialization::Tp<TpPack>::ByteOrder

                               >(deserialization::SizeToken<::uint8IDT::uint8IDT>{})  + 
  
  // Accumulate the static size of struct member 'HmiObjID1' of type /CppImplementationDataTypes/uint8_t
   SomeIpProtocolGetStaticSize<TpPack,
                                // Byte-order of primitive datatype (/CppImplementationDataTypes/uint8_t)
                                typename deserialization::Tp<TpPack>::ByteOrder

                               >(deserialization::SizeToken<::uint8IDT::uint8IDT>{})  + 
  
  // Accumulate the static size of struct member 'ColorOfHmiMovgObj' of type /CppImplementationDataTypes/AsyObjColor1VccIDT
   SomeIpProtocolGetStaticSize<TpPack,
                                // Byte-order of primitive datatype (/CppImplementationDataTypes/AsyObjColor1VccIDT)
                                typename deserialization::Tp<TpPack>::ByteOrder

                               >(deserialization::SizeToken<::AsyObjColor1VccIDT::AsyObjColor1VccIDT>{})  + 
  
  // Accumulate the static size of struct member 'HdDirOfMovgObj' of type /CppImplementationDataTypes/AsyObjstat1VccIDT
   SomeIpProtocolGetStaticSize<TpPack,
                                // Byte-order of primitive datatype (/CppImplementationDataTypes/AsyObjstat1VccIDT)
                                typename deserialization::Tp<TpPack>::ByteOrder

                               >(deserialization::SizeToken<::AsyObjstat1VccIDT::AsyObjstat1VccIDT>{})  + 
  
  // Accumulate the static size of struct member 'HmiMoving' of type /CppImplementationDataTypes/NoYes1VccIDT
   SomeIpProtocolGetStaticSize<TpPack,
                                // Byte-order of primitive datatype (/CppImplementationDataTypes/NoYes1VccIDT)
                                typename deserialization::Tp<TpPack>::ByteOrder

                               >(deserialization::SizeToken<::NoYes1VccIDT::NoYes1VccIDT>{})  + 
  
  // Accumulate the static size of struct member 'Objectposnlat' of type /CppImplementationDataTypes/uint16_t
   SomeIpProtocolGetStaticSize<TpPack,
                                // Byte-order of primitive datatype (/CppImplementationDataTypes/uint16_t)
                                typename deserialization::Tp<TpPack>::ByteOrder

                               >(deserialization::SizeToken<::uint16IDT::uint16IDT>{})  + 
  
  // Accumulate the static size of struct member 'Objectposnlgt' of type /CppImplementationDataTypes/uint16_t
   SomeIpProtocolGetStaticSize<TpPack,
                                // Byte-order of primitive datatype (/CppImplementationDataTypes/uint16_t)
                                typename deserialization::Tp<TpPack>::ByteOrder

                               >(deserialization::SizeToken<::uint16IDT::uint16IDT>{})  + 
  
  // Accumulate the static size of struct member 'AsyLineLe2RampPosn' of type /CppImplementationDataTypes/uint8_t
   SomeIpProtocolGetStaticSize<TpPack,
                                // Byte-order of primitive datatype (/CppImplementationDataTypes/uint8_t)
                                typename deserialization::Tp<TpPack>::ByteOrder

                               >(deserialization::SizeToken<::uint8IDT::uint8IDT>{})  + 
  
  // Accumulate the static size of struct member 'AsyLineLe2RampTyp' of type /CppImplementationDataTypes/RampType1VccIDT
   SomeIpProtocolGetStaticSize<TpPack,
                                // Byte-order of primitive datatype (/CppImplementationDataTypes/RampType1VccIDT)
                                typename deserialization::Tp<TpPack>::ByteOrder

                               >(deserialization::SizeToken<::RampType1VccIDT::RampType1VccIDT>{})  + 
  
  // Accumulate the static size of struct member 'AsyLineRi2RampPosn' of type /CppImplementationDataTypes/uint8_t
   SomeIpProtocolGetStaticSize<TpPack,
                                // Byte-order of primitive datatype (/CppImplementationDataTypes/uint8_t)
                                typename deserialization::Tp<TpPack>::ByteOrder

                               >(deserialization::SizeToken<::uint8IDT::uint8IDT>{})  + 
  
  // Accumulate the static size of struct member 'AsyLineRi2RampTyp' of type /CppImplementationDataTypes/RampType1VccIDT
   SomeIpProtocolGetStaticSize<TpPack,
                                // Byte-order of primitive datatype (/CppImplementationDataTypes/RampType1VccIDT)
                                typename deserialization::Tp<TpPack>::ByteOrder

                               >(deserialization::SizeToken<::RampType1VccIDT::RampType1VccIDT>{})  + 
  
  // Accumulate the static size of struct member 'CrashStsSafe' of type /CppImplementationDataTypes/CrashSts2VccIDT
   SomeIpProtocolGetStaticSize<TpPack,
                                // Byte-order of primitive datatype (/CppImplementationDataTypes/CrashSts2VccIDT)
                                typename deserialization::Tp<TpPack>::ByteOrder

                               >(deserialization::SizeToken<::CrashSts2VccIDT::CrashSts2VccIDT>{})  + 
  
  // Accumulate the static size of struct member 'CircularCamsts' of type /CppImplementationDataTypes/RsdsMstSt1VccIDT
   SomeIpProtocolGetStaticSize<TpPack,
                                // Byte-order of primitive datatype (/CppImplementationDataTypes/RsdsMstSt1VccIDT)
                                typename deserialization::Tp<TpPack>::ByteOrder

                               >(deserialization::SizeToken<::RsdsMstSt1VccIDT::RsdsMstSt1VccIDT>{})  + 
  
  // Accumulate the static size of struct member 'SteerExtFctStsRec1Vcc' of type /CppImplementationDataTypes/SteerExtFctStsRec1VccIDT
   SomeIpProtocolGetStaticSize<TpPack,
                                // Config of struct length field (/CppImplementationDataTypes/SteerExtFctStsRec1VccIDT)
                                internal::LengthSize<deserialization::Tp<TpPack>::kSizeOfStructLengthField, typename deserialization::Tp<TpPack>::ByteOrder>

                               >(deserialization::SizeToken<::SteerExtFctStsRec1VccIDT::SteerExtFctStsRec1VccIDT>{})  + 
  
  // Accumulate the static size of struct member 'AsyALgtReqRngForCmft1Vcc' of type /CppImplementationDataTypes/AsyALgtReqRngForCmft1VccIDT
   SomeIpProtocolGetStaticSize<TpPack,
                                // Config of struct length field (/CppImplementationDataTypes/AsyALgtReqRngForCmft1VccIDT)
                                internal::LengthSize<deserialization::Tp<TpPack>::kSizeOfStructLengthField, typename deserialization::Tp<TpPack>::ByteOrder>

                               >(deserialization::SizeToken<::AsyALgtReqRngForCmft1VccIDT::AsyALgtReqRngForCmft1VccIDT>{}) 
  };
  return static_size;
}

}  // namespace EDRDataGroupIDT

#endif  // EDREXE_INCLUDE_AMSR_SOMEIP_PROTOCOL_INTERNAL_DATATYPE_DESERIALIZATION_EDRDATAGROUPIDT_DESERIALIZER_EDRDATAGROUPIDT_H_

