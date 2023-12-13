#include "../../application.hpp"
#include "add_slide_action.hpp"

namespace logic {

namespace actions {

AddSlide::AddSlide(model::SlidePtr slide, int pos) 
    : slide_{slide}
    , position_{pos}
{

}

void AddSlide::run() {
    auto doc = Application::instance().getDocument();
    doc.addSlide(slide_, position_);
    std::cout << __PRETTY_FUNCTION__ << std::endl;
}

} // namespace actions

} // namepsace logic