/*
 * @Author: yao.xie 1595341200@qq.com
 * @Date: 2023-07-13 16:53:42
 * @LastEditors: yao.xie 1595341200@qq.com
 * @LastEditTime: 2023-07-14 11:09:17
 * @FilePath: /ros_learning/src/myTest/src/MyTest.cpp
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
#include "MyTest.h"
#include <OGRE/OgreSceneManager.h>
#include <OGRE/OgreEntity.h>

MyTest::MyTest() {
}
MyTest::~MyTest() {
    context_->getSceneManager()->destroySceneNode(frame_node_);
}

void MyTest::onInitialize() {
    MFDClass::onInitialize();
    scene_manager_ = context_->getSceneManager();
    frame_node_ = scene_node_->createChildSceneNode();
    mSelectTest = std::make_shared<SelectTest>(context_, frame_node_);
    acceleration_arrow_ = std::make_shared<rviz::Arrow>(scene_manager_, frame_node_);
    acceleration_arrow_->setColor(Ogre::ColourValue::Red);
    Ogre::Vector3 p;
    p.x = 0;
    p.y = 0;
    p.z = 0;
    acceleration_arrow_->setPosition(p);
    Ogre::Quaternion q{0, 0, 0, 1};
    acceleration_arrow_->setOrientation(q);
    Ogre::Vector3 scale{1, 1, 1};
    acceleration_arrow_->setScale(scale);
    Ogre::Vector3 acc{1, 0, 0};
    acceleration_arrow_->setDirection(acc);

    acc.x = -1;
    test = std::make_shared<rviz::Arrow>(scene_manager_, frame_node_);
    test->setPosition(p);
    test->setOrientation(q);
    test->setScale(scale);
    test->setDirection(acc);

    shap = std::make_shared<rviz::Shape>(rviz::Shape::Cube, scene_manager_, frame_node_);
    shap->setColor(Ogre::ColourValue::Green);
    p.x = 5;
    shap->setPosition(p);
    shap->setOrientation(q);
    shap->setScale(scale);
    acc.x = 0;
    mSelectTest->addTrackedObject(shap->getEntity());
    mSelectTest->setPosition(p);

    text = std::make_shared<rviz::MovableText>("test");
    text_node = frame_node_->createChildSceneNode();
    text->setColor(Ogre::ColourValue::Blue);
    text->setTextAlignment(rviz::MovableText::H_CENTER, rviz::MovableText::V_CENTER);
    text->setCaption("test1");
    text_node->setPosition(Ogre::Vector3(-5, 0, 0));
    text->setCharacterHeight(3);
    text_node->attachObject(text.get());
    text_node->setVisible(true);
}

void MyTest::processMessage(const sensor_msgs::Imu::ConstPtr &msg) {
}

#include <pluginlib/class_list_macros.h>
PLUGINLIB_EXPORT_CLASS(MyTest, rviz::Display)
