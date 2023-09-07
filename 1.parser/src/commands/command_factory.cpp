#include "command_factory.hpp"

#include <stdexcept>

ICommandPtr CommandFactory::makeCommand(const CommandContent& content, const CommandRegistry& registry) {
    const auto iter = registry.find(content.first);

    if(iter == registry.end()) {
        throw std::runtime_error("Invalid Command. Try again..");
    }

    return iter->second;
}