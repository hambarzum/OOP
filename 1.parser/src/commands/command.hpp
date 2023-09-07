#ifndef PARSER_SRC_COMMANDS_COMMAND_HPP
#define PARSER_SRC_COMMANDS_COMMAND_HPP

#include <vector>

using Arguments = std::vector<double>;

class ICommand {
public:
    /// TODO: support various return and parameter types
    virtual double execute(const Arguments& args = Arguments{}) = 0;
    virtual ~ICommand() {}
    
}; // class Command

// derive different types of commands? (IArithmeticCommand, ILogicalCommand..)

#endif // PARSER_SRC_COMMANDS_COMMAND_HPP