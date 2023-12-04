#ifndef COURSE_PROJECT_SRC_CLI_COMMANDS_ADD_COMMAND_HPP
#define COURSE_PROJECT_SRC_CLI_COMMANDS_ADD_COMMAND_HPP

#include <unordered_map>

#include "command.hpp"
#include "options_value.hpp"

namespace cli { 

class AddCommand : public ICommand {
public:
    AddCommand();
    std::string execute() override;
    ICommandPtr clone() override;

private:
    std::unordered_map<std::string, Value> options_;
}; // class AddCommand

} // namespace cli

#endif // COURSE_PROJECT_SRC_CLI_COMMANDS_ADD_COMMAND_HPP