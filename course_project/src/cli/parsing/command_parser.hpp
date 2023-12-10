#ifndef COURSE_PROJECT_SRC_CLI_PARSING_COMMAND_PARSER_HPP
#define COURSE_PROJECT_SRC_CLI_PARSING_COMMAND_PARSER_HPP

#include <istream>

#include "../commands/command.hpp"
#include "../commands/command_registry.hpp"

namespace cli {

class CommandParser {
public:
    commands::CommandPtr parse(std::istream&);

private:
    CommandRegistry registry_; // TK: command registry is not part of the parser, it belongs to controller, actually you can create parser as local object each time, parser just uses command registry
}; // class CommandParser

} // namespace cli

#endif // COURSE_PROJECT_SRC_CLI_PARSING_COMMAND_PARSER_HPP