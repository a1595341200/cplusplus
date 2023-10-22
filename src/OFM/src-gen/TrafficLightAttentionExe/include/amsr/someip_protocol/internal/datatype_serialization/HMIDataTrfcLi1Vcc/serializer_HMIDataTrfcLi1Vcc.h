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
/**        \file  TrafficLightAttentionExe/include/amsr/someip_protocol/internal/datatype_serialization/HMIDataTrfcLi1Vcc/serializer_HMIDataTrfcLi1Vcc.h
 *        \brief  SOME/IP protocol serializer implementation for datatype 'HMIDataTrfcLi1Vcc'
 *
 *      \details  /CppImplementationDataTypes/HMIDataTrfcLi1Vcc
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 *  GENERATOR INFORMATION
 *  -------------------------------------------------------------------------------------------------------------------
 *    Generator Name: amsr_someipprotocol
 *         Commit ID: 3fd8aac035abb6fb6709609fe09ab84fd0e635d8
 *********************************************************************************************************************/

#ifndef TRAFFICLIGHTATTENTIONEXE_INCLUDE_AMSR_SOMEIP_PROTOCOL_INTERNAL_DATATYPE_SERIALIZATION_HMIDATATRFCLI1VCC_SERIALIZER_HMIDATATRFCLI1VCC_H_
#define TRAFFICLIGHTATTENTIONEXE_INCLUDE_AMSR_SOMEIP_PROTOCOL_INTERNAL_DATATYPE_SERIALIZATION_HMIDATATRFCLI1VCC_SERIALIZER_HMIDATATRFCLI1VCC_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include "HMIDataTrfcLi1Vcc/impl_type_hmidatatrfcli1vcc.h"
#include "someip-protocol/internal/serialization/ser_common.h"
#include "someip-protocol/internal/serialization/ser_forward.h"
#include "someip-protocol/internal/serialization/ser_sizing.h"
#include "someip-protocol/internal/serialization/writer.h"

namespace HMIDataTrfcLi1Vcc {

/*!
 * \brief Serializer for datatype /CppImplementationDataTypes/HMIDataTrfcLi1Vcc.
 * \details Data type class: DataTypeStruct (CppImplDataTypeStruct).
 *          is TLV struct: false
 *
 * \tparam TpPack Transformation properties to be used for serialization.
 *
 * \param[in, out] writer Reference to byte stream writer.
 * \param[in] data Reference to the data object of type /CppImplementationDataTypes/HMIDataTrfcLi1Vcc to be serialized.
 * \pre The writer holds a memory buffer which is enough to store the serialized data.
 * \context Reactor|App
 * \threadsafe FALSE
 * \reentrant TRUE
 * \vprivate Vector component internal API.
 * \synchronous TRUE
 */
template <typename TpPack>
void SomeIpProtocolSerialize(amsr::someip_protocol::internal::serialization::Writer& writer, ::HMIDataTrfcLi1Vcc::HMIDataTrfcLi1Vcc const &data) noexcept {
  // Namespace alias for static serialization code
  namespace serialization = amsr::someip_protocol::internal::serialization;
  // Serialize non-TLV struct
    // Serialize struct member 'TrfcliInfo_ref' of type /CppImplementationDataTypes/TrfcliInfo
    serialization::SomeIpProtocolSerialize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/TrfcliInfo)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(writer, data.TrfcliInfo_ref);
    // Serialize struct member 'UturnLight_ref' of type /CppImplementationDataTypes/UturnLight
    serialization::SomeIpProtocolSerialize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/UturnLight)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(writer, data.UturnLight_ref);
    // Serialize struct member 'TrfcliInfoLeft_ref' of type /CppImplementationDataTypes/TrfcliInfoLeft
    serialization::SomeIpProtocolSerialize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/TrfcliInfoLeft)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(writer, data.TrfcliInfoLeft_ref);
    // Serialize struct member 'TrfcliInfoRight_ref' of type /CppImplementationDataTypes/TrfcliInfoRight
    serialization::SomeIpProtocolSerialize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/TrfcliInfoRight)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(writer, data.TrfcliInfoRight_ref);
    // Serialize struct member 'TrfcLiWarnTypSts_ref' of type /CppImplementationDataTypes/TrfcLiWarnTypSts
    serialization::SomeIpProtocolSerialize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/TrfcLiWarnTypSts)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(writer, data.TrfcLiWarnTypSts_ref);
    // Serialize struct member 'TrfcLiSts_ref' of type /CppImplementationDataTypes/TrfcLiSts
    serialization::SomeIpProtocolSerialize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/TrfcLiSts)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(writer, data.TrfcLiSts_ref);
}

/*!
 * \brief Calculates the required buffer size for datatype /CppImplementationDataTypes/HMIDataTrfcLi1Vcc.
 * \details Data type class: DataTypeStruct (CppImplDataTypeStruct).
 *          is TLV struct: false
 *
 * \tparam TpPack Transformation properties to be used for serialization.
 * \param[in] data Reference to the data object of type /CppImplementationDataTypes/HMIDataTrfcLi1Vcc.
 * \return Returns the required buffer size for the struct in bytes.
 * \pre -
 * \context Reactor|App
 * \threadsafe FALSE
 * \reentrant TRUE
 * \vprivate Vector component internal API.
 * \synchronous TRUE
 */
template <typename TpPack>
constexpr std::size_t GetRequiredBufferSize(::HMIDataTrfcLi1Vcc::HMIDataTrfcLi1Vcc const &data) noexcept {
  // Namespace alias for static serialization code
  namespace serialization = amsr::someip_protocol::internal::serialization;

  // Sum of required size
  std::size_t required_buffer_size{0};

  // Accumulate the static size of struct member 'TrfcliInfo_ref' of type /CppImplementationDataTypes/TrfcliInfo
  required_buffer_size += serialization::GetRequiredBufferSize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/TrfcliInfo)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(data.TrfcliInfo_ref);
  // Accumulate the static size of struct member 'UturnLight_ref' of type /CppImplementationDataTypes/UturnLight
  required_buffer_size += serialization::GetRequiredBufferSize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/UturnLight)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(data.UturnLight_ref);
  // Accumulate the static size of struct member 'TrfcliInfoLeft_ref' of type /CppImplementationDataTypes/TrfcliInfoLeft
  required_buffer_size += serialization::GetRequiredBufferSize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/TrfcliInfoLeft)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(data.TrfcliInfoLeft_ref);
  // Accumulate the static size of struct member 'TrfcliInfoRight_ref' of type /CppImplementationDataTypes/TrfcliInfoRight
  required_buffer_size += serialization::GetRequiredBufferSize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/TrfcliInfoRight)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(data.TrfcliInfoRight_ref);
  // Accumulate the static size of struct member 'TrfcLiWarnTypSts_ref' of type /CppImplementationDataTypes/TrfcLiWarnTypSts
  required_buffer_size += serialization::GetRequiredBufferSize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/TrfcLiWarnTypSts)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(data.TrfcLiWarnTypSts_ref);
  // Accumulate the static size of struct member 'TrfcLiSts_ref' of type /CppImplementationDataTypes/TrfcLiSts
  required_buffer_size += serialization::GetRequiredBufferSize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/TrfcLiSts)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(data.TrfcLiSts_ref);

  return required_buffer_size;
}

/*!
 * \brief Checks if datatype /CppImplementationDataTypes/HMIDataTrfcLi1Vcc is of static size.
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
 */
template <typename TpPack>
constexpr bool IsStaticSize(amsr::someip_protocol::internal::serialization::SizeToken<::HMIDataTrfcLi1Vcc::HMIDataTrfcLi1Vcc>) noexcept {
  // Namespace alias for static serialization code
  namespace serialization = amsr::someip_protocol::internal::serialization;

  constexpr bool is_static_size{
  // Check static size status of struct member 'TrfcliInfo_ref' of type /CppImplementationDataTypes/TrfcliInfo
  serialization::IsStaticSize<
                      TpPack,
                      // Byte-order of primitive datatype (/CppImplementationDataTypes/TrfcliInfo)
                      typename serialization::Tp<TpPack>::ByteOrder

                      >(serialization::SizeToken<::TrfcliInfo::TrfcliInfo>{})  && 
  
  // Check static size status of struct member 'UturnLight_ref' of type /CppImplementationDataTypes/UturnLight
  serialization::IsStaticSize<
                      TpPack,
                      // Byte-order of primitive datatype (/CppImplementationDataTypes/UturnLight)
                      typename serialization::Tp<TpPack>::ByteOrder

                      >(serialization::SizeToken<::UturnLight::UturnLight>{})  && 
  
  // Check static size status of struct member 'TrfcliInfoLeft_ref' of type /CppImplementationDataTypes/TrfcliInfoLeft
  serialization::IsStaticSize<
                      TpPack,
                      // Byte-order of primitive datatype (/CppImplementationDataTypes/TrfcliInfoLeft)
                      typename serialization::Tp<TpPack>::ByteOrder

                      >(serialization::SizeToken<::TrfcLiAttentionEna::TrfcliInfoLeft>{})  && 
  
  // Check static size status of struct member 'TrfcliInfoRight_ref' of type /CppImplementationDataTypes/TrfcliInfoRight
  serialization::IsStaticSize<
                      TpPack,
                      // Byte-order of primitive datatype (/CppImplementationDataTypes/TrfcliInfoRight)
                      typename serialization::Tp<TpPack>::ByteOrder

                      >(serialization::SizeToken<::TrfcliInfoRight::TrfcliInfoRight>{})  && 
  
  // Check static size status of struct member 'TrfcLiWarnTypSts_ref' of type /CppImplementationDataTypes/TrfcLiWarnTypSts
  serialization::IsStaticSize<
                      TpPack,
                      // Byte-order of primitive datatype (/CppImplementationDataTypes/TrfcLiWarnTypSts)
                      typename serialization::Tp<TpPack>::ByteOrder

                      >(serialization::SizeToken<::TrfcLiWarnTypSts::TrfcLiWarnTypSts>{})  && 
  
  // Check static size status of struct member 'TrfcLiSts_ref' of type /CppImplementationDataTypes/TrfcLiSts
  serialization::IsStaticSize<
                      TpPack,
                      // Byte-order of primitive datatype (/CppImplementationDataTypes/TrfcLiSts)
                      typename serialization::Tp<TpPack>::ByteOrder

                      >(serialization::SizeToken<::TrfcLiSts::TrfcLiSts>{}) 
  };
    return is_static_size;
}

}  // namespace HMIDataTrfcLi1Vcc

#endif  // TRAFFICLIGHTATTENTIONEXE_INCLUDE_AMSR_SOMEIP_PROTOCOL_INTERNAL_DATATYPE_SERIALIZATION_HMIDATATRFCLI1VCC_SERIALIZER_HMIDATATRFCLI1VCC_H_

