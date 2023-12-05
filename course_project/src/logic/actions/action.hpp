#ifndef COURSE_PROJECT_SRC_LOGIC_ACTIONS_ACTION_HPP
#define COURSE_PROJECT_SRC_LOGIC_ACTIONS_ACTION_HPP

namespace logic {

class IAction {
public:
    virtual void run() = 0;

    virtual ~IAction() = default;
}; // class IAction

} // namespace logic

#endif // COURSE_PROJECT_SRC_LOGIC_ACTIONS_ACTION_HPP