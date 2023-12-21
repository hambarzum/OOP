#include "../../application.hpp"
#include "quit_command.hpp"

namespace cli {

namespace cmd {

std::string Quit::execute() {
    Application::instance().quit();
    return "Quitting...\n";
}

CommandPtr Quit::clone() {
    return std::make_unique<Quit>(*this);
}

} // namespace cmd

}