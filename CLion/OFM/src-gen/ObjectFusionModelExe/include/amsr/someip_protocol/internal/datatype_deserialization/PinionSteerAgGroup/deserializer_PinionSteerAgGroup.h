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
/**        \file  ObjectFusionModelExe/include/amsr/someip_protocol/internal/datatype_deserialization/PinionSteerAgGroup/deserializer_PinionSteerAgGroup.h
 *        \brief  SOME/IP protocol deserializer implementation for datatype 'PinionSteerAgGroup'
 *
 *      \details  /CppImplementationDataTypes/PinionSteerAgGroup
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 *  GENERATOR INFORMATION
 *  -------------------------------------------------------------------------------------------------------------------
 *    Generator Name: amsr_someipprotocol
 *         Commit ID: 3fd8aac035abb6fb6709609fe09ab84fd0e635d8
 *********************************************************************************************************************/

#ifndef OBJECTFUSIONMODELEXE_INCLUDE_AMSR_SOMEIP_PROTOCOL_INTERNAL_DATATYPE_DESERIALIZATION_PINIONSTEERAGGROUP_DESERIALIZER_PINIONSTEERAGGROUP_H_
#define OBJECTFUSIONMODELEXE_INCLUDE_AMSR_SOMEIP_PROTOCOL_INTERNAL_DATATYPE_DESERIALIZATION_PINIONSTEERAGGROUP_DESERIALIZER_PINIONSTEERAGGROUP_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include "PinionSteerAgGroup/impl_type_pinionsteeraggroup.h"
#include "someip-protocol/internal/deserialization/deser_wrapper.h"

namespace PinionSteerAgGroup {

// VECTOR NC Metric-HIS.PATH: MD_SOMEIPPROTOCOL_Metric-HIS.PATH
/*!
 * \brief Deserializer for datatype /CppImplementationDataTypes/PinionSteerAgGroup.
 * \details Data type class: DataTypeStruct (CppImplDataTypeStruct).
 *          is TLV struct: false
 *
 * \tparam TpPack Transformation properties to be used for deserialization.
 *
 * \param[in,out] reader Reference to byte stream reader.
 * \param[out]    data Reference to the data object of type /CppImplementationDataTypes/PinionSteerAgGroup
 *                in which the deserialized value will be written.
 * \return        True if the deserialization is successful, false otherwise.
 * \pre           The static size provided by SomeIpProtocolGetStaticSize has been verified.
 * \context       Reactor|App
 * \threadsafe    FALSE
 * \reentrant     TRUE for different reader objects.
 * \synchronous   TRUE
 */
template <typename TpPack>
amsr::someip_protocol::internal::deserialization::Result SomeIpProtocolDeserialize(amsr::someip_protocol::internal::deserialization::Reader& reader, ::PinionSteerAgGroup::PinionSteerAgGroup &data) noexcept {
  // Namespace alias for static deserialization code
  namespace deserialization = amsr::someip_protocol::internal::deserialization;
  // Deserialize non-TLV struct
  deserialization::Result result{false};
  // Deserialize struct member 'PinionSteerAgGroupCntr_ref' of type /CppImplementationDataTypes/uint8_t
  result = deserialization::SomeIpProtocolDeserialize<
          TpPack,
          // Byte-order of primitive datatype (/CppImplementationDataTypes/uint8_t)
        typename deserialization::Tp<TpPack>::ByteOrder

          >(reader, data.PinionSteerAgGroupCntr_ref);


  // Deserialize struct member 'PinionSteerAgGroupChks_ref' of type /CppImplementationDataTypes/uint8_t
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Byte-order of primitive datatype (/CppImplementationDataTypes/uint8_t)
        typename deserialization::Tp<TpPack>::ByteOrder

        >(reader, data.PinionSteerAgGroupChks_ref);
  }

  // Deserialize struct member 'PinionSteerAgGroupSteerWhlTqQf_ref' of type /CppImplementationDataTypes/PinionSteerAgGroupSteerWhlTqQf
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Byte-order of primitive datatype (/CppImplementationDataTypes/PinionSteerAgGroupSteerWhlTqQf)
        typename deserialization::Tp<TpPack>::ByteOrder

        >(reader, data.PinionSteerAgGroupSteerWhlTqQf_ref);
  }

  // Deserialize struct member 'PinionSteerAgGroupSteerWhlTq_ref' of type /CppImplementationDataTypes/float
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Byte-order of primitive datatype (/CppImplementationDataTypes/float)
        typename deserialization::Tp<TpPack>::ByteOrder

        >(reader, data.PinionSteerAgGroupSteerWhlTq_ref);
  }

  // Deserialize struct member 'PinionSteerAgGroupPinionSteerAgSpd1Qf_ref' of type /CppImplementationDataTypes/PinionSteerAgGroupPinionSteerAgSpd1Qf
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Byte-order of primitive datatype (/CppImplementationDataTypes/PinionSteerAgGroupPinionSteerAgSpd1Qf)
        typename deserialization::Tp<TpPack>::ByteOrder

        >(reader, data.PinionSteerAgGroupPinionSteerAgSpd1Qf_ref);
  }

  // Deserialize struct member 'PinionSteerAgGroupPinionSteerAgSpd1_ref' of type /CppImplementationDataTypes/float
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Byte-order of primitive datatype (/CppImplementationDataTypes/float)
        typename deserialization::Tp<TpPack>::ByteOrder

        >(reader, data.PinionSteerAgGroupPinionSteerAgSpd1_ref);
  }

  // Deserialize struct member 'PinionSteerAgGroupPinionSteerAg1Qf_ref' of type /CppImplementationDataTypes/PinionSteerAgGroupPinionSteerAg1Qf
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Byte-order of primitive datatype (/CppImplementationDataTypes/PinionSteerAgGroupPinionSteerAg1Qf)
        typename deserialization::Tp<TpPack>::ByteOrder

        >(reader, data.PinionSteerAgGroupPinionSteerAg1Qf_ref);
  }

  // Deserialize struct member 'PinionSteerAgGroupPinionSteerAg1_ref' of type /CppImplementationDataTypes/float
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Byte-order of primitive datatype (/CppImplementationDataTypes/float)
        typename deserialization::Tp<TpPack>::ByteOrder

        >(reader, data.PinionSteerAgGroupPinionSteerAg1_ref);
  }

  return result;
}

/*!
 * \brief Calculates the static size for datatype /CppImplementationDataTypes/PinionSteerAgGroup.
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
constexpr std::size_t SomeIpProtocolGetStaticSize(amsr::someip_protocol::internal::deserialization::SizeToken<::PinionSteerAgGroup::PinionSteerAgGroup>) noexcept {
  // Namespace alias for static deserialization code
  namespace deserialization = amsr::someip_protocol::internal::deserialization;

  // Sum of static size
 constexpr std::size_t static_size{
  // Accumulate the static size of struct member 'PinionSteerAgGroupCntr_ref' of type /CppImplementationDataTypes/uint8_t
   SomeIpProtocolGetStaticSize<TpPack,
                                // Byte-order of primitive datatype (/CppImplementationDataTypes/uint8_t)
                                typename deserialization::Tp<TpPack>::ByteOrder

                               >(deserialization::SizeToken<::PinionSteerAgGroupCntr::PinionSteerAgGroupCntr>{})  + 
  
  // Accumulate the static size of struct member 'PinionSteerAgGroupChks_ref' of type /CppImplementationDataTypes/uint8_t
   SomeIpProtocolGetStaticSize<TpPack,
                                // Byte-order of primitive datatype (/CppImplementationDataTypes/uint8_t)
                                typename deserialization::Tp<TpPack>::ByteOrder

                               >(deserialization::SizeToken<::PinionSteerAgGroupChks::PinionSteerAgGroupChks>{})  + 
  
  // Accumulate the static size of struct member 'PinionSteerAgGroupSteerWhlTqQf_ref' of type /CppImplementationDataTypes/PinionSteerAgGroupSteerWhlTqQf
   SomeIpProtocolGetStaticSize<TpPack,
                                // Byte-order of primitive datatype (/CppImplementationDataTypes/PinionSteerAgGroupSteerWhlTqQf)
                                typename deserialization::Tp<TpPack>::ByteOrder

                               >(deserialization::SizeToken<::PinionSteerAgGroupSteerWhlTqQf::PinionSteerAgGroupSteerWhlTqQf>{})  + 
  
  // Accumulate the static size of struct member 'PinionSteerAgGroupSteerWhlTq_ref' of type /CppImplementationDataTypes/float
   SomeIpProtocolGetStaticSize<TpPack,
                                // Byte-order of primitive datatype (/CppImplementationDataTypes/float)
                                typename deserialization::Tp<TpPack>::ByteOrder

                               >(deserialization::SizeToken<::PinionSteerAgGroupSteerWhlTq::PinionSteerAgGroupSteerWhlTq>{})  + 
  
  // Accumulate the static size of struct member 'PinionSteerAgGroupPinionSteerAgSpd1Qf_ref' of type /CppImplementationDataTypes/PinionSteerAgGroupPinionSteerAgSpd1Qf
   SomeIpProtocolGetStaticSize<TpPack,
                                // Byte-order of primitive datatype (/CppImplementationDataTypes/PinionSteerAgGroupPinionSteerAgSpd1Qf)
                                typename deserialization::Tp<TpPack>::ByteOrder

                               >(deserialization::SizeToken<::PinionSteerAgGroupPinionSteerAgSpd1Qf::PinionSteerAgGroupPinionSteerAgSpd1Qf>{})  + 
  
  // Accumulate the static size of struct member 'PinionSteerAgGroupPinionSteerAgSpd1_ref' of type /CppImplementationDataTypes/float
   SomeIpProtocolGetStaticSize<TpPack,
                                // Byte-order of primitive datatype (/CppImplementationDataTypes/float)
                                typename deserialization::Tp<TpPack>::ByteOrder

                               >(deserialization::SizeToken<::PinionSteerAgGroupPinionSteerAgSpd1::PinionSteerAgGroupPinionSteerAgSpd1>{})  + 
  
  // Accumulate the static size of struct member 'PinionSteerAgGroupPinionSteerAg1Qf_ref' of type /CppImplementationDataTypes/PinionSteerAgGroupPinionSteerAg1Qf
   SomeIpProtocolGetStaticSize<TpPack,
                                // Byte-order of primitive datatype (/CppImplementationDataTypes/PinionSteerAgGroupPinionSteerAg1Qf)
                                typename deserialization::Tp<TpPack>::ByteOrder

                               >(deserialization::SizeToken<::PinionSteerAgGroupPinionSteerAg1Qf::PinionSteerAgGroupPinionSteerAg1Qf>{})  + 
  
  // Accumulate the static size of struct member 'PinionSteerAgGroupPinionSteerAg1_ref' of type /CppImplementationDataTypes/float
   SomeIpProtocolGetStaticSize<TpPack,
                                // Byte-order of primitive datatype (/CppImplementationDataTypes/float)
                                typename deserialization::Tp<TpPack>::ByteOrder

                               >(deserialization::SizeToken<::PinionSteerAgGroupPinionSteerAg1::PinionSteerAgGroupPinionSteerAg1>{}) 
  };
  return static_size;
}

}  // namespace PinionSteerAgGroup

#endif  // OBJECTFUSIONMODELEXE_INCLUDE_AMSR_SOMEIP_PROTOCOL_INTERNAL_DATATYPE_DESERIALIZATION_PINIONSTEERAGGROUP_DESERIALIZER_PINIONSTEERAGGROUP_H_

