#ifndef COURSE_PROJECT_SRC_CLI_PARSING_COMMAND_PARSER_HPP
#define COURSE_PROJECT_SRC_CLI_PARSING_COMMAND_PARSER_HPP

#include <istream>

#include "../commands/command.hpp"
#include "../commands/command_registry.hpp"

namespace cli {

class CommandParser {
public:
    cmd::CommandPtr parse(std::istream&, const CommandRegistry&);
    
}; // class CommandParser

} // namespace cli

#endif // COURSE_PROJECT_SRC_CLI_PARSING_COMMAND_PARSER_HPP