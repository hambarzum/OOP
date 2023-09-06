#ifndef PARSER_SRC_COMMAND_PARSER_COMMAND_PARSER_HPP
#define PARSER_SRC_COMMAND_PARSER_COMMAND_PARSER_HPP

#include "../commands/command_aliases.hpp"

class ICommandParser {
public:
    virtual CommandContent parse(const std::string& input) = 0;
}; // class ICommandParser

#endif // PARSER_SRC_COMMAND_PARSER_COMMAND_PARSER_HPP