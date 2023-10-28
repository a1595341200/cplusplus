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
/**        \file  PerceptionSideExe/include/amsr/someip_protocol/internal/datatype_serialization/FLCamSts1VccIDT/serializer_FLCamSts1VccIDT.h
 *        \brief  SOME/IP protocol serializer implementation for datatype 'FLCamSts1VccIDT'
 *
 *      \details  /CppImplementationDataTypes/FLCamSts1VccIDT
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 *  GENERATOR INFORMATION
 *  -------------------------------------------------------------------------------------------------------------------
 *    Generator Name: amsr_someipprotocol
 *         Commit ID: 1b535f531ca8eaaa17edbe97d022bbf394412553
 *********************************************************************************************************************/

#ifndef PERCEPTIONSIDEEXE_INCLUDE_AMSR_SOMEIP_PROTOCOL_INTERNAL_DATATYPE_SERIALIZATION_FLCAMSTS1VCCIDT_SERIALIZER_FLCAMSTS1VCCIDT_H_
#define PERCEPTIONSIDEEXE_INCLUDE_AMSR_SOMEIP_PROTOCOL_INTERNAL_DATATYPE_SERIALIZATION_FLCAMSTS1VCCIDT_SERIALIZER_FLCAMSTS1VCCIDT_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include "FLCamSts1VccIDT/impl_type_flcamsts1vccidt.h"
#include "someip-protocol/internal/serialization/ser_forward.h"
#include "someip-protocol/internal/serialization/ser_sizing.h"
#include "someip-protocol/internal/serialization/types.h"
#include "someip-protocol/internal/serialization/writer.h"

namespace FLCamSts1VccIDT {

/*!
 * \brief Serializer for datatype /CppImplementationDataTypes/FLCamSts1VccIDT.
 * \details Data type class: DataTypeStruct (CppImplDataTypeStruct).
 *          is TLV struct: false
 *
 * \tparam TpPack Transformation properties to be used for serialization.
 *
 * \param[in, out] writer Reference to byte stream writer.
 * \param[in] data Reference to the data object of type /CppImplementationDataTypes/FLCamSts1VccIDT to be serialized.
 * \pre The writer holds a memory buffer which is enough to store the serialized data.
 * \context Reactor|App
 * \threadsafe FALSE
 * \reentrant TRUE
 * \vprivate Vector component internal API.
 * \synchronous TRUE
 */
template <typename TpPack>
void SomeIpProtocolSerialize(amsr::someip_protocol::internal::serialization::Writer& writer, ::FLCamSts1VccIDT::FLCamSts1VccIDT const &data) noexcept {
  // Namespace alias for static serialization code
  namespace internal = amsr::someip_protocol::internal;
  namespace serialization = internal::serialization;
  // Serialize non-TLV struct
    // Serialize struct member 'Blockage' of type /CppImplementationDataTypes/CamBlck1IDT
     // VCA_SOMEIPPROTOCOL_GEN_SERIALIZE
    serialization::SomeIpProtocolSerialize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/CamBlck1IDT)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(writer, data.Blockage);
    // Serialize struct member 'Condensation' of type /CppImplementationDataTypes/CamBlck1IDT
     // VCA_SOMEIPPROTOCOL_GEN_SERIALIZE
    serialization::SomeIpProtocolSerialize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/CamBlck1IDT)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(writer, data.Condensation);
    // Serialize struct member 'StaticCalibration' of type /CppImplementationDataTypes/StaticCaliSts1IDT
     // VCA_SOMEIPPROTOCOL_GEN_SERIALIZE
    serialization::SomeIpProtocolSerialize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/StaticCaliSts1IDT)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(writer, data.StaticCalibration);
    // Serialize struct member 'DynCalibration' of type /CppImplementationDataTypes/DynCaliSts1IDT
     // VCA_SOMEIPPROTOCOL_GEN_SERIALIZE
    serialization::SomeIpProtocolSerialize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/DynCaliSts1IDT)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(writer, data.DynCalibration);
    // Serialize struct member 'Fault' of type /CppImplementationDataTypes/uint8_t
     // VCA_SOMEIPPROTOCOL_GEN_SERIALIZE
    serialization::SomeIpProtocolSerialize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/uint8_t)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(writer, data.Fault);
    // Serialize struct member 'CamStsChks' of type /CppImplementationDataTypes/uint8_t
     // VCA_SOMEIPPROTOCOL_GEN_SERIALIZE
    serialization::SomeIpProtocolSerialize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/uint8_t)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(writer, data.CamStsChks);
    // Serialize struct member 'CamStsCntr' of type /CppImplementationDataTypes/uint8_t
     // VCA_SOMEIPPROTOCOL_GEN_SERIALIZE
    serialization::SomeIpProtocolSerialize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/uint8_t)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(writer, data.CamStsCntr);
}

/*!
 * \brief Calculates the required buffer size for datatype /CppImplementationDataTypes/FLCamSts1VccIDT.
 * \details Data type class: DataTypeStruct (CppImplDataTypeStruct).
 *          is TLV struct: false
 *
 * \tparam TpPack Transformation properties to be used for serialization.
 * \param[in] data Reference to the data object of type /CppImplementationDataTypes/FLCamSts1VccIDT.
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
constexpr std::size_t GetRequiredBufferSize(::FLCamSts1VccIDT::FLCamSts1VccIDT const &data) noexcept {
  // Namespace alias for static serialization code
  namespace internal = amsr::someip_protocol::internal;
  namespace serialization = internal::serialization;

  // Sum of required size
  std::size_t required_buffer_size{0};

  // Accumulate the static size of struct member 'Blockage' of type /CppImplementationDataTypes/CamBlck1IDT
   // VCA_SOMEIPPROTOCOL_GEN_BUFFERSIZE
  required_buffer_size += serialization::GetRequiredBufferSize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/CamBlck1IDT)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(data.Blockage);
  // Accumulate the static size of struct member 'Condensation' of type /CppImplementationDataTypes/CamBlck1IDT
   // VCA_SOMEIPPROTOCOL_GEN_BUFFERSIZE
  required_buffer_size += serialization::GetRequiredBufferSize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/CamBlck1IDT)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(data.Condensation);
  // Accumulate the static size of struct member 'StaticCalibration' of type /CppImplementationDataTypes/StaticCaliSts1IDT
   // VCA_SOMEIPPROTOCOL_GEN_BUFFERSIZE
  required_buffer_size += serialization::GetRequiredBufferSize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/StaticCaliSts1IDT)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(data.StaticCalibration);
  // Accumulate the static size of struct member 'DynCalibration' of type /CppImplementationDataTypes/DynCaliSts1IDT
   // VCA_SOMEIPPROTOCOL_GEN_BUFFERSIZE
  required_buffer_size += serialization::GetRequiredBufferSize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/DynCaliSts1IDT)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(data.DynCalibration);
  // Accumulate the static size of struct member 'Fault' of type /CppImplementationDataTypes/uint8_t
   // VCA_SOMEIPPROTOCOL_GEN_BUFFERSIZE
  required_buffer_size += serialization::GetRequiredBufferSize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/uint8_t)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(data.Fault);
  // Accumulate the static size of struct member 'CamStsChks' of type /CppImplementationDataTypes/uint8_t
   // VCA_SOMEIPPROTOCOL_GEN_BUFFERSIZE
  required_buffer_size += serialization::GetRequiredBufferSize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/uint8_t)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(data.CamStsChks);
  // Accumulate the static size of struct member 'CamStsCntr' of type /CppImplementationDataTypes/uint8_t
   // VCA_SOMEIPPROTOCOL_GEN_BUFFERSIZE
  required_buffer_size += serialization::GetRequiredBufferSize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/uint8_t)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(data.CamStsCntr);

  return required_buffer_size;
}

/*!
 * \brief Calculates the maximum buffer size for datatype /CppImplementationDataTypes/FLCamSts1VccIDT.
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
template <typename T, typename TpPack, std::enable_if_t<std::is_same<T, ::FLCamSts1VccIDT::FLCamSts1VccIDT>::value, bool> = true>
constexpr amsr::someip_protocol::internal::serialization::InfSizeT GetMaximumBufferSize() noexcept {
  namespace internal = amsr::someip_protocol::internal;
  // Namespace alias for static serialization code
  namespace serialization = internal::serialization;
  serialization::InfSizeT size{0u};

  // Accumulate the static size of struct member 'Blockage' of type /CppImplementationDataTypes/CamBlck1IDT
   // VCA_SOMEIPPROTOCOL_GEN_BUFFERSIZE
    size +=serialization::GetMaximumBufferSize<
                        decltype(T{}.Blockage),
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/CamBlck1IDT)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >();
  // Accumulate the static size of struct member 'Condensation' of type /CppImplementationDataTypes/CamBlck1IDT
   // VCA_SOMEIPPROTOCOL_GEN_BUFFERSIZE
    size +=serialization::GetMaximumBufferSize<
                        decltype(T{}.Condensation),
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/CamBlck1IDT)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >();
  // Accumulate the static size of struct member 'StaticCalibration' of type /CppImplementationDataTypes/StaticCaliSts1IDT
   // VCA_SOMEIPPROTOCOL_GEN_BUFFERSIZE
    size +=serialization::GetMaximumBufferSize<
                        decltype(T{}.StaticCalibration),
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/StaticCaliSts1IDT)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >();
  // Accumulate the static size of struct member 'DynCalibration' of type /CppImplementationDataTypes/DynCaliSts1IDT
   // VCA_SOMEIPPROTOCOL_GEN_BUFFERSIZE
    size +=serialization::GetMaximumBufferSize<
                        decltype(T{}.DynCalibration),
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/DynCaliSts1IDT)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >();
  // Accumulate the static size of struct member 'Fault' of type /CppImplementationDataTypes/uint8_t
   // VCA_SOMEIPPROTOCOL_GEN_BUFFERSIZE
    size +=serialization::GetMaximumBufferSize<
                        decltype(T{}.Fault),
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/uint8_t)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >();
  // Accumulate the static size of struct member 'CamStsChks' of type /CppImplementationDataTypes/uint8_t
   // VCA_SOMEIPPROTOCOL_GEN_BUFFERSIZE
    size +=serialization::GetMaximumBufferSize<
                        decltype(T{}.CamStsChks),
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/uint8_t)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >();
  // Accumulate the static size of struct member 'CamStsCntr' of type /CppImplementationDataTypes/uint8_t
   // VCA_SOMEIPPROTOCOL_GEN_BUFFERSIZE
    size +=serialization::GetMaximumBufferSize<
                        decltype(T{}.CamStsCntr),
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/uint8_t)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >();

  return size;
}

/*!
 * \brief Calculates the maximum buffer size for datatype /CppImplementationDataTypes/FLCamSts1VccIDT. For ADL.
 * \details Data type class: DataTypeStruct (CppImplDataTypeStruct).
 *          is TLV struct: false
 *
 * \tparam TpPack Transformation properties to be used for serialization.
 * \param[in] data Reference to the data object of type /CppImplementationDataTypes/FLCamSts1VccIDT.
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
constexpr amsr::someip_protocol::internal::serialization::InfSizeT GetMaximumBufferSize(::FLCamSts1VccIDT::FLCamSts1VccIDT const&) noexcept {
  return GetMaximumBufferSize<::FLCamSts1VccIDT::FLCamSts1VccIDT, TpPack>();
}

/*!
 * \brief Checks if datatype /CppImplementationDataTypes/FLCamSts1VccIDT is of static size.
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
constexpr bool IsStaticSize(amsr::someip_protocol::internal::serialization::SizeToken<::FLCamSts1VccIDT::FLCamSts1VccIDT>) noexcept {
  // Namespace alias for static serialization code
  namespace internal = amsr::someip_protocol::internal;
  namespace serialization = internal::serialization;

  constexpr bool is_static_size{
  // Check static size status of struct member 'Blockage' of type /CppImplementationDataTypes/CamBlck1IDT
  serialization::IsStaticSize<
                      TpPack,
                      // Byte-order of primitive datatype (/CppImplementationDataTypes/CamBlck1IDT)
                      typename serialization::Tp<TpPack>::ByteOrder

                      >(serialization::SizeToken<::CamBlck1IDT::CamBlck1IDT>{})  && 
  
  // Check static size status of struct member 'Condensation' of type /CppImplementationDataTypes/CamBlck1IDT
  serialization::IsStaticSize<
                      TpPack,
                      // Byte-order of primitive datatype (/CppImplementationDataTypes/CamBlck1IDT)
                      typename serialization::Tp<TpPack>::ByteOrder

                      >(serialization::SizeToken<::CamBlck1IDT::CamBlck1IDT>{})  && 
  
  // Check static size status of struct member 'StaticCalibration' of type /CppImplementationDataTypes/StaticCaliSts1IDT
  serialization::IsStaticSize<
                      TpPack,
                      // Byte-order of primitive datatype (/CppImplementationDataTypes/StaticCaliSts1IDT)
                      typename serialization::Tp<TpPack>::ByteOrder

                      >(serialization::SizeToken<::StaticCaliSts1IDT::StaticCaliSts1IDT>{})  && 
  
  // Check static size status of struct member 'DynCalibration' of type /CppImplementationDataTypes/DynCaliSts1IDT
  serialization::IsStaticSize<
                      TpPack,
                      // Byte-order of primitive datatype (/CppImplementationDataTypes/DynCaliSts1IDT)
                      typename serialization::Tp<TpPack>::ByteOrder

                      >(serialization::SizeToken<::DynCaliSts1IDT::DynCaliSts1IDT>{})  && 
  
  // Check static size status of struct member 'Fault' of type /CppImplementationDataTypes/uint8_t
  serialization::IsStaticSize<
                      TpPack,
                      // Byte-order of primitive datatype (/CppImplementationDataTypes/uint8_t)
                      typename serialization::Tp<TpPack>::ByteOrder

                      >(serialization::SizeToken<::uint8IDT::uint8IDT>{})  && 
  
  // Check static size status of struct member 'CamStsChks' of type /CppImplementationDataTypes/uint8_t
  serialization::IsStaticSize<
                      TpPack,
                      // Byte-order of primitive datatype (/CppImplementationDataTypes/uint8_t)
                      typename serialization::Tp<TpPack>::ByteOrder

                      >(serialization::SizeToken<::uint8IDT::uint8IDT>{})  && 
  
  // Check static size status of struct member 'CamStsCntr' of type /CppImplementationDataTypes/uint8_t
  serialization::IsStaticSize<
                      TpPack,
                      // Byte-order of primitive datatype (/CppImplementationDataTypes/uint8_t)
                      typename serialization::Tp<TpPack>::ByteOrder

                      >(serialization::SizeToken<::uint8IDT::uint8IDT>{}) 
  };
    return is_static_size;
}

}  // namespace FLCamSts1VccIDT

#endif  // PERCEPTIONSIDEEXE_INCLUDE_AMSR_SOMEIP_PROTOCOL_INTERNAL_DATATYPE_SERIALIZATION_FLCAMSTS1VCCIDT_SERIALIZER_FLCAMSTS1VCCIDT_H_

