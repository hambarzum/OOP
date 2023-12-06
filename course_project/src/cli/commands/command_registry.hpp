#ifndef COURSE_PROJECT_SRC_CLI_COMMANDS_COMMAND_REGISTRY_HPP
#define COURSE_PROJECT_SRC_CLI_COMMANDS_COMMAND_REGISTRY_HPP

#include <string>
#include <unordered_map>

#include "command.hpp"

namespace cli {

class CommandRegistry {
public:
    CommandRegistry();
    CommandPtr findCommand(const std::string&);

private:
    std::unordered_map<std::string, CommandPtr> registry_;
}; // class CommandRegistry

} // namespace cli

#endif // COURSE_PROJECT_SRC_CLI_COMMANDS_COMMAND_REGISTRY_HPP