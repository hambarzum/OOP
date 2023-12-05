#ifndef COURSE_PROJECT_SRC_LOGIC_DIRECTOR_HPP
#define COURSE_PROJECT_SRC_LOGIC_DIRECTOR_HPP

#include <stack>

#include "actions/action.hpp"

namespace logic {

class Director {
public:
    void doAction(IActionPtr);

private:
    std::stack<IActionPtr> undoHistory_;
    std::stack<IActionPtr> redoHistory_;
}; // class Director

} // namespace logic

#endif // COURSE_PROJECT_SRC_LOGIC_DIRECTOR_HPP