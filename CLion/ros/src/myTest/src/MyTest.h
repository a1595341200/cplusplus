/*
 * @Author: yao.xie 1595341200@qq.com
 * @Date: 2023-07-13 16:43:29
 * @LastEditors: yao.xie 1595341200@qq.com
 * @LastEditTime: 2023-07-14 11:09:10
 * @FilePath: /ros_learning/src/myTest/src/MyTest.h
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
#include <OgreSceneNode.h>
#include <boost/circular_buffer.hpp>
#include <memory>
#include <ros/ros.h>
#include <rviz/display.h>
#include <rviz/message_filter_display.h>
#include <rviz/ogre_helpers/arrow.h>
#include <rviz/ogre_helpers/movable_text.h>
#include <rviz/ogre_helpers/shape.h>
#include <sensor_msgs/Imu.h>
#include "SelectTest.h"
class MyTest : public rviz::MessageFilterDisplay<sensor_msgs::Imu> {
    Q_OBJECT
public:
    MyTest();
    ~MyTest();

protected:
    void onInitialize() override;
    void processMessage(const sensor_msgs::Imu::ConstPtr &msg);

private:
    std::shared_ptr<rviz::Arrow> acceleration_arrow_;
    Ogre::SceneNode *frame_node_;
    Ogre::SceneNode *text_node;

    std::shared_ptr<rviz::Arrow> test;
    std::shared_ptr<rviz::Shape> shap;
    std::shared_ptr<rviz::MovableText> text;
    // The SceneManager, kept here only so the destructor can ask it to
    // destroy the ``frame_node_``.
    Ogre::SceneManager *scene_manager_;
    std::shared_ptr<SelectTest> mSelectTest;
};
