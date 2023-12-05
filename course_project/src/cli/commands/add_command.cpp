#include <stdexcept> // std::runtime_error

#include "../../logic/actions/add_item_action.hpp"
#include "add_command.hpp"

namespace cli {

AddCommand::AddCommand() {
    options_["-item"] = std::string{};
    options_["-top_left"] = model::Position{};
    options_["-bottom_right"] = model::Position{};
    // options_["-w"] = 0;
    // options_["-h"] = 0;
}

std::string AddCommand::execute() {
    /// TODO: have slide in options, get from application, add item to slide
    // construct item with from map
    logic::AddItemAction action;
    action.run();
    return static_cast<std::string>(options_["-item"]) + "added successfully.";
}

ICommandPtr AddCommand::clone() {
    return std::make_unique<AddCommand>(*this);
}

} // namespace cli