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
/**        \file  EHRExe/include/amsr/someip_protocol/internal/datatype_serialization/GeofennceJudge/serializer_GeofennceJudge.h
 *        \brief  SOME/IP protocol serializer implementation for datatype 'GeofennceJudge'
 *
 *      \details  /CppImplementationDataTypes/GeofennceJudge
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 *  GENERATOR INFORMATION
 *  -------------------------------------------------------------------------------------------------------------------
 *    Generator Name: amsr_someipprotocol
 *         Commit ID: 3fd8aac035abb6fb6709609fe09ab84fd0e635d8
 *********************************************************************************************************************/

#ifndef EHREXE_INCLUDE_AMSR_SOMEIP_PROTOCOL_INTERNAL_DATATYPE_SERIALIZATION_GEOFENNCEJUDGE_SERIALIZER_GEOFENNCEJUDGE_H_
#define EHREXE_INCLUDE_AMSR_SOMEIP_PROTOCOL_INTERNAL_DATATYPE_SERIALIZATION_GEOFENNCEJUDGE_SERIALIZER_GEOFENNCEJUDGE_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include "GeofennceJudge/impl_type_geofenncejudge.h"
#include "someip-protocol/internal/serialization/ser_common.h"
#include "someip-protocol/internal/serialization/ser_forward.h"
#include "someip-protocol/internal/serialization/ser_sizing.h"
#include "someip-protocol/internal/serialization/writer.h"

namespace GeofennceJudge {

/*!
 * \brief Serializer for datatype /CppImplementationDataTypes/GeofennceJudge.
 * \details Data type class: DataTypeStruct (CppImplDataTypeStruct).
 *          is TLV struct: false
 *
 * \tparam TpPack Transformation properties to be used for serialization.
 *
 * \param[in, out] writer Reference to byte stream writer.
 * \param[in] data Reference to the data object of type /CppImplementationDataTypes/GeofennceJudge to be serialized.
 * \pre The writer holds a memory buffer which is enough to store the serialized data.
 * \context Reactor|App
 * \threadsafe FALSE
 * \reentrant TRUE
 * \vprivate Vector component internal API.
 * \synchronous TRUE
 */
template <typename TpPack>
void SomeIpProtocolSerialize(amsr::someip_protocol::internal::serialization::Writer& writer, ::GeofennceJudge::GeofennceJudge const &data) noexcept {
  // Namespace alias for static serialization code
  namespace serialization = amsr::someip_protocol::internal::serialization;
  // Serialize non-TLV struct
    // Serialize struct member 'Geofennce_judge_status_ref' of type /CppImplementationDataTypes/Geofennce_judge_status
    serialization::SomeIpProtocolSerialize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/Geofennce_judge_status)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(writer, data.Geofennce_judge_status_ref);
    // Serialize struct member 'Geofence_judge_type_ref' of type /CppImplementationDataTypes/Geofence_judge_type
    serialization::SomeIpProtocolSerialize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/Geofence_judge_type)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(writer, data.Geofence_judge_type_ref);
}

/*!
 * \brief Calculates the required buffer size for datatype /CppImplementationDataTypes/GeofennceJudge.
 * \details Data type class: DataTypeStruct (CppImplDataTypeStruct).
 *          is TLV struct: false
 *
 * \tparam TpPack Transformation properties to be used for serialization.
 * \param[in] data Reference to the data object of type /CppImplementationDataTypes/GeofennceJudge.
 * \return Returns the required buffer size for the struct in bytes.
 * \pre -
 * \context Reactor|App
 * \threadsafe FALSE
 * \reentrant TRUE
 * \vprivate Vector component internal API.
 * \synchronous TRUE
 */
template <typename TpPack>
constexpr std::size_t GetRequiredBufferSize(::GeofennceJudge::GeofennceJudge const &data) noexcept {
  // Namespace alias for static serialization code
  namespace serialization = amsr::someip_protocol::internal::serialization;

  // Sum of required size
  std::size_t required_buffer_size{0};

  // Accumulate the static size of struct member 'Geofennce_judge_status_ref' of type /CppImplementationDataTypes/Geofennce_judge_status
  required_buffer_size += serialization::GetRequiredBufferSize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/Geofennce_judge_status)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(data.Geofennce_judge_status_ref);
  // Accumulate the static size of struct member 'Geofence_judge_type_ref' of type /CppImplementationDataTypes/Geofence_judge_type
  required_buffer_size += serialization::GetRequiredBufferSize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/Geofence_judge_type)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(data.Geofence_judge_type_ref);

  return required_buffer_size;
}

/*!
 * \brief Checks if datatype /CppImplementationDataTypes/GeofennceJudge is of static size.
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
constexpr bool IsStaticSize(amsr::someip_protocol::internal::serialization::SizeToken<::GeofennceJudge::GeofennceJudge>) noexcept {
  // Namespace alias for static serialization code
  namespace serialization = amsr::someip_protocol::internal::serialization;

  constexpr bool is_static_size{
  // Check static size status of struct member 'Geofennce_judge_status_ref' of type /CppImplementationDataTypes/Geofennce_judge_status
  serialization::IsStaticSize<
                      TpPack,
                      // Byte-order of primitive datatype (/CppImplementationDataTypes/Geofennce_judge_status)
                      typename serialization::Tp<TpPack>::ByteOrder

                      >(serialization::SizeToken<::Geofennce_judge_status::Geofennce_judge_status>{})  && 
  
  // Check static size status of struct member 'Geofence_judge_type_ref' of type /CppImplementationDataTypes/Geofence_judge_type
  serialization::IsStaticSize<
                      TpPack,
                      // Byte-order of primitive datatype (/CppImplementationDataTypes/Geofence_judge_type)
                      typename serialization::Tp<TpPack>::ByteOrder

                      >(serialization::SizeToken<::Geofence_judge_type::Geofence_judge_type>{}) 
  };
    return is_static_size;
}

}  // namespace GeofennceJudge

#endif  // EHREXE_INCLUDE_AMSR_SOMEIP_PROTOCOL_INTERNAL_DATATYPE_SERIALIZATION_GEOFENNCEJUDGE_SERIALIZER_GEOFENNCEJUDGE_H_

