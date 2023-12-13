#include <stdexcept> // std::runtime_error

#include "add_item_command.hpp"
#include "add_slide_command.hpp"
#include "print_command.hpp"
#include "command_registry.hpp"
#include "quit_command.hpp"

namespace cli {

CommandRegistry::CommandRegistry() {
    registry_["add_item"] = std::make_unique<cmd::AddItem>();
    registry_["add_slide"] = std::make_unique<cmd::AddSlide>();
    registry_["print"] = std::make_unique<cmd::Print>();
    registry_["quit"] = std::make_unique<cmd::Quit>();
}

cmd::CommandPtr CommandRegistry::findCommand(const std::string& commandName) const {
    const auto iter = registry_.find(commandName);

    if(iter == registry_.end()) {
        throw std::runtime_error("Uknown command: [" + commandName + "]\n");
    }

    return iter->second->clone();
}

} // namespace cli