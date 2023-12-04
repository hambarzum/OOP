#ifndef COURSE_PROJECT_SRC_CLI_COMMANDS_QUIT_COMMAND_HPP
#define COURSE_PROJECT_SRC_CLI_COMMANDS_QUIT_COMMAND_HPP

#include "command.hpp"

namespace cli {

class QuitCommand : public ICommand {
public:
    QuitCommand();
    std::string execute() override;
    ICommandPtr clone() override;
}; // class QuitCommand

} // namespace cli

#endif // COURSE_PROJECT_SRC_CLI_COMMANDS_QUIT_COMMAND_HPP