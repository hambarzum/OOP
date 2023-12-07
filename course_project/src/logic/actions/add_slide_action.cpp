#include "../../application.hpp"
#include "add_slide_action.hpp"

namespace logic {

namespace actions {

AddSlide::AddSlide(model::SlidePtr slide) 
    : slide_{slide}
{

}

void AddSlide::run() {
    Application::instance().getDocument().addSlide(slide_);
    std::cout << __PRETTY_FUNCTION__ << std::endl;
}

} // namespace actions

} // namepsace logic