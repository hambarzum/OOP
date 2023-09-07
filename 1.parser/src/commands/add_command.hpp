#ifndef PARSER_SRC_COMMANDS_ADD_COMMAND_HPP
#define PARSER_SRC_COMMANDS_ADD_COMMAND_HPP

#include "command.hpp"

class AddCommand : public ICommand {
public:
    double execute(const Arguments& args) override;
    
}; // class AddCommand

#endif // PARSER_SRC_COMMANDS_ADD_COMMAND_HPP