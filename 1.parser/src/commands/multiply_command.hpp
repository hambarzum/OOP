#ifndef PARSER_SRC_COMMANDS_MULTIPLY_COMMAND_HPP
#define PARSER_SRC_COMMANDS_MULTIPLY_COMMAND_HPP

#include "command.hpp"

class MultiplyCommand : public ICommand {
public:
    double execute() override;

public:
    void setArguments(std::list<double> args) override;
    bool hasEnoughArguments() override { return arguments_.size() >= 2; }
private:
    std::list<double> arguments_;
}; // class MultiplyCommand

#endif // PARSER_SRC_COMMANDS_MULTIPLY_COMMAND_HPP