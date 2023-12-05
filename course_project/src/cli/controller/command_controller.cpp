#include <sstream> // std::stringstream
#include <iostream>

#include "command_controller.hpp"

// #include "../commands/add_command.hpp"
// #include "../commands/quit_command.hpp"

// #include <stdexcept> // std::runtime_error

namespace cli {

Controller::Controller(const View& view)
    : view_{view}
{

}

void Controller::run() {
    while(isActive_) {
        const auto input = view_.getInput(); 
        /// TODO: handle throwing exceptions of invalid commands
        /// TODO: handle throwing exceptions of invalid arguments
        std::stringstream inputStream{input};
        try {
            const auto command = parser_.parse(inputStream);
            const auto message = command->execute();
            view_.displayOutput(message);
        } catch(const std::exception& e) {
            view_.displayOutput(e.what());
        }
    }
}

} // namespace cli