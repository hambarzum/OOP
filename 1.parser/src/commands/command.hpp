#ifndef PARSER_SRC_COMMANDS_COMMAND_HPP
#define PARSER_SRC_COMMANDS_COMMAND_HPP

#include <list>

class ICommand {
public:
    virtual double execute() = 0;
    virtual ~ICommand() {}

public:
    virtual void setArguments(std::list<double> args) = 0;
    virtual bool hasEnoughArguments() = 0;
}; // class Command

// derive different types of commands? (IArithmeticCommand, ILogicalCommand..)

#endif // PARSER_SRC_COMMANDS_COMMAND_HPP