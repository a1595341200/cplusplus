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
/**        \file  EndOfLineExe/include/amsr/someip_protocol/internal/dataprototype_serialization/endoflinesi_out/events/serializer_EOL_Bus_CamCalibStatus.h
 *        \brief  SOME/IP protocol serializer implementation for data prototype '/JICA/Service/Interface/EndOfLineSI_Out/EOL_Bus_CamCalibStatus
 *
 *      \details
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 *  GENERATOR INFORMATION
 *  -------------------------------------------------------------------------------------------------------------------
 *    Generator Name: amsr_someipprotocol
 *         Commit ID: 1b535f531ca8eaaa17edbe97d022bbf394412553
 *********************************************************************************************************************/

#ifndef ENDOFLINEEXE_INCLUDE_AMSR_SOMEIP_PROTOCOL_INTERNAL_DATAPROTOTYPE_SERIALIZATION_ENDOFLINESI_OUT_EVENTS_serializer_EOL_Bus_CamCalibStatus_h_
#define ENDOFLINEEXE_INCLUDE_AMSR_SOMEIP_PROTOCOL_INTERNAL_DATAPROTOTYPE_SERIALIZATION_ENDOFLINESI_OUT_EVENTS_serializer_EOL_Bus_CamCalibStatus_h_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include "TCameraCalibInfoIDT/impl_type_tcameracalibinfoidt.h"
#include "amsr/someip_protocol/internal/datatype_serialization/Mode_AfterSalesIDT/serializer_Mode_AfterSalesIDT.h"
#include "amsr/someip_protocol/internal/datatype_serialization/Mode_EOLIDT/serializer_Mode_EOLIDT.h"
#include "amsr/someip_protocol/internal/datatype_serialization/Mode_OnLineIDT/serializer_Mode_OnLineIDT.h"
#include "amsr/someip_protocol/internal/datatype_serialization/TCameraCalibInfoIDT/serializer_TCameraCalibInfoIDT.h"
#include "someip-protocol/internal/serialization/ser_forward.h"
#include "someip-protocol/internal/serialization/ser_sizing.h"
#include "someip-protocol/internal/serialization/types.h"
#include "someip-protocol/internal/serialization/writer.h"

namespace amsr {
namespace someip_protocol {
namespace internal {
namespace dataprototype_serializer {
namespace endoflinesi_out {
namespace events {

/*!
 * \brief Serializer for service event /JICA/Service/Interface/EndOfLineSI_Out/EOL_Bus_CamCalibStatus
 *        of service interface /JICA/Service/Interface/EndOfLineSI_Out.
 * \details Top-Level data type: /CppImplementationDataTypes/TCameraCalibInfoIDT
 *          Effective transformation properties of the DataPrototype:
 *          - ByteOrder:                    MOST-SIGNIFICANT-BYTE-FIRST (big-endian)
 *          - sizeOfArrayLengthField:       4
 *          - sizeOfVectorLengthField:      4
 *          - sizeOfMapLengthField:         4
 *          - sizeOfStringLengthField:      4
 *          - sizeOfStructLengthField:      0
 *          - sizeOfUnionLengthField:       4
 *          - sizeOfUnionTypeSelectorField: 4
 *          - isBomActive:                  true
 *          - isNullTerminationActive:      true
 *          - isDynamicLengthFieldSize:     false
 */
class SerializerEOL_Bus_CamCalibStatus {
 public:
  /*!
   * \brief Returns the required buffer size for the data prototype service event /JICA/Service/Interface/EndOfLineSI_Out/EOL_Bus_CamCalibStatus.
   *
   * \param[in]   data Reference to data object of top-level data type /CppImplementationDataTypes/TCameraCalibInfoIDT.
   *
   * \return      Calculated buffer size for serialization.
   * \pre         -
   * \context     App
   * \threadsafe  FALSE
   * \reentrant   FALSE
   * \synchronous TRUE
   * \spec
   *   requires true;
   * \endspec
   */
  constexpr static std::size_t GetRequiredBufferSize(::TCameraCalibInfoIDT::TCameraCalibInfoIDT const &data) noexcept {
    return serialization::GetRequiredBufferSize<
      TpPackDataPrototype,
      // Config of struct length field (/CppImplementationDataTypes/TCameraCalibInfoIDT)
      internal::LengthSize<serialization::Tp<TpPackDataPrototype>::kSizeOfStructLengthField, typename serialization::Tp<TpPackDataPrototype>::ByteOrder>

      >(data);
  }

  /*!
   * \brief Returns the maximum buffer size for the data prototype service event /JICA/Service/Interface/EndOfLineSI_Out/EOL_Bus_CamCalibStatus.
   *
   * \return      Calculated buffer size for serialization.
   * \pre         -
   * \context     App
   * \threadsafe  FALSE
   * \reentrant   FALSE
   * \synchronous TRUE
   * \spec
   *   requires true;
   * \endspec
   */
  constexpr static amsr::someip_protocol::internal::serialization::InfSizeT GetMaximumBufferSize() noexcept {
    return serialization::GetMaximumBufferSize<
      ::TCameraCalibInfoIDT::TCameraCalibInfoIDT,
      TpPackDataPrototype,
      // Config of struct length field (/CppImplementationDataTypes/TCameraCalibInfoIDT)
      internal::LengthSize<serialization::Tp<TpPackDataPrototype>::kSizeOfStructLengthField, typename serialization::Tp<TpPackDataPrototype>::ByteOrder>

      >();
  }


  /*!
   * \brief Serialize the data prototype service event /JICA/Service/Interface/EndOfLineSI_Out/EOL_Bus_CamCalibStatus.
   *
   * \param[in,out] writer Reference to the byte stream writer.
   * \param[in]     data Reference to data object of top-level data type /CppImplementationDataTypes/TCameraCalibInfoIDT
   *                , whose value will be serialized into the writer.
   *
   * \pre         -
   * \context     App
   * \threadsafe  FALSE
   * \reentrant   FALSE
   * \synchronous TRUE
   * \spec
   *   requires true;
   * \endspec
   */
  // VECTOR NC AutosarC++17_10-M3.2.4: MD_SOMEIPPROTOCOL_AutosarC++17_10-M3.2.4_false_positive
  static void Serialize(serialization::Writer &writer, ::TCameraCalibInfoIDT::TCameraCalibInfoIDT const &data) noexcept;

 private:
  /*!
   * \brief Transformation properties of the data prototype.
   */
  using TpPackDataPrototype = internal::TpPack<
      BigEndian,
      internal::SizeOfArrayLengthField<4>,
      internal::SizeOfVectorLengthField<4>,
      internal::SizeOfMapLengthField<4>,
      internal::SizeOfStringLengthField<4>,
      internal::SizeOfStructLengthField<0>,
      internal::SizeOfUnionLengthField<4>,
      internal::SizeOfUnionTypeSelectorField<4>,
      internal::StringBomActive,
      internal::StringNullTerminationActive,
      serialization::DynamicLengthFieldSizeInactive>;

};

}  // namespace events
}  // namespace endoflinesi_out
}  // namespace dataprototype_serializer
}  // namespace internal
}  // namespace someip_protocol
}  // namespace amsr

#endif  // ENDOFLINEEXE_INCLUDE_AMSR_SOMEIP_PROTOCOL_INTERNAL_DATAPROTOTYPE_SERIALIZATION_ENDOFLINESI_OUT_EVENTS_serializer_EOL_Bus_CamCalibStatus_h_

