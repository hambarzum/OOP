#include <stdexcept> // std::runtime_error

#include "add_item_command.hpp"
#include "add_slide_command.hpp"
#include "display_command.hpp"
#include "command_registry.hpp"
#include "quit_command.hpp"

namespace cli {

CommandRegistry::CommandRegistry() {
    registry_["add_item"] = std::make_unique<commands::AddItem>();
    registry_["add_slide"] = std::make_unique<commands::AddSlide>();
    registry_["display"] = std::make_unique<commands::Display>();
    registry_["quit"] = std::make_unique<commands::Quit>();
}

commands::CommandPtr CommandRegistry::findCommand(const std::string& commandName) {
    const auto iter = registry_.find(commandName);

    if(iter == registry_.end()) {
        throw std::runtime_error("Uknown command: [" + commandName + "]\n");
    }

    return iter->second->clone();
}

} // namespace cli