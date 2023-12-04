#include <iostream>

#include "view.hpp"

namespace cli {

View::View(std::istream& is, std::ostream& os)
    : input_{is}
    , output_{os}
{

}

std::string View::getInput() {
    std::string inputString;
    std::getline(input_, inputString);
    return inputString;
}

void View::displayOutput(const std::string& msg) {
    output_ << msg << '\n';
}

} // namespace cli