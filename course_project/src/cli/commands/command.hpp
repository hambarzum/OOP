#ifndef COURSE_PROJECT_SRC_CLI_COMMANDS_COMMAND_HPP
#define COURSE_PROJECT_SRC_CLI_COMMANDS_COMMAND_HPP

#include <memory> // std::unique_ptr 
#include <unordered_map>

#include "options_value.hpp"

namespace cli {

class Command;
using CommandPtr = std::unique_ptr<Command>;

/// TODO: use Value for registry value
using OptionRegistry = std::unordered_map<std::string, Value>;

class Command {
public:
    Value getValue(const std::string&);
    void addOption(const OptionRegistry::value_type&);
    virtual std::string execute() = 0;
    virtual CommandPtr clone() = 0;

    virtual ~Command() = default;

protected:
    OptionRegistry options_;
}; // class Command

} // namespace cli

#endif // COURSE_PROJECT_SRC_CLI_COMMANDS_COMMAND_HPP