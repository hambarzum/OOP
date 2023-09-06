#include <iostream>
#include <memory> // std::unique_ptr

#include "controller/command_controller.hpp"

#include "commands/add_command.hpp"
#include "ui/iostream_user_interface.hpp" 
#include "command_parser/iostream_command_parser.hpp" 

int main() {
    CommandController controller{std::make_unique<IOStreamUserInterface>(), std::make_unique<IOStreamCommandParser>()};
    controller.exec();
    
    // std::shared_ptr<Base> ptr = std::make_shared<Base>();
}