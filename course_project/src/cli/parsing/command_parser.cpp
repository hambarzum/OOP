#include <string>
#include <utility> // std::pair

#include "command_parser.hpp"

namespace cli {

cmd::CommandPtr CommandParser::parse(std::istream& input, const CommandRegistry& registry) {  
    std::string commandName;
    input >> commandName;
    auto command = registry.findCommand(commandName);

    /// TODO: restrict add command with no -type option
    std::pair<std::string, Value> option;

    while(input >> option.first) {
        option.second = command->getValue(option.first);
        ValueType valueType = option.second.getType();
        
        switch(valueType) {
            case ValueType::DOUBLE:
                double dTemp;
                input >> dTemp;
                option.second = dTemp;
                break;
            case ValueType::INT:
                int iTemp;
                input >> iTemp;
                option.second = iTemp;
                break;
            case ValueType::STRING:
                std::string sTemp;
                input >> sTemp;
                option.second = sTemp;
                break;
        }
        
        command->addOption(option);
    }

    return std::move(command);
}

} // namespace cli