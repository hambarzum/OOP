#include <iostream>
#include <limits>
#include <sstream> // std::stringstream

#include "command_controller.hpp"

// #include "../commands/add_command.hpp"
// #include "../commands/quit_command.hpp"

// #include <stdexcept> // std::runtime_error

namespace cli {

Controller::Controller(std::istream& is, std::ostream& os)
    : input_{is}
    , output_{os}
{

}

void Controller::run() {
    while(isActive_) {
        std::string inputString;
        std::getline(input_, inputString);
        std::stringstream inputStream{inputString};

        try {
            const auto command = parser_.parse(inputStream);
            const auto message = command->execute();
            output_ << message << '\n';
        } catch(const std::exception& e) {
            output_ << e.what() << '\n';
        }
    }
}

} // namespace cli