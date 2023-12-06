#ifndef COURSE_PROJECT_SRC_LOGIC_ACTIONS_ADD_ITEM_ACTION_HPP
#define COURSE_PROJECT_SRC_LOGIC_ACTIONS_ADD_ITEM_ACTION_HPP

#include "../../model/items/item_base.hpp"
#include "../../model/slide.hpp"
#include "action.hpp"

namespace logic {

class AddItemAction : public IAction {
public:
    AddItemAction(model::ItemBasePtr, model::SlidePtr);
    void run() override;

private:
    model::ItemBasePtr item_;
    model::SlidePtr slide_;
}; // class AddAction

} // namespace logic

#endif // COURSE_PROJECT_SRC_LOGIC_ACTIONS_ADD_ITEM_ACTION_HPP