#ifndef COURSE_PROJECT_SRC_CLI_COMMANDS_PRINT_COMMAND_HPP
#define COURSE_PROJECT_SRC_CLI_COMMANDS_PRINT_COMMAND_HPP

#include "command.hpp"

namespace cli::cmd {

class Print : public Command {
public:
    Print();
    std::string execute() override;
    CommandPtr clone() override;
}; // class Print

} // namespace cli::cmd

#endif // COURSE_PROJECT_SRC_CLI_COMMANDS_PRINT_COMMAND_HPP