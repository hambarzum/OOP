#ifndef COURSE_PROJECT_SRC_CLI_COMMANDS_ADD_COMMAND_HPP
#define COURSE_PROJECT_SRC_CLI_COMMANDS_ADD_COMMAND_HPP

#include "../../model/items/item.hpp"
#include "command.hpp"
#include "options_value.hpp"

namespace cli { 

namespace cmd {

class AddItem : public Command {
public:
    AddItem();
    std::string execute() override;
    CommandPtr clone() override;

private:
    model::ItemBasePtr constructItem();
}; // class AddItem

} // namespace cmd

} // namespace cli

#endif // COURSE_PROJECT_SRC_CLI_COMMANDS_ADD_COMMAND_HPP