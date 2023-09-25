/*
 * @Author: yao.xie 1595341200@qq.com
 * @Date: 2023-07-07 17:17:14
 * @LastEditors: yao.xie 1595341200@qq.com
 * @LastEditTime: 2023-07-07 17:46:28
 * @FilePath: /ros_learning/src/dynamicTracking/src/DynamicTracking.h
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
//
// Created by user on 2023/7/7.
//

#ifndef SRC_DYNAMICTRACKING_H
#define SRC_DYNAMICTRACKING_H

#include <ros/ros.h>
#include <rviz/ogre_helpers/shape.h>
#include <rviz/message_filter_display.h>
#include <data_parse/ObjectFrame.h>
#include <OGRE/OgreSceneManager.h>
#include <OGRE/OgreSceneNode.h>
#include <memory>
#include <rviz/ogre_helpers/arrow.h>
#include <rviz/ogre_helpers/line.h>
#include <rviz/ogre_helpers/movable_text.h>

class DynamicTracking : public rviz::MessageFilterDisplay<data_parse::ObjectFrame> {
    Q_OBJECT
public:
protected:
    void onInitialize() override;

    void processMessage(const data_parse::ObjectFrame::ConstPtr &msg) override;

private:
    Ogre::SceneNode *mMainNode;
    Ogre::SceneManager *mSceneManager;
    std::vector<std::shared_ptr<rviz::Shape>> mShapes;
    std::shared_ptr<rviz::Shape> mTest;
    std::shared_ptr<rviz::Arrow> acceleration_arrow_;
    Ogre::SceneNode *frame_node_;
    Ogre::SceneNode *text_node;

    std::shared_ptr<rviz::Arrow> test;
    std::shared_ptr<rviz::Shape> shap;
    std::shared_ptr<rviz::MovableText> text;
    // The SceneManager, kept here only so the destructor can ask it to
    // destroy the ``frame_node_``.
    Ogre::SceneManager *scene_manager_;
};

#endif //SRC_DYNAMICTRACKING_H
