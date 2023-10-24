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
/**        \file  TrafficSignInformationExe/include/amsr/someip_protocol/internal/datatype_serialization/TsiHmiData1VccIDT/serializer_TsiHmiData1VccIDT.h
 *        \brief  SOME/IP protocol serializer implementation for datatype 'TsiHmiData1VccIDT'
 *
 *      \details  /CppImplementationDataTypes/TsiHmiData1VccIDT
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 *  GENERATOR INFORMATION
 *  -------------------------------------------------------------------------------------------------------------------
 *    Generator Name: amsr_someipprotocol
 *         Commit ID: 1b535f531ca8eaaa17edbe97d022bbf394412553
 *********************************************************************************************************************/

#ifndef TRAFFICSIGNINFORMATIONEXE_INCLUDE_AMSR_SOMEIP_PROTOCOL_INTERNAL_DATATYPE_SERIALIZATION_TSIHMIDATA1VCCIDT_SERIALIZER_TSIHMIDATA1VCCIDT_H_
#define TRAFFICSIGNINFORMATIONEXE_INCLUDE_AMSR_SOMEIP_PROTOCOL_INTERNAL_DATATYPE_SERIALIZATION_TSIHMIDATA1VCCIDT_SERIALIZER_TSIHMIDATA1VCCIDT_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include "TsiHmiData1VccIDT/impl_type_tsihmidata1vccidt.h"
#include "someip-protocol/internal/serialization/ser_forward.h"
#include "someip-protocol/internal/serialization/ser_sizing.h"
#include "someip-protocol/internal/serialization/types.h"
#include "someip-protocol/internal/serialization/writer.h"

namespace TsiHmiData1VccIDT {

/*!
 * \brief Serializer for datatype /CppImplementationDataTypes/TsiHmiData1VccIDT.
 * \details Data type class: DataTypeStruct (CppImplDataTypeStruct).
 *          is TLV struct: false
 *
 * \tparam TpPack Transformation properties to be used for serialization.
 *
 * \param[in, out] writer Reference to byte stream writer.
 * \param[in] data Reference to the data object of type /CppImplementationDataTypes/TsiHmiData1VccIDT to be serialized.
 * \pre The writer holds a memory buffer which is enough to store the serialized data.
 * \context Reactor|App
 * \threadsafe FALSE
 * \reentrant TRUE
 * \vprivate Vector component internal API.
 * \synchronous TRUE
 */
template <typename TpPack>
void SomeIpProtocolSerialize(amsr::someip_protocol::internal::serialization::Writer& writer, ::TsiHmiData1VccIDT::TsiHmiData1VccIDT const &data) noexcept {
  // Namespace alias for static serialization code
  namespace internal = amsr::someip_protocol::internal;
  namespace serialization = internal::serialization;
  // Serialize non-TLV struct
    // Serialize struct member 'RoadSgnInfoSts' of type /CppImplementationDataTypes/TrfcSgnInfoStsIDT
     // VCA_SOMEIPPROTOCOL_GEN_SERIALIZE
    serialization::SomeIpProtocolSerialize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/TrfcSgnInfoStsIDT)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(writer, data.RoadSgnInfoSts);
    // Serialize struct member 'SpdLimFirst' of type /CppImplementationDataTypes/uint8_t
     // VCA_SOMEIPPROTOCOL_GEN_SERIALIZE
    serialization::SomeIpProtocolSerialize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/uint8_t)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(writer, data.SpdLimFirst);
    // Serialize struct member 'SpdLimWarnReq' of type /CppImplementationDataTypes/SpdLimWarnReq1IDT
     // VCA_SOMEIPPROTOCOL_GEN_SERIALIZE
    serialization::SomeIpProtocolSerialize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/SpdLimWarnReq1IDT)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(writer, data.SpdLimWarnReq);
    // Serialize struct member 'TsiRoadMiscSgnInfoSts' of type /CppImplementationDataTypes/OnOff1IDT
     // VCA_SOMEIPPROTOCOL_GEN_SERIALIZE
    serialization::SomeIpProtocolSerialize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/OnOff1IDT)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(writer, data.TsiRoadMiscSgnInfoSts);
    // Serialize struct member 'SpdAlrmActvSts' of type /CppImplementationDataTypes/DY1IDT
     // VCA_SOMEIPPROTOCOL_GEN_SERIALIZE
    serialization::SomeIpProtocolSerialize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/DY1IDT)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(writer, data.SpdAlrmActvSts);
    // Serialize struct member 'OffsForSpdWarnSetgSts' of type /CppImplementationDataTypes/OffsForSpdWarnSetgSts1IDT
     // VCA_SOMEIPPROTOCOL_GEN_SERIALIZE
    serialization::SomeIpProtocolSerialize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/OffsForSpdWarnSetgSts1IDT)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(writer, data.OffsForSpdWarnSetgSts);
    // Serialize struct member 'TrfcInfoMiscFirst' of type /CppImplementationDataTypes/TrfcInfoMiscFirstIDT
     // VCA_SOMEIPPROTOCOL_GEN_SERIALIZE
    serialization::SomeIpProtocolSerialize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/TrfcInfoMiscFirstIDT)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(writer, data.TrfcInfoMiscFirst);
    // Serialize struct member 'SpdLimCamFirst' of type /CppImplementationDataTypes/OnOff1IDT
     // VCA_SOMEIPPROTOCOL_GEN_SERIALIZE
    serialization::SomeIpProtocolSerialize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/OnOff1IDT)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(writer, data.SpdLimCamFirst);
    // Serialize struct member 'SpdLimSec' of type /CppImplementationDataTypes/uint8_t
     // VCA_SOMEIPPROTOCOL_GEN_SERIALIZE
    serialization::SomeIpProtocolSerialize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/uint8_t)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(writer, data.SpdLimSec);
    // Serialize struct member 'SpdLimUnit' of type /CppImplementationDataTypes/SpdUnit1IDT
     // VCA_SOMEIPPROTOCOL_GEN_SERIALIZE
    serialization::SomeIpProtocolSerialize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/SpdUnit1IDT)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(writer, data.SpdLimUnit);
    // Serialize struct member 'CtryForRoadSgnInfo' of type /CppImplementationDataTypes/uint16_t
     // VCA_SOMEIPPROTOCOL_GEN_SERIALIZE
    serialization::SomeIpProtocolSerialize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/uint16_t)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(writer, data.CtryForRoadSgnInfo);
    // Serialize struct member 'SpdLimWarnReqAud' of type /CppImplementationDataTypes/YesNo2VccIDT
     // VCA_SOMEIPPROTOCOL_GEN_SERIALIZE
    serialization::SomeIpProtocolSerialize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/YesNo2VccIDT)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(writer, data.SpdLimWarnReqAud);
    // Serialize struct member 'SpdLimSpplFirst' of type /CppImplementationDataTypes/SpplTrfcSgnInfoIDT
     // VCA_SOMEIPPROTOCOL_GEN_SERIALIZE
    serialization::SomeIpProtocolSerialize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/SpplTrfcSgnInfoIDT)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(writer, data.SpdLimSpplFirst);
    // Serialize struct member 'SpdLimCoupldFirst' of type /CppImplementationDataTypes/SpdCoupldSgn3IDT
     // VCA_SOMEIPPROTOCOL_GEN_SERIALIZE
    serialization::SomeIpProtocolSerialize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/SpdCoupldSgn3IDT)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(writer, data.SpdLimCoupldFirst);
}

/*!
 * \brief Calculates the required buffer size for datatype /CppImplementationDataTypes/TsiHmiData1VccIDT.
 * \details Data type class: DataTypeStruct (CppImplDataTypeStruct).
 *          is TLV struct: false
 *
 * \tparam TpPack Transformation properties to be used for serialization.
 * \param[in] data Reference to the data object of type /CppImplementationDataTypes/TsiHmiData1VccIDT.
 * \return Returns the required buffer size for the struct in bytes.
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
constexpr std::size_t GetRequiredBufferSize(::TsiHmiData1VccIDT::TsiHmiData1VccIDT const &data) noexcept {
  // Namespace alias for static serialization code
  namespace internal = amsr::someip_protocol::internal;
  namespace serialization = internal::serialization;

  // Sum of required size
  std::size_t required_buffer_size{0};

  // Accumulate the static size of struct member 'RoadSgnInfoSts' of type /CppImplementationDataTypes/TrfcSgnInfoStsIDT
   // VCA_SOMEIPPROTOCOL_GEN_BUFFERSIZE
  required_buffer_size += serialization::GetRequiredBufferSize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/TrfcSgnInfoStsIDT)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(data.RoadSgnInfoSts);
  // Accumulate the static size of struct member 'SpdLimFirst' of type /CppImplementationDataTypes/uint8_t
   // VCA_SOMEIPPROTOCOL_GEN_BUFFERSIZE
  required_buffer_size += serialization::GetRequiredBufferSize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/uint8_t)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(data.SpdLimFirst);
  // Accumulate the static size of struct member 'SpdLimWarnReq' of type /CppImplementationDataTypes/SpdLimWarnReq1IDT
   // VCA_SOMEIPPROTOCOL_GEN_BUFFERSIZE
  required_buffer_size += serialization::GetRequiredBufferSize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/SpdLimWarnReq1IDT)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(data.SpdLimWarnReq);
  // Accumulate the static size of struct member 'TsiRoadMiscSgnInfoSts' of type /CppImplementationDataTypes/OnOff1IDT
   // VCA_SOMEIPPROTOCOL_GEN_BUFFERSIZE
  required_buffer_size += serialization::GetRequiredBufferSize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/OnOff1IDT)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(data.TsiRoadMiscSgnInfoSts);
  // Accumulate the static size of struct member 'SpdAlrmActvSts' of type /CppImplementationDataTypes/DY1IDT
   // VCA_SOMEIPPROTOCOL_GEN_BUFFERSIZE
  required_buffer_size += serialization::GetRequiredBufferSize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/DY1IDT)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(data.SpdAlrmActvSts);
  // Accumulate the static size of struct member 'OffsForSpdWarnSetgSts' of type /CppImplementationDataTypes/OffsForSpdWarnSetgSts1IDT
   // VCA_SOMEIPPROTOCOL_GEN_BUFFERSIZE
  required_buffer_size += serialization::GetRequiredBufferSize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/OffsForSpdWarnSetgSts1IDT)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(data.OffsForSpdWarnSetgSts);
  // Accumulate the static size of struct member 'TrfcInfoMiscFirst' of type /CppImplementationDataTypes/TrfcInfoMiscFirstIDT
   // VCA_SOMEIPPROTOCOL_GEN_BUFFERSIZE
  required_buffer_size += serialization::GetRequiredBufferSize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/TrfcInfoMiscFirstIDT)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(data.TrfcInfoMiscFirst);
  // Accumulate the static size of struct member 'SpdLimCamFirst' of type /CppImplementationDataTypes/OnOff1IDT
   // VCA_SOMEIPPROTOCOL_GEN_BUFFERSIZE
  required_buffer_size += serialization::GetRequiredBufferSize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/OnOff1IDT)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(data.SpdLimCamFirst);
  // Accumulate the static size of struct member 'SpdLimSec' of type /CppImplementationDataTypes/uint8_t
   // VCA_SOMEIPPROTOCOL_GEN_BUFFERSIZE
  required_buffer_size += serialization::GetRequiredBufferSize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/uint8_t)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(data.SpdLimSec);
  // Accumulate the static size of struct member 'SpdLimUnit' of type /CppImplementationDataTypes/SpdUnit1IDT
   // VCA_SOMEIPPROTOCOL_GEN_BUFFERSIZE
  required_buffer_size += serialization::GetRequiredBufferSize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/SpdUnit1IDT)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(data.SpdLimUnit);
  // Accumulate the static size of struct member 'CtryForRoadSgnInfo' of type /CppImplementationDataTypes/uint16_t
   // VCA_SOMEIPPROTOCOL_GEN_BUFFERSIZE
  required_buffer_size += serialization::GetRequiredBufferSize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/uint16_t)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(data.CtryForRoadSgnInfo);
  // Accumulate the static size of struct member 'SpdLimWarnReqAud' of type /CppImplementationDataTypes/YesNo2VccIDT
   // VCA_SOMEIPPROTOCOL_GEN_BUFFERSIZE
  required_buffer_size += serialization::GetRequiredBufferSize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/YesNo2VccIDT)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(data.SpdLimWarnReqAud);
  // Accumulate the static size of struct member 'SpdLimSpplFirst' of type /CppImplementationDataTypes/SpplTrfcSgnInfoIDT
   // VCA_SOMEIPPROTOCOL_GEN_BUFFERSIZE
  required_buffer_size += serialization::GetRequiredBufferSize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/SpplTrfcSgnInfoIDT)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(data.SpdLimSpplFirst);
  // Accumulate the static size of struct member 'SpdLimCoupldFirst' of type /CppImplementationDataTypes/SpdCoupldSgn3IDT
   // VCA_SOMEIPPROTOCOL_GEN_BUFFERSIZE
  required_buffer_size += serialization::GetRequiredBufferSize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/SpdCoupldSgn3IDT)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(data.SpdLimCoupldFirst);

  return required_buffer_size;
}

/*!
 * \brief Calculates the maximum buffer size for datatype /CppImplementationDataTypes/TsiHmiData1VccIDT.
 * \details Data type class: DataTypeStruct (CppImplDataTypeStruct).
 *          is TLV struct: false

 * \tparam The desired type.
 * \tparam TpPack Transformation properties to be used for serialization.
 * \return Returns the maximum buffer size for the struct in bytes.
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
template <typename T, typename TpPack, std::enable_if_t<std::is_same<T, ::TsiHmiData1VccIDT::TsiHmiData1VccIDT>::value, bool> = true>
constexpr amsr::someip_protocol::internal::serialization::InfSizeT GetMaximumBufferSize() noexcept {
  namespace internal = amsr::someip_protocol::internal;
  // Namespace alias for static serialization code
  namespace serialization = internal::serialization;
  serialization::InfSizeT size{0u};

  // Accumulate the static size of struct member 'RoadSgnInfoSts' of type /CppImplementationDataTypes/TrfcSgnInfoStsIDT
   // VCA_SOMEIPPROTOCOL_GEN_BUFFERSIZE
    size +=serialization::GetMaximumBufferSize<
                        decltype(T{}.RoadSgnInfoSts),
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/TrfcSgnInfoStsIDT)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >();
  // Accumulate the static size of struct member 'SpdLimFirst' of type /CppImplementationDataTypes/uint8_t
   // VCA_SOMEIPPROTOCOL_GEN_BUFFERSIZE
    size +=serialization::GetMaximumBufferSize<
                        decltype(T{}.SpdLimFirst),
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/uint8_t)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >();
  // Accumulate the static size of struct member 'SpdLimWarnReq' of type /CppImplementationDataTypes/SpdLimWarnReq1IDT
   // VCA_SOMEIPPROTOCOL_GEN_BUFFERSIZE
    size +=serialization::GetMaximumBufferSize<
                        decltype(T{}.SpdLimWarnReq),
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/SpdLimWarnReq1IDT)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >();
  // Accumulate the static size of struct member 'TsiRoadMiscSgnInfoSts' of type /CppImplementationDataTypes/OnOff1IDT
   // VCA_SOMEIPPROTOCOL_GEN_BUFFERSIZE
    size +=serialization::GetMaximumBufferSize<
                        decltype(T{}.TsiRoadMiscSgnInfoSts),
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/OnOff1IDT)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >();
  // Accumulate the static size of struct member 'SpdAlrmActvSts' of type /CppImplementationDataTypes/DY1IDT
   // VCA_SOMEIPPROTOCOL_GEN_BUFFERSIZE
    size +=serialization::GetMaximumBufferSize<
                        decltype(T{}.SpdAlrmActvSts),
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/DY1IDT)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >();
  // Accumulate the static size of struct member 'OffsForSpdWarnSetgSts' of type /CppImplementationDataTypes/OffsForSpdWarnSetgSts1IDT
   // VCA_SOMEIPPROTOCOL_GEN_BUFFERSIZE
    size +=serialization::GetMaximumBufferSize<
                        decltype(T{}.OffsForSpdWarnSetgSts),
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/OffsForSpdWarnSetgSts1IDT)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >();
  // Accumulate the static size of struct member 'TrfcInfoMiscFirst' of type /CppImplementationDataTypes/TrfcInfoMiscFirstIDT
   // VCA_SOMEIPPROTOCOL_GEN_BUFFERSIZE
    size +=serialization::GetMaximumBufferSize<
                        decltype(T{}.TrfcInfoMiscFirst),
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/TrfcInfoMiscFirstIDT)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >();
  // Accumulate the static size of struct member 'SpdLimCamFirst' of type /CppImplementationDataTypes/OnOff1IDT
   // VCA_SOMEIPPROTOCOL_GEN_BUFFERSIZE
    size +=serialization::GetMaximumBufferSize<
                        decltype(T{}.SpdLimCamFirst),
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/OnOff1IDT)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >();
  // Accumulate the static size of struct member 'SpdLimSec' of type /CppImplementationDataTypes/uint8_t
   // VCA_SOMEIPPROTOCOL_GEN_BUFFERSIZE
    size +=serialization::GetMaximumBufferSize<
                        decltype(T{}.SpdLimSec),
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/uint8_t)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >();
  // Accumulate the static size of struct member 'SpdLimUnit' of type /CppImplementationDataTypes/SpdUnit1IDT
   // VCA_SOMEIPPROTOCOL_GEN_BUFFERSIZE
    size +=serialization::GetMaximumBufferSize<
                        decltype(T{}.SpdLimUnit),
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/SpdUnit1IDT)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >();
  // Accumulate the static size of struct member 'CtryForRoadSgnInfo' of type /CppImplementationDataTypes/uint16_t
   // VCA_SOMEIPPROTOCOL_GEN_BUFFERSIZE
    size +=serialization::GetMaximumBufferSize<
                        decltype(T{}.CtryForRoadSgnInfo),
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/uint16_t)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >();
  // Accumulate the static size of struct member 'SpdLimWarnReqAud' of type /CppImplementationDataTypes/YesNo2VccIDT
   // VCA_SOMEIPPROTOCOL_GEN_BUFFERSIZE
    size +=serialization::GetMaximumBufferSize<
                        decltype(T{}.SpdLimWarnReqAud),
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/YesNo2VccIDT)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >();
  // Accumulate the static size of struct member 'SpdLimSpplFirst' of type /CppImplementationDataTypes/SpplTrfcSgnInfoIDT
   // VCA_SOMEIPPROTOCOL_GEN_BUFFERSIZE
    size +=serialization::GetMaximumBufferSize<
                        decltype(T{}.SpdLimSpplFirst),
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/SpplTrfcSgnInfoIDT)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >();
  // Accumulate the static size of struct member 'SpdLimCoupldFirst' of type /CppImplementationDataTypes/SpdCoupldSgn3IDT
   // VCA_SOMEIPPROTOCOL_GEN_BUFFERSIZE
    size +=serialization::GetMaximumBufferSize<
                        decltype(T{}.SpdLimCoupldFirst),
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/SpdCoupldSgn3IDT)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >();

  return size;
}

/*!
 * \brief Calculates the maximum buffer size for datatype /CppImplementationDataTypes/TsiHmiData1VccIDT. For ADL.
 * \details Data type class: DataTypeStruct (CppImplDataTypeStruct).
 *          is TLV struct: false
 *
 * \tparam TpPack Transformation properties to be used for serialization.
 * \param[in] data Reference to the data object of type /CppImplementationDataTypes/TsiHmiData1VccIDT.
 * \return Returns the required buffer size for the struct in bytes.
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
constexpr amsr::someip_protocol::internal::serialization::InfSizeT GetMaximumBufferSize(::TsiHmiData1VccIDT::TsiHmiData1VccIDT const&) noexcept {
  return GetMaximumBufferSize<::TsiHmiData1VccIDT::TsiHmiData1VccIDT, TpPack>();
}

/*!
 * \brief Checks if datatype /CppImplementationDataTypes/TsiHmiData1VccIDT is of static size.
 * \details Data type class: DataTypeStruct (CppImplDataTypeStruct).
 *          is TLV struct: false
 *
 * \tparam TpPack Transformation properties to be used for serialization.
 * \return True if datatype has static size, false otherwise.
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
constexpr bool IsStaticSize(amsr::someip_protocol::internal::serialization::SizeToken<::TsiHmiData1VccIDT::TsiHmiData1VccIDT>) noexcept {
  // Namespace alias for static serialization code
  namespace internal = amsr::someip_protocol::internal;
  namespace serialization = internal::serialization;

  constexpr bool is_static_size{
  // Check static size status of struct member 'RoadSgnInfoSts' of type /CppImplementationDataTypes/TrfcSgnInfoStsIDT
  serialization::IsStaticSize<
                      TpPack,
                      // Byte-order of primitive datatype (/CppImplementationDataTypes/TrfcSgnInfoStsIDT)
                      typename serialization::Tp<TpPack>::ByteOrder

                      >(serialization::SizeToken<::TrfcSgnInfoStsIDT::TrfcSgnInfoStsIDT>{})  && 
  
  // Check static size status of struct member 'SpdLimFirst' of type /CppImplementationDataTypes/uint8_t
  serialization::IsStaticSize<
                      TpPack,
                      // Byte-order of primitive datatype (/CppImplementationDataTypes/uint8_t)
                      typename serialization::Tp<TpPack>::ByteOrder

                      >(serialization::SizeToken<::uint8IDT::uint8IDT>{})  && 
  
  // Check static size status of struct member 'SpdLimWarnReq' of type /CppImplementationDataTypes/SpdLimWarnReq1IDT
  serialization::IsStaticSize<
                      TpPack,
                      // Byte-order of primitive datatype (/CppImplementationDataTypes/SpdLimWarnReq1IDT)
                      typename serialization::Tp<TpPack>::ByteOrder

                      >(serialization::SizeToken<::SpdLimWarnReq1IDT::SpdLimWarnReq1IDT>{})  && 
  
  // Check static size status of struct member 'TsiRoadMiscSgnInfoSts' of type /CppImplementationDataTypes/OnOff1IDT
  serialization::IsStaticSize<
                      TpPack,
                      // Byte-order of primitive datatype (/CppImplementationDataTypes/OnOff1IDT)
                      typename serialization::Tp<TpPack>::ByteOrder

                      >(serialization::SizeToken<::OnOff1IDT::OnOff1IDT>{})  && 
  
  // Check static size status of struct member 'SpdAlrmActvSts' of type /CppImplementationDataTypes/DY1IDT
  serialization::IsStaticSize<
                      TpPack,
                      // Byte-order of primitive datatype (/CppImplementationDataTypes/DY1IDT)
                      typename serialization::Tp<TpPack>::ByteOrder

                      >(serialization::SizeToken<::DY1IDT::DY1IDT>{})  && 
  
  // Check static size status of struct member 'OffsForSpdWarnSetgSts' of type /CppImplementationDataTypes/OffsForSpdWarnSetgSts1IDT
  serialization::IsStaticSize<
                      TpPack,
                      // Byte-order of primitive datatype (/CppImplementationDataTypes/OffsForSpdWarnSetgSts1IDT)
                      typename serialization::Tp<TpPack>::ByteOrder

                      >(serialization::SizeToken<::OffsForSpdWarnSetgSts1IDT::OffsForSpdWarnSetgSts1IDT>{})  && 
  
  // Check static size status of struct member 'TrfcInfoMiscFirst' of type /CppImplementationDataTypes/TrfcInfoMiscFirstIDT
  serialization::IsStaticSize<
                      TpPack,
                      // Byte-order of primitive datatype (/CppImplementationDataTypes/TrfcInfoMiscFirstIDT)
                      typename serialization::Tp<TpPack>::ByteOrder

                      >(serialization::SizeToken<::TrfcInfoMiscFirstIDT::TrfcInfoMiscFirstIDT>{})  && 
  
  // Check static size status of struct member 'SpdLimCamFirst' of type /CppImplementationDataTypes/OnOff1IDT
  serialization::IsStaticSize<
                      TpPack,
                      // Byte-order of primitive datatype (/CppImplementationDataTypes/OnOff1IDT)
                      typename serialization::Tp<TpPack>::ByteOrder

                      >(serialization::SizeToken<::OnOff1IDT::OnOff1IDT>{})  && 
  
  // Check static size status of struct member 'SpdLimSec' of type /CppImplementationDataTypes/uint8_t
  serialization::IsStaticSize<
                      TpPack,
                      // Byte-order of primitive datatype (/CppImplementationDataTypes/uint8_t)
                      typename serialization::Tp<TpPack>::ByteOrder

                      >(serialization::SizeToken<::uint8IDT::uint8IDT>{})  && 
  
  // Check static size status of struct member 'SpdLimUnit' of type /CppImplementationDataTypes/SpdUnit1IDT
  serialization::IsStaticSize<
                      TpPack,
                      // Byte-order of primitive datatype (/CppImplementationDataTypes/SpdUnit1IDT)
                      typename serialization::Tp<TpPack>::ByteOrder

                      >(serialization::SizeToken<::SpdUnit1IDT::SpdUnit1IDT>{})  && 
  
  // Check static size status of struct member 'CtryForRoadSgnInfo' of type /CppImplementationDataTypes/uint16_t
  serialization::IsStaticSize<
                      TpPack,
                      // Byte-order of primitive datatype (/CppImplementationDataTypes/uint16_t)
                      typename serialization::Tp<TpPack>::ByteOrder

                      >(serialization::SizeToken<::uint16IDT::uint16IDT>{})  && 
  
  // Check static size status of struct member 'SpdLimWarnReqAud' of type /CppImplementationDataTypes/YesNo2VccIDT
  serialization::IsStaticSize<
                      TpPack,
                      // Byte-order of primitive datatype (/CppImplementationDataTypes/YesNo2VccIDT)
                      typename serialization::Tp<TpPack>::ByteOrder

                      >(serialization::SizeToken<::YesNo2VccIDT::YesNo2VccIDT>{})  && 
  
  // Check static size status of struct member 'SpdLimSpplFirst' of type /CppImplementationDataTypes/SpplTrfcSgnInfoIDT
  serialization::IsStaticSize<
                      TpPack,
                      // Byte-order of primitive datatype (/CppImplementationDataTypes/SpplTrfcSgnInfoIDT)
                      typename serialization::Tp<TpPack>::ByteOrder

                      >(serialization::SizeToken<::SpplTrfcSgnInfoIDT::SpplTrfcSgnInfoIDT>{})  && 
  
  // Check static size status of struct member 'SpdLimCoupldFirst' of type /CppImplementationDataTypes/SpdCoupldSgn3IDT
  serialization::IsStaticSize<
                      TpPack,
                      // Byte-order of primitive datatype (/CppImplementationDataTypes/SpdCoupldSgn3IDT)
                      typename serialization::Tp<TpPack>::ByteOrder

                      >(serialization::SizeToken<::SpdCoupldSgn3IDT::SpdCoupldSgn3IDT>{}) 
  };
    return is_static_size;
}

}  // namespace TsiHmiData1VccIDT

#endif  // TRAFFICSIGNINFORMATIONEXE_INCLUDE_AMSR_SOMEIP_PROTOCOL_INTERNAL_DATATYPE_SERIALIZATION_TSIHMIDATA1VCCIDT_SERIALIZER_TSIHMIDATA1VCCIDT_H_

