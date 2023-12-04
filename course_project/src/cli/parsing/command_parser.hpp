#ifndef COURSE_PROJECT_SRC_CLI_PARSING_COMMAND_PARSER_HPP
#define COURSE_PROJECT_SRC_CLI_PARSING_COMMAND_PARSER_HPP

#include <istream>
#include <string>

#include "../commands/command.hpp"
#include "tokenizer.hpp"

namespace cli {

class CommandParser {
public:
    ICommandPtr parse(std::istream&);

private:
    Tokenizer tokenizer_;
}; // class CommandParser

} // namespace cli

#endif // COURSE_PROJECT_SRC_CLI_PARSING_COMMAND_PARSER_HPP