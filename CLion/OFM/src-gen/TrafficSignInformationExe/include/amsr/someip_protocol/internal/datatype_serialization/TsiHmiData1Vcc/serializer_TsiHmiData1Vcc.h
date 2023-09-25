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
/**        \file  TrafficSignInformationExe/include/amsr/someip_protocol/internal/datatype_serialization/TsiHmiData1Vcc/serializer_TsiHmiData1Vcc.h
 *        \brief  SOME/IP protocol serializer implementation for datatype 'TsiHmiData1Vcc'
 *
 *      \details  /CppImplementationDataTypes/TsiHmiData1Vcc
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 *  GENERATOR INFORMATION
 *  -------------------------------------------------------------------------------------------------------------------
 *    Generator Name: amsr_someipprotocol
 *         Commit ID: 3fd8aac035abb6fb6709609fe09ab84fd0e635d8
 *********************************************************************************************************************/

#ifndef TRAFFICSIGNINFORMATIONEXE_INCLUDE_AMSR_SOMEIP_PROTOCOL_INTERNAL_DATATYPE_SERIALIZATION_TSIHMIDATA1VCC_SERIALIZER_TSIHMIDATA1VCC_H_
#define TRAFFICSIGNINFORMATIONEXE_INCLUDE_AMSR_SOMEIP_PROTOCOL_INTERNAL_DATATYPE_SERIALIZATION_TSIHMIDATA1VCC_SERIALIZER_TSIHMIDATA1VCC_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include "TsiHmiData1Vcc/impl_type_tsihmidata1vcc.h"
#include "someip-protocol/internal/serialization/ser_common.h"
#include "someip-protocol/internal/serialization/ser_forward.h"
#include "someip-protocol/internal/serialization/ser_sizing.h"
#include "someip-protocol/internal/serialization/writer.h"

namespace TsiHmiData1Vcc {

/*!
 * \brief Serializer for datatype /CppImplementationDataTypes/TsiHmiData1Vcc.
 * \details Data type class: DataTypeStruct (CppImplDataTypeStruct).
 *          is TLV struct: false
 *
 * \tparam TpPack Transformation properties to be used for serialization.
 *
 * \param[in, out] writer Reference to byte stream writer.
 * \param[in] data Reference to the data object of type /CppImplementationDataTypes/TsiHmiData1Vcc to be serialized.
 * \pre The writer holds a memory buffer which is enough to store the serialized data.
 * \context Reactor|App
 * \threadsafe FALSE
 * \reentrant TRUE
 * \vprivate Vector component internal API.
 * \synchronous TRUE
 */
template <typename TpPack>
void SomeIpProtocolSerialize(amsr::someip_protocol::internal::serialization::Writer& writer, ::TsiHmiData1Vcc::TsiHmiData1Vcc const &data) noexcept {
  // Namespace alias for static serialization code
  namespace serialization = amsr::someip_protocol::internal::serialization;
  // Serialize non-TLV struct
    // Serialize struct member 'RoadSgnInfoSts_ref' of type /CppImplementationDataTypes/RoadSgnInfoSts
    serialization::SomeIpProtocolSerialize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/RoadSgnInfoSts)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(writer, data.RoadSgnInfoSts_ref);
    // Serialize struct member 'TrfcInfoMiscFirst_ref' of type /CppImplementationDataTypes/TrfcInfoMiscFirst
    serialization::SomeIpProtocolSerialize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/TrfcInfoMiscFirst)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(writer, data.TrfcInfoMiscFirst_ref);
    // Serialize struct member 'SpdAlrmActvSts_ref' of type /CppImplementationDataTypes/SpdAlrmActvSts
    serialization::SomeIpProtocolSerialize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/SpdAlrmActvSts)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(writer, data.SpdAlrmActvSts_ref);
    // Serialize struct member 'SpdLimFirst_ref' of type /CppImplementationDataTypes/uint8_t
    serialization::SomeIpProtocolSerialize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/uint8_t)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(writer, data.SpdLimFirst_ref);
    // Serialize struct member 'SpdLimSec_ref' of type /CppImplementationDataTypes/uint8_t
    serialization::SomeIpProtocolSerialize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/uint8_t)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(writer, data.SpdLimSec_ref);
    // Serialize struct member 'SpdLimSpplFirst_ref' of type /CppImplementationDataTypes/SpdLimSpplFirst
    serialization::SomeIpProtocolSerialize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/SpdLimSpplFirst)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(writer, data.SpdLimSpplFirst_ref);
    // Serialize struct member 'SpdLimCoupldFirst_ref' of type /CppImplementationDataTypes/SpdLimCoupldFirst
    serialization::SomeIpProtocolSerialize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/SpdLimCoupldFirst)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(writer, data.SpdLimCoupldFirst_ref);
    // Serialize struct member 'OffsForSpdWarnSetgSts_ref' of type /CppImplementationDataTypes/OffsForSpdWarnSetgSts
    serialization::SomeIpProtocolSerialize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/OffsForSpdWarnSetgSts)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(writer, data.OffsForSpdWarnSetgSts_ref);
    // Serialize struct member 'SpdLimWarnReqAud_ref' of type /CppImplementationDataTypes/SpdLimWarnReqAud
    serialization::SomeIpProtocolSerialize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/SpdLimWarnReqAud)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(writer, data.SpdLimWarnReqAud_ref);
    // Serialize struct member 'SpdLimCamFirst_ref' of type /CppImplementationDataTypes/SpdLimCamFirst
    serialization::SomeIpProtocolSerialize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/SpdLimCamFirst)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(writer, data.SpdLimCamFirst_ref);
    // Serialize struct member 'CtryForRoadSgnInfo_ref' of type /CppImplementationDataTypes/uint16_t
    serialization::SomeIpProtocolSerialize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/uint16_t)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(writer, data.CtryForRoadSgnInfo_ref);
}

/*!
 * \brief Calculates the required buffer size for datatype /CppImplementationDataTypes/TsiHmiData1Vcc.
 * \details Data type class: DataTypeStruct (CppImplDataTypeStruct).
 *          is TLV struct: false
 *
 * \tparam TpPack Transformation properties to be used for serialization.
 * \param[in] data Reference to the data object of type /CppImplementationDataTypes/TsiHmiData1Vcc.
 * \return Returns the required buffer size for the struct in bytes.
 * \pre -
 * \context Reactor|App
 * \threadsafe FALSE
 * \reentrant TRUE
 * \vprivate Vector component internal API.
 * \synchronous TRUE
 */
template <typename TpPack>
constexpr std::size_t GetRequiredBufferSize(::TsiHmiData1Vcc::TsiHmiData1Vcc const &data) noexcept {
  // Namespace alias for static serialization code
  namespace serialization = amsr::someip_protocol::internal::serialization;

  // Sum of required size
  std::size_t required_buffer_size{0};

  // Accumulate the static size of struct member 'RoadSgnInfoSts_ref' of type /CppImplementationDataTypes/RoadSgnInfoSts
  required_buffer_size += serialization::GetRequiredBufferSize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/RoadSgnInfoSts)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(data.RoadSgnInfoSts_ref);
  // Accumulate the static size of struct member 'TrfcInfoMiscFirst_ref' of type /CppImplementationDataTypes/TrfcInfoMiscFirst
  required_buffer_size += serialization::GetRequiredBufferSize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/TrfcInfoMiscFirst)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(data.TrfcInfoMiscFirst_ref);
  // Accumulate the static size of struct member 'SpdAlrmActvSts_ref' of type /CppImplementationDataTypes/SpdAlrmActvSts
  required_buffer_size += serialization::GetRequiredBufferSize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/SpdAlrmActvSts)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(data.SpdAlrmActvSts_ref);
  // Accumulate the static size of struct member 'SpdLimFirst_ref' of type /CppImplementationDataTypes/uint8_t
  required_buffer_size += serialization::GetRequiredBufferSize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/uint8_t)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(data.SpdLimFirst_ref);
  // Accumulate the static size of struct member 'SpdLimSec_ref' of type /CppImplementationDataTypes/uint8_t
  required_buffer_size += serialization::GetRequiredBufferSize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/uint8_t)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(data.SpdLimSec_ref);
  // Accumulate the static size of struct member 'SpdLimSpplFirst_ref' of type /CppImplementationDataTypes/SpdLimSpplFirst
  required_buffer_size += serialization::GetRequiredBufferSize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/SpdLimSpplFirst)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(data.SpdLimSpplFirst_ref);
  // Accumulate the static size of struct member 'SpdLimCoupldFirst_ref' of type /CppImplementationDataTypes/SpdLimCoupldFirst
  required_buffer_size += serialization::GetRequiredBufferSize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/SpdLimCoupldFirst)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(data.SpdLimCoupldFirst_ref);
  // Accumulate the static size of struct member 'OffsForSpdWarnSetgSts_ref' of type /CppImplementationDataTypes/OffsForSpdWarnSetgSts
  required_buffer_size += serialization::GetRequiredBufferSize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/OffsForSpdWarnSetgSts)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(data.OffsForSpdWarnSetgSts_ref);
  // Accumulate the static size of struct member 'SpdLimWarnReqAud_ref' of type /CppImplementationDataTypes/SpdLimWarnReqAud
  required_buffer_size += serialization::GetRequiredBufferSize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/SpdLimWarnReqAud)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(data.SpdLimWarnReqAud_ref);
  // Accumulate the static size of struct member 'SpdLimCamFirst_ref' of type /CppImplementationDataTypes/SpdLimCamFirst
  required_buffer_size += serialization::GetRequiredBufferSize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/SpdLimCamFirst)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(data.SpdLimCamFirst_ref);
  // Accumulate the static size of struct member 'CtryForRoadSgnInfo_ref' of type /CppImplementationDataTypes/uint16_t
  required_buffer_size += serialization::GetRequiredBufferSize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/uint16_t)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(data.CtryForRoadSgnInfo_ref);

  return required_buffer_size;
}

/*!
 * \brief Checks if datatype /CppImplementationDataTypes/TsiHmiData1Vcc is of static size.
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
constexpr bool IsStaticSize(amsr::someip_protocol::internal::serialization::SizeToken<::TsiHmiData1Vcc::TsiHmiData1Vcc>) noexcept {
  // Namespace alias for static serialization code
  namespace serialization = amsr::someip_protocol::internal::serialization;

  constexpr bool is_static_size{
  // Check static size status of struct member 'RoadSgnInfoSts_ref' of type /CppImplementationDataTypes/RoadSgnInfoSts
  serialization::IsStaticSize<
                      TpPack,
                      // Byte-order of primitive datatype (/CppImplementationDataTypes/RoadSgnInfoSts)
                      typename serialization::Tp<TpPack>::ByteOrder

                      >(serialization::SizeToken<::RoadSgnInfoSts::RoadSgnInfoSts>{})  && 
  
  // Check static size status of struct member 'TrfcInfoMiscFirst_ref' of type /CppImplementationDataTypes/TrfcInfoMiscFirst
  serialization::IsStaticSize<
                      TpPack,
                      // Byte-order of primitive datatype (/CppImplementationDataTypes/TrfcInfoMiscFirst)
                      typename serialization::Tp<TpPack>::ByteOrder

                      >(serialization::SizeToken<::TrfcInfoMiscFirst::TrfcInfoMiscFirst>{})  && 
  
  // Check static size status of struct member 'SpdAlrmActvSts_ref' of type /CppImplementationDataTypes/SpdAlrmActvSts
  serialization::IsStaticSize<
                      TpPack,
                      // Byte-order of primitive datatype (/CppImplementationDataTypes/SpdAlrmActvSts)
                      typename serialization::Tp<TpPack>::ByteOrder

                      >(serialization::SizeToken<::SpdAlrmActvSts::SpdAlrmActvSts>{})  && 
  
  // Check static size status of struct member 'SpdLimFirst_ref' of type /CppImplementationDataTypes/uint8_t
  serialization::IsStaticSize<
                      TpPack,
                      // Byte-order of primitive datatype (/CppImplementationDataTypes/uint8_t)
                      typename serialization::Tp<TpPack>::ByteOrder

                      >(serialization::SizeToken<::SpdLimFirst::SpdLimFirst>{})  && 
  
  // Check static size status of struct member 'SpdLimSec_ref' of type /CppImplementationDataTypes/uint8_t
  serialization::IsStaticSize<
                      TpPack,
                      // Byte-order of primitive datatype (/CppImplementationDataTypes/uint8_t)
                      typename serialization::Tp<TpPack>::ByteOrder

                      >(serialization::SizeToken<::SpdLimSec::SpdLimSec>{})  && 
  
  // Check static size status of struct member 'SpdLimSpplFirst_ref' of type /CppImplementationDataTypes/SpdLimSpplFirst
  serialization::IsStaticSize<
                      TpPack,
                      // Byte-order of primitive datatype (/CppImplementationDataTypes/SpdLimSpplFirst)
                      typename serialization::Tp<TpPack>::ByteOrder

                      >(serialization::SizeToken<::SpdLimSpplFirst::SpdLimSpplFirst>{})  && 
  
  // Check static size status of struct member 'SpdLimCoupldFirst_ref' of type /CppImplementationDataTypes/SpdLimCoupldFirst
  serialization::IsStaticSize<
                      TpPack,
                      // Byte-order of primitive datatype (/CppImplementationDataTypes/SpdLimCoupldFirst)
                      typename serialization::Tp<TpPack>::ByteOrder

                      >(serialization::SizeToken<::SpdLimCoupldFirst::SpdLimCoupldFirst>{})  && 
  
  // Check static size status of struct member 'OffsForSpdWarnSetgSts_ref' of type /CppImplementationDataTypes/OffsForSpdWarnSetgSts
  serialization::IsStaticSize<
                      TpPack,
                      // Byte-order of primitive datatype (/CppImplementationDataTypes/OffsForSpdWarnSetgSts)
                      typename serialization::Tp<TpPack>::ByteOrder

                      >(serialization::SizeToken<::OffsForSpdWarnSetgSts::OffsForSpdWarnSetgSts>{})  && 
  
  // Check static size status of struct member 'SpdLimWarnReqAud_ref' of type /CppImplementationDataTypes/SpdLimWarnReqAud
  serialization::IsStaticSize<
                      TpPack,
                      // Byte-order of primitive datatype (/CppImplementationDataTypes/SpdLimWarnReqAud)
                      typename serialization::Tp<TpPack>::ByteOrder

                      >(serialization::SizeToken<::SpdLimWarnReqAud::SpdLimWarnReqAud>{})  && 
  
  // Check static size status of struct member 'SpdLimCamFirst_ref' of type /CppImplementationDataTypes/SpdLimCamFirst
  serialization::IsStaticSize<
                      TpPack,
                      // Byte-order of primitive datatype (/CppImplementationDataTypes/SpdLimCamFirst)
                      typename serialization::Tp<TpPack>::ByteOrder

                      >(serialization::SizeToken<::SpdLimCamFirst::SpdLimCamFirst>{})  && 
  
  // Check static size status of struct member 'CtryForRoadSgnInfo_ref' of type /CppImplementationDataTypes/uint16_t
  serialization::IsStaticSize<
                      TpPack,
                      // Byte-order of primitive datatype (/CppImplementationDataTypes/uint16_t)
                      typename serialization::Tp<TpPack>::ByteOrder

                      >(serialization::SizeToken<::CtryForRoadSgnInfo::CtryForRoadSgnInfo>{}) 
  };
    return is_static_size;
}

}  // namespace TsiHmiData1Vcc

#endif  // TRAFFICSIGNINFORMATIONEXE_INCLUDE_AMSR_SOMEIP_PROTOCOL_INTERNAL_DATATYPE_SERIALIZATION_TSIHMIDATA1VCC_SERIALIZER_TSIHMIDATA1VCC_H_

