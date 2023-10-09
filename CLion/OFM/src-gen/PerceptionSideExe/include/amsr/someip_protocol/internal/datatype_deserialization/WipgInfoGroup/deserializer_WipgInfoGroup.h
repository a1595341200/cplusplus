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
/**        \file  PerceptionSideExe/include/amsr/someip_protocol/internal/datatype_deserialization/WipgInfoGroup/deserializer_WipgInfoGroup.h
 *        \brief  SOME/IP protocol deserializer implementation for datatype 'WipgInfoGroup'
 *
 *      \details  /CppImplementationDataTypes/WipgInfoGroup
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 *  GENERATOR INFORMATION
 *  -------------------------------------------------------------------------------------------------------------------
 *    Generator Name: amsr_someipprotocol
 *         Commit ID: 3fd8aac035abb6fb6709609fe09ab84fd0e635d8
 *********************************************************************************************************************/

#ifndef PERCEPTIONSIDEEXE_INCLUDE_AMSR_SOMEIP_PROTOCOL_INTERNAL_DATATYPE_DESERIALIZATION_WIPGINFOGROUP_DESERIALIZER_WIPGINFOGROUP_H_
#define PERCEPTIONSIDEEXE_INCLUDE_AMSR_SOMEIP_PROTOCOL_INTERNAL_DATATYPE_DESERIALIZATION_WIPGINFOGROUP_DESERIALIZER_WIPGINFOGROUP_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include "WipgInfoGroup/impl_type_wipginfogroup.h"
#include "someip-protocol/internal/deserialization/deser_wrapper.h"

namespace WipgInfoGroup {

// VECTOR NC Metric-HIS.PATH: MD_SOMEIPPROTOCOL_Metric-HIS.PATH
/*!
 * \brief Deserializer for datatype /CppImplementationDataTypes/WipgInfoGroup.
 * \details Data type class: DataTypeStruct (CppImplDataTypeStruct).
 *          is TLV struct: false
 *
 * \tparam TpPack Transformation properties to be used for deserialization.
 *
 * \param[in,out] reader Reference to byte stream reader.
 * \param[out]    data Reference to the data object of type /CppImplementationDataTypes/WipgInfoGroup
 *                in which the deserialized value will be written.
 * \return        True if the deserialization is successful, false otherwise.
 * \pre           The static size provided by SomeIpProtocolGetStaticSize has been verified.
 * \context       Reactor|App
 * \threadsafe    FALSE
 * \reentrant     TRUE for different reader objects.
 * \synchronous   TRUE
 */
template <typename TpPack>
amsr::someip_protocol::internal::deserialization::Result SomeIpProtocolDeserialize(amsr::someip_protocol::internal::deserialization::Reader& reader, ::WipgInfoGroup::WipgInfoGroup &data) noexcept {
  // Namespace alias for static deserialization code
  namespace deserialization = amsr::someip_protocol::internal::deserialization;
  // Deserialize non-TLV struct
  deserialization::Result result{false};
  // Deserialize struct member 'WipgSpdInfo_ref' of type /CppImplementationDataTypes/WipgSpdInfo
  result = deserialization::SomeIpProtocolDeserialize<
          TpPack,
          // Byte-order of primitive datatype (/CppImplementationDataTypes/WipgSpdInfo)
        typename deserialization::Tp<TpPack>::ByteOrder

          >(reader, data.WipgSpdInfo_ref);


  // Deserialize struct member 'WiprActv_ref' of type /CppImplementationDataTypes/WiprActv
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Byte-order of primitive datatype (/CppImplementationDataTypes/WiprActv)
        typename deserialization::Tp<TpPack>::ByteOrder

        >(reader, data.WiprActv_ref);
  }

  // Deserialize struct member 'WiprInWipgAr_ref' of type /CppImplementationDataTypes/WiprInWipgAr
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Byte-order of primitive datatype (/CppImplementationDataTypes/WiprInWipgAr)
        typename deserialization::Tp<TpPack>::ByteOrder

        >(reader, data.WiprInWipgAr_ref);
  }

  return result;
}

/*!
 * \brief Calculates the static size for datatype /CppImplementationDataTypes/WipgInfoGroup.
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
constexpr std::size_t SomeIpProtocolGetStaticSize(amsr::someip_protocol::internal::deserialization::SizeToken<::WipgInfoGroup::WipgInfoGroup>) noexcept {
  // Namespace alias for static deserialization code
  namespace deserialization = amsr::someip_protocol::internal::deserialization;

  // Sum of static size
 constexpr std::size_t static_size{
  // Accumulate the static size of struct member 'WipgSpdInfo_ref' of type /CppImplementationDataTypes/WipgSpdInfo
   SomeIpProtocolGetStaticSize<TpPack,
                                // Byte-order of primitive datatype (/CppImplementationDataTypes/WipgSpdInfo)
                                typename deserialization::Tp<TpPack>::ByteOrder

                               >(deserialization::SizeToken<::WipgSpdInfo::WipgSpdInfo>{})  + 
  
  // Accumulate the static size of struct member 'WiprActv_ref' of type /CppImplementationDataTypes/WiprActv
   SomeIpProtocolGetStaticSize<TpPack,
                                // Byte-order of primitive datatype (/CppImplementationDataTypes/WiprActv)
                                typename deserialization::Tp<TpPack>::ByteOrder

                               >(deserialization::SizeToken<::WiprActv::WiprActv>{})  + 
  
  // Accumulate the static size of struct member 'WiprInWipgAr_ref' of type /CppImplementationDataTypes/WiprInWipgAr
   SomeIpProtocolGetStaticSize<TpPack,
                                // Byte-order of primitive datatype (/CppImplementationDataTypes/WiprInWipgAr)
                                typename deserialization::Tp<TpPack>::ByteOrder

                               >(deserialization::SizeToken<::WiprInWipgAr::WiprInWipgAr>{}) 
  };
  return static_size;
}

}  // namespace WipgInfoGroup

#endif  // PERCEPTIONSIDEEXE_INCLUDE_AMSR_SOMEIP_PROTOCOL_INTERNAL_DATATYPE_DESERIALIZATION_WIPGINFOGROUP_DESERIALIZER_WIPGINFOGROUP_H_
