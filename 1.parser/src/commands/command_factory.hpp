#ifndef PARSER_SRC_COMMANDS_COMMAND_FACTORY_HPP
#define PARSER_SRC_COMMANDS_COMMAND_FACTORY_HPP

#include "command_aliases.hpp"

class CommandFactory {
public:
    static ICommandPtr makeCommand(const CommandContent& content, const CommandRegistry& registry);
}; // class CommandFactory

#endif // PARSER_SRC_COMMANDS_COMMAND_FACTORY_HPP