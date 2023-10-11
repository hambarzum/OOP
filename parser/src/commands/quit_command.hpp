#ifndef PARSER_SRC_COMMANDS_QUIT_COMMAND_HPP
#define PARSER_SRC_COMMANDS_QUIT_COMMAND_HPP

#include "command.hpp"

class QuitCommand : public ICommand {
public:
    std::string execute() override;
    
}; // class QuitCommand

#endif // PARSER_SRC_COMMANDS_QUIT_COMMAND_HPP