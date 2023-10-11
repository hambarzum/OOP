#ifndef PARSER_SRC_COMMANDS_ADD_COMMAND_HPP
#define PARSER_SRC_COMMANDS_ADD_COMMAND_HPP

#include <any>
#include <unordered_map>

#include "command.hpp"

class AddCommand : public ICommand {
public:
    AddCommand();
    std::string execute() override;
    void setArgument(const Argument&) override;
    ICommandPtr clone() override;

private:
    using ArgumentRegistry = std::unordered_map<std::string, std::any>; 

    ArgumentRegistry arguments_;
}; // class AddCommand

#endif // PARSER_SRC_COMMANDS_ADD_COMMAND_HPP