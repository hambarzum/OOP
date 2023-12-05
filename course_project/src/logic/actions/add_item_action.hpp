#ifndef COURSE_PROJECT_SRC_LOGIC_ACTIONS_ADD_ITEM_ACTION_HPP
#define COURSE_PROJECT_SRC_LOGIC_ACTIONS_ADD_ITEM_ACTION_HPP

#include "action.hpp"

namespace logic {

class AddItemAction : public IAction {
public:
    void run() override;
}; // class AddAction

} // namespace logic

#endif // COURSE_PROJECT_SRC_LOGIC_ACTIONS_ADD_ITEM_ACTION_HPP