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
/**        \file  RoadModelFusionExe/include/amsr/someip_protocol/internal/datatype_deserialization/NOAInfo/deserializer_NOAInfo.h
 *        \brief  SOME/IP protocol deserializer implementation for datatype 'NOAInfo'
 *
 *      \details  /CppImplementationDataTypes/NOAInfo
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 *  GENERATOR INFORMATION
 *  -------------------------------------------------------------------------------------------------------------------
 *    Generator Name: amsr_someipprotocol
 *         Commit ID: 3fd8aac035abb6fb6709609fe09ab84fd0e635d8
 *********************************************************************************************************************/

#ifndef ROADMODELFUSIONEXE_INCLUDE_AMSR_SOMEIP_PROTOCOL_INTERNAL_DATATYPE_DESERIALIZATION_NOAINFO_DESERIALIZER_NOAINFO_H_
#define ROADMODELFUSIONEXE_INCLUDE_AMSR_SOMEIP_PROTOCOL_INTERNAL_DATATYPE_DESERIALIZATION_NOAINFO_DESERIALIZER_NOAINFO_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include "NOAInfo/impl_type_noainfo.h"
#include "amsr/someip_protocol/internal/datatype_deserialization/PairOfId/deserializer_PairOfId.h"
#include "someip-protocol/internal/deserialization/deser_wrapper.h"

namespace NOAInfo {

// VECTOR NC Metric-HIS.PATH: MD_SOMEIPPROTOCOL_Metric-HIS.PATH
/*!
 * \brief Deserializer for datatype /CppImplementationDataTypes/NOAInfo.
 * \details Data type class: DataTypeStruct (CppImplDataTypeStruct).
 *          is TLV struct: false
 *
 * \tparam TpPack Transformation properties to be used for deserialization.
 *
 * \param[in,out] reader Reference to byte stream reader.
 * \param[out]    data Reference to the data object of type /CppImplementationDataTypes/NOAInfo
 *                in which the deserialized value will be written.
 * \return        True if the deserialization is successful, false otherwise.
 * \pre           The static size provided by SomeIpProtocolGetStaticSize has been verified.
 * \context       Reactor|App
 * \threadsafe    FALSE
 * \reentrant     TRUE for different reader objects.
 * \synchronous   TRUE
 */
template <typename TpPack>
amsr::someip_protocol::internal::deserialization::Result SomeIpProtocolDeserialize(amsr::someip_protocol::internal::deserialization::Reader& reader, ::NOAInfo::NOAInfo &data) noexcept {
  // Namespace alias for static deserialization code
  namespace deserialization = amsr::someip_protocol::internal::deserialization;
  // Deserialize non-TLV struct
  deserialization::Result result{false};
  // Deserialize struct member 'NavigationStatus_ref' of type /CppImplementationDataTypes/NavigationStatus
  result = deserialization::SomeIpProtocolDeserialize<
          TpPack,
          // Byte-order of primitive datatype (/CppImplementationDataTypes/NavigationStatus)
        typename deserialization::Tp<TpPack>::ByteOrder

          >(reader, data.NavigationStatus_ref);


  // Deserialize struct member 'MatchingStatus_ref' of type /CppImplementationDataTypes/MatchingStatus
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Byte-order of primitive datatype (/CppImplementationDataTypes/MatchingStatus)
        typename deserialization::Tp<TpPack>::ByteOrder

        >(reader, data.MatchingStatus_ref);
  }

  // Deserialize struct member 'RemainDistance_ref' of type /CppImplementationDataTypes/uint32_t
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Byte-order of primitive datatype (/CppImplementationDataTypes/uint32_t)
        typename deserialization::Tp<TpPack>::ByteOrder

        >(reader, data.RemainDistance_ref);
  }

  // Deserialize struct member 'SwitchLaneDirection_ref' of type /CppImplementationDataTypes/SwitchLaneDirection
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Byte-order of primitive datatype (/CppImplementationDataTypes/SwitchLaneDirection)
        typename deserialization::Tp<TpPack>::ByteOrder

        >(reader, data.SwitchLaneDirection_ref);
  }

  // Deserialize struct member 'SwitchLaneReason_ref' of type /CppImplementationDataTypes/SwitchLaneReason
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Byte-order of primitive datatype (/CppImplementationDataTypes/SwitchLaneReason)
        typename deserialization::Tp<TpPack>::ByteOrder

        >(reader, data.SwitchLaneReason_ref);
  }

  // Deserialize struct member 'SwitchLaneDistance_ref' of type /CppImplementationDataTypes/uint16_t
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Byte-order of primitive datatype (/CppImplementationDataTypes/uint16_t)
        typename deserialization::Tp<TpPack>::ByteOrder

        >(reader, data.SwitchLaneDistance_ref);
  }

  // Deserialize struct member 'SwitchLaneEndDistance_ref' of type /CppImplementationDataTypes/uint16_t
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Byte-order of primitive datatype (/CppImplementationDataTypes/uint16_t)
        typename deserialization::Tp<TpPack>::ByteOrder

        >(reader, data.SwitchLaneEndDistance_ref);
  }

  // Deserialize struct member 'Count_ref' of type /CppImplementationDataTypes/uint16_t
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Byte-order of primitive datatype (/CppImplementationDataTypes/uint16_t)
        typename deserialization::Tp<TpPack>::ByteOrder

        >(reader, data.Count_ref);
  }

  // Deserialize struct member 'PairOfIds_ref' of type /CppImplementationDataTypes/PairOfIds
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Config of vector length field and max. container size (/CppImplementationDataTypes/PairOfIds)
        deserialization::LengthSize<deserialization::Tp<TpPack>::kSizeOfVectorLengthField, typename deserialization::Tp<TpPack>::ByteOrder>, deserialization::ArraySizeInactive,
        // Config of vector value type (DataTypeStruct, /CppImplementationDataTypes/PairOfId)
        // Config of struct length field (/CppImplementationDataTypes/PairOfId)
        deserialization::LengthSize<deserialization::Tp<TpPack>::kSizeOfStructLengthField, typename deserialization::Tp<TpPack>::ByteOrder>
        
        // End of config of vector value type (DataTypeStruct, /CppImplementationDataTypes/PairOfId)

        >(reader, data.PairOfIds_ref);
  }

  return result;
}

/*!
 * \brief Calculates the static size for datatype /CppImplementationDataTypes/NOAInfo.
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
constexpr std::size_t SomeIpProtocolGetStaticSize(amsr::someip_protocol::internal::deserialization::SizeToken<::NOAInfo::NOAInfo>) noexcept {
  // Namespace alias for static deserialization code
  namespace deserialization = amsr::someip_protocol::internal::deserialization;

  // Sum of static size
 constexpr std::size_t static_size{
  // Accumulate the static size of struct member 'NavigationStatus_ref' of type /CppImplementationDataTypes/NavigationStatus
   SomeIpProtocolGetStaticSize<TpPack,
                                // Byte-order of primitive datatype (/CppImplementationDataTypes/NavigationStatus)
                                typename deserialization::Tp<TpPack>::ByteOrder

                               >(deserialization::SizeToken<::NavigationStatus::NavigationStatus>{})  + 
  
  // Accumulate the static size of struct member 'MatchingStatus_ref' of type /CppImplementationDataTypes/MatchingStatus
   SomeIpProtocolGetStaticSize<TpPack,
                                // Byte-order of primitive datatype (/CppImplementationDataTypes/MatchingStatus)
                                typename deserialization::Tp<TpPack>::ByteOrder

                               >(deserialization::SizeToken<::MatchingStatus::MatchingStatus>{})  + 
  
  // Accumulate the static size of struct member 'RemainDistance_ref' of type /CppImplementationDataTypes/uint32_t
   SomeIpProtocolGetStaticSize<TpPack,
                                // Byte-order of primitive datatype (/CppImplementationDataTypes/uint32_t)
                                typename deserialization::Tp<TpPack>::ByteOrder

                               >(deserialization::SizeToken<::RemainDistance::RemainDistance>{})  + 
  
  // Accumulate the static size of struct member 'SwitchLaneDirection_ref' of type /CppImplementationDataTypes/SwitchLaneDirection
   SomeIpProtocolGetStaticSize<TpPack,
                                // Byte-order of primitive datatype (/CppImplementationDataTypes/SwitchLaneDirection)
                                typename deserialization::Tp<TpPack>::ByteOrder

                               >(deserialization::SizeToken<::SwitchLaneDirection::SwitchLaneDirection>{})  + 
  
  // Accumulate the static size of struct member 'SwitchLaneReason_ref' of type /CppImplementationDataTypes/SwitchLaneReason
   SomeIpProtocolGetStaticSize<TpPack,
                                // Byte-order of primitive datatype (/CppImplementationDataTypes/SwitchLaneReason)
                                typename deserialization::Tp<TpPack>::ByteOrder

                               >(deserialization::SizeToken<::SwitchLaneReason::SwitchLaneReason>{})  + 
  
  // Accumulate the static size of struct member 'SwitchLaneDistance_ref' of type /CppImplementationDataTypes/uint16_t
   SomeIpProtocolGetStaticSize<TpPack,
                                // Byte-order of primitive datatype (/CppImplementationDataTypes/uint16_t)
                                typename deserialization::Tp<TpPack>::ByteOrder

                               >(deserialization::SizeToken<::SwitchLaneDistance::SwitchLaneDistance>{})  + 
  
  // Accumulate the static size of struct member 'SwitchLaneEndDistance_ref' of type /CppImplementationDataTypes/uint16_t
   SomeIpProtocolGetStaticSize<TpPack,
                                // Byte-order of primitive datatype (/CppImplementationDataTypes/uint16_t)
                                typename deserialization::Tp<TpPack>::ByteOrder

                               >(deserialization::SizeToken<::SwitchLaneEndDistance::SwitchLaneEndDistance>{})  + 
  
  // Accumulate the static size of struct member 'Count_ref' of type /CppImplementationDataTypes/uint16_t
   SomeIpProtocolGetStaticSize<TpPack,
                                // Byte-order of primitive datatype (/CppImplementationDataTypes/uint16_t)
                                typename deserialization::Tp<TpPack>::ByteOrder

                               >(deserialization::SizeToken<::Count::Count>{})  + 
  
  // Accumulate the static size of struct member 'PairOfIds_ref' of type /CppImplementationDataTypes/PairOfIds
   SomeIpProtocolGetStaticSize<TpPack,
                                // Config of vector length field and max. container size (/CppImplementationDataTypes/PairOfIds)
                                deserialization::LengthSize<deserialization::Tp<TpPack>::kSizeOfVectorLengthField, typename deserialization::Tp<TpPack>::ByteOrder>, deserialization::ArraySizeInactive,
                                // Config of vector value type (DataTypeStruct, /CppImplementationDataTypes/PairOfId)
                                // Config of struct length field (/CppImplementationDataTypes/PairOfId)
                                deserialization::LengthSize<deserialization::Tp<TpPack>::kSizeOfStructLengthField, typename deserialization::Tp<TpPack>::ByteOrder>
                                
                                // End of config of vector value type (DataTypeStruct, /CppImplementationDataTypes/PairOfId)

                               >(deserialization::SizeToken<::PairOfIds::PairOfIds>{}) 
  };
  return static_size;
}

}  // namespace NOAInfo

#endif  // ROADMODELFUSIONEXE_INCLUDE_AMSR_SOMEIP_PROTOCOL_INTERNAL_DATATYPE_DESERIALIZATION_NOAINFO_DESERIALIZER_NOAINFO_H_

