/*
 * @Author: yao.xie 1595341200@qq.com
 * @Date: 2023-07-19 10:29:06
 * @LastEditors: yao.xie 1595341200@qq.com
 * @LastEditTime: 2023-08-01 14:01:46
 * @FilePath: /ros_learning/src/OFM_3R/src/main.cpp
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
#define TAG "main.cpp"
#include <iostream>
#include "preprocess/PreprocessManager.h"
#include <ros/ros.h>
#include "postprocess/Postprocess.h"
#include "postprocess/CaKineticParameter.h"
#include "timemanager/SystemTime.h"
#include <chrono>
#include "utils/Log.h"
#include <thread>
#include "Looper/Looper.h"
#include "Looper/RunableHandler.h"
#include "utils/ThreadPool.h"

class TestMessageaHandle : public MessageHandler {
public:
    TestMessageaHandle(std::chrono::time_point<std::chrono::steady_clock> time)
        : mTime(time) {
    }
    void onHandleMessage(std::shared_ptr<Message> msg) {
        auto end = std::chrono::steady_clock::now();
        ALOG(INFO) << std::chrono::duration_cast<std::chrono::milliseconds>(
                          end - mTime)
                          .count();
        ALOG(INFO) << msg->_waht;
    }

private:
    std::chrono::time_point<std::chrono::steady_clock> mTime;
};

using namespace SensorType;

void PreprocessTest() {
    PreprocessManager p;
    FrontRadarObjectList frontRadar{};
    std::vector<CornerRadarObjectList> cornerRadarObjectList(2);
    std::vector<MeasurementObjectList> measurementObjectList;
    p.preprocess(
        measurementObjectList, std::make_shared<VehicleStateEstimation>(),
        frontRadar, JKOBJFUSN_TRACKABLE_U32SENSOR_RADAR_FRONT_CENTER,
        cornerRadarObjectList[0], JKOBJFUSN_TRACKABLE_U32SENSOR_RADAR_REAR_LEFT,
        cornerRadarObjectList[1],
        JKOBJFUSN_TRACKABLE_U32SENSOR_RADAR_REAR_RIGHT);
}

void PostprocessTest() {
    std::shared_ptr<KineticParameter> kineticParameter =
        std::make_shared<CaKineticParameter>(1.0);
    Postprocess p(kineticParameter, std::make_shared<SystemTime>());
    FusionObjectList fusionObjectList{};
    fusionObjectList.object[0].stateEst << 1, 1, 1, 1, 1, 1;
    fusionObjectList.object[1].stateEst << 2, 2, 2, 2, 2, 2;

    fusionObjectList.object[0].updateTime =
        std::chrono::duration_cast<std::chrono::milliseconds>(
            std::chrono::steady_clock::now().time_since_epoch())
            .count() +
        -25;

    fusionObjectList.object[1].updateTime =
        std::chrono::duration_cast<std::chrono::milliseconds>(
            std::chrono::steady_clock::now().time_since_epoch())
            .count() +
        -25;
    fusionObjectList.nObject = 2;
    EgoMotion ego{};
    p.process(fusionObjectList, ego);
}

void LogTest() {
    // ros::spin();
    Log::init();
    google::ShutdownGoogleLogging();
}

void ptrTest() {
    std::shared_ptr<std::thread> t;
    {
        std::shared_ptr<int> p = std::make_shared<int>(1);
        ALOG(INFO) << p.use_count();
        t = std::make_shared<std::thread>([p] {
            ALOG(INFO) << p.use_count();
            std::this_thread::sleep_for(std::chrono::milliseconds(1000));
            ALOG(INFO) << p.use_count();
            ALOG(INFO) << *p;
        });
    }
    t->join();
}
using namespace std::chrono_literals;

void testLooper() {
    std::shared_ptr<Looper> loop = std::make_shared<Looper>();
    std::thread t([&loop]() { loop->run(); });
    // std::this_thread::sleep_for(1s);
    std::shared_ptr<MessageHandler> mHandler =
        std::make_shared<TestMessageaHandle>(std::chrono::steady_clock::now());
    loop->sendMessage(mHandler, std::make_shared<Message>(10));
    loop->sendMessageDelay(mHandler, std::make_shared<Message>(5000), 5000ms);
    loop->sendMessage(mHandler, std::make_shared<Message>(11));
    std::this_thread::sleep_for(3s);
    loop->removeMessage(std::make_shared<Message>(5000));
    std::this_thread::sleep_for(3s);
    loop->stop();
    t.join();
}

void runableHandlerTest() {
    std::shared_ptr<RunableHandler> handler =
        std::make_shared<RunableHandler>([](std::shared_ptr<Message> msg) {
            static int c{0};
            ALOG(INFO) << msg->_waht << " : " << c++;
        });
    handler->start();
    int count{10};
    while (count > 0) {
        handler->sendMessageDelay(std::make_shared<Message>(10),
                                  count * 1000ms);
        count--;
    }
    std::this_thread::sleep_for(2s);
    handler->requestQuitAndWait();
}

void test() {
    std::function<int()> f =
        std::bind([](int a, int b) { return a + b; }, 1, 2);
    ALOG(INFO) << f();
}

void ThreadPoolTest() {
    ThreadPool threadpool(4);
    threadpool.init();
    ALOG(INFO) << "start";
    for (int i = 0; i < 100; i++) {
        threadpool.addTask([i] { ALOG(INFO) << i; });
        std::this_thread::sleep_for(10ms);
    }
    std::this_thread::sleep_for(5s);
}

int main(int argc, char *argv[]) {
    ros::init(argc, argv, "pre");
    Log::init();
    ros::Time::init();
    // PreprocessTest();
    // PostprocessTest();
    // LogTest();
    // ptrTest();
    // testLooper();
    // runableHandlerTest();
    // test();
    ThreadPoolTest();
    google::ShutdownGoogleLogging();
    return 0;
}
