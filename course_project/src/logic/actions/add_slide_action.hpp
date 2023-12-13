#ifndef COURSE_PROJECT_SRC_LOGIC_ACTIONS_ADD_SLIDE_ACTION_HPP
#define COURSE_PROJECT_SRC_LOGIC_ACTIONS_ADD_SLIDE_ACTION_HPP

#include "../../model/slide.hpp"
#include "action.hpp"

namespace logic {

namespace actions {

class AddSlide : public IAction {
public:
    AddSlide(model::SlidePtr, int pos);
    void run() override;

private:
    model::SlidePtr slide_;
    int position_;
}; // class AddSlide

} // namespace actions

} // namespace logic

#endif // COURSE_PROJECT_SRC_LOGIC_ACTIONS_ADD_SLIDE_ACTION_HPP