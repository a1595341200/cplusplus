#include "Converters_types.h"
#include "JkObjFusn_EgoMotionType.h"
#include "ara/log/logging.h"
#include "radaradaptorsi_out/radaradaptorsi_out_proxy.h"


class RadarSomeipClient {
 public:
  RadarSomeipClient(/* args */);
  ~RadarSomeipClient();

  void FindService();
  void InitFrontRadarObjList();

  FrntRdrObjList_4D GetFrntRdrObjList4D();

  void RegisterEvents_RadarAdaptorSI_OutProxy();

 private:
  void FindService_RadarAdaptorSI_OutProxy();

  void FindServiceHandler_RadarAdaptorSI_OutProxy(
      ara::com::ServiceHandleContainer<
          radaradaptorsi_out::proxy::RadarAdaptorSI_OutProxy::HandleType>
          service_handles);

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

  ara::log::Logger &log_;
  std::mutex service_proxy_mutex_;
  std::condition_variable notify_on_service_found_;

  std::shared_ptr<radaradaptorsi_out::proxy::RadarAdaptorSI_OutProxy>
      mRadarAdaptorSI_OutProxy;

  constexpr static int FIND_SERVER_TIMEOUT = 300;  // second

  FrntRdrObjList_4D frntRdrObjList_4D_;
};
