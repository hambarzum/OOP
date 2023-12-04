#include <stdexcept> // std::runtime_error

#include "add_command.hpp"
#include "command_registry.hpp"

namespace cli {

CommandRegistry::CommandRegistry() {
    registry_["add"] = std::make_unique<AddCommand>();
    /// TODO: reegister all available commands
}

ICommandPtr CommandRegistry::findCommand(const std::string& commandName) {
    const auto iter = registry_.find(commandName);

    if(iter == registry_.end()) {
        throw std::runtime_error("Uknown command: " + commandName);
    }

    return iter->second->clone();
}

CommandRegistry& CommandRegistry::instance() {
    static CommandRegistry instance;
    return instance;
}

} // namespace cli