#ifndef PARSER_SRC_COMMAND_PARSER_IOSTREAM_COMMAND_PARSER_HPP
#define PARSER_SRC_COMMAND_PARSER_IOSTREAM_COMMAND_PARSER_HPP

#include "../commands/command_aliases.hpp"
#include "command_parser.hpp"

class IOStreamCommandParser : public ICommandParser{
public:
    CommandContent parse(const std::string& input) override;
}; // CommandParser

#endif // PARSER_SRC_COMMAND_PARSER_IOSTREAM_COMMAND_PARSER_HPP