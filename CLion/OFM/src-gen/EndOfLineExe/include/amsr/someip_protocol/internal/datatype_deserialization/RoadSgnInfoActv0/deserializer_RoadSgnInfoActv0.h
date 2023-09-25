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
/**        \file  EndOfLineExe/include/amsr/someip_protocol/internal/datatype_deserialization/RoadSgnInfoActv0/deserializer_RoadSgnInfoActv0.h
 *        \brief  SOME/IP protocol deserializer implementation for datatype 'RoadSgnInfoActv0'
 *
 *      \details  /CppImplementationDataTypes/RoadSgnInfoActv0
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 *  GENERATOR INFORMATION
 *  -------------------------------------------------------------------------------------------------------------------
 *    Generator Name: amsr_someipprotocol
 *         Commit ID: 3fd8aac035abb6fb6709609fe09ab84fd0e635d8
 *********************************************************************************************************************/

#ifndef ENDOFLINEEXE_INCLUDE_AMSR_SOMEIP_PROTOCOL_INTERNAL_DATATYPE_DESERIALIZATION_ROADSGNINFOACTV0_DESERIALIZER_ROADSGNINFOACTV0_H_
#define ENDOFLINEEXE_INCLUDE_AMSR_SOMEIP_PROTOCOL_INTERNAL_DATATYPE_DESERIALIZATION_ROADSGNINFOACTV0_DESERIALIZER_ROADSGNINFOACTV0_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include "RoadSgnInfoActv0/impl_type_roadsgninfoactv0.h"
#include "someip-protocol/internal/deserialization/deser_wrapper.h"

namespace RoadSgnInfoActv0 {

// VECTOR NC Metric-HIS.PATH: MD_SOMEIPPROTOCOL_Metric-HIS.PATH
/*!
 * \brief Deserializer for datatype /CppImplementationDataTypes/RoadSgnInfoActv0.
 * \details Data type class: DataTypeStruct (CppImplDataTypeStruct).
 *          is TLV struct: false
 *
 * \tparam TpPack Transformation properties to be used for deserialization.
 *
 * \param[in,out] reader Reference to byte stream reader.
 * \param[out]    data Reference to the data object of type /CppImplementationDataTypes/RoadSgnInfoActv0
 *                in which the deserialized value will be written.
 * \return        True if the deserialization is successful, false otherwise.
 * \pre           The static size provided by SomeIpProtocolGetStaticSize has been verified.
 * \context       Reactor|App
 * \threadsafe    FALSE
 * \reentrant     TRUE for different reader objects.
 * \synchronous   TRUE
 */
template <typename TpPack>
amsr::someip_protocol::internal::deserialization::Result SomeIpProtocolDeserialize(amsr::someip_protocol::internal::deserialization::Reader& reader, ::RoadSgnInfoActv0::RoadSgnInfoActv0 &data) noexcept {
  // Namespace alias for static deserialization code
  namespace deserialization = amsr::someip_protocol::internal::deserialization;
  // Deserialize non-TLV struct
  deserialization::Result result{false};
  // Deserialize struct member 'RoadSgnInfoActvSts_ref' of type /CppImplementationDataTypes/RoadSgnInfoActvSts
  result = deserialization::SomeIpProtocolDeserialize<
          TpPack,
          // Byte-order of primitive datatype (/CppImplementationDataTypes/RoadSgnInfoActvSts)
        typename deserialization::Tp<TpPack>::ByteOrder

          >(reader, data.RoadSgnInfoActvSts_ref);


  // Deserialize struct member 'RoadSgnInfoActvPen_ref' of type /CppImplementationDataTypes/RoadSgnInfoActvPen
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Byte-order of primitive datatype (/CppImplementationDataTypes/RoadSgnInfoActvPen)
        typename deserialization::Tp<TpPack>::ByteOrder

        >(reader, data.RoadSgnInfoActvPen_ref);
  }

  return result;
}

/*!
 * \brief Calculates the static size for datatype /CppImplementationDataTypes/RoadSgnInfoActv0.
 * \details Data type class: DataTypeStruct (CppImplDataTypeStruct).
 *          is TLV struct: false
 *
 * \tparam TpPack Transformation properties to be used for deserialization.
 * \return Returns the static size of the struct in bytes.
 * \pre -
 * \context Reactor|App
 * \threadsafe FALSE
 * \reentrant TRUE
 * \vprivate Vector component internal API.
 * \synchronous TRUE
 */
template <typename TpPack>
constexpr std::size_t SomeIpProtocolGetStaticSize(amsr::someip_protocol::internal::deserialization::SizeToken<::RoadSgnInfoActv0::RoadSgnInfoActv0>) noexcept {
  // Namespace alias for static deserialization code
  namespace deserialization = amsr::someip_protocol::internal::deserialization;

  // Sum of static size
 constexpr std::size_t static_size{
  // Accumulate the static size of struct member 'RoadSgnInfoActvSts_ref' of type /CppImplementationDataTypes/RoadSgnInfoActvSts
   SomeIpProtocolGetStaticSize<TpPack,
                                // Byte-order of primitive datatype (/CppImplementationDataTypes/RoadSgnInfoActvSts)
                                typename deserialization::Tp<TpPack>::ByteOrder

                               >(deserialization::SizeToken<::RoadSgnInfoActvSts::RoadSgnInfoActvSts>{})  + 
  
  // Accumulate the static size of struct member 'RoadSgnInfoActvPen_ref' of type /CppImplementationDataTypes/RoadSgnInfoActvPen
   SomeIpProtocolGetStaticSize<TpPack,
                                // Byte-order of primitive datatype (/CppImplementationDataTypes/RoadSgnInfoActvPen)
                                typename deserialization::Tp<TpPack>::ByteOrder

                               >(deserialization::SizeToken<::RoadSgnInfoActvPen::RoadSgnInfoActvPen>{}) 
  };
  return static_size;
}

}  // namespace RoadSgnInfoActv0

#endif  // ENDOFLINEEXE_INCLUDE_AMSR_SOMEIP_PROTOCOL_INTERNAL_DATATYPE_DESERIALIZATION_ROADSGNINFOACTV0_DESERIALIZER_ROADSGNINFOACTV0_H_

