#include "../../application.hpp"
#include "help_command.hpp"

namespace cli::cmd {

std::string Help::execute() {
    Application::instance().help();
    return "";
} 

CommandPtr Help::clone() {
    return std::make_unique<Help>(*this);
}

} // namespace cli:cmd