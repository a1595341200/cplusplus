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
/**        \file  TrafficSignInformationExe/include/amsr/someip_protocol/internal/datatype_deserialization/LppLaneChgStsIDT/deserializer_LppLaneChgStsIDT.h
 *        \brief  SOME/IP protocol deserializer implementation for datatype 'LppLaneChgStsIDT'
 *
 *      \details  /CppImplementationDataTypes/LppLaneChgStsIDT
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 *  GENERATOR INFORMATION
 *  -------------------------------------------------------------------------------------------------------------------
 *    Generator Name: amsr_someipprotocol
 *         Commit ID: 1b535f531ca8eaaa17edbe97d022bbf394412553
 *********************************************************************************************************************/

#ifndef TRAFFICSIGNINFORMATIONEXE_INCLUDE_AMSR_SOMEIP_PROTOCOL_INTERNAL_DATATYPE_DESERIALIZATION_LPPLANECHGSTSIDT_DESERIALIZER_LPPLANECHGSTSIDT_H_
#define TRAFFICSIGNINFORMATIONEXE_INCLUDE_AMSR_SOMEIP_PROTOCOL_INTERNAL_DATATYPE_DESERIALIZATION_LPPLANECHGSTSIDT_DESERIALIZER_LPPLANECHGSTSIDT_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include "LppLaneChgStsIDT/impl_type_lpplanechgstsidt.h"
#include "someip-protocol/internal/deserialization/deser_wrapper.h"

namespace LppLaneChgStsIDT {

// VECTOR NC Metric-HIS.PATH: MD_SOMEIPPROTOCOL_Metric-HIS.PATH
/*!
 * \brief Deserializer for datatype /CppImplementationDataTypes/LppLaneChgStsIDT.
 * \details Data type class: DataTypeStruct (CppImplDataTypeStruct).
 *          is TLV struct: false
 *
 * \tparam TpPack Transformation properties to be used for deserialization.
 *
 * \param[in,out] reader Reference to byte stream reader.
 * \param[out]    data Reference to the data object of type /CppImplementationDataTypes/LppLaneChgStsIDT
 *                in which the deserialized value will be written.
 * \return        True if the deserialization is successful, false otherwise.
 * \pre           The static size provided by SomeIpProtocolGetStaticSize has been verified.
 * \context       Reactor|App
 * \threadsafe    FALSE
 * \reentrant     TRUE for different reader objects.
 * \synchronous   TRUE
 */
template <typename TpPack>
amsr::someip_protocol::internal::deserialization::Result SomeIpProtocolDeserialize(amsr::someip_protocol::internal::deserialization::Reader& reader, ::LppLaneChgStsIDT::LppLaneChgStsIDT &data) noexcept {
  // Namespace alias for static deserialization code
  namespace internal = amsr::someip_protocol::internal;
  namespace deserialization = internal::deserialization;
  // Deserialize non-TLV struct
  deserialization::Result result{false};
  // Deserialize struct member 'LaneChgtype' of type /CppImplementationDataTypes/LaneChangeIDT
  result = deserialization::SomeIpProtocolDeserialize<
          TpPack,
          // Byte-order of primitive datatype (/CppImplementationDataTypes/LaneChangeIDT)
        typename deserialization::Tp<TpPack>::ByteOrder

          >(reader, data.LaneChgtype);


  // Deserialize struct member 'LaneChgpossible' of type /CppImplementationDataTypes/LaneChgAutInfoForAsyHiWay1VccIDT
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Byte-order of primitive datatype (/CppImplementationDataTypes/LaneChgAutInfoForAsyHiWay1VccIDT)
        typename deserialization::Tp<TpPack>::ByteOrder

        >(reader, data.LaneChgpossible);
  }

  // Deserialize struct member 'LaneChgstatus' of type /CppImplementationDataTypes/LaneChgstatusIDT
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Byte-order of primitive datatype (/CppImplementationDataTypes/LaneChgstatusIDT)
        typename deserialization::Tp<TpPack>::ByteOrder

        >(reader, data.LaneChgstatus);
  }

  // Deserialize struct member 'LaneChgreason' of type /CppImplementationDataTypes/LaneChangeFailReason1VccIDT
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Byte-order of primitive datatype (/CppImplementationDataTypes/LaneChangeFailReason1VccIDT)
        typename deserialization::Tp<TpPack>::ByteOrder

        >(reader, data.LaneChgreason);
  }

  // Deserialize struct member 'LaneChgObjId' of type /CppImplementationDataTypes/uint8_t
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Byte-order of primitive datatype (/CppImplementationDataTypes/uint8_t)
        typename deserialization::Tp<TpPack>::ByteOrder

        >(reader, data.LaneChgObjId);
  }

  return result;
}

/*!
 * \brief Calculates the static size for datatype /CppImplementationDataTypes/LppLaneChgStsIDT.
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
constexpr std::size_t SomeIpProtocolGetStaticSize(amsr::someip_protocol::internal::deserialization::SizeToken<::LppLaneChgStsIDT::LppLaneChgStsIDT>) noexcept {
  // Namespace alias for static deserialization code
  namespace internal = amsr::someip_protocol::internal;
  namespace deserialization = internal::deserialization;

  // Sum of static size
 constexpr std::size_t static_size{
  // Accumulate the static size of struct member 'LaneChgtype' of type /CppImplementationDataTypes/LaneChangeIDT
   SomeIpProtocolGetStaticSize<TpPack,
                                // Byte-order of primitive datatype (/CppImplementationDataTypes/LaneChangeIDT)
                                typename deserialization::Tp<TpPack>::ByteOrder

                               >(deserialization::SizeToken<::LaneChangeIDT::LaneChangeIDT>{})  + 
  
  // Accumulate the static size of struct member 'LaneChgpossible' of type /CppImplementationDataTypes/LaneChgAutInfoForAsyHiWay1VccIDT
   SomeIpProtocolGetStaticSize<TpPack,
                                // Byte-order of primitive datatype (/CppImplementationDataTypes/LaneChgAutInfoForAsyHiWay1VccIDT)
                                typename deserialization::Tp<TpPack>::ByteOrder

                               >(deserialization::SizeToken<::LaneChgAutInfoForAsyHiWay1VccIDT::LaneChgAutInfoForAsyHiWay1VccIDT>{})  + 
  
  // Accumulate the static size of struct member 'LaneChgstatus' of type /CppImplementationDataTypes/LaneChgstatusIDT
   SomeIpProtocolGetStaticSize<TpPack,
                                // Byte-order of primitive datatype (/CppImplementationDataTypes/LaneChgstatusIDT)
                                typename deserialization::Tp<TpPack>::ByteOrder

                               >(deserialization::SizeToken<::LaneChgstatusIDT::LaneChgstatusIDT>{})  + 
  
  // Accumulate the static size of struct member 'LaneChgreason' of type /CppImplementationDataTypes/LaneChangeFailReason1VccIDT
   SomeIpProtocolGetStaticSize<TpPack,
                                // Byte-order of primitive datatype (/CppImplementationDataTypes/LaneChangeFailReason1VccIDT)
                                typename deserialization::Tp<TpPack>::ByteOrder

                               >(deserialization::SizeToken<::LaneChangeFailReason1VccIDT::LaneChangeFailReason1VccIDT>{})  + 
  
  // Accumulate the static size of struct member 'LaneChgObjId' of type /CppImplementationDataTypes/uint8_t
   SomeIpProtocolGetStaticSize<TpPack,
                                // Byte-order of primitive datatype (/CppImplementationDataTypes/uint8_t)
                                typename deserialization::Tp<TpPack>::ByteOrder

                               >(deserialization::SizeToken<::uint8IDT::uint8IDT>{}) 
  };
  return static_size;
}

}  // namespace LppLaneChgStsIDT

#endif  // TRAFFICSIGNINFORMATIONEXE_INCLUDE_AMSR_SOMEIP_PROTOCOL_INTERNAL_DATATYPE_DESERIALIZATION_LPPLANECHGSTSIDT_DESERIALIZER_LPPLANECHGSTSIDT_H_

