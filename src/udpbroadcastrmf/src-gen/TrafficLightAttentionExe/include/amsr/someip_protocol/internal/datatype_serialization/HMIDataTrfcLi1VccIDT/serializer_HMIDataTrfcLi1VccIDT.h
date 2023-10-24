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
/**        \file  TrafficLightAttentionExe/include/amsr/someip_protocol/internal/datatype_serialization/HMIDataTrfcLi1VccIDT/serializer_HMIDataTrfcLi1VccIDT.h
 *        \brief  SOME/IP protocol serializer implementation for datatype 'HMIDataTrfcLi1VccIDT'
 *
 *      \details  /CppImplementationDataTypes/HMIDataTrfcLi1VccIDT
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 *  GENERATOR INFORMATION
 *  -------------------------------------------------------------------------------------------------------------------
 *    Generator Name: amsr_someipprotocol
 *         Commit ID: 1b535f531ca8eaaa17edbe97d022bbf394412553
 *********************************************************************************************************************/

#ifndef TRAFFICLIGHTATTENTIONEXE_INCLUDE_AMSR_SOMEIP_PROTOCOL_INTERNAL_DATATYPE_SERIALIZATION_HMIDATATRFCLI1VCCIDT_SERIALIZER_HMIDATATRFCLI1VCCIDT_H_
#define TRAFFICLIGHTATTENTIONEXE_INCLUDE_AMSR_SOMEIP_PROTOCOL_INTERNAL_DATATYPE_SERIALIZATION_HMIDATATRFCLI1VCCIDT_SERIALIZER_HMIDATATRFCLI1VCCIDT_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include "HMIDataTrfcLi1VccIDT/impl_type_hmidatatrfcli1vccidt.h"
#include "someip-protocol/internal/serialization/ser_forward.h"
#include "someip-protocol/internal/serialization/ser_sizing.h"
#include "someip-protocol/internal/serialization/types.h"
#include "someip-protocol/internal/serialization/writer.h"

namespace HMIDataTrfcLi1VccIDT {

/*!
 * \brief Serializer for datatype /CppImplementationDataTypes/HMIDataTrfcLi1VccIDT.
 * \details Data type class: DataTypeStruct (CppImplDataTypeStruct).
 *          is TLV struct: false
 *
 * \tparam TpPack Transformation properties to be used for serialization.
 *
 * \param[in, out] writer Reference to byte stream writer.
 * \param[in] data Reference to the data object of type /CppImplementationDataTypes/HMIDataTrfcLi1VccIDT to be serialized.
 * \pre The writer holds a memory buffer which is enough to store the serialized data.
 * \context Reactor|App
 * \threadsafe FALSE
 * \reentrant TRUE
 * \vprivate Vector component internal API.
 * \synchronous TRUE
 */
template <typename TpPack>
void SomeIpProtocolSerialize(amsr::someip_protocol::internal::serialization::Writer& writer, ::HMIDataTrfcLi1VccIDT::HMIDataTrfcLi1VccIDT const &data) noexcept {
  // Namespace alias for static serialization code
  namespace internal = amsr::someip_protocol::internal;
  namespace serialization = internal::serialization;
  // Serialize non-TLV struct
    // Serialize struct member 'TrfcliInfo' of type /CppImplementationDataTypes/TrfcLiInfo1IDT
     // VCA_SOMEIPPROTOCOL_GEN_SERIALIZE
    serialization::SomeIpProtocolSerialize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/TrfcLiInfo1IDT)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(writer, data.TrfcliInfo);
    // Serialize struct member 'UturnLight' of type /CppImplementationDataTypes/ColorSts1IDT
     // VCA_SOMEIPPROTOCOL_GEN_SERIALIZE
    serialization::SomeIpProtocolSerialize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/ColorSts1IDT)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(writer, data.UturnLight);
    // Serialize struct member 'TrfcliInfoLeft' of type /CppImplementationDataTypes/TrfcliInfoLeft1IDT
     // VCA_SOMEIPPROTOCOL_GEN_SERIALIZE
    serialization::SomeIpProtocolSerialize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/TrfcliInfoLeft1IDT)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(writer, data.TrfcliInfoLeft);
    // Serialize struct member 'TrfcliInfoRight' of type /CppImplementationDataTypes/TrfcliInfoRight1IDT
     // VCA_SOMEIPPROTOCOL_GEN_SERIALIZE
    serialization::SomeIpProtocolSerialize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/TrfcliInfoRight1IDT)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(writer, data.TrfcliInfoRight);
    // Serialize struct member 'TrfcLiWarnTypSts' of type /CppImplementationDataTypes/OnOff1IDT
     // VCA_SOMEIPPROTOCOL_GEN_SERIALIZE
    serialization::SomeIpProtocolSerialize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/OnOff1IDT)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(writer, data.TrfcLiWarnTypSts);
    // Serialize struct member 'TrfcLiSts' of type /CppImplementationDataTypes/FctSts2VccIDT
     // VCA_SOMEIPPROTOCOL_GEN_SERIALIZE
    serialization::SomeIpProtocolSerialize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/FctSts2VccIDT)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(writer, data.TrfcLiSts);
    // Serialize struct member 'TrfcLiChg' of type /CppImplementationDataTypes/TrfcLiChgIDT
     // VCA_SOMEIPPROTOCOL_GEN_SERIALIZE
    serialization::SomeIpProtocolSerialize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/TrfcLiChgIDT)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(writer, data.TrfcLiChg);
}

/*!
 * \brief Calculates the required buffer size for datatype /CppImplementationDataTypes/HMIDataTrfcLi1VccIDT.
 * \details Data type class: DataTypeStruct (CppImplDataTypeStruct).
 *          is TLV struct: false
 *
 * \tparam TpPack Transformation properties to be used for serialization.
 * \param[in] data Reference to the data object of type /CppImplementationDataTypes/HMIDataTrfcLi1VccIDT.
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
constexpr std::size_t GetRequiredBufferSize(::HMIDataTrfcLi1VccIDT::HMIDataTrfcLi1VccIDT const &data) noexcept {
  // Namespace alias for static serialization code
  namespace internal = amsr::someip_protocol::internal;
  namespace serialization = internal::serialization;

  // Sum of required size
  std::size_t required_buffer_size{0};

  // Accumulate the static size of struct member 'TrfcliInfo' of type /CppImplementationDataTypes/TrfcLiInfo1IDT
   // VCA_SOMEIPPROTOCOL_GEN_BUFFERSIZE
  required_buffer_size += serialization::GetRequiredBufferSize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/TrfcLiInfo1IDT)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(data.TrfcliInfo);
  // Accumulate the static size of struct member 'UturnLight' of type /CppImplementationDataTypes/ColorSts1IDT
   // VCA_SOMEIPPROTOCOL_GEN_BUFFERSIZE
  required_buffer_size += serialization::GetRequiredBufferSize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/ColorSts1IDT)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(data.UturnLight);
  // Accumulate the static size of struct member 'TrfcliInfoLeft' of type /CppImplementationDataTypes/TrfcliInfoLeft1IDT
   // VCA_SOMEIPPROTOCOL_GEN_BUFFERSIZE
  required_buffer_size += serialization::GetRequiredBufferSize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/TrfcliInfoLeft1IDT)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(data.TrfcliInfoLeft);
  // Accumulate the static size of struct member 'TrfcliInfoRight' of type /CppImplementationDataTypes/TrfcliInfoRight1IDT
   // VCA_SOMEIPPROTOCOL_GEN_BUFFERSIZE
  required_buffer_size += serialization::GetRequiredBufferSize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/TrfcliInfoRight1IDT)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(data.TrfcliInfoRight);
  // Accumulate the static size of struct member 'TrfcLiWarnTypSts' of type /CppImplementationDataTypes/OnOff1IDT
   // VCA_SOMEIPPROTOCOL_GEN_BUFFERSIZE
  required_buffer_size += serialization::GetRequiredBufferSize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/OnOff1IDT)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(data.TrfcLiWarnTypSts);
  // Accumulate the static size of struct member 'TrfcLiSts' of type /CppImplementationDataTypes/FctSts2VccIDT
   // VCA_SOMEIPPROTOCOL_GEN_BUFFERSIZE
  required_buffer_size += serialization::GetRequiredBufferSize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/FctSts2VccIDT)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(data.TrfcLiSts);
  // Accumulate the static size of struct member 'TrfcLiChg' of type /CppImplementationDataTypes/TrfcLiChgIDT
   // VCA_SOMEIPPROTOCOL_GEN_BUFFERSIZE
  required_buffer_size += serialization::GetRequiredBufferSize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/TrfcLiChgIDT)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(data.TrfcLiChg);

  return required_buffer_size;
}

/*!
 * \brief Calculates the maximum buffer size for datatype /CppImplementationDataTypes/HMIDataTrfcLi1VccIDT.
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
template <typename T, typename TpPack, std::enable_if_t<std::is_same<T, ::HMIDataTrfcLi1VccIDT::HMIDataTrfcLi1VccIDT>::value, bool> = true>
constexpr amsr::someip_protocol::internal::serialization::InfSizeT GetMaximumBufferSize() noexcept {
  namespace internal = amsr::someip_protocol::internal;
  // Namespace alias for static serialization code
  namespace serialization = internal::serialization;
  serialization::InfSizeT size{0u};

  // Accumulate the static size of struct member 'TrfcliInfo' of type /CppImplementationDataTypes/TrfcLiInfo1IDT
   // VCA_SOMEIPPROTOCOL_GEN_BUFFERSIZE
    size +=serialization::GetMaximumBufferSize<
                        decltype(T{}.TrfcliInfo),
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/TrfcLiInfo1IDT)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >();
  // Accumulate the static size of struct member 'UturnLight' of type /CppImplementationDataTypes/ColorSts1IDT
   // VCA_SOMEIPPROTOCOL_GEN_BUFFERSIZE
    size +=serialization::GetMaximumBufferSize<
                        decltype(T{}.UturnLight),
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/ColorSts1IDT)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >();
  // Accumulate the static size of struct member 'TrfcliInfoLeft' of type /CppImplementationDataTypes/TrfcliInfoLeft1IDT
   // VCA_SOMEIPPROTOCOL_GEN_BUFFERSIZE
    size +=serialization::GetMaximumBufferSize<
                        decltype(T{}.TrfcliInfoLeft),
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/TrfcliInfoLeft1IDT)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >();
  // Accumulate the static size of struct member 'TrfcliInfoRight' of type /CppImplementationDataTypes/TrfcliInfoRight1IDT
   // VCA_SOMEIPPROTOCOL_GEN_BUFFERSIZE
    size +=serialization::GetMaximumBufferSize<
                        decltype(T{}.TrfcliInfoRight),
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/TrfcliInfoRight1IDT)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >();
  // Accumulate the static size of struct member 'TrfcLiWarnTypSts' of type /CppImplementationDataTypes/OnOff1IDT
   // VCA_SOMEIPPROTOCOL_GEN_BUFFERSIZE
    size +=serialization::GetMaximumBufferSize<
                        decltype(T{}.TrfcLiWarnTypSts),
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/OnOff1IDT)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >();
  // Accumulate the static size of struct member 'TrfcLiSts' of type /CppImplementationDataTypes/FctSts2VccIDT
   // VCA_SOMEIPPROTOCOL_GEN_BUFFERSIZE
    size +=serialization::GetMaximumBufferSize<
                        decltype(T{}.TrfcLiSts),
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/FctSts2VccIDT)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >();
  // Accumulate the static size of struct member 'TrfcLiChg' of type /CppImplementationDataTypes/TrfcLiChgIDT
   // VCA_SOMEIPPROTOCOL_GEN_BUFFERSIZE
    size +=serialization::GetMaximumBufferSize<
                        decltype(T{}.TrfcLiChg),
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/TrfcLiChgIDT)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >();

  return size;
}

/*!
 * \brief Calculates the maximum buffer size for datatype /CppImplementationDataTypes/HMIDataTrfcLi1VccIDT. For ADL.
 * \details Data type class: DataTypeStruct (CppImplDataTypeStruct).
 *          is TLV struct: false
 *
 * \tparam TpPack Transformation properties to be used for serialization.
 * \param[in] data Reference to the data object of type /CppImplementationDataTypes/HMIDataTrfcLi1VccIDT.
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
constexpr amsr::someip_protocol::internal::serialization::InfSizeT GetMaximumBufferSize(::HMIDataTrfcLi1VccIDT::HMIDataTrfcLi1VccIDT const&) noexcept {
  return GetMaximumBufferSize<::HMIDataTrfcLi1VccIDT::HMIDataTrfcLi1VccIDT, TpPack>();
}

/*!
 * \brief Checks if datatype /CppImplementationDataTypes/HMIDataTrfcLi1VccIDT is of static size.
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
constexpr bool IsStaticSize(amsr::someip_protocol::internal::serialization::SizeToken<::HMIDataTrfcLi1VccIDT::HMIDataTrfcLi1VccIDT>) noexcept {
  // Namespace alias for static serialization code
  namespace internal = amsr::someip_protocol::internal;
  namespace serialization = internal::serialization;

  constexpr bool is_static_size{
  // Check static size status of struct member 'TrfcliInfo' of type /CppImplementationDataTypes/TrfcLiInfo1IDT
  serialization::IsStaticSize<
                      TpPack,
                      // Byte-order of primitive datatype (/CppImplementationDataTypes/TrfcLiInfo1IDT)
                      typename serialization::Tp<TpPack>::ByteOrder

                      >(serialization::SizeToken<::TrfcLiInfo1IDT::TrfcLiInfo1IDT>{})  && 
  
  // Check static size status of struct member 'UturnLight' of type /CppImplementationDataTypes/ColorSts1IDT
  serialization::IsStaticSize<
                      TpPack,
                      // Byte-order of primitive datatype (/CppImplementationDataTypes/ColorSts1IDT)
                      typename serialization::Tp<TpPack>::ByteOrder

                      >(serialization::SizeToken<::ColorSts1IDT::ColorSts1IDT>{})  && 
  
  // Check static size status of struct member 'TrfcliInfoLeft' of type /CppImplementationDataTypes/TrfcliInfoLeft1IDT
  serialization::IsStaticSize<
                      TpPack,
                      // Byte-order of primitive datatype (/CppImplementationDataTypes/TrfcliInfoLeft1IDT)
                      typename serialization::Tp<TpPack>::ByteOrder

                      >(serialization::SizeToken<::TrfcliInfoLeft1IDT::TrfcliInfoLeft1IDT>{})  && 
  
  // Check static size status of struct member 'TrfcliInfoRight' of type /CppImplementationDataTypes/TrfcliInfoRight1IDT
  serialization::IsStaticSize<
                      TpPack,
                      // Byte-order of primitive datatype (/CppImplementationDataTypes/TrfcliInfoRight1IDT)
                      typename serialization::Tp<TpPack>::ByteOrder

                      >(serialization::SizeToken<::TrfcliInfoRight1IDT::TrfcliInfoRight1IDT>{})  && 
  
  // Check static size status of struct member 'TrfcLiWarnTypSts' of type /CppImplementationDataTypes/OnOff1IDT
  serialization::IsStaticSize<
                      TpPack,
                      // Byte-order of primitive datatype (/CppImplementationDataTypes/OnOff1IDT)
                      typename serialization::Tp<TpPack>::ByteOrder

                      >(serialization::SizeToken<::OnOff1IDT::OnOff1IDT>{})  && 
  
  // Check static size status of struct member 'TrfcLiSts' of type /CppImplementationDataTypes/FctSts2VccIDT
  serialization::IsStaticSize<
                      TpPack,
                      // Byte-order of primitive datatype (/CppImplementationDataTypes/FctSts2VccIDT)
                      typename serialization::Tp<TpPack>::ByteOrder

                      >(serialization::SizeToken<::FctSts2VccIDT::FctSts2VccIDT>{})  && 
  
  // Check static size status of struct member 'TrfcLiChg' of type /CppImplementationDataTypes/TrfcLiChgIDT
  serialization::IsStaticSize<
                      TpPack,
                      // Byte-order of primitive datatype (/CppImplementationDataTypes/TrfcLiChgIDT)
                      typename serialization::Tp<TpPack>::ByteOrder

                      >(serialization::SizeToken<::TrfcLiChgIDT::TrfcLiChgIDT>{}) 
  };
    return is_static_size;
}

}  // namespace HMIDataTrfcLi1VccIDT

#endif  // TRAFFICLIGHTATTENTIONEXE_INCLUDE_AMSR_SOMEIP_PROTOCOL_INTERNAL_DATATYPE_SERIALIZATION_HMIDATATRFCLI1VCCIDT_SERIALIZER_HMIDATATRFCLI1VCCIDT_H_

