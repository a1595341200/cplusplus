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
/**        \file  ObjectFusionModelExe/include/amsr/someip_protocol/internal/datatype_serialization/FrontFourDRadarSts1Vcc/serializer_FrontFourDRadarSts1Vcc.h
 *        \brief  SOME/IP protocol serializer implementation for datatype 'FrontFourDRadarSts1Vcc'
 *
 *      \details  /CppImplementationDataTypes/FrontFourDRadarSts1Vcc
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 *  GENERATOR INFORMATION
 *  -------------------------------------------------------------------------------------------------------------------
 *    Generator Name: amsr_someipprotocol
 *         Commit ID: 3fd8aac035abb6fb6709609fe09ab84fd0e635d8
 *********************************************************************************************************************/

#ifndef OBJECTFUSIONMODELEXE_INCLUDE_AMSR_SOMEIP_PROTOCOL_INTERNAL_DATATYPE_SERIALIZATION_FRONTFOURDRADARSTS1VCC_SERIALIZER_FRONTFOURDRADARSTS1VCC_H_
#define OBJECTFUSIONMODELEXE_INCLUDE_AMSR_SOMEIP_PROTOCOL_INTERNAL_DATATYPE_SERIALIZATION_FRONTFOURDRADARSTS1VCC_SERIALIZER_FRONTFOURDRADARSTS1VCC_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include "FrontFourDRadarSts1Vcc/impl_type_frontfourdradarsts1vcc.h"
#include "someip-protocol/internal/serialization/ser_common.h"
#include "someip-protocol/internal/serialization/ser_forward.h"
#include "someip-protocol/internal/serialization/ser_sizing.h"
#include "someip-protocol/internal/serialization/writer.h"

namespace FrontFourDRadarSts1Vcc {

/*!
 * \brief Serializer for datatype /CppImplementationDataTypes/FrontFourDRadarSts1Vcc.
 * \details Data type class: DataTypeStruct (CppImplDataTypeStruct).
 *          is TLV struct: false
 *
 * \tparam TpPack Transformation properties to be used for serialization.
 *
 * \param[in, out] writer Reference to byte stream writer.
 * \param[in] data Reference to the data object of type /CppImplementationDataTypes/FrontFourDRadarSts1Vcc to be serialized.
 * \pre The writer holds a memory buffer which is enough to store the serialized data.
 * \context Reactor|App
 * \threadsafe FALSE
 * \reentrant TRUE
 * \vprivate Vector component internal API.
 * \synchronous TRUE
 */
template <typename TpPack>
void SomeIpProtocolSerialize(amsr::someip_protocol::internal::serialization::Writer& writer, ::FrontFourDRadarSts1Vcc::FrontFourDRadarSts1Vcc const &data) noexcept {
  // Namespace alias for static serialization code
  namespace serialization = amsr::someip_protocol::internal::serialization;
  // Serialize non-TLV struct
    // Serialize struct member 'RdrStsRdrNrDetn_ref' of type /CppImplementationDataTypes/uint8_t
    serialization::SomeIpProtocolSerialize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/uint8_t)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(writer, data.RdrStsRdrNrDetn_ref);
    // Serialize struct member 'RdrStsRdrNrObj_ref' of type /CppImplementationDataTypes/uint8_t
    serialization::SomeIpProtocolSerialize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/uint8_t)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(writer, data.RdrStsRdrNrObj_ref);
    // Serialize struct member 'RdrStsBlkd0bin_ref' of type /CppImplementationDataTypes/RdrStsBlkd0bin
    serialization::SomeIpProtocolSerialize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/RdrStsBlkd0bin)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(writer, data.RdrStsBlkd0bin_ref);
    // Serialize struct member 'RdrStsBlkdConf_ref' of type /CppImplementationDataTypes/uint8_t
    serialization::SomeIpProtocolSerialize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/uint8_t)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(writer, data.RdrStsBlkdConf_ref);
    // Serialize struct member 'RdrStsChks_ref' of type /CppImplementationDataTypes/uint8_t
    serialization::SomeIpProtocolSerialize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/uint8_t)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(writer, data.RdrStsChks_ref);
    // Serialize struct member 'RdrStsCntr_ref' of type /CppImplementationDataTypes/uint8_t
    serialization::SomeIpProtocolSerialize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/uint8_t)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(writer, data.RdrStsCntr_ref);
    // Serialize struct member 'RdrStsDstbc_ref' of type /CppImplementationDataTypes/uint8_t
    serialization::SomeIpProtocolSerialize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/uint8_t)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(writer, data.RdrStsDstbc_ref);
    // Serialize struct member 'RdrStsEna_ref' of type /CppImplementationDataTypes/RdrStsEna
    serialization::SomeIpProtocolSerialize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/RdrStsEna)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(writer, data.RdrStsEna_ref);
    // Serialize struct member 'RdrStsFaulty_ref' of type /CppImplementationDataTypes/RdrStsFaulty
    serialization::SomeIpProtocolSerialize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/RdrStsFaulty)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(writer, data.RdrStsFaulty_ref);
    // Serialize struct member 'RdrStsIfVersMajor_ref' of type /CppImplementationDataTypes/uint8_t
    serialization::SomeIpProtocolSerialize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/uint8_t)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(writer, data.RdrStsIfVersMajor_ref);
    // Serialize struct member 'RdrStsIfVersMinor_ref' of type /CppImplementationDataTypes/uint8_t
    serialization::SomeIpProtocolSerialize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/uint8_t)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(writer, data.RdrStsIfVersMinor_ref);
    // Serialize struct member 'RdrStsLatency_ref' of type /CppImplementationDataTypes/uint16_t
    serialization::SomeIpProtocolSerialize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/uint16_t)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(writer, data.RdrStsLatency_ref);
    // Serialize struct member 'RdrStsMisAlign_ref' of type /CppImplementationDataTypes/RdrStsMisAlign
    serialization::SomeIpProtocolSerialize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/RdrStsMisAlign)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(writer, data.RdrStsMisAlign_ref);
    // Serialize struct member 'RdrStsMissCom_ref' of type /CppImplementationDataTypes/RdrStsMissCom
    serialization::SomeIpProtocolSerialize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/RdrStsMissCom)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(writer, data.RdrStsMissCom_ref);
    // Serialize struct member 'RdrStsSftyFlt_ref' of type /CppImplementationDataTypes/RdrStsSftyFlt
    serialization::SomeIpProtocolSerialize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/RdrStsSftyFlt)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(writer, data.RdrStsSftyFlt_ref);
    // Serialize struct member 'RdrStsTiStampH_ref' of type /CppImplementationDataTypes/uint32_t
    serialization::SomeIpProtocolSerialize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/uint32_t)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(writer, data.RdrStsTiStampH_ref);
    // Serialize struct member 'RdrStsTiStampL_ref' of type /CppImplementationDataTypes/uint32_t
    serialization::SomeIpProtocolSerialize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/uint32_t)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(writer, data.RdrStsTiStampL_ref);
    // Serialize struct member 'RdrStsTiStampStsGlbTiBas_ref' of type /CppImplementationDataTypes/RdrStsTiStampStsGlbTiBas
    serialization::SomeIpProtocolSerialize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/RdrStsTiStampStsGlbTiBas)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(writer, data.RdrStsTiStampStsGlbTiBas_ref);
    // Serialize struct member 'RdrStsTiStampStsSyncToGatewy_ref' of type /CppImplementationDataTypes/RdrStsTiStampStsSyncToGatewy
    serialization::SomeIpProtocolSerialize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/RdrStsTiStampStsSyncToGatewy)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(writer, data.RdrStsTiStampStsSyncToGatewy_ref);
    // Serialize struct member 'RdrStsTiStampStsTiLeap_ref' of type /CppImplementationDataTypes/RdrStsTiStampStsTiLeap
    serialization::SomeIpProtocolSerialize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/RdrStsTiStampStsTiLeap)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(writer, data.RdrStsTiStampStsTiLeap_ref);
    // Serialize struct member 'RdrStsTiStampStsTiOut_ref' of type /CppImplementationDataTypes/RdrStsTiStampStsTiOut
    serialization::SomeIpProtocolSerialize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/RdrStsTiStampStsTiOut)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(writer, data.RdrStsTiStampStsTiOut_ref);
    // Serialize struct member 'RdrStsWhlSpdCmpFac_ref' of type /CppImplementationDataTypes/float
    serialization::SomeIpProtocolSerialize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/float)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(writer, data.RdrStsWhlSpdCmpFac_ref);
}

/*!
 * \brief Calculates the required buffer size for datatype /CppImplementationDataTypes/FrontFourDRadarSts1Vcc.
 * \details Data type class: DataTypeStruct (CppImplDataTypeStruct).
 *          is TLV struct: false
 *
 * \tparam TpPack Transformation properties to be used for serialization.
 * \param[in] data Reference to the data object of type /CppImplementationDataTypes/FrontFourDRadarSts1Vcc.
 * \return Returns the required buffer size for the struct in bytes.
 * \pre -
 * \context Reactor|App
 * \threadsafe FALSE
 * \reentrant TRUE
 * \vprivate Vector component internal API.
 * \synchronous TRUE
 */
template <typename TpPack>
constexpr std::size_t GetRequiredBufferSize(::FrontFourDRadarSts1Vcc::FrontFourDRadarSts1Vcc const &data) noexcept {
  // Namespace alias for static serialization code
  namespace serialization = amsr::someip_protocol::internal::serialization;

  // Sum of required size
  std::size_t required_buffer_size{0};

  // Accumulate the static size of struct member 'RdrStsRdrNrDetn_ref' of type /CppImplementationDataTypes/uint8_t
  required_buffer_size += serialization::GetRequiredBufferSize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/uint8_t)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(data.RdrStsRdrNrDetn_ref);
  // Accumulate the static size of struct member 'RdrStsRdrNrObj_ref' of type /CppImplementationDataTypes/uint8_t
  required_buffer_size += serialization::GetRequiredBufferSize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/uint8_t)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(data.RdrStsRdrNrObj_ref);
  // Accumulate the static size of struct member 'RdrStsBlkd0bin_ref' of type /CppImplementationDataTypes/RdrStsBlkd0bin
  required_buffer_size += serialization::GetRequiredBufferSize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/RdrStsBlkd0bin)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(data.RdrStsBlkd0bin_ref);
  // Accumulate the static size of struct member 'RdrStsBlkdConf_ref' of type /CppImplementationDataTypes/uint8_t
  required_buffer_size += serialization::GetRequiredBufferSize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/uint8_t)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(data.RdrStsBlkdConf_ref);
  // Accumulate the static size of struct member 'RdrStsChks_ref' of type /CppImplementationDataTypes/uint8_t
  required_buffer_size += serialization::GetRequiredBufferSize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/uint8_t)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(data.RdrStsChks_ref);
  // Accumulate the static size of struct member 'RdrStsCntr_ref' of type /CppImplementationDataTypes/uint8_t
  required_buffer_size += serialization::GetRequiredBufferSize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/uint8_t)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(data.RdrStsCntr_ref);
  // Accumulate the static size of struct member 'RdrStsDstbc_ref' of type /CppImplementationDataTypes/uint8_t
  required_buffer_size += serialization::GetRequiredBufferSize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/uint8_t)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(data.RdrStsDstbc_ref);
  // Accumulate the static size of struct member 'RdrStsEna_ref' of type /CppImplementationDataTypes/RdrStsEna
  required_buffer_size += serialization::GetRequiredBufferSize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/RdrStsEna)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(data.RdrStsEna_ref);
  // Accumulate the static size of struct member 'RdrStsFaulty_ref' of type /CppImplementationDataTypes/RdrStsFaulty
  required_buffer_size += serialization::GetRequiredBufferSize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/RdrStsFaulty)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(data.RdrStsFaulty_ref);
  // Accumulate the static size of struct member 'RdrStsIfVersMajor_ref' of type /CppImplementationDataTypes/uint8_t
  required_buffer_size += serialization::GetRequiredBufferSize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/uint8_t)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(data.RdrStsIfVersMajor_ref);
  // Accumulate the static size of struct member 'RdrStsIfVersMinor_ref' of type /CppImplementationDataTypes/uint8_t
  required_buffer_size += serialization::GetRequiredBufferSize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/uint8_t)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(data.RdrStsIfVersMinor_ref);
  // Accumulate the static size of struct member 'RdrStsLatency_ref' of type /CppImplementationDataTypes/uint16_t
  required_buffer_size += serialization::GetRequiredBufferSize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/uint16_t)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(data.RdrStsLatency_ref);
  // Accumulate the static size of struct member 'RdrStsMisAlign_ref' of type /CppImplementationDataTypes/RdrStsMisAlign
  required_buffer_size += serialization::GetRequiredBufferSize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/RdrStsMisAlign)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(data.RdrStsMisAlign_ref);
  // Accumulate the static size of struct member 'RdrStsMissCom_ref' of type /CppImplementationDataTypes/RdrStsMissCom
  required_buffer_size += serialization::GetRequiredBufferSize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/RdrStsMissCom)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(data.RdrStsMissCom_ref);
  // Accumulate the static size of struct member 'RdrStsSftyFlt_ref' of type /CppImplementationDataTypes/RdrStsSftyFlt
  required_buffer_size += serialization::GetRequiredBufferSize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/RdrStsSftyFlt)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(data.RdrStsSftyFlt_ref);
  // Accumulate the static size of struct member 'RdrStsTiStampH_ref' of type /CppImplementationDataTypes/uint32_t
  required_buffer_size += serialization::GetRequiredBufferSize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/uint32_t)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(data.RdrStsTiStampH_ref);
  // Accumulate the static size of struct member 'RdrStsTiStampL_ref' of type /CppImplementationDataTypes/uint32_t
  required_buffer_size += serialization::GetRequiredBufferSize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/uint32_t)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(data.RdrStsTiStampL_ref);
  // Accumulate the static size of struct member 'RdrStsTiStampStsGlbTiBas_ref' of type /CppImplementationDataTypes/RdrStsTiStampStsGlbTiBas
  required_buffer_size += serialization::GetRequiredBufferSize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/RdrStsTiStampStsGlbTiBas)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(data.RdrStsTiStampStsGlbTiBas_ref);
  // Accumulate the static size of struct member 'RdrStsTiStampStsSyncToGatewy_ref' of type /CppImplementationDataTypes/RdrStsTiStampStsSyncToGatewy
  required_buffer_size += serialization::GetRequiredBufferSize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/RdrStsTiStampStsSyncToGatewy)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(data.RdrStsTiStampStsSyncToGatewy_ref);
  // Accumulate the static size of struct member 'RdrStsTiStampStsTiLeap_ref' of type /CppImplementationDataTypes/RdrStsTiStampStsTiLeap
  required_buffer_size += serialization::GetRequiredBufferSize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/RdrStsTiStampStsTiLeap)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(data.RdrStsTiStampStsTiLeap_ref);
  // Accumulate the static size of struct member 'RdrStsTiStampStsTiOut_ref' of type /CppImplementationDataTypes/RdrStsTiStampStsTiOut
  required_buffer_size += serialization::GetRequiredBufferSize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/RdrStsTiStampStsTiOut)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(data.RdrStsTiStampStsTiOut_ref);
  // Accumulate the static size of struct member 'RdrStsWhlSpdCmpFac_ref' of type /CppImplementationDataTypes/float
  required_buffer_size += serialization::GetRequiredBufferSize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/float)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(data.RdrStsWhlSpdCmpFac_ref);

  return required_buffer_size;
}

/*!
 * \brief Checks if datatype /CppImplementationDataTypes/FrontFourDRadarSts1Vcc is of static size.
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
constexpr bool IsStaticSize(amsr::someip_protocol::internal::serialization::SizeToken<::FrontFourDRadarSts1Vcc::FrontFourDRadarSts1Vcc>) noexcept {
  // Namespace alias for static serialization code
  namespace serialization = amsr::someip_protocol::internal::serialization;

  constexpr bool is_static_size{
  // Check static size status of struct member 'RdrStsRdrNrDetn_ref' of type /CppImplementationDataTypes/uint8_t
  serialization::IsStaticSize<
                      TpPack,
                      // Byte-order of primitive datatype (/CppImplementationDataTypes/uint8_t)
                      typename serialization::Tp<TpPack>::ByteOrder

                      >(serialization::SizeToken<::RdrNrDetn::RdrStsRdrNrDetn>{})  && 
  
  // Check static size status of struct member 'RdrStsRdrNrObj_ref' of type /CppImplementationDataTypes/uint8_t
  serialization::IsStaticSize<
                      TpPack,
                      // Byte-order of primitive datatype (/CppImplementationDataTypes/uint8_t)
                      typename serialization::Tp<TpPack>::ByteOrder

                      >(serialization::SizeToken<::RdrStsRdrNrObj::RdrStsRdrNrObj>{})  && 
  
  // Check static size status of struct member 'RdrStsBlkd0bin_ref' of type /CppImplementationDataTypes/RdrStsBlkd0bin
  serialization::IsStaticSize<
                      TpPack,
                      // Byte-order of primitive datatype (/CppImplementationDataTypes/RdrStsBlkd0bin)
                      typename serialization::Tp<TpPack>::ByteOrder

                      >(serialization::SizeToken<::RdrStsBlkd0bin::RdrStsBlkd0bin>{})  && 
  
  // Check static size status of struct member 'RdrStsBlkdConf_ref' of type /CppImplementationDataTypes/uint8_t
  serialization::IsStaticSize<
                      TpPack,
                      // Byte-order of primitive datatype (/CppImplementationDataTypes/uint8_t)
                      typename serialization::Tp<TpPack>::ByteOrder

                      >(serialization::SizeToken<::RdrStsBlkdConf::RdrStsBlkdConf>{})  && 
  
  // Check static size status of struct member 'RdrStsChks_ref' of type /CppImplementationDataTypes/uint8_t
  serialization::IsStaticSize<
                      TpPack,
                      // Byte-order of primitive datatype (/CppImplementationDataTypes/uint8_t)
                      typename serialization::Tp<TpPack>::ByteOrder

                      >(serialization::SizeToken<::RdrStsChks::RdrStsChks>{})  && 
  
  // Check static size status of struct member 'RdrStsCntr_ref' of type /CppImplementationDataTypes/uint8_t
  serialization::IsStaticSize<
                      TpPack,
                      // Byte-order of primitive datatype (/CppImplementationDataTypes/uint8_t)
                      typename serialization::Tp<TpPack>::ByteOrder

                      >(serialization::SizeToken<::RdrStsCntr::RdrStsCntr>{})  && 
  
  // Check static size status of struct member 'RdrStsDstbc_ref' of type /CppImplementationDataTypes/uint8_t
  serialization::IsStaticSize<
                      TpPack,
                      // Byte-order of primitive datatype (/CppImplementationDataTypes/uint8_t)
                      typename serialization::Tp<TpPack>::ByteOrder

                      >(serialization::SizeToken<::RdrStsDstbc::RdrStsDstbc>{})  && 
  
  // Check static size status of struct member 'RdrStsEna_ref' of type /CppImplementationDataTypes/RdrStsEna
  serialization::IsStaticSize<
                      TpPack,
                      // Byte-order of primitive datatype (/CppImplementationDataTypes/RdrStsEna)
                      typename serialization::Tp<TpPack>::ByteOrder

                      >(serialization::SizeToken<::RdrStsEna::RdrStsEna>{})  && 
  
  // Check static size status of struct member 'RdrStsFaulty_ref' of type /CppImplementationDataTypes/RdrStsFaulty
  serialization::IsStaticSize<
                      TpPack,
                      // Byte-order of primitive datatype (/CppImplementationDataTypes/RdrStsFaulty)
                      typename serialization::Tp<TpPack>::ByteOrder

                      >(serialization::SizeToken<::RdrStsFaulty::RdrStsFaulty>{})  && 
  
  // Check static size status of struct member 'RdrStsIfVersMajor_ref' of type /CppImplementationDataTypes/uint8_t
  serialization::IsStaticSize<
                      TpPack,
                      // Byte-order of primitive datatype (/CppImplementationDataTypes/uint8_t)
                      typename serialization::Tp<TpPack>::ByteOrder

                      >(serialization::SizeToken<::RdrStsIfVersMajor::RdrStsIfVersMajor>{})  && 
  
  // Check static size status of struct member 'RdrStsIfVersMinor_ref' of type /CppImplementationDataTypes/uint8_t
  serialization::IsStaticSize<
                      TpPack,
                      // Byte-order of primitive datatype (/CppImplementationDataTypes/uint8_t)
                      typename serialization::Tp<TpPack>::ByteOrder

                      >(serialization::SizeToken<::RdrStsIfVersMinor::RdrStsIfVersMinor>{})  && 
  
  // Check static size status of struct member 'RdrStsLatency_ref' of type /CppImplementationDataTypes/uint16_t
  serialization::IsStaticSize<
                      TpPack,
                      // Byte-order of primitive datatype (/CppImplementationDataTypes/uint16_t)
                      typename serialization::Tp<TpPack>::ByteOrder

                      >(serialization::SizeToken<::RdrStsLatency::RdrStsLatency>{})  && 
  
  // Check static size status of struct member 'RdrStsMisAlign_ref' of type /CppImplementationDataTypes/RdrStsMisAlign
  serialization::IsStaticSize<
                      TpPack,
                      // Byte-order of primitive datatype (/CppImplementationDataTypes/RdrStsMisAlign)
                      typename serialization::Tp<TpPack>::ByteOrder

                      >(serialization::SizeToken<::RdrStsMisAlign::RdrStsMisAlign>{})  && 
  
  // Check static size status of struct member 'RdrStsMissCom_ref' of type /CppImplementationDataTypes/RdrStsMissCom
  serialization::IsStaticSize<
                      TpPack,
                      // Byte-order of primitive datatype (/CppImplementationDataTypes/RdrStsMissCom)
                      typename serialization::Tp<TpPack>::ByteOrder

                      >(serialization::SizeToken<::RdrStsMissCom::RdrStsMissCom>{})  && 
  
  // Check static size status of struct member 'RdrStsSftyFlt_ref' of type /CppImplementationDataTypes/RdrStsSftyFlt
  serialization::IsStaticSize<
                      TpPack,
                      // Byte-order of primitive datatype (/CppImplementationDataTypes/RdrStsSftyFlt)
                      typename serialization::Tp<TpPack>::ByteOrder

                      >(serialization::SizeToken<::RdrStsSftyFlt::RdrStsSftyFlt>{})  && 
  
  // Check static size status of struct member 'RdrStsTiStampH_ref' of type /CppImplementationDataTypes/uint32_t
  serialization::IsStaticSize<
                      TpPack,
                      // Byte-order of primitive datatype (/CppImplementationDataTypes/uint32_t)
                      typename serialization::Tp<TpPack>::ByteOrder

                      >(serialization::SizeToken<::RdrStsTiStampH::RdrStsTiStampH>{})  && 
  
  // Check static size status of struct member 'RdrStsTiStampL_ref' of type /CppImplementationDataTypes/uint32_t
  serialization::IsStaticSize<
                      TpPack,
                      // Byte-order of primitive datatype (/CppImplementationDataTypes/uint32_t)
                      typename serialization::Tp<TpPack>::ByteOrder

                      >(serialization::SizeToken<::RdrStsTiStampL::RdrStsTiStampL>{})  && 
  
  // Check static size status of struct member 'RdrStsTiStampStsGlbTiBas_ref' of type /CppImplementationDataTypes/RdrStsTiStampStsGlbTiBas
  serialization::IsStaticSize<
                      TpPack,
                      // Byte-order of primitive datatype (/CppImplementationDataTypes/RdrStsTiStampStsGlbTiBas)
                      typename serialization::Tp<TpPack>::ByteOrder

                      >(serialization::SizeToken<::RdrStsTiStampStsGlbTiBas::RdrStsTiStampStsGlbTiBas>{})  && 
  
  // Check static size status of struct member 'RdrStsTiStampStsSyncToGatewy_ref' of type /CppImplementationDataTypes/RdrStsTiStampStsSyncToGatewy
  serialization::IsStaticSize<
                      TpPack,
                      // Byte-order of primitive datatype (/CppImplementationDataTypes/RdrStsTiStampStsSyncToGatewy)
                      typename serialization::Tp<TpPack>::ByteOrder

                      >(serialization::SizeToken<::RdrStsTiStampStsSyncToGatewy::RdrStsTiStampStsSyncToGatewy>{})  && 
  
  // Check static size status of struct member 'RdrStsTiStampStsTiLeap_ref' of type /CppImplementationDataTypes/RdrStsTiStampStsTiLeap
  serialization::IsStaticSize<
                      TpPack,
                      // Byte-order of primitive datatype (/CppImplementationDataTypes/RdrStsTiStampStsTiLeap)
                      typename serialization::Tp<TpPack>::ByteOrder

                      >(serialization::SizeToken<::RdrStsTiStampStsTiLeap::RdrStsTiStampStsTiLeap>{})  && 
  
  // Check static size status of struct member 'RdrStsTiStampStsTiOut_ref' of type /CppImplementationDataTypes/RdrStsTiStampStsTiOut
  serialization::IsStaticSize<
                      TpPack,
                      // Byte-order of primitive datatype (/CppImplementationDataTypes/RdrStsTiStampStsTiOut)
                      typename serialization::Tp<TpPack>::ByteOrder

                      >(serialization::SizeToken<::RdrStsTiStampStsTiOut::RdrStsTiStampStsTiOut>{})  && 
  
  // Check static size status of struct member 'RdrStsWhlSpdCmpFac_ref' of type /CppImplementationDataTypes/float
  serialization::IsStaticSize<
                      TpPack,
                      // Byte-order of primitive datatype (/CppImplementationDataTypes/float)
                      typename serialization::Tp<TpPack>::ByteOrder

                      >(serialization::SizeToken<::RdrStsWhlSpdCmpFac::RdrStsWhlSpdCmpFac>{}) 
  };
    return is_static_size;
}

}  // namespace FrontFourDRadarSts1Vcc

#endif  // OBJECTFUSIONMODELEXE_INCLUDE_AMSR_SOMEIP_PROTOCOL_INTERNAL_DATATYPE_SERIALIZATION_FRONTFOURDRADARSTS1VCC_SERIALIZER_FRONTFOURDRADARSTS1VCC_H_

