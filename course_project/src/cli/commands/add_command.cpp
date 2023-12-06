#include <stdexcept> // std::runtime_error

#include "../../logic/actions/add_item_action.hpp"
#include "../../application.hpp"
#include "add_command.hpp"

namespace cli {

AddCommand::AddCommand() {
    options_["-item"] = std::string{};
    options_["-x1"] = 0.0;
    options_["-y1"] = 0.0;
    options_["-x2"] = 0.0;
    options_["-y2"] = 0.0;
    options_["-slide"] = 0;
    /// TODO: add all options supported
}

std::string AddCommand::execute() {
    if(static_cast<std::string>(options_["-item"]) == "Slide") {

    }
    else {
        const auto item = constructItem();
        /// TODO: have slide in options, get from application, add item to slide
        Application::instance().getDirector().doAction(std::make_shared<logic::AddItemAction>());
    }
    return static_cast<std::string>(options_["-item"]) + " added successfully.\n";
}

CommandPtr AddCommand::clone() {
    return std::make_unique<AddCommand>(*this);
}

model::ItemBasePtr AddCommand::constructItem() {
    
}

} // namespace cli