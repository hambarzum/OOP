#ifndef COMMANDS_HELP_COMMAND_HPP
#define COMMANDS_HELP_COMMAND_HPP

#include "command.hpp"

namespace cli::cmd {

class Help : public Command {
public:
    std::string execute() override;
    CommandPtr clone() override;

}; // class Help

} // namespace cli::cmd

#endif // COMMANDS_HELP_COMMAND_HPP