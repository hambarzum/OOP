#include <iostream>
#include <sstream> // std::stringstream

#include "command_controller.hpp"

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
            CommandParser parser_;
            const auto command = parser_.parse(inputStream, registry_);
            const auto message = command->execute();
            output_ << message << '\n';
        } catch(const std::exception& e) {
            output_ << e.what() << '\n';
        }
    }
}

void Controller::endLoop() {
    isActive_ = false;
}

void Controller::output(const std::string& msg) {
    output_ << msg << '\n';
}

} // namespace cli