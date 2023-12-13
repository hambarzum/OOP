#ifndef COURSE_PROJECT_SRC_LOGIC_ACTIONS_ADD_ITEM_ACTION_HPP
#define COURSE_PROJECT_SRC_LOGIC_ACTIONS_ADD_ITEM_ACTION_HPP

#include "../../model/items/item.hpp"
#include "../../model/slide.hpp"
#include "action.hpp"

namespace logic {

namespace actions {

class AddItem : public IAction {
public:
    AddItem(model::ItemBasePtr, model::SlidePtr);
    void run() override;

private:
    model::ItemBasePtr item_;
    model::SlidePtr slide_;
}; // class AddAction

} // namespace actions

} // namespace logic

#endif // COURSE_PROJECT_SRC_LOGIC_ACTIONS_ADD_ITEM_ACTION_HPP