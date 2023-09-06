#ifndef PARSER_SRC_COMMANDS_QUIT_COMMAND_HPP
#define PARSER_SRC_COMMANDS_QUIT_COMMAND_HPP

#include "command.hpp"

class QuitCommand : public ICommand {
public:
    double execute() override;

public:
    void setArguments(std::list<double> args) override {}
    bool hasEnoughArguments() override { return true; }
}; // class MultiplyCommand

#endif // PARSER_SRC_COMMANDS_QUIT_COMMAND_HPP