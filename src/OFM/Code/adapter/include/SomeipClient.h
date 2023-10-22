#ifndef OBJECTFUSIONMODEL_SOMEIPCLIENT_H
#define OBJECTFUSIONMODEL_SOMEIPCLIENT_H

#include "Converters_types.h"
#include "JkObjFusn_EgoMotionType.h"
#include "ara/log/logging.h"
#include "perceptionsi_camstsout/perceptionsi_camstsout_proxy.h"
#include "perceptionsi_out/perceptionsidesi_out_proxy.h"
#include "perceptionsi_visnobjout/perceptionsi_visnobjout_proxy.h"
#include "radaradaptorsi_out/radaradaptorsi_out_proxy.h"
#include "tosoca_infomationsi/tosoca_infomationsi_proxy.h"

// namespace ofm {

class SomeipClient final {
 public:
  SomeipClient();
  ~SomeipClient();

  void Init();

  /*
   * @brief init front radar object list
   */
  void InitFrontRadarObjList();
  /*
   * @brief init front camera object list
   */
  void InitFrontCameraObjList();
  /*
   *@ brief init around camera object lists
   */
  void InitAroundCameraObjLists();
  void InitAroundCameraObjList(AroundCamObjList *);
  /*
   * @brief init ego motion
   */
  void InitEgoMotion();

  JkObjFusn_EgoMotionType GetEgoMotion();
  FrntRdrObjList_4D GetFrntRdrObjList4D();
  FrntCamObjList GetFrntCamObjList();
  AroundCamObjList GetAroundCamObjListFL();
  AroundCamObjList GetAroundCamObjListFR();
  AroundCamObjList GetAroundCamObjListRL();
  AroundCamObjList GetAroundCamObjListRR();

  void FindService();

 private:
  /*FindService*/
  void FindService_PerceptionSI_CamStsOutProxy();
  void FindService_PerceptionSI_VisnObjOutProxy();
  void FindService_RadarAdaptorSI_OutProxy();
  void FindService_PerceptionSideSI_OutProxy();
  void FindService_ToSOCA_InfomationSIProxy();

  /*FindServiceHandler*/
  void FindServiceHandler_PerceptionSI_CamStsOutProxy(
      ara::com::ServiceHandleContainer<
          perceptionsi_camstsout::proxy::PerceptionSI_CamStsOutProxy::
              HandleType>
          service_handles);

  void FindServiceHandler_PerceptionSI_VisnObjOutProxy(
      ara::com::ServiceHandleContainer<
          perceptionsi_visnobjout::proxy::PerceptionSI_VisnObjOutProxy::
              HandleType>
          service_handles);

  void FindServiceHandler_RadarAdaptorSI_OutProxy(
      ara::com::ServiceHandleContainer<
          radaradaptorsi_out::proxy::RadarAdaptorSI_OutProxy::HandleType>
          service_handles);

  void FindServiceHandler_PerceptionSideSI_OutProxy(
      ara::com::ServiceHandleContainer<
          perceptionsi_out::proxy::PerceptionSideSI_OutProxy::HandleType>
          service_handles);

  void FindServiceHandler_ToSOCA_InfomationSIProxy(
      ara::com::ServiceHandleContainer<
          tosoca_infomationsi::proxy::ToSOCA_InfomationSIProxy::HandleType>
          service_handles);

  /*RegisterEvents*/
  void RegisterEvents_PerceptionSI_CamStsOutProxy();
  void RegisterEvents_PerceptionSI_VisnObjOutProxy();
  void RegisterEvents_RadarAdaptorSI_OutProxy();
  void RegisterEvents_PerceptionSideSI_OutProxy();
  void RegisterEvents_ToSOCA_InfomationSIProxy();

  // new OSM2 interface
  void OSM2_Bus_ToSOCA_FunctionInfo_StateHandler(
      const ara::com::SubscriptionState state);
  void OSM2_Bus_ToSOCA_FunctionInfo_ReceiveHandler();

  void OSM2_Bus_ToSOCA_COMInfo_StateHandler(
      const ara::com::SubscriptionState state);
  void OSM2_Bus_ToSOCA_COMInfo_ReceiveHandler();

  /*front camera events*/

  void FrntCam_Bus_VisnObj_StateHandler(
      const ara::com::SubscriptionState state);
  void FrntCam_Bus_VisnObj_ReceiveHandler();

  void FrntCam_Bus_CamSts_StateHandler(const ara::com::SubscriptionState state);
  void FrntCam_Bus_CamSts_ReceiveHandler();
  /*side camera events*/
  void FLCam_Bus_VisnObj_StateHandler(const ara::com::SubscriptionState state);
  void FLCam_Bus_VisnObj_ReceiveHandler();

  void FRCam_Bus_VisnObj_StateHandler(const ara::com::SubscriptionState state);
  void FRCam_Bus_VisnObj_ReceiveHandler();

  void RLCam_Bus_VisnObj_StateHandler(const ara::com::SubscriptionState state);
  void RLCam_Bus_VisnObj_ReceiveHandler();

  void RRCam_Bus_VisnObj_StateHandler(const ara::com::SubscriptionState state);
  void RRCam_Bus_VisnObj_ReceiveHandler();

  void FLCam_Bus_CamSts_StateHandler(const ara::com::SubscriptionState state);
  void FLCam_Bus_CamSts_ReceiveHandler();

  void FRCam_Bus_CamSts_StateHandler(const ara::com::SubscriptionState state);
  void FRCam_Bus_CamSts_ReceiveHandler();

  void RLCam_Bus_CamSts_StateHandler(const ara::com::SubscriptionState state);
  void RLCam_Bus_CamSts_ReceiveHandler();

  void RRCam_Bus_CamSts_StateHandler(const ara::com::SubscriptionState state);
  void RRCam_Bus_CamSts_ReceiveHandler();

  /*radar obj get event*/
  void FourDRadarObjStsGAPGrp01_FourDRadarObjStsGrp01_StateHandler(
      const ara::com::SubscriptionState state);
  void FourDRadarObjStsGAPGrp01_FourDRadarObjStsGrp01_ReceiveHandler();

  void FourDRadarObjStsGAPGrp02_FourDRadarObjStsGrp02_StateHandler(
      const ara::com::SubscriptionState state);
  void FourDRadarObjStsGAPGrp02_FourDRadarObjStsGrp02_ReceiveHandler();

  void FourDRadarObjStsGAPGrp03_FourDRadarObjStsGrp03_StateHandler(
      const ara::com::SubscriptionState state);
  void FourDRadarObjStsGAPGrp03_FourDRadarObjStsGrp03_ReceiveHandler();

  void FourDRadarObjStsGAPGrp04_FourDRadarObjStsGrp04_StateHandler(
      const ara::com::SubscriptionState state);
  void FourDRadarObjStsGAPGrp04_FourDRadarObjStsGrp04_ReceiveHandler();

  void FourDRadarObjStsGAPGrp05_FourDRadarObjStsGrp05_StateHandler(
      const ara::com::SubscriptionState state);
  void FourDRadarObjStsGAPGrp05_FourDRadarObjStsGrp05_ReceiveHandler();

  void FourDRadarECUStsGAPGrpSts_FourDRadarECUStsGrpSts_StateHandler(
      const ara::com::SubscriptionState state);
  void FourDRadarECUStsGAPGrpSts_FourDRadarECUStsGrpSts_ReceiveHandler();

  /*
   * @brief set front radar object list
   */
//   void SetFrntRdrObjList4D(
//       const size_t &_index,
//       const radaradaptorsi_out::proxy::events::
//           FourDRadarObjSts01GAP_FourDRadarObjSts01::SampleContainer &_samples);

  // void SetAroundCamObjList(const size_t& _index, const
  // perceptionsi_visnobjout::proxy::events::
  //       FLCam_Bus_VisnObj::SampleContainer& _samples);
  // void SetAroundCamObjList(const size_t& _index, const
  // perceptionsi_visnobjout::proxy::events::
  //       FRCam_Bus_VisnObj::SampleContainer& _samples);
  // void SetAroundCamObjList(const size_t& _index, const
  // perceptionsi_visnobjout::proxy::events::
  //       RLCam_Bus_VisnObj::SampleContainer& _samples);
  // void SetAroundCamObjList(const size_t& _index, const
  // perceptionsi_visnobjout::proxy::events::
  //       RRCam_Bus_VisnObj::SampleContainer& _samples);
  /*
   * @brief set around camera object list
   */
  //   template <class T>
  //   void SetAroundCamObjList(const size_t &_index, const T &_samples);
  //   /*
  //    * @brief set around camera status
  //    */
  //   template <class T>
  //   void SetAroundCamStatus(const size_t &_index, const T &_samples);

  ara::log::Logger &log_;
  std::mutex service_proxy_mutex_;
  std::condition_variable notify_on_service_found_;

  std::shared_ptr<perceptionsi_camstsout::proxy::PerceptionSI_CamStsOutProxy>
      mPerceptionSI_CamStsOutProxy;
  std::shared_ptr<perceptionsi_visnobjout::proxy::PerceptionSI_VisnObjOutProxy>
      mPerceptionSI_VisnObjOutProxy;
  std::shared_ptr<radaradaptorsi_out::proxy::RadarAdaptorSI_OutProxy>
      mRadarAdaptorSI_OutProxy;
  std::shared_ptr<perceptionsi_out::proxy::PerceptionSideSI_OutProxy>
      mPerceptionSideSI_OutProxy;
  std::shared_ptr<tosoca_infomationsi::proxy::ToSOCA_InfomationSIProxy>
      mToSOCA_InfomationSIProxy;

  constexpr static int FIND_SERVER_TIMEOUT = 300;  // second

  std::shared_ptr<std::thread> findService_PerceptionSI_CamStsOutProxy_thread_;
  std::shared_ptr<std::thread> findService_PerceptionSI_VisnObjOutProxy_thread_;
  std::shared_ptr<std::thread> findService_RadarAdaptorSI_OutProxy_thread_;
  std::shared_ptr<std::thread> findService_PerceptionSideSI_OutProxy_;
  std::shared_ptr<std::thread> findService_ToSOCA_InfomationSIProxy_thread_;

};
//}  // namespace Perception

#endif  // OBJECTFUSIONMODEL_SOMEIPCLIENT_H
