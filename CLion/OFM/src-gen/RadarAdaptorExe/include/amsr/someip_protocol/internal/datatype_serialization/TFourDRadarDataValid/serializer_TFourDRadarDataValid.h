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
/**        \file  RadarAdaptorExe/include/amsr/someip_protocol/internal/datatype_serialization/TFourDRadarDataValid/serializer_TFourDRadarDataValid.h
 *        \brief  SOME/IP protocol serializer implementation for datatype 'TFourDRadarDataValid'
 *
 *      \details  /CppImplementationDataTypes/TFourDRadarDataValid
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 *  GENERATOR INFORMATION
 *  -------------------------------------------------------------------------------------------------------------------
 *    Generator Name: amsr_someipprotocol
 *         Commit ID: 3fd8aac035abb6fb6709609fe09ab84fd0e635d8
 *********************************************************************************************************************/

#ifndef RADARADAPTOREXE_INCLUDE_AMSR_SOMEIP_PROTOCOL_INTERNAL_DATATYPE_SERIALIZATION_TFOURDRADARDATAVALID_SERIALIZER_TFOURDRADARDATAVALID_H_
#define RADARADAPTOREXE_INCLUDE_AMSR_SOMEIP_PROTOCOL_INTERNAL_DATATYPE_SERIALIZATION_TFOURDRADARDATAVALID_SERIALIZER_TFOURDRADARDATAVALID_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include "TFourDRadarDataValid/impl_type_tfourdradardatavalid.h"
#include "someip-protocol/internal/serialization/ser_common.h"
#include "someip-protocol/internal/serialization/ser_forward.h"
#include "someip-protocol/internal/serialization/ser_sizing.h"
#include "someip-protocol/internal/serialization/writer.h"

namespace TFourDRadarDataValid {

/*!
 * \brief Serializer for datatype /CppImplementationDataTypes/TFourDRadarDataValid.
 * \details Data type class: DataTypeStruct (CppImplDataTypeStruct).
 *          is TLV struct: false
 *
 * \tparam TpPack Transformation properties to be used for serialization.
 *
 * \param[in, out] writer Reference to byte stream writer.
 * \param[in] data Reference to the data object of type /CppImplementationDataTypes/TFourDRadarDataValid to be serialized.
 * \pre The writer holds a memory buffer which is enough to store the serialized data.
 * \context Reactor|App
 * \threadsafe FALSE
 * \reentrant TRUE
 * \vprivate Vector component internal API.
 * \synchronous TRUE
 */
template <typename TpPack>
void SomeIpProtocolSerialize(amsr::someip_protocol::internal::serialization::Writer& writer, ::TFourDRadarDataValid::TFourDRadarDataValid const &data) noexcept {
  // Namespace alias for static serialization code
  namespace serialization = amsr::someip_protocol::internal::serialization;
  // Serialize non-TLV struct
    // Serialize struct member 'ObjValid_ref' of type /CppImplementationDataTypes/ObjValid
    serialization::SomeIpProtocolSerialize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/ObjValid)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(writer, data.ObjValid_ref);
    // Serialize struct member 'ErrStsValid_ref' of type /CppImplementationDataTypes/ErrStsValid
    serialization::SomeIpProtocolSerialize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/ErrStsValid)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(writer, data.ErrStsValid_ref);
}

/*!
 * \brief Calculates the required buffer size for datatype /CppImplementationDataTypes/TFourDRadarDataValid.
 * \details Data type class: DataTypeStruct (CppImplDataTypeStruct).
 *          is TLV struct: false
 *
 * \tparam TpPack Transformation properties to be used for serialization.
 * \param[in] data Reference to the data object of type /CppImplementationDataTypes/TFourDRadarDataValid.
 * \return Returns the required buffer size for the struct in bytes.
 * \pre -
 * \context Reactor|App
 * \threadsafe FALSE
 * \reentrant TRUE
 * \vprivate Vector component internal API.
 * \synchronous TRUE
 */
template <typename TpPack>
constexpr std::size_t GetRequiredBufferSize(::TFourDRadarDataValid::TFourDRadarDataValid const &data) noexcept {
  // Namespace alias for static serialization code
  namespace serialization = amsr::someip_protocol::internal::serialization;

  // Sum of required size
  std::size_t required_buffer_size{0};

  // Accumulate the static size of struct member 'ObjValid_ref' of type /CppImplementationDataTypes/ObjValid
  required_buffer_size += serialization::GetRequiredBufferSize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/ObjValid)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(data.ObjValid_ref);
  // Accumulate the static size of struct member 'ErrStsValid_ref' of type /CppImplementationDataTypes/ErrStsValid
  required_buffer_size += serialization::GetRequiredBufferSize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/ErrStsValid)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(data.ErrStsValid_ref);

  return required_buffer_size;
}

/*!
 * \brief Checks if datatype /CppImplementationDataTypes/TFourDRadarDataValid is of static size.
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
constexpr bool IsStaticSize(amsr::someip_protocol::internal::serialization::SizeToken<::TFourDRadarDataValid::TFourDRadarDataValid>) noexcept {
  // Namespace alias for static serialization code
  namespace serialization = amsr::someip_protocol::internal::serialization;

  constexpr bool is_static_size{
  // Check static size status of struct member 'ObjValid_ref' of type /CppImplementationDataTypes/ObjValid
  serialization::IsStaticSize<
                      TpPack,
                      // Byte-order of primitive datatype (/CppImplementationDataTypes/ObjValid)
                      typename serialization::Tp<TpPack>::ByteOrder

                      >(serialization::SizeToken<::ObjValid::ObjValid>{})  && 
  
  // Check static size status of struct member 'ErrStsValid_ref' of type /CppImplementationDataTypes/ErrStsValid
  serialization::IsStaticSize<
                      TpPack,
                      // Byte-order of primitive datatype (/CppImplementationDataTypes/ErrStsValid)
                      typename serialization::Tp<TpPack>::ByteOrder

                      >(serialization::SizeToken<::ErrStsValid::ErrStsValid>{}) 
  };
    return is_static_size;
}

}  // namespace TFourDRadarDataValid

#endif  // RADARADAPTOREXE_INCLUDE_AMSR_SOMEIP_PROTOCOL_INTERNAL_DATATYPE_SERIALIZATION_TFOURDRADARDATAVALID_SERIALIZER_TFOURDRADARDATAVALID_H_
