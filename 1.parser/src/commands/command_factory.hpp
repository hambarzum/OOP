#ifndef PARSER_SRC_COMMANDS_COMMAND_FACTORY_HPP
#define PARSER_SRC_COMMANDS_COMMAND_FACTORY_HPP

#include "command_aliases.hpp"
#include "../commands/add_command.hpp"
#include "../commands/multiply_command.hpp"
#include "../commands/quit_command.hpp"

class CommandFactory {
public:
    static ICommandPtr makeCommand(CommandContent content);

private:
    static CommandRegistry registry_;
}; // class CommandFactory

#endif // PARSER_SRC_COMMANDS_COMMAND_FACTORY_HPP