#include "quit_command.hpp"

namespace cli {

namespace commands {

std::string Quit::execute() {
    /// TODO: implement without std::exit(0)
    std::exit(0); // TK: Simply call Application::Quit() which in its turn will tell controller to stop running loop

}

CommandPtr Quit::clone() {
    return std::make_unique<Quit>(*this);
}

} // namespace commands

}