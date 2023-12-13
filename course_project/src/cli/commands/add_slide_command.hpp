#ifndef COURSE_PROJECT_SRC_CLI_COMMANDS_ADD_SLIDE_COMMAND_HPP
#define COURSE_PROJECT_SRC_CLI_COMMANDS_ADD_SLIDE_COMMAND_HPP

#include "command.hpp"

namespace cli {

namespace cmd {

class AddSlide : public Command {
public:
    AddSlide();
    std::string execute() override;
    CommandPtr clone() override;
}; // class AddSlide

} // namespace cmd

} // namespace cli

#endif // COURSE_PROJECT_SRC_CLI_COMMANDS_ADD_SLIDE_COMMAND_HPP