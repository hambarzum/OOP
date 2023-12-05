#include <stdexcept> // std::runtime_error

#include "../../logic/actions/add_item_action.hpp"
#include "../../application.hpp"
#include "add_command.hpp"

namespace cli {

AddCommand::AddCommand() {
    options_["-item"] = std::string{};
    // options_["-x1"] = 0.0;
    // options_["-y1"] = 0.0;
    // options_["-x2"] = 0.0;
    // options_["-y2"] = 0.0;

}

std::string AddCommand::execute() {
    /// TODO: construct item with from map
    /// TODO: have slide in options, get from application, add item to slide
    Application::instance().getDirector().doAction(std::make_shared<logic::AddItemAction>());
    return static_cast<std::string>(options_["-item"]) + " added successfully.\n";
}

void AddCommand::addOption(const OptionRegistry::value_type& option) {
    auto iter = options_.find(option.first);
    if(iter == options_.end()) {
        throw std::runtime_error("Unknown option for command add: [" + option.first + "]\n");
    }

    options_[option.first] = option.second;
}

ICommandPtr AddCommand::clone() {
    return std::make_unique<AddCommand>(*this);
}

} // namespace cli