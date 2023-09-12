#ifndef PARSER_SRC_COMMANDS_DIVIDE_COMMAND_HPP
#define PARSER_SRC_COMMANDS_DIVIDE_COMMAND_HPP

#include "command.hpp"

class DivideCommand : public ICommand {
public:
    double execute(const Arguments& args) override;
};

#endif // PARSER_SRC_COMMANDS_DIVIDE_COMMAND_HPP