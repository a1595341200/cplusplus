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
/**        \file  PerceptionRearExe/include/amsr/someip_protocol/internal/dataprototype_serialization/perceptionrearsi_out/events/serializer_PerceptionRear_Bus_LaneInfo.h
 *        \brief  SOME/IP protocol serializer implementation for data prototype '/JICA/Service/Interface/PerceptionRearSI_Out/PerceptionRear_Bus_LaneInfo
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

#ifndef PERCEPTIONREAREXE_INCLUDE_AMSR_SOMEIP_PROTOCOL_INTERNAL_DATAPROTOTYPE_SERIALIZATION_PERCEPTIONREARSI_OUT_EVENTS_serializer_PerceptionRear_Bus_LaneInfo_h_
#define PERCEPTIONREAREXE_INCLUDE_AMSR_SOMEIP_PROTOCOL_INTERNAL_DATAPROTOTYPE_SERIALIZATION_PERCEPTIONREARSI_OUT_EVENTS_serializer_PerceptionRear_Bus_LaneInfo_h_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include "PerceptionRearLaneInfoIDT/impl_type_perceptionrearlaneinfoidt.h"
#include "amsr/someip_protocol/internal/datatype_serialization/LaneEventCam1IDT/serializer_LaneEventCam1IDT.h"
#include "amsr/someip_protocol/internal/datatype_serialization/LaneEventGroupCam1VccIDT/serializer_LaneEventGroupCam1VccIDT.h"
#include "amsr/someip_protocol/internal/datatype_serialization/LaneMkrCam1LeIDT/serializer_LaneMkrCam1LeIDT.h"
#include "amsr/someip_protocol/internal/datatype_serialization/LaneMkrCam1RiIDT/serializer_LaneMkrCam1RiIDT.h"
#include "amsr/someip_protocol/internal/datatype_serialization/LaneMkrCam1SecClsLeIDT/serializer_LaneMkrCam1SecClsLeIDT.h"
#include "amsr/someip_protocol/internal/datatype_serialization/LaneMkrCam1SecClsRiIDT/serializer_LaneMkrCam1SecClsRiIDT.h"
#include "amsr/someip_protocol/internal/datatype_serialization/PerceptionRearLaneInfoIDT/serializer_PerceptionRearLaneInfoIDT.h"
#include "someip-protocol/internal/serialization/ser_forward.h"
#include "someip-protocol/internal/serialization/ser_sizing.h"
#include "someip-protocol/internal/serialization/types.h"
#include "someip-protocol/internal/serialization/writer.h"

namespace amsr {
namespace someip_protocol {
namespace internal {
namespace dataprototype_serializer {
namespace perceptionrearsi_out {
namespace events {

/*!
 * \brief Serializer for service event /JICA/Service/Interface/PerceptionRearSI_Out/PerceptionRear_Bus_LaneInfo
 *        of service interface /JICA/Service/Interface/PerceptionRearSI_Out.
 * \details Top-Level data type: /CppImplementationDataTypes/PerceptionRearLaneInfoIDT
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
class SerializerPerceptionRear_Bus_LaneInfo {
 public:
  /*!
   * \brief Returns the required buffer size for the data prototype service event /JICA/Service/Interface/PerceptionRearSI_Out/PerceptionRear_Bus_LaneInfo.
   *
   * \param[in]   data Reference to data object of top-level data type /CppImplementationDataTypes/PerceptionRearLaneInfoIDT.
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
  constexpr static std::size_t GetRequiredBufferSize(::PerceptionRearLaneInfoIDT::PerceptionRearLaneInfoIDT const &data) noexcept {
    return serialization::GetRequiredBufferSize<
      TpPackDataPrototype,
      // Config of struct length field (/CppImplementationDataTypes/PerceptionRearLaneInfoIDT)
      internal::LengthSize<serialization::Tp<TpPackDataPrototype>::kSizeOfStructLengthField, typename serialization::Tp<TpPackDataPrototype>::ByteOrder>

      >(data);
  }

  /*!
   * \brief Returns the maximum buffer size for the data prototype service event /JICA/Service/Interface/PerceptionRearSI_Out/PerceptionRear_Bus_LaneInfo.
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
      ::PerceptionRearLaneInfoIDT::PerceptionRearLaneInfoIDT,
      TpPackDataPrototype,
      // Config of struct length field (/CppImplementationDataTypes/PerceptionRearLaneInfoIDT)
      internal::LengthSize<serialization::Tp<TpPackDataPrototype>::kSizeOfStructLengthField, typename serialization::Tp<TpPackDataPrototype>::ByteOrder>

      >();
  }


  /*!
   * \brief Serialize the data prototype service event /JICA/Service/Interface/PerceptionRearSI_Out/PerceptionRear_Bus_LaneInfo.
   *
   * \param[in,out] writer Reference to the byte stream writer.
   * \param[in]     data Reference to data object of top-level data type /CppImplementationDataTypes/PerceptionRearLaneInfoIDT
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
  static void Serialize(serialization::Writer &writer, ::PerceptionRearLaneInfoIDT::PerceptionRearLaneInfoIDT const &data) noexcept;

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
}  // namespace perceptionrearsi_out
}  // namespace dataprototype_serializer
}  // namespace internal
}  // namespace someip_protocol
}  // namespace amsr

#endif  // PERCEPTIONREAREXE_INCLUDE_AMSR_SOMEIP_PROTOCOL_INTERNAL_DATAPROTOTYPE_SERIALIZATION_PERCEPTIONREARSI_OUT_EVENTS_serializer_PerceptionRear_Bus_LaneInfo_h_

