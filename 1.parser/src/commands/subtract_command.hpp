#ifndef PARSER_SRC_COMMANDS_SUBTRACT_COMMAND_HPP
#define PARSER_SRC_COMMANDS_SUBTRACT_COMMAND_HPP

#include "command.hpp"

class SubtractCommand : public ICommand {
public:
    double execute(const Arguments& args) override;
}; // class SubtractCommand

#endif // PARSER_SRC_COMMANDS_SUBTRACT_COMMAND_HPP