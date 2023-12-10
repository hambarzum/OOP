#ifndef COURSE_PROJECT_SRC_CLI_COMMANDS_ADD_COMMAND_HPP
#define COURSE_PROJECT_SRC_CLI_COMMANDS_ADD_COMMAND_HPP

#include "../../model/items/item.hpp"
#include "command.hpp"
#include "options_value.hpp"

namespace cli { 

// TK: try to keep namespace names as short as possible, in this case instead of commands you  can use 'cmd'
namespace commands {

class AddItem : public Command {
public:
    AddItem();
    std::string execute() override;
    CommandPtr clone() override;

private:
    model::ItemPtr constructItem();
}; // class AddItem

} // namespace commands

} // namespace cli

#endif // COURSE_PROJECT_SRC_CLI_COMMANDS_ADD_COMMAND_HPP