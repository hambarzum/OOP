#ifndef COURSE_PROJECT_SRC_CLI_COMMANDS_ADD_SLIDE_COMMAND_HPP
#define COURSE_PROJECT_SRC_CLI_COMMANDS_ADD_SLIDE_COMMAND_HPP

#include "command.hpp"

namespace cli {

namespace commands {

class AddSlide : public Command {
public:
    std::string execute() override;
    CommandPtr clone() override;
}; // class AddSlide

} // namespace commands

} // namespace cli

#endif // COURSE_PROJECT_SRC_CLI_COMMANDS_ADD_SLIDE_COMMAND_HPP