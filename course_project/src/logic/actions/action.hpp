#ifndef COURSE_PROJECT_SRC_LOGIC_ACTIONS_ACTION_HPP
#define COURSE_PROJECT_SRC_LOGIC_ACTIONS_ACTION_HPP

#include <memory> // std::shared_ptr

namespace logic {

class IAction {
public:
    virtual void run() = 0;

    virtual ~IAction() = default;
}; // class IAction

using IActionPtr = std::shared_ptr<IAction>;

} // namespace logic

#endif // COURSE_PROJECT_SRC_LOGIC_ACTIONS_ACTION_HPP