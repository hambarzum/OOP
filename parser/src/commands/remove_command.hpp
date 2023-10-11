#ifndef PARSER_SRC_COMMANDS_REMOVE_COMMAND_HPP
#define PARSER_SRC_COMMANDS_REMOVE_COMMAND_HPP

#include "command.hpp"

class RemoveCommand : public ICommand {
public:
    std::string execute() override;
    void setArgument(const Argument&) override;
}; // class RemoveCommand

#endif // PARSER_SRC_COMMANDS_REMOVE_COMMAND_HPP