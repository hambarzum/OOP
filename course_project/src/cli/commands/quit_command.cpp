#include "../../application.hpp"
#include "quit_command.hpp"

namespace cli {

namespace cmd {

std::string Quit::execute() {
    Application::instance().quit();
    return "Quitting...\n"; // doesn't reach here
}

CommandPtr Quit::clone() {
    return std::make_unique<Quit>(*this);
}

} // namespace cmd

}