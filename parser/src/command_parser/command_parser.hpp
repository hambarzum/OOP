#ifndef PARSER_SRC_COMMAND_PARSER_COMMAND_PARSER_HPP
#define PARSER_SRC_COMMAND_PARSER_COMMAND_PARSER_HPP

#include "../commands/command.hpp"
#include "tokenizer.hpp"

#include <istream>

class CommandParser {
public:
    ICommandPtr parse(std::istream& input);

private:
    ICommandPtr buildCommand(std::istream&);

private:
    Tokenizer tokenizer_;
}; // class CommandParser

#endif // PARSER_SRC_COMMAND_PARSER_COMMAND_PARSER_HPP