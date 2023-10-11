#include <stdexcept> // std::runtime_error

#include "../commands/add_command.hpp"
// #include "../commands/remove_command.hpp"
// #include "../commands/quit_command.hpp"
#include "command_registry.hpp"

std::unordered_map<std::string, ICommandPtr> registry_ = {
    {"add", std::make_unique<AddCommand>()},
    /// TODO: register all command prototypes supported
};

ICommandPtr CommandRegistry::findCommand(const std::string& key) {
    const auto iter = registry_.find(key); 
    
    if(iter == registry_.end()) {
        throw std::runtime_error("Invalid Command..");
    }
    
    return iter->second->clone();
}


