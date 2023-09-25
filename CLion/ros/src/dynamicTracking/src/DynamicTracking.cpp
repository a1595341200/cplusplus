/*
 * @Author: yao.xie 1595341200@qq.com
 * @Date: 2023-07-07 17:17:14
 * @LastEditors: yao.xie 1595341200@qq.com
 * @LastEditTime: 2023-07-07 17:51:06
 * @FilePath: /ros_learning/src/dynamicTracking/src/DynamicTracking.cpp
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
//
// Created by user on 2023/7/7.
//

#include "DynamicTracking.h"

void DynamicTracking::onInitialize() {
    MFDClass::onInitialize();
    mSceneManager = context_->getSceneManager();
    mMainNode = mSceneManager->getRootSceneNode();

    scene_manager_ = context_->getSceneManager();
    frame_node_ = scene_node_->createChildSceneNode();
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

void DynamicTracking::processMessage(
    const data_parse::ObjectFrame_<std::allocator<void>>::ConstPtr &msg) {
    mShapes.clear();
    for (auto &obj : msg->objects) {
        std::shared_ptr<rviz::Shape> shape =
            std::make_shared<rviz::Shape>(rviz::Shape::Cube, mSceneManager, mMainNode);
        shape->setScale(Ogre::Vector3(1, 1, 1));
        shape->setColor(Ogre::ColourValue::Green);
        shape->setPosition(Ogre::Vector3(obj.center.x, obj.center.y, obj.center.z));
        Ogre::Quaternion q{0, 0, 0, 1};
        shape->setOrientation(q);
        mShapes.push_back(shape);
    }
}

#include <pluginlib/class_list_macros.h>

PLUGINLIB_EXPORT_CLASS(DynamicTracking, rviz::Display)
