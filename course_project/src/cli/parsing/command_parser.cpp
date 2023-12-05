#include <string>
#include <utility> // std::pair

#include "command_parser.hpp"

namespace cli {

ICommandPtr CommandParser::parse(std::istream& input) {  
    // constructing a valid command
    std::string commandName;
    input >> commandName;
    auto command = registry_.findCommand(commandName);

    // adding valid options to the command
    /// TODO: use Value for option value
    /// TODO: restrict add command with no options?
    std::pair<std::string, std::string> option;
    while(input >> option.first) {
        input >> option.second;
        command->addOption(option);
    }
    return std::move(command);
}

} // namespace cli