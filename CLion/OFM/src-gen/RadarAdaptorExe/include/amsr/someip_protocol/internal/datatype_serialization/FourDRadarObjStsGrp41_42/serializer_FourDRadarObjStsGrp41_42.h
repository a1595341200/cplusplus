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
/**        \file  RadarAdaptorExe/include/amsr/someip_protocol/internal/datatype_serialization/FourDRadarObjStsGrp41_42/serializer_FourDRadarObjStsGrp41_42.h
 *        \brief  SOME/IP protocol serializer implementation for datatype 'FourDRadarObjStsGrp41_42'
 *
 *      \details  /CppImplementationDataTypes/FourDRadarObjStsGrp41_42
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 *  GENERATOR INFORMATION
 *  -------------------------------------------------------------------------------------------------------------------
 *    Generator Name: amsr_someipprotocol
 *         Commit ID: 3fd8aac035abb6fb6709609fe09ab84fd0e635d8
 *********************************************************************************************************************/

#ifndef RADARADAPTOREXE_INCLUDE_AMSR_SOMEIP_PROTOCOL_INTERNAL_DATATYPE_SERIALIZATION_FOURDRADAROBJSTSGRP41_42_SERIALIZER_FOURDRADAROBJSTSGRP41_42_H_
#define RADARADAPTOREXE_INCLUDE_AMSR_SOMEIP_PROTOCOL_INTERNAL_DATATYPE_SERIALIZATION_FOURDRADAROBJSTSGRP41_42_SERIALIZER_FOURDRADAROBJSTSGRP41_42_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include "FourDRadarObjStsGrp41_42/impl_type_fourdradarobjstsgrp41_42.h"
#include "amsr/someip_protocol/internal/datatype_serialization/FourDRadarObjSt/serializer_FourDRadarObjSt.h"
#include "amsr/someip_protocol/internal/datatype_serialization/TFourDRadarDataValid/serializer_TFourDRadarDataValid.h"
#include "someip-protocol/internal/serialization/ser_common.h"
#include "someip-protocol/internal/serialization/ser_forward.h"
#include "someip-protocol/internal/serialization/ser_sizing.h"
#include "someip-protocol/internal/serialization/writer.h"

namespace FourDRadarObjStsGrp41_42 {

/*!
 * \brief Serializer for datatype /CppImplementationDataTypes/FourDRadarObjStsGrp41_42.
 * \details Data type class: DataTypeStruct (CppImplDataTypeStruct).
 *          is TLV struct: false
 *
 * \tparam TpPack Transformation properties to be used for serialization.
 *
 * \param[in, out] writer Reference to byte stream writer.
 * \param[in] data Reference to the data object of type /CppImplementationDataTypes/FourDRadarObjStsGrp41_42 to be serialized.
 * \pre The writer holds a memory buffer which is enough to store the serialized data.
 * \context Reactor|App
 * \threadsafe FALSE
 * \reentrant TRUE
 * \vprivate Vector component internal API.
 * \synchronous TRUE
 */
template <typename TpPack>
void SomeIpProtocolSerialize(amsr::someip_protocol::internal::serialization::Writer& writer, ::FourDRadarObjStsGrp41_42::FourDRadarObjStsGrp41_42 const &data) noexcept {
  // Namespace alias for static serialization code
  namespace serialization = amsr::someip_protocol::internal::serialization;
  // Serialize non-TLV struct
    // Serialize struct member 'TFourDRadarDataValid41_42_ref' of type /CppImplementationDataTypes/TFourDRadarDataValid41_42
    serialization::SomeIpProtocolSerialize<
                        TpPack,
                        // Config of array length field (/CppImplementationDataTypes/TFourDRadarDataValid41_42)
                        serialization::LengthSize<serialization::Tp<TpPack>::kSizeOfArrayLengthField, typename serialization::Tp<TpPack>::ByteOrder>,
                        // Config of array value type (DataTypeStruct, /CppImplementationDataTypes/TFourDRadarDataValid)
                        // Config of struct length field (/CppImplementationDataTypes/TFourDRadarDataValid)
                        serialization::LengthSize<serialization::Tp<TpPack>::kSizeOfStructLengthField, typename serialization::Tp<TpPack>::ByteOrder>
                        
                        // End of config of array value type (DataTypeStruct, /CppImplementationDataTypes/TFourDRadarDataValid)

                        >(writer, data.TFourDRadarDataValid41_42_ref);
    // Serialize struct member 'FourDRadarObjSts41_42_ref' of type /CppImplementationDataTypes/FourDRadarObjSts41_42
    serialization::SomeIpProtocolSerialize<
                        TpPack,
                        // Config of array length field (/CppImplementationDataTypes/FourDRadarObjSts41_42)
                        serialization::LengthSize<serialization::Tp<TpPack>::kSizeOfArrayLengthField, typename serialization::Tp<TpPack>::ByteOrder>,
                        // Config of array value type (DataTypeStruct, /CppImplementationDataTypes/FourDRadarObjSt)
                        // Config of struct length field (/CppImplementationDataTypes/FourDRadarObjSt)
                        serialization::LengthSize<serialization::Tp<TpPack>::kSizeOfStructLengthField, typename serialization::Tp<TpPack>::ByteOrder>
                        
                        // End of config of array value type (DataTypeStruct, /CppImplementationDataTypes/FourDRadarObjSt)

                        >(writer, data.FourDRadarObjSts41_42_ref);
    // Serialize struct member 'ErrorStatuse41_42_ref' of type /CppImplementationDataTypes/ErrorStatuse41_42
    serialization::SomeIpProtocolSerialize<
                        TpPack,
                        // Config of array length field (/CppImplementationDataTypes/ErrorStatuse41_42)
                        serialization::LengthSize<serialization::Tp<TpPack>::kSizeOfArrayLengthField, typename serialization::Tp<TpPack>::ByteOrder>,
                        // Config of array value type (DataTypeValue, /CppImplementationDataTypes/uint32_t)
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/uint32_t)
                        typename serialization::Tp<TpPack>::ByteOrder
                        
                        // End of config of array value type (DataTypeValue, /CppImplementationDataTypes/uint32_t)

                        >(writer, data.ErrorStatuse41_42_ref);
}

/*!
 * \brief Calculates the required buffer size for datatype /CppImplementationDataTypes/FourDRadarObjStsGrp41_42.
 * \details Data type class: DataTypeStruct (CppImplDataTypeStruct).
 *          is TLV struct: false
 *
 * \tparam TpPack Transformation properties to be used for serialization.
 * \param[in] data Reference to the data object of type /CppImplementationDataTypes/FourDRadarObjStsGrp41_42.
 * \return Returns the required buffer size for the struct in bytes.
 * \pre -
 * \context Reactor|App
 * \threadsafe FALSE
 * \reentrant TRUE
 * \vprivate Vector component internal API.
 * \synchronous TRUE
 */
template <typename TpPack>
constexpr std::size_t GetRequiredBufferSize(::FourDRadarObjStsGrp41_42::FourDRadarObjStsGrp41_42 const &data) noexcept {
  // Namespace alias for static serialization code
  namespace serialization = amsr::someip_protocol::internal::serialization;

  // Sum of required size
  std::size_t required_buffer_size{0};

  // Accumulate the static size of struct member 'TFourDRadarDataValid41_42_ref' of type /CppImplementationDataTypes/TFourDRadarDataValid41_42
  required_buffer_size += serialization::GetRequiredBufferSize<
                        TpPack,
                        // Config of array length field (/CppImplementationDataTypes/TFourDRadarDataValid41_42)
                        serialization::LengthSize<serialization::Tp<TpPack>::kSizeOfArrayLengthField, typename serialization::Tp<TpPack>::ByteOrder>,
                        // Config of array value type (DataTypeStruct, /CppImplementationDataTypes/TFourDRadarDataValid)
                        // Config of struct length field (/CppImplementationDataTypes/TFourDRadarDataValid)
                        serialization::LengthSize<serialization::Tp<TpPack>::kSizeOfStructLengthField, typename serialization::Tp<TpPack>::ByteOrder>
                        
                        // End of config of array value type (DataTypeStruct, /CppImplementationDataTypes/TFourDRadarDataValid)

                        >(data.TFourDRadarDataValid41_42_ref);
  // Accumulate the static size of struct member 'FourDRadarObjSts41_42_ref' of type /CppImplementationDataTypes/FourDRadarObjSts41_42
  required_buffer_size += serialization::GetRequiredBufferSize<
                        TpPack,
                        // Config of array length field (/CppImplementationDataTypes/FourDRadarObjSts41_42)
                        serialization::LengthSize<serialization::Tp<TpPack>::kSizeOfArrayLengthField, typename serialization::Tp<TpPack>::ByteOrder>,
                        // Config of array value type (DataTypeStruct, /CppImplementationDataTypes/FourDRadarObjSt)
                        // Config of struct length field (/CppImplementationDataTypes/FourDRadarObjSt)
                        serialization::LengthSize<serialization::Tp<TpPack>::kSizeOfStructLengthField, typename serialization::Tp<TpPack>::ByteOrder>
                        
                        // End of config of array value type (DataTypeStruct, /CppImplementationDataTypes/FourDRadarObjSt)

                        >(data.FourDRadarObjSts41_42_ref);
  // Accumulate the static size of struct member 'ErrorStatuse41_42_ref' of type /CppImplementationDataTypes/ErrorStatuse41_42
  required_buffer_size += serialization::GetRequiredBufferSize<
                        TpPack,
                        // Config of array length field (/CppImplementationDataTypes/ErrorStatuse41_42)
                        serialization::LengthSize<serialization::Tp<TpPack>::kSizeOfArrayLengthField, typename serialization::Tp<TpPack>::ByteOrder>,
                        // Config of array value type (DataTypeValue, /CppImplementationDataTypes/uint32_t)
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/uint32_t)
                        typename serialization::Tp<TpPack>::ByteOrder
                        
                        // End of config of array value type (DataTypeValue, /CppImplementationDataTypes/uint32_t)

                        >(data.ErrorStatuse41_42_ref);

  return required_buffer_size;
}

/*!
 * \brief Checks if datatype /CppImplementationDataTypes/FourDRadarObjStsGrp41_42 is of static size.
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
constexpr bool IsStaticSize(amsr::someip_protocol::internal::serialization::SizeToken<::FourDRadarObjStsGrp41_42::FourDRadarObjStsGrp41_42>) noexcept {
  // Namespace alias for static serialization code
  namespace serialization = amsr::someip_protocol::internal::serialization;

  constexpr bool is_static_size{
  // Check static size status of struct member 'TFourDRadarDataValid41_42_ref' of type /CppImplementationDataTypes/TFourDRadarDataValid41_42
  serialization::IsStaticSize<
                      TpPack,
                      // Config of array length field (/CppImplementationDataTypes/TFourDRadarDataValid41_42)
                      serialization::LengthSize<serialization::Tp<TpPack>::kSizeOfArrayLengthField, typename serialization::Tp<TpPack>::ByteOrder>,
                      // Config of array value type (DataTypeStruct, /CppImplementationDataTypes/TFourDRadarDataValid)
                      // Config of struct length field (/CppImplementationDataTypes/TFourDRadarDataValid)
                      serialization::LengthSize<serialization::Tp<TpPack>::kSizeOfStructLengthField, typename serialization::Tp<TpPack>::ByteOrder>
                      
                      // End of config of array value type (DataTypeStruct, /CppImplementationDataTypes/TFourDRadarDataValid)

                      >(serialization::SizeToken<::TFourDRadarDataValid41_42::TFourDRadarDataValid41_42>{})  && 
  
  // Check static size status of struct member 'FourDRadarObjSts41_42_ref' of type /CppImplementationDataTypes/FourDRadarObjSts41_42
  serialization::IsStaticSize<
                      TpPack,
                      // Config of array length field (/CppImplementationDataTypes/FourDRadarObjSts41_42)
                      serialization::LengthSize<serialization::Tp<TpPack>::kSizeOfArrayLengthField, typename serialization::Tp<TpPack>::ByteOrder>,
                      // Config of array value type (DataTypeStruct, /CppImplementationDataTypes/FourDRadarObjSt)
                      // Config of struct length field (/CppImplementationDataTypes/FourDRadarObjSt)
                      serialization::LengthSize<serialization::Tp<TpPack>::kSizeOfStructLengthField, typename serialization::Tp<TpPack>::ByteOrder>
                      
                      // End of config of array value type (DataTypeStruct, /CppImplementationDataTypes/FourDRadarObjSt)

                      >(serialization::SizeToken<::FourDRadarObjSts41_42::FourDRadarObjSts41_42>{})  && 
  
  // Check static size status of struct member 'ErrorStatuse41_42_ref' of type /CppImplementationDataTypes/ErrorStatuse41_42
  serialization::IsStaticSize<
                      TpPack,
                      // Config of array length field (/CppImplementationDataTypes/ErrorStatuse41_42)
                      serialization::LengthSize<serialization::Tp<TpPack>::kSizeOfArrayLengthField, typename serialization::Tp<TpPack>::ByteOrder>,
                      // Config of array value type (DataTypeValue, /CppImplementationDataTypes/uint32_t)
                      // Byte-order of primitive datatype (/CppImplementationDataTypes/uint32_t)
                      typename serialization::Tp<TpPack>::ByteOrder
                      
                      // End of config of array value type (DataTypeValue, /CppImplementationDataTypes/uint32_t)

                      >(serialization::SizeToken<::ErrorStatuse41_42::ErrorStatuse41_42>{}) 
  };
    return is_static_size;
}

}  // namespace FourDRadarObjStsGrp41_42

#endif  // RADARADAPTOREXE_INCLUDE_AMSR_SOMEIP_PROTOCOL_INTERNAL_DATATYPE_SERIALIZATION_FOURDRADAROBJSTSGRP41_42_SERIALIZER_FOURDRADAROBJSTSGRP41_42_H_

