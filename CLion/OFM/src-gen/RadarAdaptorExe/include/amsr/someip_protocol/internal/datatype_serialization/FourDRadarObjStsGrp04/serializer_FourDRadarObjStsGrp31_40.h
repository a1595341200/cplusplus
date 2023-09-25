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
/**        \file  RadarAdaptorExe/include/amsr/someip_protocol/internal/datatype_serialization/FourDRadarObjStsGrp04/serializer_FourDRadarObjStsGrp31_40.h
 *        \brief  SOME/IP protocol serializer implementation for datatype 'FourDRadarObjStsGrp31_40'
 *
 *      \details  /CppImplementationDataTypes/FourDRadarObjStsGrp31_40
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 *  GENERATOR INFORMATION
 *  -------------------------------------------------------------------------------------------------------------------
 *    Generator Name: amsr_someipprotocol
 *         Commit ID: 3fd8aac035abb6fb6709609fe09ab84fd0e635d8
 *********************************************************************************************************************/

#ifndef RADARADAPTOREXE_INCLUDE_AMSR_SOMEIP_PROTOCOL_INTERNAL_DATATYPE_SERIALIZATION_FOURDRADAROBJSTSGRP04_SERIALIZER_FOURDRADAROBJSTSGRP31_40_H_
#define RADARADAPTOREXE_INCLUDE_AMSR_SOMEIP_PROTOCOL_INTERNAL_DATATYPE_SERIALIZATION_FOURDRADAROBJSTSGRP04_SERIALIZER_FOURDRADAROBJSTSGRP31_40_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include "FourDRadarObjStsGrp04/impl_type_fourdradarobjstsgrp31_40.h"
#include "amsr/someip_protocol/internal/datatype_serialization/FourDRadarObjSt/serializer_FourDRadarObjSt.h"
#include "amsr/someip_protocol/internal/datatype_serialization/TFourDRadarDataValid/serializer_TFourDRadarDataValid.h"
#include "someip-protocol/internal/serialization/ser_common.h"
#include "someip-protocol/internal/serialization/ser_forward.h"
#include "someip-protocol/internal/serialization/ser_sizing.h"
#include "someip-protocol/internal/serialization/writer.h"

namespace FourDRadarObjStsGrp04 {

/*!
 * \brief Serializer for datatype /CppImplementationDataTypes/FourDRadarObjStsGrp31_40.
 * \details Data type class: DataTypeStruct (CppImplDataTypeStruct).
 *          is TLV struct: false
 *
 * \tparam TpPack Transformation properties to be used for serialization.
 *
 * \param[in, out] writer Reference to byte stream writer.
 * \param[in] data Reference to the data object of type /CppImplementationDataTypes/FourDRadarObjStsGrp31_40 to be serialized.
 * \pre The writer holds a memory buffer which is enough to store the serialized data.
 * \context Reactor|App
 * \threadsafe FALSE
 * \reentrant TRUE
 * \vprivate Vector component internal API.
 * \synchronous TRUE
 */
template <typename TpPack>
void SomeIpProtocolSerialize(amsr::someip_protocol::internal::serialization::Writer& writer, ::FourDRadarObjStsGrp04::FourDRadarObjStsGrp31_40 const &data) noexcept {
  // Namespace alias for static serialization code
  namespace serialization = amsr::someip_protocol::internal::serialization;
  // Serialize non-TLV struct
    // Serialize struct member 'TFourDRadarDataValid31_40_ref' of type /CppImplementationDataTypes/TFourDRadarDataValid31_40
    serialization::SomeIpProtocolSerialize<
                        TpPack,
                        // Config of array length field (/CppImplementationDataTypes/TFourDRadarDataValid31_40)
                        serialization::LengthSize<serialization::Tp<TpPack>::kSizeOfArrayLengthField, typename serialization::Tp<TpPack>::ByteOrder>,
                        // Config of array value type (DataTypeStruct, /CppImplementationDataTypes/TFourDRadarDataValid)
                        // Config of struct length field (/CppImplementationDataTypes/TFourDRadarDataValid)
                        serialization::LengthSize<serialization::Tp<TpPack>::kSizeOfStructLengthField, typename serialization::Tp<TpPack>::ByteOrder>
                        
                        // End of config of array value type (DataTypeStruct, /CppImplementationDataTypes/TFourDRadarDataValid)

                        >(writer, data.TFourDRadarDataValid31_40_ref);
    // Serialize struct member 'FourDRadarObjSts31_40_ref' of type /CppImplementationDataTypes/FourDRadarObjSts31_40
    serialization::SomeIpProtocolSerialize<
                        TpPack,
                        // Config of array length field (/CppImplementationDataTypes/FourDRadarObjSts31_40)
                        serialization::LengthSize<serialization::Tp<TpPack>::kSizeOfArrayLengthField, typename serialization::Tp<TpPack>::ByteOrder>,
                        // Config of array value type (DataTypeStruct, /CppImplementationDataTypes/FourDRadarObjSt)
                        // Config of struct length field (/CppImplementationDataTypes/FourDRadarObjSt)
                        serialization::LengthSize<serialization::Tp<TpPack>::kSizeOfStructLengthField, typename serialization::Tp<TpPack>::ByteOrder>
                        
                        // End of config of array value type (DataTypeStruct, /CppImplementationDataTypes/FourDRadarObjSt)

                        >(writer, data.FourDRadarObjSts31_40_ref);
    // Serialize struct member 'ErrorStatuse31_40_ref' of type /CppImplementationDataTypes/ErrorStatuse31_40
    serialization::SomeIpProtocolSerialize<
                        TpPack,
                        // Config of array length field (/CppImplementationDataTypes/ErrorStatuse31_40)
                        serialization::LengthSize<serialization::Tp<TpPack>::kSizeOfArrayLengthField, typename serialization::Tp<TpPack>::ByteOrder>,
                        // Config of array value type (DataTypeValue, /CppImplementationDataTypes/uint32_t)
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/uint32_t)
                        typename serialization::Tp<TpPack>::ByteOrder
                        
                        // End of config of array value type (DataTypeValue, /CppImplementationDataTypes/uint32_t)

                        >(writer, data.ErrorStatuse31_40_ref);
}

/*!
 * \brief Calculates the required buffer size for datatype /CppImplementationDataTypes/FourDRadarObjStsGrp31_40.
 * \details Data type class: DataTypeStruct (CppImplDataTypeStruct).
 *          is TLV struct: false
 *
 * \tparam TpPack Transformation properties to be used for serialization.
 * \param[in] data Reference to the data object of type /CppImplementationDataTypes/FourDRadarObjStsGrp31_40.
 * \return Returns the required buffer size for the struct in bytes.
 * \pre -
 * \context Reactor|App
 * \threadsafe FALSE
 * \reentrant TRUE
 * \vprivate Vector component internal API.
 * \synchronous TRUE
 */
template <typename TpPack>
constexpr std::size_t GetRequiredBufferSize(::FourDRadarObjStsGrp04::FourDRadarObjStsGrp31_40 const &data) noexcept {
  // Namespace alias for static serialization code
  namespace serialization = amsr::someip_protocol::internal::serialization;

  // Sum of required size
  std::size_t required_buffer_size{0};

  // Accumulate the static size of struct member 'TFourDRadarDataValid31_40_ref' of type /CppImplementationDataTypes/TFourDRadarDataValid31_40
  required_buffer_size += serialization::GetRequiredBufferSize<
                        TpPack,
                        // Config of array length field (/CppImplementationDataTypes/TFourDRadarDataValid31_40)
                        serialization::LengthSize<serialization::Tp<TpPack>::kSizeOfArrayLengthField, typename serialization::Tp<TpPack>::ByteOrder>,
                        // Config of array value type (DataTypeStruct, /CppImplementationDataTypes/TFourDRadarDataValid)
                        // Config of struct length field (/CppImplementationDataTypes/TFourDRadarDataValid)
                        serialization::LengthSize<serialization::Tp<TpPack>::kSizeOfStructLengthField, typename serialization::Tp<TpPack>::ByteOrder>
                        
                        // End of config of array value type (DataTypeStruct, /CppImplementationDataTypes/TFourDRadarDataValid)

                        >(data.TFourDRadarDataValid31_40_ref);
  // Accumulate the static size of struct member 'FourDRadarObjSts31_40_ref' of type /CppImplementationDataTypes/FourDRadarObjSts31_40
  required_buffer_size += serialization::GetRequiredBufferSize<
                        TpPack,
                        // Config of array length field (/CppImplementationDataTypes/FourDRadarObjSts31_40)
                        serialization::LengthSize<serialization::Tp<TpPack>::kSizeOfArrayLengthField, typename serialization::Tp<TpPack>::ByteOrder>,
                        // Config of array value type (DataTypeStruct, /CppImplementationDataTypes/FourDRadarObjSt)
                        // Config of struct length field (/CppImplementationDataTypes/FourDRadarObjSt)
                        serialization::LengthSize<serialization::Tp<TpPack>::kSizeOfStructLengthField, typename serialization::Tp<TpPack>::ByteOrder>
                        
                        // End of config of array value type (DataTypeStruct, /CppImplementationDataTypes/FourDRadarObjSt)

                        >(data.FourDRadarObjSts31_40_ref);
  // Accumulate the static size of struct member 'ErrorStatuse31_40_ref' of type /CppImplementationDataTypes/ErrorStatuse31_40
  required_buffer_size += serialization::GetRequiredBufferSize<
                        TpPack,
                        // Config of array length field (/CppImplementationDataTypes/ErrorStatuse31_40)
                        serialization::LengthSize<serialization::Tp<TpPack>::kSizeOfArrayLengthField, typename serialization::Tp<TpPack>::ByteOrder>,
                        // Config of array value type (DataTypeValue, /CppImplementationDataTypes/uint32_t)
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/uint32_t)
                        typename serialization::Tp<TpPack>::ByteOrder
                        
                        // End of config of array value type (DataTypeValue, /CppImplementationDataTypes/uint32_t)

                        >(data.ErrorStatuse31_40_ref);

  return required_buffer_size;
}

/*!
 * \brief Checks if datatype /CppImplementationDataTypes/FourDRadarObjStsGrp31_40 is of static size.
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
constexpr bool IsStaticSize(amsr::someip_protocol::internal::serialization::SizeToken<::FourDRadarObjStsGrp04::FourDRadarObjStsGrp31_40>) noexcept {
  // Namespace alias for static serialization code
  namespace serialization = amsr::someip_protocol::internal::serialization;

  constexpr bool is_static_size{
  // Check static size status of struct member 'TFourDRadarDataValid31_40_ref' of type /CppImplementationDataTypes/TFourDRadarDataValid31_40
  serialization::IsStaticSize<
                      TpPack,
                      // Config of array length field (/CppImplementationDataTypes/TFourDRadarDataValid31_40)
                      serialization::LengthSize<serialization::Tp<TpPack>::kSizeOfArrayLengthField, typename serialization::Tp<TpPack>::ByteOrder>,
                      // Config of array value type (DataTypeStruct, /CppImplementationDataTypes/TFourDRadarDataValid)
                      // Config of struct length field (/CppImplementationDataTypes/TFourDRadarDataValid)
                      serialization::LengthSize<serialization::Tp<TpPack>::kSizeOfStructLengthField, typename serialization::Tp<TpPack>::ByteOrder>
                      
                      // End of config of array value type (DataTypeStruct, /CppImplementationDataTypes/TFourDRadarDataValid)

                      >(serialization::SizeToken<::TFourDRadarDataValid31_40::TFourDRadarDataValid31_40>{})  && 
  
  // Check static size status of struct member 'FourDRadarObjSts31_40_ref' of type /CppImplementationDataTypes/FourDRadarObjSts31_40
  serialization::IsStaticSize<
                      TpPack,
                      // Config of array length field (/CppImplementationDataTypes/FourDRadarObjSts31_40)
                      serialization::LengthSize<serialization::Tp<TpPack>::kSizeOfArrayLengthField, typename serialization::Tp<TpPack>::ByteOrder>,
                      // Config of array value type (DataTypeStruct, /CppImplementationDataTypes/FourDRadarObjSt)
                      // Config of struct length field (/CppImplementationDataTypes/FourDRadarObjSt)
                      serialization::LengthSize<serialization::Tp<TpPack>::kSizeOfStructLengthField, typename serialization::Tp<TpPack>::ByteOrder>
                      
                      // End of config of array value type (DataTypeStruct, /CppImplementationDataTypes/FourDRadarObjSt)

                      >(serialization::SizeToken<::FourDRadarObjSts31_40::FourDRadarObjSts31_40>{})  && 
  
  // Check static size status of struct member 'ErrorStatuse31_40_ref' of type /CppImplementationDataTypes/ErrorStatuse31_40
  serialization::IsStaticSize<
                      TpPack,
                      // Config of array length field (/CppImplementationDataTypes/ErrorStatuse31_40)
                      serialization::LengthSize<serialization::Tp<TpPack>::kSizeOfArrayLengthField, typename serialization::Tp<TpPack>::ByteOrder>,
                      // Config of array value type (DataTypeValue, /CppImplementationDataTypes/uint32_t)
                      // Byte-order of primitive datatype (/CppImplementationDataTypes/uint32_t)
                      typename serialization::Tp<TpPack>::ByteOrder
                      
                      // End of config of array value type (DataTypeValue, /CppImplementationDataTypes/uint32_t)

                      >(serialization::SizeToken<::ErrorStatuse31_40::ErrorStatuse31_40>{}) 
  };
    return is_static_size;
}

}  // namespace FourDRadarObjStsGrp04

#endif  // RADARADAPTOREXE_INCLUDE_AMSR_SOMEIP_PROTOCOL_INTERNAL_DATATYPE_SERIALIZATION_FOURDRADAROBJSTSGRP04_SERIALIZER_FOURDRADAROBJSTSGRP31_40_H_

