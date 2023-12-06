#ifndef COURSE_PROJECT_SRC_CLI_COMMANDS_REMOVE_COMMAND_HPP
#define COURSE_PROJECT_SRC_CLI_COMMANDS_REMOVE_COMMAND_HPP

#include "command.hpp"

namespace cli {

class RemoveCommand : public Command {
public:
    RemoveCommand();
    std::string execute() override;
    CommandPtr clone() override;
}; // class RemoveCommand

} // namespace cli

#endif // COURSE_PROJECT_SRC_CLI_COMMANDS_REMOVE_COMMAND_HPP