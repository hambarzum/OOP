#ifndef COURSE_PROJECT_SRC_CLI_COMMAND_CONTROLLER_HPP
#define COURSE_PROJECT_SRC_CLI_COMMAND_CONTROLLER_HPP

#include <iostream>
#include <string>

#include "../parsing/command_parser.hpp"
#include "../commands/command.hpp"

namespace cli {

class Controller {
public:
    Controller(std::istream&, std::ostream&);
    void run();

private:
    bool isActive_ = true;
    std::istream& input_;
    std::ostream& output_;
    CommandParser parser_;
}; // class Controller

} // namespace cli

#endif // COURSE_PROJECT_SRC_CLI_COMMAND_CONTROLLER_HPP