#ifndef PARSER_SRC_COMMANDS_QUIT_COMMAND_HPP
#define PARSER_SRC_COMMANDS_QUIT_COMMAND_HPP

#include "command.hpp"

class QuitCommand : public ICommand {
public:
    double execute(const Arguments& args) override;
    
}; // class MultiplyCommand

#endif // PARSER_SRC_COMMANDS_QUIT_COMMAND_HPP