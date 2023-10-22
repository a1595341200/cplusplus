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
/**        \file  RoadModelFusionExe/include/amsr/someip_protocol/internal/datatype_serialization/RefPathGlobal/serializer_RefPathGlobal.h
 *        \brief  SOME/IP protocol serializer implementation for datatype 'RefPathGlobal'
 *
 *      \details  /CppImplementationDataTypes/RefPathGlobal
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 *  GENERATOR INFORMATION
 *  -------------------------------------------------------------------------------------------------------------------
 *    Generator Name: amsr_someipprotocol
 *         Commit ID: 3fd8aac035abb6fb6709609fe09ab84fd0e635d8
 *********************************************************************************************************************/

#ifndef ROADMODELFUSIONEXE_INCLUDE_AMSR_SOMEIP_PROTOCOL_INTERNAL_DATATYPE_SERIALIZATION_REFPATHGLOBAL_SERIALIZER_REFPATHGLOBAL_H_
#define ROADMODELFUSIONEXE_INCLUDE_AMSR_SOMEIP_PROTOCOL_INTERNAL_DATATYPE_SERIALIZATION_REFPATHGLOBAL_SERIALIZER_REFPATHGLOBAL_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include "RefPathGlobal/impl_type_refpathglobal.h"
#include "someip-protocol/internal/serialization/ser_common.h"
#include "someip-protocol/internal/serialization/ser_forward.h"
#include "someip-protocol/internal/serialization/ser_sizing.h"
#include "someip-protocol/internal/serialization/writer.h"

namespace RefPathGlobal {

/*!
 * \brief Serializer for datatype /CppImplementationDataTypes/RefPathGlobal.
 * \details Data type class: DataTypeStruct (CppImplDataTypeStruct).
 *          is TLV struct: false
 *
 * \tparam TpPack Transformation properties to be used for serialization.
 *
 * \param[in, out] writer Reference to byte stream writer.
 * \param[in] data Reference to the data object of type /CppImplementationDataTypes/RefPathGlobal to be serialized.
 * \pre The writer holds a memory buffer which is enough to store the serialized data.
 * \context Reactor|App
 * \threadsafe FALSE
 * \reentrant TRUE
 * \vprivate Vector component internal API.
 * \synchronous TRUE
 */
template <typename TpPack>
void SomeIpProtocolSerialize(amsr::someip_protocol::internal::serialization::Writer& writer, ::RefPathGlobal::RefPathGlobal const &data) noexcept {
  // Namespace alias for static serialization code
  namespace serialization = amsr::someip_protocol::internal::serialization;
  // Serialize non-TLV struct
    // Serialize struct member 'NodeOffset_ref' of type /CppImplementationDataTypes/float
    serialization::SomeIpProtocolSerialize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/float)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(writer, data.NodeOffset_ref);
    // Serialize struct member 'ProbabilityLe_ref' of type /CppImplementationDataTypes/ProbabilityLe
    serialization::SomeIpProtocolSerialize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/ProbabilityLe)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(writer, data.ProbabilityLe_ref);
    // Serialize struct member 'ProbabilityRi_ref' of type /CppImplementationDataTypes/ProbabilityRi
    serialization::SomeIpProtocolSerialize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/ProbabilityRi)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(writer, data.ProbabilityRi_ref);
}

/*!
 * \brief Calculates the required buffer size for datatype /CppImplementationDataTypes/RefPathGlobal.
 * \details Data type class: DataTypeStruct (CppImplDataTypeStruct).
 *          is TLV struct: false
 *
 * \tparam TpPack Transformation properties to be used for serialization.
 * \param[in] data Reference to the data object of type /CppImplementationDataTypes/RefPathGlobal.
 * \return Returns the required buffer size for the struct in bytes.
 * \pre -
 * \context Reactor|App
 * \threadsafe FALSE
 * \reentrant TRUE
 * \vprivate Vector component internal API.
 * \synchronous TRUE
 */
template <typename TpPack>
constexpr std::size_t GetRequiredBufferSize(::RefPathGlobal::RefPathGlobal const &data) noexcept {
  // Namespace alias for static serialization code
  namespace serialization = amsr::someip_protocol::internal::serialization;

  // Sum of required size
  std::size_t required_buffer_size{0};

  // Accumulate the static size of struct member 'NodeOffset_ref' of type /CppImplementationDataTypes/float
  required_buffer_size += serialization::GetRequiredBufferSize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/float)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(data.NodeOffset_ref);
  // Accumulate the static size of struct member 'ProbabilityLe_ref' of type /CppImplementationDataTypes/ProbabilityLe
  required_buffer_size += serialization::GetRequiredBufferSize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/ProbabilityLe)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(data.ProbabilityLe_ref);
  // Accumulate the static size of struct member 'ProbabilityRi_ref' of type /CppImplementationDataTypes/ProbabilityRi
  required_buffer_size += serialization::GetRequiredBufferSize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/ProbabilityRi)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(data.ProbabilityRi_ref);

  return required_buffer_size;
}

/*!
 * \brief Checks if datatype /CppImplementationDataTypes/RefPathGlobal is of static size.
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
constexpr bool IsStaticSize(amsr::someip_protocol::internal::serialization::SizeToken<::RefPathGlobal::RefPathGlobal>) noexcept {
  // Namespace alias for static serialization code
  namespace serialization = amsr::someip_protocol::internal::serialization;

  constexpr bool is_static_size{
  // Check static size status of struct member 'NodeOffset_ref' of type /CppImplementationDataTypes/float
  serialization::IsStaticSize<
                      TpPack,
                      // Byte-order of primitive datatype (/CppImplementationDataTypes/float)
                      typename serialization::Tp<TpPack>::ByteOrder

                      >(serialization::SizeToken<::NodeOffset::NodeOffset>{})  && 
  
  // Check static size status of struct member 'ProbabilityLe_ref' of type /CppImplementationDataTypes/ProbabilityLe
  serialization::IsStaticSize<
                      TpPack,
                      // Byte-order of primitive datatype (/CppImplementationDataTypes/ProbabilityLe)
                      typename serialization::Tp<TpPack>::ByteOrder

                      >(serialization::SizeToken<::ProbabilityLe::ProbabilityLe>{})  && 
  
  // Check static size status of struct member 'ProbabilityRi_ref' of type /CppImplementationDataTypes/ProbabilityRi
  serialization::IsStaticSize<
                      TpPack,
                      // Byte-order of primitive datatype (/CppImplementationDataTypes/ProbabilityRi)
                      typename serialization::Tp<TpPack>::ByteOrder

                      >(serialization::SizeToken<::ProbabilityRi::ProbabilityRi>{}) 
  };
    return is_static_size;
}

}  // namespace RefPathGlobal

#endif  // ROADMODELFUSIONEXE_INCLUDE_AMSR_SOMEIP_PROTOCOL_INTERNAL_DATATYPE_SERIALIZATION_REFPATHGLOBAL_SERIALIZER_REFPATHGLOBAL_H_

