#ifndef COURSE_PROJECT_SRC_CLI_COMMANDS_REMOVE_COMMAND_HPP
#define COURSE_PROJECT_SRC_CLI_COMMANDS_REMOVE_COMMAND_HPP

#include "command.hpp"

namespace cli {

namespace cmd {

class Remove : public Command {
public:
    Remove();
    std::string execute() override;
    CommandPtr clone() override;
}; // class Remove

} // namespace cmd

} // namespace cli

#endif // COURSE_PROJECT_SRC_CLI_COMMANDS_REMOVE_COMMAND_HPP