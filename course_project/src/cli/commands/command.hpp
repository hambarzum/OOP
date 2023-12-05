#ifndef COURSE_PROJECT_SRC_CLI_COMMANDS_COMMAND_HPP
#define COURSE_PROJECT_SRC_CLI_COMMANDS_COMMAND_HPP

#include <memory> // std::unique_ptr 
#include <string>
#include <unordered_map>

#include "options_value.hpp"

namespace cli {

class ICommand;
using ICommandPtr = std::unique_ptr<ICommand>;

/// TODO: use Value for registry value
using OptionRegistry = std::unordered_map<std::string, std::string>;

class ICommand {
public:
    virtual std::string execute() = 0;
    virtual void addOption(const OptionRegistry::value_type&) = 0;
    virtual ICommandPtr clone() = 0;

    virtual ~ICommand() = default;
}; // class Command

} // namespace cli

#endif // COURSE_PROJECT_SRC_CLI_COMMANDS_COMMAND_HPP