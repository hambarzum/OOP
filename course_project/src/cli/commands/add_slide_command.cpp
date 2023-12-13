#include <iostream>

#include "../../application.hpp"
#include "../../logic/actions/add_slide_action.hpp"
#include "add_slide_command.hpp"

namespace cli {

namespace cmd {

AddSlide::AddSlide() {
    options_["-pos"] = -1;
}

std::string AddSlide::execute() {
    const auto slide = std::make_shared<model::Slide>();
    auto action = std::make_shared<logic::actions::AddSlide>(slide, options_["-pos"]);
    
    auto director = Application::instance().getDirector();
    director.doAction(action);

    /// @note log-check
    std::cout << "Document contents: ";
    for(auto& el : Application::instance().getDocument()) {
        std::cout << "slide ";
    }
    std::cout << "document size: " << Application::instance().getDocument().size() << std::endl;

    return std::string{"Slide added successfully.\n"};
}

CommandPtr AddSlide::clone() {
    return std::make_unique<AddSlide>(*this);
}

} // namespace cmd

} // namespace cli