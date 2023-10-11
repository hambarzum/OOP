#ifndef PARSER_SRC_COMMANDS_COMMAND_REGISTRY_HPP
#define PARSER_SRC_COMMANDS_COMMAND_REGISTRY_HPP

#include <string>
#include <unordered_map>

#include "../commands/command.hpp"

class CommandRegistry {
public:
    static ICommandPtr findCommand(const std::string&);

private:
    static std::unordered_map<std::string, ICommandPtr> registry_;
}; // class CommandRegistry

#endif // PARSER_SRC_COMMANDS_COMMAND_REGISTRY_HPP