#ifndef COURSE_PROJECT_SRC_CLI_COMMAND_CONTROLLER_HPP
#define COURSE_PROJECT_SRC_CLI_COMMAND_CONTROLLER_HPP

#include <string>

#include "../parsing/command_parser.hpp"
#include "../commands/command.hpp"
#include "../io/view.hpp"

namespace cli {

class Controller {
public:
    Controller(const View&);
    void run();

private:
    View view_;
    CommandParser parser_;
}; // class Controller

} // namespace cli

#endif // COURSE_PROJECT_SRC_CLI_COMMAND_CONTROLLER_HPP