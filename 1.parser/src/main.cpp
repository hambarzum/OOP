#include <iostream>
#include <memory> // std::unique_ptr
#include <sstream>

#include "controller/command_controller.hpp"
#include "ui/iostream_user_interface.hpp" 
#include "command_parser/iostream_command_parser.hpp" 

int main() {
    /// TODO: error handling for arguments
    CommandController controller{std::make_unique<IOStreamUserInterface>(), std::make_unique<IOStreamCommandParser>()};
    controller.exec();
}