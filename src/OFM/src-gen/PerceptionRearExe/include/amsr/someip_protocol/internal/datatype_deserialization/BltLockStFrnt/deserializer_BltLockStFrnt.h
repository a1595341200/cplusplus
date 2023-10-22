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
/**        \file  PerceptionRearExe/include/amsr/someip_protocol/internal/datatype_deserialization/BltLockStFrnt/deserializer_BltLockStFrnt.h
 *        \brief  SOME/IP protocol deserializer implementation for datatype 'BltLockStFrnt'
 *
 *      \details  /CppImplementationDataTypes/BltLockStFrnt
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 *  GENERATOR INFORMATION
 *  -------------------------------------------------------------------------------------------------------------------
 *    Generator Name: amsr_someipprotocol
 *         Commit ID: 3fd8aac035abb6fb6709609fe09ab84fd0e635d8
 *********************************************************************************************************************/

#ifndef PERCEPTIONREAREXE_INCLUDE_AMSR_SOMEIP_PROTOCOL_INTERNAL_DATATYPE_DESERIALIZATION_BLTLOCKSTFRNT_DESERIALIZER_BLTLOCKSTFRNT_H_
#define PERCEPTIONREAREXE_INCLUDE_AMSR_SOMEIP_PROTOCOL_INTERNAL_DATATYPE_DESERIALIZATION_BLTLOCKSTFRNT_DESERIALIZER_BLTLOCKSTFRNT_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include "BltLockStFrnt/impl_type_bltlockstfrnt.h"
#include "someip-protocol/internal/deserialization/deser_wrapper.h"

namespace BltLockStFrnt {

// VECTOR NC Metric-HIS.PATH: MD_SOMEIPPROTOCOL_Metric-HIS.PATH
/*!
 * \brief Deserializer for datatype /CppImplementationDataTypes/BltLockStFrnt.
 * \details Data type class: DataTypeStruct (CppImplDataTypeStruct).
 *          is TLV struct: false
 *
 * \tparam TpPack Transformation properties to be used for deserialization.
 *
 * \param[in,out] reader Reference to byte stream reader.
 * \param[out]    data Reference to the data object of type /CppImplementationDataTypes/BltLockStFrnt
 *                in which the deserialized value will be written.
 * \return        True if the deserialization is successful, false otherwise.
 * \pre           The static size provided by SomeIpProtocolGetStaticSize has been verified.
 * \context       Reactor|App
 * \threadsafe    FALSE
 * \reentrant     TRUE for different reader objects.
 * \synchronous   TRUE
 */
template <typename TpPack>
amsr::someip_protocol::internal::deserialization::Result SomeIpProtocolDeserialize(amsr::someip_protocol::internal::deserialization::Reader& reader, ::BltLockStFrnt::BltLockStFrnt &data) noexcept {
  // Namespace alias for static deserialization code
  namespace deserialization = amsr::someip_protocol::internal::deserialization;
  // Deserialize non-TLV struct
  deserialization::Result result{false};
  // Deserialize struct member 'BltLockStAtDrvrForBltLockSt1_ref' of type /CppImplementationDataTypes/BltLockStAtDrvrForBltLockSt1
  result = deserialization::SomeIpProtocolDeserialize<
          TpPack,
          // Byte-order of primitive datatype (/CppImplementationDataTypes/BltLockStAtDrvrForBltLockSt1)
        typename deserialization::Tp<TpPack>::ByteOrder

          >(reader, data.BltLockStAtDrvrForBltLockSt1_ref);


  // Deserialize struct member 'BltLockStAtDrvrForDevErrSts2_ref' of type /CppImplementationDataTypes/BltLockStAtDrvrForDevErrSts2
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Byte-order of primitive datatype (/CppImplementationDataTypes/BltLockStAtDrvrForDevErrSts2)
        typename deserialization::Tp<TpPack>::ByteOrder

        >(reader, data.BltLockStAtDrvrForDevErrSts2_ref);
  }

  return result;
}

/*!
 * \brief Calculates the static size for datatype /CppImplementationDataTypes/BltLockStFrnt.
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
constexpr std::size_t SomeIpProtocolGetStaticSize(amsr::someip_protocol::internal::deserialization::SizeToken<::BltLockStFrnt::BltLockStFrnt>) noexcept {
  // Namespace alias for static deserialization code
  namespace deserialization = amsr::someip_protocol::internal::deserialization;

  // Sum of static size
 constexpr std::size_t static_size{
  // Accumulate the static size of struct member 'BltLockStAtDrvrForBltLockSt1_ref' of type /CppImplementationDataTypes/BltLockStAtDrvrForBltLockSt1
   SomeIpProtocolGetStaticSize<TpPack,
                                // Byte-order of primitive datatype (/CppImplementationDataTypes/BltLockStAtDrvrForBltLockSt1)
                                typename deserialization::Tp<TpPack>::ByteOrder

                               >(deserialization::SizeToken<::BltLockStAtDrvrForBltLockSt1::BltLockStAtDrvrForBltLockSt1>{})  + 
  
  // Accumulate the static size of struct member 'BltLockStAtDrvrForDevErrSts2_ref' of type /CppImplementationDataTypes/BltLockStAtDrvrForDevErrSts2
   SomeIpProtocolGetStaticSize<TpPack,
                                // Byte-order of primitive datatype (/CppImplementationDataTypes/BltLockStAtDrvrForDevErrSts2)
                                typename deserialization::Tp<TpPack>::ByteOrder

                               >(deserialization::SizeToken<::BltLockStAtDrvrForDevErrSts2::BltLockStAtDrvrForDevErrSts2>{}) 
  };
  return static_size;
}

}  // namespace BltLockStFrnt

#endif  // PERCEPTIONREAREXE_INCLUDE_AMSR_SOMEIP_PROTOCOL_INTERNAL_DATATYPE_DESERIALIZATION_BLTLOCKSTFRNT_DESERIALIZER_BLTLOCKSTFRNT_H_

