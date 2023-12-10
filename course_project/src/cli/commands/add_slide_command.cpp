#include <iostream>

#include "../../application.hpp"
#include "../../logic/actions/add_slide_action.hpp"
#include "add_slide_command.hpp"

namespace cli {

namespace commands {

std::string AddSlide::execute() {
    const auto slide = std::make_shared<model::Slide>();
    // TK: too long, split into lines
    Application::instance().getDirector().doAction(std::make_shared<logic::actions::AddSlide>(slide));

    /// @note log-check
    std::cout << "Document contents: ";
    for(auto& el : Application::instance().getDocument()) {
        std::cout << "slide " << el->getID() << " ";
    }
    std::cout << "document size: " << Application::instance().getDocument().size() << std::endl;

    return std::string{"Slide " + std::to_string(slide->getID()) + " added successfully.\n"};
}

CommandPtr AddSlide::clone() {
    return std::make_unique<AddSlide>(*this);
}

} // namespace commands

} // namespace cli