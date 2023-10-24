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
/**        \file  ObjectFusionModelExe/include/amsr/someip_protocol/internal/datatype_deserialization/ToSOCA_FunctionInfo1VCCIDT/deserializer_ToSOCA_FunctionInfo1VCCIDT.h
 *        \brief  SOME/IP protocol deserializer implementation for datatype 'ToSOCA_FunctionInfo1VCCIDT'
 *
 *      \details  /CppImplementationDataTypes/ToSOCA_FunctionInfo1VCCIDT
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 *  GENERATOR INFORMATION
 *  -------------------------------------------------------------------------------------------------------------------
 *    Generator Name: amsr_someipprotocol
 *         Commit ID: 1b535f531ca8eaaa17edbe97d022bbf394412553
 *********************************************************************************************************************/

#ifndef OBJECTFUSIONMODELEXE_INCLUDE_AMSR_SOMEIP_PROTOCOL_INTERNAL_DATATYPE_DESERIALIZATION_TOSOCA_FUNCTIONINFO1VCCIDT_DESERIALIZER_TOSOCA_FUNCTIONINFO1VCCIDT_H_
#define OBJECTFUSIONMODELEXE_INCLUDE_AMSR_SOMEIP_PROTOCOL_INTERNAL_DATATYPE_DESERIALIZATION_TOSOCA_FUNCTIONINFO1VCCIDT_DESERIALIZER_TOSOCA_FUNCTIONINFO1VCCIDT_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include "ToSOCA_FunctionInfo1VCCIDT/impl_type_tosoca_functioninfo1vccidt.h"
#include "amsr/someip_protocol/internal/datatype_deserialization/AccTarSeln1RecIDT/deserializer_AccTarSeln1RecIDT.h"
#include "amsr/someip_protocol/internal/datatype_deserialization/CamSts1IDT/deserializer_CamSts1IDT.h"
#include "amsr/someip_protocol/internal/datatype_deserialization/LppLaneChgStsIDT/deserializer_LppLaneChgStsIDT.h"
#include "amsr/someip_protocol/internal/datatype_deserialization/TjaTrailBusIDT/deserializer_TjaTrailBusIDT.h"
#include "someip-protocol/internal/deserialization/deser_wrapper.h"

namespace ToSOCA_FunctionInfo1VCCIDT {

// VECTOR NC Metric-HIS.PATH: MD_SOMEIPPROTOCOL_Metric-HIS.PATH
/*!
 * \brief Deserializer for datatype /CppImplementationDataTypes/ToSOCA_FunctionInfo1VCCIDT.
 * \details Data type class: DataTypeStruct (CppImplDataTypeStruct).
 *          is TLV struct: false
 *
 * \tparam TpPack Transformation properties to be used for deserialization.
 *
 * \param[in,out] reader Reference to byte stream reader.
 * \param[out]    data Reference to the data object of type /CppImplementationDataTypes/ToSOCA_FunctionInfo1VCCIDT
 *                in which the deserialized value will be written.
 * \return        True if the deserialization is successful, false otherwise.
 * \pre           The static size provided by SomeIpProtocolGetStaticSize has been verified.
 * \context       Reactor|App
 * \threadsafe    FALSE
 * \reentrant     TRUE for different reader objects.
 * \synchronous   TRUE
 */
template <typename TpPack>
amsr::someip_protocol::internal::deserialization::Result SomeIpProtocolDeserialize(amsr::someip_protocol::internal::deserialization::Reader& reader, ::ToSOCA_FunctionInfo1VCCIDT::ToSOCA_FunctionInfo1VCCIDT &data) noexcept {
  // Namespace alias for static deserialization code
  namespace internal = amsr::someip_protocol::internal;
  namespace deserialization = internal::deserialization;
  // Deserialize non-TLV struct
  deserialization::Result result{false};
  // Deserialize struct member 'CamSts1' of type /CppImplementationDataTypes/CamSts1IDT
  result = deserialization::SomeIpProtocolDeserialize<
          TpPack,
          // Config of struct length field (/CppImplementationDataTypes/CamSts1IDT)
        internal::LengthSize<deserialization::Tp<TpPack>::kSizeOfStructLengthField, typename deserialization::Tp<TpPack>::ByteOrder>

          >(reader, data.CamSts1);


  // Deserialize struct member 'LppLaneChgSts' of type /CppImplementationDataTypes/LppLaneChgStsIDT
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Config of struct length field (/CppImplementationDataTypes/LppLaneChgStsIDT)
        internal::LengthSize<deserialization::Tp<TpPack>::kSizeOfStructLengthField, typename deserialization::Tp<TpPack>::ByteOrder>

        >(reader, data.LppLaneChgSts);
  }

  // Deserialize struct member 'TrfcLiAttentionEna' of type /CppImplementationDataTypes/OnOff1VccIDT
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Byte-order of primitive datatype (/CppImplementationDataTypes/OnOff1VccIDT)
        typename deserialization::Tp<TpPack>::ByteOrder

        >(reader, data.TrfcLiAttentionEna);
  }

  // Deserialize struct member 'TrfcSignInfoEna' of type /CppImplementationDataTypes/OnOff1VccIDT
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Byte-order of primitive datatype (/CppImplementationDataTypes/OnOff1VccIDT)
        typename deserialization::Tp<TpPack>::ByteOrder

        >(reader, data.TrfcSignInfoEna);
  }

  // Deserialize struct member 'VehInLaneChg' of type /CppImplementationDataTypes/Bool1VccIDT
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Byte-order of primitive datatype (/CppImplementationDataTypes/Bool1VccIDT)
        typename deserialization::Tp<TpPack>::ByteOrder

        >(reader, data.VehInLaneChg);
  }

  // Deserialize struct member 'DynCalPrmForAxleDstReToVehFrnt' of type /CppImplementationDataTypes/float
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Byte-order of primitive datatype (/CppImplementationDataTypes/float)
        typename deserialization::Tp<TpPack>::ByteOrder

        >(reader, data.DynCalPrmForAxleDstReToVehFrnt);
  }

  // Deserialize struct member 'DynCalPrmForCamLatDistToVehFrnt' of type /CppImplementationDataTypes/float
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Byte-order of primitive datatype (/CppImplementationDataTypes/float)
        typename deserialization::Tp<TpPack>::ByteOrder

        >(reader, data.DynCalPrmForCamLatDistToVehFrnt);
  }

  // Deserialize struct member 'DynCalPrmForCamLongDistToVehFrnt' of type /CppImplementationDataTypes/float
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Byte-order of primitive datatype (/CppImplementationDataTypes/float)
        typename deserialization::Tp<TpPack>::ByteOrder

        >(reader, data.DynCalPrmForCamLongDistToVehFrnt);
  }

  // Deserialize struct member 'DynCalPrmForVehTyp' of type /CppImplementationDataTypes/uint8_t
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Byte-order of primitive datatype (/CppImplementationDataTypes/uint8_t)
        typename deserialization::Tp<TpPack>::ByteOrder

        >(reader, data.DynCalPrmForVehTyp);
  }

  // Deserialize struct member 'HWASts' of type /CppImplementationDataTypes/TjaStsIDT
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Byte-order of primitive datatype (/CppImplementationDataTypes/TjaStsIDT)
        typename deserialization::Tp<TpPack>::ByteOrder

        >(reader, data.HWASts);
  }

  // Deserialize struct member 'NgpSts1' of type /CppImplementationDataTypes/NgpSts1IDT
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Byte-order of primitive datatype (/CppImplementationDataTypes/NgpSts1IDT)
        typename deserialization::Tp<TpPack>::ByteOrder

        >(reader, data.NgpSts1);
  }

  // Deserialize struct member 'TlaFaultSts' of type /CppImplementationDataTypes/OnOff1VccIDT
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Byte-order of primitive datatype (/CppImplementationDataTypes/OnOff1VccIDT)
        typename deserialization::Tp<TpPack>::ByteOrder

        >(reader, data.TlaFaultSts);
  }

  // Deserialize struct member 'TsiFaultSts' of type /CppImplementationDataTypes/OnOff1VccIDT
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Byte-order of primitive datatype (/CppImplementationDataTypes/OnOff1VccIDT)
        typename deserialization::Tp<TpPack>::ByteOrder

        >(reader, data.TsiFaultSts);
  }

  // Deserialize struct member 'AsyALgtIndcr' of type /CppImplementationDataTypes/AsyIndcrDispSts1VccIDT
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Byte-order of primitive datatype (/CppImplementationDataTypes/AsyIndcrDispSts1VccIDT)
        typename deserialization::Tp<TpPack>::ByteOrder

        >(reader, data.AsyALgtIndcr);
  }

  // Deserialize struct member 'Vinmatch' of type /CppImplementationDataTypes/YesNo2VccIDT
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Byte-order of primitive datatype (/CppImplementationDataTypes/YesNo2VccIDT)
        typename deserialization::Tp<TpPack>::ByteOrder

        >(reader, data.Vinmatch);
  }

  // Deserialize struct member ' ACCSts' of type /CppImplementationDataTypes/AccSts1IDT
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Byte-order of primitive datatype (/CppImplementationDataTypes/AccSts1IDT)
        typename deserialization::Tp<TpPack>::ByteOrder

        >(reader, data. ACCSts);
  }

  // Deserialize struct member 'TjaPath' of type /CppImplementationDataTypes/TjaTrailBusIDT
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Config of struct length field (/CppImplementationDataTypes/TjaTrailBusIDT)
        internal::LengthSize<deserialization::Tp<TpPack>::kSizeOfStructLengthField, typename deserialization::Tp<TpPack>::ByteOrder>

        >(reader, data.TjaPath);
  }

  // Deserialize struct member 'ACCStopRequest' of type /CppImplementationDataTypes/VehStopReq1VccIDT
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Byte-order of primitive datatype (/CppImplementationDataTypes/VehStopReq1VccIDT)
        typename deserialization::Tp<TpPack>::ByteOrder

        >(reader, data.ACCStopRequest);
  }

  // Deserialize struct member 'AccTarSeln' of type /CppImplementationDataTypes/AccTarSeln1RecIDT
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Config of struct length field (/CppImplementationDataTypes/AccTarSeln1RecIDT)
        internal::LengthSize<deserialization::Tp<TpPack>::kSizeOfStructLengthField, typename deserialization::Tp<TpPack>::ByteOrder>

        >(reader, data.AccTarSeln);
  }

  // Deserialize struct member 'DynCalPrmForBicycleMdlAxleDistFrnt' of type /CppImplementationDataTypes/float
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Byte-order of primitive datatype (/CppImplementationDataTypes/float)
        typename deserialization::Tp<TpPack>::ByteOrder

        >(reader, data.DynCalPrmForBicycleMdlAxleDistFrnt);
  }

  // Deserialize struct member 'DynCalPrmForVehM' of type /CppImplementationDataTypes/float
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Byte-order of primitive datatype (/CppImplementationDataTypes/float)
        typename deserialization::Tp<TpPack>::ByteOrder

        >(reader, data.DynCalPrmForVehM);
  }

  // Deserialize struct member 'DynCalPrmForVehWhlBas' of type /CppImplementationDataTypes/float
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Byte-order of primitive datatype (/CppImplementationDataTypes/float)
        typename deserialization::Tp<TpPack>::ByteOrder

        >(reader, data.DynCalPrmForVehWhlBas);
  }

  // Deserialize struct member 'DynCalPrmForVehWidth' of type /CppImplementationDataTypes/float
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Byte-order of primitive datatype (/CppImplementationDataTypes/float)
        typename deserialization::Tp<TpPack>::ByteOrder

        >(reader, data.DynCalPrmForVehWidth);
  }

  // Deserialize struct member 'DynCalPrmForVehLen' of type /CppImplementationDataTypes/float
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Byte-order of primitive datatype (/CppImplementationDataTypes/float)
        typename deserialization::Tp<TpPack>::ByteOrder

        >(reader, data.DynCalPrmForVehLen);
  }

  // Deserialize struct member 'LanguageRegion' of type /CppImplementationDataTypes/LanguageRegion1VccIDT
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Byte-order of primitive datatype (/CppImplementationDataTypes/LanguageRegion1VccIDT)
        typename deserialization::Tp<TpPack>::ByteOrder

        >(reader, data.LanguageRegion);
  }

  // Deserialize struct member 'SetSpdForCrsCtrlFct' of type /CppImplementationDataTypes/float
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Byte-order of primitive datatype (/CppImplementationDataTypes/float)
        typename deserialization::Tp<TpPack>::ByteOrder

        >(reader, data.SetSpdForCrsCtrlFct);
  }

  // Deserialize struct member 'HWAMode' of type /CppImplementationDataTypes/HWAMode1VccIDT
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Byte-order of primitive datatype (/CppImplementationDataTypes/HWAMode1VccIDT)
        typename deserialization::Tp<TpPack>::ByteOrder

        >(reader, data.HWAMode);
  }

  // Deserialize struct member 'AsyAutDrvCtrlTyp' of type /CppImplementationDataTypes/AsyAutDrvCtrlTyp1VccIDT
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Byte-order of primitive datatype (/CppImplementationDataTypes/AsyAutDrvCtrlTyp1VccIDT)
        typename deserialization::Tp<TpPack>::ByteOrder

        >(reader, data.AsyAutDrvCtrlTyp);
  }

  // Deserialize struct member 'AsyAutDrvgAvl' of type /CppImplementationDataTypes/AsyAutDrvgAvl1VccIDT
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Byte-order of primitive datatype (/CppImplementationDataTypes/AsyAutDrvgAvl1VccIDT)
        typename deserialization::Tp<TpPack>::ByteOrder

        >(reader, data.AsyAutDrvgAvl);
  }

  // Deserialize struct member 'AsyEmgyManoeuvreAidSts' of type /CppImplementationDataTypes/FctaOn1VccIDT
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Byte-order of primitive datatype (/CppImplementationDataTypes/FctaOn1VccIDT)
        typename deserialization::Tp<TpPack>::ByteOrder

        >(reader, data.AsyEmgyManoeuvreAidSts);
  }

  // Deserialize struct member 'AsyLaneKeepAidSts' of type /CppImplementationDataTypes/AsyALatSts1VccIDT
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Byte-order of primitive datatype (/CppImplementationDataTypes/AsyALatSts1VccIDT)
        typename deserialization::Tp<TpPack>::ByteOrder

        >(reader, data.AsyLaneKeepAidSts);
  }

  // Deserialize struct member 'AsyLgtCtrlTakeOverReq' of type /CppImplementationDataTypes/NoYes1VccIDT
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Byte-order of primitive datatype (/CppImplementationDataTypes/NoYes1VccIDT)
        typename deserialization::Tp<TpPack>::ByteOrder

        >(reader, data.AsyLgtCtrlTakeOverReq);
  }

  // Deserialize struct member 'AsyStandStillReqForCmft' of type /CppImplementationDataTypes/VehStopReq1VccIDT
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Byte-order of primitive datatype (/CppImplementationDataTypes/VehStopReq1VccIDT)
        typename deserialization::Tp<TpPack>::ByteOrder

        >(reader, data.AsyStandStillReqForCmft);
  }

  // Deserialize struct member 'AsySteerApplyRqrd' of type /CppImplementationDataTypes/LvlWarn1VccIDT
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Byte-order of primitive datatype (/CppImplementationDataTypes/LvlWarn1VccIDT)
        typename deserialization::Tp<TpPack>::ByteOrder

        >(reader, data.AsySteerApplyRqrd);
  }

  // Deserialize struct member 'AvlStsForLongAutDrv' of type /CppImplementationDataTypes/AvlStsForLongAutDrv4VccIDT
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Byte-order of primitive datatype (/CppImplementationDataTypes/AvlStsForLongAutDrv4VccIDT)
        typename deserialization::Tp<TpPack>::ByteOrder

        >(reader, data.AvlStsForLongAutDrv);
  }

  // Deserialize struct member 'CllsnFwdWarn' of type /CppImplementationDataTypes/CllsnFwdWarnReq1VccIDT
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Byte-order of primitive datatype (/CppImplementationDataTypes/CllsnFwdWarnReq1VccIDT)
        typename deserialization::Tp<TpPack>::ByteOrder

        >(reader, data.CllsnFwdWarn);
  }

  // Deserialize struct member 'IntvAndWarnModInfoSts' of type /CppImplementationDataTypes/IntvAndWarnModForLaneKeepAidSts1VccIDT
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Byte-order of primitive datatype (/CppImplementationDataTypes/IntvAndWarnModForLaneKeepAidSts1VccIDT)
        typename deserialization::Tp<TpPack>::ByteOrder

        >(reader, data.IntvAndWarnModInfoSts);
  }

  // Deserialize struct member 'LaneChgAutActvSts' of type /CppImplementationDataTypes/OnOff1VccIDT
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Byte-order of primitive datatype (/CppImplementationDataTypes/OnOff1VccIDT)
        typename deserialization::Tp<TpPack>::ByteOrder

        >(reader, data.LaneChgAutActvSts);
  }

  // Deserialize struct member 'LaneKeepAidInfoSts' of type /CppImplementationDataTypes/OnOff1VccIDT
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Byte-order of primitive datatype (/CppImplementationDataTypes/OnOff1VccIDT)
        typename deserialization::Tp<TpPack>::ByteOrder

        >(reader, data.LaneKeepAidInfoSts);
  }

  // Deserialize struct member 'TiGapSetForLgtCtrl' of type /CppImplementationDataTypes/TiGapSetForLgtCtrl1VccIDT
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Byte-order of primitive datatype (/CppImplementationDataTypes/TiGapSetForLgtCtrl1VccIDT)
        typename deserialization::Tp<TpPack>::ByteOrder

        >(reader, data.TiGapSetForLgtCtrl);
  }

  // Deserialize struct member 'AsySodPilotCfirm' of type /CppImplementationDataTypes/ActvnAvl2VccIDT
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Byte-order of primitive datatype (/CppImplementationDataTypes/ActvnAvl2VccIDT)
        typename deserialization::Tp<TpPack>::ByteOrder

        >(reader, data.AsySodPilotCfirm);
  }

  // Deserialize struct member 'HmiNOPCofmOfLanChag' of type /CppImplementationDataTypes/YesNoRes1VccIDT
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Byte-order of primitive datatype (/CppImplementationDataTypes/YesNoRes1VccIDT)
        typename deserialization::Tp<TpPack>::ByteOrder

        >(reader, data.HmiNOPCofmOfLanChag);
  }

  // Deserialize struct member 'DispSpdSetForLgtCtrl' of type /CppImplementationDataTypes/float
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Byte-order of primitive datatype (/CppImplementationDataTypes/float)
        typename deserialization::Tp<TpPack>::ByteOrder

        >(reader, data.DispSpdSetForLgtCtrl);
  }

  // Deserialize struct member 'DispTSIInfoForLgtCtrl' of type /CppImplementationDataTypes/DispTSRInfoForLgtCtrl1VccIDT
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Byte-order of primitive datatype (/CppImplementationDataTypes/DispTSRInfoForLgtCtrl1VccIDT)
        typename deserialization::Tp<TpPack>::ByteOrder

        >(reader, data.DispTSIInfoForLgtCtrl);
  }

  // Deserialize struct member 'CllsnWarnReOn1' of type /CppImplementationDataTypes/LcmaCtraOn1VccIDT
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Byte-order of primitive datatype (/CppImplementationDataTypes/LcmaCtraOn1VccIDT)
        typename deserialization::Tp<TpPack>::ByteOrder

        >(reader, data.CllsnWarnReOn1);
  }

  // Deserialize struct member 'CllsnMtgtnOnoffSts' of type /CppImplementationDataTypes/OnOff1VccIDT
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Byte-order of primitive datatype (/CppImplementationDataTypes/OnOff1VccIDT)
        typename deserialization::Tp<TpPack>::ByteOrder

        >(reader, data.CllsnMtgtnOnoffSts);
  }

  // Deserialize struct member 'CtraOn1' of type /CppImplementationDataTypes/LcmaCtraOn1VccIDT
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Byte-order of primitive datatype (/CppImplementationDataTypes/LcmaCtraOn1VccIDT)
        typename deserialization::Tp<TpPack>::ByteOrder

        >(reader, data.CtraOn1);
  }

  // Deserialize struct member 'DoorOpenwarnOn1' of type /CppImplementationDataTypes/LcmaCtraOn1VccIDT
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Byte-order of primitive datatype (/CppImplementationDataTypes/LcmaCtraOn1VccIDT)
        typename deserialization::Tp<TpPack>::ByteOrder

        >(reader, data.DoorOpenwarnOn1);
  }

  // Deserialize struct member 'LcmaOn' of type /CppImplementationDataTypes/LcmaCtraOn1VccIDT
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Byte-order of primitive datatype (/CppImplementationDataTypes/LcmaCtraOn1VccIDT)
        typename deserialization::Tp<TpPack>::ByteOrder

        >(reader, data.LcmaOn);
  }

  // Deserialize struct member 'LcmaAudWarn' of type /CppImplementationDataTypes/OnOff1VccIDT
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Byte-order of primitive datatype (/CppImplementationDataTypes/OnOff1VccIDT)
        typename deserialization::Tp<TpPack>::ByteOrder

        >(reader, data.LcmaAudWarn);
  }

  // Deserialize struct member 'CllsnWarnReIndcn' of type /CppImplementationDataTypes/LcmaIndcn1VccIDT
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Byte-order of primitive datatype (/CppImplementationDataTypes/LcmaIndcn1VccIDT)
        typename deserialization::Tp<TpPack>::ByteOrder

        >(reader, data.CllsnWarnReIndcn);
  }

  // Deserialize struct member 'DoorOpenwarnLeIndcn' of type /CppImplementationDataTypes/LcmaIndcn1VccIDT
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Byte-order of primitive datatype (/CppImplementationDataTypes/LcmaIndcn1VccIDT)
        typename deserialization::Tp<TpPack>::ByteOrder

        >(reader, data.DoorOpenwarnLeIndcn);
  }

  // Deserialize struct member 'DoorOpenwarnRiIndcn' of type /CppImplementationDataTypes/LcmaIndcn1VccIDT
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Byte-order of primitive datatype (/CppImplementationDataTypes/LcmaIndcn1VccIDT)
        typename deserialization::Tp<TpPack>::ByteOrder

        >(reader, data.DoorOpenwarnRiIndcn);
  }

  return result;
}

/*!
 * \brief Calculates the static size for datatype /CppImplementationDataTypes/ToSOCA_FunctionInfo1VCCIDT.
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
constexpr std::size_t SomeIpProtocolGetStaticSize(amsr::someip_protocol::internal::deserialization::SizeToken<::ToSOCA_FunctionInfo1VCCIDT::ToSOCA_FunctionInfo1VCCIDT>) noexcept {
  // Namespace alias for static deserialization code
  namespace internal = amsr::someip_protocol::internal;
  namespace deserialization = internal::deserialization;

  // Sum of static size
 constexpr std::size_t static_size{
  // Accumulate the static size of struct member 'CamSts1' of type /CppImplementationDataTypes/CamSts1IDT
   SomeIpProtocolGetStaticSize<TpPack,
                                // Config of struct length field (/CppImplementationDataTypes/CamSts1IDT)
                                internal::LengthSize<deserialization::Tp<TpPack>::kSizeOfStructLengthField, typename deserialization::Tp<TpPack>::ByteOrder>

                               >(deserialization::SizeToken<::CamSts1IDT::CamSts1IDT>{})  + 
  
  // Accumulate the static size of struct member 'LppLaneChgSts' of type /CppImplementationDataTypes/LppLaneChgStsIDT
   SomeIpProtocolGetStaticSize<TpPack,
                                // Config of struct length field (/CppImplementationDataTypes/LppLaneChgStsIDT)
                                internal::LengthSize<deserialization::Tp<TpPack>::kSizeOfStructLengthField, typename deserialization::Tp<TpPack>::ByteOrder>

                               >(deserialization::SizeToken<::LppLaneChgStsIDT::LppLaneChgStsIDT>{})  + 
  
  // Accumulate the static size of struct member 'TrfcLiAttentionEna' of type /CppImplementationDataTypes/OnOff1VccIDT
   SomeIpProtocolGetStaticSize<TpPack,
                                // Byte-order of primitive datatype (/CppImplementationDataTypes/OnOff1VccIDT)
                                typename deserialization::Tp<TpPack>::ByteOrder

                               >(deserialization::SizeToken<::OnOff1VccIDT::OnOff1VccIDT>{})  + 
  
  // Accumulate the static size of struct member 'TrfcSignInfoEna' of type /CppImplementationDataTypes/OnOff1VccIDT
   SomeIpProtocolGetStaticSize<TpPack,
                                // Byte-order of primitive datatype (/CppImplementationDataTypes/OnOff1VccIDT)
                                typename deserialization::Tp<TpPack>::ByteOrder

                               >(deserialization::SizeToken<::OnOff1VccIDT::OnOff1VccIDT>{})  + 
  
  // Accumulate the static size of struct member 'VehInLaneChg' of type /CppImplementationDataTypes/Bool1VccIDT
   SomeIpProtocolGetStaticSize<TpPack,
                                // Byte-order of primitive datatype (/CppImplementationDataTypes/Bool1VccIDT)
                                typename deserialization::Tp<TpPack>::ByteOrder

                               >(deserialization::SizeToken<::Bool1VccIDT::Bool1VccIDT>{})  + 
  
  // Accumulate the static size of struct member 'DynCalPrmForAxleDstReToVehFrnt' of type /CppImplementationDataTypes/float
   SomeIpProtocolGetStaticSize<TpPack,
                                // Byte-order of primitive datatype (/CppImplementationDataTypes/float)
                                typename deserialization::Tp<TpPack>::ByteOrder

                               >(deserialization::SizeToken<::float32IDT::float32IDT>{})  + 
  
  // Accumulate the static size of struct member 'DynCalPrmForCamLatDistToVehFrnt' of type /CppImplementationDataTypes/float
   SomeIpProtocolGetStaticSize<TpPack,
                                // Byte-order of primitive datatype (/CppImplementationDataTypes/float)
                                typename deserialization::Tp<TpPack>::ByteOrder

                               >(deserialization::SizeToken<::float32IDT::float32IDT>{})  + 
  
  // Accumulate the static size of struct member 'DynCalPrmForCamLongDistToVehFrnt' of type /CppImplementationDataTypes/float
   SomeIpProtocolGetStaticSize<TpPack,
                                // Byte-order of primitive datatype (/CppImplementationDataTypes/float)
                                typename deserialization::Tp<TpPack>::ByteOrder

                               >(deserialization::SizeToken<::float32IDT::float32IDT>{})  + 
  
  // Accumulate the static size of struct member 'DynCalPrmForVehTyp' of type /CppImplementationDataTypes/uint8_t
   SomeIpProtocolGetStaticSize<TpPack,
                                // Byte-order of primitive datatype (/CppImplementationDataTypes/uint8_t)
                                typename deserialization::Tp<TpPack>::ByteOrder

                               >(deserialization::SizeToken<::uint8IDT::uint8IDT>{})  + 
  
  // Accumulate the static size of struct member 'HWASts' of type /CppImplementationDataTypes/TjaStsIDT
   SomeIpProtocolGetStaticSize<TpPack,
                                // Byte-order of primitive datatype (/CppImplementationDataTypes/TjaStsIDT)
                                typename deserialization::Tp<TpPack>::ByteOrder

                               >(deserialization::SizeToken<::TjaStsIDT::TjaStsIDT>{})  + 
  
  // Accumulate the static size of struct member 'NgpSts1' of type /CppImplementationDataTypes/NgpSts1IDT
   SomeIpProtocolGetStaticSize<TpPack,
                                // Byte-order of primitive datatype (/CppImplementationDataTypes/NgpSts1IDT)
                                typename deserialization::Tp<TpPack>::ByteOrder

                               >(deserialization::SizeToken<::NgpSts1IDT::NgpSts1IDT>{})  + 
  
  // Accumulate the static size of struct member 'TlaFaultSts' of type /CppImplementationDataTypes/OnOff1VccIDT
   SomeIpProtocolGetStaticSize<TpPack,
                                // Byte-order of primitive datatype (/CppImplementationDataTypes/OnOff1VccIDT)
                                typename deserialization::Tp<TpPack>::ByteOrder

                               >(deserialization::SizeToken<::OnOff1VccIDT::OnOff1VccIDT>{})  + 
  
  // Accumulate the static size of struct member 'TsiFaultSts' of type /CppImplementationDataTypes/OnOff1VccIDT
   SomeIpProtocolGetStaticSize<TpPack,
                                // Byte-order of primitive datatype (/CppImplementationDataTypes/OnOff1VccIDT)
                                typename deserialization::Tp<TpPack>::ByteOrder

                               >(deserialization::SizeToken<::OnOff1VccIDT::OnOff1VccIDT>{})  + 
  
  // Accumulate the static size of struct member 'AsyALgtIndcr' of type /CppImplementationDataTypes/AsyIndcrDispSts1VccIDT
   SomeIpProtocolGetStaticSize<TpPack,
                                // Byte-order of primitive datatype (/CppImplementationDataTypes/AsyIndcrDispSts1VccIDT)
                                typename deserialization::Tp<TpPack>::ByteOrder

                               >(deserialization::SizeToken<::AsyIndcrDispSts1VccIDT::AsyIndcrDispSts1VccIDT>{})  + 
  
  // Accumulate the static size of struct member 'Vinmatch' of type /CppImplementationDataTypes/YesNo2VccIDT
   SomeIpProtocolGetStaticSize<TpPack,
                                // Byte-order of primitive datatype (/CppImplementationDataTypes/YesNo2VccIDT)
                                typename deserialization::Tp<TpPack>::ByteOrder

                               >(deserialization::SizeToken<::YesNo2VccIDT::YesNo2VccIDT>{})  + 
  
  // Accumulate the static size of struct member ' ACCSts' of type /CppImplementationDataTypes/AccSts1IDT
   SomeIpProtocolGetStaticSize<TpPack,
                                // Byte-order of primitive datatype (/CppImplementationDataTypes/AccSts1IDT)
                                typename deserialization::Tp<TpPack>::ByteOrder

                               >(deserialization::SizeToken<::AccSts1IDT::AccSts1IDT>{})  + 
  
  // Accumulate the static size of struct member 'TjaPath' of type /CppImplementationDataTypes/TjaTrailBusIDT
   SomeIpProtocolGetStaticSize<TpPack,
                                // Config of struct length field (/CppImplementationDataTypes/TjaTrailBusIDT)
                                internal::LengthSize<deserialization::Tp<TpPack>::kSizeOfStructLengthField, typename deserialization::Tp<TpPack>::ByteOrder>

                               >(deserialization::SizeToken<::TjaTrailBusIDT::TjaTrailBusIDT>{})  + 
  
  // Accumulate the static size of struct member 'ACCStopRequest' of type /CppImplementationDataTypes/VehStopReq1VccIDT
   SomeIpProtocolGetStaticSize<TpPack,
                                // Byte-order of primitive datatype (/CppImplementationDataTypes/VehStopReq1VccIDT)
                                typename deserialization::Tp<TpPack>::ByteOrder

                               >(deserialization::SizeToken<::VehStopReq1VccIDT::VehStopReq1VccIDT>{})  + 
  
  // Accumulate the static size of struct member 'AccTarSeln' of type /CppImplementationDataTypes/AccTarSeln1RecIDT
   SomeIpProtocolGetStaticSize<TpPack,
                                // Config of struct length field (/CppImplementationDataTypes/AccTarSeln1RecIDT)
                                internal::LengthSize<deserialization::Tp<TpPack>::kSizeOfStructLengthField, typename deserialization::Tp<TpPack>::ByteOrder>

                               >(deserialization::SizeToken<::AccTarSeln1RecIDT::AccTarSeln1RecIDT>{})  + 
  
  // Accumulate the static size of struct member 'DynCalPrmForBicycleMdlAxleDistFrnt' of type /CppImplementationDataTypes/float
   SomeIpProtocolGetStaticSize<TpPack,
                                // Byte-order of primitive datatype (/CppImplementationDataTypes/float)
                                typename deserialization::Tp<TpPack>::ByteOrder

                               >(deserialization::SizeToken<::singleIDT::singleIDT>{})  + 
  
  // Accumulate the static size of struct member 'DynCalPrmForVehM' of type /CppImplementationDataTypes/float
   SomeIpProtocolGetStaticSize<TpPack,
                                // Byte-order of primitive datatype (/CppImplementationDataTypes/float)
                                typename deserialization::Tp<TpPack>::ByteOrder

                               >(deserialization::SizeToken<::singleIDT::singleIDT>{})  + 
  
  // Accumulate the static size of struct member 'DynCalPrmForVehWhlBas' of type /CppImplementationDataTypes/float
   SomeIpProtocolGetStaticSize<TpPack,
                                // Byte-order of primitive datatype (/CppImplementationDataTypes/float)
                                typename deserialization::Tp<TpPack>::ByteOrder

                               >(deserialization::SizeToken<::singleIDT::singleIDT>{})  + 
  
  // Accumulate the static size of struct member 'DynCalPrmForVehWidth' of type /CppImplementationDataTypes/float
   SomeIpProtocolGetStaticSize<TpPack,
                                // Byte-order of primitive datatype (/CppImplementationDataTypes/float)
                                typename deserialization::Tp<TpPack>::ByteOrder

                               >(deserialization::SizeToken<::singleIDT::singleIDT>{})  + 
  
  // Accumulate the static size of struct member 'DynCalPrmForVehLen' of type /CppImplementationDataTypes/float
   SomeIpProtocolGetStaticSize<TpPack,
                                // Byte-order of primitive datatype (/CppImplementationDataTypes/float)
                                typename deserialization::Tp<TpPack>::ByteOrder

                               >(deserialization::SizeToken<::singleIDT::singleIDT>{})  + 
  
  // Accumulate the static size of struct member 'LanguageRegion' of type /CppImplementationDataTypes/LanguageRegion1VccIDT
   SomeIpProtocolGetStaticSize<TpPack,
                                // Byte-order of primitive datatype (/CppImplementationDataTypes/LanguageRegion1VccIDT)
                                typename deserialization::Tp<TpPack>::ByteOrder

                               >(deserialization::SizeToken<::LanguageRegion1VccIDT::LanguageRegion1VccIDT>{})  + 
  
  // Accumulate the static size of struct member 'SetSpdForCrsCtrlFct' of type /CppImplementationDataTypes/float
   SomeIpProtocolGetStaticSize<TpPack,
                                // Byte-order of primitive datatype (/CppImplementationDataTypes/float)
                                typename deserialization::Tp<TpPack>::ByteOrder

                               >(deserialization::SizeToken<::singleIDT::singleIDT>{})  + 
  
  // Accumulate the static size of struct member 'HWAMode' of type /CppImplementationDataTypes/HWAMode1VccIDT
   SomeIpProtocolGetStaticSize<TpPack,
                                // Byte-order of primitive datatype (/CppImplementationDataTypes/HWAMode1VccIDT)
                                typename deserialization::Tp<TpPack>::ByteOrder

                               >(deserialization::SizeToken<::HWAMode1VccIDT::HWAMode1VccIDT>{})  + 
  
  // Accumulate the static size of struct member 'AsyAutDrvCtrlTyp' of type /CppImplementationDataTypes/AsyAutDrvCtrlTyp1VccIDT
   SomeIpProtocolGetStaticSize<TpPack,
                                // Byte-order of primitive datatype (/CppImplementationDataTypes/AsyAutDrvCtrlTyp1VccIDT)
                                typename deserialization::Tp<TpPack>::ByteOrder

                               >(deserialization::SizeToken<::AsyAutDrvCtrlTyp1VccIDT::AsyAutDrvCtrlTyp1VccIDT>{})  + 
  
  // Accumulate the static size of struct member 'AsyAutDrvgAvl' of type /CppImplementationDataTypes/AsyAutDrvgAvl1VccIDT
   SomeIpProtocolGetStaticSize<TpPack,
                                // Byte-order of primitive datatype (/CppImplementationDataTypes/AsyAutDrvgAvl1VccIDT)
                                typename deserialization::Tp<TpPack>::ByteOrder

                               >(deserialization::SizeToken<::AsyAutDrvgAvl1VccIDT::AsyAutDrvgAvl1VccIDT>{})  + 
  
  // Accumulate the static size of struct member 'AsyEmgyManoeuvreAidSts' of type /CppImplementationDataTypes/FctaOn1VccIDT
   SomeIpProtocolGetStaticSize<TpPack,
                                // Byte-order of primitive datatype (/CppImplementationDataTypes/FctaOn1VccIDT)
                                typename deserialization::Tp<TpPack>::ByteOrder

                               >(deserialization::SizeToken<::FctaOn1VccIDT::FctaOn1VccIDT>{})  + 
  
  // Accumulate the static size of struct member 'AsyLaneKeepAidSts' of type /CppImplementationDataTypes/AsyALatSts1VccIDT
   SomeIpProtocolGetStaticSize<TpPack,
                                // Byte-order of primitive datatype (/CppImplementationDataTypes/AsyALatSts1VccIDT)
                                typename deserialization::Tp<TpPack>::ByteOrder

                               >(deserialization::SizeToken<::AsyALatSts1VccIDT::AsyALatSts1VccIDT>{})  + 
  
  // Accumulate the static size of struct member 'AsyLgtCtrlTakeOverReq' of type /CppImplementationDataTypes/NoYes1VccIDT
   SomeIpProtocolGetStaticSize<TpPack,
                                // Byte-order of primitive datatype (/CppImplementationDataTypes/NoYes1VccIDT)
                                typename deserialization::Tp<TpPack>::ByteOrder

                               >(deserialization::SizeToken<::NoYes1VccIDT::NoYes1VccIDT>{})  + 
  
  // Accumulate the static size of struct member 'AsyStandStillReqForCmft' of type /CppImplementationDataTypes/VehStopReq1VccIDT
   SomeIpProtocolGetStaticSize<TpPack,
                                // Byte-order of primitive datatype (/CppImplementationDataTypes/VehStopReq1VccIDT)
                                typename deserialization::Tp<TpPack>::ByteOrder

                               >(deserialization::SizeToken<::VehStopReq1VccIDT::VehStopReq1VccIDT>{})  + 
  
  // Accumulate the static size of struct member 'AsySteerApplyRqrd' of type /CppImplementationDataTypes/LvlWarn1VccIDT
   SomeIpProtocolGetStaticSize<TpPack,
                                // Byte-order of primitive datatype (/CppImplementationDataTypes/LvlWarn1VccIDT)
                                typename deserialization::Tp<TpPack>::ByteOrder

                               >(deserialization::SizeToken<::LvlWarn1VccIDT::LvlWarn1VccIDT>{})  + 
  
  // Accumulate the static size of struct member 'AvlStsForLongAutDrv' of type /CppImplementationDataTypes/AvlStsForLongAutDrv4VccIDT
   SomeIpProtocolGetStaticSize<TpPack,
                                // Byte-order of primitive datatype (/CppImplementationDataTypes/AvlStsForLongAutDrv4VccIDT)
                                typename deserialization::Tp<TpPack>::ByteOrder

                               >(deserialization::SizeToken<::AvlStsForLongAutDrv4VccIDT::AvlStsForLongAutDrv4VccIDT>{})  + 
  
  // Accumulate the static size of struct member 'CllsnFwdWarn' of type /CppImplementationDataTypes/CllsnFwdWarnReq1VccIDT
   SomeIpProtocolGetStaticSize<TpPack,
                                // Byte-order of primitive datatype (/CppImplementationDataTypes/CllsnFwdWarnReq1VccIDT)
                                typename deserialization::Tp<TpPack>::ByteOrder

                               >(deserialization::SizeToken<::CllsnFwdWarnReq1VccIDT::CllsnFwdWarnReq1VccIDT>{})  + 
  
  // Accumulate the static size of struct member 'IntvAndWarnModInfoSts' of type /CppImplementationDataTypes/IntvAndWarnModForLaneKeepAidSts1VccIDT
   SomeIpProtocolGetStaticSize<TpPack,
                                // Byte-order of primitive datatype (/CppImplementationDataTypes/IntvAndWarnModForLaneKeepAidSts1VccIDT)
                                typename deserialization::Tp<TpPack>::ByteOrder

                               >(deserialization::SizeToken<::IntvAndWarnModForLaneKeepAidSts1VccIDT::IntvAndWarnModForLaneKeepAidSts1VccIDT>{})  + 
  
  // Accumulate the static size of struct member 'LaneChgAutActvSts' of type /CppImplementationDataTypes/OnOff1VccIDT
   SomeIpProtocolGetStaticSize<TpPack,
                                // Byte-order of primitive datatype (/CppImplementationDataTypes/OnOff1VccIDT)
                                typename deserialization::Tp<TpPack>::ByteOrder

                               >(deserialization::SizeToken<::OnOff1VccIDT::OnOff1VccIDT>{})  + 
  
  // Accumulate the static size of struct member 'LaneKeepAidInfoSts' of type /CppImplementationDataTypes/OnOff1VccIDT
   SomeIpProtocolGetStaticSize<TpPack,
                                // Byte-order of primitive datatype (/CppImplementationDataTypes/OnOff1VccIDT)
                                typename deserialization::Tp<TpPack>::ByteOrder

                               >(deserialization::SizeToken<::OnOff1VccIDT::OnOff1VccIDT>{})  + 
  
  // Accumulate the static size of struct member 'TiGapSetForLgtCtrl' of type /CppImplementationDataTypes/TiGapSetForLgtCtrl1VccIDT
   SomeIpProtocolGetStaticSize<TpPack,
                                // Byte-order of primitive datatype (/CppImplementationDataTypes/TiGapSetForLgtCtrl1VccIDT)
                                typename deserialization::Tp<TpPack>::ByteOrder

                               >(deserialization::SizeToken<::TiGapSetForLgtCtrl1VccIDT::TiGapSetForLgtCtrl1VccIDT>{})  + 
  
  // Accumulate the static size of struct member 'AsySodPilotCfirm' of type /CppImplementationDataTypes/ActvnAvl2VccIDT
   SomeIpProtocolGetStaticSize<TpPack,
                                // Byte-order of primitive datatype (/CppImplementationDataTypes/ActvnAvl2VccIDT)
                                typename deserialization::Tp<TpPack>::ByteOrder

                               >(deserialization::SizeToken<::ActvnAvl2VccIDT::ActvnAvl2VccIDT>{})  + 
  
  // Accumulate the static size of struct member 'HmiNOPCofmOfLanChag' of type /CppImplementationDataTypes/YesNoRes1VccIDT
   SomeIpProtocolGetStaticSize<TpPack,
                                // Byte-order of primitive datatype (/CppImplementationDataTypes/YesNoRes1VccIDT)
                                typename deserialization::Tp<TpPack>::ByteOrder

                               >(deserialization::SizeToken<::YesNoRes1VccIDT::YesNoRes1VccIDT>{})  + 
  
  // Accumulate the static size of struct member 'DispSpdSetForLgtCtrl' of type /CppImplementationDataTypes/float
   SomeIpProtocolGetStaticSize<TpPack,
                                // Byte-order of primitive datatype (/CppImplementationDataTypes/float)
                                typename deserialization::Tp<TpPack>::ByteOrder

                               >(deserialization::SizeToken<::singleIDT::singleIDT>{})  + 
  
  // Accumulate the static size of struct member 'DispTSIInfoForLgtCtrl' of type /CppImplementationDataTypes/DispTSRInfoForLgtCtrl1VccIDT
   SomeIpProtocolGetStaticSize<TpPack,
                                // Byte-order of primitive datatype (/CppImplementationDataTypes/DispTSRInfoForLgtCtrl1VccIDT)
                                typename deserialization::Tp<TpPack>::ByteOrder

                               >(deserialization::SizeToken<::DispTSRInfoForLgtCtrl1VccIDT::DispTSRInfoForLgtCtrl1VccIDT>{})  + 
  
  // Accumulate the static size of struct member 'CllsnWarnReOn1' of type /CppImplementationDataTypes/LcmaCtraOn1VccIDT
   SomeIpProtocolGetStaticSize<TpPack,
                                // Byte-order of primitive datatype (/CppImplementationDataTypes/LcmaCtraOn1VccIDT)
                                typename deserialization::Tp<TpPack>::ByteOrder

                               >(deserialization::SizeToken<::LcmaCtraOn1VccIDT::LcmaCtraOn1VccIDT>{})  + 
  
  // Accumulate the static size of struct member 'CllsnMtgtnOnoffSts' of type /CppImplementationDataTypes/OnOff1VccIDT
   SomeIpProtocolGetStaticSize<TpPack,
                                // Byte-order of primitive datatype (/CppImplementationDataTypes/OnOff1VccIDT)
                                typename deserialization::Tp<TpPack>::ByteOrder

                               >(deserialization::SizeToken<::OnOff1VccIDT::OnOff1VccIDT>{})  + 
  
  // Accumulate the static size of struct member 'CtraOn1' of type /CppImplementationDataTypes/LcmaCtraOn1VccIDT
   SomeIpProtocolGetStaticSize<TpPack,
                                // Byte-order of primitive datatype (/CppImplementationDataTypes/LcmaCtraOn1VccIDT)
                                typename deserialization::Tp<TpPack>::ByteOrder

                               >(deserialization::SizeToken<::LcmaCtraOn1VccIDT::LcmaCtraOn1VccIDT>{})  + 
  
  // Accumulate the static size of struct member 'DoorOpenwarnOn1' of type /CppImplementationDataTypes/LcmaCtraOn1VccIDT
   SomeIpProtocolGetStaticSize<TpPack,
                                // Byte-order of primitive datatype (/CppImplementationDataTypes/LcmaCtraOn1VccIDT)
                                typename deserialization::Tp<TpPack>::ByteOrder

                               >(deserialization::SizeToken<::LcmaCtraOn1VccIDT::LcmaCtraOn1VccIDT>{})  + 
  
  // Accumulate the static size of struct member 'LcmaOn' of type /CppImplementationDataTypes/LcmaCtraOn1VccIDT
   SomeIpProtocolGetStaticSize<TpPack,
                                // Byte-order of primitive datatype (/CppImplementationDataTypes/LcmaCtraOn1VccIDT)
                                typename deserialization::Tp<TpPack>::ByteOrder

                               >(deserialization::SizeToken<::LcmaCtraOn1VccIDT::LcmaCtraOn1VccIDT>{})  + 
  
  // Accumulate the static size of struct member 'LcmaAudWarn' of type /CppImplementationDataTypes/OnOff1VccIDT
   SomeIpProtocolGetStaticSize<TpPack,
                                // Byte-order of primitive datatype (/CppImplementationDataTypes/OnOff1VccIDT)
                                typename deserialization::Tp<TpPack>::ByteOrder

                               >(deserialization::SizeToken<::OnOff1VccIDT::OnOff1VccIDT>{})  + 
  
  // Accumulate the static size of struct member 'CllsnWarnReIndcn' of type /CppImplementationDataTypes/LcmaIndcn1VccIDT
   SomeIpProtocolGetStaticSize<TpPack,
                                // Byte-order of primitive datatype (/CppImplementationDataTypes/LcmaIndcn1VccIDT)
                                typename deserialization::Tp<TpPack>::ByteOrder

                               >(deserialization::SizeToken<::LcmaIndcn1VccIDT::LcmaIndcn1VccIDT>{})  + 
  
  // Accumulate the static size of struct member 'DoorOpenwarnLeIndcn' of type /CppImplementationDataTypes/LcmaIndcn1VccIDT
   SomeIpProtocolGetStaticSize<TpPack,
                                // Byte-order of primitive datatype (/CppImplementationDataTypes/LcmaIndcn1VccIDT)
                                typename deserialization::Tp<TpPack>::ByteOrder

                               >(deserialization::SizeToken<::LcmaIndcn1VccIDT::LcmaIndcn1VccIDT>{})  + 
  
  // Accumulate the static size of struct member 'DoorOpenwarnRiIndcn' of type /CppImplementationDataTypes/LcmaIndcn1VccIDT
   SomeIpProtocolGetStaticSize<TpPack,
                                // Byte-order of primitive datatype (/CppImplementationDataTypes/LcmaIndcn1VccIDT)
                                typename deserialization::Tp<TpPack>::ByteOrder

                               >(deserialization::SizeToken<::LcmaIndcn1VccIDT::LcmaIndcn1VccIDT>{}) 
  };
  return static_size;
}

}  // namespace ToSOCA_FunctionInfo1VCCIDT

#endif  // OBJECTFUSIONMODELEXE_INCLUDE_AMSR_SOMEIP_PROTOCOL_INTERNAL_DATATYPE_DESERIALIZATION_TOSOCA_FUNCTIONINFO1VCCIDT_DESERIALIZER_TOSOCA_FUNCTIONINFO1VCCIDT_H_

