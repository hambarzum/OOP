#include "../commands/command_registry.hpp"
#include "command_parser.hpp"

namespace cli {

ICommandPtr CommandParser::parse(std::istream& input) {  
    std::string commandName;
    input >> commandName;
    const auto command = CommandRegistry::instance().findCommand(commandName);
    // key-Value map in command
    // return command;
}

} // namespace cli