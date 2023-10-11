#ifndef PARSER_SRC_COMMANDS_COMMAND_HPP
#define PARSER_SRC_COMMANDS_COMMAND_HPP

#include <any>
#include <memory> // std::unique_ptr 
#include <string>
#include <utility> // std::pair

class ICommand;
using ICommandPtr = std::unique_ptr<ICommand>;

using Argument = std::pair<std::string, std::any>;

class ICommand {
public:
    virtual std::string execute() = 0;
    /// TODO: pass the argument as parameter
    virtual void setArgument(const Argument&) = 0;
    virtual ICommandPtr clone() = 0; // prototype

    virtual ~ICommand() = default;
}; // class Command

#endif // PARSER_SRC_COMMANDS_COMMAND_HPP