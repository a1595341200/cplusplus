/*
 * @Author: yao.xie 1595341200@qq.com
 * @Date: 2023-07-13 16:22:56
 * @LastEditors: yao.xie 1595341200@qq.com
 * @LastEditTime: 2023-07-14 11:06:33
 * @FilePath: /ros_learning/src/myTest/src/SelectTest.cpp
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
#include "SelectTest.h"

bool MourseListener::isInteractive() {
    return true;
}

void MourseListener::enableInteraction(bool enable) {
}

void MourseListener::handleMouseEvent(rviz::ViewportMouseEvent &event) {

    if (!text) {
        text = std::make_shared<rviz::MovableText>("test");
        text_node = select->frame_node_->createChildSceneNode();
        text->setColor(Ogre::ColourValue::Blue);
        text->setTextAlignment(rviz::MovableText::H_CENTER, rviz::MovableText::V_CENTER);
        text->setCaption("test1");
        text_node->setPosition(select->mPosition);
        text->setCharacterHeight(3);
        text_node->attachObject(text.get());
        text_node->setVisible(true);
    }
    if (event.type == QEvent::FocusIn) {
        std::cout << "x : " << event.x << std::endl;
        std::cout << "y : " << event.y << std::endl;
        text_node->setVisible(true);
    }

    if (event.type == QEvent::FocusOut) {
        std::cout << "Leave" << event.x << std::endl;
        text_node->setVisible(false);
    }
}

const QCursor &MourseListener::getCursor() const {
    return q;
}

SelectTest::SelectTest(rviz::DisplayContext *context, Ogre::SceneNode *mainNode)
    : rviz::SelectionHandler(context) {
    interactive = boost::make_shared<MourseListener>(context);
    // interactive->enableInteraction(true);
    rviz::SelectionHandler::setInteractiveObject(interactive);
    interactive->select = this;
    frame_node_ = mainNode;
}

void SelectTest::createProperties(const ::rviz::Picked &obj, ::rviz::Property *parent_property) {
    std::cout << "Creating\n";
}

void SelectTest::updateProperties() {
    std::cout << "updateProperties\n";
}

void SelectTest::setPosition(const Ogre::Vector3 &position) {
    mPosition = position;
}
