#ifndef COURSE_PROJECT_SRC_CLI_COMMANDS_ADD_COMMAND_HPP
#define COURSE_PROJECT_SRC_CLI_COMMANDS_ADD_COMMAND_HPP

#include "../../model/items/item_base.hpp"
#include "command.hpp"
#include "options_value.hpp"

namespace cli { 

class AddCommand : public Command {
public:
    AddCommand();
    std::string execute() override;
    CommandPtr clone() override;

private:
    model::ItemBasePtr constructItem();
}; // class AddCommand

} // namespace cli

#endif // COURSE_PROJECT_SRC_CLI_COMMANDS_ADD_COMMAND_HPP