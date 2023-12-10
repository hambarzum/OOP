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
            // TK: you do not need parser memebr, you can make parser local variable here 
            const auto command = parser_.parse(inputStream);
            const auto message = command->execute();
            output_ << message << '\n';
        } catch(const std::exception& e) {
            output_ << e.what() << '\n';
        }
    }
}

} // namespace cli