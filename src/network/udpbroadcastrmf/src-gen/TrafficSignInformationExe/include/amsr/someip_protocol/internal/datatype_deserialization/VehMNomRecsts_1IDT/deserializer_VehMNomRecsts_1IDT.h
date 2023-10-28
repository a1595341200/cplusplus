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
/**        \file  TrafficSignInformationExe/include/amsr/someip_protocol/internal/datatype_deserialization/VehMNomRecsts_1IDT/deserializer_VehMNomRecsts_1IDT.h
 *        \brief  SOME/IP protocol deserializer implementation for datatype 'VehMNomRecsts_1IDT'
 *
 *      \details  /CppImplementationDataTypes/VehMNomRecsts_1IDT
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 *  GENERATOR INFORMATION
 *  -------------------------------------------------------------------------------------------------------------------
 *    Generator Name: amsr_someipprotocol
 *         Commit ID: 1b535f531ca8eaaa17edbe97d022bbf394412553
 *********************************************************************************************************************/

#ifndef TRAFFICSIGNINFORMATIONEXE_INCLUDE_AMSR_SOMEIP_PROTOCOL_INTERNAL_DATATYPE_DESERIALIZATION_VEHMNOMRECSTS_1IDT_DESERIALIZER_VEHMNOMRECSTS_1IDT_H_
#define TRAFFICSIGNINFORMATIONEXE_INCLUDE_AMSR_SOMEIP_PROTOCOL_INTERNAL_DATATYPE_DESERIALIZATION_VEHMNOMRECSTS_1IDT_DESERIALIZER_VEHMNOMRECSTS_1IDT_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include "VehMNomRecsts_1IDT/impl_type_vehmnomrecsts_1idt.h"
#include "someip-protocol/internal/deserialization/deser_wrapper.h"

namespace VehMNomRecsts_1IDT {

// VECTOR NC Metric-HIS.PATH: MD_SOMEIPPROTOCOL_Metric-HIS.PATH
/*!
 * \brief Deserializer for datatype /CppImplementationDataTypes/VehMNomRecsts_1IDT.
 * \details Data type class: DataTypeStruct (CppImplDataTypeStruct).
 *          is TLV struct: false
 *
 * \tparam TpPack Transformation properties to be used for deserialization.
 *
 * \param[in,out] reader Reference to byte stream reader.
 * \param[out]    data Reference to the data object of type /CppImplementationDataTypes/VehMNomRecsts_1IDT
 *                in which the deserialized value will be written.
 * \return        True if the deserialization is successful, false otherwise.
 * \pre           The static size provided by SomeIpProtocolGetStaticSize has been verified.
 * \context       Reactor|App
 * \threadsafe    FALSE
 * \reentrant     TRUE for different reader objects.
 * \synchronous   TRUE
 */
template <typename TpPack>
amsr::someip_protocol::internal::deserialization::Result SomeIpProtocolDeserialize(amsr::someip_protocol::internal::deserialization::Reader& reader, ::VehMNomRecsts_1IDT::VehMNomRecsts_1IDT &data) noexcept {
  // Namespace alias for static deserialization code
  namespace internal = amsr::someip_protocol::internal;
  namespace deserialization = internal::deserialization;
  // Deserialize non-TLV struct
  deserialization::Result result{false};
  // Deserialize struct member 'VehM' of type /CppImplementationDataTypes/float
  result = deserialization::SomeIpProtocolDeserialize<
          TpPack,
          // Byte-order of primitive datatype (/CppImplementationDataTypes/float)
        typename deserialization::Tp<TpPack>::ByteOrder

          >(reader, data.VehM);


  // Deserialize struct member 'VehMQly' of type /CppImplementationDataTypes/VehMNomQly2VccIDT
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Byte-order of primitive datatype (/CppImplementationDataTypes/VehMNomQly2VccIDT)
        typename deserialization::Tp<TpPack>::ByteOrder

        >(reader, data.VehMQly);
  }

  // Deserialize struct member 'TrlrM' of type /CppImplementationDataTypes/VehMNomTrlrM1VccIDT
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Byte-order of primitive datatype (/CppImplementationDataTypes/VehMNomTrlrM1VccIDT)
        typename deserialization::Tp<TpPack>::ByteOrder

        >(reader, data.TrlrM);
  }

  return result;
}

/*!
 * \brief Calculates the static size for datatype /CppImplementationDataTypes/VehMNomRecsts_1IDT.
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
 * \spec
 *   requires true;
 * \endspec
 */
template <typename TpPack>
constexpr std::size_t SomeIpProtocolGetStaticSize(amsr::someip_protocol::internal::deserialization::SizeToken<::VehMNomRecsts_1IDT::VehMNomRecsts_1IDT>) noexcept {
  // Namespace alias for static deserialization code
  namespace internal = amsr::someip_protocol::internal;
  namespace deserialization = internal::deserialization;

  // Sum of static size
 constexpr std::size_t static_size{
  // Accumulate the static size of struct member 'VehM' of type /CppImplementationDataTypes/float
   SomeIpProtocolGetStaticSize<TpPack,
                                // Byte-order of primitive datatype (/CppImplementationDataTypes/float)
                                typename deserialization::Tp<TpPack>::ByteOrder

                               >(deserialization::SizeToken<::float32IDT::float32IDT>{})  + 
  
  // Accumulate the static size of struct member 'VehMQly' of type /CppImplementationDataTypes/VehMNomQly2VccIDT
   SomeIpProtocolGetStaticSize<TpPack,
                                // Byte-order of primitive datatype (/CppImplementationDataTypes/VehMNomQly2VccIDT)
                                typename deserialization::Tp<TpPack>::ByteOrder

                               >(deserialization::SizeToken<::VehMNomQly2VccIDT::VehMNomQly2VccIDT>{})  + 
  
  // Accumulate the static size of struct member 'TrlrM' of type /CppImplementationDataTypes/VehMNomTrlrM1VccIDT
   SomeIpProtocolGetStaticSize<TpPack,
                                // Byte-order of primitive datatype (/CppImplementationDataTypes/VehMNomTrlrM1VccIDT)
                                typename deserialization::Tp<TpPack>::ByteOrder

                               >(deserialization::SizeToken<::VehMNomTrlrM1VccIDT::VehMNomTrlrM1VccIDT>{}) 
  };
  return static_size;
}

}  // namespace VehMNomRecsts_1IDT

#endif  // TRAFFICSIGNINFORMATIONEXE_INCLUDE_AMSR_SOMEIP_PROTOCOL_INTERNAL_DATATYPE_DESERIALIZATION_VEHMNOMRECSTS_1IDT_DESERIALIZER_VEHMNOMRECSTS_1IDT_H_

