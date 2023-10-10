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
/**        \file  ObjectFusionModelExe/include/amsr/someip_protocol/internal/datatype_deserialization/VehMNomRecsts_1/deserializer_VehMNomRecsts_1.h
 *        \brief  SOME/IP protocol deserializer implementation for datatype 'VehMNomRecsts_1'
 *
 *      \details  /CppImplementationDataTypes/VehMNomRecsts_1
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 *  GENERATOR INFORMATION
 *  -------------------------------------------------------------------------------------------------------------------
 *    Generator Name: amsr_someipprotocol
 *         Commit ID: 3fd8aac035abb6fb6709609fe09ab84fd0e635d8
 *********************************************************************************************************************/

#ifndef OBJECTFUSIONMODELEXE_INCLUDE_AMSR_SOMEIP_PROTOCOL_INTERNAL_DATATYPE_DESERIALIZATION_VEHMNOMRECSTS_1_DESERIALIZER_VEHMNOMRECSTS_1_H_
#define OBJECTFUSIONMODELEXE_INCLUDE_AMSR_SOMEIP_PROTOCOL_INTERNAL_DATATYPE_DESERIALIZATION_VEHMNOMRECSTS_1_DESERIALIZER_VEHMNOMRECSTS_1_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include "VehMNomRecsts_1/impl_type_vehmnomrecsts_1.h"
#include "someip-protocol/internal/deserialization/deser_wrapper.h"

namespace VehMNomRecsts_1 {

// VECTOR NC Metric-HIS.PATH: MD_SOMEIPPROTOCOL_Metric-HIS.PATH
/*!
 * \brief Deserializer for datatype /CppImplementationDataTypes/VehMNomRecsts_1.
 * \details Data type class: DataTypeStruct (CppImplDataTypeStruct).
 *          is TLV struct: false
 *
 * \tparam TpPack Transformation properties to be used for deserialization.
 *
 * \param[in,out] reader Reference to byte stream reader.
 * \param[out]    data Reference to the data object of type /CppImplementationDataTypes/VehMNomRecsts_1
 *                in which the deserialized value will be written.
 * \return        True if the deserialization is successful, false otherwise.
 * \pre           The static size provided by SomeIpProtocolGetStaticSize has been verified.
 * \context       Reactor|App
 * \threadsafe    FALSE
 * \reentrant     TRUE for different reader objects.
 * \synchronous   TRUE
 */
template <typename TpPack>
amsr::someip_protocol::internal::deserialization::Result SomeIpProtocolDeserialize(amsr::someip_protocol::internal::deserialization::Reader& reader, ::VehMNomRecsts_1::VehMNomRecsts_1 &data) noexcept {
  // Namespace alias for static deserialization code
  namespace deserialization = amsr::someip_protocol::internal::deserialization;
  // Deserialize non-TLV struct
  deserialization::Result result{false};
  // Deserialize struct member 'VehM_ref' of type /CppImplementationDataTypes/float
  result = deserialization::SomeIpProtocolDeserialize<
          TpPack,
          // Byte-order of primitive datatype (/CppImplementationDataTypes/float)
        typename deserialization::Tp<TpPack>::ByteOrder

          >(reader, data.VehM_ref);


  // Deserialize struct member 'VehMQly_ref' of type /CppImplementationDataTypes/VehMQly
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Byte-order of primitive datatype (/CppImplementationDataTypes/VehMQly)
        typename deserialization::Tp<TpPack>::ByteOrder

        >(reader, data.VehMQly_ref);
  }

  // Deserialize struct member 'TrlrM_ref' of type /CppImplementationDataTypes/TrlrM
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Byte-order of primitive datatype (/CppImplementationDataTypes/TrlrM)
        typename deserialization::Tp<TpPack>::ByteOrder

        >(reader, data.TrlrM_ref);
  }

  return result;
}

/*!
 * \brief Calculates the static size for datatype /CppImplementationDataTypes/VehMNomRecsts_1.
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
constexpr std::size_t SomeIpProtocolGetStaticSize(amsr::someip_protocol::internal::deserialization::SizeToken<::VehMNomRecsts_1::VehMNomRecsts_1>) noexcept {
  // Namespace alias for static deserialization code
  namespace deserialization = amsr::someip_protocol::internal::deserialization;

  // Sum of static size
 constexpr std::size_t static_size{
  // Accumulate the static size of struct member 'VehM_ref' of type /CppImplementationDataTypes/float
   SomeIpProtocolGetStaticSize<TpPack,
                                // Byte-order of primitive datatype (/CppImplementationDataTypes/float)
                                typename deserialization::Tp<TpPack>::ByteOrder

                               >(deserialization::SizeToken<::VehM::VehM>{})  + 
  
  // Accumulate the static size of struct member 'VehMQly_ref' of type /CppImplementationDataTypes/VehMQly
   SomeIpProtocolGetStaticSize<TpPack,
                                // Byte-order of primitive datatype (/CppImplementationDataTypes/VehMQly)
                                typename deserialization::Tp<TpPack>::ByteOrder

                               >(deserialization::SizeToken<::VehMQly::VehMQly>{})  + 
  
  // Accumulate the static size of struct member 'TrlrM_ref' of type /CppImplementationDataTypes/TrlrM
   SomeIpProtocolGetStaticSize<TpPack,
                                // Byte-order of primitive datatype (/CppImplementationDataTypes/TrlrM)
                                typename deserialization::Tp<TpPack>::ByteOrder

                               >(deserialization::SizeToken<::TrlrM::TrlrM>{}) 
  };
  return static_size;
}

}  // namespace VehMNomRecsts_1

#endif  // OBJECTFUSIONMODELEXE_INCLUDE_AMSR_SOMEIP_PROTOCOL_INTERNAL_DATATYPE_DESERIALIZATION_VEHMNOMRECSTS_1_DESERIALIZER_VEHMNOMRECSTS_1_H_

