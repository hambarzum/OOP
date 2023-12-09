#ifndef COURSE_PROJECT_SRC_CLI_COMMANDS_DISPLAY_COMMAND_HPP
#define COURSE_PROJECT_SRC_CLI_COMMANDS_DISPLAY_COMMAND_HPP

#include "command.hpp"

namespace cli::commands {

class Display : public Command {
public:
    Display();
    std::string execute() override;
    CommandPtr clone() override;
}; // class Display

} // namespace cli::commands

#endif // COURSE_PROJECT_SRC_CLI_COMMANDS_DISPLAY_COMMAND_HPP