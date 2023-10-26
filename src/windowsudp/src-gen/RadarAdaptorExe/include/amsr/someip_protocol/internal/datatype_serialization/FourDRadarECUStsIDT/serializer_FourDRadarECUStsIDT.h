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
/**        \file  RadarAdaptorExe/include/amsr/someip_protocol/internal/datatype_serialization/FourDRadarECUStsIDT/serializer_FourDRadarECUStsIDT.h
 *        \brief  SOME/IP protocol serializer implementation for datatype 'FourDRadarECUStsIDT'
 *
 *      \details  /CppImplementationDataTypes/FourDRadarECUStsIDT
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 *  GENERATOR INFORMATION
 *  -------------------------------------------------------------------------------------------------------------------
 *    Generator Name: amsr_someipprotocol
 *         Commit ID: 1b535f531ca8eaaa17edbe97d022bbf394412553
 *********************************************************************************************************************/

#ifndef RADARADAPTOREXE_INCLUDE_AMSR_SOMEIP_PROTOCOL_INTERNAL_DATATYPE_SERIALIZATION_FOURDRADARECUSTSIDT_SERIALIZER_FOURDRADARECUSTSIDT_H_
#define RADARADAPTOREXE_INCLUDE_AMSR_SOMEIP_PROTOCOL_INTERNAL_DATATYPE_SERIALIZATION_FOURDRADARECUSTSIDT_SERIALIZER_FOURDRADARECUSTSIDT_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include "FourDRadarECUStsIDT/impl_type_fourdradarecustsidt.h"
#include "someip-protocol/internal/serialization/ser_forward.h"
#include "someip-protocol/internal/serialization/ser_sizing.h"
#include "someip-protocol/internal/serialization/types.h"
#include "someip-protocol/internal/serialization/writer.h"

namespace FourDRadarECUStsIDT {

/*!
 * \brief Serializer for datatype /CppImplementationDataTypes/FourDRadarECUStsIDT.
 * \details Data type class: DataTypeStruct (CppImplDataTypeStruct).
 *          is TLV struct: false
 *
 * \tparam TpPack Transformation properties to be used for serialization.
 *
 * \param[in, out] writer Reference to byte stream writer.
 * \param[in] data Reference to the data object of type /CppImplementationDataTypes/FourDRadarECUStsIDT to be serialized.
 * \pre The writer holds a memory buffer which is enough to store the serialized data.
 * \context Reactor|App
 * \threadsafe FALSE
 * \reentrant TRUE
 * \vprivate Vector component internal API.
 * \synchronous TRUE
 */
template <typename TpPack>
void SomeIpProtocolSerialize(amsr::someip_protocol::internal::serialization::Writer& writer, ::FourDRadarECUStsIDT::FourDRadarECUStsIDT const &data) noexcept {
  // Namespace alias for static serialization code
  namespace internal = amsr::someip_protocol::internal;
  namespace serialization = internal::serialization;
  // Serialize non-TLV struct
    // Serialize struct member 'FourDChks' of type /CppImplementationDataTypes/uint8_t
     // VCA_SOMEIPPROTOCOL_GEN_SERIALIZE
    serialization::SomeIpProtocolSerialize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/uint8_t)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(writer, data.FourDChks);
    // Serialize struct member 'ECUFailureVoltage' of type /CppImplementationDataTypes/FailrNoFailr1VccIDT
     // VCA_SOMEIPPROTOCOL_GEN_SERIALIZE
    serialization::SomeIpProtocolSerialize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/FailrNoFailr1VccIDT)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(writer, data.ECUFailureVoltage);
    // Serialize struct member 'FourDCntr' of type /CppImplementationDataTypes/uint8_t
     // VCA_SOMEIPPROTOCOL_GEN_SERIALIZE
    serialization::SomeIpProtocolSerialize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/uint8_t)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(writer, data.FourDCntr);
    // Serialize struct member 'CalibrationSts' of type /CppImplementationDataTypes/CalibSts1VccIDT
     // VCA_SOMEIPPROTOCOL_GEN_SERIALIZE
    serialization::SomeIpProtocolSerialize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/CalibSts1VccIDT)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(writer, data.CalibrationSts);
    // Serialize struct member 'OperationMode' of type /CppImplementationDataTypes/OperationMode1IDT
     // VCA_SOMEIPPROTOCOL_GEN_SERIALIZE
    serialization::SomeIpProtocolSerialize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/OperationMode1IDT)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(writer, data.OperationMode);
    // Serialize struct member 'ECUFailurePlausibility' of type /CppImplementationDataTypes/FailrNoFailr1VccIDT
     // VCA_SOMEIPPROTOCOL_GEN_SERIALIZE
    serialization::SomeIpProtocolSerialize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/FailrNoFailr1VccIDT)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(writer, data.ECUFailurePlausibility);
    // Serialize struct member 'ECUFailureTemperature' of type /CppImplementationDataTypes/FailrNoFailr1VccIDT
     // VCA_SOMEIPPROTOCOL_GEN_SERIALIZE
    serialization::SomeIpProtocolSerialize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/FailrNoFailr1VccIDT)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(writer, data.ECUFailureTemperature);
    // Serialize struct member 'ECUFailureVDY' of type /CppImplementationDataTypes/FailrNoFailr1VccIDT
     // VCA_SOMEIPPROTOCOL_GEN_SERIALIZE
    serialization::SomeIpProtocolSerialize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/FailrNoFailr1VccIDT)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(writer, data.ECUFailureVDY);
    // Serialize struct member 'ECUFailureNVM' of type /CppImplementationDataTypes/FailrNoFailr1VccIDT
     // VCA_SOMEIPPROTOCOL_GEN_SERIALIZE
    serialization::SomeIpProtocolSerialize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/FailrNoFailr1VccIDT)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(writer, data.ECUFailureNVM);
    // Serialize struct member 'ECUFailureE2E' of type /CppImplementationDataTypes/FailrNoFailr1VccIDT
     // VCA_SOMEIPPROTOCOL_GEN_SERIALIZE
    serialization::SomeIpProtocolSerialize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/FailrNoFailr1VccIDT)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(writer, data.ECUFailureE2E);
    // Serialize struct member 'ECUFailureUB' of type /CppImplementationDataTypes/FailrNoFailr1VccIDT
     // VCA_SOMEIPPROTOCOL_GEN_SERIALIZE
    serialization::SomeIpProtocolSerialize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/FailrNoFailr1VccIDT)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(writer, data.ECUFailureUB);
    // Serialize struct member 'ECUFailureQF' of type /CppImplementationDataTypes/FailrNoFailr1VccIDT
     // VCA_SOMEIPPROTOCOL_GEN_SERIALIZE
    serialization::SomeIpProtocolSerialize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/FailrNoFailr1VccIDT)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(writer, data.ECUFailureQF);
    // Serialize struct member 'ECUFailureVCS' of type /CppImplementationDataTypes/FailrNoFailr1VccIDT
     // VCA_SOMEIPPROTOCOL_GEN_SERIALIZE
    serialization::SomeIpProtocolSerialize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/FailrNoFailr1VccIDT)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(writer, data.ECUFailureVCS);
}

/*!
 * \brief Calculates the required buffer size for datatype /CppImplementationDataTypes/FourDRadarECUStsIDT.
 * \details Data type class: DataTypeStruct (CppImplDataTypeStruct).
 *          is TLV struct: false
 *
 * \tparam TpPack Transformation properties to be used for serialization.
 * \param[in] data Reference to the data object of type /CppImplementationDataTypes/FourDRadarECUStsIDT.
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
constexpr std::size_t GetRequiredBufferSize(::FourDRadarECUStsIDT::FourDRadarECUStsIDT const &data) noexcept {
  // Namespace alias for static serialization code
  namespace internal = amsr::someip_protocol::internal;
  namespace serialization = internal::serialization;

  // Sum of required size
  std::size_t required_buffer_size{0};

  // Accumulate the static size of struct member 'FourDChks' of type /CppImplementationDataTypes/uint8_t
   // VCA_SOMEIPPROTOCOL_GEN_BUFFERSIZE
  required_buffer_size += serialization::GetRequiredBufferSize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/uint8_t)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(data.FourDChks);
  // Accumulate the static size of struct member 'ECUFailureVoltage' of type /CppImplementationDataTypes/FailrNoFailr1VccIDT
   // VCA_SOMEIPPROTOCOL_GEN_BUFFERSIZE
  required_buffer_size += serialization::GetRequiredBufferSize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/FailrNoFailr1VccIDT)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(data.ECUFailureVoltage);
  // Accumulate the static size of struct member 'FourDCntr' of type /CppImplementationDataTypes/uint8_t
   // VCA_SOMEIPPROTOCOL_GEN_BUFFERSIZE
  required_buffer_size += serialization::GetRequiredBufferSize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/uint8_t)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(data.FourDCntr);
  // Accumulate the static size of struct member 'CalibrationSts' of type /CppImplementationDataTypes/CalibSts1VccIDT
   // VCA_SOMEIPPROTOCOL_GEN_BUFFERSIZE
  required_buffer_size += serialization::GetRequiredBufferSize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/CalibSts1VccIDT)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(data.CalibrationSts);
  // Accumulate the static size of struct member 'OperationMode' of type /CppImplementationDataTypes/OperationMode1IDT
   // VCA_SOMEIPPROTOCOL_GEN_BUFFERSIZE
  required_buffer_size += serialization::GetRequiredBufferSize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/OperationMode1IDT)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(data.OperationMode);
  // Accumulate the static size of struct member 'ECUFailurePlausibility' of type /CppImplementationDataTypes/FailrNoFailr1VccIDT
   // VCA_SOMEIPPROTOCOL_GEN_BUFFERSIZE
  required_buffer_size += serialization::GetRequiredBufferSize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/FailrNoFailr1VccIDT)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(data.ECUFailurePlausibility);
  // Accumulate the static size of struct member 'ECUFailureTemperature' of type /CppImplementationDataTypes/FailrNoFailr1VccIDT
   // VCA_SOMEIPPROTOCOL_GEN_BUFFERSIZE
  required_buffer_size += serialization::GetRequiredBufferSize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/FailrNoFailr1VccIDT)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(data.ECUFailureTemperature);
  // Accumulate the static size of struct member 'ECUFailureVDY' of type /CppImplementationDataTypes/FailrNoFailr1VccIDT
   // VCA_SOMEIPPROTOCOL_GEN_BUFFERSIZE
  required_buffer_size += serialization::GetRequiredBufferSize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/FailrNoFailr1VccIDT)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(data.ECUFailureVDY);
  // Accumulate the static size of struct member 'ECUFailureNVM' of type /CppImplementationDataTypes/FailrNoFailr1VccIDT
   // VCA_SOMEIPPROTOCOL_GEN_BUFFERSIZE
  required_buffer_size += serialization::GetRequiredBufferSize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/FailrNoFailr1VccIDT)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(data.ECUFailureNVM);
  // Accumulate the static size of struct member 'ECUFailureE2E' of type /CppImplementationDataTypes/FailrNoFailr1VccIDT
   // VCA_SOMEIPPROTOCOL_GEN_BUFFERSIZE
  required_buffer_size += serialization::GetRequiredBufferSize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/FailrNoFailr1VccIDT)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(data.ECUFailureE2E);
  // Accumulate the static size of struct member 'ECUFailureUB' of type /CppImplementationDataTypes/FailrNoFailr1VccIDT
   // VCA_SOMEIPPROTOCOL_GEN_BUFFERSIZE
  required_buffer_size += serialization::GetRequiredBufferSize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/FailrNoFailr1VccIDT)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(data.ECUFailureUB);
  // Accumulate the static size of struct member 'ECUFailureQF' of type /CppImplementationDataTypes/FailrNoFailr1VccIDT
   // VCA_SOMEIPPROTOCOL_GEN_BUFFERSIZE
  required_buffer_size += serialization::GetRequiredBufferSize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/FailrNoFailr1VccIDT)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(data.ECUFailureQF);
  // Accumulate the static size of struct member 'ECUFailureVCS' of type /CppImplementationDataTypes/FailrNoFailr1VccIDT
   // VCA_SOMEIPPROTOCOL_GEN_BUFFERSIZE
  required_buffer_size += serialization::GetRequiredBufferSize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/FailrNoFailr1VccIDT)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(data.ECUFailureVCS);

  return required_buffer_size;
}

/*!
 * \brief Calculates the maximum buffer size for datatype /CppImplementationDataTypes/FourDRadarECUStsIDT.
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
template <typename T, typename TpPack, std::enable_if_t<std::is_same<T, ::FourDRadarECUStsIDT::FourDRadarECUStsIDT>::value, bool> = true>
constexpr amsr::someip_protocol::internal::serialization::InfSizeT GetMaximumBufferSize() noexcept {
  namespace internal = amsr::someip_protocol::internal;
  // Namespace alias for static serialization code
  namespace serialization = internal::serialization;
  serialization::InfSizeT size{0u};

  // Accumulate the static size of struct member 'FourDChks' of type /CppImplementationDataTypes/uint8_t
   // VCA_SOMEIPPROTOCOL_GEN_BUFFERSIZE
    size +=serialization::GetMaximumBufferSize<
                        decltype(T{}.FourDChks),
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/uint8_t)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >();
  // Accumulate the static size of struct member 'ECUFailureVoltage' of type /CppImplementationDataTypes/FailrNoFailr1VccIDT
   // VCA_SOMEIPPROTOCOL_GEN_BUFFERSIZE
    size +=serialization::GetMaximumBufferSize<
                        decltype(T{}.ECUFailureVoltage),
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/FailrNoFailr1VccIDT)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >();
  // Accumulate the static size of struct member 'FourDCntr' of type /CppImplementationDataTypes/uint8_t
   // VCA_SOMEIPPROTOCOL_GEN_BUFFERSIZE
    size +=serialization::GetMaximumBufferSize<
                        decltype(T{}.FourDCntr),
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/uint8_t)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >();
  // Accumulate the static size of struct member 'CalibrationSts' of type /CppImplementationDataTypes/CalibSts1VccIDT
   // VCA_SOMEIPPROTOCOL_GEN_BUFFERSIZE
    size +=serialization::GetMaximumBufferSize<
                        decltype(T{}.CalibrationSts),
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/CalibSts1VccIDT)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >();
  // Accumulate the static size of struct member 'OperationMode' of type /CppImplementationDataTypes/OperationMode1IDT
   // VCA_SOMEIPPROTOCOL_GEN_BUFFERSIZE
    size +=serialization::GetMaximumBufferSize<
                        decltype(T{}.OperationMode),
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/OperationMode1IDT)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >();
  // Accumulate the static size of struct member 'ECUFailurePlausibility' of type /CppImplementationDataTypes/FailrNoFailr1VccIDT
   // VCA_SOMEIPPROTOCOL_GEN_BUFFERSIZE
    size +=serialization::GetMaximumBufferSize<
                        decltype(T{}.ECUFailurePlausibility),
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/FailrNoFailr1VccIDT)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >();
  // Accumulate the static size of struct member 'ECUFailureTemperature' of type /CppImplementationDataTypes/FailrNoFailr1VccIDT
   // VCA_SOMEIPPROTOCOL_GEN_BUFFERSIZE
    size +=serialization::GetMaximumBufferSize<
                        decltype(T{}.ECUFailureTemperature),
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/FailrNoFailr1VccIDT)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >();
  // Accumulate the static size of struct member 'ECUFailureVDY' of type /CppImplementationDataTypes/FailrNoFailr1VccIDT
   // VCA_SOMEIPPROTOCOL_GEN_BUFFERSIZE
    size +=serialization::GetMaximumBufferSize<
                        decltype(T{}.ECUFailureVDY),
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/FailrNoFailr1VccIDT)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >();
  // Accumulate the static size of struct member 'ECUFailureNVM' of type /CppImplementationDataTypes/FailrNoFailr1VccIDT
   // VCA_SOMEIPPROTOCOL_GEN_BUFFERSIZE
    size +=serialization::GetMaximumBufferSize<
                        decltype(T{}.ECUFailureNVM),
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/FailrNoFailr1VccIDT)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >();
  // Accumulate the static size of struct member 'ECUFailureE2E' of type /CppImplementationDataTypes/FailrNoFailr1VccIDT
   // VCA_SOMEIPPROTOCOL_GEN_BUFFERSIZE
    size +=serialization::GetMaximumBufferSize<
                        decltype(T{}.ECUFailureE2E),
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/FailrNoFailr1VccIDT)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >();
  // Accumulate the static size of struct member 'ECUFailureUB' of type /CppImplementationDataTypes/FailrNoFailr1VccIDT
   // VCA_SOMEIPPROTOCOL_GEN_BUFFERSIZE
    size +=serialization::GetMaximumBufferSize<
                        decltype(T{}.ECUFailureUB),
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/FailrNoFailr1VccIDT)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >();
  // Accumulate the static size of struct member 'ECUFailureQF' of type /CppImplementationDataTypes/FailrNoFailr1VccIDT
   // VCA_SOMEIPPROTOCOL_GEN_BUFFERSIZE
    size +=serialization::GetMaximumBufferSize<
                        decltype(T{}.ECUFailureQF),
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/FailrNoFailr1VccIDT)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >();
  // Accumulate the static size of struct member 'ECUFailureVCS' of type /CppImplementationDataTypes/FailrNoFailr1VccIDT
   // VCA_SOMEIPPROTOCOL_GEN_BUFFERSIZE
    size +=serialization::GetMaximumBufferSize<
                        decltype(T{}.ECUFailureVCS),
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/FailrNoFailr1VccIDT)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >();

  return size;
}

/*!
 * \brief Calculates the maximum buffer size for datatype /CppImplementationDataTypes/FourDRadarECUStsIDT. For ADL.
 * \details Data type class: DataTypeStruct (CppImplDataTypeStruct).
 *          is TLV struct: false
 *
 * \tparam TpPack Transformation properties to be used for serialization.
 * \param[in] data Reference to the data object of type /CppImplementationDataTypes/FourDRadarECUStsIDT.
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
constexpr amsr::someip_protocol::internal::serialization::InfSizeT GetMaximumBufferSize(::FourDRadarECUStsIDT::FourDRadarECUStsIDT const&) noexcept {
  return GetMaximumBufferSize<::FourDRadarECUStsIDT::FourDRadarECUStsIDT, TpPack>();
}

/*!
 * \brief Checks if datatype /CppImplementationDataTypes/FourDRadarECUStsIDT is of static size.
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
constexpr bool IsStaticSize(amsr::someip_protocol::internal::serialization::SizeToken<::FourDRadarECUStsIDT::FourDRadarECUStsIDT>) noexcept {
  // Namespace alias for static serialization code
  namespace internal = amsr::someip_protocol::internal;
  namespace serialization = internal::serialization;

  constexpr bool is_static_size{
  // Check static size status of struct member 'FourDChks' of type /CppImplementationDataTypes/uint8_t
  serialization::IsStaticSize<
                      TpPack,
                      // Byte-order of primitive datatype (/CppImplementationDataTypes/uint8_t)
                      typename serialization::Tp<TpPack>::ByteOrder

                      >(serialization::SizeToken<::uint8IDT::uint8IDT>{})  && 
  
  // Check static size status of struct member 'ECUFailureVoltage' of type /CppImplementationDataTypes/FailrNoFailr1VccIDT
  serialization::IsStaticSize<
                      TpPack,
                      // Byte-order of primitive datatype (/CppImplementationDataTypes/FailrNoFailr1VccIDT)
                      typename serialization::Tp<TpPack>::ByteOrder

                      >(serialization::SizeToken<::FailrNoFailr1VccIDT::FailrNoFailr1VccIDT>{})  && 
  
  // Check static size status of struct member 'FourDCntr' of type /CppImplementationDataTypes/uint8_t
  serialization::IsStaticSize<
                      TpPack,
                      // Byte-order of primitive datatype (/CppImplementationDataTypes/uint8_t)
                      typename serialization::Tp<TpPack>::ByteOrder

                      >(serialization::SizeToken<::uint8IDT::uint8IDT>{})  && 
  
  // Check static size status of struct member 'CalibrationSts' of type /CppImplementationDataTypes/CalibSts1VccIDT
  serialization::IsStaticSize<
                      TpPack,
                      // Byte-order of primitive datatype (/CppImplementationDataTypes/CalibSts1VccIDT)
                      typename serialization::Tp<TpPack>::ByteOrder

                      >(serialization::SizeToken<::CalibSts1VccIDT::CalibSts1VccIDT>{})  && 
  
  // Check static size status of struct member 'OperationMode' of type /CppImplementationDataTypes/OperationMode1IDT
  serialization::IsStaticSize<
                      TpPack,
                      // Byte-order of primitive datatype (/CppImplementationDataTypes/OperationMode1IDT)
                      typename serialization::Tp<TpPack>::ByteOrder

                      >(serialization::SizeToken<::OperationMode1IDT::OperationMode1IDT>{})  && 
  
  // Check static size status of struct member 'ECUFailurePlausibility' of type /CppImplementationDataTypes/FailrNoFailr1VccIDT
  serialization::IsStaticSize<
                      TpPack,
                      // Byte-order of primitive datatype (/CppImplementationDataTypes/FailrNoFailr1VccIDT)
                      typename serialization::Tp<TpPack>::ByteOrder

                      >(serialization::SizeToken<::FailrNoFailr1VccIDT::FailrNoFailr1VccIDT>{})  && 
  
  // Check static size status of struct member 'ECUFailureTemperature' of type /CppImplementationDataTypes/FailrNoFailr1VccIDT
  serialization::IsStaticSize<
                      TpPack,
                      // Byte-order of primitive datatype (/CppImplementationDataTypes/FailrNoFailr1VccIDT)
                      typename serialization::Tp<TpPack>::ByteOrder

                      >(serialization::SizeToken<::FailrNoFailr1VccIDT::FailrNoFailr1VccIDT>{})  && 
  
  // Check static size status of struct member 'ECUFailureVDY' of type /CppImplementationDataTypes/FailrNoFailr1VccIDT
  serialization::IsStaticSize<
                      TpPack,
                      // Byte-order of primitive datatype (/CppImplementationDataTypes/FailrNoFailr1VccIDT)
                      typename serialization::Tp<TpPack>::ByteOrder

                      >(serialization::SizeToken<::FailrNoFailr1VccIDT::FailrNoFailr1VccIDT>{})  && 
  
  // Check static size status of struct member 'ECUFailureNVM' of type /CppImplementationDataTypes/FailrNoFailr1VccIDT
  serialization::IsStaticSize<
                      TpPack,
                      // Byte-order of primitive datatype (/CppImplementationDataTypes/FailrNoFailr1VccIDT)
                      typename serialization::Tp<TpPack>::ByteOrder

                      >(serialization::SizeToken<::FailrNoFailr1VccIDT::FailrNoFailr1VccIDT>{})  && 
  
  // Check static size status of struct member 'ECUFailureE2E' of type /CppImplementationDataTypes/FailrNoFailr1VccIDT
  serialization::IsStaticSize<
                      TpPack,
                      // Byte-order of primitive datatype (/CppImplementationDataTypes/FailrNoFailr1VccIDT)
                      typename serialization::Tp<TpPack>::ByteOrder

                      >(serialization::SizeToken<::FailrNoFailr1VccIDT::FailrNoFailr1VccIDT>{})  && 
  
  // Check static size status of struct member 'ECUFailureUB' of type /CppImplementationDataTypes/FailrNoFailr1VccIDT
  serialization::IsStaticSize<
                      TpPack,
                      // Byte-order of primitive datatype (/CppImplementationDataTypes/FailrNoFailr1VccIDT)
                      typename serialization::Tp<TpPack>::ByteOrder

                      >(serialization::SizeToken<::FailrNoFailr1VccIDT::FailrNoFailr1VccIDT>{})  && 
  
  // Check static size status of struct member 'ECUFailureQF' of type /CppImplementationDataTypes/FailrNoFailr1VccIDT
  serialization::IsStaticSize<
                      TpPack,
                      // Byte-order of primitive datatype (/CppImplementationDataTypes/FailrNoFailr1VccIDT)
                      typename serialization::Tp<TpPack>::ByteOrder

                      >(serialization::SizeToken<::FailrNoFailr1VccIDT::FailrNoFailr1VccIDT>{})  && 
  
  // Check static size status of struct member 'ECUFailureVCS' of type /CppImplementationDataTypes/FailrNoFailr1VccIDT
  serialization::IsStaticSize<
                      TpPack,
                      // Byte-order of primitive datatype (/CppImplementationDataTypes/FailrNoFailr1VccIDT)
                      typename serialization::Tp<TpPack>::ByteOrder

                      >(serialization::SizeToken<::FailrNoFailr1VccIDT::FailrNoFailr1VccIDT>{}) 
  };
    return is_static_size;
}

}  // namespace FourDRadarECUStsIDT

#endif  // RADARADAPTOREXE_INCLUDE_AMSR_SOMEIP_PROTOCOL_INTERNAL_DATATYPE_SERIALIZATION_FOURDRADARECUSTSIDT_SERIALIZER_FOURDRADARECUSTSIDT_H_

