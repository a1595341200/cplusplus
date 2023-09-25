/*
 * @Author: yao.xie 1595341200@qq.com
 * @Date: 2023-07-13 16:53:42
 * @LastEditors: yao.xie 1595341200@qq.com
 * @LastEditTime: 2023-07-14 11:09:03
 * @FilePath: /ros_learning/src/myTest/src/SelectTest.h
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
#include <rviz/selection/selection_manager.h>
#include <rviz/display_context.h>
#include <rviz/interactive_object.h>
#include <rviz/viewport_mouse_event.h>
#include <QMouseEvent>
#include <rviz/ogre_helpers/movable_text.h>
#include <OgreSceneNode.h>

class SelectTest;
class MourseListener : public rviz::InteractiveObject {
public:
    MourseListener(rviz::DisplayContext *context) : mContext(context) {
    }
    bool isInteractive() override;
    void enableInteraction(bool enable) override;
    void handleMouseEvent(rviz::ViewportMouseEvent &event) override;
    const QCursor &getCursor() const override;
    SelectTest *select;

private:
    QCursor q{Qt::CursorShape::OpenHandCursor};
    std::shared_ptr<rviz::MovableText> text;
    rviz::DisplayContext *mContext;
    Ogre::SceneNode *text_node;
};

class SelectTest : public rviz::SelectionHandler {
public:
    SelectTest(rviz::DisplayContext *context, Ogre::SceneNode *);
    void createProperties(const ::rviz::Picked &obj, ::rviz::Property *parent_property) override;
    void updateProperties() override;
    void setPosition(const Ogre::Vector3 &position);
    Ogre::SceneNode *frame_node_;
    Ogre::Vector3 mPosition;

private:
    boost::shared_ptr<MourseListener> interactive;
};
