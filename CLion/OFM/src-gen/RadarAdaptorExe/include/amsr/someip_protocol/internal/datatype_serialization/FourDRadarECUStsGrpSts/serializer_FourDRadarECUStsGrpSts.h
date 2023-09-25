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
/**        \file  RadarAdaptorExe/include/amsr/someip_protocol/internal/datatype_serialization/FourDRadarECUStsGrpSts/serializer_FourDRadarECUStsGrpSts.h
 *        \brief  SOME/IP protocol serializer implementation for datatype 'FourDRadarECUStsGrpSts'
 *
 *      \details  /CppImplementationDataTypes/FourDRadarECUStsGrpSts
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 *  GENERATOR INFORMATION
 *  -------------------------------------------------------------------------------------------------------------------
 *    Generator Name: amsr_someipprotocol
 *         Commit ID: 3fd8aac035abb6fb6709609fe09ab84fd0e635d8
 *********************************************************************************************************************/

#ifndef RADARADAPTOREXE_INCLUDE_AMSR_SOMEIP_PROTOCOL_INTERNAL_DATATYPE_SERIALIZATION_FOURDRADARECUSTSGRPSTS_SERIALIZER_FOURDRADARECUSTSGRPSTS_H_
#define RADARADAPTOREXE_INCLUDE_AMSR_SOMEIP_PROTOCOL_INTERNAL_DATATYPE_SERIALIZATION_FOURDRADARECUSTSGRPSTS_SERIALIZER_FOURDRADARECUSTSGRPSTS_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include "FourDRadarECUStsGrpSts/impl_type_fourdradarecustsgrpsts.h"
#include "amsr/someip_protocol/internal/datatype_serialization/FourDRadarECUSts/serializer_FourDRadarECUSts.h"
#include "amsr/someip_protocol/internal/datatype_serialization/FrontFourDRadarSts1Vcc/serializer_FrontFourDRadarSts1Vcc.h"
#include "someip-protocol/internal/serialization/ser_common.h"
#include "someip-protocol/internal/serialization/ser_forward.h"
#include "someip-protocol/internal/serialization/ser_sizing.h"
#include "someip-protocol/internal/serialization/writer.h"

namespace FourDRadarECUStsGrpSts {

/*!
 * \brief Serializer for datatype /CppImplementationDataTypes/FourDRadarECUStsGrpSts.
 * \details Data type class: DataTypeStruct (CppImplDataTypeStruct).
 *          is TLV struct: false
 *
 * \tparam TpPack Transformation properties to be used for serialization.
 *
 * \param[in, out] writer Reference to byte stream writer.
 * \param[in] data Reference to the data object of type /CppImplementationDataTypes/FourDRadarECUStsGrpSts to be serialized.
 * \pre The writer holds a memory buffer which is enough to store the serialized data.
 * \context Reactor|App
 * \threadsafe FALSE
 * \reentrant TRUE
 * \vprivate Vector component internal API.
 * \synchronous TRUE
 */
template <typename TpPack>
void SomeIpProtocolSerialize(amsr::someip_protocol::internal::serialization::Writer& writer, ::FourDRadarECUStsGrpSts::FourDRadarECUStsGrpSts const &data) noexcept {
  // Namespace alias for static serialization code
  namespace serialization = amsr::someip_protocol::internal::serialization;
  // Serialize non-TLV struct
    // Serialize struct member 'FourDRadarECUSts_ref' of type /CppImplementationDataTypes/FourDRadarECUSts
    serialization::SomeIpProtocolSerialize<
                        TpPack,
                        // Config of struct length field (/CppImplementationDataTypes/FourDRadarECUSts)
                        serialization::LengthSize<serialization::Tp<TpPack>::kSizeOfStructLengthField, typename serialization::Tp<TpPack>::ByteOrder>

                        >(writer, data.FourDRadarECUSts_ref);
    // Serialize struct member 'FrontFourDRadarSts1Vcc_ref' of type /CppImplementationDataTypes/FrontFourDRadarSts1Vcc
    serialization::SomeIpProtocolSerialize<
                        TpPack,
                        // Config of struct length field (/CppImplementationDataTypes/FrontFourDRadarSts1Vcc)
                        serialization::LengthSize<serialization::Tp<TpPack>::kSizeOfStructLengthField, typename serialization::Tp<TpPack>::ByteOrder>

                        >(writer, data.FrontFourDRadarSts1Vcc_ref);
}

/*!
 * \brief Calculates the required buffer size for datatype /CppImplementationDataTypes/FourDRadarECUStsGrpSts.
 * \details Data type class: DataTypeStruct (CppImplDataTypeStruct).
 *          is TLV struct: false
 *
 * \tparam TpPack Transformation properties to be used for serialization.
 * \param[in] data Reference to the data object of type /CppImplementationDataTypes/FourDRadarECUStsGrpSts.
 * \return Returns the required buffer size for the struct in bytes.
 * \pre -
 * \context Reactor|App
 * \threadsafe FALSE
 * \reentrant TRUE
 * \vprivate Vector component internal API.
 * \synchronous TRUE
 */
template <typename TpPack>
constexpr std::size_t GetRequiredBufferSize(::FourDRadarECUStsGrpSts::FourDRadarECUStsGrpSts const &data) noexcept {
  // Namespace alias for static serialization code
  namespace serialization = amsr::someip_protocol::internal::serialization;

  // Sum of required size
  std::size_t required_buffer_size{0};

  // Accumulate the static size of struct member 'FourDRadarECUSts_ref' of type /CppImplementationDataTypes/FourDRadarECUSts
  required_buffer_size += serialization::GetRequiredBufferSize<
                        TpPack,
                        // Config of struct length field (/CppImplementationDataTypes/FourDRadarECUSts)
                        serialization::LengthSize<serialization::Tp<TpPack>::kSizeOfStructLengthField, typename serialization::Tp<TpPack>::ByteOrder>

                        >(data.FourDRadarECUSts_ref);
  // Accumulate the static size of struct member 'FrontFourDRadarSts1Vcc_ref' of type /CppImplementationDataTypes/FrontFourDRadarSts1Vcc
  required_buffer_size += serialization::GetRequiredBufferSize<
                        TpPack,
                        // Config of struct length field (/CppImplementationDataTypes/FrontFourDRadarSts1Vcc)
                        serialization::LengthSize<serialization::Tp<TpPack>::kSizeOfStructLengthField, typename serialization::Tp<TpPack>::ByteOrder>

                        >(data.FrontFourDRadarSts1Vcc_ref);

  return required_buffer_size;
}

/*!
 * \brief Checks if datatype /CppImplementationDataTypes/FourDRadarECUStsGrpSts is of static size.
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
constexpr bool IsStaticSize(amsr::someip_protocol::internal::serialization::SizeToken<::FourDRadarECUStsGrpSts::FourDRadarECUStsGrpSts>) noexcept {
  // Namespace alias for static serialization code
  namespace serialization = amsr::someip_protocol::internal::serialization;

  constexpr bool is_static_size{
  // Check static size status of struct member 'FourDRadarECUSts_ref' of type /CppImplementationDataTypes/FourDRadarECUSts
  serialization::IsStaticSize<
                      TpPack,
                      // Config of struct length field (/CppImplementationDataTypes/FourDRadarECUSts)
                      serialization::LengthSize<serialization::Tp<TpPack>::kSizeOfStructLengthField, typename serialization::Tp<TpPack>::ByteOrder>

                      >(serialization::SizeToken<::FourDRadarECUSts::FourDRadarECUSts>{})  && 
  
  // Check static size status of struct member 'FrontFourDRadarSts1Vcc_ref' of type /CppImplementationDataTypes/FrontFourDRadarSts1Vcc
  serialization::IsStaticSize<
                      TpPack,
                      // Config of struct length field (/CppImplementationDataTypes/FrontFourDRadarSts1Vcc)
                      serialization::LengthSize<serialization::Tp<TpPack>::kSizeOfStructLengthField, typename serialization::Tp<TpPack>::ByteOrder>

                      >(serialization::SizeToken<::FrontFourDRadarSts1Vcc::FrontFourDRadarSts1Vcc>{}) 
  };
    return is_static_size;
}

}  // namespace FourDRadarECUStsGrpSts

#endif  // RADARADAPTOREXE_INCLUDE_AMSR_SOMEIP_PROTOCOL_INTERNAL_DATATYPE_SERIALIZATION_FOURDRADARECUSTSGRPSTS_SERIALIZER_FOURDRADARECUSTSGRPSTS_H_

