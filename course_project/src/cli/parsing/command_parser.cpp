#include <string>

#include "command_parser.hpp"

namespace cli {

ICommandPtr CommandParser::parse(std::istream& input) {  
    std::string commandName;
    input >> commandName;
    auto command = registry_.findCommand(commandName);
    // loop and fetch pairs of key-value from stream
    // addOption() to command in key-value pairs
    return std::move(command);
}

} // namespace cli